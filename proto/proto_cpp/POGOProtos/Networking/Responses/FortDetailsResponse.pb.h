// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/FortDetailsResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fFortDetailsResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fFortDetailsResponse_2eproto__INCLUDED

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
#include "POGOProtos/Data/PokemonData.pb.h"
#include "POGOProtos/Enums/TeamColor.pb.h"
#include "POGOProtos/Map/Fort/FortType.pb.h"
#include "POGOProtos/Map/Fort/FortModifier.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fFortDetailsResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fFortDetailsResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fFortDetailsResponse_2eproto();

class FortDetailsResponse;

// ===================================================================

class FortDetailsResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.FortDetailsResponse) */ {
 public:
  FortDetailsResponse();
  virtual ~FortDetailsResponse();

  FortDetailsResponse(const FortDetailsResponse& from);

  inline FortDetailsResponse& operator=(const FortDetailsResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FortDetailsResponse& default_instance();

  void Swap(FortDetailsResponse* other);

  // implements Message ----------------------------------------------

  inline FortDetailsResponse* New() const { return New(NULL); }

  FortDetailsResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FortDetailsResponse& from);
  void MergeFrom(const FortDetailsResponse& from);
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
  void InternalSwap(FortDetailsResponse* other);
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

  // optional string fort_id = 1;
  void clear_fort_id();
  static const int kFortIdFieldNumber = 1;
  const ::std::string& fort_id() const;
  void set_fort_id(const ::std::string& value);
  void set_fort_id(const char* value);
  void set_fort_id(const char* value, size_t size);
  ::std::string* mutable_fort_id();
  ::std::string* release_fort_id();
  void set_allocated_fort_id(::std::string* fort_id);

  // optional .POGOProtos.Enums.TeamColor team_color = 2;
  void clear_team_color();
  static const int kTeamColorFieldNumber = 2;
  ::POGOProtos::Enums::TeamColor team_color() const;
  void set_team_color(::POGOProtos::Enums::TeamColor value);

  // optional .POGOProtos.Data.PokemonData pokemon_data = 3;
  bool has_pokemon_data() const;
  void clear_pokemon_data();
  static const int kPokemonDataFieldNumber = 3;
  const ::POGOProtos::Data::PokemonData& pokemon_data() const;
  ::POGOProtos::Data::PokemonData* mutable_pokemon_data();
  ::POGOProtos::Data::PokemonData* release_pokemon_data();
  void set_allocated_pokemon_data(::POGOProtos::Data::PokemonData* pokemon_data);

