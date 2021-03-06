// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/CheckAwardedBadgesResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fCheckAwardedBadgesResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fCheckAwardedBadgesResponse_2eproto__INCLUDED

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
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fCheckAwardedBadgesResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fCheckAwardedBadgesResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fCheckAwardedBadgesResponse_2eproto();

class CheckAwardedBadgesResponse;

// ===================================================================

class CheckAwardedBadgesResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.CheckAwardedBadgesResponse) */ {
 public:
  CheckAwardedBadgesResponse();
  virtual ~CheckAwardedBadgesResponse();

  CheckAwardedBadgesResponse(const CheckAwardedBadgesResponse& from);

  inline CheckAwardedBadgesResponse& operator=(const CheckAwardedBadgesResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CheckAwardedBadgesResponse& default_instance();

  void Swap(CheckAwardedBadgesResponse* other);

  // implements Message ----------------------------------------------

  inline CheckAwardedBadgesResponse* New() const { return New(NULL); }

  CheckAwardedBadgesResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CheckAwardedBadgesResponse& from);
  void MergeFrom(const CheckAwardedBadgesResponse& from);
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
  void InternalSwap(CheckAwardedBadgesResponse* other);
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

  // optional bool success = 1;
  void clear_success();
  static const int kSuccessFieldNumber = 1;
  bool success() const;
  void set_success(bool value);

  // repeated .POGOProtos.Enums.BadgeType awarded_badges = 2;
  int awarded_badges_size() const;
  void clear_awarded_badges();
  static const int kAwardedBadgesFieldNumber = 2;
  ::POGOProtos::Enums::BadgeType awarded_badges(int index) const;
  void set_awarded_badges(int index, ::POGOProtos::Enums::BadgeType value);
  void add_awarded_badges(::POGOProtos::Enums::BadgeType value);
  const ::google::protobuf::RepeatedField<int>& awarded_badges() const;
  ::google::protobuf::RepeatedField<int>* mutable_awarded_badges();

  // repeated int32 awarded_badge_levels = 3;
  int awarded_badge_levels_size() const;
  void clear_awarded_badge_levels();
  static const int kAwardedBadgeLevelsFieldNumber = 3;
  ::google::protobuf::int32 awarded_badge_levels(int index) const;
  void set_awarded_badge_levels(int index, ::google::protobuf::int32 value);
  void add_awarded_badge_levels(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      awarded_badge_levels() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_awarded_badge_levels();

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.CheckAwardedBadgesResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedField<int> awarded_badges_;
  mutable int _awarded_badges_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > awarded_badge_levels_;
  mutable int _awarded_badge_levels_cached_byte_size_;
  bool success_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fCheckAwardedBadgesResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fCheckAwardedBadgesResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fCheckAwardedBadgesResponse_2eproto();

  void InitAsDefaultInstance();
  static CheckAwardedBadgesResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CheckAwardedBadgesResponse

// optional bool success = 1;
inline void CheckAwardedBadgesResponse::clear_success() {
  success_ = false;
}
inline bool CheckAwardedBadgesResponse::success() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.CheckAwardedBadgesResponse.success)
  return success_;
}
inline void CheckAwardedBadgesResponse::set_success(bool value) {
  
  success_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.CheckAwardedBadgesResponse.success)
}

// repeated .POGOProtos.Enums.BadgeType awarded_badges = 2;
inline int CheckAwardedBadgesResponse::awarded_badges_size() const {
  return awarded_badges_.size();
}
inline void CheckAwardedBadgesResponse::clear_awarded_badges() {
  awarded_badges_.Clear();
}
inline ::POGOProtos::Enums::BadgeType CheckAwardedBadgesResponse::awarded_badges(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.CheckAwardedBadgesResponse.awarded_badges)
  return static_cast< ::POGOProtos::Enums::BadgeType >(awarded_badges_.Get(index));
}
inline void CheckAwardedBadgesResponse::set_awarded_badges(int index, ::POGOProtos::Enums::BadgeType value) {
  awarded_badges_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.CheckAwardedBadgesResponse.awarded_badges)
}
inline void CheckAwardedBadgesResponse::add_awarded_badges(::POGOProtos::Enums::BadgeType value) {
  awarded_badges_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Responses.CheckAwardedBadgesResponse.awarded_badges)
}
inline const ::google::protobuf::RepeatedField<int>&
CheckAwardedBadgesResponse::awarded_badges() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Responses.CheckAwardedBadgesResponse.awarded_badges)
  return awarded_badges_;
}
inline ::google::protobuf::RepeatedField<int>*
CheckAwardedBadgesResponse::mutable_awarded_badges() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Responses.CheckAwardedBadgesResponse.awarded_badges)
  return &awarded_badges_;
}

// repeated int32 awarded_badge_levels = 3;
inline int CheckAwardedBadgesResponse::awarded_badge_levels_size() const {
  return awarded_badge_levels_.size();
}
inline void CheckAwardedBadgesResponse::clear_awarded_badge_levels() {
  awarded_badge_levels_.Clear();
}
inline ::google::protobuf::int32 CheckAwardedBadgesResponse::awarded_badge_levels(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.CheckAwardedBadgesResponse.awarded_badge_levels)
  return awarded_badge_levels_.Get(index);
}
inline void CheckAwardedBadgesResponse::set_awarded_badge_levels(int index, ::google::protobuf::int32 value) {
  awarded_badge_levels_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.CheckAwardedBadgesResponse.awarded_badge_levels)
}
inline void CheckAwardedBadgesResponse::add_awarded_badge_levels(::google::protobuf::int32 value) {
  awarded_badge_levels_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Responses.CheckAwardedBadgesResponse.awarded_badge_levels)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
CheckAwardedBadgesResponse::awarded_badge_levels() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Responses.CheckAwardedBadgesResponse.awarded_badge_levels)
  return awarded_badge_levels_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
CheckAwardedBadgesResponse::mutable_awarded_badge_levels() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Responses.CheckAwardedBadgesResponse.awarded_badge_levels)
  return &awarded_badge_levels_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fCheckAwardedBadgesResponse_2eproto__INCLUDED
