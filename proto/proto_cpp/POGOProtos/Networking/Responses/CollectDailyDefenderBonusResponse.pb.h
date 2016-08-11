// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/CollectDailyDefenderBonusResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fCollectDailyDefenderBonusResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fCollectDailyDefenderBonusResponse_2eproto__INCLUDED

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
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fCollectDailyDefenderBonusResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fCollectDailyDefenderBonusResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fCollectDailyDefenderBonusResponse_2eproto();

class CollectDailyDefenderBonusResponse;

enum CollectDailyDefenderBonusResponse_Result {
  CollectDailyDefenderBonusResponse_Result_UNSET = 0,
  CollectDailyDefenderBonusResponse_Result_SUCCESS = 1,
  CollectDailyDefenderBonusResponse_Result_FAILURE = 2,
  CollectDailyDefenderBonusResponse_Result_TOO_SOON = 3,
  CollectDailyDefenderBonusResponse_Result_NO_DEFENDERS = 4,
  CollectDailyDefenderBonusResponse_Result_CollectDailyDefenderBonusResponse_Result_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  CollectDailyDefenderBonusResponse_Result_CollectDailyDefenderBonusResponse_Result_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool CollectDailyDefenderBonusResponse_Result_IsValid(int value);
const CollectDailyDefenderBonusResponse_Result CollectDailyDefenderBonusResponse_Result_Result_MIN = CollectDailyDefenderBonusResponse_Result_UNSET;
const CollectDailyDefenderBonusResponse_Result CollectDailyDefenderBonusResponse_Result_Result_MAX = CollectDailyDefenderBonusResponse_Result_NO_DEFENDERS;
const int CollectDailyDefenderBonusResponse_Result_Result_ARRAYSIZE = CollectDailyDefenderBonusResponse_Result_Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* CollectDailyDefenderBonusResponse_Result_descriptor();
inline const ::std::string& CollectDailyDefenderBonusResponse_Result_Name(CollectDailyDefenderBonusResponse_Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    CollectDailyDefenderBonusResponse_Result_descriptor(), value);
}
inline bool CollectDailyDefenderBonusResponse_Result_Parse(
    const ::std::string& name, CollectDailyDefenderBonusResponse_Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CollectDailyDefenderBonusResponse_Result>(
    CollectDailyDefenderBonusResponse_Result_descriptor(), name, value);
}
// ===================================================================

class CollectDailyDefenderBonusResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse) */ {
 public:
  CollectDailyDefenderBonusResponse();
  virtual ~CollectDailyDefenderBonusResponse();

  CollectDailyDefenderBonusResponse(const CollectDailyDefenderBonusResponse& from);

  inline CollectDailyDefenderBonusResponse& operator=(const CollectDailyDefenderBonusResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CollectDailyDefenderBonusResponse& default_instance();

  void Swap(CollectDailyDefenderBonusResponse* other);

  // implements Message ----------------------------------------------

  inline CollectDailyDefenderBonusResponse* New() const { return New(NULL); }

  CollectDailyDefenderBonusResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CollectDailyDefenderBonusResponse& from);
  void MergeFrom(const CollectDailyDefenderBonusResponse& from);
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
  void InternalSwap(CollectDailyDefenderBonusResponse* other);
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

