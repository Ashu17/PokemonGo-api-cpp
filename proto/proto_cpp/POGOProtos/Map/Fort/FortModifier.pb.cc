// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Map/Fort/FortModifier.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Map/Fort/FortModifier.pb.h"

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
namespace Map {
namespace Fort {

namespace {

const ::google::protobuf::Descriptor* FortModifier_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FortModifier_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fMap_2fFort_2fFortModifier_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fMap_2fFort_2fFortModifier_2eproto() {
  protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortModifier_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Map/Fort/FortModifier.proto");
  GOOGLE_CHECK(file != NULL);
  FortModifier_descriptor_ = file->message_type(0);
  static const int FortModifier_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FortModifier, item_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FortModifier, expiration_timestamp_ms_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FortModifier, deployer_player_codename_),
  };
  FortModifier_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      FortModifier_descriptor_,
      FortModifier::default_instance_,
      FortModifier_offsets_,
      -1,
      -1,
      -1,
      sizeof(FortModifier),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FortModifier, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FortModifier, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fMap_2fFort_2fFortModifier_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      FortModifier_descriptor_, &FortModifier::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fMap_2fFort_2fFortModifier_2eproto() {
  delete FortModifier::default_instance_;
  delete FortModifier_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortModifier_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortModifier_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Inventory::Item::protobuf_AddDesc_POGOProtos_2fInventory_2fItem_2fItemId_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n&POGOProtos/Map/Fort/FortModifier.proto"
    "\022\023POGOProtos.Map.Fort\032&POGOProtos/Invent"
    "ory/Item/ItemId.proto\"\205\001\n\014FortModifier\0222"
    "\n\007item_id\030\001 \001(\0162!.POGOProtos.Inventory.I"
    "tem.ItemId\022\037\n\027expiration_timestamp_ms\030\002 "
    "\001(\003\022 \n\030deployer_player_codename\030\003 \001(\tb\006p"
    "roto3", 245);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Map/Fort/FortModifier.proto", &protobuf_RegisterTypes);
  FortModifier::default_instance_ = new FortModifier();
  FortModifier::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fMap_2fFort_2fFortModifier_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fMap_2fFort_2fFortModifier_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fMap_2fFort_2fFortModifier_2eproto() {
    protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortModifier_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fMap_2fFort_2fFortModifier_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FortModifier::kItemIdFieldNumber;
const int FortModifier::kExpirationTimestampMsFieldNumber;
const int FortModifier::kDeployerPlayerCodenameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FortModifier::FortModifier()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Map.Fort.FortModifier)
}

void FortModifier::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

FortModifier::FortModifier(const FortModifier& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Map.Fort.FortModifier)
}

void FortModifier::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  item_id_ = 0;
  expiration_timestamp_ms_ = GOOGLE_LONGLONG(0);
  deployer_player_codename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

FortModifier::~FortModifier() {
  // @@protoc_insertion_point(destructor:POGOProtos.Map.Fort.FortModifier)
  SharedDtor();
}

void FortModifier::SharedDtor() {
  deployer_player_codename_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void FortModifier::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FortModifier::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FortModifier_descriptor_;
}

const FortModifier& FortModifier::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortModifier_2eproto();
  return *default_instance_;
}

FortModifier* FortModifier::default_instance_ = NULL;

FortModifier* FortModifier::New(::google::protobuf::Arena* arena) const {
  FortModifier* n = new FortModifier;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FortModifier::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Map.Fort.FortModifier)
  item_id_ = 0;
  expiration_timestamp_ms_ = GOOGLE_LONGLONG(0);
  deployer_player_codename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool FortModifier::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Map.Fort.FortModifier)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_item_id(static_cast< ::POGOProtos::Inventory::Item::ItemId >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_expiration_timestamp_ms;
        break;
      }

      // optional int64 expiration_timestamp_ms = 2;
      case 2: {
        if (tag == 16) {
         parse_expiration_timestamp_ms:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &expiration_timestamp_ms_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_deployer_player_codename;
        break;
      }

      // optional string deployer_player_codename = 3;
      case 3: {
        if (tag == 26) {
         parse_deployer_player_codename:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_deployer_player_codename()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->deployer_player_codename().data(), this->deployer_player_codename().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "POGOProtos.Map.Fort.FortModifier.deployer_player_codename"));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Map.Fort.FortModifier)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Map.Fort.FortModifier)
  return false;
#undef DO_
}

void FortModifier::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Map.Fort.FortModifier)
  // optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
  if (this->item_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->item_id(), output);
  }

  // optional int64 expiration_timestamp_ms = 2;
  if (this->expiration_timestamp_ms() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->expiration_timestamp_ms(), output);
  }

  // optional string deployer_player_codename = 3;
  if (this->deployer_player_codename().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->deployer_player_codename().data(), this->deployer_player_codename().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Map.Fort.FortModifier.deployer_player_codename");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->deployer_player_codename(), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Map.Fort.FortModifier)
}

