// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/UseItemCaptureResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fUseItemCaptureResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fUseItemCaptureResponse_2eproto__INCLUDED

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
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemCaptureResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemCaptureResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fUseItemCaptureResponse_2eproto();

class UseItemCaptureResponse;

// ===================================================================

class UseItemCaptureResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.UseItemCaptureResponse) */ {
 public:
  UseItemCaptureResponse();
  virtual ~UseItemCaptureResponse();

  UseItemCaptureResponse(const UseItemCaptureResponse& from);

  inline UseItemCaptureResponse& operator=(const UseItemCaptureResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UseItemCaptureResponse& default_instance();

  void Swap(UseItemCaptureResponse* other);

  // implements Message ----------------------------------------------

  inline UseItemCaptureResponse* New() const { return New(NULL); }

  UseItemCaptureResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UseItemCaptureResponse& from);
  void MergeFrom(const UseItemCaptureResponse& from);
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
  void InternalSwap(UseItemCaptureResponse* other);
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

  // optional bool success = 1;
  void clear_success();
  static const int kSuccessFieldNumber = 1;
  bool success() const;
  void set_success(bool value);

  // optional double item_capture_mult = 2;
  void clear_item_capture_mult();
  static const int kItemCaptureMultFieldNumber = 2;
  double item_capture_mult() const;
  void set_item_capture_mult(double value);

  // optional double item_flee_mult = 3;
  void clear_item_flee_mult();
  static const int kItemFleeMultFieldNumber = 3;
  double item_flee_mult() const;
  void set_item_flee_mult(double value);

  // optional bool stop_movement = 4;
  void clear_stop_movement();
  static const int kStopMovementFieldNumber = 4;
  bool stop_movement() const;
  void set_stop_movement(bool value);

  // optional bool stop_attack = 5;
  void clear_stop_attack();
  static const int kStopAttackFieldNumber = 5;
  bool stop_attack() const;
  void set_stop_attack(bool value);

  // optional bool target_max = 6;
  void clear_target_max();
  static const int kTargetMaxFieldNumber = 6;
  bool target_max() const;
  void set_target_max(bool value);

  // optional bool target_slow = 7;
  void clear_target_slow();
  static const int kTargetSlowFieldNumber = 7;
  bool target_slow() const;
  void set_target_slow(bool value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.UseItemCaptureResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  double item_capture_mult_;
  double item_flee_mult_;
  bool success_;
  bool stop_movement_;
  bool stop_attack_;
  bool target_max_;
  bool target_slow_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemCaptureResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fUseItemCaptureResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fUseItemCaptureResponse_2eproto();

  void InitAsDefaultInstance();
  static UseItemCaptureResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// UseItemCaptureResponse

// optional bool success = 1;
inline void UseItemCaptureResponse::clear_success() {
  success_ = false;
}
inline bool UseItemCaptureResponse::success() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.UseItemCaptureResponse.success)
  return success_;
}
inline void UseItemCaptureResponse::set_success(bool value) {
  
  success_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.UseItemCaptureResponse.success)
}

// optional double item_capture_mult = 2;
inline void UseItemCaptureResponse::clear_item_capture_mult() {
  item_capture_mult_ = 0;
}
inline double UseItemCaptureResponse::item_capture_mult() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.UseItemCaptureResponse.item_capture_mult)
  return item_capture_mult_;
}
inline void UseItemCaptureResponse::set_item_capture_mult(double value) {
  
  item_capture_mult_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.UseItemCaptureResponse.item_capture_mult)
}

// optional double item_flee_mult = 3;
inline void UseItemCaptureResponse::clear_item_flee_mult() {
  item_flee_mult_ = 0;
}
inline double UseItemCaptureResponse::item_flee_mult() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.UseItemCaptureResponse.item_flee_mult)
  return item_flee_mult_;
}
inline void UseItemCaptureResponse::set_item_flee_mult(double value) {
  
  item_flee_mult_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.UseItemCaptureResponse.item_flee_mult)
}

// optional bool stop_movement = 4;
inline void UseItemCaptureResponse::clear_stop_movement() {
  stop_movement_ = false;
}
inline bool UseItemCaptureResponse::stop_movement() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.UseItemCaptureResponse.stop_movement)
  return stop_movement_;
}
inline void UseItemCaptureResponse::set_stop_movement(bool value) {
  
  stop_movement_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.UseItemCaptureResponse.stop_movement)
}

// optional bool stop_attack = 5;
inline void UseItemCaptureResponse::clear_stop_attack() {
  stop_attack_ = false;
}
inline bool UseItemCaptureResponse::stop_attack() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.UseItemCaptureResponse.stop_attack)
  return stop_attack_;
}
inline void UseItemCaptureResponse::set_stop_attack(bool value) {
  
  stop_attack_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.UseItemCaptureResponse.stop_attack)
}

// optional bool target_max = 6;
inline void UseItemCaptureResponse::clear_target_max() {
  target_max_ = false;
}
inline bool UseItemCaptureResponse::target_max() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.UseItemCaptureResponse.target_max)
  return target_max_;
}
inline void UseItemCaptureResponse::set_target_max(bool value) {
  
  target_max_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.UseItemCaptureResponse.target_max)
}

// optional bool target_slow = 7;
inline void UseItemCaptureResponse::clear_target_slow() {
  target_slow_ = false;
}
inline bool UseItemCaptureResponse::target_slow() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.UseItemCaptureResponse.target_slow)
  return target_slow_;
}
inline void UseItemCaptureResponse::set_target_slow(bool value) {
  
  target_slow_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.UseItemCaptureResponse.target_slow)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fUseItemCaptureResponse_2eproto__INCLUDED