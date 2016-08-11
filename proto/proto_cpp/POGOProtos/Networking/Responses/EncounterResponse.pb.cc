// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/EncounterResponse.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Responses/EncounterResponse.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

namespace {

const ::google::protobuf::Descriptor* EncounterResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EncounterResponse_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* EncounterResponse_Background_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EncounterResponse_Status_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Responses/EncounterResponse.proto");
  GOOGLE_CHECK(file != NULL);
  EncounterResponse_descriptor_ = file->message_type(0);
  static const int EncounterResponse_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EncounterResponse, wild_pokemon_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EncounterResponse, background_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EncounterResponse, status_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EncounterResponse, capture_probability_),
  };
  EncounterResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      EncounterResponse_descriptor_,
      EncounterResponse::default_instance_,
      EncounterResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(EncounterResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EncounterResponse, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EncounterResponse, _is_default_instance_));
  EncounterResponse_Background_descriptor_ = EncounterResponse_descriptor_->enum_type(0);
  EncounterResponse_Status_descriptor_ = EncounterResponse_descriptor_->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      EncounterResponse_descriptor_, &EncounterResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto() {
  delete EncounterResponse::default_instance_;
  delete EncounterResponse_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Data::Capture::protobuf_AddDesc_POGOProtos_2fData_2fCapture_2fCaptureProbability_2eproto();
  ::POGOProtos::Map::Pokemon::protobuf_AddDesc_POGOProtos_2fMap_2fPokemon_2fWildPokemon_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n7POGOProtos/Networking/Responses/Encoun"
    "terResponse.proto\022\037POGOProtos.Networking"
    ".Responses\0320POGOProtos/Data/Capture/Capt"
    "ureProbability.proto\032(POGOProtos/Map/Pok"
    "emon/WildPokemon.proto\"\264\004\n\021EncounterResp"
    "onse\0229\n\014wild_pokemon\030\001 \001(\0132#.POGOProtos."
    "Map.Pokemon.WildPokemon\022Q\n\nbackground\030\002 "
    "\001(\0162=.POGOProtos.Networking.Responses.En"
    "counterResponse.Background\022I\n\006status\030\003 \001"
    "(\01629.POGOProtos.Networking.Responses.Enc"
    "ounterResponse.Status\022H\n\023capture_probabi"
    "lity\030\004 \001(\0132+.POGOProtos.Data.Capture.Cap"
    "tureProbability\"\"\n\nBackground\022\010\n\004PARK\020\000\022"
    "\n\n\006DESERT\020\001\"\327\001\n\006Status\022\023\n\017ENCOUNTER_ERRO"
    "R\020\000\022\025\n\021ENCOUNTER_SUCCESS\020\001\022\027\n\023ENCOUNTER_"
    "NOT_FOUND\020\002\022\024\n\020ENCOUNTER_CLOSED\020\003\022\032\n\026ENC"
    "OUNTER_POKEMON_FLED\020\004\022\032\n\026ENCOUNTER_NOT_I"
    "N_RANGE\020\005\022\036\n\032ENCOUNTER_ALREADY_HAPPENED\020"
    "\006\022\032\n\026POKEMON_INVENTORY_FULL\020\007b\006proto3", 757);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Responses/EncounterResponse.proto", &protobuf_RegisterTypes);
  EncounterResponse::default_instance_ = new EncounterResponse();
  EncounterResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* EncounterResponse_Background_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EncounterResponse_Background_descriptor_;
}
bool EncounterResponse_Background_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const EncounterResponse_Background EncounterResponse::PARK;
const EncounterResponse_Background EncounterResponse::DESERT;
const EncounterResponse_Background EncounterResponse::Background_MIN;
const EncounterResponse_Background EncounterResponse::Background_MAX;
const int EncounterResponse::Background_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
const ::google::protobuf::EnumDescriptor* EncounterResponse_Status_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EncounterResponse_Status_descriptor_;
}
bool EncounterResponse_Status_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const EncounterResponse_Status EncounterResponse::ENCOUNTER_ERROR;
const EncounterResponse_Status EncounterResponse::ENCOUNTER_SUCCESS;
const EncounterResponse_Status EncounterResponse::ENCOUNTER_NOT_FOUND;
const EncounterResponse_Status EncounterResponse::ENCOUNTER_CLOSED;
const EncounterResponse_Status EncounterResponse::ENCOUNTER_POKEMON_FLED;
const EncounterResponse_Status EncounterResponse::ENCOUNTER_NOT_IN_RANGE;
const EncounterResponse_Status EncounterResponse::ENCOUNTER_ALREADY_HAPPENED;
const EncounterResponse_Status EncounterResponse::POKEMON_INVENTORY_FULL;
const EncounterResponse_Status EncounterResponse::Status_MIN;
const EncounterResponse_Status EncounterResponse::Status_MAX;
const int EncounterResponse::Status_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EncounterResponse::kWildPokemonFieldNumber;
const int EncounterResponse::kBackgroundFieldNumber;
const int EncounterResponse::kStatusFieldNumber;
const int EncounterResponse::kCaptureProbabilityFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