::google::protobuf::uint8* FortModifier::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Map.Fort.FortModifier)
  // optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
  if (this->item_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->item_id(), target);
  }

  // optional int64 expiration_timestamp_ms = 2;
  if (this->expiration_timestamp_ms() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->expiration_timestamp_ms(), target);
  }

  // optional string deployer_player_codename = 3;
  if (this->deployer_player_codename().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->deployer_player_codename().data(), this->deployer_player_codename().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Map.Fort.FortModifier.deployer_player_codename");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->deployer_player_codename(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Map.Fort.FortModifier)
  return target;
}

int FortModifier::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Map.Fort.FortModifier)
  int total_size = 0;

  // optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
  if (this->item_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->item_id());
  }

  // optional int64 expiration_timestamp_ms = 2;
  if (this->expiration_timestamp_ms() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->expiration_timestamp_ms());
  }

  // optional string deployer_player_codename = 3;
  if (this->deployer_player_codename().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->deployer_player_codename());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FortModifier::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Map.Fort.FortModifier)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const FortModifier* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const FortModifier>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Map.Fort.FortModifier)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Map.Fort.FortModifier)
    MergeFrom(*source);
  }
}

void FortModifier::MergeFrom(const FortModifier& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Map.Fort.FortModifier)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.item_id() != 0) {
    set_item_id(from.item_id());
  }
  if (from.expiration_timestamp_ms() != 0) {
    set_expiration_timestamp_ms(from.expiration_timestamp_ms());
  }
  if (from.deployer_player_codename().size() > 0) {

    deployer_player_codename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.deployer_player_codename_);
  }
}

void FortModifier::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Map.Fort.FortModifier)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FortModifier::CopyFrom(const FortModifier& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Map.Fort.FortModifier)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FortModifier::IsInitialized() const {

  return true;
}

void FortModifier::Swap(FortModifier* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FortModifier::InternalSwap(FortModifier* other) {
  std::swap(item_id_, other->item_id_);
  std::swap(expiration_timestamp_ms_, other->expiration_timestamp_ms_);
  deployer_player_codename_.Swap(&other->deployer_player_codename_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FortModifier::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FortModifier_descriptor_;
  metadata.reflection = FortModifier_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FortModifier

// optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
void FortModifier::clear_item_id() {
  item_id_ = 0;
}
 ::POGOProtos::Inventory::Item::ItemId FortModifier::item_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortModifier.item_id)
  return static_cast< ::POGOProtos::Inventory::Item::ItemId >(item_id_);
}
 void FortModifier::set_item_id(::POGOProtos::Inventory::Item::ItemId value) {
  
  item_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortModifier.item_id)
}

// optional int64 expiration_timestamp_ms = 2;
void FortModifier::clear_expiration_timestamp_ms() {
  expiration_timestamp_ms_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 FortModifier::expiration_timestamp_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortModifier.expiration_timestamp_ms)
  return expiration_timestamp_ms_;
}
 void FortModifier::set_expiration_timestamp_ms(::google::protobuf::int64 value) {
  
  expiration_timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortModifier.expiration_timestamp_ms)
}

// optional string deployer_player_codename = 3;
void FortModifier::clear_deployer_player_codename() {
  deployer_player_codename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& FortModifier::deployer_player_codename() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortModifier.deployer_player_codename)
  return deployer_player_codename_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FortModifier::set_deployer_player_codename(const ::std::string& value) {
  
  deployer_player_codename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortModifier.deployer_player_codename)
}
 void FortModifier::set_deployer_player_codename(const char* value) {
  
  deployer_player_codename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Map.Fort.FortModifier.deployer_player_codename)
}
 void FortModifier::set_deployer_player_codename(const char* value, size_t size) {
  
  deployer_player_codename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Map.Fort.FortModifier.deployer_player_codename)
}
 ::std::string* FortModifier::mutable_deployer_player_codename() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Map.Fort.FortModifier.deployer_player_codename)
  return deployer_player_codename_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* FortModifier::release_deployer_player_codename() {
  // @@protoc_insertion_point(field_release:POGOProtos.Map.Fort.FortModifier.deployer_player_codename)
  
  return deployer_player_codename_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FortModifier::set_allocated_deployer_player_codename(::std::string* deployer_player_codename) {
  if (deployer_player_codename != NULL) {
    
  } else {
    
  }
  deployer_player_codename_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), deployer_player_codename);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Map.Fort.FortModifier.deployer_player_codename)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Fort
}  // namespace Map
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
