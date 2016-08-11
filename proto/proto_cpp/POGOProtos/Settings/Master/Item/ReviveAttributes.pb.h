// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Settings/Master/Item/ReviveAttributes.proto

#ifndef PROTOBUF_POGOProtos_2fSettings_2fMaster_2fItem_2fReviveAttributes_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fSettings_2fMaster_2fItem_2fReviveAttributes_2eproto__INCLUDED

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
namespace Settings {
namespace Master {
namespace Item {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fItem_2fReviveAttributes_2eproto();
void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fItem_2fReviveAttributes_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fItem_2fReviveAttributes_2eproto();

class ReviveAttributes;

// ===================================================================

class ReviveAttributes : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Settings.Master.Item.ReviveAttributes) */ {
 public:
  ReviveAttributes();
  virtual ~ReviveAttributes();

  ReviveAttributes(const ReviveAttributes& from);

  inline ReviveAttributes& operator=(const ReviveAttributes& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ReviveAttributes& default_instance();

  void Swap(ReviveAttributes* other);

  // implements Message ----------------------------------------------

  inline ReviveAttributes* New() const { return New(NULL); }

  ReviveAttributes* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ReviveAttributes& from);
  void MergeFrom(const ReviveAttributes& from);
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
  void InternalSwap(ReviveAttributes* other);
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

  // optional float sta_percent = 1;
  void clear_sta_percent();
  static const int kStaPercentFieldNumber = 1;
  float sta_percent() const;
  void set_sta_percent(float value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Settings.Master.Item.ReviveAttributes)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  float sta_percent_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fSettings_2fMaster_2fItem_2fReviveAttributes_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fSettings_2fMaster_2fItem_2fReviveAttributes_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fSettings_2fMaster_2fItem_2fReviveAttributes_2eproto();

  void InitAsDefaultInstance();
  static ReviveAttributes* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ReviveAttributes

// optional float sta_percent = 1;
inline void ReviveAttributes::clear_sta_percent() {
  sta_percent_ = 0;
}
inline float ReviveAttributes::sta_percent() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Settings.Master.Item.ReviveAttributes.sta_percent)
  return sta_percent_;
}
inline void ReviveAttributes::set_sta_percent(float value) {
  
  sta_percent_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Settings.Master.Item.ReviveAttributes.sta_percent)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Item
}  // namespace Master
}  // namespace Settings
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fSettings_2fMaster_2fItem_2fReviveAttributes_2eproto__INCLUDED
