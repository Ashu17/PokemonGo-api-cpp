// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/EquipBadgeResponse.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Responses/EquipBadgeResponse.pb.h"

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

const ::google::protobuf::Descriptor* EquipBadgeResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EquipBadgeResponse_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* EquipBadgeResponse_Result_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fEquipBadgeResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fEquipBadgeResponse_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fEquipBadgeResponse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Responses/EquipBadgeResponse.proto");
  GOOGLE_CHECK(file != NULL);
  EquipBadgeResponse_descriptor_ = file->message_type(0);
  static const int EquipBadgeResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EquipBadgeResponse, result_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EquipBadgeResponse, equipped_),
  };
  EquipBadgeResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      EquipBadgeResponse_descriptor_,
      EquipBadgeResponse::default_instance_,
      EquipBadgeResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(EquipBadgeResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EquipBadgeResponse, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EquipBadgeResponse, _is_default_instance_));
  EquipBadgeResponse_Result_descriptor_ = EquipBadgeResponse_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fEquipBadgeResponse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      EquipBadgeResponse_descriptor_, &EquipBadgeResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fEquipBadgeResponse_2eproto() {
  delete EquipBadgeResponse::default_instance_;
  delete EquipBadgeResponse_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fEquipBadgeResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fEquipBadgeResponse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Data::Player::protobuf_AddDesc_POGOProtos_2fData_2fPlayer_2fEquippedBadge_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n8POGOProtos/Networking/Responses/EquipB"
    "adgeResponse.proto\022\037POGOProtos.Networkin"
    "g.Responses\032*POGOProtos/Data/Player/Equi"
    "ppedBadge.proto\"\343\001\n\022EquipBadgeResponse\022J"
    "\n\006result\030\001 \001(\0162:.POGOProtos.Networking.R"
    "esponses.EquipBadgeResponse.Result\0227\n\010eq"
    "uipped\030\002 \001(\0132%.POGOProtos.Data.Player.Eq"
    "uippedBadge\"H\n\006Result\022\t\n\005UNSET\020\000\022\013\n\007SUCC"
    "ESS\020\001\022\023\n\017COOLDOWN_ACTIVE\020\002\022\021\n\rNOT_QUALIF"
    "IED\020\003b\006proto3", 373);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Responses/EquipBadgeResponse.proto", &protobuf_RegisterTypes);
  EquipBadgeResponse::default_instance_ = new EquipBadgeResponse();
  EquipBadgeResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fEquipBadgeResponse_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fEquipBadgeResponse_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fEquipBadgeResponse_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fEquipBadgeResponse_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fResponses_2fEquipBadgeResponse_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* EquipBadgeResponse_Result_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EquipBadgeResponse_Result_descriptor_;
}
bool EquipBadgeResponse_Result_IsValid(int value) {
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
const EquipBadgeResponse_Result EquipBadgeResponse::UNSET;
const EquipBadgeResponse_Result EquipBadgeResponse::SUCCESS;
const EquipBadgeResponse_Result EquipBadgeResponse::COOLDOWN_ACTIVE;
const EquipBadgeResponse_Result EquipBadgeResponse::NOT_QUALIFIED;
const EquipBadgeResponse_Result EquipBadgeResponse::Result_MIN;
const EquipBadgeResponse_Result EquipBadgeResponse::Result_MAX;
const int EquipBadgeResponse::Result_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EquipBadgeResponse::kResultFieldNumber;
const int EquipBadgeResponse::kEquippedFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EquipBadgeResponse::EquipBadgeResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Responses.EquipBadgeResponse)
}

void EquipBadgeResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  equipped_ = const_cast< ::POGOProtos::Data::Player::EquippedBadge*>(&::POGOProtos::Data::Player::EquippedBadge::default_instance());
}

EquipBadgeResponse::EquipBadgeResponse(const EquipBadgeResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Responses.EquipBadgeResponse)
}

void EquipBadgeResponse::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  result_ = 0;
  equipped_ = NULL;
}

EquipBadgeResponse::~EquipBadgeResponse() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Responses.EquipBadgeResponse)
  SharedDtor();
}

void EquipBadgeResponse::SharedDtor() {
  if (this != default_instance_) {
    delete equipped_;
  }
}

void EquipBadgeResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EquipBadgeResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EquipBadgeResponse_descriptor_;
}

const EquipBadgeResponse& EquipBadgeResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fEquipBadgeResponse_2eproto();
  return *default_instance_;
}

EquipBadgeResponse* EquipBadgeResponse::default_instance_ = NULL;

EquipBadgeResponse* EquipBadgeResponse::New(::google::protobuf::Arena* arena) const {
  EquipBadgeResponse* n = new EquipBadgeResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EquipBadgeResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Responses.EquipBadgeResponse)
  result_ = 0;
  if (GetArenaNoVirtual() == NULL && equipped_ != NULL) delete equipped_;
  equipped_ = NULL;
}

