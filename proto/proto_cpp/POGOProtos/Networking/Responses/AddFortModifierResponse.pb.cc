// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/AddFortModifierResponse.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Responses/AddFortModifierResponse.pb.h"

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

const ::google::protobuf::Descriptor* AddFortModifierResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AddFortModifierResponse_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* AddFortModifierResponse_Result_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fAddFortModifierResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fAddFortModifierResponse_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fAddFortModifierResponse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Responses/AddFortModifierResponse.proto");
  GOOGLE_CHECK(file != NULL);
  AddFortModifierResponse_descriptor_ = file->message_type(0);
  static const int AddFortModifierResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddFortModifierResponse, result_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddFortModifierResponse, fort_details_),
  };
  AddFortModifierResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AddFortModifierResponse_descriptor_,
      AddFortModifierResponse::default_instance_,
      AddFortModifierResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(AddFortModifierResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddFortModifierResponse, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddFortModifierResponse, _is_default_instance_));
  AddFortModifierResponse_Result_descriptor_ = AddFortModifierResponse_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fAddFortModifierResponse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AddFortModifierResponse_descriptor_, &AddFortModifierResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fAddFortModifierResponse_2eproto() {
  delete AddFortModifierResponse::default_instance_;
  delete AddFortModifierResponse_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fAddFortModifierResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fAddFortModifierResponse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Networking::Responses::protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fFortDetailsResponse_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n=POGOProtos/Networking/Responses/AddFor"
    "tModifierResponse.proto\022\037POGOProtos.Netw"
    "orking.Responses\0329POGOProtos/Networking/"
    "Responses/FortDetailsResponse.proto\"\253\002\n\027"
    "AddFortModifierResponse\022O\n\006result\030\001 \001(\0162"
    "\?.POGOProtos.Networking.Responses.AddFor"
    "tModifierResponse.Result\022J\n\014fort_details"
    "\030\002 \001(\01324.POGOProtos.Networking.Responses"
    ".FortDetailsResponse\"s\n\006Result\022\021\n\rNO_RES"
    "ULT_SET\020\000\022\013\n\007SUCCESS\020\001\022\035\n\031FORT_ALREADY_H"
    "AS_MODIFIER\020\002\022\020\n\014TOO_FAR_AWAY\020\003\022\030\n\024NO_IT"
    "EM_IN_INVENTORY\020\004b\006proto3", 465);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Responses/AddFortModifierResponse.proto", &protobuf_RegisterTypes);
  AddFortModifierResponse::default_instance_ = new AddFortModifierResponse();
  AddFortModifierResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fAddFortModifierResponse_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fAddFortModifierResponse_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fAddFortModifierResponse_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fAddFortModifierResponse_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fResponses_2fAddFortModifierResponse_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* AddFortModifierResponse_Result_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AddFortModifierResponse_Result_descriptor_;
}
bool AddFortModifierResponse_Result_IsValid(int value) {
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

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const AddFortModifierResponse_Result AddFortModifierResponse::NO_RESULT_SET;
const AddFortModifierResponse_Result AddFortModifierResponse::SUCCESS;
const AddFortModifierResponse_Result AddFortModifierResponse::FORT_ALREADY_HAS_MODIFIER;
const AddFortModifierResponse_Result AddFortModifierResponse::TOO_FAR_AWAY;
const AddFortModifierResponse_Result AddFortModifierResponse::NO_ITEM_IN_INVENTORY;
const AddFortModifierResponse_Result AddFortModifierResponse::Result_MIN;
const AddFortModifierResponse_Result AddFortModifierResponse::Result_MAX;
const int AddFortModifierResponse::Result_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AddFortModifierResponse::kResultFieldNumber;
const int AddFortModifierResponse::kFortDetailsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AddFortModifierResponse::AddFortModifierResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Responses.AddFortModifierResponse)
}

void AddFortModifierResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  fort_details_ = const_cast< ::POGOProtos::Networking::Responses::FortDetailsResponse*>(&::POGOProtos::Networking::Responses::FortDetailsResponse::default_instance());
}

AddFortModifierResponse::AddFortModifierResponse(const AddFortModifierResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Responses.AddFortModifierResponse)
}

void AddFortModifierResponse::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  result_ = 0;
  fort_details_ = NULL;
}

AddFortModifierResponse::~AddFortModifierResponse() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Responses.AddFortModifierResponse)
  SharedDtor();
}

void AddFortModifierResponse::SharedDtor() {
  if (this != default_instance_) {
    delete fort_details_;
  }
}

void AddFortModifierResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AddFortModifierResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AddFortModifierResponse_descriptor_;
}

const AddFortModifierResponse& AddFortModifierResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fAddFortModifierResponse_2eproto();
  return *default_instance_;
}

AddFortModifierResponse* AddFortModifierResponse::default_instance_ = NULL;

AddFortModifierResponse* AddFortModifierResponse::New(::google::protobuf::Arena* arena) const {
  AddFortModifierResponse* n = new AddFortModifierResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AddFortModifierResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Responses.AddFortModifierResponse)
  result_ = 0;
  if (GetArenaNoVirtual() == NULL && fort_details_ != NULL) delete fort_details_;
  fort_details_ = NULL;
}

