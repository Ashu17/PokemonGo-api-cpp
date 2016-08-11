// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/NicknamePokemonResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fNicknamePokemonResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fNicknamePokemonResponse_2eproto__INCLUDED

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
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fNicknamePokemonResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fNicknamePokemonResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fNicknamePokemonResponse_2eproto();

class NicknamePokemonResponse;

enum NicknamePokemonResponse_Result {
  NicknamePokemonResponse_Result_UNSET = 0,
  NicknamePokemonResponse_Result_SUCCESS = 1,
  NicknamePokemonResponse_Result_ERROR_INVALID_NICKNAME = 2,
  NicknamePokemonResponse_Result_ERROR_POKEMON_NOT_FOUND = 3,
  NicknamePokemonResponse_Result_ERROR_POKEMON_IS_EGG = 4,
  NicknamePokemonResponse_Result_NicknamePokemonResponse_Result_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  NicknamePokemonResponse_Result_NicknamePokemonResponse_Result_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool NicknamePokemonResponse_Result_IsValid(int value);
const NicknamePokemonResponse_Result NicknamePokemonResponse_Result_Result_MIN = NicknamePokemonResponse_Result_UNSET;
const NicknamePokemonResponse_Result NicknamePokemonResponse_Result_Result_MAX = NicknamePokemonResponse_Result_ERROR_POKEMON_IS_EGG;
const int NicknamePokemonResponse_Result_Result_ARRAYSIZE = NicknamePokemonResponse_Result_Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* NicknamePokemonResponse_Result_descriptor();
inline const ::std::string& NicknamePokemonResponse_Result_Name(NicknamePokemonResponse_Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    NicknamePokemonResponse_Result_descriptor(), value);
}
inline bool NicknamePokemonResponse_Result_Parse(
    const ::std::string& name, NicknamePokemonResponse_Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<NicknamePokemonResponse_Result>(
    NicknamePokemonResponse_Result_descriptor(), name, value);
}
// ===================================================================

class NicknamePokemonResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.NicknamePokemonResponse) */ {
 public:
  NicknamePokemonResponse();
  virtual ~NicknamePokemonResponse();

  NicknamePokemonResponse(const NicknamePokemonResponse& from);

  inline NicknamePokemonResponse& operator=(const NicknamePokemonResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NicknamePokemonResponse& default_instance();

  void Swap(NicknamePokemonResponse* other);

  // implements Message ----------------------------------------------

  inline NicknamePokemonResponse* New() const { return New(NULL); }

  NicknamePokemonResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NicknamePokemonResponse& from);
  void MergeFrom(const NicknamePokemonResponse& from);
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
  void InternalSwap(NicknamePokemonResponse* other);
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

  typedef NicknamePokemonResponse_Result Result;
  static const Result UNSET =
    NicknamePokemonResponse_Result_UNSET;
  static const Result SUCCESS =
    NicknamePokemonResponse_Result_SUCCESS;
  static const Result ERROR_INVALID_NICKNAME =
    NicknamePokemonResponse_Result_ERROR_INVALID_NICKNAME;
  static const Result ERROR_POKEMON_NOT_FOUND =
    NicknamePokemonResponse_Result_ERROR_POKEMON_NOT_FOUND;
  static const Result ERROR_POKEMON_IS_EGG =
    NicknamePokemonResponse_Result_ERROR_POKEMON_IS_EGG;
  static inline bool Result_IsValid(int value) {
    return NicknamePokemonResponse_Result_IsValid(value);
  }
  static const Result Result_MIN =
    NicknamePokemonResponse_Result_Result_MIN;
  static const Result Result_MAX =
    NicknamePokemonResponse_Result_Result_MAX;
  static const int Result_ARRAYSIZE =
    NicknamePokemonResponse_Result_Result_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Result_descriptor() {
    return NicknamePokemonResponse_Result_descriptor();
  }
  static inline const ::std::string& Result_Name(Result value) {
    return NicknamePokemonResponse_Result_Name(value);
  }
  static inline bool Result_Parse(const ::std::string& name,
      Result* value) {
    return NicknamePokemonResponse_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .POGOProtos.Networking.Responses.NicknamePokemonResponse.Result result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::POGOProtos::Networking::Responses::NicknamePokemonResponse_Result result() const;
  void set_result(::POGOProtos::Networking::Responses::NicknamePokemonResponse_Result value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.NicknamePokemonResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  int result_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fNicknamePokemonResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fNicknamePokemonResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fNicknamePokemonResponse_2eproto();

  void InitAsDefaultInstance();
  static NicknamePokemonResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// NicknamePokemonResponse

// optional .POGOProtos.Networking.Responses.NicknamePokemonResponse.Result result = 1;
inline void NicknamePokemonResponse::clear_result() {
  result_ = 0;
}
inline ::POGOProtos::Networking::Responses::NicknamePokemonResponse_Result NicknamePokemonResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.NicknamePokemonResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::NicknamePokemonResponse_Result >(result_);
}
inline void NicknamePokemonResponse::set_result(::POGOProtos::Networking::Responses::NicknamePokemonResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.NicknamePokemonResponse.result)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Networking::Responses::NicknamePokemonResponse_Result> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Networking::Responses::NicknamePokemonResponse_Result>() {
  return ::POGOProtos::Networking::Responses::NicknamePokemonResponse_Result_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fNicknamePokemonResponse_2eproto__INCLUDED