  // optional string name = 4;
  void clear_name();
  static const int kNameFieldNumber = 4;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // repeated string image_urls = 5;
  int image_urls_size() const;
  void clear_image_urls();
  static const int kImageUrlsFieldNumber = 5;
  const ::std::string& image_urls(int index) const;
  ::std::string* mutable_image_urls(int index);
  void set_image_urls(int index, const ::std::string& value);
  void set_image_urls(int index, const char* value);
  void set_image_urls(int index, const char* value, size_t size);
  ::std::string* add_image_urls();
  void add_image_urls(const ::std::string& value);
  void add_image_urls(const char* value);
  void add_image_urls(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& image_urls() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_image_urls();

  // optional int32 fp = 6;
  void clear_fp();
  static const int kFpFieldNumber = 6;
  ::google::protobuf::int32 fp() const;
  void set_fp(::google::protobuf::int32 value);

  // optional int32 stamina = 7;
  void clear_stamina();
  static const int kStaminaFieldNumber = 7;
  ::google::protobuf::int32 stamina() const;
  void set_stamina(::google::protobuf::int32 value);

  // optional int32 max_stamina = 8;
  void clear_max_stamina();
  static const int kMaxStaminaFieldNumber = 8;
  ::google::protobuf::int32 max_stamina() const;
  void set_max_stamina(::google::protobuf::int32 value);

  // optional .POGOProtos.Map.Fort.FortType type = 9;
  void clear_type();
  static const int kTypeFieldNumber = 9;
  ::POGOProtos::Map::Fort::FortType type() const;
  void set_type(::POGOProtos::Map::Fort::FortType value);

  // optional double latitude = 10;
  void clear_latitude();
  static const int kLatitudeFieldNumber = 10;
  double latitude() const;
  void set_latitude(double value);

  // optional double longitude = 11;
  void clear_longitude();
  static const int kLongitudeFieldNumber = 11;
  double longitude() const;
  void set_longitude(double value);

  // optional string description = 12;
  void clear_description();
  static const int kDescriptionFieldNumber = 12;
  const ::std::string& description() const;
  void set_description(const ::std::string& value);
  void set_description(const char* value);
  void set_description(const char* value, size_t size);
  ::std::string* mutable_description();
  ::std::string* release_description();
  void set_allocated_description(::std::string* description);

  // repeated .POGOProtos.Map.Fort.FortModifier modifiers = 13;
  int modifiers_size() const;
  void clear_modifiers();
  static const int kModifiersFieldNumber = 13;
  const ::POGOProtos::Map::Fort::FortModifier& modifiers(int index) const;
  ::POGOProtos::Map::Fort::FortModifier* mutable_modifiers(int index);
  ::POGOProtos::Map::Fort::FortModifier* add_modifiers();
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortModifier >*
      mutable_modifiers();
  const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortModifier >&
      modifiers() const;

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.FortDetailsResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr fort_id_;
  ::POGOProtos::Data::PokemonData* pokemon_data_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  int team_color_;
  ::google::protobuf::int32 fp_;
  ::google::protobuf::RepeatedPtrField< ::std::string> image_urls_;
  ::google::protobuf::int32 stamina_;
  ::google::protobuf::int32 max_stamina_;
  double latitude_;
  double longitude_;
  ::google::protobuf::internal::ArenaStringPtr description_;
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortModifier > modifiers_;
  int type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fFortDetailsResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fFortDetailsResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fFortDetailsResponse_2eproto();

  void InitAsDefaultInstance();
  static FortDetailsResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// FortDetailsResponse

// optional string fort_id = 1;
inline void FortDetailsResponse::clear_fort_id() {
  fort_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FortDetailsResponse::fort_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDetailsResponse.fort_id)
  return fort_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FortDetailsResponse::set_fort_id(const ::std::string& value) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.FortDetailsResponse.fort_id)
}
inline void FortDetailsResponse::set_fort_id(const char* value) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Responses.FortDetailsResponse.fort_id)
}
inline void FortDetailsResponse::set_fort_id(const char* value, size_t size) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Responses.FortDetailsResponse.fort_id)
}
inline ::std::string* FortDetailsResponse::mutable_fort_id() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.FortDetailsResponse.fort_id)
  return fort_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FortDetailsResponse::release_fort_id() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.FortDetailsResponse.fort_id)
  
  return fort_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FortDetailsResponse::set_allocated_fort_id(::std::string* fort_id) {
  if (fort_id != NULL) {
    
  } else {
    
  }
  fort_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), fort_id);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.FortDetailsResponse.fort_id)
}

// optional .POGOProtos.Enums.TeamColor team_color = 2;
inline void FortDetailsResponse::clear_team_color() {
  team_color_ = 0;
}
inline ::POGOProtos::Enums::TeamColor FortDetailsResponse::team_color() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDetailsResponse.team_color)
  return static_cast< ::POGOProtos::Enums::TeamColor >(team_color_);
}
inline void FortDetailsResponse::set_team_color(::POGOProtos::Enums::TeamColor value) {
  
  team_color_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.FortDetailsResponse.team_color)
}

