// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/UseItemReviveResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fUseItemReviveResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fUseItemReviveResponse_2eproto__INCLUDED

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
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemReviveResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemReviveResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fUseItemReviveResponse_2eproto();

class UseItemReviveResponse;

enum UseItemReviveResponse_Result {
  UseItemReviveResponse_Result_UNSET = 0,
  UseItemReviveResponse_Result_SUCCESS = 1,
  UseItemReviveResponse_Result_ERROR_NO_POKEMON = 2,
  UseItemReviveResponse_Result_ERROR_CANNOT_USE = 3,
  UseItemReviveResponse_Result_ERROR_DEPLOYED_TO_FORT = 4,
  UseItemReviveResponse_Result_UseItemReviveResponse_Result_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  UseItemReviveResponse_Result_UseItemReviveResponse_Result_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool UseItemReviveResponse_Result_IsValid(int value);
const UseItemReviveResponse_Result UseItemReviveResponse_Result_Result_MIN = UseItemReviveResponse_Result_UNSET;
const UseItemReviveResponse_Result UseItemReviveResponse_Result_Result_MAX = UseItemReviveResponse_Result_ERROR_DEPLOYED_TO_FORT;
const int UseItemReviveResponse_Result_Result_ARRAYSIZE = UseItemReviveResponse_Result_Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* UseItemReviveResponse_Result_descriptor();
inline const ::std::string& UseItemReviveResponse_Result_Name(UseItemReviveResponse_Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    UseItemReviveResponse_Result_descriptor(), value);
}
inline bool UseItemReviveResponse_Result_Parse(
    const ::std::string& name, UseItemReviveResponse_Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<UseItemReviveResponse_Result>(
    UseItemReviveResponse_Result_descriptor(), name, value);
}
// ===================================================================

class UseItemReviveResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.UseItemReviveResponse) */ {
 public:
  UseItemReviveResponse();
  virtual ~UseItemReviveResponse();

  UseItemReviveResponse(const UseItemReviveResponse& from);

  inline UseItemReviveResponse& operator=(const UseItemReviveResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UseItemReviveResponse& default_instance();

  void Swap(UseItemReviveResponse* other);

  // implements Message ----------------------------------------------

  inline UseItemReviveResponse* New() const { return New(NULL); }

  UseItemReviveResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UseItemReviveResponse& from);
  void MergeFrom(const UseItemReviveResponse& from);
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
  void InternalSwap(UseItemReviveResponse* other);
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

  typedef UseItemReviveResponse_Result Result;
  static const Result UNSET =
    UseItemReviveResponse_Result_UNSET;
  static const Result SUCCESS =
    UseItemReviveResponse_Result_SUCCESS;
  static const Result ERROR_NO_POKEMON =
    UseItemReviveResponse_Result_ERROR_NO_POKEMON;
  static const Result ERROR_CANNOT_USE =
    UseItemReviveResponse_Result_ERROR_CANNOT_USE;
  static const Result ERROR_DEPLOYED_TO_FORT =
    UseItemReviveResponse_Result_ERROR_DEPLOYED_TO_FORT;
  static inline bool Result_IsValid(int value) {
    return UseItemReviveResponse_Result_IsValid(value);
  }
  static const Result Result_MIN =
    UseItemReviveResponse_Result_Result_MIN;
  static const Result Result_MAX =
    UseItemReviveResponse_Result_Result_MAX;
  static const int Result_ARRAYSIZE =
    UseItemReviveResponse_Result_Result_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Result_descriptor() {
    return UseItemReviveResponse_Result_descriptor();
  }
  static inline const ::std::string& Result_Name(Result value) {
    return UseItemReviveResponse_Result_Name(value);
  }
  static inline bool Result_Parse(const ::std::string& name,
      Result* value) {
    return UseItemReviveResponse_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .POGOProtos.Networking.Responses.UseItemReviveResponse.Result result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::POGOProtos::Networking::Responses::UseItemReviveResponse_Result result() const;
  void set_result(::POGOProtos::Networking::Responses::UseItemReviveResponse_Result value);

  // optional int32 stamina = 2;
  void clear_stamina();
  static const int kStaminaFieldNumber = 2;
  ::google::protobuf::int32 stamina() const;
  void set_stamina(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.UseItemReviveResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  int result_;
  ::google::protobuf::int32 stamina_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemReviveResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemReviveResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fUseItemReviveResponse_2eproto();

  void InitAsDefaultInstance();
  static UseItemReviveResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// UseItemReviveResponse

// optional .POGOProtos.Networking.Responses.UseItemReviveResponse.Result result = 1;
inline void UseItemReviveResponse::clear_result() {
  result_ = 0;
}
inline ::POGOProtos::Networking::Responses::UseItemReviveResponse_Result UseItemReviveResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.UseItemReviveResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::UseItemReviveResponse_Result >(result_);
}
inline void UseItemReviveResponse::set_result(::POGOProtos::Networking::Responses::UseItemReviveResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.UseItemReviveResponse.result)
}

// optional int32 stamina = 2;
inline void UseItemReviveResponse::clear_stamina() {
  stamina_ = 0;
}
inline ::google::protobuf::int32 UseItemReviveResponse::stamina() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.UseItemReviveResponse.stamina)
  return stamina_;
}
inline void UseItemReviveResponse::set_stamina(::google::protobuf::int32 value) {
  
  stamina_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.UseItemReviveResponse.stamina)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Networking::Responses::UseItemReviveResponse_Result> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Networking::Responses::UseItemReviveResponse_Result>() {
  return ::POGOProtos::Networking::Responses::UseItemReviveResponse_Result_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fUseItemReviveResponse_2eproto__INCLUDED
