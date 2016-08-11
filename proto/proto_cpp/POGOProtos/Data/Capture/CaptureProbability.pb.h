// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Data/Capture/CaptureProbability.proto

#ifndef PROTOBUF_POGOProtos_2fData_2fCapture_2fCaptureProbability_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fData_2fCapture_2fCaptureProbability_2eproto__INCLUDED

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
#include "POGOProtos/Inventory/Item/ItemId.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Data {
namespace Capture {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fData_2fCapture_2fCaptureProbability_2eproto();
void protobuf_AssignDesc_POGOProtos_2fData_2fCapture_2fCaptureProbability_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fData_2fCapture_2fCaptureProbability_2eproto();

class CaptureProbability;

// ===================================================================

class CaptureProbability : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Data.Capture.CaptureProbability) */ {
 public:
  CaptureProbability();
  virtual ~CaptureProbability();

  CaptureProbability(const CaptureProbability& from);

  inline CaptureProbability& operator=(const CaptureProbability& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CaptureProbability& default_instance();

  void Swap(CaptureProbability* other);

  // implements Message ----------------------------------------------

  inline CaptureProbability* New() const { return New(NULL); }

  CaptureProbability* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CaptureProbability& from);
  void MergeFrom(const CaptureProbability& from);
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
  void InternalSwap(CaptureProbability* other);
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

  // repeated .POGOProtos.Inventory.Item.ItemId pokeball_type = 1 [packed = true];
  int pokeball_type_size() const;
  void clear_pokeball_type();
  static const int kPokeballTypeFieldNumber = 1;
  ::POGOProtos::Inventory::Item::ItemId pokeball_type(int index) const;
  void set_pokeball_type(int index, ::POGOProtos::Inventory::Item::ItemId value);
  void add_pokeball_type(::POGOProtos::Inventory::Item::ItemId value);
  const ::google::protobuf::RepeatedField<int>& pokeball_type() const;
  ::google::protobuf::RepeatedField<int>* mutable_pokeball_type();

  // repeated float capture_probability = 2 [packed = true];
  int capture_probability_size() const;
  void clear_capture_probability();
  static const int kCaptureProbabilityFieldNumber = 2;
  float capture_probability(int index) const;
  void set_capture_probability(int index, float value);
  void add_capture_probability(float value);
  const ::google::protobuf::RepeatedField< float >&
      capture_probability() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_capture_probability();

  // optional double reticle_difficulty_scale = 12;
  void clear_reticle_difficulty_scale();
  static const int kReticleDifficultyScaleFieldNumber = 12;
  double reticle_difficulty_scale() const;
  void set_reticle_difficulty_scale(double value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Data.Capture.CaptureProbability)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedField<int> pokeball_type_;
  mutable int _pokeball_type_cached_byte_size_;
  ::google::protobuf::RepeatedField< float > capture_probability_;
  mutable int _capture_probability_cached_byte_size_;
  double reticle_difficulty_scale_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fData_2fCapture_2fCaptureProbability_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fData_2fCapture_2fCaptureProbability_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fData_2fCapture_2fCaptureProbability_2eproto();

  void InitAsDefaultInstance();
  static CaptureProbability* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// CaptureProbability

// repeated .POGOProtos.Inventory.Item.ItemId pokeball_type = 1 [packed = true];
inline int CaptureProbability::pokeball_type_size() const {
  return pokeball_type_.size();
}
inline void CaptureProbability::clear_pokeball_type() {
  pokeball_type_.Clear();
}
inline ::POGOProtos::Inventory::Item::ItemId CaptureProbability::pokeball_type(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Capture.CaptureProbability.pokeball_type)
  return static_cast< ::POGOProtos::Inventory::Item::ItemId >(pokeball_type_.Get(index));
}
inline void CaptureProbability::set_pokeball_type(int index, ::POGOProtos::Inventory::Item::ItemId value) {
  pokeball_type_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Capture.CaptureProbability.pokeball_type)
}
inline void CaptureProbability::add_pokeball_type(::POGOProtos::Inventory::Item::ItemId value) {
  pokeball_type_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Data.Capture.CaptureProbability.pokeball_type)
}
inline const ::google::protobuf::RepeatedField<int>&
CaptureProbability::pokeball_type() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Data.Capture.CaptureProbability.pokeball_type)
  return pokeball_type_;
}
inline ::google::protobuf::RepeatedField<int>*
CaptureProbability::mutable_pokeball_type() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Data.Capture.CaptureProbability.pokeball_type)
  return &pokeball_type_;
}

// repeated float capture_probability = 2 [packed = true];
inline int CaptureProbability::capture_probability_size() const {
  return capture_probability_.size();
}
inline void CaptureProbability::clear_capture_probability() {
  capture_probability_.Clear();
}
inline float CaptureProbability::capture_probability(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Capture.CaptureProbability.capture_probability)
  return capture_probability_.Get(index);
}
inline void CaptureProbability::set_capture_probability(int index, float value) {
  capture_probability_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Capture.CaptureProbability.capture_probability)
}
inline void CaptureProbability::add_capture_probability(float value) {
  capture_probability_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Data.Capture.CaptureProbability.capture_probability)
}
inline const ::google::protobuf::RepeatedField< float >&
CaptureProbability::capture_probability() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Data.Capture.CaptureProbability.capture_probability)
  return capture_probability_;
}
inline ::google::protobuf::RepeatedField< float >*
CaptureProbability::mutable_capture_probability() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Data.Capture.CaptureProbability.capture_probability)
  return &capture_probability_;
}

// optional double reticle_difficulty_scale = 12;
inline void CaptureProbability::clear_reticle_difficulty_scale() {
  reticle_difficulty_scale_ = 0;
}
inline double CaptureProbability::reticle_difficulty_scale() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Capture.CaptureProbability.reticle_difficulty_scale)
  return reticle_difficulty_scale_;
}
inline void CaptureProbability::set_reticle_difficulty_scale(double value) {
  
  reticle_difficulty_scale_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Capture.CaptureProbability.reticle_difficulty_scale)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Capture
}  // namespace Data
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fData_2fCapture_2fCaptureProbability_2eproto__INCLUDED