// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Enums/Platform.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Enums/Platform.pb.h"

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

const ::google::protobuf::EnumDescriptor* Platform_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fEnums_2fPlatform_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fEnums_2fPlatform_2eproto() {
  protobuf_AddDesc_POGOProtos_2fEnums_2fPlatform_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Enums/Platform.proto");
  GOOGLE_CHECK(file != NULL);
  Platform_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fEnums_2fPlatform_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fEnums_2fPlatform_2eproto() {
}

void protobuf_AddDesc_POGOProtos_2fEnums_2fPlatform_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fEnums_2fPlatform_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\037POGOProtos/Enums/Platform.proto\022\020POGOP"
    "rotos.Enums*A\n\010Platform\022\t\n\005UNSET\020\000\022\007\n\003IO"
    "S\020\001\022\013\n\007ANDROID\020\002\022\007\n\003OSX\020\003\022\013\n\007WINDOWS\020\004b\006"
    "proto3", 126);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Enums/Platform.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fEnums_2fPlatform_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fEnums_2fPlatform_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fEnums_2fPlatform_2eproto() {
    protobuf_AddDesc_POGOProtos_2fEnums_2fPlatform_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fEnums_2fPlatform_2eproto_;
const ::google::protobuf::EnumDescriptor* Platform_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Platform_descriptor_;
}
bool Platform_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Enums
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)