EncounterResponse::EncounterResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Responses.EncounterResponse)
}

void EncounterResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  wild_pokemon_ = const_cast< ::POGOProtos::Map::Pokemon::WildPokemon*>(&::POGOProtos::Map::Pokemon::WildPokemon::default_instance());
  capture_probability_ = const_cast< ::POGOProtos::Data::Capture::CaptureProbability*>(&::POGOProtos::Data::Capture::CaptureProbability::default_instance());
}

EncounterResponse::EncounterResponse(const EncounterResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Responses.EncounterResponse)
}

void EncounterResponse::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  wild_pokemon_ = NULL;
  background_ = 0;
  status_ = 0;
  capture_probability_ = NULL;
}

EncounterResponse::~EncounterResponse() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Responses.EncounterResponse)
  SharedDtor();
}

void EncounterResponse::SharedDtor() {
  if (this != default_instance_) {
    delete wild_pokemon_;
    delete capture_probability_;
  }
}

void EncounterResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EncounterResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EncounterResponse_descriptor_;
}

const EncounterResponse& EncounterResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fEncounterResponse_2eproto();
  return *default_instance_;
}

EncounterResponse* EncounterResponse::default_instance_ = NULL;

EncounterResponse* EncounterResponse::New(::google::protobuf::Arena* arena) const {
  EncounterResponse* n = new EncounterResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void EncounterResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Responses.EncounterResponse)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(EncounterResponse, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<EncounterResponse*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(background_, status_);
  if (GetArenaNoVirtual() == NULL && wild_pokemon_ != NULL) delete wild_pokemon_;
  wild_pokemon_ = NULL;
  if (GetArenaNoVirtual() == NULL && capture_probability_ != NULL) delete capture_probability_;
  capture_probability_ = NULL;

#undef ZR_HELPER_
#undef ZR_

}

bool EncounterResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Responses.EncounterResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .POGOProtos.Map.Pokemon.WildPokemon wild_pokemon = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_wild_pokemon()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_background;
        break;
      }

      // optional .POGOProtos.Networking.Responses.EncounterResponse.Background background = 2;
      case 2: {
        if (tag == 16) {
         parse_background:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_background(static_cast< ::POGOProtos::Networking::Responses::EncounterResponse_Background >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_status;
        break;
      }

      // optional .POGOProtos.Networking.Responses.EncounterResponse.Status status = 3;
      case 3: {
        if (tag == 24) {
         parse_status:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_status(static_cast< ::POGOProtos::Networking::Responses::EncounterResponse_Status >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_capture_probability;
        break;
      }

      // optional .POGOProtos.Data.Capture.CaptureProbability capture_probability = 4;
      case 4: {
        if (tag == 34) {
         parse_capture_probability:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_capture_probability()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Responses.EncounterResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Responses.EncounterResponse)
  return false;
#undef DO_
}

void EncounterResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Responses.EncounterResponse)
  // optional .POGOProtos.Map.Pokemon.WildPokemon wild_pokemon = 1;
  if (this->has_wild_pokemon()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->wild_pokemon_, output);
  }

  // optional .POGOProtos.Networking.Responses.EncounterResponse.Background background = 2;
  if (this->background() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->background(), output);
  }

  // optional .POGOProtos.Networking.Responses.EncounterResponse.Status status = 3;
  if (this->status() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->status(), output);
  }

  // optional .POGOProtos.Data.Capture.CaptureProbability capture_probability = 4;
  if (this->has_capture_probability()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->capture_probability_, output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Responses.EncounterResponse)
}

