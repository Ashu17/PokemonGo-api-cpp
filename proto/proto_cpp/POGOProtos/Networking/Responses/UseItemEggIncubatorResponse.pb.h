// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/UseItemEggIncubatorResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto__INCLUDED

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
#include "POGOProtos/Inventory/EggIncubator.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto();

class UseItemEggIncubatorResponse;

enum UseItemEggIncubatorResponse_Result {
  UseItemEggIncubatorResponse_Result_UNSET = 0,
  UseItemEggIncubatorResponse_Result_SUCCESS = 1,
  UseItemEggIncubatorResponse_Result_ERROR_INCUBATOR_NOT_FOUND = 2,
  UseItemEggIncubatorResponse_Result_ERROR_POKEMON_EGG_NOT_FOUND = 3,
  UseItemEggIncubatorResponse_Result_ERROR_POKEMON_ID_NOT_EGG = 4,
  UseItemEggIncubatorResponse_Result_ERROR_INCUBATOR_ALREADY_IN_USE = 5,
  UseItemEggIncubatorResponse_Result_ERROR_POKEMON_ALREADY_INCUBATING = 6,
  UseItemEggIncubatorResponse_Result_ERROR_INCUBATOR_NO_USES_REMAINING = 7,
  UseItemEggIncubatorResponse_Result_UseItemEggIncubatorResponse_Result_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  UseItemEggIncubatorResponse_Result_UseItemEggIncubatorResponse_Result_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool UseItemEggIncubatorResponse_Result_IsValid(int value);
const UseItemEggIncubatorResponse_Result UseItemEggIncubatorResponse_Result_Result_MIN = UseItemEggIncubatorResponse_Result_UNSET;
const UseItemEggIncubatorResponse_Result UseItemEggIncubatorResponse_Result_Result_MAX = UseItemEggIncubatorResponse_Result_ERROR_INCUBATOR_NO_USES_REMAINING;
const int UseItemEggIncubatorResponse_Result_Result_ARRAYSIZE = UseItemEggIncubatorResponse_Result_Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* UseItemEggIncubatorResponse_Result_descriptor();
inline const ::std::string& UseItemEggIncubatorResponse_Result_Name(UseItemEggIncubatorResponse_Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    UseItemEggIncubatorResponse_Result_descriptor(), value);
}
inline bool UseItemEggIncubatorResponse_Result_Parse(
    const ::std::string& name, UseItemEggIncubatorResponse_Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<UseItemEggIncubatorResponse_Result>(
    UseItemEggIncubatorResponse_Result_descriptor(), name, value);
}
// ===================================================================

class UseItemEggIncubatorResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse) */ {
 public:
  UseItemEggIncubatorResponse();
  virtual ~UseItemEggIncubatorResponse();

  UseItemEggIncubatorResponse(const UseItemEggIncubatorResponse& from);

  inline UseItemEggIncubatorResponse& operator=(const UseItemEggIncubatorResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UseItemEggIncubatorResponse& default_instance();

  void Swap(UseItemEggIncubatorResponse* other);

  // implements Message ----------------------------------------------

  inline UseItemEggIncubatorResponse* New() const { return New(NULL); }

  UseItemEggIncubatorResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UseItemEggIncubatorResponse& from);
  void MergeFrom(const UseItemEggIncubatorResponse& from);
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
  void InternalSwap(UseItemEggIncubatorResponse* other);
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

