// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Settings/Master/IapSettings.proto

#ifndef PROTOBUF_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto__INCLUDED

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
void protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto();
void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto();

class IapSettings;

// ===================================================================

class IapSettings : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Settings.Master.IapSettings) */ {
 public:
  IapSettings();
  virtual ~IapSettings();

  IapSettings(const IapSettings& from);

  inline IapSettings& operator=(const IapSettings& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const IapSettings& default_instance();

  void Swap(IapSettings* other);

  // implements Message ----------------------------------------------

  inline IapSettings* New() const { return New(NULL); }

  IapSettings* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const IapSettings& from);
  void MergeFrom(const IapSettings& from);
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
  void InternalSwap(IapSettings* other);
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

  // optional int32 daily_bonus_coins = 1;
  void clear_daily_bonus_coins();
  static const int kDailyBonusCoinsFieldNumber = 1;
  ::google::protobuf::int32 daily_bonus_coins() const;
  void set_daily_bonus_coins(::google::protobuf::int32 value);

  // repeated int32 daily_defender_bonus_per_pokemon = 2;
  int daily_defender_bonus_per_pokemon_size() const;
  void clear_daily_defender_bonus_per_pokemon();
  static const int kDailyDefenderBonusPerPokemonFieldNumber = 2;
  ::google::protobuf::int32 daily_defender_bonus_per_pokemon(int index) const;
  void set_daily_defender_bonus_per_pokemon(int index, ::google::protobuf::int32 value);
  void add_daily_defender_bonus_per_pokemon(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      daily_defender_bonus_per_pokemon() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_daily_defender_bonus_per_pokemon();

  // optional int32 daily_defender_bonus_max_defenders = 3;
  void clear_daily_defender_bonus_max_defenders();
  static const int kDailyDefenderBonusMaxDefendersFieldNumber = 3;
  ::google::protobuf::int32 daily_defender_bonus_max_defenders() const;
  void set_daily_defender_bonus_max_defenders(::google::protobuf::int32 value);

  // repeated string daily_defender_bonus_currency = 4;
  int daily_defender_bonus_currency_size() const;
  void clear_daily_defender_bonus_currency();
  static const int kDailyDefenderBonusCurrencyFieldNumber = 4;
  const ::std::string& daily_defender_bonus_currency(int index) const;
  ::std::string* mutable_daily_defender_bonus_currency(int index);
  void set_daily_defender_bonus_currency(int index, const ::std::string& value);
  void set_daily_defender_bonus_currency(int index, const char* value);
  void set_daily_defender_bonus_currency(int index, const char* value, size_t size);
  ::std::string* add_daily_defender_bonus_currency();
  void add_daily_defender_bonus_currency(const ::std::string& value);
  void add_daily_defender_bonus_currency(const char* value);
  void add_daily_defender_bonus_currency(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& daily_defender_bonus_currency() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_daily_defender_bonus_currency();

  // optional int64 min_time_between_claims_ms = 5;
  void clear_min_time_between_claims_ms();
  static const int kMinTimeBetweenClaimsMsFieldNumber = 5;
  ::google::protobuf::int64 min_time_between_claims_ms() const;
  void set_min_time_between_claims_ms(::google::protobuf::int64 value);

  // optional bool daily_bonus_enabled = 6;
  void clear_daily_bonus_enabled();
  static const int kDailyBonusEnabledFieldNumber = 6;
  bool daily_bonus_enabled() const;
  void set_daily_bonus_enabled(bool value);

  // optional bool daily_defender_bonus_enabled = 7;
  void clear_daily_defender_bonus_enabled();
  static const int kDailyDefenderBonusEnabledFieldNumber = 7;
  bool daily_defender_bonus_enabled() const;
  void set_daily_defender_bonus_enabled(bool value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Settings.Master.IapSettings)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > daily_defender_bonus_per_pokemon_;
  mutable int _daily_defender_bonus_per_pokemon_cached_byte_size_;
  ::google::protobuf::int32 daily_bonus_coins_;
  ::google::protobuf::int32 daily_defender_bonus_max_defenders_;
  ::google::protobuf::RepeatedPtrField< ::std::string> daily_defender_bonus_currency_;
  ::google::protobuf::int64 min_time_between_claims_ms_;
  bool daily_bonus_enabled_;
  bool daily_defender_bonus_enabled_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto();

  void InitAsDefaultInstance();
  static IapSettings* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// IapSettings

// optional int32 daily_bonus_coins = 1;
inline void IapSettings::clear_daily_bonus_coins() {
  daily_bonus_coins_ = 0;
}
inline ::google::protobuf::int32 IapSettings::daily_bonus_coins() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapSettings.daily_bonus_coins)
  return daily_bonus_coins_;
}
inline void IapSettings::set_daily_bonus_coins(::google::protobuf::int32 value) {
  
  daily_bonus_coins_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapSettings.daily_bonus_coins)
}

