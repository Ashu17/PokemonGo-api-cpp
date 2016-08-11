// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/Messages/ReleasePokemonMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Requests/Messages/ReleasePokemonMessage.pb.h"

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

const ::google::protobuf::Descriptor* ReleasePokemonMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ReleasePokemonMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fReleasePokemonMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fReleasePokemonMessage_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fReleasePokemonMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Requests/Messages/ReleasePokemonMessage.proto");
  GOOGLE_CHECK(file != NULL);
  ReleasePokemonMessage_descriptor_ = file->message_type(0);
  static const int ReleasePokemonMessage_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReleasePokemonMessage, pokemon_id_),
  };
  ReleasePokemonMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ReleasePokemonMessage_descriptor_,
      ReleasePokemonMessage::default_instance_,
      ReleasePokemonMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(ReleasePokemonMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReleasePokemonMessage, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ReleasePokemonMessage, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fReleasePokemonMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ReleasePokemonMessage_descriptor_, &ReleasePokemonMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fReleasePokemonMessage_2eproto() {
  delete ReleasePokemonMessage::default_instance_;
  delete ReleasePokemonMessage_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fReleasePokemonMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fReleasePokemonMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nCPOGOProtos/Networking/Requests/Message"
    "s/ReleasePokemonMessage.proto\022\'POGOProto"
    "s.Networking.Requests.Messages\"+\n\025Releas"
    "ePokemonMessage\022\022\n\npokemon_id\030\001 \001(\006b\006pro"
    "to3", 163);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Requests/Messages/ReleasePokemonMessage.proto", &protobuf_RegisterTypes);
  ReleasePokemonMessage::default_instance_ = new ReleasePokemonMessage();
  ReleasePokemonMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fReleasePokemonMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fReleasePokemonMessage_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fReleasePokemonMessage_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fReleasePokemonMessage_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fReleasePokemonMessage_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ReleasePokemonMessage::kPokemonIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ReleasePokemonMessage::ReleasePokemonMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
}

void ReleasePokemonMessage::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

ReleasePokemonMessage::ReleasePokemonMessage(const ReleasePokemonMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
}

void ReleasePokemonMessage::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  pokemon_id_ = GOOGLE_ULONGLONG(0);
}

ReleasePokemonMessage::~ReleasePokemonMessage() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
  SharedDtor();
}

void ReleasePokemonMessage::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ReleasePokemonMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ReleasePokemonMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ReleasePokemonMessage_descriptor_;
}

const ReleasePokemonMessage& ReleasePokemonMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fReleasePokemonMessage_2eproto();
  return *default_instance_;
}

ReleasePokemonMessage* ReleasePokemonMessage::default_instance_ = NULL;

ReleasePokemonMessage* ReleasePokemonMessage::New(::google::protobuf::Arena* arena) const {
  ReleasePokemonMessage* n = new ReleasePokemonMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ReleasePokemonMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
  pokemon_id_ = GOOGLE_ULONGLONG(0);
}

bool ReleasePokemonMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional fixed64 pokemon_id = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &pokemon_id_)));

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
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
  return false;
#undef DO_
}

void ReleasePokemonMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
  // optional fixed64 pokemon_id = 1;
  if (this->pokemon_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(1, this->pokemon_id(), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
}

::google::protobuf::uint8* ReleasePokemonMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
  // optional fixed64 pokemon_id = 1;
  if (this->pokemon_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(1, this->pokemon_id(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
  return target;
}

int ReleasePokemonMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
  int total_size = 0;

  // optional fixed64 pokemon_id = 1;
  if (this->pokemon_id() != 0) {
    total_size += 1 + 8;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ReleasePokemonMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const ReleasePokemonMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ReleasePokemonMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
    MergeFrom(*source);
  }
}

void ReleasePokemonMessage::MergeFrom(const ReleasePokemonMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.pokemon_id() != 0) {
    set_pokemon_id(from.pokemon_id());
  }
}

void ReleasePokemonMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ReleasePokemonMessage::CopyFrom(const ReleasePokemonMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ReleasePokemonMessage::IsInitialized() const {

  return true;
}

void ReleasePokemonMessage::Swap(ReleasePokemonMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ReleasePokemonMessage::InternalSwap(ReleasePokemonMessage* other) {
  std::swap(pokemon_id_, other->pokemon_id_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ReleasePokemonMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ReleasePokemonMessage_descriptor_;
  metadata.reflection = ReleasePokemonMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ReleasePokemonMessage

// optional fixed64 pokemon_id = 1;
void ReleasePokemonMessage::clear_pokemon_id() {
  pokemon_id_ = GOOGLE_ULONGLONG(0);
}
 ::google::protobuf::uint64 ReleasePokemonMessage::pokemon_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage.pokemon_id)
  return pokemon_id_;
}
 void ReleasePokemonMessage::set_pokemon_id(::google::protobuf::uint64 value) {
  
  pokemon_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.ReleasePokemonMessage.pokemon_id)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages
}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)