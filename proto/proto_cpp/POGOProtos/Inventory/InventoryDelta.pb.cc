// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Inventory/InventoryDelta.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Inventory/InventoryDelta.pb.h"

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

const ::google::protobuf::Descriptor* InventoryDelta_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  InventoryDelta_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fInventory_2fInventoryDelta_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fInventory_2fInventoryDelta_2eproto() {
  protobuf_AddDesc_POGOProtos_2fInventory_2fInventoryDelta_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Inventory/InventoryDelta.proto");
  GOOGLE_CHECK(file != NULL);
  InventoryDelta_descriptor_ = file->message_type(0);
  static const int InventoryDelta_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InventoryDelta, original_timestamp_ms_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InventoryDelta, new_timestamp_ms_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InventoryDelta, inventory_items_),
  };
  InventoryDelta_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      InventoryDelta_descriptor_,
      InventoryDelta::default_instance_,
      InventoryDelta_offsets_,
      -1,
      -1,
      -1,
      sizeof(InventoryDelta),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InventoryDelta, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InventoryDelta, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fInventory_2fInventoryDelta_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      InventoryDelta_descriptor_, &InventoryDelta::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fInventory_2fInventoryDelta_2eproto() {
  delete InventoryDelta::default_instance_;
  delete InventoryDelta_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fInventory_2fInventoryDelta_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fInventory_2fInventoryDelta_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Inventory::protobuf_AddDesc_POGOProtos_2fInventory_2fInventoryItem_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n)POGOProtos/Inventory/InventoryDelta.pr"
    "oto\022\024POGOProtos.Inventory\032(POGOProtos/In"
    "ventory/InventoryItem.proto\"\207\001\n\016Inventor"
    "yDelta\022\035\n\025original_timestamp_ms\030\001 \001(\003\022\030\n"
    "\020new_timestamp_ms\030\002 \001(\003\022<\n\017inventory_ite"
    "ms\030\003 \003(\0132#.POGOProtos.Inventory.Inventor"
    "yItemb\006proto3", 253);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Inventory/InventoryDelta.proto", &protobuf_RegisterTypes);
  InventoryDelta::default_instance_ = new InventoryDelta();
  InventoryDelta::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fInventory_2fInventoryDelta_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fInventory_2fInventoryDelta_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fInventory_2fInventoryDelta_2eproto() {
    protobuf_AddDesc_POGOProtos_2fInventory_2fInventoryDelta_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fInventory_2fInventoryDelta_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int InventoryDelta::kOriginalTimestampMsFieldNumber;
const int InventoryDelta::kNewTimestampMsFieldNumber;
const int InventoryDelta::kInventoryItemsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

InventoryDelta::InventoryDelta()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Inventory.InventoryDelta)
}

void InventoryDelta::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

InventoryDelta::InventoryDelta(const InventoryDelta& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Inventory.InventoryDelta)
}

void InventoryDelta::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  original_timestamp_ms_ = GOOGLE_LONGLONG(0);
  new_timestamp_ms_ = GOOGLE_LONGLONG(0);
}

InventoryDelta::~InventoryDelta() {
  // @@protoc_insertion_point(destructor:POGOProtos.Inventory.InventoryDelta)
  SharedDtor();
}

void InventoryDelta::SharedDtor() {
  if (this != default_instance_) {
  }
}

void InventoryDelta::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* InventoryDelta::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return InventoryDelta_descriptor_;
}

const InventoryDelta& InventoryDelta::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fInventory_2fInventoryDelta_2eproto();
  return *default_instance_;
}

InventoryDelta* InventoryDelta::default_instance_ = NULL;

InventoryDelta* InventoryDelta::New(::google::protobuf::Arena* arena) const {
  InventoryDelta* n = new InventoryDelta;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void InventoryDelta::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Inventory.InventoryDelta)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(InventoryDelta, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<InventoryDelta*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(original_timestamp_ms_, new_timestamp_ms_);

#undef ZR_HELPER_
#undef ZR_

  inventory_items_.Clear();
}

bool InventoryDelta::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Inventory.InventoryDelta)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 original_timestamp_ms = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &original_timestamp_ms_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_new_timestamp_ms;
        break;
      }

      // optional int64 new_timestamp_ms = 2;
      case 2: {
        if (tag == 16) {
         parse_new_timestamp_ms:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &new_timestamp_ms_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_inventory_items;
        break;
      }

      // repeated .POGOProtos.Inventory.InventoryItem inventory_items = 3;
      case 3: {
        if (tag == 26) {
         parse_inventory_items:
          DO_(input->IncrementRecursionDepth());
         parse_loop_inventory_items:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_inventory_items()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_loop_inventory_items;
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Inventory.InventoryDelta)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Inventory.InventoryDelta)
  return false;
#undef DO_
}

