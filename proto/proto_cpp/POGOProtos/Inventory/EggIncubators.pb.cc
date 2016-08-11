// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Inventory/EggIncubators.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Inventory/EggIncubators.pb.h"

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
namespace Inventory {

namespace {

const ::google::protobuf::Descriptor* EggIncubators_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EggIncubators_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fInventory_2fEggIncubators_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fInventory_2fEggIncubators_2eproto() {
  protobuf_AddDesc_POGOProtos_2fInventory_2fEggIncubators_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Inventory/EggIncubators.proto");
  GOOGLE_CHECK(file != NULL);
  EggIncubators_descriptor_ = file->message_type(0);
  static const int EggIncubators_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EggIncubators, egg_incubator_),
  };
  EggIncubators_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      EggIncubators_descriptor_,
      EggIncubators::default_instance_,
      EggIncubators_offsets_,
      -1,
      -1,
      -1,
      sizeof(EggIncubators),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EggIncubators, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EggIncubators, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fInventory_2fEggIncubators_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      EggIncubators_descriptor_, &EggIncubators::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fInventory_2fEggIncubators_2eproto() {
  delete EggIncubators::default_instance_;
  delete EggIncubators_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fInventory_2fEggIncubators_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fInventory_2fEggIncubators_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Inventory::protobuf_AddDesc_POGOProtos_2fInventory_2fEggIncubator_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n(POGOProtos/Inventory/EggIncubators.pro"
    "to\022\024POGOProtos.Inventory\032\'POGOProtos/Inv"
    "entory/EggIncubator.proto\"J\n\rEggIncubato"
    "rs\0229\n\regg_incubator\030\001 \003(\0132\".POGOProtos.I"
    "nventory.EggIncubatorb\006proto3", 189);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Inventory/EggIncubators.proto", &protobuf_RegisterTypes);
  EggIncubators::default_instance_ = new EggIncubators();
  EggIncubators::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fInventory_2fEggIncubators_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fInventory_2fEggIncubators_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fInventory_2fEggIncubators_2eproto() {
    protobuf_AddDesc_POGOProtos_2fInventory_2fEggIncubators_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fInventory_2fEggIncubators_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EggIncubators::kEggIncubatorFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EggIncubators::EggIncubators()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Inventory.EggIncubators)
}

void EggIncubators::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

EggIncubators::EggIncubators(const EggIncubators& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Inventory.EggIncubators)
}

void EggIncubators::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

EggIncubators::~EggIncubators() {
  // @@protoc_insertion_point(destructor:POGOProtos.Inventory.EggIncubators)
  SharedDtor();
}

void EggIncubators::SharedDtor() {
  if (this != default_instance_) {
  }
}

void EggIncubators::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EggIncubators::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EggIncubators_descriptor_;
}

const EggIncubators& EggIncubators::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fInventory_2fEggIncubators_2eproto();
  return *default_instance_;
}

EggIncubators* EggIncubators::default_instance_ = NULL;

EggIncubators* EggIncubators::New(::google::protobuf::Arena* arena) const {
  EggIncubators* n = new EggIncubators;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EggIncubators::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Inventory.EggIncubators)
  egg_incubator_.Clear();
}

bool EggIncubators::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Inventory.EggIncubators)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .POGOProtos.Inventory.EggIncubator egg_incubator = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_egg_incubator:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_egg_incubator()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_egg_incubator;
        input->UnsafeDecrementRecursionDepth();
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Inventory.EggIncubators)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Inventory.EggIncubators)
  return false;
#undef DO_
}

void EggIncubators::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Inventory.EggIncubators)
  // repeated .POGOProtos.Inventory.EggIncubator egg_incubator = 1;
  for (unsigned int i = 0, n = this->egg_incubator_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->egg_incubator(i), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Inventory.EggIncubators)
}

::google::protobuf::uint8* EggIncubators::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Inventory.EggIncubators)
  // repeated .POGOProtos.Inventory.EggIncubator egg_incubator = 1;
  for (unsigned int i = 0, n = this->egg_incubator_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->egg_incubator(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Inventory.EggIncubators)
  return target;
}

int EggIncubators::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Inventory.EggIncubators)
  int total_size = 0;

  // repeated .POGOProtos.Inventory.EggIncubator egg_incubator = 1;
  total_size += 1 * this->egg_incubator_size();
  for (int i = 0; i < this->egg_incubator_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->egg_incubator(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EggIncubators::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Inventory.EggIncubators)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const EggIncubators* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const EggIncubators>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Inventory.EggIncubators)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Inventory.EggIncubators)
    MergeFrom(*source);
  }
}

void EggIncubators::MergeFrom(const EggIncubators& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Inventory.EggIncubators)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  egg_incubator_.MergeFrom(from.egg_incubator_);
}

void EggIncubators::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Inventory.EggIncubators)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EggIncubators::CopyFrom(const EggIncubators& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Inventory.EggIncubators)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EggIncubators::IsInitialized() const {

  return true;
}

void EggIncubators::Swap(EggIncubators* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EggIncubators::InternalSwap(EggIncubators* other) {
  egg_incubator_.UnsafeArenaSwap(&other->egg_incubator_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata EggIncubators::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EggIncubators_descriptor_;
  metadata.reflection = EggIncubators_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EggIncubators

// repeated .POGOProtos.Inventory.EggIncubator egg_incubator = 1;
int EggIncubators::egg_incubator_size() const {
  return egg_incubator_.size();
}
void EggIncubators::clear_egg_incubator() {
  egg_incubator_.Clear();
}
const ::POGOProtos::Inventory::EggIncubator& EggIncubators::egg_incubator(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.EggIncubators.egg_incubator)
  return egg_incubator_.Get(index);
}
::POGOProtos::Inventory::EggIncubator* EggIncubators::mutable_egg_incubator(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Inventory.EggIncubators.egg_incubator)
  return egg_incubator_.Mutable(index);
}
::POGOProtos::Inventory::EggIncubator* EggIncubators::add_egg_incubator() {
  // @@protoc_insertion_point(field_add:POGOProtos.Inventory.EggIncubators.egg_incubator)
  return egg_incubator_.Add();
}
::google::protobuf::RepeatedPtrField< ::POGOProtos::Inventory::EggIncubator >*
EggIncubators::mutable_egg_incubator() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Inventory.EggIncubators.egg_incubator)
  return &egg_incubator_;
}
const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Inventory::EggIncubator >&
EggIncubators::egg_incubator() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Inventory.EggIncubators.egg_incubator)
  return egg_incubator_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Inventory
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)