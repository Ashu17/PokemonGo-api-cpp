// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Data/Capture/CaptureAward.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Data/Capture/CaptureAward.pb.h"

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
namespace Data {
namespace Capture {

namespace {

const ::google::protobuf::Descriptor* CaptureAward_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CaptureAward_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fData_2fCapture_2fCaptureAward_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fData_2fCapture_2fCaptureAward_2eproto() {
  protobuf_AddDesc_POGOProtos_2fData_2fCapture_2fCaptureAward_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Data/Capture/CaptureAward.proto");
  GOOGLE_CHECK(file != NULL);
  CaptureAward_descriptor_ = file->message_type(0);
  static const int CaptureAward_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CaptureAward, activity_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CaptureAward, xp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CaptureAward, candy_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CaptureAward, stardust_),
  };
  CaptureAward_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      CaptureAward_descriptor_,
      CaptureAward::default_instance_,
      CaptureAward_offsets_,
      -1,
      -1,
      -1,
      sizeof(CaptureAward),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CaptureAward, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CaptureAward, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fData_2fCapture_2fCaptureAward_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      CaptureAward_descriptor_, &CaptureAward::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fData_2fCapture_2fCaptureAward_2eproto() {
  delete CaptureAward::default_instance_;
  delete CaptureAward_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fData_2fCapture_2fCaptureAward_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fData_2fCapture_2fCaptureAward_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Enums::protobuf_AddDesc_POGOProtos_2fEnums_2fActivityType_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n*POGOProtos/Data/Capture/CaptureAward.p"
    "roto\022\027POGOProtos.Data.Capture\032#POGOProto"
    "s/Enums/ActivityType.proto\"\202\001\n\014CaptureAw"
    "ard\0229\n\ractivity_type\030\001 \003(\0162\036.POGOProtos."
    "Enums.ActivityTypeB\002\020\001\022\016\n\002xp\030\002 \003(\005B\002\020\001\022\021"
    "\n\005candy\030\003 \003(\005B\002\020\001\022\024\n\010stardust\030\004 \003(\005B\002\020\001b"
    "\006proto3", 247);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Data/Capture/CaptureAward.proto", &protobuf_RegisterTypes);
  CaptureAward::default_instance_ = new CaptureAward();
  CaptureAward::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fData_2fCapture_2fCaptureAward_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fData_2fCapture_2fCaptureAward_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fData_2fCapture_2fCaptureAward_2eproto() {
    protobuf_AddDesc_POGOProtos_2fData_2fCapture_2fCaptureAward_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fData_2fCapture_2fCaptureAward_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CaptureAward::kActivityTypeFieldNumber;
const int CaptureAward::kXpFieldNumber;
const int CaptureAward::kCandyFieldNumber;
const int CaptureAward::kStardustFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CaptureAward::CaptureAward()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Data.Capture.CaptureAward)
}

void CaptureAward::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

CaptureAward::CaptureAward(const CaptureAward& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Data.Capture.CaptureAward)
}

void CaptureAward::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

CaptureAward::~CaptureAward() {
  // @@protoc_insertion_point(destructor:POGOProtos.Data.Capture.CaptureAward)
  SharedDtor();
}

void CaptureAward::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CaptureAward::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CaptureAward::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CaptureAward_descriptor_;
}

const CaptureAward& CaptureAward::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fData_2fCapture_2fCaptureAward_2eproto();
  return *default_instance_;
}

CaptureAward* CaptureAward::default_instance_ = NULL;

CaptureAward* CaptureAward::New(::google::protobuf::Arena* arena) const {
  CaptureAward* n = new CaptureAward;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CaptureAward::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Data.Capture.CaptureAward)
  activity_type_.Clear();
  xp_.Clear();
  candy_.Clear();
  stardust_.Clear();
}