bool AddFortModifierResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Responses.AddFortModifierResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .POGOProtos.Networking.Responses.AddFortModifierResponse.Result result = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_result(static_cast< ::POGOProtos::Networking::Responses::AddFortModifierResponse_Result >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_fort_details;
        break;
      }

      // optional .POGOProtos.Networking.Responses.FortDetailsResponse fort_details = 2;
      case 2: {
        if (tag == 18) {
         parse_fort_details:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_fort_details()));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Responses.AddFortModifierResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Responses.AddFortModifierResponse)
  return false;
#undef DO_
}

void AddFortModifierResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Responses.AddFortModifierResponse)
  // optional .POGOProtos.Networking.Responses.AddFortModifierResponse.Result result = 1;
  if (this->result() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->result(), output);
  }

  // optional .POGOProtos.Networking.Responses.FortDetailsResponse fort_details = 2;
  if (this->has_fort_details()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->fort_details_, output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Responses.AddFortModifierResponse)
}

::google::protobuf::uint8* AddFortModifierResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Responses.AddFortModifierResponse)
  // optional .POGOProtos.Networking.Responses.AddFortModifierResponse.Result result = 1;
  if (this->result() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->result(), target);
  }

  // optional .POGOProtos.Networking.Responses.FortDetailsResponse fort_details = 2;
  if (this->has_fort_details()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->fort_details_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Responses.AddFortModifierResponse)
  return target;
}

int AddFortModifierResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Responses.AddFortModifierResponse)
  int total_size = 0;

  // optional .POGOProtos.Networking.Responses.AddFortModifierResponse.Result result = 1;
  if (this->result() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->result());
  }

  // optional .POGOProtos.Networking.Responses.FortDetailsResponse fort_details = 2;
  if (this->has_fort_details()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->fort_details_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AddFortModifierResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Responses.AddFortModifierResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const AddFortModifierResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AddFortModifierResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Responses.AddFortModifierResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Responses.AddFortModifierResponse)
    MergeFrom(*source);
  }
}

void AddFortModifierResponse::MergeFrom(const AddFortModifierResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Responses.AddFortModifierResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.result() != 0) {
    set_result(from.result());
  }
  if (from.has_fort_details()) {
    mutable_fort_details()->::POGOProtos::Networking::Responses::FortDetailsResponse::MergeFrom(from.fort_details());
  }
}

void AddFortModifierResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Responses.AddFortModifierResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AddFortModifierResponse::CopyFrom(const AddFortModifierResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Responses.AddFortModifierResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddFortModifierResponse::IsInitialized() const {

  return true;
}

void AddFortModifierResponse::Swap(AddFortModifierResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AddFortModifierResponse::InternalSwap(AddFortModifierResponse* other) {
  std::swap(result_, other->result_);
  std::swap(fort_details_, other->fort_details_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AddFortModifierResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AddFortModifierResponse_descriptor_;
  metadata.reflection = AddFortModifierResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AddFortModifierResponse

// optional .POGOProtos.Networking.Responses.AddFortModifierResponse.Result result = 1;
void AddFortModifierResponse::clear_result() {
  result_ = 0;
}
 ::POGOProtos::Networking::Responses::AddFortModifierResponse_Result AddFortModifierResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.AddFortModifierResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::AddFortModifierResponse_Result >(result_);
}
 void AddFortModifierResponse::set_result(::POGOProtos::Networking::Responses::AddFortModifierResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.AddFortModifierResponse.result)
}

// optional .POGOProtos.Networking.Responses.FortDetailsResponse fort_details = 2;
bool AddFortModifierResponse::has_fort_details() const {
  return !_is_default_instance_ && fort_details_ != NULL;
}
void AddFortModifierResponse::clear_fort_details() {
  if (GetArenaNoVirtual() == NULL && fort_details_ != NULL) delete fort_details_;
  fort_details_ = NULL;
}
const ::POGOProtos::Networking::Responses::FortDetailsResponse& AddFortModifierResponse::fort_details() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.AddFortModifierResponse.fort_details)
  return fort_details_ != NULL ? *fort_details_ : *default_instance_->fort_details_;
}
::POGOProtos::Networking::Responses::FortDetailsResponse* AddFortModifierResponse::mutable_fort_details() {
  
  if (fort_details_ == NULL) {
    fort_details_ = new ::POGOProtos::Networking::Responses::FortDetailsResponse;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.AddFortModifierResponse.fort_details)
  return fort_details_;
}
::POGOProtos::Networking::Responses::FortDetailsResponse* AddFortModifierResponse::release_fort_details() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.AddFortModifierResponse.fort_details)
  
  ::POGOProtos::Networking::Responses::FortDetailsResponse* temp = fort_details_;
  fort_details_ = NULL;
  return temp;
}
void AddFortModifierResponse::set_allocated_fort_details(::POGOProtos::Networking::Responses::FortDetailsResponse* fort_details) {
  delete fort_details_;
  fort_details_ = fort_details;
  if (fort_details) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.AddFortModifierResponse.fort_details)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
