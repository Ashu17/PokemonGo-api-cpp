// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Map/Fort/FortLureInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Map/Fort/FortLureInfo.pb.h"

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

const ::google::protobuf::Descriptor* FortLureInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FortLureInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto() {
  protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Map/Fort/FortLureInfo.proto");
  GOOGLE_CHECK(file != NULL);
  FortLureInfo_descriptor_ = file->message_type(0);
  static const int FortLureInfo_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FortLureInfo, fort_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FortLureInfo, encounter_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FortLureInfo, active_pokemon_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FortLureInfo, lure_expires_timestamp_ms_),
  };
  FortLureInfo_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      FortLureInfo_descriptor_,
      FortLureInfo::default_instance_,
      FortLureInfo_offsets_,
      -1,
      -1,
      -1,
      sizeof(FortLureInfo),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FortLureInfo, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FortLureInfo, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      FortLureInfo_descriptor_, &FortLureInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto() {
  delete FortLureInfo::default_instance_;
  delete FortLureInfo_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Enums::protobuf_AddDesc_POGOProtos_2fEnums_2fPokemonId_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n&POGOProtos/Map/Fort/FortLureInfo.proto"
    "\022\023POGOProtos.Map.Fort\032 POGOProtos/Enums/"
    "PokemonId.proto\"\220\001\n\014FortLureInfo\022\017\n\007fort"
    "_id\030\001 \001(\t\022\024\n\014encounter_id\030\002 \001(\006\0226\n\021activ"
    "e_pokemon_id\030\003 \001(\0162\033.POGOProtos.Enums.Po"
    "kemonId\022!\n\031lure_expires_timestamp_ms\030\004 \001"
    "(\003b\006proto3", 250);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Map/Fort/FortLureInfo.proto", &protobuf_RegisterTypes);
  FortLureInfo::default_instance_ = new FortLureInfo();
  FortLureInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto() {
    protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FortLureInfo::kFortIdFieldNumber;
const int FortLureInfo::kEncounterIdFieldNumber;
const int FortLureInfo::kActivePokemonIdFieldNumber;
const int FortLureInfo::kLureExpiresTimestampMsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FortLureInfo::FortLureInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Map.Fort.FortLureInfo)
}

void FortLureInfo::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

FortLureInfo::FortLureInfo(const FortLureInfo& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Map.Fort.FortLureInfo)
}

void FortLureInfo::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  fort_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  encounter_id_ = GOOGLE_ULONGLONG(0);
  active_pokemon_id_ = 0;
  lure_expires_timestamp_ms_ = GOOGLE_LONGLONG(0);
}

FortLureInfo::~FortLureInfo() {
  // @@protoc_insertion_point(destructor:POGOProtos.Map.Fort.FortLureInfo)
  SharedDtor();
}

void FortLureInfo::SharedDtor() {
  fort_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void FortLureInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FortLureInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FortLureInfo_descriptor_;
}

const FortLureInfo& FortLureInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto();
  return *default_instance_;
}

FortLureInfo* FortLureInfo::default_instance_ = NULL;

FortLureInfo* FortLureInfo::New(::google::protobuf::Arena* arena) const {
  FortLureInfo* n = new FortLureInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FortLureInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Map.Fort.FortLureInfo)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(FortLureInfo, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<FortLureInfo*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(encounter_id_, active_pokemon_id_);
  fort_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool FortLureInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Map.Fort.FortLureInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string fort_id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_fort_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->fort_id().data(), this->fort_id().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "POGOProtos.Map.Fort.FortLureInfo.fort_id"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_encounter_id;
        break;
      }

      // optional fixed64 encounter_id = 2;
      case 2: {
        if (tag == 17) {
         parse_encounter_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED64>(
                 input, &encounter_id_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_active_pokemon_id;
        break;
      }

      // optional .POGOProtos.Enums.PokemonId active_pokemon_id = 3;
      case 3: {
        if (tag == 24) {
         parse_active_pokemon_id:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_active_pokemon_id(static_cast< ::POGOProtos::Enums::PokemonId >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_lure_expires_timestamp_ms;
        break;
      }

      // optional int64 lure_expires_timestamp_ms = 4;
      case 4: {
        if (tag == 32) {
         parse_lure_expires_timestamp_ms:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &lure_expires_timestamp_ms_)));

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
  // @@protoc_insertion_point(parse_success:POGOProtos.Map.Fort.FortLureInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Map.Fort.FortLureInfo)
  return false;
#undef DO_
}

void FortLureInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Map.Fort.FortLureInfo)
  // optional string fort_id = 1;
  if (this->fort_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->fort_id().data(), this->fort_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Map.Fort.FortLureInfo.fort_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->fort_id(), output);
  }

  // optional fixed64 encounter_id = 2;
  if (this->encounter_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed64(2, this->encounter_id(), output);
  }

  // optional .POGOProtos.Enums.PokemonId active_pokemon_id = 3;
  if (this->active_pokemon_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->active_pokemon_id(), output);
  }

  // optional int64 lure_expires_timestamp_ms = 4;
  if (this->lure_expires_timestamp_ms() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->lure_expires_timestamp_ms(), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Map.Fort.FortLureInfo)
}

