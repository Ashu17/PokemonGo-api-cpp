// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/EncounterResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto__INCLUDED

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
#include "POGOProtos/Data/Capture/CaptureProbability.pb.h"
#include "POGOProtos/Map/Pokemon/WildPokemon.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto();

class EncounterResponse;

enum EncounterResponse_Background {
  EncounterResponse_Background_PARK = 0,
  EncounterResponse_Background_DESERT = 1,
  EncounterResponse_Background_EncounterResponse_Background_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  EncounterResponse_Background_EncounterResponse_Background_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool EncounterResponse_Background_IsValid(int value);
const EncounterResponse_Background EncounterResponse_Background_Background_MIN = EncounterResponse_Background_PARK;
const EncounterResponse_Background EncounterResponse_Background_Background_MAX = EncounterResponse_Background_DESERT;
const int EncounterResponse_Background_Background_ARRAYSIZE = EncounterResponse_Background_Background_MAX + 1;

const ::google::protobuf::EnumDescriptor* EncounterResponse_Background_descriptor();
inline const ::std::string& EncounterResponse_Background_Name(EncounterResponse_Background value) {
  return ::google::protobuf::internal::NameOfEnum(
    EncounterResponse_Background_descriptor(), value);
}
inline bool EncounterResponse_Background_Parse(
    const ::std::string& name, EncounterResponse_Background* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EncounterResponse_Background>(
    EncounterResponse_Background_descriptor(), name, value);
}
enum EncounterResponse_Status {
  EncounterResponse_Status_ENCOUNTER_ERROR = 0,
  EncounterResponse_Status_ENCOUNTER_SUCCESS = 1,
  EncounterResponse_Status_ENCOUNTER_NOT_FOUND = 2,
  EncounterResponse_Status_ENCOUNTER_CLOSED = 3,
  EncounterResponse_Status_ENCOUNTER_POKEMON_FLED = 4,
  EncounterResponse_Status_ENCOUNTER_NOT_IN_RANGE = 5,
  EncounterResponse_Status_ENCOUNTER_ALREADY_HAPPENED = 6,
  EncounterResponse_Status_POKEMON_INVENTORY_FULL = 7,
  EncounterResponse_Status_EncounterResponse_Status_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  EncounterResponse_Status_EncounterResponse_Status_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool EncounterResponse_Status_IsValid(int value);
const EncounterResponse_Status EncounterResponse_Status_Status_MIN = EncounterResponse_Status_ENCOUNTER_ERROR;
const EncounterResponse_Status EncounterResponse_Status_Status_MAX = EncounterResponse_Status_POKEMON_INVENTORY_FULL;
const int EncounterResponse_Status_Status_ARRAYSIZE = EncounterResponse_Status_Status_MAX + 1;

const ::google::protobuf::EnumDescriptor* EncounterResponse_Status_descriptor();
inline const ::std::string& EncounterResponse_Status_Name(EncounterResponse_Status value) {
  return ::google::protobuf::internal::NameOfEnum(
    EncounterResponse_Status_descriptor(), value);
}
inline bool EncounterResponse_Status_Parse(
    const ::std::string& name, EncounterResponse_Status* value) {
  return ::google::protobuf::internal::ParseNamedEnum<EncounterResponse_Status>(
    EncounterResponse_Status_descriptor(), name, value);
}
// ===================================================================

class EncounterResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.EncounterResponse) */ {
 public:
  EncounterResponse();
  virtual ~EncounterResponse();

  EncounterResponse(const EncounterResponse& from);

  inline EncounterResponse& operator=(const EncounterResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const EncounterResponse& default_instance();

  void Swap(EncounterResponse* other);

  // implements Message ----------------------------------------------

  inline EncounterResponse* New() const { return New(NULL); }

  EncounterResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const EncounterResponse& from);
  void MergeFrom(const EncounterResponse& from);
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
  void InternalSwap(EncounterResponse* other);
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

  typedef EncounterResponse_Background Background;
  static const Background PARK =
    EncounterResponse_Background_PARK;
  static const Background DESERT =
    EncounterResponse_Background_DESERT;
  static inline bool Background_IsValid(int value) {
    return EncounterResponse_Background_IsValid(value);
  }
  static const Background Background_MIN =
    EncounterResponse_Background_Background_MIN;
  static const Background Background_MAX =
    EncounterResponse_Background_Background_MAX;
  static const int Background_ARRAYSIZE =
    EncounterResponse_Background_Background_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Background_descriptor() {
    return EncounterResponse_Background_descriptor();
  }
  static inline const ::std::string& Background_Name(Background value) {
    return EncounterResponse_Background_Name(value);
  }
  static inline bool Background_Parse(const ::std::string& name,
      Background* value) {
    return EncounterResponse_Background_Parse(name, value);
  }

