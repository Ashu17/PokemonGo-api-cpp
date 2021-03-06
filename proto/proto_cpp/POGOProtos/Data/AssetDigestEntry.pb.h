// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Data/AssetDigestEntry.proto

#ifndef PROTOBUF_POGOProtos_2fData_2fAssetDigestEntry_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fData_2fAssetDigestEntry_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Data {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fData_2fAssetDigestEntry_2eproto();
void protobuf_AssignDesc_POGOProtos_2fData_2fAssetDigestEntry_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fData_2fAssetDigestEntry_2eproto();

class AssetDigestEntry;

// ===================================================================

class AssetDigestEntry : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Data.AssetDigestEntry) */ {
 public:
  AssetDigestEntry();
  virtual ~AssetDigestEntry();

  AssetDigestEntry(const AssetDigestEntry& from);

  inline AssetDigestEntry& operator=(const AssetDigestEntry& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AssetDigestEntry& default_instance();

  void Swap(AssetDigestEntry* other);

  // implements Message ----------------------------------------------

  inline AssetDigestEntry* New() const { return New(NULL); }

  AssetDigestEntry* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AssetDigestEntry& from);
  void MergeFrom(const AssetDigestEntry& from);
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
  void InternalSwap(AssetDigestEntry* other);
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

  // optional string asset_id = 1;
  void clear_asset_id();
  static const int kAssetIdFieldNumber = 1;
  const ::std::string& asset_id() const;
  void set_asset_id(const ::std::string& value);
  void set_asset_id(const char* value);
  void set_asset_id(const char* value, size_t size);
  ::std::string* mutable_asset_id();
  ::std::string* release_asset_id();
  void set_allocated_asset_id(::std::string* asset_id);

  // optional string bundle_name = 2;
  void clear_bundle_name();
  static const int kBundleNameFieldNumber = 2;
  const ::std::string& bundle_name() const;
  void set_bundle_name(const ::std::string& value);
  void set_bundle_name(const char* value);
  void set_bundle_name(const char* value, size_t size);
  ::std::string* mutable_bundle_name();
  ::std::string* release_bundle_name();
  void set_allocated_bundle_name(::std::string* bundle_name);

  // optional int64 version = 3;
  void clear_version();
  static const int kVersionFieldNumber = 3;
  ::google::protobuf::int64 version() const;
  void set_version(::google::protobuf::int64 value);

  // optional fixed32 checksum = 4;
  void clear_checksum();
  static const int kChecksumFieldNumber = 4;
  ::google::protobuf::uint32 checksum() const;
  void set_checksum(::google::protobuf::uint32 value);

  // optional int32 size = 5;
  void clear_size();
  static const int kSizeFieldNumber = 5;
  ::google::protobuf::int32 size() const;
  void set_size(::google::protobuf::int32 value);

  // optional bytes key = 6;
  void clear_key();
  static const int kKeyFieldNumber = 6;
  const ::std::string& key() const;
  void set_key(const ::std::string& value);
  void set_key(const char* value);
  void set_key(const void* value, size_t size);
  ::std::string* mutable_key();
  ::std::string* release_key();
  void set_allocated_key(::std::string* key);

  // @@protoc_insertion_point(class_scope:POGOProtos.Data.AssetDigestEntry)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr asset_id_;
  ::google::protobuf::internal::ArenaStringPtr bundle_name_;
  ::google::protobuf::int64 version_;
  ::google::protobuf::uint32 checksum_;
  ::google::protobuf::int32 size_;
  ::google::protobuf::internal::ArenaStringPtr key_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fData_2fAssetDigestEntry_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fData_2fAssetDigestEntry_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fData_2fAssetDigestEntry_2eproto();

