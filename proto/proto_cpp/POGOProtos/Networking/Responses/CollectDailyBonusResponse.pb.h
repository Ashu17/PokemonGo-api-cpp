// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/CollectDailyBonusResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fCollectDailyBonusResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fCollectDailyBonusResponse_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fCollectDailyBonusResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fCollectDailyBonusResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fCollectDailyBonusResponse_2eproto();

class CollectDailyBonusResponse;

enum CollectDailyBonusResponse_Result {
  CollectDailyBonusResponse_Result_UNSET = 0,
  CollectDailyBonusResponse_Result_SUCCESS = 1,
  CollectDailyBonusResponse_Result_FAILURE = 2,
  CollectDailyBonusResponse_Result_TOO_SOON = 3,
  CollectDailyBonusResponse_Result_CollectDailyBonusResponse_Result_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  CollectDailyBonusResponse_Result_CollectDailyBonusResponse_Result_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool CollectDailyBonusResponse_Result_IsValid(int value);
const CollectDailyBonusResponse_Result CollectDailyBonusResponse_Result_Result_MIN = CollectDailyBonusResponse_Result_UNSET;
const CollectDailyBonusResponse_Result CollectDailyBonusResponse_Result_Result_MAX = CollectDailyBonusResponse_Result_TOO_SOON;
const int CollectDailyBonusResponse_Result_Result_ARRAYSIZE = CollectDailyBonusResponse_Result_Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* CollectDailyBonusResponse_Result_descriptor();
inline const ::std::string& CollectDailyBonusResponse_Result_Name(CollectDailyBonusResponse_Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    CollectDailyBonusResponse_Result_descriptor(), value);
}
inline bool CollectDailyBonusResponse_Result_Parse(
    const ::std::string& name, CollectDailyBonusResponse_Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CollectDailyBonusResponse_Result>(
    CollectDailyBonusResponse_Result_descriptor(), name, value);
}
// ===================================================================

class CollectDailyBonusResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.CollectDailyBonusResponse) */ {
 public:
  CollectDailyBonusResponse();
  virtual ~CollectDailyBonusResponse();

  CollectDailyBonusResponse(const CollectDailyBonusResponse& from);

  inline CollectDailyBonusResponse& operator=(const CollectDailyBonusResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CollectDailyBonusResponse& default_instance();

  void Swap(CollectDailyBonusResponse* other);

  // implements Message ----------------------------------------------

  inline CollectDailyBonusResponse* New() const { return New(NULL); }

  CollectDailyBonusResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CollectDailyBonusResponse& from);
  void MergeFrom(const CollectDailyBonusResponse& from);
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
  void InternalSwap(CollectDailyBonusResponse* other);
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

  typedef CollectDailyBonusResponse_Result Result;
  static const Result UNSET =
    CollectDailyBonusResponse_Result_UNSET;
  static const Result SUCCESS =
    CollectDailyBonusResponse_Result_SUCCESS;
  static const Result FAILURE =
    CollectDailyBonusResponse_Result_FAILURE;
  static const Result TOO_SOON =
    CollectDailyBonusResponse_Result_TOO_SOON;
  static inline bool Result_IsValid(int value) {
    return CollectDailyBonusResponse_Result_IsValid(value);
  }
  static const Result Result_MIN =
    CollectDailyBonusResponse_Result_Result_MIN;
  static const Result Result_MAX =
    CollectDailyBonusResponse_Result_Result_MAX;
  static const int Result_ARRAYSIZE =
    CollectDailyBonusResponse_Result_Result_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Result_descriptor() {
    return CollectDailyBonusResponse_Result_descriptor();
  }
  static inline const ::std::string& Result_Name(Result value) {
    return CollectDailyBonusResponse_Result_Name(value);
  }
  static inline bool Result_Parse(const ::std::string& name,
      Result* value) {
    return CollectDailyBonusResponse_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .POGOProtos.Networking.Responses.CollectDailyBonusResponse.Result result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::POGOProtos::Networking::Responses::CollectDailyBonusResponse_Result result() const;
  void set_result(::POGOProtos::Networking::Responses::CollectDailyBonusResponse_Result value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.CollectDailyBonusResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  int result_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fCollectDailyBonusResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fCollectDailyBonusResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fCollectDailyBonusResponse_2eproto();

  void InitAsDefaultInstance();
  static CollectDailyBonusResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CollectDailyBonusResponse

// optional .POGOProtos.Networking.Responses.CollectDailyBonusResponse.Result result = 1;
inline void CollectDailyBonusResponse::clear_result() {
  result_ = 0;
}
inline ::POGOProtos::Networking::Responses::CollectDailyBonusResponse_Result CollectDailyBonusResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.CollectDailyBonusResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::CollectDailyBonusResponse_Result >(result_);
}
inline void CollectDailyBonusResponse::set_result(::POGOProtos::Networking::Responses::CollectDailyBonusResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.CollectDailyBonusResponse.result)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Networking::Responses::CollectDailyBonusResponse_Result> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Networking::Responses::CollectDailyBonusResponse_Result>() {
  return ::POGOProtos::Networking::Responses::CollectDailyBonusResponse_Result_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fCollectDailyBonusResponse_2eproto__INCLUDED