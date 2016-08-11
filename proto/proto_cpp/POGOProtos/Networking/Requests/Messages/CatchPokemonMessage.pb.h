// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/Messages/CatchPokemonMessage.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCatchPokemonMessage_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCatchPokemonMessage_2eproto__INCLUDED

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
#include "POGOProtos/Inventory/Item/ItemId.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Requests {
namespace Messages {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCatchPokemonMessage_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCatchPokemonMessage_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCatchPokemonMessage_2eproto();

class CatchPokemonMessage;

// ===================================================================

class CatchPokemonMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage) */ {
 public:
  CatchPokemonMessage();
  virtual ~CatchPokemonMessage();

  CatchPokemonMessage(const CatchPokemonMessage& from);

  inline CatchPokemonMessage& operator=(const CatchPokemonMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CatchPokemonMessage& default_instance();

  void Swap(CatchPokemonMessage* other);

  // implements Message ----------------------------------------------

  inline CatchPokemonMessage* New() const { return New(NULL); }

  CatchPokemonMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CatchPokemonMessage& from);
  void MergeFrom(const CatchPokemonMessage& from);
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
  void InternalSwap(CatchPokemonMessage* other);
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

  // optional fixed64 encounter_id = 1;
  void clear_encounter_id();
  static const int kEncounterIdFieldNumber = 1;
  ::google::protobuf::uint64 encounter_id() const;
  void set_encounter_id(::google::protobuf::uint64 value);

  // optional .POGOProtos.Inventory.Item.ItemId pokeball = 2;
  void clear_pokeball();
  static const int kPokeballFieldNumber = 2;
  ::POGOProtos::Inventory::Item::ItemId pokeball() const;
  void set_pokeball(::POGOProtos::Inventory::Item::ItemId value);

  // optional double normalized_reticle_size = 3;
  void clear_normalized_reticle_size();
  static const int kNormalizedReticleSizeFieldNumber = 3;
  double normalized_reticle_size() const;
  void set_normalized_reticle_size(double value);

  // optional string spawn_point_id = 4;
  void clear_spawn_point_id();
  static const int kSpawnPointIdFieldNumber = 4;
  const ::std::string& spawn_point_id() const;
  void set_spawn_point_id(const ::std::string& value);
  void set_spawn_point_id(const char* value);
  void set_spawn_point_id(const char* value, size_t size);
  ::std::string* mutable_spawn_point_id();
  ::std::string* release_spawn_point_id();
  void set_allocated_spawn_point_id(::std::string* spawn_point_id);

  // optional bool hit_pokemon = 5;
  void clear_hit_pokemon();
  static const int kHitPokemonFieldNumber = 5;
  bool hit_pokemon() const;
  void set_hit_pokemon(bool value);

  // optional double spin_modifier = 6;
  void clear_spin_modifier();
  static const int kSpinModifierFieldNumber = 6;
  double spin_modifier() const;
  void set_spin_modifier(double value);

  // optional double normalized_hit_position = 7;
  void clear_normalized_hit_position();
  static const int kNormalizedHitPositionFieldNumber = 7;
  double normalized_hit_position() const;
  void set_normalized_hit_position(double value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 encounter_id_;
  double normalized_reticle_size_;
  int pokeball_;
  bool hit_pokemon_;
  ::google::protobuf::internal::ArenaStringPtr spawn_point_id_;
  double spin_modifier_;
  double normalized_hit_position_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCatchPokemonMessage_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCatchPokemonMessage_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCatchPokemonMessage_2eproto();

  void InitAsDefaultInstance();
  static CatchPokemonMessage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CatchPokemonMessage

// optional fixed64 encounter_id = 1;
inline void CatchPokemonMessage::clear_encounter_id() {
  encounter_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 CatchPokemonMessage::encounter_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.encounter_id)
  return encounter_id_;
}
inline void CatchPokemonMessage::set_encounter_id(::google::protobuf::uint64 value) {
  
  encounter_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.encounter_id)
}

// optional .POGOProtos.Inventory.Item.ItemId pokeball = 2;
inline void CatchPokemonMessage::clear_pokeball() {
  pokeball_ = 0;
}
inline ::POGOProtos::Inventory::Item::ItemId CatchPokemonMessage::pokeball() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.pokeball)
  return static_cast< ::POGOProtos::Inventory::Item::ItemId >(pokeball_);
}
inline void CatchPokemonMessage::set_pokeball(::POGOProtos::Inventory::Item::ItemId value) {
  
  pokeball_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.pokeball)
}

// optional double normalized_reticle_size = 3;
inline void CatchPokemonMessage::clear_normalized_reticle_size() {
  normalized_reticle_size_ = 0;
}
inline double CatchPokemonMessage::normalized_reticle_size() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.normalized_reticle_size)
  return normalized_reticle_size_;
}
inline void CatchPokemonMessage::set_normalized_reticle_size(double value) {
  
  normalized_reticle_size_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.normalized_reticle_size)
}

// optional string spawn_point_id = 4;
inline void CatchPokemonMessage::clear_spawn_point_id() {
  spawn_point_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& CatchPokemonMessage::spawn_point_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.spawn_point_id)
  return spawn_point_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CatchPokemonMessage::set_spawn_point_id(const ::std::string& value) {
  
  spawn_point_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.spawn_point_id)
}
inline void CatchPokemonMessage::set_spawn_point_id(const char* value) {
  
  spawn_point_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.spawn_point_id)
}
inline void CatchPokemonMessage::set_spawn_point_id(const char* value, size_t size) {
  
  spawn_point_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.spawn_point_id)
}
inline ::std::string* CatchPokemonMessage::mutable_spawn_point_id() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.spawn_point_id)
  return spawn_point_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* CatchPokemonMessage::release_spawn_point_id() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.spawn_point_id)
  
  return spawn_point_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void CatchPokemonMessage::set_allocated_spawn_point_id(::std::string* spawn_point_id) {
  if (spawn_point_id != NULL) {
    
  } else {
    
  }
  spawn_point_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), spawn_point_id);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.spawn_point_id)
}

// optional bool hit_pokemon = 5;
inline void CatchPokemonMessage::clear_hit_pokemon() {
  hit_pokemon_ = false;
}
inline bool CatchPokemonMessage::hit_pokemon() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.hit_pokemon)
  return hit_pokemon_;
}
inline void CatchPokemonMessage::set_hit_pokemon(bool value) {
  
  hit_pokemon_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.hit_pokemon)
}

// optional double spin_modifier = 6;
inline void CatchPokemonMessage::clear_spin_modifier() {
  spin_modifier_ = 0;
}
inline double CatchPokemonMessage::spin_modifier() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.spin_modifier)
  return spin_modifier_;
}
inline void CatchPokemonMessage::set_spin_modifier(double value) {
  
  spin_modifier_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.spin_modifier)
}

// optional double normalized_hit_position = 7;
inline void CatchPokemonMessage::clear_normalized_hit_position() {
  normalized_hit_position_ = 0;
}
inline double CatchPokemonMessage::normalized_hit_position() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.normalized_hit_position)
  return normalized_hit_position_;
}
inline void CatchPokemonMessage::set_normalized_hit_position(double value) {
  
  normalized_hit_position_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.CatchPokemonMessage.normalized_hit_position)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages
}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fCatchPokemonMessage_2eproto__INCLUDED
