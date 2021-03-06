// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/MarkTutorialCompleteResponse.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Responses/MarkTutorialCompleteResponse.pb.h"

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

const ::google::protobuf::Descriptor* MarkTutorialCompleteResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MarkTutorialCompleteResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fMarkTutorialCompleteResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fMarkTutorialCompleteResponse_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fMarkTutorialCompleteResponse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Responses/MarkTutorialCompleteResponse.proto");
  GOOGLE_CHECK(file != NULL);
  MarkTutorialCompleteResponse_descriptor_ = file->message_type(0);
  static const int MarkTutorialCompleteResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MarkTutorialCompleteResponse, success_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MarkTutorialCompleteResponse, player_data_),
  };
  MarkTutorialCompleteResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      MarkTutorialCompleteResponse_descriptor_,
      MarkTutorialCompleteResponse::default_instance_,
      MarkTutorialCompleteResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(MarkTutorialCompleteResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MarkTutorialCompleteResponse, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MarkTutorialCompleteResponse, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fMarkTutorialCompleteResponse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      MarkTutorialCompleteResponse_descriptor_, &MarkTutorialCompleteResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fMarkTutorialCompleteResponse_2eproto() {
  delete MarkTutorialCompleteResponse::default_instance_;
  delete MarkTutorialCompleteResponse_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fMarkTutorialCompleteResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fMarkTutorialCompleteResponse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Data::protobuf_AddDesc_POGOProtos_2fData_2fPlayerData_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nBPOGOProtos/Networking/Responses/MarkTu"
    "torialCompleteResponse.proto\022\037POGOProtos"
    ".Networking.Responses\032 POGOProtos/Data/P"
    "layerData.proto\"a\n\034MarkTutorialCompleteR"
    "esponse\022\017\n\007success\030\001 \001(\010\0220\n\013player_data\030"
    "\002 \001(\0132\033.POGOProtos.Data.PlayerDatab\006prot"
    "o3", 242);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Responses/MarkTutorialCompleteResponse.proto", &protobuf_RegisterTypes);
  MarkTutorialCompleteResponse::default_instance_ = new MarkTutorialCompleteResponse();
  MarkTutorialCompleteResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fMarkTutorialCompleteResponse_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fMarkTutorialCompleteResponse_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fMarkTutorialCompleteResponse_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fMarkTutorialCompleteResponse_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fResponses_2fMarkTutorialCompleteResponse_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MarkTutorialCompleteResponse::kSuccessFieldNumber;
const int MarkTutorialCompleteResponse::kPlayerDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MarkTutorialCompleteResponse::MarkTutorialCompleteResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
}

void MarkTutorialCompleteResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  player_data_ = const_cast< ::POGOProtos::Data::PlayerData*>(&::POGOProtos::Data::PlayerData::default_instance());
}

MarkTutorialCompleteResponse::MarkTutorialCompleteResponse(const MarkTutorialCompleteResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
}

void MarkTutorialCompleteResponse::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  success_ = false;
  player_data_ = NULL;
}

MarkTutorialCompleteResponse::~MarkTutorialCompleteResponse() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
  SharedDtor();
}

void MarkTutorialCompleteResponse::SharedDtor() {
  if (this != default_instance_) {
    delete player_data_;
  }
}

void MarkTutorialCompleteResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MarkTutorialCompleteResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MarkTutorialCompleteResponse_descriptor_;
}

const MarkTutorialCompleteResponse& MarkTutorialCompleteResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fMarkTutorialCompleteResponse_2eproto();
  return *default_instance_;
}

MarkTutorialCompleteResponse* MarkTutorialCompleteResponse::default_instance_ = NULL;

MarkTutorialCompleteResponse* MarkTutorialCompleteResponse::New(::google::protobuf::Arena* arena) const {
  MarkTutorialCompleteResponse* n = new MarkTutorialCompleteResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MarkTutorialCompleteResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
  success_ = false;
  if (GetArenaNoVirtual() == NULL && player_data_ != NULL) delete player_data_;
  player_data_ = NULL;
}