  void InitAsDefaultInstance();
  static AssetDigestEntry* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// AssetDigestEntry

// optional string asset_id = 1;
inline void AssetDigestEntry::clear_asset_id() {
  asset_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AssetDigestEntry::asset_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.AssetDigestEntry.asset_id)
  return asset_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AssetDigestEntry::set_asset_id(const ::std::string& value) {
  
  asset_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Data.AssetDigestEntry.asset_id)
}
inline void AssetDigestEntry::set_asset_id(const char* value) {
  
  asset_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Data.AssetDigestEntry.asset_id)
}
inline void AssetDigestEntry::set_asset_id(const char* value, size_t size) {
  
  asset_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Data.AssetDigestEntry.asset_id)
}
inline ::std::string* AssetDigestEntry::mutable_asset_id() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Data.AssetDigestEntry.asset_id)
  return asset_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AssetDigestEntry::release_asset_id() {
  // @@protoc_insertion_point(field_release:POGOProtos.Data.AssetDigestEntry.asset_id)
  
  return asset_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AssetDigestEntry::set_allocated_asset_id(::std::string* asset_id) {
  if (asset_id != NULL) {
    
  } else {
    
  }
  asset_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), asset_id);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Data.AssetDigestEntry.asset_id)
}

// optional string bundle_name = 2;
inline void AssetDigestEntry::clear_bundle_name() {
  bundle_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AssetDigestEntry::bundle_name() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.AssetDigestEntry.bundle_name)
  return bundle_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AssetDigestEntry::set_bundle_name(const ::std::string& value) {
  
  bundle_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Data.AssetDigestEntry.bundle_name)
}
inline void AssetDigestEntry::set_bundle_name(const char* value) {
  
  bundle_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Data.AssetDigestEntry.bundle_name)
}
inline void AssetDigestEntry::set_bundle_name(const char* value, size_t size) {
  
  bundle_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Data.AssetDigestEntry.bundle_name)
}
inline ::std::string* AssetDigestEntry::mutable_bundle_name() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Data.AssetDigestEntry.bundle_name)
  return bundle_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AssetDigestEntry::release_bundle_name() {
  // @@protoc_insertion_point(field_release:POGOProtos.Data.AssetDigestEntry.bundle_name)
  
  return bundle_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AssetDigestEntry::set_allocated_bundle_name(::std::string* bundle_name) {
  if (bundle_name != NULL) {
    
  } else {
    
  }
  bundle_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), bundle_name);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Data.AssetDigestEntry.bundle_name)
}

// optional int64 version = 3;
inline void AssetDigestEntry::clear_version() {
  version_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 AssetDigestEntry::version() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.AssetDigestEntry.version)
  return version_;
}
inline void AssetDigestEntry::set_version(::google::protobuf::int64 value) {
  
  version_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.AssetDigestEntry.version)
}

// optional fixed32 checksum = 4;
inline void AssetDigestEntry::clear_checksum() {
  checksum_ = 0u;
}
inline ::google::protobuf::uint32 AssetDigestEntry::checksum() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.AssetDigestEntry.checksum)
  return checksum_;
}
inline void AssetDigestEntry::set_checksum(::google::protobuf::uint32 value) {
  
  checksum_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.AssetDigestEntry.checksum)
}

// optional int32 size = 5;
inline void AssetDigestEntry::clear_size() {
  size_ = 0;
}
inline ::google::protobuf::int32 AssetDigestEntry::size() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.AssetDigestEntry.size)
  return size_;
}
inline void AssetDigestEntry::set_size(::google::protobuf::int32 value) {
  
  size_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.AssetDigestEntry.size)
}

// optional bytes key = 6;
inline void AssetDigestEntry::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& AssetDigestEntry::key() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.AssetDigestEntry.key)
  return key_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AssetDigestEntry::set_key(const ::std::string& value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Data.AssetDigestEntry.key)
}
inline void AssetDigestEntry::set_key(const char* value) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Data.AssetDigestEntry.key)
}
inline void AssetDigestEntry::set_key(const void* value, size_t size) {
  
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Data.AssetDigestEntry.key)
}
inline ::std::string* AssetDigestEntry::mutable_key() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Data.AssetDigestEntry.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AssetDigestEntry::release_key() {
  // @@protoc_insertion_point(field_release:POGOProtos.Data.AssetDigestEntry.key)
  
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AssetDigestEntry::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    
  } else {
    
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Data.AssetDigestEntry.key)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Data
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fData_2fAssetDigestEntry_2eproto__INCLUDED
