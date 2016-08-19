// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Settings/GlobalSettings.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Settings/GlobalSettings.pb.h"

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
namespace Settings {

namespace {

const ::google::protobuf::Descriptor* GlobalSettings_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GlobalSettings_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fSettings_2fGlobalSettings_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fSettings_2fGlobalSettings_2eproto() {
  protobuf_AddDesc_POGOProtos_2fSettings_2fGlobalSettings_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Settings/GlobalSettings.proto");
  GOOGLE_CHECK(file != NULL);
  GlobalSettings_descriptor_ = file->message_type(0);
  static const int GlobalSettings_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GlobalSettings, fort_settings_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GlobalSettings, map_settings_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GlobalSettings, level_settings_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GlobalSettings, inventory_settings_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GlobalSettings, minimum_client_version_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GlobalSettings, gps_settings_),
  };
  GlobalSettings_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GlobalSettings_descriptor_,
      GlobalSettings::default_instance_,
      GlobalSettings_offsets_,
      -1,
      -1,
      -1,
      sizeof(GlobalSettings),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GlobalSettings, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GlobalSettings, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fSettings_2fGlobalSettings_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GlobalSettings_descriptor_, &GlobalSettings::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fSettings_2fGlobalSettings_2eproto() {
  delete GlobalSettings::default_instance_;
  delete GlobalSettings_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fSettings_2fGlobalSettings_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fSettings_2fGlobalSettings_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Settings::protobuf_AddDesc_POGOProtos_2fSettings_2fFortSettings_2eproto();
  ::POGOProtos::Settings::protobuf_AddDesc_POGOProtos_2fSettings_2fMapSettings_2eproto();
  ::POGOProtos::Settings::protobuf_AddDesc_POGOProtos_2fSettings_2fLevelSettings_2eproto();
  ::POGOProtos::Settings::protobuf_AddDesc_POGOProtos_2fSettings_2fInventorySettings_2eproto();
  ::POGOProtos::Settings::protobuf_AddDesc_POGOProtos_2fSettings_2fGpsSettings_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n(POGOProtos/Settings/GlobalSettings.pro"
    "to\022\023POGOProtos.Settings\032&POGOProtos/Sett"
    "ings/FortSettings.proto\032%POGOProtos/Sett"
    "ings/MapSettings.proto\032\'POGOProtos/Setti"
    "ngs/LevelSettings.proto\032+POGOProtos/Sett"
    "ings/InventorySettings.proto\032%POGOProtos"
    "/Settings/GpsSettings.proto\"\332\002\n\016GlobalSe"
    "ttings\0228\n\rfort_settings\030\002 \001(\0132!.POGOProt"
    "os.Settings.FortSettings\0226\n\014map_settings"
    "\030\003 \001(\0132 .POGOProtos.Settings.MapSettings"
    "\022:\n\016level_settings\030\004 \001(\0132\".POGOProtos.Se"
    "ttings.LevelSettings\022B\n\022inventory_settin"
    "gs\030\005 \001(\0132&.POGOProtos.Settings.Inventory"
    "Settings\022\036\n\026minimum_client_version\030\006 \001(\t"
    "\0226\n\014gps_settings\030\007 \001(\0132 .POGOProtos.Sett"
    "ings.GpsSettingsb\006proto3", 624);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Settings/GlobalSettings.proto", &protobuf_RegisterTypes);
  GlobalSettings::default_instance_ = new GlobalSettings();
  GlobalSettings::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fSettings_2fGlobalSettings_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fSettings_2fGlobalSettings_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fSettings_2fGlobalSettings_2eproto() {
    protobuf_AddDesc_POGOProtos_2fSettings_2fGlobalSettings_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fSettings_2fGlobalSettings_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GlobalSettings::kFortSettingsFieldNumber;
const int GlobalSettings::kMapSettingsFieldNumber;
const int GlobalSettings::kLevelSettingsFieldNumber;
const int GlobalSettings::kInventorySettingsFieldNumber;
const int GlobalSettings::kMinimumClientVersionFieldNumber;
const int GlobalSettings::kGpsSettingsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GlobalSettings::GlobalSettings()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Settings.GlobalSettings)
}

void GlobalSettings::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  fort_settings_ = const_cast< ::POGOProtos::Settings::FortSettings*>(&::POGOProtos::Settings::FortSettings::default_instance());
  map_settings_ = const_cast< ::POGOProtos::Settings::MapSettings*>(&::POGOProtos::Settings::MapSettings::default_instance());
  level_settings_ = const_cast< ::POGOProtos::Settings::LevelSettings*>(&::POGOProtos::Settings::LevelSettings::default_instance());
  inventory_settings_ = const_cast< ::POGOProtos::Settings::InventorySettings*>(&::POGOProtos::Settings::InventorySettings::default_instance());
  gps_settings_ = const_cast< ::POGOProtos::Settings::GpsSettings*>(&::POGOProtos::Settings::GpsSettings::default_instance());
}

