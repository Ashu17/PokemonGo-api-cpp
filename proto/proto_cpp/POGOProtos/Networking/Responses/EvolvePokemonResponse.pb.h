// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/EvolvePokemonResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fEvolvePokemonResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fEvolvePokemonResponse_2eproto__INCLUDED

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
#include "POGOProtos/Data/PokemonData.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fEvolvePokemonResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fEvolvePokemonResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fEvolvePokemonResponse_2eproto();

class EvolvePokemonResponse;

enum EvolvePokemonResponse_Result {
  EvolvePokemonResponse_Result_UNSET = 0,
  EvolvePokemonResponse_Result_SUCCESS = 1,
  EvolvePokemonResponse_Result_FAILED_POKEMON_MISSING = 2,
  EvolvePokemonResponse_Result_FAILED_INSUFFICIENT_RESOURCES = 3,
  EvolvePokemonResponse_Result_FAILED_POKEMON_CANNOT_EVOLVE = 4,
  EvolvePokemonResponse_Result_FAILED_POKEMON_IS_DEPLOYED = 5,
  EvolvePokemonResponse_Result_EvolvePokemonResponse_Result_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  EvolvePokemonResponse_Result_EvolvePokemonResponse_Result_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool EvolvePokemonResponse_Result_IsValid(int value);
const EvolvePokemonResponse_Result EvolvePokemonResponse_Result_Result_MIN = EvolvePokemonResponse_Result_UNSET;
const EvolvePokemonResponse_Result EvolvePokemonResponse_Result_Result_MAX = EvolvePokemonResponse_Result_FAILED_POKEMON_IS_DEPLOYED;
const int EvolvePokemonResponse_Result_Result_ARRAYSIZE = EvolvePokemonResponse_Result_Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* EvolvePokemonResponse_Result_descriptor();
inline const ::std::string& EvolvePokemonResponse_Result_Name(EvolvePokemonResponse_Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    EvolvePokemonResponse_Result_descriptor(), value);
}
inline bool EvolvePokemonResponse_Result_Parse(
    const ::std::string& name, EvolvePokemonResponse_Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EvolvePokemonResponse_Result>(
    EvolvePokemonResponse_Result_descriptor(), name, value);
}
// ===================================================================

class EvolvePokemonResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.EvolvePokemonResponse) */ {
 public:
  EvolvePokemonResponse();
  virtual ~EvolvePokemonResponse();

  EvolvePokemonResponse(const EvolvePokemonResponse& from);

  inline EvolvePokemonResponse& operator=(const EvolvePokemonResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EvolvePokemonResponse& default_instance();

  void Swap(EvolvePokemonResponse* other);

  // implements Message ----------------------------------------------

  inline EvolvePokemonResponse* New() const { return New(NULL); }

  EvolvePokemonResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EvolvePokemonResponse& from);
  void MergeFrom(const EvolvePokemonResponse& from);
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
  void InternalSwap(EvolvePokemonResponse* other);
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

