// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/Messages/UseItemReviveMessage.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fUseItemReviveMessage_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fUseItemReviveMessage_2eproto__INCLUDED

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
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fUseItemReviveMessage_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fUseItemReviveMessage_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fUseItemReviveMessage_2eproto();

class UseItemReviveMessage;

// ===================================================================

class UseItemReviveMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Requests.Messages.UseItemReviveMessage) */ {
 public:
  UseItemReviveMessage();
  virtual ~UseItemReviveMessage();

  UseItemReviveMessage(const UseItemReviveMessage& from);

  inline UseItemReviveMessage& operator=(const UseItemReviveMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UseItemReviveMessage& default_instance();

  void Swap(UseItemReviveMessage* other);

  // implements Message ----------------------------------------------

  inline UseItemReviveMessage* New() const { return New(NULL); }

  UseItemReviveMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UseItemReviveMessage& from);
  void MergeFrom(const UseItemReviveMessage& from);
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
  void InternalSwap(UseItemReviveMessage* other);
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

  // optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
  void clear_item_id();
  static const int kItemIdFieldNumber = 1;
  ::POGOProtos::Inventory::Item::ItemId item_id() const;
  void set_item_id(::POGOProtos::Inventory::Item::ItemId value);

  // optional fixed64 pokemon_id = 2;
  void clear_pokemon_id();
  static const int kPokemonIdFieldNumber = 2;
  ::google::protobuf::uint64 pokemon_id() const;
  void set_pokemon_id(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Requests.Messages.UseItemReviveMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 pokemon_id_;
  int item_id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fUseItemReviveMessage_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fUseItemReviveMessage_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fUseItemReviveMessage_2eproto();

  void InitAsDefaultInstance();
  static UseItemReviveMessage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// UseItemReviveMessage

// optional .POGOProtos.Inventory.Item.ItemId item_id = 1;
inline void UseItemReviveMessage::clear_item_id() {
  item_id_ = 0;
}
inline ::POGOProtos::Inventory::Item::ItemId UseItemReviveMessage::item_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.UseItemReviveMessage.item_id)
  return static_cast< ::POGOProtos::Inventory::Item::ItemId >(item_id_);
}
inline void UseItemReviveMessage::set_item_id(::POGOProtos::Inventory::Item::ItemId value) {
  
  item_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.UseItemReviveMessage.item_id)
}

// optional fixed64 pokemon_id = 2;
inline void UseItemReviveMessage::clear_pokemon_id() {
  pokemon_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 UseItemReviveMessage::pokemon_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.UseItemReviveMessage.pokemon_id)
  return pokemon_id_;
}
inline void UseItemReviveMessage::set_pokemon_id(::google::protobuf::uint64 value) {
  
  pokemon_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.UseItemReviveMessage.pokemon_id)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages
}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fUseItemReviveMessage_2eproto__INCLUDED
