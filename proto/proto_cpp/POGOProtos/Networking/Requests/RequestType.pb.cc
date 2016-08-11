// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/RequestType.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Requests/RequestType.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Requests {

namespace {

const ::google::protobuf::EnumDescriptor* RequestType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fRequestType_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fRequestType_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fRequestType_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Requests/RequestType.proto");
  GOOGLE_CHECK(file != NULL);
  RequestType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fRequestType_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fRequestType_2eproto() {
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fRequestType_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fRequestType_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n0POGOProtos/Networking/Requests/Request"
    "Type.proto\022\036POGOProtos.Networking.Reques"
    "ts*\301\014\n\013RequestType\022\020\n\014METHOD_UNSET\020\000\022\021\n\r"
    "PLAYER_UPDATE\020\001\022\016\n\nGET_PLAYER\020\002\022\021\n\rGET_I"
    "NVENTORY\020\004\022\025\n\021DOWNLOAD_SETTINGS\020\005\022\033\n\027DOW"
    "NLOAD_ITEM_TEMPLATES\020\006\022\"\n\036DOWNLOAD_REMOT"
    "E_CONFIG_VERSION\020\007\022\017\n\013FORT_SEARCH\020e\022\r\n\tE"
    "NCOUNTER\020f\022\021\n\rCATCH_POKEMON\020g\022\020\n\014FORT_DE"
    "TAILS\020h\022\014\n\010ITEM_USE\020i\022\023\n\017GET_MAP_OBJECTS"
    "\020j\022\027\n\023FORT_DEPLOY_POKEMON\020n\022\027\n\023FORT_RECA"
    "LL_POKEMON\020o\022\023\n\017RELEASE_POKEMON\020p\022\023\n\017USE"
    "_ITEM_POTION\020q\022\024\n\020USE_ITEM_CAPTURE\020r\022\021\n\r"
    "USE_ITEM_FLEE\020s\022\023\n\017USE_ITEM_REVIVE\020t\022\020\n\014"
    "TRADE_SEARCH\020u\022\017\n\013TRADE_OFFER\020v\022\022\n\016TRADE"
    "_RESPONSE\020w\022\020\n\014TRADE_RESULT\020x\022\026\n\022GET_PLA"
    "YER_PROFILE\020y\022\021\n\rGET_ITEM_PACK\020z\022\021\n\rBUY_"
    "ITEM_PACK\020{\022\020\n\014BUY_GEM_PACK\020|\022\022\n\016EVOLVE_"
    "POKEMON\020}\022\024\n\020GET_HATCHED_EGGS\020~\022\037\n\033ENCOU"
    "NTER_TUTORIAL_COMPLETE\020\177\022\025\n\020LEVEL_UP_REW"
    "ARDS\020\200\001\022\031\n\024CHECK_AWARDED_BADGES\020\201\001\022\021\n\014US"
    "E_ITEM_GYM\020\205\001\022\024\n\017GET_GYM_DETAILS\020\206\001\022\025\n\020S"
    "TART_GYM_BATTLE\020\207\001\022\017\n\nATTACK_GYM\020\210\001\022\033\n\026R"
    "ECYCLE_INVENTORY_ITEM\020\211\001\022\030\n\023COLLECT_DAIL"
    "Y_BONUS\020\212\001\022\026\n\021USE_ITEM_XP_BOOST\020\213\001\022\033\n\026US"
    "E_ITEM_EGG_INCUBATOR\020\214\001\022\020\n\013USE_INCENSE\020\215"
    "\001\022\030\n\023GET_INCENSE_POKEMON\020\216\001\022\026\n\021INCENSE_E"
    "NCOUNTER\020\217\001\022\026\n\021ADD_FORT_MODIFIER\020\220\001\022\023\n\016D"
    "ISK_ENCOUNTER\020\221\001\022!\n\034COLLECT_DAILY_DEFEND"
    "ER_BONUS\020\222\001\022\024\n\017UPGRADE_POKEMON\020\223\001\022\031\n\024SET"
    "_FAVORITE_POKEMON\020\224\001\022\025\n\020NICKNAME_POKEMON"
    "\020\225\001\022\020\n\013EQUIP_BADGE\020\226\001\022\031\n\024SET_CONTACT_SET"
    "TINGS\020\227\001\022\025\n\020GET_ASSET_DIGEST\020\254\002\022\026\n\021GET_D"
    "OWNLOAD_URLS\020\255\002\022\034\n\027GET_SUGGESTED_CODENAM"
    "ES\020\221\003\022\035\n\030CHECK_CODENAME_AVAILABLE\020\222\003\022\023\n\016"
    "CLAIM_CODENAME\020\223\003\022\017\n\nSET_AVATAR\020\224\003\022\024\n\017SE"
    "T_PLAYER_TEAM\020\225\003\022\033\n\026MARK_TUTORIAL_COMPLE"
    "TE\020\226\003\022\026\n\021LOAD_SPAWN_POINTS\020\364\003\022\t\n\004ECHO\020\232\005"
    "\022\033\n\026DEBUG_UPDATE_INVENTORY\020\274\005\022\030\n\023DEBUG_D"
    "ELETE_PLAYER\020\275\005\022\027\n\022SFIDA_REGISTRATION\020\240\006"
    "\022\025\n\020SFIDA_ACTION_LOG\020\241\006\022\030\n\023SFIDA_CERTIFI"
    "CATION\020\242\006\022\021\n\014SFIDA_UPDATE\020\243\006\022\021\n\014SFIDA_AC"
    "TION\020\244\006\022\021\n\014SFIDA_DOWSER\020\245\006\022\022\n\rSFIDA_CAPT"
    "URE\020\246\006b\006proto3", 1694);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Requests/RequestType.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fRequestType_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fRequestType_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fRequestType_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fRequestType_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fRequests_2fRequestType_2eproto_;
const ::google::protobuf::EnumDescriptor* RequestType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RequestType_descriptor_;
}
bool RequestType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case 128:
    case 129:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
    case 141:
    case 142:
    case 143:
    case 144:
    case 145:
    case 146:
    case 147:
    case 148:
    case 149:
    case 150:
    case 151:
    case 300:
    case 301:
    case 401:
    case 402:
    case 403:
    case 404:
    case 405:
    case 406:
    case 500:
    case 666:
    case 700:
    case 701:
    case 800:
    case 801:
    case 802:
    case 803:
    case 804:
    case 805:
    case 806:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