// optional .POGOProtos.Data.PokemonData pokemon_data = 3;
inline bool FortDetailsResponse::has_pokemon_data() const {
  return !_is_default_instance_ && pokemon_data_ != NULL;
}
inline void FortDetailsResponse::clear_pokemon_data() {
  if (GetArenaNoVirtual() == NULL && pokemon_data_ != NULL) delete pokemon_data_;
  pokemon_data_ = NULL;
}
inline const ::POGOProtos::Data::PokemonData& FortDetailsResponse::pokemon_data() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDetailsResponse.pokemon_data)
  return pokemon_data_ != NULL ? *pokemon_data_ : *default_instance_->pokemon_data_;
}
inline ::POGOProtos::Data::PokemonData* FortDetailsResponse::mutable_pokemon_data() {
  
  if (pokemon_data_ == NULL) {
    pokemon_data_ = new ::POGOProtos::Data::PokemonData;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.FortDetailsResponse.pokemon_data)
  return pokemon_data_;
}
inline ::POGOProtos::Data::PokemonData* FortDetailsResponse::release_pokemon_data() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.FortDetailsResponse.pokemon_data)
  
  ::POGOProtos::Data::PokemonData* temp = pokemon_data_;
  pokemon_data_ = NULL;
  return temp;
}
inline void FortDetailsResponse::set_allocated_pokemon_data(::POGOProtos::Data::PokemonData* pokemon_data) {
  delete pokemon_data_;
  pokemon_data_ = pokemon_data;
  if (pokemon_data) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.FortDetailsResponse.pokemon_data)
}

// optional string name = 4;
inline void FortDetailsResponse::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FortDetailsResponse::name() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDetailsResponse.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FortDetailsResponse::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.FortDetailsResponse.name)
}
inline void FortDetailsResponse::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Responses.FortDetailsResponse.name)
}
inline void FortDetailsResponse::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Responses.FortDetailsResponse.name)
}
inline ::std::string* FortDetailsResponse::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.FortDetailsResponse.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FortDetailsResponse::release_name() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.FortDetailsResponse.name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FortDetailsResponse::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.FortDetailsResponse.name)
}

// repeated string image_urls = 5;
inline int FortDetailsResponse::image_urls_size() const {
  return image_urls_.size();
}
inline void FortDetailsResponse::clear_image_urls() {
  image_urls_.Clear();
}
inline const ::std::string& FortDetailsResponse::image_urls(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDetailsResponse.image_urls)
  return image_urls_.Get(index);
}
inline ::std::string* FortDetailsResponse::mutable_image_urls(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.FortDetailsResponse.image_urls)
  return image_urls_.Mutable(index);
}
inline void FortDetailsResponse::set_image_urls(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.FortDetailsResponse.image_urls)
  image_urls_.Mutable(index)->assign(value);
}
inline void FortDetailsResponse::set_image_urls(int index, const char* value) {
  image_urls_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Responses.FortDetailsResponse.image_urls)
}
inline void FortDetailsResponse::set_image_urls(int index, const char* value, size_t size) {
  image_urls_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Responses.FortDetailsResponse.image_urls)
}
inline ::std::string* FortDetailsResponse::add_image_urls() {
  // @@protoc_insertion_point(field_add_mutable:POGOProtos.Networking.Responses.FortDetailsResponse.image_urls)
  return image_urls_.Add();
}
inline void FortDetailsResponse::add_image_urls(const ::std::string& value) {
  image_urls_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Responses.FortDetailsResponse.image_urls)
}
inline void FortDetailsResponse::add_image_urls(const char* value) {
  image_urls_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:POGOProtos.Networking.Responses.FortDetailsResponse.image_urls)
}
inline void FortDetailsResponse::add_image_urls(const char* value, size_t size) {
  image_urls_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:POGOProtos.Networking.Responses.FortDetailsResponse.image_urls)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
FortDetailsResponse::image_urls() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Responses.FortDetailsResponse.image_urls)
  return image_urls_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
FortDetailsResponse::mutable_image_urls() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Responses.FortDetailsResponse.image_urls)
  return &image_urls_;
}

// optional int32 fp = 6;
inline void FortDetailsResponse::clear_fp() {
  fp_ = 0;
}
inline ::google::protobuf::int32 FortDetailsResponse::fp() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDetailsResponse.fp)
  return fp_;
}
inline void FortDetailsResponse::set_fp(::google::protobuf::int32 value) {
  
  fp_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.FortDetailsResponse.fp)
}

