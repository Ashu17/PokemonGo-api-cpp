// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/LevelUpRewardsResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fLevelUpRewardsResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fLevelUpRewardsResponse_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "POGOProtos/Inventory/Item/ItemId.pb.h"
#include "POGOProtos/Inventory/Item/ItemAward.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fLevelUpRewardsResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fLevelUpRewardsResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fLevelUpRewardsResponse_2eproto();

class LevelUpRewardsResponse;

enum LevelUpRewardsResponse_Result {
  LevelUpRewardsResponse_Result_UNSET = 0,
  LevelUpRewardsResponse_Result_SUCCESS = 1,
  LevelUpRewardsResponse_Result_AWARDED_ALREADY = 2,
  LevelUpRewardsResponse_Result_LevelUpRewardsResponse_Result_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  LevelUpRewardsResponse_Result_LevelUpRewardsResponse_Result_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool LevelUpRewardsResponse_Result_IsValid(int value);
const LevelUpRewardsResponse_Result LevelUpRewardsResponse_Result_Result_MIN = LevelUpRewardsResponse_Result_UNSET;
const LevelUpRewardsResponse_Result LevelUpRewardsResponse_Result_Result_MAX = LevelUpRewardsResponse_Result_AWARDED_ALREADY;
const int LevelUpRewardsResponse_Result_Result_ARRAYSIZE = LevelUpRewardsResponse_Result_Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* LevelUpRewardsResponse_Result_descriptor();
inline const ::std::string& LevelUpRewardsResponse_Result_Name(LevelUpRewardsResponse_Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    LevelUpRewardsResponse_Result_descriptor(), value);
}
inline bool LevelUpRewardsResponse_Result_Parse(
    const ::std::string& name, LevelUpRewardsResponse_Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LevelUpRewardsResponse_Result>(
    LevelUpRewardsResponse_Result_descriptor(), name, value);
}
// ===================================================================

class LevelUpRewardsResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.LevelUpRewardsResponse) */ {
 public:
  LevelUpRewardsResponse();
  virtual ~LevelUpRewardsResponse();

  LevelUpRewardsResponse(const LevelUpRewardsResponse& from);

  inline LevelUpRewardsResponse& operator=(const LevelUpRewardsResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LevelUpRewardsResponse& default_instance();

  void Swap(LevelUpRewardsResponse* other);

  // implements Message ----------------------------------------------

  inline LevelUpRewardsResponse* New() const { return New(NULL); }

  LevelUpRewardsResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LevelUpRewardsResponse& from);
  void MergeFrom(const LevelUpRewardsResponse& from);
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
  void InternalSwap(LevelUpRewardsResponse* other);
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

  typedef LevelUpRewardsResponse_Result Result;
  static const Result UNSET =
    LevelUpRewardsResponse_Result_UNSET;
  static const Result SUCCESS =
    LevelUpRewardsResponse_Result_SUCCESS;
  static const Result AWARDED_ALREADY =
    LevelUpRewardsResponse_Result_AWARDED_ALREADY;
  static inline bool Result_IsValid(int value) {
    return LevelUpRewardsResponse_Result_IsValid(value);
  }
  static const Result Result_MIN =
    LevelUpRewardsResponse_Result_Result_MIN;
  static const Result Result_MAX =
    LevelUpRewardsResponse_Result_Result_MAX;
  static const int Result_ARRAYSIZE =
    LevelUpRewardsResponse_Result_Result_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Result_descriptor() {
    return LevelUpRewardsResponse_Result_descriptor();
  }
  static inline const ::std::string& Result_Name(Result value) {
    return LevelUpRewardsResponse_Result_Name(value);
  }
  static inline bool Result_Parse(const ::std::string& name,
      Result* value) {
    return LevelUpRewardsResponse_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .POGOProtos.Networking.Responses.LevelUpRewardsResponse.Result result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::POGOProtos::Networking::Responses::LevelUpRewardsResponse_Result result() const;
  void set_result(::POGOProtos::Networking::Responses::LevelUpRewardsResponse_Result value);

  // repeated .POGOProtos.Inventory.Item.ItemAward items_awarded = 2;
  int items_awarded_size() const;
  void clear_items_awarded();
  static const int kItemsAwardedFieldNumber = 2;
  const ::POGOProtos::Inventory::Item::ItemAward& items_awarded(int index) const;
  ::POGOProtos::Inventory::Item::ItemAward* mutable_items_awarded(int index);
  ::POGOProtos::Inventory::Item::ItemAward* add_items_awarded();
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Inventory::Item::ItemAward >*
      mutable_items_awarded();
  const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Inventory::Item::ItemAward >&
      items_awarded() const;

  // repeated .POGOProtos.Inventory.Item.ItemId items_unlocked = 4;
  int items_unlocked_size() const;
  void clear_items_unlocked();
  static const int kItemsUnlockedFieldNumber = 4;
  ::POGOProtos::Inventory::Item::ItemId items_unlocked(int index) const;
  void set_items_unlocked(int index, ::POGOProtos::Inventory::Item::ItemId value);
  void add_items_unlocked(::POGOProtos::Inventory::Item::ItemId value);
  const ::google::protobuf::RepeatedField<int>& items_unlocked() const;
  ::google::protobuf::RepeatedField<int>* mutable_items_unlocked();

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.LevelUpRewardsResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Inventory::Item::ItemAward > items_awarded_;
  ::google::protobuf::RepeatedField<int> items_unlocked_;
  mutable int _items_unlocked_cached_byte_size_;
  int result_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fLevelUpRewardsResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fLevelUpRewardsResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fLevelUpRewardsResponse_2eproto();

  void InitAsDefaultInstance();
  static LevelUpRewardsResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LevelUpRewardsResponse

// optional .POGOProtos.Networking.Responses.LevelUpRewardsResponse.Result result = 1;
inline void LevelUpRewardsResponse::clear_result() {
  result_ = 0;
}
inline ::POGOProtos::Networking::Responses::LevelUpRewardsResponse_Result LevelUpRewardsResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.LevelUpRewardsResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::LevelUpRewardsResponse_Result >(result_);
}
inline void LevelUpRewardsResponse::set_result(::POGOProtos::Networking::Responses::LevelUpRewardsResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.LevelUpRewardsResponse.result)
}