::google::protobuf::uint8* EncounterResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Responses.EncounterResponse)
  // optional .POGOProtos.Map.Pokemon.WildPokemon wild_pokemon = 1;
  if (this->has_wild_pokemon()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->wild_pokemon_, false, target);
  }

  // optional .POGOProtos.Networking.Responses.EncounterResponse.Background background = 2;
  if (this->background() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->background(), target);
  }

  // optional .POGOProtos.Networking.Responses.EncounterResponse.Status status = 3;
  if (this->status() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->status(), target);
  }

  // optional .POGOProtos.Data.Capture.CaptureProbability capture_probability = 4;
  if (this->has_capture_probability()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->capture_probability_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Responses.EncounterResponse)
  return target;
}

int EncounterResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Responses.EncounterResponse)
  int total_size = 0;

  // optional .POGOProtos.Map.Pokemon.WildPokemon wild_pokemon = 1;
  if (this->has_wild_pokemon()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->wild_pokemon_);
  }

  // optional .POGOProtos.Networking.Responses.EncounterResponse.Background background = 2;
  if (this->background() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->background());
  }

  // optional .POGOProtos.Networking.Responses.EncounterResponse.Status status = 3;
  if (this->status() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->status());
  }

  // optional .POGOProtos.Data.Capture.CaptureProbability capture_probability = 4;
  if (this->has_capture_probability()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->capture_probability_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EncounterResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Responses.EncounterResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const EncounterResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const EncounterResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Responses.EncounterResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Responses.EncounterResponse)
    MergeFrom(*source);
  }
}

void EncounterResponse::MergeFrom(const EncounterResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Responses.EncounterResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_wild_pokemon()) {
    mutable_wild_pokemon()->::POGOProtos::Map::Pokemon::WildPokemon::MergeFrom(from.wild_pokemon());
  }
  if (from.background() != 0) {
    set_background(from.background());
  }
  if (from.status() != 0) {
    set_status(from.status());
  }
  if (from.has_capture_probability()) {
    mutable_capture_probability()->::POGOProtos::Data::Capture::CaptureProbability::MergeFrom(from.capture_probability());
  }
}

void EncounterResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Responses.EncounterResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EncounterResponse::CopyFrom(const EncounterResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Responses.EncounterResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EncounterResponse::IsInitialized() const {

  return true;
}

void EncounterResponse::Swap(EncounterResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void EncounterResponse::InternalSwap(EncounterResponse* other) {
  std::swap(wild_pokemon_, other->wild_pokemon_);
  std::swap(background_, other->background_);
  std::swap(status_, other->status_);
  std::swap(capture_probability_, other->capture_probability_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata EncounterResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EncounterResponse_descriptor_;
  metadata.reflection = EncounterResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// EncounterResponse

// optional .POGOProtos.Map.Pokemon.WildPokemon wild_pokemon = 1;
bool EncounterResponse::has_wild_pokemon() const {
  return !_is_default_instance_ && wild_pokemon_ != NULL;
}
void EncounterResponse::clear_wild_pokemon() {
  if (GetArenaNoVirtual() == NULL && wild_pokemon_ != NULL) delete wild_pokemon_;
  wild_pokemon_ = NULL;
}
const ::POGOProtos::Map::Pokemon::WildPokemon& EncounterResponse::wild_pokemon() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.EncounterResponse.wild_pokemon)
  return wild_pokemon_ != NULL ? *wild_pokemon_ : *default_instance_->wild_pokemon_;
}
::POGOProtos::Map::Pokemon::WildPokemon* EncounterResponse::mutable_wild_pokemon() {
  
  if (wild_pokemon_ == NULL) {
    wild_pokemon_ = new ::POGOProtos::Map::Pokemon::WildPokemon;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.EncounterResponse.wild_pokemon)
  return wild_pokemon_;
}
::POGOProtos::Map::Pokemon::WildPokemon* EncounterResponse::release_wild_pokemon() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.EncounterResponse.wild_pokemon)
  
  ::POGOProtos::Map::Pokemon::WildPokemon* temp = wild_pokemon_;
  wild_pokemon_ = NULL;
  return temp;
}
void EncounterResponse::set_allocated_wild_pokemon(::POGOProtos::Map::Pokemon::WildPokemon* wild_pokemon) {
  delete wild_pokemon_;
  wild_pokemon_ = wild_pokemon;
  if (wild_pokemon) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.EncounterResponse.wild_pokemon)
}

// optional .POGOProtos.Networking.Responses.EncounterResponse.Background background = 2;
void EncounterResponse::clear_background() {
  background_ = 0;
}
 ::POGOProtos::Networking::Responses::EncounterResponse_Background EncounterResponse::background() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.EncounterResponse.background)
  return static_cast< ::POGOProtos::Networking::Responses::EncounterResponse_Background >(background_);
}
 void EncounterResponse::set_background(::POGOProtos::Networking::Responses::EncounterResponse_Background value) {
  
  background_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.EncounterResponse.background)
}

// optional .POGOProtos.Networking.Responses.EncounterResponse.Status status = 3;
void EncounterResponse::clear_status() {
  status_ = 0;
}
 ::POGOProtos::Networking::Responses::EncounterResponse_Status EncounterResponse::status() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.EncounterResponse.status)
  return static_cast< ::POGOProtos::Networking::Responses::EncounterResponse_Status >(status_);
}
 void EncounterResponse::set_status(::POGOProtos::Networking::Responses::EncounterResponse_Status value) {
  
  status_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.EncounterResponse.status)
}

// optional .POGOProtos.Data.Capture.CaptureProbability capture_probability = 4;
bool EncounterResponse::has_capture_probability() const {
  return !_is_default_instance_ && capture_probability_ != NULL;
}
void EncounterResponse::clear_capture_probability() {
  if (GetArenaNoVirtual() == NULL && capture_probability_ != NULL) delete capture_probability_;
  capture_probability_ = NULL;
}
const ::POGOProtos::Data::Capture::CaptureProbability& EncounterResponse::capture_probability() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.EncounterResponse.capture_probability)
  return capture_probability_ != NULL ? *capture_probability_ : *default_instance_->capture_probability_;
}
::POGOProtos::Data::Capture::CaptureProbability* EncounterResponse::mutable_capture_probability() {
  
  if (capture_probability_ == NULL) {
    capture_probability_ = new ::POGOProtos::Data::Capture::CaptureProbability;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.EncounterResponse.capture_probability)
  return capture_probability_;
}
::POGOProtos::Data::Capture::CaptureProbability* EncounterResponse::release_capture_probability() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.EncounterResponse.capture_probability)
  
  ::POGOProtos::Data::Capture::CaptureProbability* temp = capture_probability_;
  capture_probability_ = NULL;
  return temp;
}
void EncounterResponse::set_allocated_capture_probability(::POGOProtos::Data::Capture::CaptureProbability* capture_probability) {
  delete capture_probability_;
  capture_probability_ = capture_probability;
  if (capture_probability) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.EncounterResponse.capture_probability)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
