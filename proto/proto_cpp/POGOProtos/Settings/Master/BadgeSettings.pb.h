// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Settings/Master/BadgeSettings.proto

#ifndef PROTOBUF_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto__INCLUDED

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
namespace Settings {
namespace Master {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto();
void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto();

class BadgeSettings;

// ===================================================================

class BadgeSettings : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Settings.Master.BadgeSettings) */ {
 public:
  BadgeSettings();
  virtual ~BadgeSettings();

  BadgeSettings(const BadgeSettings& from);

  inline BadgeSettings& operator=(const BadgeSettings& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BadgeSettings& default_instance();

  void Swap(BadgeSettings* other);

  // implements Message ----------------------------------------------

  inline BadgeSettings* New() const { return New(NULL); }

  BadgeSettings* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BadgeSettings& from);
  void MergeFrom(const BadgeSettings& from);
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
  void InternalSwap(BadgeSettings* other);
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

  // optional int32 badge_rank = 2;
  void clear_badge_rank();
  static const int kBadgeRankFieldNumber = 2;
  ::google::protobuf::int32 badge_rank() const;
  void set_badge_rank(::google::protobuf::int32 value);

  // repeated int32 targets = 3;
  int targets_size() const;
  void clear_targets();
  static const int kTargetsFieldNumber = 3;
  ::google::protobuf::int32 targets(int index) const;
  void set_targets(int index, ::google::protobuf::int32 value);
  void add_targets(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      targets() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_targets();

  // @@protoc_insertion_point(class_scope:POGOProtos.Settings.Master.BadgeSettings)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  int badge_type_;
  ::google::protobuf::int32 badge_rank_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > targets_;
  mutable int _targets_cached_byte_size_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto();

  void InitAsDefaultInstance();
  static BadgeSettings* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// BadgeSettings

// optional .POGOProtos.Enums.BadgeType badge_type = 1;
inline void BadgeSettings::clear_badge_type() {
  badge_type_ = 0;
}
inline ::POGOProtos::Enums::BadgeType BadgeSettings::badge_type() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.BadgeSettings.badge_type)
  return static_cast< ::POGOProtos::Enums::BadgeType >(badge_type_);
}
inline void BadgeSettings::set_badge_type(::POGOProtos::Enums::BadgeType value) {
  
  badge_type_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.BadgeSettings.badge_type)
}

// optional int32 badge_rank = 2;
inline void BadgeSettings::clear_badge_rank() {
  badge_rank_ = 0;
}
inline ::google::protobuf::int32 BadgeSettings::badge_rank() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.BadgeSettings.badge_rank)
  return badge_rank_;
}
inline void BadgeSettings::set_badge_rank(::google::protobuf::int32 value) {
  
  badge_rank_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.BadgeSettings.badge_rank)
}

// repeated int32 targets = 3;
inline int BadgeSettings::targets_size() const {
  return targets_.size();
}
inline void BadgeSettings::clear_targets() {
  targets_.Clear();
}
inline ::google::protobuf::int32 BadgeSettings::targets(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.BadgeSettings.targets)
  return targets_.Get(index);
}
inline void BadgeSettings::set_targets(int index, ::google::protobuf::int32 value) {
  targets_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.BadgeSettings.targets)
}
inline void BadgeSettings::add_targets(::google::protobuf::int32 value) {
  targets_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Settings.Master.BadgeSettings.targets)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
BadgeSettings::targets() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Settings.Master.BadgeSettings.targets)
  return targets_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
BadgeSettings::mutable_targets() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Settings.Master.BadgeSettings.targets)
  return &targets_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Master
}  // namespace Settings
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fSettings_2fMaster_2fBadgeSettings_2eproto__INCLUDED