  typedef EvolvePokemonResponse_Result Result;
  static const Result UNSET =
    EvolvePokemonResponse_Result_UNSET;
  static const Result SUCCESS =
    EvolvePokemonResponse_Result_SUCCESS;
  static const Result FAILED_POKEMON_MISSING =
    EvolvePokemonResponse_Result_FAILED_POKEMON_MISSING;
  static const Result FAILED_INSUFFICIENT_RESOURCES =
    EvolvePokemonResponse_Result_FAILED_INSUFFICIENT_RESOURCES;
  static const Result FAILED_POKEMON_CANNOT_EVOLVE =
    EvolvePokemonResponse_Result_FAILED_POKEMON_CANNOT_EVOLVE;
  static const Result FAILED_POKEMON_IS_DEPLOYED =
    EvolvePokemonResponse_Result_FAILED_POKEMON_IS_DEPLOYED;
  static inline bool Result_IsValid(int value) {
    return EvolvePokemonResponse_Result_IsValid(value);
  }
  static const Result Result_MIN =
    EvolvePokemonResponse_Result_Result_MIN;
  static const Result Result_MAX =
    EvolvePokemonResponse_Result_Result_MAX;
  static const int Result_ARRAYSIZE =
    EvolvePokemonResponse_Result_Result_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Result_descriptor() {
    return EvolvePokemonResponse_Result_descriptor();
  }
  static inline const ::std::string& Result_Name(Result value) {
    return EvolvePokemonResponse_Result_Name(value);
  }
  static inline bool Result_Parse(const ::std::string& name,
      Result* value) {
    return EvolvePokemonResponse_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .POGOProtos.Networking.Responses.EvolvePokemonResponse.Result result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::POGOProtos::Networking::Responses::EvolvePokemonResponse_Result result() const;
  void set_result(::POGOProtos::Networking::Responses::EvolvePokemonResponse_Result value);

  // optional .POGOProtos.Data.PokemonData evolved_pokemon_data = 2;
  bool has_evolved_pokemon_data() const;
  void clear_evolved_pokemon_data();
  static const int kEvolvedPokemonDataFieldNumber = 2;
  const ::POGOProtos::Data::PokemonData& evolved_pokemon_data() const;
  ::POGOProtos::Data::PokemonData* mutable_evolved_pokemon_data();
  ::POGOProtos::Data::PokemonData* release_evolved_pokemon_data();
  void set_allocated_evolved_pokemon_data(::POGOProtos::Data::PokemonData* evolved_pokemon_data);

  // optional int32 experience_awarded = 3;
  void clear_experience_awarded();
  static const int kExperienceAwardedFieldNumber = 3;
  ::google::protobuf::int32 experience_awarded() const;
  void set_experience_awarded(::google::protobuf::int32 value);

  // optional int32 candy_awarded = 4;
  void clear_candy_awarded();
  static const int kCandyAwardedFieldNumber = 4;
  ::google::protobuf::int32 candy_awarded() const;
  void set_candy_awarded(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.EvolvePokemonResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::POGOProtos::Data::PokemonData* evolved_pokemon_data_;
  int result_;
  ::google::protobuf::int32 experience_awarded_;
  ::google::protobuf::int32 candy_awarded_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fEvolvePokemonResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fEvolvePokemonResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fEvolvePokemonResponse_2eproto();

  void InitAsDefaultInstance();
  static EvolvePokemonResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// EvolvePokemonResponse

// optional .POGOProtos.Networking.Responses.EvolvePokemonResponse.Result result = 1;
inline void EvolvePokemonResponse::clear_result() {
  result_ = 0;
}
inline ::POGOProtos::Networking::Responses::EvolvePokemonResponse_Result EvolvePokemonResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.EvolvePokemonResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::EvolvePokemonResponse_Result >(result_);
}
inline void EvolvePokemonResponse::set_result(::POGOProtos::Networking::Responses::EvolvePokemonResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.EvolvePokemonResponse.result)
}

// optional .POGOProtos.Data.PokemonData evolved_pokemon_data = 2;
inline bool EvolvePokemonResponse::has_evolved_pokemon_data() const {
  return !_is_default_instance_ && evolved_pokemon_data_ != NULL;
}
inline void EvolvePokemonResponse::clear_evolved_pokemon_data() {
  if (GetArenaNoVirtual() == NULL && evolved_pokemon_data_ != NULL) delete evolved_pokemon_data_;
  evolved_pokemon_data_ = NULL;
}
inline const ::POGOProtos::Data::PokemonData& EvolvePokemonResponse::evolved_pokemon_data() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.EvolvePokemonResponse.evolved_pokemon_data)
  return evolved_pokemon_data_ != NULL ? *evolved_pokemon_data_ : *default_instance_->evolved_pokemon_data_;
}
inline ::POGOProtos::Data::PokemonData* EvolvePokemonResponse::mutable_evolved_pokemon_data() {
  
  if (evolved_pokemon_data_ == NULL) {
    evolved_pokemon_data_ = new ::POGOProtos::Data::PokemonData;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.EvolvePokemonResponse.evolved_pokemon_data)
  return evolved_pokemon_data_;
}
inline ::POGOProtos::Data::PokemonData* EvolvePokemonResponse::release_evolved_pokemon_data() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.EvolvePokemonResponse.evolved_pokemon_data)
  
  ::POGOProtos::Data::PokemonData* temp = evolved_pokemon_data_;
  evolved_pokemon_data_ = NULL;
  return temp;
}
inline void EvolvePokemonResponse::set_allocated_evolved_pokemon_data(::POGOProtos::Data::PokemonData* evolved_pokemon_data) {
  delete evolved_pokemon_data_;
  evolved_pokemon_data_ = evolved_pokemon_data;
  if (evolved_pokemon_data) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.EvolvePokemonResponse.evolved_pokemon_data)
}

// optional int32 experience_awarded = 3;
inline void EvolvePokemonResponse::clear_experience_awarded() {
  experience_awarded_ = 0;
}
inline ::google::protobuf::int32 EvolvePokemonResponse::experience_awarded() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.EvolvePokemonResponse.experience_awarded)
  return experience_awarded_;
}
inline void EvolvePokemonResponse::set_experience_awarded(::google::protobuf::int32 value) {
  
  experience_awarded_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.EvolvePokemonResponse.experience_awarded)
}

// optional int32 candy_awarded = 4;
inline void EvolvePokemonResponse::clear_candy_awarded() {
  candy_awarded_ = 0;
}
inline ::google::protobuf::int32 EvolvePokemonResponse::candy_awarded() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.EvolvePokemonResponse.candy_awarded)
  return candy_awarded_;
}
inline void EvolvePokemonResponse::set_candy_awarded(::google::protobuf::int32 value) {
  
  candy_awarded_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.EvolvePokemonResponse.candy_awarded)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Networking::Responses::EvolvePokemonResponse_Result> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Networking::Responses::EvolvePokemonResponse_Result>() {
  return ::POGOProtos::Networking::Responses::EvolvePokemonResponse_Result_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fEvolvePokemonResponse_2eproto__INCLUDED