  typedef EncounterResponse_Status Status;
  static const Status ENCOUNTER_ERROR =
    EncounterResponse_Status_ENCOUNTER_ERROR;
  static const Status ENCOUNTER_SUCCESS =
    EncounterResponse_Status_ENCOUNTER_SUCCESS;
  static const Status ENCOUNTER_NOT_FOUND =
    EncounterResponse_Status_ENCOUNTER_NOT_FOUND;
  static const Status ENCOUNTER_CLOSED =
    EncounterResponse_Status_ENCOUNTER_CLOSED;
  static const Status ENCOUNTER_POKEMON_FLED =
    EncounterResponse_Status_ENCOUNTER_POKEMON_FLED;
  static const Status ENCOUNTER_NOT_IN_RANGE =
    EncounterResponse_Status_ENCOUNTER_NOT_IN_RANGE;
  static const Status ENCOUNTER_ALREADY_HAPPENED =
    EncounterResponse_Status_ENCOUNTER_ALREADY_HAPPENED;
  static const Status POKEMON_INVENTORY_FULL =
    EncounterResponse_Status_POKEMON_INVENTORY_FULL;
  static inline bool Status_IsValid(int value) {
    return EncounterResponse_Status_IsValid(value);
  }
  static const Status Status_MIN =
    EncounterResponse_Status_Status_MIN;
  static const Status Status_MAX =
    EncounterResponse_Status_Status_MAX;
  static const int Status_ARRAYSIZE =
    EncounterResponse_Status_Status_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Status_descriptor() {
    return EncounterResponse_Status_descriptor();
  }
  static inline const ::std::string& Status_Name(Status value) {
    return EncounterResponse_Status_Name(value);
  }
  static inline bool Status_Parse(const ::std::string& name,
      Status* value) {
    return EncounterResponse_Status_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .POGOProtos.Map.Pokemon.WildPokemon wild_pokemon = 1;
  bool has_wild_pokemon() const;
  void clear_wild_pokemon();
  static const int kWildPokemonFieldNumber = 1;
  const ::POGOProtos::Map::Pokemon::WildPokemon& wild_pokemon() const;
  ::POGOProtos::Map::Pokemon::WildPokemon* mutable_wild_pokemon();
  ::POGOProtos::Map::Pokemon::WildPokemon* release_wild_pokemon();
  void set_allocated_wild_pokemon(::POGOProtos::Map::Pokemon::WildPokemon* wild_pokemon);

  // optional .POGOProtos.Networking.Responses.EncounterResponse.Background background = 2;
  void clear_background();
  static const int kBackgroundFieldNumber = 2;
  ::POGOProtos::Networking::Responses::EncounterResponse_Background background() const;
  void set_background(::POGOProtos::Networking::Responses::EncounterResponse_Background value);

  // optional .POGOProtos.Networking.Responses.EncounterResponse.Status status = 3;
  void clear_status();
  static const int kStatusFieldNumber = 3;
  ::POGOProtos::Networking::Responses::EncounterResponse_Status status() const;
  void set_status(::POGOProtos::Networking::Responses::EncounterResponse_Status value);

  // optional .POGOProtos.Data.Capture.CaptureProbability capture_probability = 4;
  bool has_capture_probability() const;
  void clear_capture_probability();
  static const int kCaptureProbabilityFieldNumber = 4;
  const ::POGOProtos::Data::Capture::CaptureProbability& capture_probability() const;
  ::POGOProtos::Data::Capture::CaptureProbability* mutable_capture_probability();
  ::POGOProtos::Data::Capture::CaptureProbability* release_capture_probability();
  void set_allocated_capture_probability(::POGOProtos::Data::Capture::CaptureProbability* capture_probability);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.EncounterResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::POGOProtos::Map::Pokemon::WildPokemon* wild_pokemon_;
  int background_;
  int status_;
  ::POGOProtos::Data::Capture::CaptureProbability* capture_probability_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto();

  void InitAsDefaultInstance();
  static EncounterResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// EncounterResponse

// optional .POGOProtos.Map.Pokemon.WildPokemon wild_pokemon = 1;
inline bool EncounterResponse::has_wild_pokemon() const {
  return !_is_default_instance_ && wild_pokemon_ != NULL;
}
inline void EncounterResponse::clear_wild_pokemon() {
  if (GetArenaNoVirtual() == NULL && wild_pokemon_ != NULL) delete wild_pokemon_;
  wild_pokemon_ = NULL;
}
inline const ::POGOProtos::Map::Pokemon::WildPokemon& EncounterResponse::wild_pokemon() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.EncounterResponse.wild_pokemon)
  return wild_pokemon_ != NULL ? *wild_pokemon_ : *default_instance_->wild_pokemon_;
}
inline ::POGOProtos::Map::Pokemon::WildPokemon* EncounterResponse::mutable_wild_pokemon() {
  
  if (wild_pokemon_ == NULL) {
    wild_pokemon_ = new ::POGOProtos::Map::Pokemon::WildPokemon;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.EncounterResponse.wild_pokemon)
  return wild_pokemon_;
}
inline ::POGOProtos::Map::Pokemon::WildPokemon* EncounterResponse::release_wild_pokemon() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.EncounterResponse.wild_pokemon)
  
  ::POGOProtos::Map::Pokemon::WildPokemon* temp = wild_pokemon_;
  wild_pokemon_ = NULL;
  return temp;
}
inline void EncounterResponse::set_allocated_wild_pokemon(::POGOProtos::Map::Pokemon::WildPokemon* wild_pokemon) {
  delete wild_pokemon_;
  wild_pokemon_ = wild_pokemon;
  if (wild_pokemon) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.EncounterResponse.wild_pokemon)
}

