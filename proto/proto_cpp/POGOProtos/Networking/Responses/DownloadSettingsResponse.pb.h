// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/DownloadSettingsResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fDownloadSettingsResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fDownloadSettingsResponse_2eproto__INCLUDED

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
#include "POGOProtos/Settings/GlobalSettings.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fDownloadSettingsResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fDownloadSettingsResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fDownloadSettingsResponse_2eproto();

class DownloadSettingsResponse;

// ===================================================================

class DownloadSettingsResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.DownloadSettingsResponse) */ {
 public:
  DownloadSettingsResponse();
  virtual ~DownloadSettingsResponse();

  DownloadSettingsResponse(const DownloadSettingsResponse& from);

  inline DownloadSettingsResponse& operator=(const DownloadSettingsResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const DownloadSettingsResponse& default_instance();

  void Swap(DownloadSettingsResponse* other);

  // implements Message ----------------------------------------------

  inline DownloadSettingsResponse* New() const { return New(NULL); }

  DownloadSettingsResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DownloadSettingsResponse& from);
  void MergeFrom(const DownloadSettingsResponse& from);
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
  void InternalSwap(DownloadSettingsResponse* other);
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

  // optional string error = 1;
  void clear_error();
  static const int kErrorFieldNumber = 1;
  const ::std::string& error() const;
  void set_error(const ::std::string& value);
  void set_error(const char* value);
  void set_error(const char* value, size_t size);
  ::std::string* mutable_error();
  ::std::string* release_error();
  void set_allocated_error(::std::string* error);

  // optional string hash = 2;
  void clear_hash();
  static const int kHashFieldNumber = 2;
  const ::std::string& hash() const;
  void set_hash(const ::std::string& value);
  void set_hash(const char* value);
  void set_hash(const char* value, size_t size);
  ::std::string* mutable_hash();
  ::std::string* release_hash();
  void set_allocated_hash(::std::string* hash);

  // optional .POGOProtos.Settings.GlobalSettings settings = 3;
  bool has_settings() const;
  void clear_settings();
  static const int kSettingsFieldNumber = 3;
  const ::POGOProtos::Settings::GlobalSettings& settings() const;
  ::POGOProtos::Settings::GlobalSettings* mutable_settings();
  ::POGOProtos::Settings::GlobalSettings* release_settings();
  void set_allocated_settings(::POGOProtos::Settings::GlobalSettings* settings);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.DownloadSettingsResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr error_;
  ::google::protobuf::internal::ArenaStringPtr hash_;
  ::POGOProtos::Settings::GlobalSettings* settings_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fDownloadSettingsResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fDownloadSettingsResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fDownloadSettingsResponse_2eproto();

  void InitAsDefaultInstance();
  static DownloadSettingsResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// DownloadSettingsResponse

// optional string error = 1;
inline void DownloadSettingsResponse::clear_error() {
  error_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DownloadSettingsResponse::error() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.DownloadSettingsResponse.error)
  return error_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DownloadSettingsResponse::set_error(const ::std::string& value) {
  
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.DownloadSettingsResponse.error)
}
inline void DownloadSettingsResponse::set_error(const char* value) {
  
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Responses.DownloadSettingsResponse.error)
}
inline void DownloadSettingsResponse::set_error(const char* value, size_t size) {
  
  error_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Responses.DownloadSettingsResponse.error)
}
inline ::std::string* DownloadSettingsResponse::mutable_error() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.DownloadSettingsResponse.error)
  return error_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DownloadSettingsResponse::release_error() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.DownloadSettingsResponse.error)
  
  return error_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DownloadSettingsResponse::set_allocated_error(::std::string* error) {
  if (error != NULL) {
    
  } else {
    
  }
  error_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), error);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.DownloadSettingsResponse.error)
}

// optional string hash = 2;
inline void DownloadSettingsResponse::clear_hash() {
  hash_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DownloadSettingsResponse::hash() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.DownloadSettingsResponse.hash)
  return hash_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DownloadSettingsResponse::set_hash(const ::std::string& value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.DownloadSettingsResponse.hash)
}
inline void DownloadSettingsResponse::set_hash(const char* value) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Responses.DownloadSettingsResponse.hash)
}
inline void DownloadSettingsResponse::set_hash(const char* value, size_t size) {
  
  hash_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Responses.DownloadSettingsResponse.hash)
}
inline ::std::string* DownloadSettingsResponse::mutable_hash() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.DownloadSettingsResponse.hash)
  return hash_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DownloadSettingsResponse::release_hash() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.DownloadSettingsResponse.hash)
  
  return hash_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DownloadSettingsResponse::set_allocated_hash(::std::string* hash) {
  if (hash != NULL) {
    
  } else {
    
  }
  hash_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), hash);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.DownloadSettingsResponse.hash)
}

// optional .POGOProtos.Settings.GlobalSettings settings = 3;
inline bool DownloadSettingsResponse::has_settings() const {
  return !_is_default_instance_ && settings_ != NULL;
}
inline void DownloadSettingsResponse::clear_settings() {
  if (GetArenaNoVirtual() == NULL && settings_ != NULL) delete settings_;
  settings_ = NULL;
}
inline const ::POGOProtos::Settings::GlobalSettings& DownloadSettingsResponse::settings() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.DownloadSettingsResponse.settings)
  return settings_ != NULL ? *settings_ : *default_instance_->settings_;
}
inline ::POGOProtos::Settings::GlobalSettings* DownloadSettingsResponse::mutable_settings() {
  
  if (settings_ == NULL) {
    settings_ = new ::POGOProtos::Settings::GlobalSettings;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.DownloadSettingsResponse.settings)
  return settings_;
}
inline ::POGOProtos::Settings::GlobalSettings* DownloadSettingsResponse::release_settings() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Responses.DownloadSettingsResponse.settings)
  
  ::POGOProtos::Settings::GlobalSettings* temp = settings_;
  settings_ = NULL;
  return temp;
}
inline void DownloadSettingsResponse::set_allocated_settings(::POGOProtos::Settings::GlobalSettings* settings) {
  delete settings_;
  settings_ = settings;
  if (settings) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Responses.DownloadSettingsResponse.settings)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fDownloadSettingsResponse_2eproto__INCLUDED
