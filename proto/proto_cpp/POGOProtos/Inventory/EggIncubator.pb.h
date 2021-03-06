// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Inventory/EggIncubator.proto

#ifndef PROTOBUF_POGOProtos_2fInventory_2fEggIncubator_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fInventory_2fEggIncubator_2eproto__INCLUDED

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
#include "POGOProtos/Inventory/EggIncubatorType.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Inventory {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fInventory_2fEggIncubator_2eproto();
void protobuf_AssignDesc_POGOProtos_2fInventory_2fEggIncubator_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fInventory_2fEggIncubator_2eproto();

class EggIncubator;

// ===================================================================

class EggIncubator : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Inventory.EggIncubator) */ {
 public:
  EggIncubator();
  virtual ~EggIncubator();

  EggIncubator(const EggIncubator& from);

  inline EggIncubator& operator=(const EggIncubator& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EggIncubator& default_instance();

  void Swap(EggIncubator* other);

  // implements Message ----------------------------------------------

  inline EggIncubator* New() const { return New(NULL); }

  EggIncubator* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EggIncubator& from);
  void MergeFrom(const EggIncubator& from);
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
  void InternalSwap(EggIncubator* other);
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

  // optional string id = 1;
  void clear_id();
  static const int kIdFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // optional .POGOProtos.Inventory.Item.ItemId item_id = 2;
  void clear_item_id();
  static const int kItemIdFieldNumber = 2;
  ::POGOProtos::Inventory::Item::ItemId item_id() const;
  void set_item_id(::POGOProtos::Inventory::Item::ItemId value);

  // optional .POGOProtos.Inventory.EggIncubatorType incubator_type = 3;
  void clear_incubator_type();
  static const int kIncubatorTypeFieldNumber = 3;
  ::POGOProtos::Inventory::EggIncubatorType incubator_type() const;
  void set_incubator_type(::POGOProtos::Inventory::EggIncubatorType value);

  // optional int32 uses_remaining = 4;
  void clear_uses_remaining();
  static const int kUsesRemainingFieldNumber = 4;
  ::google::protobuf::int32 uses_remaining() const;
  void set_uses_remaining(::google::protobuf::int32 value);

  // optional uint64 pokemon_id = 5;
  void clear_pokemon_id();
  static const int kPokemonIdFieldNumber = 5;
  ::google::protobuf::uint64 pokemon_id() const;
  void set_pokemon_id(::google::protobuf::uint64 value);

  // optional double start_km_walked = 6;
  void clear_start_km_walked();
  static const int kStartKmWalkedFieldNumber = 6;
  double start_km_walked() const;
  void set_start_km_walked(double value);

  // optional double target_km_walked = 7;
  void clear_target_km_walked();
  static const int kTargetKmWalkedFieldNumber = 7;
  double target_km_walked() const;
  void set_target_km_walked(double value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Inventory.EggIncubator)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  int item_id_;
  int incubator_type_;
  ::google::protobuf::uint64 pokemon_id_;
  double start_km_walked_;
  double target_km_walked_;
  ::google::protobuf::int32 uses_remaining_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fInventory_2fEggIncubator_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fInventory_2fEggIncubator_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fInventory_2fEggIncubator_2eproto();

  void InitAsDefaultInstance();
  static EggIncubator* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// EggIncubator

// optional string id = 1;
inline void EggIncubator::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& EggIncubator::id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.EggIncubator.id)
  return id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EggIncubator::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.EggIncubator.id)
}
inline void EggIncubator::set_id(const char* value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Inventory.EggIncubator.id)
}
inline void EggIncubator::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Inventory.EggIncubator.id)
}
inline ::std::string* EggIncubator::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Inventory.EggIncubator.id)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* EggIncubator::release_id() {
  // @@protoc_insertion_point(field_release:POGOProtos.Inventory.EggIncubator.id)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void EggIncubator::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Inventory.EggIncubator.id)
}

// optional .POGOProtos.Inventory.Item.ItemId item_id = 2;
inline void EggIncubator::clear_item_id() {
  item_id_ = 0;
}
inline ::POGOProtos::Inventory::Item::ItemId EggIncubator::item_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.EggIncubator.item_id)
  return static_cast< ::POGOProtos::Inventory::Item::ItemId >(item_id_);
}
inline void EggIncubator::set_item_id(::POGOProtos::Inventory::Item::ItemId value) {
  
  item_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.EggIncubator.item_id)
}

// optional .POGOProtos.Inventory.EggIncubatorType incubator_type = 3;
inline void EggIncubator::clear_incubator_type() {
  incubator_type_ = 0;
}
inline ::POGOProtos::Inventory::EggIncubatorType EggIncubator::incubator_type() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.EggIncubator.incubator_type)
  return static_cast< ::POGOProtos::Inventory::EggIncubatorType >(incubator_type_);
}
inline void EggIncubator::set_incubator_type(::POGOProtos::Inventory::EggIncubatorType value) {
  
  incubator_type_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.EggIncubator.incubator_type)
}

// optional int32 uses_remaining = 4;
inline void EggIncubator::clear_uses_remaining() {
  uses_remaining_ = 0;
}
inline ::google::protobuf::int32 EggIncubator::uses_remaining() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.EggIncubator.uses_remaining)
  return uses_remaining_;
}
inline void EggIncubator::set_uses_remaining(::google::protobuf::int32 value) {
  
  uses_remaining_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.EggIncubator.uses_remaining)
}

// optional uint64 pokemon_id = 5;
inline void EggIncubator::clear_pokemon_id() {
  pokemon_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 EggIncubator::pokemon_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.EggIncubator.pokemon_id)
  return pokemon_id_;
}
inline void EggIncubator::set_pokemon_id(::google::protobuf::uint64 value) {
  
  pokemon_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.EggIncubator.pokemon_id)
}

// optional double start_km_walked = 6;
inline void EggIncubator::clear_start_km_walked() {
  start_km_walked_ = 0;
}
inline double EggIncubator::start_km_walked() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.EggIncubator.start_km_walked)
  return start_km_walked_;
}
inline void EggIncubator::set_start_km_walked(double value) {
  
  start_km_walked_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.EggIncubator.start_km_walked)
}

// optional double target_km_walked = 7;
inline void EggIncubator::clear_target_km_walked() {
  target_km_walked_ = 0;
}
inline double EggIncubator::target_km_walked() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Inventory.EggIncubator.target_km_walked)
  return target_km_walked_;
}
inline void EggIncubator::set_target_km_walked(double value) {
  
  target_km_walked_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Inventory.EggIncubator.target_km_walked)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Inventory
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fInventory_2fEggIncubator_2eproto__INCLUDED