GlobalSettings::GlobalSettings(const GlobalSettings& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Settings.GlobalSettings)
}

void GlobalSettings::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  fort_settings_ = NULL;
  map_settings_ = NULL;
  level_settings_ = NULL;
  inventory_settings_ = NULL;
  minimum_client_version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  gps_settings_ = NULL;
}

GlobalSettings::~GlobalSettings() {
  // @@protoc_insertion_point(destructor:POGOProtos.Settings.GlobalSettings)
  SharedDtor();
}

void GlobalSettings::SharedDtor() {
  minimum_client_version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete fort_settings_;
    delete map_settings_;
    delete level_settings_;
    delete inventory_settings_;
    delete gps_settings_;
  }
}

void GlobalSettings::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GlobalSettings::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GlobalSettings_descriptor_;
}

const GlobalSettings& GlobalSettings::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fSettings_2fGlobalSettings_2eproto();
  return *default_instance_;
}

GlobalSettings* GlobalSettings::default_instance_ = NULL;

GlobalSettings* GlobalSettings::New(::google::protobuf::Arena* arena) const {
  GlobalSettings* n = new GlobalSettings;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GlobalSettings::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Settings.GlobalSettings)
  if (GetArenaNoVirtual() == NULL && fort_settings_ != NULL) delete fort_settings_;
  fort_settings_ = NULL;
  if (GetArenaNoVirtual() == NULL && map_settings_ != NULL) delete map_settings_;
  map_settings_ = NULL;
  if (GetArenaNoVirtual() == NULL && level_settings_ != NULL) delete level_settings_;
  level_settings_ = NULL;
  if (GetArenaNoVirtual() == NULL && inventory_settings_ != NULL) delete inventory_settings_;
  inventory_settings_ = NULL;
  minimum_client_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && gps_settings_ != NULL) delete gps_settings_;
  gps_settings_ = NULL;
}

bool GlobalSettings::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Settings.GlobalSettings)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .POGOProtos.Settings.FortSettings fort_settings = 2;
      case 2: {
        if (tag == 18) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_fort_settings()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_map_settings;
        break;
      }

      // optional .POGOProtos.Settings.MapSettings map_settings = 3;
      case 3: {
        if (tag == 26) {
         parse_map_settings:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_map_settings()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_level_settings;
        break;
      }

      // optional .POGOProtos.Settings.LevelSettings level_settings = 4;
      case 4: {
        if (tag == 34) {
         parse_level_settings:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_level_settings()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_inventory_settings;
        break;
      }

      // optional .POGOProtos.Settings.InventorySettings inventory_settings = 5;
      case 5: {
        if (tag == 42) {
         parse_inventory_settings:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_inventory_settings()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_minimum_client_version;
        break;
      }

      // optional string minimum_client_version = 6;
      case 6: {
        if (tag == 50) {
         parse_minimum_client_version:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_minimum_client_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->minimum_client_version().data(), this->minimum_client_version().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "POGOProtos.Settings.GlobalSettings.minimum_client_version"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_gps_settings;
        break;
      }

      // optional .POGOProtos.Settings.GpsSettings gps_settings = 7;
      case 7: {
        if (tag == 58) {
         parse_gps_settings:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_gps_settings()));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Settings.GlobalSettings)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Settings.GlobalSettings)
  return false;
#undef DO_
}

void GlobalSettings::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Settings.GlobalSettings)
  // optional .POGOProtos.Settings.FortSettings fort_settings = 2;
  if (this->has_fort_settings()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->fort_settings_, output);
  }

  // optional .POGOProtos.Settings.MapSettings map_settings = 3;
  if (this->has_map_settings()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, *this->map_settings_, output);
  }

  // optional .POGOProtos.Settings.LevelSettings level_settings = 4;
  if (this->has_level_settings()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, *this->level_settings_, output);
  }

  // optional .POGOProtos.Settings.InventorySettings inventory_settings = 5;
  if (this->has_inventory_settings()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, *this->inventory_settings_, output);
  }

  // optional string minimum_client_version = 6;
  if (this->minimum_client_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->minimum_client_version().data(), this->minimum_client_version().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Settings.GlobalSettings.minimum_client_version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->minimum_client_version(), output);
  }

  // optional .POGOProtos.Settings.GpsSettings gps_settings = 7;
  if (this->has_gps_settings()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, *this->gps_settings_, output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Settings.GlobalSettings)
}

