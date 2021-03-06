// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Settings/Master/IapItemDisplay.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Settings/Master/IapItemDisplay.pb.h"

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

namespace {

const ::google::protobuf::Descriptor* IapItemDisplay_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  IapItemDisplay_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fIapItemDisplay_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fIapItemDisplay_2eproto() {
  protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fIapItemDisplay_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Settings/Master/IapItemDisplay.proto");
  GOOGLE_CHECK(file != NULL);
  IapItemDisplay_descriptor_ = file->message_type(0);
  static const int IapItemDisplay_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IapItemDisplay, sku_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IapItemDisplay, category_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IapItemDisplay, sort_order_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IapItemDisplay, item_ids_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IapItemDisplay, counts_),
  };
  IapItemDisplay_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      IapItemDisplay_descriptor_,
      IapItemDisplay::default_instance_,
      IapItemDisplay_offsets_,
      -1,
      -1,
      -1,
      sizeof(IapItemDisplay),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IapItemDisplay, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IapItemDisplay, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fIapItemDisplay_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      IapItemDisplay_descriptor_, &IapItemDisplay::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fIapItemDisplay_2eproto() {
  delete IapItemDisplay::default_instance_;
  delete IapItemDisplay_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fIapItemDisplay_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fIapItemDisplay_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Enums::protobuf_AddDesc_POGOProtos_2fEnums_2fIapItemCategory_2eproto();
  ::POGOProtos::Inventory::Item::protobuf_AddDesc_POGOProtos_2fInventory_2fItem_2fItemId_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n/POGOProtos/Settings/Master/IapItemDisp"
    "lay.proto\022\032POGOProtos.Settings.Master\032&P"
    "OGOProtos/Enums/IapItemCategory.proto\032&P"
    "OGOProtos/Inventory/Item/ItemId.proto\"\257\001"
    "\n\016IapItemDisplay\022\013\n\003sku\030\001 \001(\t\0227\n\010categor"
    "y\030\002 \001(\0162%.POGOProtos.Enums.HoloIapItemCa"
    "tegory\022\022\n\nsort_order\030\003 \001(\005\0223\n\010item_ids\030\004"
    " \003(\0162!.POGOProtos.Inventory.Item.ItemId\022"
    "\016\n\006counts\030\005 \003(\005b\006proto3", 343);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Settings/Master/IapItemDisplay.proto", &protobuf_RegisterTypes);
  IapItemDisplay::default_instance_ = new IapItemDisplay();
  IapItemDisplay::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fIapItemDisplay_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fSettings_2fMaster_2fIapItemDisplay_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fSettings_2fMaster_2fIapItemDisplay_2eproto() {
    protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fIapItemDisplay_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fSettings_2fMaster_2fIapItemDisplay_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int IapItemDisplay::kSkuFieldNumber;
const int IapItemDisplay::kCategoryFieldNumber;
const int IapItemDisplay::kSortOrderFieldNumber;
const int IapItemDisplay::kItemIdsFieldNumber;
const int IapItemDisplay::kCountsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

IapItemDisplay::IapItemDisplay()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Settings.Master.IapItemDisplay)
}

void IapItemDisplay::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

IapItemDisplay::IapItemDisplay(const IapItemDisplay& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Settings.Master.IapItemDisplay)
}

void IapItemDisplay::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  sku_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  category_ = 0;
  sort_order_ = 0;
}

IapItemDisplay::~IapItemDisplay() {
  // @@protoc_insertion_point(destructor:POGOProtos.Settings.Master.IapItemDisplay)
  SharedDtor();
}

void IapItemDisplay::SharedDtor() {
  sku_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void IapItemDisplay::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* IapItemDisplay::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return IapItemDisplay_descriptor_;
}

const IapItemDisplay& IapItemDisplay::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fIapItemDisplay_2eproto();
  return *default_instance_;
}

IapItemDisplay* IapItemDisplay::default_instance_ = NULL;

IapItemDisplay* IapItemDisplay::New(::google::protobuf::Arena* arena) const {
  IapItemDisplay* n = new IapItemDisplay;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void IapItemDisplay::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Settings.Master.IapItemDisplay)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(IapItemDisplay, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<IapItemDisplay*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(category_, sort_order_);
  sku_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

  item_ids_.Clear();
  counts_.Clear();
}

