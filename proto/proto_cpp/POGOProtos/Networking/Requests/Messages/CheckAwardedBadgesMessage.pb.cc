// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/Messages/CheckAwardedBadgesMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Requests/Messages/CheckAwardedBadgesMessage.pb.h"

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
namespace Messages {

namespace {

const ::google::protobuf::Descriptor* CheckAwardedBadgesMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CheckAwardedBadgesMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckAwardedBadgesMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckAwardedBadgesMessage_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckAwardedBadgesMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Requests/Messages/CheckAwardedBadgesMessage.proto");
  GOOGLE_CHECK(file != NULL);
  CheckAwardedBadgesMessage_descriptor_ = file->message_type(0);
  static const int CheckAwardedBadgesMessage_offsets_[1] = {
  };
  CheckAwardedBadgesMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      CheckAwardedBadgesMessage_descriptor_,
      CheckAwardedBadgesMessage::default_instance_,
      CheckAwardedBadgesMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(CheckAwardedBadgesMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CheckAwardedBadgesMessage, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CheckAwardedBadgesMessage, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckAwardedBadgesMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      CheckAwardedBadgesMessage_descriptor_, &CheckAwardedBadgesMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckAwardedBadgesMessage_2eproto() {
  delete CheckAwardedBadgesMessage::default_instance_;
  delete CheckAwardedBadgesMessage_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckAwardedBadgesMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckAwardedBadgesMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nGPOGOProtos/Networking/Requests/Message"
    "s/CheckAwardedBadgesMessage.proto\022\'POGOP"
    "rotos.Networking.Requests.Messages\"\033\n\031Ch"
    "eckAwardedBadgesMessageb\006proto3", 151);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Requests/Messages/CheckAwardedBadgesMessage.proto", &protobuf_RegisterTypes);
  CheckAwardedBadgesMessage::default_instance_ = new CheckAwardedBadgesMessage();
  CheckAwardedBadgesMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckAwardedBadgesMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckAwardedBadgesMessage_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckAwardedBadgesMessage_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckAwardedBadgesMessage_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckAwardedBadgesMessage_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CheckAwardedBadgesMessage::CheckAwardedBadgesMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
}

void CheckAwardedBadgesMessage::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

CheckAwardedBadgesMessage::CheckAwardedBadgesMessage(const CheckAwardedBadgesMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
}

void CheckAwardedBadgesMessage::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

CheckAwardedBadgesMessage::~CheckAwardedBadgesMessage() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
  SharedDtor();
}

void CheckAwardedBadgesMessage::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CheckAwardedBadgesMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CheckAwardedBadgesMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CheckAwardedBadgesMessage_descriptor_;
}

const CheckAwardedBadgesMessage& CheckAwardedBadgesMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCheckAwardedBadgesMessage_2eproto();
  return *default_instance_;
}

CheckAwardedBadgesMessage* CheckAwardedBadgesMessage::default_instance_ = NULL;

CheckAwardedBadgesMessage* CheckAwardedBadgesMessage::New(::google::protobuf::Arena* arena) const {
  CheckAwardedBadgesMessage* n = new CheckAwardedBadgesMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CheckAwardedBadgesMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
}

bool CheckAwardedBadgesMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0 ||
        ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
  }
success:
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
  return false;
#undef DO_
}

void CheckAwardedBadgesMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
}

::google::protobuf::uint8* CheckAwardedBadgesMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
  return target;
}

int CheckAwardedBadgesMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
  int total_size = 0;

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CheckAwardedBadgesMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const CheckAwardedBadgesMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const CheckAwardedBadgesMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
    MergeFrom(*source);
  }
}

void CheckAwardedBadgesMessage::MergeFrom(const CheckAwardedBadgesMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
}

void CheckAwardedBadgesMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CheckAwardedBadgesMessage::CopyFrom(const CheckAwardedBadgesMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Requests.Messages.CheckAwardedBadgesMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CheckAwardedBadgesMessage::IsInitialized() const {

  return true;
}

void CheckAwardedBadgesMessage::Swap(CheckAwardedBadgesMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CheckAwardedBadgesMessage::InternalSwap(CheckAwardedBadgesMessage* other) {
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CheckAwardedBadgesMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CheckAwardedBadgesMessage_descriptor_;
  metadata.reflection = CheckAwardedBadgesMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CheckAwardedBadgesMessage

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages
}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