::google::protobuf::uint8* FortLureInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Map.Fort.FortLureInfo)
  // optional string fort_id = 1;
  if (this->fort_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->fort_id().data(), this->fort_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Map.Fort.FortLureInfo.fort_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->fort_id(), target);
  }

  // optional fixed64 encounter_id = 2;
  if (this->encounter_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed64ToArray(2, this->encounter_id(), target);
  }

  // optional .POGOProtos.Enums.PokemonId active_pokemon_id = 3;
  if (this->active_pokemon_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->active_pokemon_id(), target);
  }

  // optional int64 lure_expires_timestamp_ms = 4;
  if (this->lure_expires_timestamp_ms() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->lure_expires_timestamp_ms(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Map.Fort.FortLureInfo)
  return target;
}

int FortLureInfo::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Map.Fort.FortLureInfo)
  int total_size = 0;

  // optional string fort_id = 1;
  if (this->fort_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->fort_id());
  }

  // optional fixed64 encounter_id = 2;
  if (this->encounter_id() != 0) {
    total_size += 1 + 8;
  }

  // optional .POGOProtos.Enums.PokemonId active_pokemon_id = 3;
  if (this->active_pokemon_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->active_pokemon_id());
  }

  // optional int64 lure_expires_timestamp_ms = 4;
  if (this->lure_expires_timestamp_ms() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->lure_expires_timestamp_ms());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FortLureInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Map.Fort.FortLureInfo)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const FortLureInfo* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const FortLureInfo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Map.Fort.FortLureInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Map.Fort.FortLureInfo)
    MergeFrom(*source);
  }
}

void FortLureInfo::MergeFrom(const FortLureInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Map.Fort.FortLureInfo)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.fort_id().size() > 0) {

    fort_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.fort_id_);
  }
  if (from.encounter_id() != 0) {
    set_encounter_id(from.encounter_id());
  }
  if (from.active_pokemon_id() != 0) {
    set_active_pokemon_id(from.active_pokemon_id());
  }
  if (from.lure_expires_timestamp_ms() != 0) {
    set_lure_expires_timestamp_ms(from.lure_expires_timestamp_ms());
  }
}

void FortLureInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Map.Fort.FortLureInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FortLureInfo::CopyFrom(const FortLureInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Map.Fort.FortLureInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FortLureInfo::IsInitialized() const {

  return true;
}

void FortLureInfo::Swap(FortLureInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FortLureInfo::InternalSwap(FortLureInfo* other) {
  fort_id_.Swap(&other->fort_id_);
  std::swap(encounter_id_, other->encounter_id_);
  std::swap(active_pokemon_id_, other->active_pokemon_id_);
  std::swap(lure_expires_timestamp_ms_, other->lure_expires_timestamp_ms_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FortLureInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FortLureInfo_descriptor_;
  metadata.reflection = FortLureInfo_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FortLureInfo

// optional string fort_id = 1;
void FortLureInfo::clear_fort_id() {
  fort_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& FortLureInfo::fort_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortLureInfo.fort_id)
  return fort_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FortLureInfo::set_fort_id(const ::std::string& value) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortLureInfo.fort_id)
}
 void FortLureInfo::set_fort_id(const char* value) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Map.Fort.FortLureInfo.fort_id)
}
 void FortLureInfo::set_fort_id(const char* value, size_t size) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Map.Fort.FortLureInfo.fort_id)
}
 ::std::string* FortLureInfo::mutable_fort_id() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Map.Fort.FortLureInfo.fort_id)
  return fort_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* FortLureInfo::release_fort_id() {
  // @@protoc_insertion_point(field_release:POGOProtos.Map.Fort.FortLureInfo.fort_id)
  
  return fort_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void FortLureInfo::set_allocated_fort_id(::std::string* fort_id) {
  if (fort_id != NULL) {
    
  } else {
    
  }
  fort_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), fort_id);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Map.Fort.FortLureInfo.fort_id)
}

// optional fixed64 encounter_id = 2;
void FortLureInfo::clear_encounter_id() {
  encounter_id_ = GOOGLE_ULONGLONG(0);
}
 ::google::protobuf::uint64 FortLureInfo::encounter_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortLureInfo.encounter_id)
  return encounter_id_;
}
 void FortLureInfo::set_encounter_id(::google::protobuf::uint64 value) {
  
  encounter_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortLureInfo.encounter_id)
}

// optional .POGOProtos.Enums.PokemonId active_pokemon_id = 3;
void FortLureInfo::clear_active_pokemon_id() {
  active_pokemon_id_ = 0;
}
 ::POGOProtos::Enums::PokemonId FortLureInfo::active_pokemon_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortLureInfo.active_pokemon_id)
  return static_cast< ::POGOProtos::Enums::PokemonId >(active_pokemon_id_);
}
 void FortLureInfo::set_active_pokemon_id(::POGOProtos::Enums::PokemonId value) {
  
  active_pokemon_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortLureInfo.active_pokemon_id)
}

// optional int64 lure_expires_timestamp_ms = 4;
void FortLureInfo::clear_lure_expires_timestamp_ms() {
  lure_expires_timestamp_ms_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 FortLureInfo::lure_expires_timestamp_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortLureInfo.lure_expires_timestamp_ms)
  return lure_expires_timestamp_ms_;
}
 void FortLureInfo::set_lure_expires_timestamp_ms(::google::protobuf::int64 value) {
  
  lure_expires_timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortLureInfo.lure_expires_timestamp_ms)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Fort
}  // namespace Map
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
