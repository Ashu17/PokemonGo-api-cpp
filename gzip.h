#pragma once
#include <string>

// https://github.com/cralston0/gzip-encoding/tree/master/cpp/GZipCodec

namespace gzip
{
	bool compress(const std::string& data, std::string& compressedData, int level = -1);

	bool uncompress(const std::string& compressedData, std::string& data);
}