::google::protobuf::uint8* GlobalSettings::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Settings.GlobalSettings)
  // optional .POGOProtos.Settings.FortSettings fort_settings = 2;
  if (this->has_fort_settings()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->fort_settings_, false, target);
  }

  // optional .POGOProtos.Settings.MapSettings map_settings = 3;
  if (this->has_map_settings()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        3, *this->map_settings_, false, target);
  }

  // optional .POGOProtos.Settings.LevelSettings level_settings = 4;
  if (this->has_level_settings()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, *this->level_settings_, false, target);
  }

  // optional .POGOProtos.Settings.InventorySettings inventory_settings = 5;
  if (this->has_inventory_settings()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        5, *this->inventory_settings_, false, target);
  }

  // optional string minimum_client_version = 6;
  if (this->minimum_client_version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->minimum_client_version().data(), this->minimum_client_version().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Settings.GlobalSettings.minimum_client_version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->minimum_client_version(), target);
  }

  // optional .POGOProtos.Settings.GpsSettings gps_settings = 7;
  if (this->has_gps_settings()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        7, *this->gps_settings_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Settings.GlobalSettings)
  return target;
}

int GlobalSettings::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Settings.GlobalSettings)
  int total_size = 0;

  // optional .POGOProtos.Settings.FortSettings fort_settings = 2;
  if (this->has_fort_settings()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->fort_settings_);
  }

  // optional .POGOProtos.Settings.MapSettings map_settings = 3;
  if (this->has_map_settings()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->map_settings_);
  }

  // optional .POGOProtos.Settings.LevelSettings level_settings = 4;
  if (this->has_level_settings()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->level_settings_);
  }

  // optional .POGOProtos.Settings.InventorySettings inventory_settings = 5;
  if (this->has_inventory_settings()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->inventory_settings_);
  }

  // optional string minimum_client_version = 6;
  if (this->minimum_client_version().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->minimum_client_version());
  }

  // optional .POGOProtos.Settings.GpsSettings gps_settings = 7;
  if (this->has_gps_settings()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->gps_settings_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GlobalSettings::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Settings.GlobalSettings)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const GlobalSettings* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const GlobalSettings>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Settings.GlobalSettings)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Settings.GlobalSettings)
    MergeFrom(*source);
  }
}

void GlobalSettings::MergeFrom(const GlobalSettings& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Settings.GlobalSettings)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_fort_settings()) {
    mutable_fort_settings()->::POGOProtos::Settings::FortSettings::MergeFrom(from.fort_settings());
  }
  if (from.has_map_settings()) {
    mutable_map_settings()->::POGOProtos::Settings::MapSettings::MergeFrom(from.map_settings());
  }
  if (from.has_level_settings()) {
    mutable_level_settings()->::POGOProtos::Settings::LevelSettings::MergeFrom(from.level_settings());
  }
  if (from.has_inventory_settings()) {
    mutable_inventory_settings()->::POGOProtos::Settings::InventorySettings::MergeFrom(from.inventory_settings());
  }
  if (from.minimum_client_version().size() > 0) {

    minimum_client_version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.minimum_client_version_);
  }
  if (from.has_gps_settings()) {
    mutable_gps_settings()->::POGOProtos::Settings::GpsSettings::MergeFrom(from.gps_settings());
  }
}

