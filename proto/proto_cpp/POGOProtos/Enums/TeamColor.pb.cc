// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Enums/TeamColor.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Enums/TeamColor.pb.h"

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

const ::google::protobuf::EnumDescriptor* TeamColor_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fEnums_2fTeamColor_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fEnums_2fTeamColor_2eproto() {
  protobuf_AddDesc_POGOProtos_2fEnums_2fTeamColor_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Enums/TeamColor.proto");
  GOOGLE_CHECK(file != NULL);
  TeamColor_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fEnums_2fTeamColor_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fEnums_2fTeamColor_2eproto() {
}

void protobuf_AddDesc_POGOProtos_2fEnums_2fTeamColor_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fEnums_2fTeamColor_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n POGOProtos/Enums/TeamColor.proto\022\020POGO"
    "Protos.Enums*7\n\tTeamColor\022\013\n\007NEUTRAL\020\000\022\010"
    "\n\004BLUE\020\001\022\007\n\003RED\020\002\022\n\n\006YELLOW\020\003b\006proto3", 117);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Enums/TeamColor.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fEnums_2fTeamColor_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fEnums_2fTeamColor_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fEnums_2fTeamColor_2eproto() {
    protobuf_AddDesc_POGOProtos_2fEnums_2fTeamColor_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fEnums_2fTeamColor_2eproto_;
const ::google::protobuf::EnumDescriptor* TeamColor_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TeamColor_descriptor_;
}
bool TeamColor_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Enums
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
