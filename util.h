#pragma once
#include <string>
#include <vector>
#include <stdint.h>
#include <boost/endian/arithmetic.hpp>

struct coordinate
{
	double latitude;
	double longitude;
	double altitude;
};

static std::string coordinate_pack(const coordinate &coord)
{
	struct conv1
	{
		union
		{
			struct
			{
				double l1;
				double l2;
				double l3;
			};
			struct
			{
				boost::endian::big_uint64_at bl1_r;
				boost::endian::big_uint64_at bl2_r;
				boost::endian::big_uint64_at bl3_r;
			};
		};
	} c1 = { coord.latitude, coord.longitude, coord.altitude };
	struct conv2
	{
		union
		{
			struct
			{
				uint64_t l1_r;
				uint64_t l2_r;
				uint64_t l3_r;
			};
			struct
			{
				int8_t raw[24];
			};
		};
	} c2 = { c1.bl1_r, c1.bl2_r, c1.bl3_r, };

	return{ std::begin(c2.raw), std::end(c2.raw) };
}


std::string parse_url(const std::string& url);

std::vector<uint64_t> GetNearbyCellIds(const coordinate &coord);

std::string encode_uint64_list(const std::vector<uint64_t> &data);

int64_t timestamp();

double distance_earth(double lat1d, double lon1d, double lat2d, double lon2d);
