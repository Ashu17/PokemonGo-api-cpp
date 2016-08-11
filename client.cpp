#include "client.h"
#include <rapidjson/document.h>
#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>
#include <iostream>
#include "util.h"
#include <boost/regex.hpp>
#include "proto_builder.h"
#include "http_client.h"

client::client(const coordinate &coord)
{
	set_position(coord);
	m_http_client = std::move(std::make_unique<decltype(m_http_client)::element_type>());
}


client::~client()
{
}

void client::authorize(const std::string &user, const std::string &pass)
{
	m_http_client->request("https://sso.pokemon.com/sso/login", "service=https://sso.pokemon.com/sso/oauth2.0/callbackAuthorize");
	auto response_data = m_http_client->get_response_data();

	rapidjson::Document docrx;
	docrx.Parse(response_data.c_str());

	struct
	{
		std::string lt;
		std::string execution;
		std::string _eventId;
		std::string username;
		std::string password;
	} sessionData;

	if (docrx.IsObject())
	{
		if (docrx.HasMember("lt"))
		{
			rapidjson::Value &val = docrx["lt"];
			sessionData.lt = val.GetString();
		}
		if (docrx.HasMember("execution"))
		{
			rapidjson::Value &val = docrx["execution"];
			sessionData.execution = val.GetString();
		}
	}

	sessionData._eventId = "submit";
	sessionData.username = user;
	sessionData.password = pass;

	std::string post_data;

	post_data  = "service=https://sso.pokemon.com/sso/oauth2.0/callbackAuthorize";
	post_data += "&lt=" + sessionData.lt;
	post_data += "&execution=" + sessionData.execution;
	post_data += "&_eventId=" + sessionData._eventId;
	post_data += "&username=" + sessionData.username;
	post_data += "&password=" + sessionData.password;

	m_http_client->request("https://sso.pokemon.com/sso/login", post_data);
	auto redirect_url = m_http_client->get_redirect_url();

	post_data  = "&client_id=mobile-app_pokemon-go";
	post_data += "&redirect_uri=https://www.nianticlabs.com/pokemongo/error";
	post_data += "&client_secret=w8ScCUXJQc6kXKw8FiOhd8Fixzht18Dq3PEVkUCP5ZPxtgyWsbTvWHFLm2wNY0JR";
	post_data += "&grant_type=refresh_token";
	post_data += "&code=" + parse_url(redirect_url);

	m_http_client->request("https://sso.pokemon.com/sso/oauth2.0/accessToken", post_data);
	std::string token_data = m_http_client->get_response_data();

	boost::regex rx(R"(access_token=?([^ &]*)&expires=([^ ]*))");
	boost::cmatch what;
	std::string access_token;
	if (boost::regex_match(token_data.c_str(), what, rx))
	{
		m_token = std::string(what[1].first, what[1].second);
		std::string expires = std::string(what[2].first, what[2].second);
	}
}

void client::set_server()
{
	std::string post_data = proto_initial_request(m_token, m_coordinate, 
	{
		pogo::GET_PLAYER,
		pogo::GET_HATCHED_EGGS,
		pogo::GET_INVENTORY,
		pogo::CHECK_AWARDED_BADGES,
		pogo::DOWNLOAD_SETTINGS
	});
	m_http_client->request("https://pgorelease.nianticlabs.com/plfe/rpc", post_data);
	auto proto_response_data = m_http_client->get_response_data();
	auto response = proto_parse_response(proto_response_data);

	m_auth_ticket = response.auth_ticket();
	m_api_url = "https://" + response.api_url() + "/rpc";
}

pogo::GetPlayerResponse client::get_player()
{
	pogo::DownloadSettingsMessage download_settings;
	download_settings.set_hash("05daf51635c82611d1aac95c0b051d3ec088a930");

	std::string post_data = proto_request_build(m_auth_ticket, m_coordinate, 
	{ {pogo::GET_PLAYER, download_settings.SerializeAsString()} });

	auto payload_data = request_payload(post_data);
	auto payload = proto_parse_payload<pogo::GetPlayerResponse>(payload_data);

	return payload;
}

pogo::DownloadSettingsResponse client::get_settings()
{
	std::string post_data = proto_request_build(m_auth_ticket, m_coordinate, { pogo::DOWNLOAD_SETTINGS });
	auto payload_data = request_payload(post_data);
	auto payload = proto_parse_payload<pogo::DownloadSettingsResponse>(payload_data);

	return payload;
}

pogo::GetInventoryResponse client::get_inventory()
{
	std::string post_data = proto_request_build(m_auth_ticket, m_coordinate, { pogo::GET_INVENTORY });
	auto payload_data = request_payload(post_data);
	auto payload = proto_parse_payload<pogo::GetInventoryResponse>(payload_data);

	return payload;
}

pogo::GetMapObjectsResponse client::get_map_objects()
{
	pogo::GetMapObjectsMessage map_objects;

	auto cell_ids = GetNearbyCellIds(m_coordinate);
	for (const auto &cid : cell_ids)
	{
		map_objects.add_cell_id(cid);
	}
	map_objects.set_latitude(m_coordinate.latitude);
	map_objects.set_longitude(m_coordinate.longitude);
	
	for (size_t i = 0; i < 21; ++i)
	{
		map_objects.add_since_timestamp_ms(0);
	}

	pogo::GetInventoryMessage inventory;
	inventory.set_last_timestamp_ms(timestamp());

	pogo::DownloadSettingsMessage settings;
	settings.set_hash("4a2e9bc330dae60e7b74fc85b98868ab4700802e");

	std::string post_data = proto_request_build(m_auth_ticket, m_coordinate,
	{
		{ pogo::GET_MAP_OBJECTS, map_objects.SerializeAsString() },
		{ pogo::GET_HATCHED_EGGS, "" },
		{ pogo::GET_INVENTORY, inventory.SerializeAsString() },
		{ pogo::CHECK_AWARDED_BADGES, "" },
		{ pogo::DOWNLOAD_SETTINGS, settings.SerializeAsString() }
	});

	auto payload_data = request_payload(post_data);
	auto payload = proto_parse_payload<pogo::GetMapObjectsResponse>(payload_data);

	return payload;
}

