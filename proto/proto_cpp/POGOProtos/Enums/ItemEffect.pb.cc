// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Enums/ItemEffect.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Enums/ItemEffect.pb.h"

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
namespace Enums {

namespace {

const ::google::protobuf::EnumDescriptor* ItemEffect_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fEnums_2fItemEffect_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fEnums_2fItemEffect_2eproto() {
  protobuf_AddDesc_POGOProtos_2fEnums_2fItemEffect_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Enums/ItemEffect.proto");
  GOOGLE_CHECK(file != NULL);
  ItemEffect_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fEnums_2fItemEffect_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fEnums_2fItemEffect_2eproto() {
}

void protobuf_AddDesc_POGOProtos_2fEnums_2fItemEffect_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fEnums_2fItemEffect_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n!POGOProtos/Enums/ItemEffect.proto\022\020POG"
    "OProtos.Enums*\230\004\n\nItemEffect\022\024\n\020ITEM_EFF"
    "ECT_NONE\020\000\022\034\n\027ITEM_EFFECT_CAP_NO_FLEE\020\350\007"
    "\022 \n\033ITEM_EFFECT_CAP_NO_MOVEMENT\020\352\007\022\036\n\031IT"
    "EM_EFFECT_CAP_NO_THREAT\020\353\007\022\037\n\032ITEM_EFFEC"
    "T_CAP_TARGET_MAX\020\354\007\022 \n\033ITEM_EFFECT_CAP_T"
    "ARGET_SLOW\020\355\007\022!\n\034ITEM_EFFECT_CAP_CHANCE_"
    "NIGHT\020\356\007\022#\n\036ITEM_EFFECT_CAP_CHANCE_TRAIN"
    "ER\020\357\007\022\'\n\"ITEM_EFFECT_CAP_CHANCE_FIRST_TH"
    "ROW\020\360\007\022\"\n\035ITEM_EFFECT_CAP_CHANCE_LEGEND\020"
    "\361\007\022!\n\034ITEM_EFFECT_CAP_CHANCE_HEAVY\020\362\007\022\"\n"
    "\035ITEM_EFFECT_CAP_CHANCE_REPEAT\020\363\007\022\'\n\"ITE"
    "M_EFFECT_CAP_CHANCE_MULTI_THROW\020\364\007\022\"\n\035IT"
    "EM_EFFECT_CAP_CHANCE_ALWAYS\020\365\007\022(\n#ITEM_E"
    "FFECT_CAP_CHANCE_SINGLE_THROW\020\366\007b\006proto3", 600);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Enums/ItemEffect.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fEnums_2fItemEffect_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fEnums_2fItemEffect_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fEnums_2fItemEffect_2eproto() {
    protobuf_AddDesc_POGOProtos_2fEnums_2fItemEffect_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fEnums_2fItemEffect_2eproto_;
const ::google::protobuf::EnumDescriptor* ItemEffect_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ItemEffect_descriptor_;
}
bool ItemEffect_IsValid(int value) {
  switch(value) {
    case 0:
    case 1000:
    case 1002:
    case 1003:
    case 1004:
    case 1005:
    case 1006:
    case 1007:
    case 1008:
    case 1009:
    case 1010:
    case 1011:
    case 1012:
    case 1013:
    case 1014:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Enums
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
