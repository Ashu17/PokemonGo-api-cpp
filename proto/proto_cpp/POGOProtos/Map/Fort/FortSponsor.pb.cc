// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Map/Fort/FortSponsor.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Map/Fort/FortSponsor.pb.h"

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
namespace Map {
namespace Fort {

namespace {

const ::google::protobuf::EnumDescriptor* FortSponsor_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fMap_2fFort_2fFortSponsor_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fMap_2fFort_2fFortSponsor_2eproto() {
  protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortSponsor_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Map/Fort/FortSponsor.proto");
  GOOGLE_CHECK(file != NULL);
  FortSponsor_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fMap_2fFort_2fFortSponsor_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fMap_2fFort_2fFortSponsor_2eproto() {
}

void protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortSponsor_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortSponsor_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n%POGOProtos/Map/Fort/FortSponsor.proto\022"
    "\023POGOProtos.Map.Fort*B\n\013FortSponsor\022\021\n\rU"
    "NSET_SPONSOR\020\000\022\r\n\tMCDONALDS\020\001\022\021\n\rPOKEMON"
    "_STORE\020\002b\006proto3", 136);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Map/Fort/FortSponsor.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fMap_2fFort_2fFortSponsor_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fMap_2fFort_2fFortSponsor_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fMap_2fFort_2fFortSponsor_2eproto() {
    protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortSponsor_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fMap_2fFort_2fFortSponsor_2eproto_;
const ::google::protobuf::EnumDescriptor* FortSponsor_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FortSponsor_descriptor_;
}
bool FortSponsor_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Fort
}  // namespace Map
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