void InventoryDelta::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Inventory.InventoryDelta)
  // optional int64 original_timestamp_ms = 1;
  if (this->original_timestamp_ms() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->original_timestamp_ms(), output);
  }

  // optional int64 new_timestamp_ms = 2;
  if (this->new_timestamp_ms() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->new_timestamp_ms(), output);
  }

  // repeated .POGOProtos.Inventory.InventoryItem inventory_items = 3;
  for (unsigned int i = 0, n = this->inventory_items_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->inventory_items(i), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Inventory.InventoryDelta)
}

::google::protobuf::uint8* InventoryDelta::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Inventory.InventoryDelta)
  // optional int64 original_timestamp_ms = 1;
  if (this->original_timestamp_ms() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->original_timestamp_ms(), target);
  }

  // optional int64 new_timestamp_ms = 2;
  if (this->new_timestamp_ms() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->new_timestamp_ms(), target);
  }

  // repeated .POGOProtos.Inventory.InventoryItem inventory_items = 3;
  for (unsigned int i = 0, n = this->inventory_items_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, this->inventory_items(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Inventory.InventoryDelta)
  return target;
}

int InventoryDelta::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Inventory.InventoryDelta)
  int total_size = 0;

  // optional int64 original_timestamp_ms = 1;
  if (this->original_timestamp_ms() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->original_timestamp_ms());
  }

  // optional int64 new_timestamp_ms = 2;
  if (this->new_timestamp_ms() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->new_timestamp_ms());
  }

  // repeated .POGOProtos.Inventory.InventoryItem inventory_items = 3;
  total_size += 1 * this->inventory_items_size();
  for (int i = 0; i < this->inventory_items_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->inventory_items(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InventoryDelta::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Inventory.InventoryDelta)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const InventoryDelta* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const InventoryDelta>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Inventory.InventoryDelta)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Inventory.InventoryDelta)
    MergeFrom(*source);
  }
}

void InventoryDelta::MergeFrom(const InventoryDelta& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Inventory.InventoryDelta)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  inventory_items_.MergeFrom(from.inventory_items_);
  if (from.original_timestamp_ms() != 0) {
    set_original_timestamp_ms(from.original_timestamp_ms());
  }
  if (from.new_timestamp_ms() != 0) {
    set_new_timestamp_ms(from.new_timestamp_ms());
  }
}

void InventoryDelta::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Inventory.InventoryDelta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InventoryDelta::CopyFrom(const InventoryDelta& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Inventory.InventoryDelta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InventoryDelta::IsInitialized() const {

  return true;
}

void InventoryDelta::Swap(InventoryDelta* other) {
  if (other == this) return;
  InternalSwap(other);
}
void InventoryDelta::InternalSwap(InventoryDelta* other) {
  std::swap(original_timestamp_ms_, other->original_timestamp_ms_);
  std::swap(new_timestamp_ms_, other->new_timestamp_ms_);
  inventory_items_.UnsafeArenaSwap(&other->inventory_items_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata InventoryDelta::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = InventoryDelta_descriptor_;
  metadata.reflection = InventoryDelta_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// InventoryDelta

// optional int64 original_timestamp_ms = 1;
void InventoryDelta::clear_original_timestamp_ms() {
  original_timestamp_ms_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 InventoryDelta::original_timestamp_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.InventoryDelta.original_timestamp_ms)
  return original_timestamp_ms_;
}
 void InventoryDelta::set_original_timestamp_ms(::google::protobuf::int64 value) {
  
  original_timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.InventoryDelta.original_timestamp_ms)
}

// optional int64 new_timestamp_ms = 2;
void InventoryDelta::clear_new_timestamp_ms() {
  new_timestamp_ms_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 InventoryDelta::new_timestamp_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.InventoryDelta.new_timestamp_ms)
  return new_timestamp_ms_;
}
 void InventoryDelta::set_new_timestamp_ms(::google::protobuf::int64 value) {
  
  new_timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.InventoryDelta.new_timestamp_ms)
}

// repeated .POGOProtos.Inventory.InventoryItem inventory_items = 3;
int InventoryDelta::inventory_items_size() const {
  return inventory_items_.size();
}
void InventoryDelta::clear_inventory_items() {
  inventory_items_.Clear();
}
const ::POGOProtos::Inventory::InventoryItem& InventoryDelta::inventory_items(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.InventoryDelta.inventory_items)
  return inventory_items_.Get(index);
}
::POGOProtos::Inventory::InventoryItem* InventoryDelta::mutable_inventory_items(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Inventory.InventoryDelta.inventory_items)
  return inventory_items_.Mutable(index);
}
::POGOProtos::Inventory::InventoryItem* InventoryDelta::add_inventory_items() {
  // @@protoc_insertion_point(field_add:POGOProtos.Inventory.InventoryDelta.inventory_items)
  return inventory_items_.Add();
}
::google::protobuf::RepeatedPtrField< ::POGOProtos::Inventory::InventoryItem >*
InventoryDelta::mutable_inventory_items() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Inventory.InventoryDelta.inventory_items)
  return &inventory_items_;
}
const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Inventory::InventoryItem >&
InventoryDelta::inventory_items() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Inventory.InventoryDelta.inventory_items)
  return inventory_items_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Inventory
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
