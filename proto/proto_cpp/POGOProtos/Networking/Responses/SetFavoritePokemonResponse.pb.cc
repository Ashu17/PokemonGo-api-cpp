// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/SetFavoritePokemonResponse.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Responses/SetFavoritePokemonResponse.pb.h"

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
namespace Responses {

namespace {

const ::google::protobuf::Descriptor* SetFavoritePokemonResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SetFavoritePokemonResponse_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* SetFavoritePokemonResponse_Result_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fSetFavoritePokemonResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fSetFavoritePokemonResponse_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fSetFavoritePokemonResponse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Responses/SetFavoritePokemonResponse.proto");
  GOOGLE_CHECK(file != NULL);
  SetFavoritePokemonResponse_descriptor_ = file->message_type(0);
  static const int SetFavoritePokemonResponse_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SetFavoritePokemonResponse, result_),
  };
  SetFavoritePokemonResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SetFavoritePokemonResponse_descriptor_,
      SetFavoritePokemonResponse::default_instance_,
      SetFavoritePokemonResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(SetFavoritePokemonResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SetFavoritePokemonResponse, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SetFavoritePokemonResponse, _is_default_instance_));
  SetFavoritePokemonResponse_Result_descriptor_ = SetFavoritePokemonResponse_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fSetFavoritePokemonResponse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SetFavoritePokemonResponse_descriptor_, &SetFavoritePokemonResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fSetFavoritePokemonResponse_2eproto() {
  delete SetFavoritePokemonResponse::default_instance_;
  delete SetFavoritePokemonResponse_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fSetFavoritePokemonResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fSetFavoritePokemonResponse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n@POGOProtos/Networking/Responses/SetFav"
    "oritePokemonResponse.proto\022\037POGOProtos.N"
    "etworking.Responses\"\311\001\n\032SetFavoritePokem"
    "onResponse\022R\n\006result\030\001 \001(\0162B.POGOProtos."
    "Networking.Responses.SetFavoritePokemonR"
    "esponse.Result\"W\n\006Result\022\t\n\005UNSET\020\000\022\013\n\007S"
    "UCCESS\020\001\022\033\n\027ERROR_POKEMON_NOT_FOUND\020\002\022\030\n"
    "\024ERROR_POKEMON_IS_EGG\020\003b\006proto3", 311);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Responses/SetFavoritePokemonResponse.proto", &protobuf_RegisterTypes);
  SetFavoritePokemonResponse::default_instance_ = new SetFavoritePokemonResponse();
  SetFavoritePokemonResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fSetFavoritePokemonResponse_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fSetFavoritePokemonResponse_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fSetFavoritePokemonResponse_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fSetFavoritePokemonResponse_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fResponses_2fSetFavoritePokemonResponse_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* SetFavoritePokemonResponse_Result_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SetFavoritePokemonResponse_Result_descriptor_;
}
bool SetFavoritePokemonResponse_Result_IsValid(int value) {
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

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SetFavoritePokemonResponse_Result SetFavoritePokemonResponse::UNSET;
const SetFavoritePokemonResponse_Result SetFavoritePokemonResponse::SUCCESS;
const SetFavoritePokemonResponse_Result SetFavoritePokemonResponse::ERROR_POKEMON_NOT_FOUND;
const SetFavoritePokemonResponse_Result SetFavoritePokemonResponse::ERROR_POKEMON_IS_EGG;
const SetFavoritePokemonResponse_Result SetFavoritePokemonResponse::Result_MIN;
const SetFavoritePokemonResponse_Result SetFavoritePokemonResponse::Result_MAX;
const int SetFavoritePokemonResponse::Result_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SetFavoritePokemonResponse::kResultFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SetFavoritePokemonResponse::SetFavoritePokemonResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
}

void SetFavoritePokemonResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

SetFavoritePokemonResponse::SetFavoritePokemonResponse(const SetFavoritePokemonResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
}

void SetFavoritePokemonResponse::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  result_ = 0;
}

SetFavoritePokemonResponse::~SetFavoritePokemonResponse() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
  SharedDtor();
}

void SetFavoritePokemonResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SetFavoritePokemonResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SetFavoritePokemonResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SetFavoritePokemonResponse_descriptor_;
}

const SetFavoritePokemonResponse& SetFavoritePokemonResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fSetFavoritePokemonResponse_2eproto();
  return *default_instance_;
}

SetFavoritePokemonResponse* SetFavoritePokemonResponse::default_instance_ = NULL;

SetFavoritePokemonResponse* SetFavoritePokemonResponse::New(::google::protobuf::Arena* arena) const {
  SetFavoritePokemonResponse* n = new SetFavoritePokemonResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SetFavoritePokemonResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
  result_ = 0;
}

bool SetFavoritePokemonResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .POGOProtos.Networking.Responses.SetFavoritePokemonResponse.Result result = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_result(static_cast< ::POGOProtos::Networking::Responses::SetFavoritePokemonResponse_Result >(value));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
  return false;
#undef DO_
}

void SetFavoritePokemonResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
  // optional .POGOProtos.Networking.Responses.SetFavoritePokemonResponse.Result result = 1;
  if (this->result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->result(), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
}

::google::protobuf::uint8* SetFavoritePokemonResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
  // optional .POGOProtos.Networking.Responses.SetFavoritePokemonResponse.Result result = 1;
  if (this->result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->result(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
  return target;
}

int SetFavoritePokemonResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
  int total_size = 0;

  // optional .POGOProtos.Networking.Responses.SetFavoritePokemonResponse.Result result = 1;
  if (this->result() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->result());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SetFavoritePokemonResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const SetFavoritePokemonResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SetFavoritePokemonResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
    MergeFrom(*source);
  }
}

void SetFavoritePokemonResponse::MergeFrom(const SetFavoritePokemonResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.result() != 0) {
    set_result(from.result());
  }
}

void SetFavoritePokemonResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SetFavoritePokemonResponse::CopyFrom(const SetFavoritePokemonResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Responses.SetFavoritePokemonResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SetFavoritePokemonResponse::IsInitialized() const {

  return true;
}

void SetFavoritePokemonResponse::Swap(SetFavoritePokemonResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SetFavoritePokemonResponse::InternalSwap(SetFavoritePokemonResponse* other) {
  std::swap(result_, other->result_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SetFavoritePokemonResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SetFavoritePokemonResponse_descriptor_;
  metadata.reflection = SetFavoritePokemonResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SetFavoritePokemonResponse

// optional .POGOProtos.Networking.Responses.SetFavoritePokemonResponse.Result result = 1;
void SetFavoritePokemonResponse::clear_result() {
  result_ = 0;
}
 ::POGOProtos::Networking::Responses::SetFavoritePokemonResponse_Result SetFavoritePokemonResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.SetFavoritePokemonResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::SetFavoritePokemonResponse_Result >(result_);
}
 void SetFavoritePokemonResponse::set_result(::POGOProtos::Networking::Responses::SetFavoritePokemonResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.SetFavoritePokemonResponse.result)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