// optional int32 stamina = 7;
inline void FortDetailsResponse::clear_stamina() {
  stamina_ = 0;
}
inline ::google::protobuf::int32 FortDetailsResponse::stamina() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDetailsResponse.stamina)
  return stamina_;
}
inline void FortDetailsResponse::set_stamina(::google::protobuf::int32 value) {
  
  stamina_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.FortDetailsResponse.stamina)
}

// optional int32 max_stamina = 8;
inline void FortDetailsResponse::clear_max_stamina() {
  max_stamina_ = 0;
}
inline ::google::protobuf::int32 FortDetailsResponse::max_stamina() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDetailsResponse.max_stamina)
  return max_stamina_;
}
inline void FortDetailsResponse::set_max_stamina(::google::protobuf::int32 value) {
  
  max_stamina_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.FortDetailsResponse.max_stamina)
}

// optional .POGOProtos.Map.Fort.FortType type = 9;
inline void FortDetailsResponse::clear_type() {
  type_ = 0;
}
inline ::POGOProtos::Map::Fort::FortType FortDetailsResponse::type() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDetailsResponse.type)
  return static_cast< ::POGOProtos::Map::Fort::FortType >(type_);
}
inline void FortDetailsResponse::set_type(::POGOProtos::Map::Fort::FortType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.FortDetailsResponse.type)
}

// optional double latitude = 10;
inline void FortDetailsResponse::clear_latitude() {
  latitude_ = 0;
}
inline double FortDetailsResponse::latitude() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDetailsResponse.latitude)
  return latitude_;
}
inline void FortDetailsResponse::set_latitude(double value) {
  
  latitude_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.FortDetailsResponse.latitude)
}

// optional double longitude = 11;
inline void FortDetailsResponse::clear_longitude() {
  longitude_ = 0;
}
inline double FortDetailsResponse::longitude() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDetailsResponse.longitude)
  return longitude_;
}
inline void FortDetailsResponse::set_longitude(double value) {
  
  longitude_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.FortDetailsResponse.longitude)
}

// optional string description = 12;
inline void FortDetailsResponse::clear_description() {
  description_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FortDetailsResponse::description() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDetailsResponse.description)
  return description_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FortDetailsResponse::set_description(const ::std::string& value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.FortDetailsResponse.description)
}
inline void FortDetailsResponse::set_description(const char* value) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Responses.FortDetailsResponse.description)
}
inline void FortDetailsResponse::set_description(const char* value, size_t size) {
  
  description_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Responses.FortDetailsResponse.description)
}
inline ::std::string* FortDetailsResponse::mutable_description() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.FortDetailsResponse.description)
  return description_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FortDetailsResponse::release_description() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.FortDetailsResponse.description)
  
  return description_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FortDetailsResponse::set_allocated_description(::std::string* description) {
  if (description != NULL) {
    
  } else {
    
  }
  description_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), description);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.FortDetailsResponse.description)
}

// repeated .POGOProtos.Map.Fort.FortModifier modifiers = 13;
inline int FortDetailsResponse::modifiers_size() const {
  return modifiers_.size();
}
inline void FortDetailsResponse::clear_modifiers() {
  modifiers_.Clear();
}
inline const ::POGOProtos::Map::Fort::FortModifier& FortDetailsResponse::modifiers(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.FortDetailsResponse.modifiers)
  return modifiers_.Get(index);
}
inline ::POGOProtos::Map::Fort::FortModifier* FortDetailsResponse::mutable_modifiers(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.FortDetailsResponse.modifiers)
  return modifiers_.Mutable(index);
}
inline ::POGOProtos::Map::Fort::FortModifier* FortDetailsResponse::add_modifiers() {
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Responses.FortDetailsResponse.modifiers)
  return modifiers_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortModifier >*
FortDetailsResponse::mutable_modifiers() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Responses.FortDetailsResponse.modifiers)
  return &modifiers_;
}
inline const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortModifier >&
FortDetailsResponse::modifiers() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Responses.FortDetailsResponse.modifiers)
  return modifiers_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fFortDetailsResponse_2eproto__INCLUDED
