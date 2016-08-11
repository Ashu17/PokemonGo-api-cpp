#include "util.h"
#include <boost/regex.hpp>
#include "s2/s2cellid.h"
#include "s2/s2latlng.h"
#include <algorithm>
#include <chrono>

std::string parse_url(const std::string& url)
{
	boost::regex ex("(http|https)://([^/ :]+):?([^/ ]*)(/?[^ #?]*)\\x3f?([^ #]*)#?([^ ]*)");
	boost::cmatch what;
	std::string query;
	if (boost::regex_match(url.c_str(), what, ex))
	{
		std::string protocol = std::string(what[1].first, what[1].second);
		std::string domain = std::string(what[2].first, what[2].second);
		std::string port = std::string(what[3].first, what[3].second);
		std::string path = std::string(what[4].first, what[4].second);
		query = std::string(what[5].first, what[5].second);
	}

	std::string ticket;
	boost::regex q(R"(ticket=?([^ ]*))");
	if (boost::regex_match(query.c_str(), what, q))
	{
		ticket = std::string(what[1].first, what[1].second);
	}

	return ticket;
}


static S2CellId get_next(const S2CellId &cell_id, int depth)
{
	if (depth < 0)
		return cell_id;

	depth--;

	return get_next(cell_id.next(), depth);
}

static S2CellId get_prev(const S2CellId &cell_id, int depth)
{
	if (depth < 0)
		return cell_id;

	depth--;

	return get_prev(cell_id.prev(), depth);
}

std::vector<uint64_t> GetNearbyCellIds(const coordinate &coord)
{
	std::vector<S2CellId> nearby_cell_id;
	auto cell_id = S2CellId::FromLatLng(S2LatLng::FromDegrees(coord.latitude, coord.longitude))
		.parent().parent().parent().parent().parent()
		.parent().parent().parent().parent().parent()
		.parent().parent().parent().parent().parent();

	nearby_cell_id.push_back(cell_id);
	
	std::vector<S2CellId> neighbours;
	cell_id.AppendAllNeighbors(15, &neighbours);

	for (const auto &n : neighbours)
	{
		S2CellId neighbors[4];
		n.GetEdgeNeighbors(neighbors);

		nearby_cell_id.push_back(n);
		nearby_cell_id.push_back(neighbors[0]);
		nearby_cell_id.push_back(neighbors[1]);
		nearby_cell_id.push_back(neighbors[2]);
		nearby_cell_id.push_back(neighbors[3]);
	}

	std::vector<uint64_t> out;
	for (auto &i : nearby_cell_id)
	{
		out.push_back(i.id());
	}

	std::sort(out.begin(), out.end());
	out.erase(std::unique(out.begin(), out.end()), out.end());

	return out;
}

// see https://techoverflow.net/blog/2013/01/25/efficiently-encoding-variable-length-integers-in-cc/
template<typename T>
size_t encodeVarint(T value, char* output) 
{
	size_t outputSize = 0;
	//While more than 7 bits of data are left, occupy the last output byte
	// and set the next byte flag
	while (value > 127) 
	{
		//|128: Set the next byte flag
		output[outputSize] = ((char)(value & 127)) | 128;
		//Remove the seven bits we just wrote
		value >>= 7;
		outputSize++;
	}
	output[outputSize++] = ((char)value) & 127;
	return outputSize;
}

std::string encode_uint64_list(const std::vector<uint64_t> &data)
{
	std::string out;
	std::string raw;
	raw.resize(10);
	for (auto &i : data)
	{
		raw.resize(10);
		auto size = encodeVarint(i, &raw[0]);
		raw.resize(size);

		out += raw;
	}
	return out;
}

int64_t timestamp()
{
	return std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
}


// http://stackoverflow.com/questions/10198985/calculating-the-distance-between-2-latitudes-and-longitudes-that-are-saved-in-a
#define pi 3.14159265358979323846
#define earthRadiusKm 6371.0

// This function converts decimal degrees to radians
double deg2rad(double deg) {
	return (deg * pi / 180);
}

//  This function converts radians to decimal degrees
double rad2deg(double rad) {
	return (rad * 180 / pi);
}

/**
* Returns the distance between two points on the Earth.
* Direct translation from http://en.wikipedia.org/wiki/Haversine_formula
* @param lat1d Latitude of the first point in degrees
* @param lon1d Longitude of the first point in degrees
* @param lat2d Latitude of the second point in degrees
* @param lon2d Longitude of the second point in degrees
* @return The distance between the two points in kilometers
*/
double distance_earth(double lat1d, double lon1d, double lat2d, double lon2d) 
{
	double lat1r, lon1r, lat2r, lon2r, u, v;
	lat1r = deg2rad(lat1d);
	lon1r = deg2rad(lon1d);
	lat2r = deg2rad(lat2d);
	lon2r = deg2rad(lon2d);
	u = sin((lat2r - lat1r) / 2);
	v = sin((lon2r - lon1r) / 2);
	return 2.0 * earthRadiusKm * asin(sqrt(u * u + cos(lat1r) * cos(lat2r) * v * v));
}