bool CaptureAward::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Data.Capture.CaptureAward)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .POGOProtos.Enums.ActivityType activity_type = 1 [packed = true];
      case 1: {
        if (tag == 10) {
          ::google::protobuf::uint32 length;
          DO_(input->ReadVarint32(&length));
          ::google::protobuf::io::CodedInputStream::Limit limit = input->PushLimit(length);
          while (input->BytesUntilLimit() > 0) {
            int value;
            DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
            add_activity_type(static_cast< ::POGOProtos::Enums::ActivityType >(value));
          }
          input->PopLimit(limit);
        } else if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          add_activity_type(static_cast< ::POGOProtos::Enums::ActivityType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_xp;
        break;
      }

      // repeated int32 xp = 2 [packed = true];
      case 2: {
        if (tag == 18) {
         parse_xp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_xp())));
        } else if (tag == 16) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 18, input, this->mutable_xp())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_candy;
        break;
      }

      // repeated int32 candy = 3 [packed = true];
      case 3: {
        if (tag == 26) {
         parse_candy:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_candy())));
        } else if (tag == 24) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 26, input, this->mutable_candy())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_stardust;
        break;
      }

      // repeated int32 stardust = 4 [packed = true];
      case 4: {
        if (tag == 34) {
         parse_stardust:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_stardust())));
        } else if (tag == 32) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 34, input, this->mutable_stardust())));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Data.Capture.CaptureAward)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Data.Capture.CaptureAward)
  return false;
#undef DO_
}

void CaptureAward::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Data.Capture.CaptureAward)
  // repeated .POGOProtos.Enums.ActivityType activity_type = 1 [packed = true];
  if (this->activity_type_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      output);
    output->WriteVarint32(_activity_type_cached_byte_size_);
  }
  for (int i = 0; i < this->activity_type_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteEnumNoTag(
      this->activity_type(i), output);
  }

  // repeated int32 xp = 2 [packed = true];
  if (this->xp_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(2, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_xp_cached_byte_size_);
  }
  for (int i = 0; i < this->xp_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->xp(i), output);
  }

  // repeated int32 candy = 3 [packed = true];
  if (this->candy_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(3, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_candy_cached_byte_size_);
  }
  for (int i = 0; i < this->candy_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->candy(i), output);
  }

  // repeated int32 stardust = 4 [packed = true];
  if (this->stardust_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(4, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_stardust_cached_byte_size_);
  }
  for (int i = 0; i < this->stardust_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->stardust(i), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Data.Capture.CaptureAward)
}

::google::protobuf::uint8* CaptureAward::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Data.Capture.CaptureAward)
  // repeated .POGOProtos.Enums.ActivityType activity_type = 1 [packed = true];
  if (this->activity_type_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(    _activity_type_cached_byte_size_, target);
  }
  for (int i = 0; i < this->activity_type_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumNoTagToArray(
      this->activity_type(i), target);
  }

  // repeated int32 xp = 2 [packed = true];
  if (this->xp_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      2,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _xp_cached_byte_size_, target);
  }
  for (int i = 0; i < this->xp_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->xp(i), target);
  }

  // repeated int32 candy = 3 [packed = true];
  if (this->candy_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _candy_cached_byte_size_, target);
  }
  for (int i = 0; i < this->candy_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->candy(i), target);
  }

  // repeated int32 stardust = 4 [packed = true];
  if (this->stardust_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      4,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _stardust_cached_byte_size_, target);
  }
  for (int i = 0; i < this->stardust_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->stardust(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Data.Capture.CaptureAward)
  return target;
}

int CaptureAward::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Data.Capture.CaptureAward)
  int total_size = 0;

  // repeated .POGOProtos.Enums.ActivityType activity_type = 1 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->activity_type_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::EnumSize(
        this->activity_type(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _activity_type_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated int32 xp = 2 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->xp_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->xp(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _xp_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated int32 candy = 3 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->candy_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->candy(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _candy_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated int32 stardust = 4 [packed = true];
  {
    int data_size = 0;
    for (int i = 0; i < this->stardust_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->stardust(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _stardust_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CaptureAward::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Data.Capture.CaptureAward)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const CaptureAward* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const CaptureAward>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Data.Capture.CaptureAward)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Data.Capture.CaptureAward)
    MergeFrom(*source);
  }
}

void CaptureAward::MergeFrom(const CaptureAward& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Data.Capture.CaptureAward)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  activity_type_.MergeFrom(from.activity_type_);
  xp_.MergeFrom(from.xp_);
  candy_.MergeFrom(from.candy_);
  stardust_.MergeFrom(from.stardust_);
}

