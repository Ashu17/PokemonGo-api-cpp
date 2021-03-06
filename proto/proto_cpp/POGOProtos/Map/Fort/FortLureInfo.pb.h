// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Map/Fort/FortLureInfo.proto

#ifndef PROTOBUF_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "POGOProtos/Enums/PokemonId.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Map {
namespace Fort {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto();
void protobuf_AssignDesc_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto();

class FortLureInfo;

// ===================================================================

class FortLureInfo : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Map.Fort.FortLureInfo) */ {
 public:
  FortLureInfo();
  virtual ~FortLureInfo();

  FortLureInfo(const FortLureInfo& from);

  inline FortLureInfo& operator=(const FortLureInfo& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FortLureInfo& default_instance();

  void Swap(FortLureInfo* other);

  // implements Message ----------------------------------------------

  inline FortLureInfo* New() const { return New(NULL); }

  FortLureInfo* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FortLureInfo& from);
  void MergeFrom(const FortLureInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(FortLureInfo* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string fort_id = 1;
  void clear_fort_id();
  static const int kFortIdFieldNumber = 1;
  const ::std::string& fort_id() const;
  void set_fort_id(const ::std::string& value);
  void set_fort_id(const char* value);
  void set_fort_id(const char* value, size_t size);
  ::std::string* mutable_fort_id();
  ::std::string* release_fort_id();
  void set_allocated_fort_id(::std::string* fort_id);

  // optional fixed64 encounter_id = 2;
  void clear_encounter_id();
  static const int kEncounterIdFieldNumber = 2;
  ::google::protobuf::uint64 encounter_id() const;
  void set_encounter_id(::google::protobuf::uint64 value);

  // optional .POGOProtos.Enums.PokemonId active_pokemon_id = 3;
  void clear_active_pokemon_id();
  static const int kActivePokemonIdFieldNumber = 3;
  ::POGOProtos::Enums::PokemonId active_pokemon_id() const;
  void set_active_pokemon_id(::POGOProtos::Enums::PokemonId value);

  // optional int64 lure_expires_timestamp_ms = 4;
  void clear_lure_expires_timestamp_ms();
  static const int kLureExpiresTimestampMsFieldNumber = 4;
  ::google::protobuf::int64 lure_expires_timestamp_ms() const;
  void set_lure_expires_timestamp_ms(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Map.Fort.FortLureInfo)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr fort_id_;
  ::google::protobuf::uint64 encounter_id_;
  ::google::protobuf::int64 lure_expires_timestamp_ms_;
  int active_pokemon_id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto();

  void InitAsDefaultInstance();
  static FortLureInfo* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// FortLureInfo

// optional string fort_id = 1;
inline void FortLureInfo::clear_fort_id() {
  fort_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FortLureInfo::fort_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortLureInfo.fort_id)
  return fort_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FortLureInfo::set_fort_id(const ::std::string& value) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortLureInfo.fort_id)
}
inline void FortLureInfo::set_fort_id(const char* value) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Map.Fort.FortLureInfo.fort_id)
}
inline void FortLureInfo::set_fort_id(const char* value, size_t size) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Map.Fort.FortLureInfo.fort_id)
}
inline ::std::string* FortLureInfo::mutable_fort_id() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Map.Fort.FortLureInfo.fort_id)
  return fort_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FortLureInfo::release_fort_id() {
  // @@protoc_insertion_point(field_release:POGOProtos.Map.Fort.FortLureInfo.fort_id)
  
  return fort_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FortLureInfo::set_allocated_fort_id(::std::string* fort_id) {
  if (fort_id != NULL) {
    
  } else {
    
  }
  fort_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), fort_id);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Map.Fort.FortLureInfo.fort_id)
}

// optional fixed64 encounter_id = 2;
inline void FortLureInfo::clear_encounter_id() {
  encounter_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 FortLureInfo::encounter_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortLureInfo.encounter_id)
  return encounter_id_;
}
inline void FortLureInfo::set_encounter_id(::google::protobuf::uint64 value) {
  
  encounter_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortLureInfo.encounter_id)
}

// optional .POGOProtos.Enums.PokemonId active_pokemon_id = 3;
inline void FortLureInfo::clear_active_pokemon_id() {
  active_pokemon_id_ = 0;
}
inline ::POGOProtos::Enums::PokemonId FortLureInfo::active_pokemon_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortLureInfo.active_pokemon_id)
  return static_cast< ::POGOProtos::Enums::PokemonId >(active_pokemon_id_);
}
inline void FortLureInfo::set_active_pokemon_id(::POGOProtos::Enums::PokemonId value) {
  
  active_pokemon_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortLureInfo.active_pokemon_id)
}

// optional int64 lure_expires_timestamp_ms = 4;
inline void FortLureInfo::clear_lure_expires_timestamp_ms() {
  lure_expires_timestamp_ms_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 FortLureInfo::lure_expires_timestamp_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.Fort.FortLureInfo.lure_expires_timestamp_ms)
  return lure_expires_timestamp_ms_;
}
inline void FortLureInfo::set_lure_expires_timestamp_ms(::google::protobuf::int64 value) {
  
  lure_expires_timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.Fort.FortLureInfo.lure_expires_timestamp_ms)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Fort
}  // namespace Map
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fMap_2fFort_2fFortLureInfo_2eproto__INCLUDED
