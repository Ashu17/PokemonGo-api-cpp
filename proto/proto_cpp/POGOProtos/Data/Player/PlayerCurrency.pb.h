// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Data/Player/PlayerCurrency.proto

#ifndef PROTOBUF_POGOProtos_2fData_2fPlayer_2fPlayerCurrency_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fData_2fPlayer_2fPlayerCurrency_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Data {
namespace Player {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fData_2fPlayer_2fPlayerCurrency_2eproto();
void protobuf_AssignDesc_POGOProtos_2fData_2fPlayer_2fPlayerCurrency_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fData_2fPlayer_2fPlayerCurrency_2eproto();

class PlayerCurrency;

// ===================================================================

class PlayerCurrency : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Data.Player.PlayerCurrency) */ {
 public:
  PlayerCurrency();
  virtual ~PlayerCurrency();

  PlayerCurrency(const PlayerCurrency& from);

  inline PlayerCurrency& operator=(const PlayerCurrency& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PlayerCurrency& default_instance();

  void Swap(PlayerCurrency* other);

  // implements Message ----------------------------------------------

  inline PlayerCurrency* New() const { return New(NULL); }

  PlayerCurrency* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PlayerCurrency& from);
  void MergeFrom(const PlayerCurrency& from);
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
  void InternalSwap(PlayerCurrency* other);
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

  // optional int32 gems = 1;
  void clear_gems();
  static const int kGemsFieldNumber = 1;
  ::google::protobuf::int32 gems() const;
  void set_gems(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Data.Player.PlayerCurrency)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int32 gems_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fData_2fPlayer_2fPlayerCurrency_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fData_2fPlayer_2fPlayerCurrency_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fData_2fPlayer_2fPlayerCurrency_2eproto();

  void InitAsDefaultInstance();
  static PlayerCurrency* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PlayerCurrency

// optional int32 gems = 1;
inline void PlayerCurrency::clear_gems() {
  gems_ = 0;
}
inline ::google::protobuf::int32 PlayerCurrency::gems() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Player.PlayerCurrency.gems)
  return gems_;
}
inline void PlayerCurrency::set_gems(::google::protobuf::int32 value) {
  
  gems_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Player.PlayerCurrency.gems)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Player
}  // namespace Data
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fData_2fPlayer_2fPlayerCurrency_2eproto__INCLUDED