bool IapItemDisplay::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Settings.Master.IapItemDisplay)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string sku = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sku()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->sku().data(), this->sku().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "POGOProtos.Settings.Master.IapItemDisplay.sku"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_category;
        break;
      }

      // optional .POGOProtos.Enums.HoloIapItemCategory category = 2;
      case 2: {
        if (tag == 16) {
         parse_category:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_category(static_cast< ::POGOProtos::Enums::HoloIapItemCategory >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_sort_order;
        break;
      }

      // optional int32 sort_order = 3;
      case 3: {
        if (tag == 24) {
         parse_sort_order:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sort_order_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_item_ids;
        break;
      }

      // repeated .POGOProtos.Inventory.Item.ItemId item_ids = 4;
      case 4: {
        if (tag == 34) {
         parse_item_ids:
          ::google::protobuf::uint32 length;
          DO_(input->ReadVarint32(&length));
          ::google::protobuf::io::CodedInputStream::Limit limit = input->PushLimit(length);
          while (input->BytesUntilLimit() > 0) {
            int value;
            DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
            add_item_ids(static_cast< ::POGOProtos::Inventory::Item::ItemId >(value));
          }
          input->PopLimit(limit);
        } else if (tag == 32) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          add_item_ids(static_cast< ::POGOProtos::Inventory::Item::ItemId >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_counts;
        break;
      }

      // repeated int32 counts = 5;
      case 5: {
        if (tag == 42) {
         parse_counts:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_counts())));
        } else if (tag == 40) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 42, input, this->mutable_counts())));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Settings.Master.IapItemDisplay)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Settings.Master.IapItemDisplay)
  return false;
#undef DO_
}

void IapItemDisplay::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Settings.Master.IapItemDisplay)
  // optional string sku = 1;
  if (this->sku().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sku().data(), this->sku().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Settings.Master.IapItemDisplay.sku");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->sku(), output);
  }

  // optional .POGOProtos.Enums.HoloIapItemCategory category = 2;
  if (this->category() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->category(), output);
  }

  // optional int32 sort_order = 3;
  if (this->sort_order() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->sort_order(), output);
  }

  // repeated .POGOProtos.Inventory.Item.ItemId item_ids = 4;
  if (this->item_ids_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(
      4,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      output);
    output->WriteVarint32(_item_ids_cached_byte_size_);
  }
  for (int i = 0; i < this->item_ids_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteEnumNoTag(
      this->item_ids(i), output);
  }

  // repeated int32 counts = 5;
  if (this->counts_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(5, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_counts_cached_byte_size_);
  }
  for (int i = 0; i < this->counts_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32NoTag(
      this->counts(i), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Settings.Master.IapItemDisplay)
}

::google::protobuf::uint8* IapItemDisplay::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Settings.Master.IapItemDisplay)
  // optional string sku = 1;
  if (this->sku().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->sku().data(), this->sku().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Settings.Master.IapItemDisplay.sku");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->sku(), target);
  }

  // optional .POGOProtos.Enums.HoloIapItemCategory category = 2;
  if (this->category() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->category(), target);
  }

  // optional int32 sort_order = 3;
  if (this->sort_order() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->sort_order(), target);
  }

  // repeated .POGOProtos.Inventory.Item.ItemId item_ids = 4;
  if (this->item_ids_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      4,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(    _item_ids_cached_byte_size_, target);
  }
  for (int i = 0; i < this->item_ids_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumNoTagToArray(
      this->item_ids(i), target);
  }

  // repeated int32 counts = 5;
  if (this->counts_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      5,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _counts_cached_byte_size_, target);
  }
  for (int i = 0; i < this->counts_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32NoTagToArray(this->counts(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Settings.Master.IapItemDisplay)
  return target;
}

int IapItemDisplay::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Settings.Master.IapItemDisplay)
  int total_size = 0;

  // optional string sku = 1;
  if (this->sku().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->sku());
  }

  // optional .POGOProtos.Enums.HoloIapItemCategory category = 2;
  if (this->category() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->category());
  }

  // optional int32 sort_order = 3;
  if (this->sort_order() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->sort_order());
  }

  // repeated .POGOProtos.Inventory.Item.ItemId item_ids = 4;
  {
    int data_size = 0;
    for (int i = 0; i < this->item_ids_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::EnumSize(
        this->item_ids(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _item_ids_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated int32 counts = 5;
  {
    int data_size = 0;
    for (int i = 0; i < this->counts_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->counts(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _counts_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void IapItemDisplay::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Settings.Master.IapItemDisplay)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const IapItemDisplay* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const IapItemDisplay>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Settings.Master.IapItemDisplay)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Settings.Master.IapItemDisplay)
    MergeFrom(*source);
  }
}

void IapItemDisplay::MergeFrom(const IapItemDisplay& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Settings.Master.IapItemDisplay)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  item_ids_.MergeFrom(from.item_ids_);
  counts_.MergeFrom(from.counts_);
  if (from.sku().size() > 0) {

    sku_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sku_);
  }
  if (from.category() != 0) {
    set_category(from.category());
  }
  if (from.sort_order() != 0) {
    set_sort_order(from.sort_order());
  }
}

void IapItemDisplay::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Settings.Master.IapItemDisplay)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void IapItemDisplay::CopyFrom(const IapItemDisplay& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Settings.Master.IapItemDisplay)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IapItemDisplay::IsInitialized() const {

  return true;
}

