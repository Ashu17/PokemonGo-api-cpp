#include <string>
#include <tuple>
#include <vector>
#include "util.h"
#include "pogo_proto.h"
#include <initializer_list>


std::string proto_initial_request(const std::string &token, const coordinate &coords, const std::initializer_list<pogo::RequestType> &requests);

std::string proto_request_build(const pogo::AuthTicket &auth, const coordinate &coords, const std::initializer_list<pogo::RequestType> &requests);

std::string proto_request_build(const pogo::AuthTicket &auth, const coordinate &coords, const std::initializer_list<std::tuple<pogo::RequestType, std::string>> &requests);

pogo::ResponseEnvelope proto_parse_response(const std::string &data);

template<class PayLoad>
PayLoad proto_parse_payload(const std::string &data)
{
	PayLoad payload;
	auto result = payload.ParseFromString(data);
	if (!result) throw std::exception("parse payload error");
	return payload;
}