bool EquipBadgeResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Responses.EquipBadgeResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .POGOProtos.Networking.Responses.EquipBadgeResponse.Result result = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_result(static_cast< ::POGOProtos::Networking::Responses::EquipBadgeResponse_Result >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_equipped;
        break;
      }

      // optional .POGOProtos.Data.Player.EquippedBadge equipped = 2;
      case 2: {
        if (tag == 18) {
         parse_equipped:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_equipped()));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Responses.EquipBadgeResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Responses.EquipBadgeResponse)
  return false;
#undef DO_
}

void EquipBadgeResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Responses.EquipBadgeResponse)
  // optional .POGOProtos.Networking.Responses.EquipBadgeResponse.Result result = 1;
  if (this->result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->result(), output);
  }

  // optional .POGOProtos.Data.Player.EquippedBadge equipped = 2;
  if (this->has_equipped()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->equipped_, output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Responses.EquipBadgeResponse)
}

::google::protobuf::uint8* EquipBadgeResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Responses.EquipBadgeResponse)
  // optional .POGOProtos.Networking.Responses.EquipBadgeResponse.Result result = 1;
  if (this->result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->result(), target);
  }

  // optional .POGOProtos.Data.Player.EquippedBadge equipped = 2;
  if (this->has_equipped()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->equipped_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Responses.EquipBadgeResponse)
  return target;
}

int EquipBadgeResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Responses.EquipBadgeResponse)
  int total_size = 0;

  // optional .POGOProtos.Networking.Responses.EquipBadgeResponse.Result result = 1;
  if (this->result() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->result());
  }

  // optional .POGOProtos.Data.Player.EquippedBadge equipped = 2;
  if (this->has_equipped()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->equipped_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EquipBadgeResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Responses.EquipBadgeResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const EquipBadgeResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const EquipBadgeResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Responses.EquipBadgeResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Responses.EquipBadgeResponse)
    MergeFrom(*source);
  }
}

void EquipBadgeResponse::MergeFrom(const EquipBadgeResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Responses.EquipBadgeResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.result() != 0) {
    set_result(from.result());
  }
  if (from.has_equipped()) {
    mutable_equipped()->::POGOProtos::Data::Player::EquippedBadge::MergeFrom(from.equipped());
  }
}

void EquipBadgeResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Responses.EquipBadgeResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EquipBadgeResponse::CopyFrom(const EquipBadgeResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Responses.EquipBadgeResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EquipBadgeResponse::IsInitialized() const {

  return true;
}

void EquipBadgeResponse::Swap(EquipBadgeResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EquipBadgeResponse::InternalSwap(EquipBadgeResponse* other) {
  std::swap(result_, other->result_);
  std::swap(equipped_, other->equipped_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata EquipBadgeResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EquipBadgeResponse_descriptor_;
  metadata.reflection = EquipBadgeResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EquipBadgeResponse

// optional .POGOProtos.Networking.Responses.EquipBadgeResponse.Result result = 1;
void EquipBadgeResponse::clear_result() {
  result_ = 0;
}
 ::POGOProtos::Networking::Responses::EquipBadgeResponse_Result EquipBadgeResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.EquipBadgeResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::EquipBadgeResponse_Result >(result_);
}
 void EquipBadgeResponse::set_result(::POGOProtos::Networking::Responses::EquipBadgeResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.EquipBadgeResponse.result)
}

// optional .POGOProtos.Data.Player.EquippedBadge equipped = 2;
bool EquipBadgeResponse::has_equipped() const {
  return !_is_default_instance_ && equipped_ != NULL;
}
void EquipBadgeResponse::clear_equipped() {
  if (GetArenaNoVirtual() == NULL && equipped_ != NULL) delete equipped_;
  equipped_ = NULL;
}
const ::POGOProtos::Data::Player::EquippedBadge& EquipBadgeResponse::equipped() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.EquipBadgeResponse.equipped)
  return equipped_ != NULL ? *equipped_ : *default_instance_->equipped_;
}
::POGOProtos::Data::Player::EquippedBadge* EquipBadgeResponse::mutable_equipped() {
  
  if (equipped_ == NULL) {
    equipped_ = new ::POGOProtos::Data::Player::EquippedBadge;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.EquipBadgeResponse.equipped)
  return equipped_;
}
::POGOProtos::Data::Player::EquippedBadge* EquipBadgeResponse::release_equipped() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.EquipBadgeResponse.equipped)
  
  ::POGOProtos::Data::Player::EquippedBadge* temp = equipped_;
  equipped_ = NULL;
  return temp;
}
void EquipBadgeResponse::set_allocated_equipped(::POGOProtos::Data::Player::EquippedBadge* equipped) {
  delete equipped_;
  equipped_ = equipped;
  if (equipped) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.EquipBadgeResponse.equipped)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