  typedef UseItemEggIncubatorResponse_Result Result;
  static const Result UNSET =
    UseItemEggIncubatorResponse_Result_UNSET;
  static const Result SUCCESS =
    UseItemEggIncubatorResponse_Result_SUCCESS;
  static const Result ERROR_INCUBATOR_NOT_FOUND =
    UseItemEggIncubatorResponse_Result_ERROR_INCUBATOR_NOT_FOUND;
  static const Result ERROR_POKEMON_EGG_NOT_FOUND =
    UseItemEggIncubatorResponse_Result_ERROR_POKEMON_EGG_NOT_FOUND;
  static const Result ERROR_POKEMON_ID_NOT_EGG =
    UseItemEggIncubatorResponse_Result_ERROR_POKEMON_ID_NOT_EGG;
  static const Result ERROR_INCUBATOR_ALREADY_IN_USE =
    UseItemEggIncubatorResponse_Result_ERROR_INCUBATOR_ALREADY_IN_USE;
  static const Result ERROR_POKEMON_ALREADY_INCUBATING =
    UseItemEggIncubatorResponse_Result_ERROR_POKEMON_ALREADY_INCUBATING;
  static const Result ERROR_INCUBATOR_NO_USES_REMAINING =
    UseItemEggIncubatorResponse_Result_ERROR_INCUBATOR_NO_USES_REMAINING;
  static inline bool Result_IsValid(int value) {
    return UseItemEggIncubatorResponse_Result_IsValid(value);
  }
  static const Result Result_MIN =
    UseItemEggIncubatorResponse_Result_Result_MIN;
  static const Result Result_MAX =
    UseItemEggIncubatorResponse_Result_Result_MAX;
  static const int Result_ARRAYSIZE =
    UseItemEggIncubatorResponse_Result_Result_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Result_descriptor() {
    return UseItemEggIncubatorResponse_Result_descriptor();
  }
  static inline const ::std::string& Result_Name(Result value) {
    return UseItemEggIncubatorResponse_Result_Name(value);
  }
  static inline bool Result_Parse(const ::std::string& name,
      Result* value) {
    return UseItemEggIncubatorResponse_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.Result result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::POGOProtos::Networking::Responses::UseItemEggIncubatorResponse_Result result() const;
  void set_result(::POGOProtos::Networking::Responses::UseItemEggIncubatorResponse_Result value);

  // optional .POGOProtos.Inventory.EggIncubator egg_incubator = 2;
  bool has_egg_incubator() const;
  void clear_egg_incubator();
  static const int kEggIncubatorFieldNumber = 2;
  const ::POGOProtos::Inventory::EggIncubator& egg_incubator() const;
  ::POGOProtos::Inventory::EggIncubator* mutable_egg_incubator();
  ::POGOProtos::Inventory::EggIncubator* release_egg_incubator();
  void set_allocated_egg_incubator(::POGOProtos::Inventory::EggIncubator* egg_incubator);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::POGOProtos::Inventory::EggIncubator* egg_incubator_;
  int result_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto();

  void InitAsDefaultInstance();
  static UseItemEggIncubatorResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// UseItemEggIncubatorResponse

// optional .POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.Result result = 1;
inline void UseItemEggIncubatorResponse::clear_result() {
  result_ = 0;
}
inline ::POGOProtos::Networking::Responses::UseItemEggIncubatorResponse_Result UseItemEggIncubatorResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::UseItemEggIncubatorResponse_Result >(result_);
}
inline void UseItemEggIncubatorResponse::set_result(::POGOProtos::Networking::Responses::UseItemEggIncubatorResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.result)
}

// optional .POGOProtos.Inventory.EggIncubator egg_incubator = 2;
inline bool UseItemEggIncubatorResponse::has_egg_incubator() const {
  return !_is_default_instance_ && egg_incubator_ != NULL;
}
inline void UseItemEggIncubatorResponse::clear_egg_incubator() {
  if (GetArenaNoVirtual() == NULL && egg_incubator_ != NULL) delete egg_incubator_;
  egg_incubator_ = NULL;
}
inline const ::POGOProtos::Inventory::EggIncubator& UseItemEggIncubatorResponse::egg_incubator() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.egg_incubator)
  return egg_incubator_ != NULL ? *egg_incubator_ : *default_instance_->egg_incubator_;
}
inline ::POGOProtos::Inventory::EggIncubator* UseItemEggIncubatorResponse::mutable_egg_incubator() {
  
  if (egg_incubator_ == NULL) {
    egg_incubator_ = new ::POGOProtos::Inventory::EggIncubator;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.egg_incubator)
  return egg_incubator_;
}
inline ::POGOProtos::Inventory::EggIncubator* UseItemEggIncubatorResponse::release_egg_incubator() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.egg_incubator)
  
  ::POGOProtos::Inventory::EggIncubator* temp = egg_incubator_;
  egg_incubator_ = NULL;
  return temp;
}
inline void UseItemEggIncubatorResponse::set_allocated_egg_incubator(::POGOProtos::Inventory::EggIncubator* egg_incubator) {
  delete egg_incubator_;
  egg_incubator_ = egg_incubator;
  if (egg_incubator) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.UseItemEggIncubatorResponse.egg_incubator)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Networking::Responses::UseItemEggIncubatorResponse_Result> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Networking::Responses::UseItemEggIncubatorResponse_Result>() {
  return ::POGOProtos::Networking::Responses::UseItemEggIncubatorResponse_Result_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fUseItemEggIncubatorResponse_2eproto__INCLUDED