pogo::CatchPokemonResponse client::catch_pokemon(uint64_t encounterId, std::string spawnPointGuid, pogo::ItemId pokeballItemId, double normalizedRecticleSize /*= 1.950*/, double spinModifier /*= 1*/, double normalizedHitPos /*= 1*/)
{
	pogo::CatchPokemonMessage catch_pokemon;

	catch_pokemon.set_encounter_id(encounterId);
	catch_pokemon.set_pokeball(pokeballItemId);
	catch_pokemon.set_spawn_point_id(spawnPointGuid);
	catch_pokemon.set_hit_pokemon(true);
	catch_pokemon.set_normalized_reticle_size(normalizedRecticleSize);
	catch_pokemon.set_normalized_hit_position(normalizedHitPos);
	catch_pokemon.set_spin_modifier(spinModifier);

	std::string post_data = proto_request_build(m_auth_ticket, m_coordinate,
	{
		{ pogo::CATCH_POKEMON, catch_pokemon.SerializeAsString() },
	});

	auto payload_data = request_payload(post_data);
	auto payload = proto_parse_payload<pogo::CatchPokemonResponse>(payload_data);

	return payload;
}

pogo::EncounterResponse client::encounter_pokemon(uint64_t encounterId, std::string spawnPointGuid)
{
	pogo::EncounterMessage encounter;
	encounter.set_encounter_id(encounterId);
	encounter.set_spawn_point_id(spawnPointGuid);
	encounter.set_player_latitude(m_coordinate.latitude);
	encounter.set_player_longitude(m_coordinate.longitude);

	std::string post_data = proto_request_build(m_auth_ticket, m_coordinate,
	{
		{ pogo::ENCOUNTER, encounter.SerializeAsString() },
	});

	auto payload_data = request_payload(post_data);
	auto payload = proto_parse_payload<pogo::EncounterResponse>(payload_data);

	return payload;
}

pogo::FortSearchResponse client::search_fort(std::string fortId, double fortLat, double fortLng)
{
	pogo::FortSearchMessage fort_search;
	fort_search.set_fort_id(fortId);
	fort_search.set_fort_latitude(fortLat);
	fort_search.set_fort_longitude(fortLng);
	fort_search.set_player_latitude(m_coordinate.latitude);
	fort_search.set_player_longitude(m_coordinate.longitude);

	std::string post_data = proto_request_build(m_auth_ticket, m_coordinate,
	{
		{ pogo::FORT_SEARCH, fort_search.SerializeAsString() },
	});

	auto payload_data = request_payload(post_data);
	auto payload = proto_parse_payload<pogo::FortSearchResponse>(payload_data);

	return payload;
}

pogo::LevelUpRewardsResponse client::get_level_up_rewards(int level)
{
	pogo::LevelUpRewardsMessage level_up;
	level_up.set_level(level);

	std::string post_data = proto_request_build(m_auth_ticket, m_coordinate,
	{
		{ pogo::LEVEL_UP_REWARDS, level_up.SerializeAsString() },
	});

	auto payload_data = request_payload(post_data);
	auto payload = proto_parse_payload<pogo::LevelUpRewardsResponse>(payload_data);

	return payload;
}

pogo::PlayerUpdateResponse client::update_position()
{
	pogo::PlayerUpdateMessage player_update;
	player_update.set_latitude(m_coordinate.latitude);
	player_update.set_longitude(m_coordinate.longitude);

	std::string post_data = proto_request_build(m_auth_ticket, m_coordinate,
	{
		{ pogo::PLAYER_UPDATE, player_update.SerializeAsString() },
	});

	auto payload_data = request_payload(post_data);
	auto payload = proto_parse_payload<pogo::PlayerUpdateResponse>(payload_data);

	return payload;
}


pogo::RecycleInventoryItemResponse client::recycle_item(pogo::ItemId itemId, int amount)
{
	pogo::RecycleInventoryItemMessage recycle_item;
	recycle_item.set_item_id(itemId);
	recycle_item.set_count(amount);

	std::string post_data = proto_request_build(m_auth_ticket, m_coordinate,
	{
		{ pogo::RECYCLE_INVENTORY_ITEM, recycle_item.SerializeAsString() },
	});

	auto payload_data = request_payload(post_data);
	auto payload = proto_parse_payload<pogo::RecycleInventoryItemResponse>(payload_data);

	return payload;
}

const coordinate & client::get_position() const
{
	std::lock_guard<std::mutex> lock(m_mutex);
	return m_coordinate;
}

void client::set_position(const coordinate &coord)
{
	std::lock_guard<std::mutex> lock(m_mutex);
	m_coordinate = coord;
}

std::string client::request_payload(const std::string &post_data)
{
	pogo::ResponseEnvelope response;

	size_t attempts = 30;
	do
	{
		m_http_client->request(m_api_url, post_data);
		auto proto_response_data = m_http_client->get_response_data();
		response = proto_parse_response(proto_response_data);
		const auto & error = response.error();
		if (!error.empty())	throw std::exception((std::string("request payload error") + error).c_str());
		--attempts;
	} while (!response.returns_size() && attempts);

	if (attempts == 0) throw std::exception("request payload attempts error");

	return response.returns_size() > 0 ? response.returns(0) : "";
}