  typedef CollectDailyDefenderBonusResponse_Result Result;
  static const Result UNSET =
    CollectDailyDefenderBonusResponse_Result_UNSET;
  static const Result SUCCESS =
    CollectDailyDefenderBonusResponse_Result_SUCCESS;
  static const Result FAILURE =
    CollectDailyDefenderBonusResponse_Result_FAILURE;
  static const Result TOO_SOON =
    CollectDailyDefenderBonusResponse_Result_TOO_SOON;
  static const Result NO_DEFENDERS =
    CollectDailyDefenderBonusResponse_Result_NO_DEFENDERS;
  static inline bool Result_IsValid(int value) {
    return CollectDailyDefenderBonusResponse_Result_IsValid(value);
  }
  static const Result Result_MIN =
    CollectDailyDefenderBonusResponse_Result_Result_MIN;
  static const Result Result_MAX =
    CollectDailyDefenderBonusResponse_Result_Result_MAX;
  static const int Result_ARRAYSIZE =
    CollectDailyDefenderBonusResponse_Result_Result_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Result_descriptor() {
    return CollectDailyDefenderBonusResponse_Result_descriptor();
  }
  static inline const ::std::string& Result_Name(Result value) {
    return CollectDailyDefenderBonusResponse_Result_Name(value);
  }
  static inline bool Result_Parse(const ::std::string& name,
      Result* value) {
    return CollectDailyDefenderBonusResponse_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.Result result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::POGOProtos::Networking::Responses::CollectDailyDefenderBonusResponse_Result result() const;
  void set_result(::POGOProtos::Networking::Responses::CollectDailyDefenderBonusResponse_Result value);

  // repeated string currency_type = 2;
  int currency_type_size() const;
  void clear_currency_type();
  static const int kCurrencyTypeFieldNumber = 2;
  const ::std::string& currency_type(int index) const;
  ::std::string* mutable_currency_type(int index);
  void set_currency_type(int index, const ::std::string& value);
  void set_currency_type(int index, const char* value);
  void set_currency_type(int index, const char* value, size_t size);
  ::std::string* add_currency_type();
  void add_currency_type(const ::std::string& value);
  void add_currency_type(const char* value);
  void add_currency_type(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& currency_type() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_currency_type();

  // repeated int32 currency_awarded = 3;
  int currency_awarded_size() const;
  void clear_currency_awarded();
  static const int kCurrencyAwardedFieldNumber = 3;
  ::google::protobuf::int32 currency_awarded(int index) const;
  void set_currency_awarded(int index, ::google::protobuf::int32 value);
  void add_currency_awarded(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      currency_awarded() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_currency_awarded();

  // optional int32 defenders_count = 4;
  void clear_defenders_count();
  static const int kDefendersCountFieldNumber = 4;
  ::google::protobuf::int32 defenders_count() const;
  void set_defenders_count(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::std::string> currency_type_;
  int result_;
  ::google::protobuf::int32 defenders_count_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > currency_awarded_;
  mutable int _currency_awarded_cached_byte_size_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fCollectDailyDefenderBonusResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fCollectDailyDefenderBonusResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fCollectDailyDefenderBonusResponse_2eproto();

  void InitAsDefaultInstance();
  static CollectDailyDefenderBonusResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CollectDailyDefenderBonusResponse

// optional .POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.Result result = 1;
inline void CollectDailyDefenderBonusResponse::clear_result() {
  result_ = 0;
}
inline ::POGOProtos::Networking::Responses::CollectDailyDefenderBonusResponse_Result CollectDailyDefenderBonusResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::CollectDailyDefenderBonusResponse_Result >(result_);
}
inline void CollectDailyDefenderBonusResponse::set_result(::POGOProtos::Networking::Responses::CollectDailyDefenderBonusResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.result)
}

// repeated string currency_type = 2;
inline int CollectDailyDefenderBonusResponse::currency_type_size() const {
  return currency_type_.size();
}
inline void CollectDailyDefenderBonusResponse::clear_currency_type() {
  currency_type_.Clear();
}
inline const ::std::string& CollectDailyDefenderBonusResponse::currency_type(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.currency_type)
  return currency_type_.Get(index);
}
inline ::std::string* CollectDailyDefenderBonusResponse::mutable_currency_type(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.currency_type)
  return currency_type_.Mutable(index);
}
inline void CollectDailyDefenderBonusResponse::set_currency_type(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.currency_type)
  currency_type_.Mutable(index)->assign(value);
}
inline void CollectDailyDefenderBonusResponse::set_currency_type(int index, const char* value) {
  currency_type_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.currency_type)
}
inline void CollectDailyDefenderBonusResponse::set_currency_type(int index, const char* value, size_t size) {
  currency_type_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.currency_type)
}
inline ::std::string* CollectDailyDefenderBonusResponse::add_currency_type() {
  // @@protoc_insertion_point(field_add_mutable:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.currency_type)
  return currency_type_.Add();
}
inline void CollectDailyDefenderBonusResponse::add_currency_type(const ::std::string& value) {
  currency_type_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.currency_type)
}
inline void CollectDailyDefenderBonusResponse::add_currency_type(const char* value) {
  currency_type_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.currency_type)
}
inline void CollectDailyDefenderBonusResponse::add_currency_type(const char* value, size_t size) {
  currency_type_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.currency_type)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
CollectDailyDefenderBonusResponse::currency_type() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.currency_type)
  return currency_type_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
CollectDailyDefenderBonusResponse::mutable_currency_type() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.currency_type)
  return &currency_type_;
}

// repeated int32 currency_awarded = 3;
inline int CollectDailyDefenderBonusResponse::currency_awarded_size() const {
  return currency_awarded_.size();
}
inline void CollectDailyDefenderBonusResponse::clear_currency_awarded() {
  currency_awarded_.Clear();
}
inline ::google::protobuf::int32 CollectDailyDefenderBonusResponse::currency_awarded(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.currency_awarded)
  return currency_awarded_.Get(index);
}
inline void CollectDailyDefenderBonusResponse::set_currency_awarded(int index, ::google::protobuf::int32 value) {
  currency_awarded_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.currency_awarded)
}
inline void CollectDailyDefenderBonusResponse::add_currency_awarded(::google::protobuf::int32 value) {
  currency_awarded_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.currency_awarded)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
CollectDailyDefenderBonusResponse::currency_awarded() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.currency_awarded)
  return currency_awarded_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
CollectDailyDefenderBonusResponse::mutable_currency_awarded() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.currency_awarded)
  return &currency_awarded_;
}

// optional int32 defenders_count = 4;
inline void CollectDailyDefenderBonusResponse::clear_defenders_count() {
  defenders_count_ = 0;
}
inline ::google::protobuf::int32 CollectDailyDefenderBonusResponse::defenders_count() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.defenders_count)
  return defenders_count_;
}
inline void CollectDailyDefenderBonusResponse::set_defenders_count(::google::protobuf::int32 value) {
  
  defenders_count_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.CollectDailyDefenderBonusResponse.defenders_count)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Networking::Responses::CollectDailyDefenderBonusResponse_Result> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Networking::Responses::CollectDailyDefenderBonusResponse_Result>() {
  return ::POGOProtos::Networking::Responses::CollectDailyDefenderBonusResponse_Result_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fCollectDailyDefenderBonusResponse_2eproto__INCLUDED
