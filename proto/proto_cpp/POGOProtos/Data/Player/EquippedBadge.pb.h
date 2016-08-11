// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Data/Player/EquippedBadge.proto

#ifndef PROTOBUF_POGOProtos_2fData_2fPlayer_2fEquippedBadge_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fData_2fPlayer_2fEquippedBadge_2eproto__INCLUDED

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
#include "POGOProtos/Enums/BadgeType.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Data {
namespace Player {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fData_2fPlayer_2fEquippedBadge_2eproto();
void protobuf_AssignDesc_POGOProtos_2fData_2fPlayer_2fEquippedBadge_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fData_2fPlayer_2fEquippedBadge_2eproto();

class EquippedBadge;

// ===================================================================

class EquippedBadge : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Data.Player.EquippedBadge) */ {
 public:
  EquippedBadge();
  virtual ~EquippedBadge();

  EquippedBadge(const EquippedBadge& from);

  inline EquippedBadge& operator=(const EquippedBadge& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EquippedBadge& default_instance();

  void Swap(EquippedBadge* other);

  // implements Message ----------------------------------------------

  inline EquippedBadge* New() const { return New(NULL); }

  EquippedBadge* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EquippedBadge& from);
  void MergeFrom(const EquippedBadge& from);
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
  void InternalSwap(EquippedBadge* other);
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

  // optional .POGOProtos.Enums.BadgeType badge_type = 1;
  void clear_badge_type();
  static const int kBadgeTypeFieldNumber = 1;
  ::POGOProtos::Enums::BadgeType badge_type() const;
  void set_badge_type(::POGOProtos::Enums::BadgeType value);

  // optional int32 level = 2;
  void clear_level();
  static const int kLevelFieldNumber = 2;
  ::google::protobuf::int32 level() const;
  void set_level(::google::protobuf::int32 value);

  // optional int64 next_equip_change_allowed_timestamp_ms = 3;
  void clear_next_equip_change_allowed_timestamp_ms();
  static const int kNextEquipChangeAllowedTimestampMsFieldNumber = 3;
  ::google::protobuf::int64 next_equip_change_allowed_timestamp_ms() const;
  void set_next_equip_change_allowed_timestamp_ms(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Data.Player.EquippedBadge)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  int badge_type_;
  ::google::protobuf::int32 level_;
  ::google::protobuf::int64 next_equip_change_allowed_timestamp_ms_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fData_2fPlayer_2fEquippedBadge_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fData_2fPlayer_2fEquippedBadge_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fData_2fPlayer_2fEquippedBadge_2eproto();

  void InitAsDefaultInstance();
  static EquippedBadge* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// EquippedBadge

// optional .POGOProtos.Enums.BadgeType badge_type = 1;
inline void EquippedBadge::clear_badge_type() {
  badge_type_ = 0;
}
inline ::POGOProtos::Enums::BadgeType EquippedBadge::badge_type() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Player.EquippedBadge.badge_type)
  return static_cast< ::POGOProtos::Enums::BadgeType >(badge_type_);
}
inline void EquippedBadge::set_badge_type(::POGOProtos::Enums::BadgeType value) {
  
  badge_type_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Player.EquippedBadge.badge_type)
}

// optional int32 level = 2;
inline void EquippedBadge::clear_level() {
  level_ = 0;
}
inline ::google::protobuf::int32 EquippedBadge::level() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Player.EquippedBadge.level)
  return level_;
}
inline void EquippedBadge::set_level(::google::protobuf::int32 value) {
  
  level_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Player.EquippedBadge.level)
}

// optional int64 next_equip_change_allowed_timestamp_ms = 3;
inline void EquippedBadge::clear_next_equip_change_allowed_timestamp_ms() {
  next_equip_change_allowed_timestamp_ms_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 EquippedBadge::next_equip_change_allowed_timestamp_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Player.EquippedBadge.next_equip_change_allowed_timestamp_ms)
  return next_equip_change_allowed_timestamp_ms_;
}
inline void EquippedBadge::set_next_equip_change_allowed_timestamp_ms(::google::protobuf::int64 value) {
  
  next_equip_change_allowed_timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Player.EquippedBadge.next_equip_change_allowed_timestamp_ms)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Player
}  // namespace Data
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fData_2fPlayer_2fEquippedBadge_2eproto__INCLUDED
