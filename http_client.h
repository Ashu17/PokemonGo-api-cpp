#pragma once
#include <memory>
#include <functional>
#include <string>

typedef struct Curl_easy CURL;

class http_client
{
public:
	http_client();
	~http_client();

	bool request(std::string url_data, std::string post_data);

	std::string get_redirect_url();

	std::string get_response_data();

private:
	std::unique_ptr<CURL, std::function<void(CURL *)>> m_curl;
	std::string m_write_buffer;
};