void GlobalSettings::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Settings.GlobalSettings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GlobalSettings::CopyFrom(const GlobalSettings& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Settings.GlobalSettings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GlobalSettings::IsInitialized() const {

  return true;
}

void GlobalSettings::Swap(GlobalSettings* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GlobalSettings::InternalSwap(GlobalSettings* other) {
  std::swap(fort_settings_, other->fort_settings_);
  std::swap(map_settings_, other->map_settings_);
  std::swap(level_settings_, other->level_settings_);
  std::swap(inventory_settings_, other->inventory_settings_);
  minimum_client_version_.Swap(&other->minimum_client_version_);
  std::swap(gps_settings_, other->gps_settings_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GlobalSettings::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GlobalSettings_descriptor_;
  metadata.reflection = GlobalSettings_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GlobalSettings

// optional .POGOProtos.Settings.FortSettings fort_settings = 2;
bool GlobalSettings::has_fort_settings() const {
  return !_is_default_instance_ && fort_settings_ != NULL;
}
void GlobalSettings::clear_fort_settings() {
  if (GetArenaNoVirtual() == NULL && fort_settings_ != NULL) delete fort_settings_;
  fort_settings_ = NULL;
}
const ::POGOProtos::Settings::FortSettings& GlobalSettings::fort_settings() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.GlobalSettings.fort_settings)
  return fort_settings_ != NULL ? *fort_settings_ : *default_instance_->fort_settings_;
}
::POGOProtos::Settings::FortSettings* GlobalSettings::mutable_fort_settings() {
  
  if (fort_settings_ == NULL) {
    fort_settings_ = new ::POGOProtos::Settings::FortSettings;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Settings.GlobalSettings.fort_settings)
  return fort_settings_;
}
::POGOProtos::Settings::FortSettings* GlobalSettings::release_fort_settings() {
  // @@protoc_insertion_point(field_release:POGOProtos.Settings.GlobalSettings.fort_settings)
  
  ::POGOProtos::Settings::FortSettings* temp = fort_settings_;
  fort_settings_ = NULL;
  return temp;
}
void GlobalSettings::set_allocated_fort_settings(::POGOProtos::Settings::FortSettings* fort_settings) {
  delete fort_settings_;
  fort_settings_ = fort_settings;
  if (fort_settings) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Settings.GlobalSettings.fort_settings)
}

// optional .POGOProtos.Settings.MapSettings map_settings = 3;
bool GlobalSettings::has_map_settings() const {
  return !_is_default_instance_ && map_settings_ != NULL;
}
void GlobalSettings::clear_map_settings() {
  if (GetArenaNoVirtual() == NULL && map_settings_ != NULL) delete map_settings_;
  map_settings_ = NULL;
}
const ::POGOProtos::Settings::MapSettings& GlobalSettings::map_settings() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.GlobalSettings.map_settings)
  return map_settings_ != NULL ? *map_settings_ : *default_instance_->map_settings_;
}
::POGOProtos::Settings::MapSettings* GlobalSettings::mutable_map_settings() {
  
  if (map_settings_ == NULL) {
    map_settings_ = new ::POGOProtos::Settings::MapSettings;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Settings.GlobalSettings.map_settings)
  return map_settings_;
}
::POGOProtos::Settings::MapSettings* GlobalSettings::release_map_settings() {
  // @@protoc_insertion_point(field_release:POGOProtos.Settings.GlobalSettings.map_settings)
  
  ::POGOProtos::Settings::MapSettings* temp = map_settings_;
  map_settings_ = NULL;
  return temp;
}
void GlobalSettings::set_allocated_map_settings(::POGOProtos::Settings::MapSettings* map_settings) {
  delete map_settings_;
  map_settings_ = map_settings;
  if (map_settings) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Settings.GlobalSettings.map_settings)
}

// optional .POGOProtos.Settings.LevelSettings level_settings = 4;
bool GlobalSettings::has_level_settings() const {
  return !_is_default_instance_ && level_settings_ != NULL;
}
void GlobalSettings::clear_level_settings() {
  if (GetArenaNoVirtual() == NULL && level_settings_ != NULL) delete level_settings_;
  level_settings_ = NULL;
}
const ::POGOProtos::Settings::LevelSettings& GlobalSettings::level_settings() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.GlobalSettings.level_settings)
  return level_settings_ != NULL ? *level_settings_ : *default_instance_->level_settings_;
}
::POGOProtos::Settings::LevelSettings* GlobalSettings::mutable_level_settings() {
  
  if (level_settings_ == NULL) {
    level_settings_ = new ::POGOProtos::Settings::LevelSettings;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Settings.GlobalSettings.level_settings)
  return level_settings_;
}
::POGOProtos::Settings::LevelSettings* GlobalSettings::release_level_settings() {
  // @@protoc_insertion_point(field_release:POGOProtos.Settings.GlobalSettings.level_settings)
  
  ::POGOProtos::Settings::LevelSettings* temp = level_settings_;
  level_settings_ = NULL;
  return temp;
}
void GlobalSettings::set_allocated_level_settings(::POGOProtos::Settings::LevelSettings* level_settings) {
  delete level_settings_;
  level_settings_ = level_settings;
  if (level_settings) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Settings.GlobalSettings.level_settings)
}