// repeated int32 daily_defender_bonus_per_pokemon = 2;
inline int IapSettings::daily_defender_bonus_per_pokemon_size() const {
  return daily_defender_bonus_per_pokemon_.size();
}
inline void IapSettings::clear_daily_defender_bonus_per_pokemon() {
  daily_defender_bonus_per_pokemon_.Clear();
}
inline ::google::protobuf::int32 IapSettings::daily_defender_bonus_per_pokemon(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_per_pokemon)
  return daily_defender_bonus_per_pokemon_.Get(index);
}
inline void IapSettings::set_daily_defender_bonus_per_pokemon(int index, ::google::protobuf::int32 value) {
  daily_defender_bonus_per_pokemon_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_per_pokemon)
}
inline void IapSettings::add_daily_defender_bonus_per_pokemon(::google::protobuf::int32 value) {
  daily_defender_bonus_per_pokemon_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_per_pokemon)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
IapSettings::daily_defender_bonus_per_pokemon() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_per_pokemon)
  return daily_defender_bonus_per_pokemon_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
IapSettings::mutable_daily_defender_bonus_per_pokemon() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_per_pokemon)
  return &daily_defender_bonus_per_pokemon_;
}

// optional int32 daily_defender_bonus_max_defenders = 3;
inline void IapSettings::clear_daily_defender_bonus_max_defenders() {
  daily_defender_bonus_max_defenders_ = 0;
}
inline ::google::protobuf::int32 IapSettings::daily_defender_bonus_max_defenders() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_max_defenders)
  return daily_defender_bonus_max_defenders_;
}
inline void IapSettings::set_daily_defender_bonus_max_defenders(::google::protobuf::int32 value) {
  
  daily_defender_bonus_max_defenders_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_max_defenders)
}

// repeated string daily_defender_bonus_currency = 4;
inline int IapSettings::daily_defender_bonus_currency_size() const {
  return daily_defender_bonus_currency_.size();
}
inline void IapSettings::clear_daily_defender_bonus_currency() {
  daily_defender_bonus_currency_.Clear();
}
inline const ::std::string& IapSettings::daily_defender_bonus_currency(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
  return daily_defender_bonus_currency_.Get(index);
}
inline ::std::string* IapSettings::mutable_daily_defender_bonus_currency(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
  return daily_defender_bonus_currency_.Mutable(index);
}
inline void IapSettings::set_daily_defender_bonus_currency(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
  daily_defender_bonus_currency_.Mutable(index)->assign(value);
}
inline void IapSettings::set_daily_defender_bonus_currency(int index, const char* value) {
  daily_defender_bonus_currency_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
}
inline void IapSettings::set_daily_defender_bonus_currency(int index, const char* value, size_t size) {
  daily_defender_bonus_currency_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
}
inline ::std::string* IapSettings::add_daily_defender_bonus_currency() {
  // @@protoc_insertion_point(field_add_mutable:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
  return daily_defender_bonus_currency_.Add();
}
inline void IapSettings::add_daily_defender_bonus_currency(const ::std::string& value) {
  daily_defender_bonus_currency_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
}
inline void IapSettings::add_daily_defender_bonus_currency(const char* value) {
  daily_defender_bonus_currency_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
}
inline void IapSettings::add_daily_defender_bonus_currency(const char* value, size_t size) {
  daily_defender_bonus_currency_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
IapSettings::daily_defender_bonus_currency() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
  return daily_defender_bonus_currency_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
IapSettings::mutable_daily_defender_bonus_currency() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_currency)
  return &daily_defender_bonus_currency_;
}

// optional int64 min_time_between_claims_ms = 5;
inline void IapSettings::clear_min_time_between_claims_ms() {
  min_time_between_claims_ms_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 IapSettings::min_time_between_claims_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapSettings.min_time_between_claims_ms)
  return min_time_between_claims_ms_;
}
inline void IapSettings::set_min_time_between_claims_ms(::google::protobuf::int64 value) {
  
  min_time_between_claims_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapSettings.min_time_between_claims_ms)
}

// optional bool daily_bonus_enabled = 6;
inline void IapSettings::clear_daily_bonus_enabled() {
  daily_bonus_enabled_ = false;
}
inline bool IapSettings::daily_bonus_enabled() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapSettings.daily_bonus_enabled)
  return daily_bonus_enabled_;
}
inline void IapSettings::set_daily_bonus_enabled(bool value) {
  
  daily_bonus_enabled_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapSettings.daily_bonus_enabled)
}

// optional bool daily_defender_bonus_enabled = 7;
inline void IapSettings::clear_daily_defender_bonus_enabled() {
  daily_defender_bonus_enabled_ = false;
}
inline bool IapSettings::daily_defender_bonus_enabled() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_enabled)
  return daily_defender_bonus_enabled_;
}
inline void IapSettings::set_daily_defender_bonus_enabled(bool value) {
  
  daily_defender_bonus_enabled_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.IapSettings.daily_defender_bonus_enabled)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Master
}  // namespace Settings
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fSettings_2fMaster_2fIapSettings_2eproto__INCLUDED
