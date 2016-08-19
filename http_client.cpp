#include "http_client.h"
#include <iostream>
#include <curl/curl.h>

static int curl_writer(char *data, size_t size, size_t nmemb, std::string *buffer)
{
	int result = 0;
	if (buffer != NULL)
	{
		buffer->append(data, size * nmemb);
		result = size * nmemb;
	}
	return result;
}


http_client::http_client()
{
	m_curl = decltype(m_curl)(curl_easy_init(), [](CURL *curl)
	{
		if (curl) curl_easy_cleanup(curl);
	});

	if (m_curl)
	{
		curl_slist *list = nullptr; // Он удаляется автоматически?
		list = curl_slist_append(list, "Connection: keep-alive");
		list = curl_slist_append(list, "Accept: */*");

		curl_easy_setopt(m_curl.get(), CURLOPT_HTTPHEADER, list);
		curl_easy_setopt(m_curl.get(), CURLOPT_USERAGENT, "Niantic App");
		curl_easy_setopt(m_curl.get(), CURLOPT_COOKIEFILE, "pgo_cookie");
		curl_easy_setopt(m_curl.get(), CURLOPT_HEADER, 0L);
		curl_easy_setopt(m_curl.get(), CURLOPT_ENCODING, "gzip,deflate");
		curl_easy_setopt(m_curl.get(), CURLOPT_WRITEFUNCTION, curl_writer);
		curl_easy_setopt(m_curl.get(), CURLOPT_SSL_VERIFYPEER, false); // Не рекомендуется!!!
		curl_easy_setopt(m_curl.get(), CURLOPT_WRITEDATA, &m_write_buffer);
		static char errorBuffer[CURL_ERROR_SIZE];
		curl_easy_setopt(m_curl.get(), CURLOPT_ERRORBUFFER, errorBuffer);
	}
}


http_client::~http_client()
{
}

bool http_client::request(std::string url_data, std::string post_data)
{
	m_write_buffer.clear();
	curl_easy_setopt(m_curl.get(), CURLOPT_URL, url_data.c_str());
	curl_easy_setopt(m_curl.get(), CURLOPT_POSTFIELDS, post_data.c_str());
	curl_easy_setopt(m_curl.get(), CURLOPT_POSTFIELDSIZE, post_data.length());

	CURLcode res = curl_easy_perform(m_curl.get());

	if (false)
	{
		std::cout << "[ (request)" << std::endl << post_data << std::endl << "]" << std::endl;
		std::cout << "[ (response)" << std::endl << m_write_buffer << std::endl << "]" << std::endl;
	}

	return res == CURLE_OK;
}

std::string http_client::get_redirect_url()
{
	std::string url_data;
	char *location;
	auto res = curl_easy_getinfo(m_curl.get(), CURLINFO_REDIRECT_URL, &location);
	if (res == CURLE_OK && location)
	{
		url_data = std::string(location);
	}

	return url_data;
}

std::string http_client::get_response_data()
{
	return m_write_buffer;
}
