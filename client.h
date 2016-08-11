#pragma once

#ifndef STL_MSVC
#define STL_MSVC
#endif
#ifndef _TIMESPEC_DEFINED
#define _TIMESPEC_DEFINED
#endif
#ifndef _MBCS
#define _MBCS
#endif
#ifndef CURL_STATICLIB
#define CURL_STATICLIB
#endif
#ifndef _SCL_SECURE_NO_WARNINGS
#define _SCL_SECURE_NO_WARNINGS
#endif

#pragma comment( lib, "Ws2_32.lib" )
#pragma comment( lib, "WLDAP32.lib" )
#pragma comment( lib, "zlibstaticd.lib" )
#pragma comment( lib, "pogo_api_cpp.lib" )
#pragma comment( lib, "libprotocd.lib" )
#pragma comment( lib, "libprotobufd.lib" )
#pragma comment( lib, "libprotobuf-lited.lib" )
#pragma comment( lib, "ssleay32.lib" )
#pragma comment( lib, "libeay32.lib" )
#pragma comment( lib, "libcurld.lib" )


#include <mutex>
#include "pogo_proto.h"
#include "util.h"
#include <memory>

class http_client;

class client
{
public:
	client(const coordinate &coord);
	~client();

	void authorize(const std::string &user, const std::string &pass);

	void set_server();

	pogo::GetPlayerResponse get_player();

	pogo::DownloadSettingsResponse get_settings();

	pogo::GetInventoryResponse get_inventory();

	pogo::GetMapObjectsResponse get_map_objects();

	pogo::CatchPokemonResponse catch_pokemon(uint64_t encounter_id, std::string spawn_point_guid, pogo::ItemId pokeball_item_id, double normalized_recticle_size = 1.950, double spin_modifier = 1, double normalized_hit_pos = 1);

	pogo::EncounterResponse encounter_pokemon(uint64_t encounter_id, std::string spawn_point_guid);

	pogo::FortSearchResponse search_fort(std::string fort_id, double fort_lat, double fort_lng);

	pogo::LevelUpRewardsResponse get_level_up_rewards(int level);

	pogo::PlayerUpdateResponse update_position();

	pogo::RecycleInventoryItemResponse recycle_item(pogo::ItemId itemId, int amount);

	const coordinate &get_position() const;

	void set_position(const coordinate &coord);

private:
	std::unique_ptr<http_client> m_http_client;
	std::string m_token;
	std::string m_api_url;
	pogo::AuthTicket m_auth_ticket;
	coordinate m_coordinate;

	mutable std::mutex m_mutex;

private:
	std::string request_payload(const std::string &post_data);

};