void CaptureAward::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Data.Capture.CaptureAward)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CaptureAward::CopyFrom(const CaptureAward& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Data.Capture.CaptureAward)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CaptureAward::IsInitialized() const {

  return true;
}

void CaptureAward::Swap(CaptureAward* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CaptureAward::InternalSwap(CaptureAward* other) {
  activity_type_.UnsafeArenaSwap(&other->activity_type_);
  xp_.UnsafeArenaSwap(&other->xp_);
  candy_.UnsafeArenaSwap(&other->candy_);
  stardust_.UnsafeArenaSwap(&other->stardust_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CaptureAward::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CaptureAward_descriptor_;
  metadata.reflection = CaptureAward_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CaptureAward

// repeated .POGOProtos.Enums.ActivityType activity_type = 1 [packed = true];
int CaptureAward::activity_type_size() const {
  return activity_type_.size();
}
void CaptureAward::clear_activity_type() {
  activity_type_.Clear();
}
 ::POGOProtos::Enums::ActivityType CaptureAward::activity_type(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Capture.CaptureAward.activity_type)
  return static_cast< ::POGOProtos::Enums::ActivityType >(activity_type_.Get(index));
}
 void CaptureAward::set_activity_type(int index, ::POGOProtos::Enums::ActivityType value) {
  activity_type_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Capture.CaptureAward.activity_type)
}
 void CaptureAward::add_activity_type(::POGOProtos::Enums::ActivityType value) {
  activity_type_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Data.Capture.CaptureAward.activity_type)
}
 const ::google::protobuf::RepeatedField<int>&
CaptureAward::activity_type() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Data.Capture.CaptureAward.activity_type)
  return activity_type_;
}
 ::google::protobuf::RepeatedField<int>*
CaptureAward::mutable_activity_type() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Data.Capture.CaptureAward.activity_type)
  return &activity_type_;
}

// repeated int32 xp = 2 [packed = true];
int CaptureAward::xp_size() const {
  return xp_.size();
}
void CaptureAward::clear_xp() {
  xp_.Clear();
}
 ::google::protobuf::int32 CaptureAward::xp(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Capture.CaptureAward.xp)
  return xp_.Get(index);
}
 void CaptureAward::set_xp(int index, ::google::protobuf::int32 value) {
  xp_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Capture.CaptureAward.xp)
}
 void CaptureAward::add_xp(::google::protobuf::int32 value) {
  xp_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Data.Capture.CaptureAward.xp)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
CaptureAward::xp() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Data.Capture.CaptureAward.xp)
  return xp_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
CaptureAward::mutable_xp() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Data.Capture.CaptureAward.xp)
  return &xp_;
}

// repeated int32 candy = 3 [packed = true];
int CaptureAward::candy_size() const {
  return candy_.size();
}
void CaptureAward::clear_candy() {
  candy_.Clear();
}
 ::google::protobuf::int32 CaptureAward::candy(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Capture.CaptureAward.candy)
  return candy_.Get(index);
}
 void CaptureAward::set_candy(int index, ::google::protobuf::int32 value) {
  candy_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Capture.CaptureAward.candy)
}
 void CaptureAward::add_candy(::google::protobuf::int32 value) {
  candy_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Data.Capture.CaptureAward.candy)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
CaptureAward::candy() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Data.Capture.CaptureAward.candy)
  return candy_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
CaptureAward::mutable_candy() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Data.Capture.CaptureAward.candy)
  return &candy_;
}

// repeated int32 stardust = 4 [packed = true];
int CaptureAward::stardust_size() const {
  return stardust_.size();
}
void CaptureAward::clear_stardust() {
  stardust_.Clear();
}
 ::google::protobuf::int32 CaptureAward::stardust(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Capture.CaptureAward.stardust)
  return stardust_.Get(index);
}
 void CaptureAward::set_stardust(int index, ::google::protobuf::int32 value) {
  stardust_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Capture.CaptureAward.stardust)
}
 void CaptureAward::add_stardust(::google::protobuf::int32 value) {
  stardust_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Data.Capture.CaptureAward.stardust)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
CaptureAward::stardust() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Data.Capture.CaptureAward.stardust)
  return stardust_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
CaptureAward::mutable_stardust() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Data.Capture.CaptureAward.stardust)
  return &stardust_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Capture
}  // namespace Data
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
