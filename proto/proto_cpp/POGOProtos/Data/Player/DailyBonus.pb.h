// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Data/Player/DailyBonus.proto

#ifndef PROTOBUF_POGOProtos_2fData_2fPlayer_2fDailyBonus_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fData_2fPlayer_2fDailyBonus_2eproto__INCLUDED

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
void protobuf_AddDesc_POGOProtos_2fData_2fPlayer_2fDailyBonus_2eproto();
void protobuf_AssignDesc_POGOProtos_2fData_2fPlayer_2fDailyBonus_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fData_2fPlayer_2fDailyBonus_2eproto();

class DailyBonus;

// ===================================================================

class DailyBonus : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Data.Player.DailyBonus) */ {
 public:
  DailyBonus();
  virtual ~DailyBonus();

  DailyBonus(const DailyBonus& from);

  inline DailyBonus& operator=(const DailyBonus& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DailyBonus& default_instance();

  void Swap(DailyBonus* other);

  // implements Message ----------------------------------------------

  inline DailyBonus* New() const { return New(NULL); }

  DailyBonus* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DailyBonus& from);
  void MergeFrom(const DailyBonus& from);
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
  void InternalSwap(DailyBonus* other);
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

  // optional int64 next_collected_timestamp_ms = 1;
  void clear_next_collected_timestamp_ms();
  static const int kNextCollectedTimestampMsFieldNumber = 1;
  ::google::protobuf::int64 next_collected_timestamp_ms() const;
  void set_next_collected_timestamp_ms(::google::protobuf::int64 value);

  // optional int64 next_defender_bonus_collect_timestamp_ms = 2;
  void clear_next_defender_bonus_collect_timestamp_ms();
  static const int kNextDefenderBonusCollectTimestampMsFieldNumber = 2;
  ::google::protobuf::int64 next_defender_bonus_collect_timestamp_ms() const;
  void set_next_defender_bonus_collect_timestamp_ms(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Data.Player.DailyBonus)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 next_collected_timestamp_ms_;
  ::google::protobuf::int64 next_defender_bonus_collect_timestamp_ms_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fData_2fPlayer_2fDailyBonus_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fData_2fPlayer_2fDailyBonus_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fData_2fPlayer_2fDailyBonus_2eproto();

  void InitAsDefaultInstance();
  static DailyBonus* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// DailyBonus

// optional int64 next_collected_timestamp_ms = 1;
inline void DailyBonus::clear_next_collected_timestamp_ms() {
  next_collected_timestamp_ms_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 DailyBonus::next_collected_timestamp_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Player.DailyBonus.next_collected_timestamp_ms)
  return next_collected_timestamp_ms_;
}
inline void DailyBonus::set_next_collected_timestamp_ms(::google::protobuf::int64 value) {
  
  next_collected_timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Player.DailyBonus.next_collected_timestamp_ms)
}

// optional int64 next_defender_bonus_collect_timestamp_ms = 2;
inline void DailyBonus::clear_next_defender_bonus_collect_timestamp_ms() {
  next_defender_bonus_collect_timestamp_ms_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 DailyBonus::next_defender_bonus_collect_timestamp_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Player.DailyBonus.next_defender_bonus_collect_timestamp_ms)
  return next_defender_bonus_collect_timestamp_ms_;
}
inline void DailyBonus::set_next_defender_bonus_collect_timestamp_ms(::google::protobuf::int64 value) {
  
  next_defender_bonus_collect_timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Player.DailyBonus.next_defender_bonus_collect_timestamp_ms)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Player
}  // namespace Data
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fData_2fPlayer_2fDailyBonus_2eproto__INCLUDED
