#include "proto_builder.h"
#include "gzip.h"
#include <iostream>
#include <boost/timer.hpp>
#include "xxHash/xxhash.h"

#include <windows.h>

std::string encrypt(const std::string &data)
{
	//TODO: use boost lib
	typedef int(*encrypt_h)(const unsigned char *input, size_t input_size,
		const unsigned char* iv, size_t iv_size,
		unsigned char* output, size_t * output_size);
	static HINSTANCE h_dll = LoadLibrary("encrypt.dll");
	static encrypt_h encrypt_ptr = ((encrypt_h)GetProcAddress(h_dll, "encrypt"));

	size_t output_size = 32 + data.size() + (256 - (data.size() % 256));
	unsigned char tmp[32] = {0};

	std::string output_data;
	output_data.resize(output_size);
	auto err = (*encrypt_ptr)(reinterpret_cast<const unsigned char *>(&data[0]), data.size(),
					&tmp[0], size_t(32), 
					reinterpret_cast<unsigned char *>(&output_data[0]), &output_size);
	if (err != 0) std::cout << "encrypt unknown16 error" << std::endl;
	output_data.resize(output_size);
	return output_data;
}

static boost::timer m_timer;

pogo::Unknown6 GenerateSignature(const pogo::AuthTicket &auth, const coordinate &coords, 
	const ::google::protobuf::RepeatedPtrField<pogo::Request> &requests)
{
	pogo::Signature sig;
	sig.set_timestamp_since_start(static_cast<uint64_t>(m_timer.elapsed() / 1000.0));
	sig.set_timestamp(timestamp());

	pogo::Signature_SensorInfo sensor_info;
	sensor_info.set_accel_normalized_x(0);
	sensor_info.set_accel_normalized_y(0);
	sensor_info.set_accel_normalized_z(0);
	sensor_info.set_timestamp_snapshot(static_cast<uint64_t>(m_timer.elapsed() / 1000.0) - 230);
	sensor_info.set_magnetometer_x(0);
	sensor_info.set_magnetometer_y(0);
	sensor_info.set_magnetometer_z(0);
	sensor_info.set_angle_normalized_x(0);
	sensor_info.set_angle_normalized_y(0);
	sensor_info.set_angle_normalized_z(0);
	sensor_info.set_accel_raw_x(0);
	sensor_info.set_accel_raw_y(0);
	sensor_info.set_accel_raw_z(0);
	sensor_info.set_gyroscope_raw_x(0);
	sensor_info.set_gyroscope_raw_y(0);
	sensor_info.set_gyroscope_raw_z(0);
	sensor_info.set_accelerometer_axes(3);
	*sig.mutable_sensor_info() = sensor_info;

	pogo::Signature_DeviceInfo device_info;
	device_info.set_device_id("");
	device_info.set_android_board_name("");
	device_info.set_android_bootloader("");
	device_info.set_device_brand("");
	device_info.set_device_model("");
	device_info.set_device_model_identifier("");
	device_info.set_device_model_boot("");
	device_info.set_hardware_manufacturer("");
	device_info.set_hardware_model("");
	device_info.set_firmware_brand("");
	device_info.set_firmware_tags("");
	device_info.set_firmware_type("");
	device_info.set_firmware_fingerprint("");
	*sig.mutable_device_info() = device_info;

	auto *location_fix = sig.add_location_fix();
	location_fix->set_provider("network");
	location_fix->set_altitude(static_cast<float>(coords.altitude));
	location_fix->set_latitude(static_cast<float>(coords.latitude));
	location_fix->set_longitude(static_cast<float>(coords.longitude));
	location_fix->set_timestamp_since_start(static_cast<uint64_t>(m_timer.elapsed() / 1000.0) - 200);
	location_fix->set_floor(3);
	location_fix->set_location_type(1);

	//Compute 10
	auto auth_data = auth.SerializeAsString();
	auto first_hash = XXH32(auth_data.c_str(), auth_data.size(), 0x1B845238);
	auto coord_data = coordinate_pack(coords);
	sig.set_location_hash1(XXH32(coord_data.c_str(), coord_data.size(), first_hash));
	//Compute 20
	sig.set_location_hash2(XXH32(coord_data.c_str(), coord_data.size(), 0x1B845238));
	//Compute 24
	auto seed = XXH64(auth_data.c_str(), auth_data.size(), 0x1B845238);
	for (auto &r : requests)
	{
		auto request_data = r.SerializeAsString();
		sig.add_request_hash(XXH64(request_data.c_str(), request_data.size(), seed));
	}

	sig.set_unknown22({ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 });

	pogo::Unknown6 val;
	val.set_request_type(6);
  val.mutable_unknown2()->set_encrypted_signature(encrypt(sig.SerializeAsString()));

	return val;
}

std::string proto_initial_request(const std::string &token, const coordinate &coords, const std::initializer_list<pogo::RequestType> &requests)
{
	m_timer.restart();

	pogo::RequestEnvelope request;
	request.set_status_code(2);
	request.set_request_id(1469378659230941192);
	request.set_altitude(coords.altitude);
	request.set_latitude(coords.latitude);
	request.set_longitude(coords.longitude);
	request.set_unknown12(989);

	request.mutable_auth_info()->set_provider("ptc");
	request.mutable_auth_info()->mutable_token()->set_contents(token);
	request.mutable_auth_info()->mutable_token()->set_unknown2(14);

	for (auto i : requests)
	{
		auto r = request.add_requests();
		r->set_request_type(i);
	}

	std::string data;
	request.SerializeToString(&data);
	return data;
}

std::string proto_request_build(const pogo::AuthTicket &auth, const coordinate &coords, const std::initializer_list<pogo::RequestType> &requests)
{
	pogo::RequestEnvelope request;
	request.set_status_code(2);
	request.set_request_id(1469378659230941192);
	request.set_altitude(coords.altitude);
	request.set_latitude(coords.latitude);
	request.set_longitude(coords.longitude);
	request.set_allocated_auth_ticket(new pogo::AuthTicket(auth));

	request.set_unknown12(989);

	for (auto i : requests)
	{
		auto r = request.add_requests();
		r->set_request_type(i);
	}

	*request.mutable_unknown6() = GenerateSignature(auth, coords, request.requests());

	std::string data;
	request.SerializeToString(&data);
	return data;
}

std::string proto_request_build(const pogo::AuthTicket &auth, const coordinate &coords,
	const std::initializer_list<std::tuple<pogo::RequestType, std::string>> &requests)
{
	pogo::RequestEnvelope request;
	request.set_allocated_auth_ticket(new pogo::AuthTicket(auth));
	request.set_altitude(coords.altitude);
	request.set_latitude(coords.latitude);
	request.set_longitude(coords.longitude);
	request.set_request_id(1469378659230941192);
	request.set_status_code(2);
	request.set_unknown12(989);

	for (auto i : requests)
	{
		auto r = request.add_requests();
		r->set_request_type(std::get<0>(i));
		if (!std::get<1>(i).empty())
		{
			r->set_request_message(std::get<1>(i));
		}
	}

	*request.mutable_unknown6() = GenerateSignature(auth, coords, request.requests());

	std::string data;
	request.SerializeToString(&data);
	return data;
}


pogo::ResponseEnvelope proto_parse_response(const std::string &data)
{
	pogo::ResponseEnvelope response;
	std::string unzip_data;
	bool result;
	if (gzip::uncompress(data, unzip_data))
	{
		result = response.ParseFromString(unzip_data);
	}
	else
	{
		result = response.ParseFromString(data);
	}
	 
	if (!result) throw std::exception("parse response error");
	return response;
}

