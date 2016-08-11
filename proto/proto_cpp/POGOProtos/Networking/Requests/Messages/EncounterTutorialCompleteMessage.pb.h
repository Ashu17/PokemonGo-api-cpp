// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/Messages/EncounterTutorialCompleteMessage.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fEncounterTutorialCompleteMessage_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fEncounterTutorialCompleteMessage_2eproto__INCLUDED

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
namespace Networking {
namespace Requests {
namespace Messages {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fEncounterTutorialCompleteMessage_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fEncounterTutorialCompleteMessage_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fEncounterTutorialCompleteMessage_2eproto();

class EncounterTutorialCompleteMessage;

// ===================================================================

class EncounterTutorialCompleteMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Requests.Messages.EncounterTutorialCompleteMessage) */ {
 public:
  EncounterTutorialCompleteMessage();
  virtual ~EncounterTutorialCompleteMessage();

  EncounterTutorialCompleteMessage(const EncounterTutorialCompleteMessage& from);

  inline EncounterTutorialCompleteMessage& operator=(const EncounterTutorialCompleteMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EncounterTutorialCompleteMessage& default_instance();

  void Swap(EncounterTutorialCompleteMessage* other);

  // implements Message ----------------------------------------------

  inline EncounterTutorialCompleteMessage* New() const { return New(NULL); }

  EncounterTutorialCompleteMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EncounterTutorialCompleteMessage& from);
  void MergeFrom(const EncounterTutorialCompleteMessage& from);
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
  void InternalSwap(EncounterTutorialCompleteMessage* other);
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

  // optional .POGOProtos.Enums.PokemonId pokemon_id = 1;
  void clear_pokemon_id();
  static const int kPokemonIdFieldNumber = 1;
  ::POGOProtos::Enums::PokemonId pokemon_id() const;
  void set_pokemon_id(::POGOProtos::Enums::PokemonId value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Requests.Messages.EncounterTutorialCompleteMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  int pokemon_id_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fEncounterTutorialCompleteMessage_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fEncounterTutorialCompleteMessage_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fEncounterTutorialCompleteMessage_2eproto();

  void InitAsDefaultInstance();
  static EncounterTutorialCompleteMessage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// EncounterTutorialCompleteMessage

// optional .POGOProtos.Enums.PokemonId pokemon_id = 1;
inline void EncounterTutorialCompleteMessage::clear_pokemon_id() {
  pokemon_id_ = 0;
}
inline ::POGOProtos::Enums::PokemonId EncounterTutorialCompleteMessage::pokemon_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.EncounterTutorialCompleteMessage.pokemon_id)
  return static_cast< ::POGOProtos::Enums::PokemonId >(pokemon_id_);
}
inline void EncounterTutorialCompleteMessage::set_pokemon_id(::POGOProtos::Enums::PokemonId value) {
  
  pokemon_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.EncounterTutorialCompleteMessage.pokemon_id)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages
}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fEncounterTutorialCompleteMessage_2eproto__INCLUDED
