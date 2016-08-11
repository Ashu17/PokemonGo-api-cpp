// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/Messages/DownloadSettingsMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Requests/Messages/DownloadSettingsMessage.pb.h"

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

const ::google::protobuf::Descriptor* DownloadSettingsMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DownloadSettingsMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fDownloadSettingsMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fDownloadSettingsMessage_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fDownloadSettingsMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Requests/Messages/DownloadSettingsMessage.proto");
  GOOGLE_CHECK(file != NULL);
  DownloadSettingsMessage_descriptor_ = file->message_type(0);
  static const int DownloadSettingsMessage_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DownloadSettingsMessage, hash_),
  };
  DownloadSettingsMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      DownloadSettingsMessage_descriptor_,
      DownloadSettingsMessage::default_instance_,
      DownloadSettingsMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(DownloadSettingsMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DownloadSettingsMessage, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DownloadSettingsMessage, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fDownloadSettingsMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      DownloadSettingsMessage_descriptor_, &DownloadSettingsMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fDownloadSettingsMessage_2eproto() {
  delete DownloadSettingsMessage::default_instance_;
  delete DownloadSettingsMessage_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fDownloadSettingsMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fDownloadSettingsMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nEPOGOProtos/Networking/Requests/Message"
    "s/DownloadSettingsMessage.proto\022\'POGOPro"
    "tos.Networking.Requests.Messages\"\'\n\027Down"
    "loadSettingsMessage\022\014\n\004hash\030\001 \001(\tb\006proto"
    "3", 161);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Requests/Messages/DownloadSettingsMessage.proto", &protobuf_RegisterTypes);
  DownloadSettingsMessage::default_instance_ = new DownloadSettingsMessage();
  DownloadSettingsMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fDownloadSettingsMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fDownloadSettingsMessage_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fDownloadSettingsMessage_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fDownloadSettingsMessage_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fDownloadSettingsMessage_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DownloadSettingsMessage::kHashFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DownloadSettingsMessage::DownloadSettingsMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
}

void DownloadSettingsMessage::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

DownloadSettingsMessage::DownloadSettingsMessage(const DownloadSettingsMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
}

void DownloadSettingsMessage::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  hash_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

DownloadSettingsMessage::~DownloadSettingsMessage() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
  SharedDtor();
}

void DownloadSettingsMessage::SharedDtor() {
  hash_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void DownloadSettingsMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DownloadSettingsMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DownloadSettingsMessage_descriptor_;
}

const DownloadSettingsMessage& DownloadSettingsMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fDownloadSettingsMessage_2eproto();
  return *default_instance_;
}

DownloadSettingsMessage* DownloadSettingsMessage::default_instance_ = NULL;

DownloadSettingsMessage* DownloadSettingsMessage::New(::google::protobuf::Arena* arena) const {
  DownloadSettingsMessage* n = new DownloadSettingsMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DownloadSettingsMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool DownloadSettingsMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string hash = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_hash()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->hash().data(), this->hash().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage.hash"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
  return false;
#undef DO_
}

void DownloadSettingsMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
  // optional string hash = 1;
  if (this->hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->hash().data(), this->hash().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage.hash");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->hash(), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
}

::google::protobuf::uint8* DownloadSettingsMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
  // optional string hash = 1;
  if (this->hash().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->hash().data(), this->hash().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage.hash");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->hash(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
  return target;
}

int DownloadSettingsMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
  int total_size = 0;

  // optional string hash = 1;
  if (this->hash().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->hash());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DownloadSettingsMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const DownloadSettingsMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const DownloadSettingsMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
    MergeFrom(*source);
  }
}

void DownloadSettingsMessage::MergeFrom(const DownloadSettingsMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.hash().size() > 0) {

    hash_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.hash_);
  }
}

void DownloadSettingsMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DownloadSettingsMessage::CopyFrom(const DownloadSettingsMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DownloadSettingsMessage::IsInitialized() const {

  return true;
}

void DownloadSettingsMessage::Swap(DownloadSettingsMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DownloadSettingsMessage::InternalSwap(DownloadSettingsMessage* other) {
  hash_.Swap(&other->hash_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata DownloadSettingsMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DownloadSettingsMessage_descriptor_;
  metadata.reflection = DownloadSettingsMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// DownloadSettingsMessage

// optional string hash = 1;
void DownloadSettingsMessage::clear_hash() {
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& DownloadSettingsMessage::hash() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage.hash)
  return hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DownloadSettingsMessage::set_hash(const ::std::string& value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage.hash)
}
 void DownloadSettingsMessage::set_hash(const char* value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage.hash)
}
 void DownloadSettingsMessage::set_hash(const char* value, size_t size) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage.hash)
}
 ::std::string* DownloadSettingsMessage::mutable_hash() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage.hash)
  return hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* DownloadSettingsMessage::release_hash() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage.hash)
  
  return hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DownloadSettingsMessage::set_allocated_hash(::std::string* hash) {
  if (hash != NULL) {
    
  } else {
    
  }
  hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hash);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Requests.Messages.DownloadSettingsMessage.hash)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages
}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
