// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Inventory/Item/ItemId.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Inventory/Item/ItemId.pb.h"

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
namespace Inventory {
namespace Item {

namespace {

const ::google::protobuf::EnumDescriptor* ItemId_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fInventory_2fItem_2fItemId_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fInventory_2fItem_2fItemId_2eproto() {
  protobuf_AddDesc_POGOProtos_2fInventory_2fItem_2fItemId_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Inventory/Item/ItemId.proto");
  GOOGLE_CHECK(file != NULL);
  ItemId_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fInventory_2fItem_2fItemId_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fInventory_2fItem_2fItemId_2eproto() {
}

void protobuf_AddDesc_POGOProtos_2fInventory_2fItem_2fItemId_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fInventory_2fItem_2fItemId_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n&POGOProtos/Inventory/Item/ItemId.proto"
    "\022\031POGOProtos.Inventory.Item*\307\005\n\006ItemId\022\020"
    "\n\014ITEM_UNKNOWN\020\000\022\022\n\016ITEM_POKE_BALL\020\001\022\023\n\017"
    "ITEM_GREAT_BALL\020\002\022\023\n\017ITEM_ULTRA_BALL\020\003\022\024"
    "\n\020ITEM_MASTER_BALL\020\004\022\017\n\013ITEM_POTION\020e\022\025\n"
    "\021ITEM_SUPER_POTION\020f\022\025\n\021ITEM_HYPER_POTIO"
    "N\020g\022\023\n\017ITEM_MAX_POTION\020h\022\020\n\013ITEM_REVIVE\020"
    "\311\001\022\024\n\017ITEM_MAX_REVIVE\020\312\001\022\023\n\016ITEM_LUCKY_E"
    "GG\020\255\002\022\032\n\025ITEM_INCENSE_ORDINARY\020\221\003\022\027\n\022ITE"
    "M_INCENSE_SPICY\020\222\003\022\026\n\021ITEM_INCENSE_COOL\020"
    "\223\003\022\030\n\023ITEM_INCENSE_FLORAL\020\224\003\022\023\n\016ITEM_TRO"
    "Y_DISK\020\365\003\022\022\n\rITEM_X_ATTACK\020\332\004\022\023\n\016ITEM_X_"
    "DEFENSE\020\333\004\022\023\n\016ITEM_X_MIRACLE\020\334\004\022\024\n\017ITEM_"
    "RAZZ_BERRY\020\275\005\022\024\n\017ITEM_BLUK_BERRY\020\276\005\022\025\n\020I"
    "TEM_NANAB_BERRY\020\277\005\022\025\n\020ITEM_WEPAR_BERRY\020\300"
    "\005\022\025\n\020ITEM_PINAP_BERRY\020\301\005\022\030\n\023ITEM_SPECIAL"
    "_CAMERA\020\241\006\022#\n\036ITEM_INCUBATOR_BASIC_UNLIM"
    "ITED\020\205\007\022\031\n\024ITEM_INCUBATOR_BASIC\020\206\007\022!\n\034IT"
    "EM_POKEMON_STORAGE_UPGRADE\020\351\007\022\036\n\031ITEM_IT"
    "EM_STORAGE_UPGRADE\020\352\007b\006proto3", 789);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Inventory/Item/ItemId.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fInventory_2fItem_2fItemId_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fInventory_2fItem_2fItemId_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fInventory_2fItem_2fItemId_2eproto() {
    protobuf_AddDesc_POGOProtos_2fInventory_2fItem_2fItemId_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fInventory_2fItem_2fItemId_2eproto_;
const ::google::protobuf::EnumDescriptor* ItemId_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ItemId_descriptor_;
}
bool ItemId_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 101:
    case 102:
    case 103:
    case 104:
    case 201:
    case 202:
    case 301:
    case 401:
    case 402:
    case 403:
    case 404:
    case 501:
    case 602:
    case 603:
    case 604:
    case 701:
    case 702:
    case 703:
    case 704:
    case 705:
    case 801:
    case 901:
    case 902:
    case 1001:
    case 1002:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Item
}  // namespace Inventory
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