// repeated .POGOProtos.Inventory.Item.ItemAward items_awarded = 2;
inline int LevelUpRewardsResponse::items_awarded_size() const {
  return items_awarded_.size();
}
inline void LevelUpRewardsResponse::clear_items_awarded() {
  items_awarded_.Clear();
}
inline const ::POGOProtos::Inventory::Item::ItemAward& LevelUpRewardsResponse::items_awarded(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.LevelUpRewardsResponse.items_awarded)
  return items_awarded_.Get(index);
}
inline ::POGOProtos::Inventory::Item::ItemAward* LevelUpRewardsResponse::mutable_items_awarded(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.LevelUpRewardsResponse.items_awarded)
  return items_awarded_.Mutable(index);
}
inline ::POGOProtos::Inventory::Item::ItemAward* LevelUpRewardsResponse::add_items_awarded() {
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Responses.LevelUpRewardsResponse.items_awarded)
  return items_awarded_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::POGOProtos::Inventory::Item::ItemAward >*
LevelUpRewardsResponse::mutable_items_awarded() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Responses.LevelUpRewardsResponse.items_awarded)
  return &items_awarded_;
}
inline const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Inventory::Item::ItemAward >&
LevelUpRewardsResponse::items_awarded() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Responses.LevelUpRewardsResponse.items_awarded)
  return items_awarded_;
}

// repeated .POGOProtos.Inventory.Item.ItemId items_unlocked = 4;
inline int LevelUpRewardsResponse::items_unlocked_size() const {
  return items_unlocked_.size();
}
inline void LevelUpRewardsResponse::clear_items_unlocked() {
  items_unlocked_.Clear();
}
inline ::POGOProtos::Inventory::Item::ItemId LevelUpRewardsResponse::items_unlocked(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.LevelUpRewardsResponse.items_unlocked)
  return static_cast< ::POGOProtos::Inventory::Item::ItemId >(items_unlocked_.Get(index));
}
inline void LevelUpRewardsResponse::set_items_unlocked(int index, ::POGOProtos::Inventory::Item::ItemId value) {
  items_unlocked_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.LevelUpRewardsResponse.items_unlocked)
}
inline void LevelUpRewardsResponse::add_items_unlocked(::POGOProtos::Inventory::Item::ItemId value) {
  items_unlocked_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Responses.LevelUpRewardsResponse.items_unlocked)
}
inline const ::google::protobuf::RepeatedField<int>&
LevelUpRewardsResponse::items_unlocked() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Responses.LevelUpRewardsResponse.items_unlocked)
  return items_unlocked_;
}
inline ::google::protobuf::RepeatedField<int>*
LevelUpRewardsResponse::mutable_items_unlocked() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Responses.LevelUpRewardsResponse.items_unlocked)
  return &items_unlocked_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Networking::Responses::LevelUpRewardsResponse_Result> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Networking::Responses::LevelUpRewardsResponse_Result>() {
  return ::POGOProtos::Networking::Responses::LevelUpRewardsResponse_Result_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fLevelUpRewardsResponse_2eproto__INCLUDED