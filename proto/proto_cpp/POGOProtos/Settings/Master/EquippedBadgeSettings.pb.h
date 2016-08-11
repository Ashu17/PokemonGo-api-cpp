// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Settings/Master/EquippedBadgeSettings.proto

#ifndef PROTOBUF_POGOProtos_2fSettings_2fMaster_2fEquippedBadgeSettings_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fSettings_2fMaster_2fEquippedBadgeSettings_2eproto__INCLUDED

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
namespace Settings {
namespace Master {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fEquippedBadgeSettings_2eproto();
void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fEquippedBadgeSettings_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fEquippedBadgeSettings_2eproto();

class EquippedBadgeSettings;

// ===================================================================

class EquippedBadgeSettings : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Settings.Master.EquippedBadgeSettings) */ {
 public:
  EquippedBadgeSettings();
  virtual ~EquippedBadgeSettings();

  EquippedBadgeSettings(const EquippedBadgeSettings& from);

  inline EquippedBadgeSettings& operator=(const EquippedBadgeSettings& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EquippedBadgeSettings& default_instance();

  void Swap(EquippedBadgeSettings* other);

  // implements Message ----------------------------------------------

  inline EquippedBadgeSettings* New() const { return New(NULL); }

  EquippedBadgeSettings* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EquippedBadgeSettings& from);
  void MergeFrom(const EquippedBadgeSettings& from);
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
  void InternalSwap(EquippedBadgeSettings* other);
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

  // optional int64 equip_badge_cooldown_ms = 1;
  void clear_equip_badge_cooldown_ms();
  static const int kEquipBadgeCooldownMsFieldNumber = 1;
  ::google::protobuf::int64 equip_badge_cooldown_ms() const;
  void set_equip_badge_cooldown_ms(::google::protobuf::int64 value);

  // repeated float catch_probability_bonus = 2;
  int catch_probability_bonus_size() const;
  void clear_catch_probability_bonus();
  static const int kCatchProbabilityBonusFieldNumber = 2;
  float catch_probability_bonus(int index) const;
  void set_catch_probability_bonus(int index, float value);
  void add_catch_probability_bonus(float value);
  const ::google::protobuf::RepeatedField< float >&
      catch_probability_bonus() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_catch_probability_bonus();

  // repeated float flee_probability_bonus = 3;
  int flee_probability_bonus_size() const;
  void clear_flee_probability_bonus();
  static const int kFleeProbabilityBonusFieldNumber = 3;
  float flee_probability_bonus(int index) const;
  void set_flee_probability_bonus(int index, float value);
  void add_flee_probability_bonus(float value);
  const ::google::protobuf::RepeatedField< float >&
      flee_probability_bonus() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_flee_probability_bonus();

  // @@protoc_insertion_point(class_scope:POGOProtos.Settings.Master.EquippedBadgeSettings)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 equip_badge_cooldown_ms_;
  ::google::protobuf::RepeatedField< float > catch_probability_bonus_;
  mutable int _catch_probability_bonus_cached_byte_size_;
  ::google::protobuf::RepeatedField< float > flee_probability_bonus_;
  mutable int _flee_probability_bonus_cached_byte_size_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fEquippedBadgeSettings_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fEquippedBadgeSettings_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fEquippedBadgeSettings_2eproto();

  void InitAsDefaultInstance();
  static EquippedBadgeSettings* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// EquippedBadgeSettings

// optional int64 equip_badge_cooldown_ms = 1;
inline void EquippedBadgeSettings::clear_equip_badge_cooldown_ms() {
  equip_badge_cooldown_ms_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 EquippedBadgeSettings::equip_badge_cooldown_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.EquippedBadgeSettings.equip_badge_cooldown_ms)
  return equip_badge_cooldown_ms_;
}
inline void EquippedBadgeSettings::set_equip_badge_cooldown_ms(::google::protobuf::int64 value) {
  
  equip_badge_cooldown_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.EquippedBadgeSettings.equip_badge_cooldown_ms)
}

// repeated float catch_probability_bonus = 2;
inline int EquippedBadgeSettings::catch_probability_bonus_size() const {
  return catch_probability_bonus_.size();
}
inline void EquippedBadgeSettings::clear_catch_probability_bonus() {
  catch_probability_bonus_.Clear();
}
inline float EquippedBadgeSettings::catch_probability_bonus(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.EquippedBadgeSettings.catch_probability_bonus)
  return catch_probability_bonus_.Get(index);
}
inline void EquippedBadgeSettings::set_catch_probability_bonus(int index, float value) {
  catch_probability_bonus_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.EquippedBadgeSettings.catch_probability_bonus)
}
inline void EquippedBadgeSettings::add_catch_probability_bonus(float value) {
  catch_probability_bonus_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Settings.Master.EquippedBadgeSettings.catch_probability_bonus)
}
inline const ::google::protobuf::RepeatedField< float >&
EquippedBadgeSettings::catch_probability_bonus() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Settings.Master.EquippedBadgeSettings.catch_probability_bonus)
  return catch_probability_bonus_;
}
inline ::google::protobuf::RepeatedField< float >*
EquippedBadgeSettings::mutable_catch_probability_bonus() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Settings.Master.EquippedBadgeSettings.catch_probability_bonus)
  return &catch_probability_bonus_;
}

// repeated float flee_probability_bonus = 3;
inline int EquippedBadgeSettings::flee_probability_bonus_size() const {
  return flee_probability_bonus_.size();
}
inline void EquippedBadgeSettings::clear_flee_probability_bonus() {
  flee_probability_bonus_.Clear();
}
inline float EquippedBadgeSettings::flee_probability_bonus(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.EquippedBadgeSettings.flee_probability_bonus)
  return flee_probability_bonus_.Get(index);
}
inline void EquippedBadgeSettings::set_flee_probability_bonus(int index, float value) {
  flee_probability_bonus_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.EquippedBadgeSettings.flee_probability_bonus)
}
inline void EquippedBadgeSettings::add_flee_probability_bonus(float value) {
  flee_probability_bonus_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Settings.Master.EquippedBadgeSettings.flee_probability_bonus)
}
inline const ::google::protobuf::RepeatedField< float >&
EquippedBadgeSettings::flee_probability_bonus() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Settings.Master.EquippedBadgeSettings.flee_probability_bonus)
  return flee_probability_bonus_;
}
inline ::google::protobuf::RepeatedField< float >*
EquippedBadgeSettings::mutable_flee_probability_bonus() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Settings.Master.EquippedBadgeSettings.flee_probability_bonus)
  return &flee_probability_bonus_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Master
}  // namespace Settings
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fSettings_2fMaster_2fEquippedBadgeSettings_2eproto__INCLUDED