void IapItemDisplay::Swap(IapItemDisplay* other) {
  if (other == this) return;
  InternalSwap(other);
}
void IapItemDisplay::InternalSwap(IapItemDisplay* other) {
  sku_.Swap(&other->sku_);
  std::swap(category_, other->category_);
  std::swap(sort_order_, other->sort_order_);
  item_ids_.UnsafeArenaSwap(&other->item_ids_);
  counts_.UnsafeArenaSwap(&other->counts_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata IapItemDisplay::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = IapItemDisplay_descriptor_;
  metadata.reflection = IapItemDisplay_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// IapItemDisplay

// optional string sku = 1;
void IapItemDisplay::clear_sku() {
  sku_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& IapItemDisplay::sku() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapItemDisplay.sku)
  return sku_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void IapItemDisplay::set_sku(const ::std::string& value) {
  
  sku_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapItemDisplay.sku)
}
 void IapItemDisplay::set_sku(const char* value) {
  
  sku_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Settings.Master.IapItemDisplay.sku)
}
 void IapItemDisplay::set_sku(const char* value, size_t size) {
  
  sku_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Settings.Master.IapItemDisplay.sku)
}
 ::std::string* IapItemDisplay::mutable_sku() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Settings.Master.IapItemDisplay.sku)
  return sku_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* IapItemDisplay::release_sku() {
  // @@protoc_insertion_point(field_release:POGOProtos.Settings.Master.IapItemDisplay.sku)
  
  return sku_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void IapItemDisplay::set_allocated_sku(::std::string* sku) {
  if (sku != NULL) {
    
  } else {
    
  }
  sku_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), sku);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Settings.Master.IapItemDisplay.sku)
}

// optional .POGOProtos.Enums.HoloIapItemCategory category = 2;
void IapItemDisplay::clear_category() {
  category_ = 0;
}
 ::POGOProtos::Enums::HoloIapItemCategory IapItemDisplay::category() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapItemDisplay.category)
  return static_cast< ::POGOProtos::Enums::HoloIapItemCategory >(category_);
}
 void IapItemDisplay::set_category(::POGOProtos::Enums::HoloIapItemCategory value) {
  
  category_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapItemDisplay.category)
}

// optional int32 sort_order = 3;
void IapItemDisplay::clear_sort_order() {
  sort_order_ = 0;
}
 ::google::protobuf::int32 IapItemDisplay::sort_order() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapItemDisplay.sort_order)
  return sort_order_;
}
 void IapItemDisplay::set_sort_order(::google::protobuf::int32 value) {
  
  sort_order_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapItemDisplay.sort_order)
}

// repeated .POGOProtos.Inventory.Item.ItemId item_ids = 4;
int IapItemDisplay::item_ids_size() const {
  return item_ids_.size();
}
void IapItemDisplay::clear_item_ids() {
  item_ids_.Clear();
}
 ::POGOProtos::Inventory::Item::ItemId IapItemDisplay::item_ids(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapItemDisplay.item_ids)
  return static_cast< ::POGOProtos::Inventory::Item::ItemId >(item_ids_.Get(index));
}
 void IapItemDisplay::set_item_ids(int index, ::POGOProtos::Inventory::Item::ItemId value) {
  item_ids_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapItemDisplay.item_ids)
}
 void IapItemDisplay::add_item_ids(::POGOProtos::Inventory::Item::ItemId value) {
  item_ids_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Settings.Master.IapItemDisplay.item_ids)
}
 const ::google::protobuf::RepeatedField<int>&
IapItemDisplay::item_ids() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Settings.Master.IapItemDisplay.item_ids)
  return item_ids_;
}
 ::google::protobuf::RepeatedField<int>*
IapItemDisplay::mutable_item_ids() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Settings.Master.IapItemDisplay.item_ids)
  return &item_ids_;
}

// repeated int32 counts = 5;
int IapItemDisplay::counts_size() const {
  return counts_.size();
}
void IapItemDisplay::clear_counts() {
  counts_.Clear();
}
 ::google::protobuf::int32 IapItemDisplay::counts(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapItemDisplay.counts)
  return counts_.Get(index);
}
 void IapItemDisplay::set_counts(int index, ::google::protobuf::int32 value) {
  counts_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapItemDisplay.counts)
}
 void IapItemDisplay::add_counts(::google::protobuf::int32 value) {
  counts_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Settings.Master.IapItemDisplay.counts)
}
 const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
IapItemDisplay::counts() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Settings.Master.IapItemDisplay.counts)
  return counts_;
}
 ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
IapItemDisplay::mutable_counts() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Settings.Master.IapItemDisplay.counts)
  return &counts_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Master
}  // namespace Settings
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
