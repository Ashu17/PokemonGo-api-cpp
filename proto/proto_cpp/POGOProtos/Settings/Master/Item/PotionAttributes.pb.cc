// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Settings/Master/Item/PotionAttributes.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Settings/Master/Item/PotionAttributes.pb.h"

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
namespace Settings {
namespace Master {
namespace Item {

namespace {

const ::google::protobuf::Descriptor* PotionAttributes_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PotionAttributes_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fItem_2fPotionAttributes_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fItem_2fPotionAttributes_2eproto() {
  protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fItem_2fPotionAttributes_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Settings/Master/Item/PotionAttributes.proto");
  GOOGLE_CHECK(file != NULL);
  PotionAttributes_descriptor_ = file->message_type(0);
  static const int PotionAttributes_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PotionAttributes, sta_percent_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PotionAttributes, sta_amount_),
  };
  PotionAttributes_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PotionAttributes_descriptor_,
      PotionAttributes::default_instance_,
      PotionAttributes_offsets_,
      -1,
      -1,
      -1,
      sizeof(PotionAttributes),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PotionAttributes, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PotionAttributes, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fItem_2fPotionAttributes_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PotionAttributes_descriptor_, &PotionAttributes::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fItem_2fPotionAttributes_2eproto() {
  delete PotionAttributes::default_instance_;
  delete PotionAttributes_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fItem_2fPotionAttributes_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fItem_2fPotionAttributes_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n6POGOProtos/Settings/Master/Item/Potion"
    "Attributes.proto\022\037POGOProtos.Settings.Ma"
    "ster.Item\";\n\020PotionAttributes\022\023\n\013sta_per"
    "cent\030\001 \001(\002\022\022\n\nsta_amount\030\002 \001(\005b\006proto3", 158);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Settings/Master/Item/PotionAttributes.proto", &protobuf_RegisterTypes);
  PotionAttributes::default_instance_ = new PotionAttributes();
  PotionAttributes::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fItem_2fPotionAttributes_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fSettings_2fMaster_2fItem_2fPotionAttributes_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fSettings_2fMaster_2fItem_2fPotionAttributes_2eproto() {
    protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fItem_2fPotionAttributes_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fSettings_2fMaster_2fItem_2fPotionAttributes_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PotionAttributes::kStaPercentFieldNumber;
const int PotionAttributes::kStaAmountFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PotionAttributes::PotionAttributes()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Settings.Master.Item.PotionAttributes)
}

void PotionAttributes::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

PotionAttributes::PotionAttributes(const PotionAttributes& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Settings.Master.Item.PotionAttributes)
}

void PotionAttributes::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  sta_percent_ = 0;
  sta_amount_ = 0;
}

PotionAttributes::~PotionAttributes() {
  // @@protoc_insertion_point(destructor:POGOProtos.Settings.Master.Item.PotionAttributes)
  SharedDtor();
}

void PotionAttributes::SharedDtor() {
  if (this != default_instance_) {
  }
}

void PotionAttributes::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PotionAttributes::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PotionAttributes_descriptor_;
}

const PotionAttributes& PotionAttributes::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fItem_2fPotionAttributes_2eproto();
  return *default_instance_;
}

PotionAttributes* PotionAttributes::default_instance_ = NULL;

PotionAttributes* PotionAttributes::New(::google::protobuf::Arena* arena) const {
  PotionAttributes* n = new PotionAttributes;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PotionAttributes::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Settings.Master.Item.PotionAttributes)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(PotionAttributes, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<PotionAttributes*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(sta_percent_, sta_amount_);

#undef ZR_HELPER_
#undef ZR_

}

bool PotionAttributes::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Settings.Master.Item.PotionAttributes)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional float sta_percent = 1;
      case 1: {
        if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &sta_percent_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_sta_amount;
        break;
      }

      // optional int32 sta_amount = 2;
      case 2: {
        if (tag == 16) {
         parse_sta_amount:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sta_amount_)));

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
  // @@protoc_insertion_point(parse_success:POGOProtos.Settings.Master.Item.PotionAttributes)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Settings.Master.Item.PotionAttributes)
  return false;
#undef DO_
}

void PotionAttributes::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Settings.Master.Item.PotionAttributes)
  // optional float sta_percent = 1;
  if (this->sta_percent() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->sta_percent(), output);
  }

  // optional int32 sta_amount = 2;
  if (this->sta_amount() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->sta_amount(), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Settings.Master.Item.PotionAttributes)
}

::google::protobuf::uint8* PotionAttributes::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Settings.Master.Item.PotionAttributes)
  // optional float sta_percent = 1;
  if (this->sta_percent() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->sta_percent(), target);
  }

  // optional int32 sta_amount = 2;
  if (this->sta_amount() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->sta_amount(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Settings.Master.Item.PotionAttributes)
  return target;
}

int PotionAttributes::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Settings.Master.Item.PotionAttributes)
  int total_size = 0;

  // optional float sta_percent = 1;
  if (this->sta_percent() != 0) {
    total_size += 1 + 4;
  }

  // optional int32 sta_amount = 2;
  if (this->sta_amount() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->sta_amount());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PotionAttributes::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Settings.Master.Item.PotionAttributes)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const PotionAttributes* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PotionAttributes>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Settings.Master.Item.PotionAttributes)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Settings.Master.Item.PotionAttributes)
    MergeFrom(*source);
  }
}

void PotionAttributes::MergeFrom(const PotionAttributes& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Settings.Master.Item.PotionAttributes)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.sta_percent() != 0) {
    set_sta_percent(from.sta_percent());
  }
  if (from.sta_amount() != 0) {
    set_sta_amount(from.sta_amount());
  }
}

void PotionAttributes::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Settings.Master.Item.PotionAttributes)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PotionAttributes::CopyFrom(const PotionAttributes& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Settings.Master.Item.PotionAttributes)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PotionAttributes::IsInitialized() const {

  return true;
}

void PotionAttributes::Swap(PotionAttributes* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PotionAttributes::InternalSwap(PotionAttributes* other) {
  std::swap(sta_percent_, other->sta_percent_);
  std::swap(sta_amount_, other->sta_amount_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PotionAttributes::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PotionAttributes_descriptor_;
  metadata.reflection = PotionAttributes_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PotionAttributes

// optional float sta_percent = 1;
void PotionAttributes::clear_sta_percent() {
  sta_percent_ = 0;
}
 float PotionAttributes::sta_percent() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.Item.PotionAttributes.sta_percent)
  return sta_percent_;
}
 void PotionAttributes::set_sta_percent(float value) {
  
  sta_percent_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.Item.PotionAttributes.sta_percent)
}

// optional int32 sta_amount = 2;
void PotionAttributes::clear_sta_amount() {
  sta_amount_ = 0;
}
 ::google::protobuf::int32 PotionAttributes::sta_amount() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.Item.PotionAttributes.sta_amount)
  return sta_amount_;
}
 void PotionAttributes::set_sta_amount(::google::protobuf::int32 value) {
  
  sta_amount_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.Item.PotionAttributes.sta_amount)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Item
}  // namespace Master
}  // namespace Settings
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