bool MarkTutorialCompleteResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool success = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &success_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_player_data;
        break;
      }

      // optional .POGOProtos.Data.PlayerData player_data = 2;
      case 2: {
        if (tag == 18) {
         parse_player_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_player_data()));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
  return false;
#undef DO_
}

void MarkTutorialCompleteResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
  // optional bool success = 1;
  if (this->success() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->success(), output);
  }

  // optional .POGOProtos.Data.PlayerData player_data = 2;
  if (this->has_player_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->player_data_, output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
}

::google::protobuf::uint8* MarkTutorialCompleteResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
  // optional bool success = 1;
  if (this->success() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->success(), target);
  }

  // optional .POGOProtos.Data.PlayerData player_data = 2;
  if (this->has_player_data()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->player_data_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
  return target;
}

int MarkTutorialCompleteResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
  int total_size = 0;

  // optional bool success = 1;
  if (this->success() != 0) {
    total_size += 1 + 1;
  }

  // optional .POGOProtos.Data.PlayerData player_data = 2;
  if (this->has_player_data()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->player_data_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MarkTutorialCompleteResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const MarkTutorialCompleteResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const MarkTutorialCompleteResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
    MergeFrom(*source);
  }
}

void MarkTutorialCompleteResponse::MergeFrom(const MarkTutorialCompleteResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.success() != 0) {
    set_success(from.success());
  }
  if (from.has_player_data()) {
    mutable_player_data()->::POGOProtos::Data::PlayerData::MergeFrom(from.player_data());
  }
}

void MarkTutorialCompleteResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MarkTutorialCompleteResponse::CopyFrom(const MarkTutorialCompleteResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MarkTutorialCompleteResponse::IsInitialized() const {

  return true;
}

void MarkTutorialCompleteResponse::Swap(MarkTutorialCompleteResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MarkTutorialCompleteResponse::InternalSwap(MarkTutorialCompleteResponse* other) {
  std::swap(success_, other->success_);
  std::swap(player_data_, other->player_data_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MarkTutorialCompleteResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MarkTutorialCompleteResponse_descriptor_;
  metadata.reflection = MarkTutorialCompleteResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// MarkTutorialCompleteResponse

// optional bool success = 1;
void MarkTutorialCompleteResponse::clear_success() {
  success_ = false;
}
 bool MarkTutorialCompleteResponse::success() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse.success)
  return success_;
}
 void MarkTutorialCompleteResponse::set_success(bool value) {
  
  success_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse.success)
}

// optional .POGOProtos.Data.PlayerData player_data = 2;
bool MarkTutorialCompleteResponse::has_player_data() const {
  return !_is_default_instance_ && player_data_ != NULL;
}
void MarkTutorialCompleteResponse::clear_player_data() {
  if (GetArenaNoVirtual() == NULL && player_data_ != NULL) delete player_data_;
  player_data_ = NULL;
}
const ::POGOProtos::Data::PlayerData& MarkTutorialCompleteResponse::player_data() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse.player_data)
  return player_data_ != NULL ? *player_data_ : *default_instance_->player_data_;
}
::POGOProtos::Data::PlayerData* MarkTutorialCompleteResponse::mutable_player_data() {
  
  if (player_data_ == NULL) {
    player_data_ = new ::POGOProtos::Data::PlayerData;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse.player_data)
  return player_data_;
}
::POGOProtos::Data::PlayerData* MarkTutorialCompleteResponse::release_player_data() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse.player_data)
  
  ::POGOProtos::Data::PlayerData* temp = player_data_;
  player_data_ = NULL;
  return temp;
}
void MarkTutorialCompleteResponse::set_allocated_player_data(::POGOProtos::Data::PlayerData* player_data) {
  delete player_data_;
  player_data_ = player_data;
  if (player_data) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.MarkTutorialCompleteResponse.player_data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