// optional .POGOProtos.Networking.Responses.EncounterResponse.Background background = 2;
inline void EncounterResponse::clear_background() {
  background_ = 0;
}
inline ::POGOProtos::Networking::Responses::EncounterResponse_Background EncounterResponse::background() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.EncounterResponse.background)
  return static_cast< ::POGOProtos::Networking::Responses::EncounterResponse_Background >(background_);
}
inline void EncounterResponse::set_background(::POGOProtos::Networking::Responses::EncounterResponse_Background value) {
  
  background_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.EncounterResponse.background)
}

// optional .POGOProtos.Networking.Responses.EncounterResponse.Status status = 3;
inline void EncounterResponse::clear_status() {
  status_ = 0;
}
inline ::POGOProtos::Networking::Responses::EncounterResponse_Status EncounterResponse::status() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.EncounterResponse.status)
  return static_cast< ::POGOProtos::Networking::Responses::EncounterResponse_Status >(status_);
}
inline void EncounterResponse::set_status(::POGOProtos::Networking::Responses::EncounterResponse_Status value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.EncounterResponse.status)
}

// optional .POGOProtos.Data.Capture.CaptureProbability capture_probability = 4;
inline bool EncounterResponse::has_capture_probability() const {
  return !_is_default_instance_ && capture_probability_ != NULL;
}
inline void EncounterResponse::clear_capture_probability() {
  if (GetArenaNoVirtual() == NULL && capture_probability_ != NULL) delete capture_probability_;
  capture_probability_ = NULL;
}
inline const ::POGOProtos::Data::Capture::CaptureProbability& EncounterResponse::capture_probability() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.EncounterResponse.capture_probability)
  return capture_probability_ != NULL ? *capture_probability_ : *default_instance_->capture_probability_;
}
inline ::POGOProtos::Data::Capture::CaptureProbability* EncounterResponse::mutable_capture_probability() {
  
  if (capture_probability_ == NULL) {
    capture_probability_ = new ::POGOProtos::Data::Capture::CaptureProbability;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.EncounterResponse.capture_probability)
  return capture_probability_;
}
inline ::POGOProtos::Data::Capture::CaptureProbability* EncounterResponse::release_capture_probability() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.EncounterResponse.capture_probability)
  
  ::POGOProtos::Data::Capture::CaptureProbability* temp = capture_probability_;
  capture_probability_ = NULL;
  return temp;
}
inline void EncounterResponse::set_allocated_capture_probability(::POGOProtos::Data::Capture::CaptureProbability* capture_probability) {
  delete capture_probability_;
  capture_probability_ = capture_probability;
  if (capture_probability) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.EncounterResponse.capture_probability)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Networking::Responses::EncounterResponse_Background> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Networking::Responses::EncounterResponse_Background>() {
  return ::POGOProtos::Networking::Responses::EncounterResponse_Background_descriptor();
}
template <> struct is_proto_enum< ::POGOProtos::Networking::Responses::EncounterResponse_Status> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Networking::Responses::EncounterResponse_Status>() {
  return ::POGOProtos::Networking::Responses::EncounterResponse_Status_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto__INCLUDED