// optional .POGOProtos.Settings.InventorySettings inventory_settings = 5;
bool GlobalSettings::has_inventory_settings() const {
  return !_is_default_instance_ && inventory_settings_ != NULL;
}
void GlobalSettings::clear_inventory_settings() {
  if (GetArenaNoVirtual() == NULL && inventory_settings_ != NULL) delete inventory_settings_;
  inventory_settings_ = NULL;
}
const ::POGOProtos::Settings::InventorySettings& GlobalSettings::inventory_settings() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.GlobalSettings.inventory_settings)
  return inventory_settings_ != NULL ? *inventory_settings_ : *default_instance_->inventory_settings_;
}
::POGOProtos::Settings::InventorySettings* GlobalSettings::mutable_inventory_settings() {
  
  if (inventory_settings_ == NULL) {
    inventory_settings_ = new ::POGOProtos::Settings::InventorySettings;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Settings.GlobalSettings.inventory_settings)
  return inventory_settings_;
}
::POGOProtos::Settings::InventorySettings* GlobalSettings::release_inventory_settings() {
  // @@protoc_insertion_point(field_release:POGOProtos.Settings.GlobalSettings.inventory_settings)
  
  ::POGOProtos::Settings::InventorySettings* temp = inventory_settings_;
  inventory_settings_ = NULL;
  return temp;
}
void GlobalSettings::set_allocated_inventory_settings(::POGOProtos::Settings::InventorySettings* inventory_settings) {
  delete inventory_settings_;
  inventory_settings_ = inventory_settings;
  if (inventory_settings) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Settings.GlobalSettings.inventory_settings)
}

// optional string minimum_client_version = 6;
void GlobalSettings::clear_minimum_client_version() {
  minimum_client_version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& GlobalSettings::minimum_client_version() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.GlobalSettings.minimum_client_version)
  return minimum_client_version_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void GlobalSettings::set_minimum_client_version(const ::std::string& value) {
  
  minimum_client_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.GlobalSettings.minimum_client_version)
}
 void GlobalSettings::set_minimum_client_version(const char* value) {
  
  minimum_client_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Settings.GlobalSettings.minimum_client_version)
}
 void GlobalSettings::set_minimum_client_version(const char* value, size_t size) {
  
  minimum_client_version_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Settings.GlobalSettings.minimum_client_version)
}
 ::std::string* GlobalSettings::mutable_minimum_client_version() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Settings.GlobalSettings.minimum_client_version)
  return minimum_client_version_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* GlobalSettings::release_minimum_client_version() {
  // @@protoc_insertion_point(field_release:POGOProtos.Settings.GlobalSettings.minimum_client_version)
  
  return minimum_client_version_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void GlobalSettings::set_allocated_minimum_client_version(::std::string* minimum_client_version) {
  if (minimum_client_version != NULL) {
    
  } else {
    
  }
  minimum_client_version_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), minimum_client_version);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Settings.GlobalSettings.minimum_client_version)
}

// optional .POGOProtos.Settings.GpsSettings gps_settings = 7;
bool GlobalSettings::has_gps_settings() const {
  return !_is_default_instance_ && gps_settings_ != NULL;
}
void GlobalSettings::clear_gps_settings() {
  if (GetArenaNoVirtual() == NULL && gps_settings_ != NULL) delete gps_settings_;
  gps_settings_ = NULL;
}
const ::POGOProtos::Settings::GpsSettings& GlobalSettings::gps_settings() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.GlobalSettings.gps_settings)
  return gps_settings_ != NULL ? *gps_settings_ : *default_instance_->gps_settings_;
}
::POGOProtos::Settings::GpsSettings* GlobalSettings::mutable_gps_settings() {
  
  if (gps_settings_ == NULL) {
    gps_settings_ = new ::POGOProtos::Settings::GpsSettings;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Settings.GlobalSettings.gps_settings)
  return gps_settings_;
}
::POGOProtos::Settings::GpsSettings* GlobalSettings::release_gps_settings() {
  // @@protoc_insertion_point(field_release:POGOProtos.Settings.GlobalSettings.gps_settings)
  
  ::POGOProtos::Settings::GpsSettings* temp = gps_settings_;
  gps_settings_ = NULL;
  return temp;
}
void GlobalSettings::set_allocated_gps_settings(::POGOProtos::Settings::GpsSettings* gps_settings) {
  delete gps_settings_;
  gps_settings_ = gps_settings;
  if (gps_settings) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Settings.GlobalSettings.gps_settings)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Settings
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
