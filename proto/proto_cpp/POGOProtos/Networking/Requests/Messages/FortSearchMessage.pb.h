// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/Messages/FortSearchMessage.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fFortSearchMessage_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fFortSearchMessage_2eproto__INCLUDED

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
namespace Requests {
namespace Messages {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fFortSearchMessage_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fFortSearchMessage_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fFortSearchMessage_2eproto();

class FortSearchMessage;

// ===================================================================

class FortSearchMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Requests.Messages.FortSearchMessage) */ {
 public:
  FortSearchMessage();
  virtual ~FortSearchMessage();

  FortSearchMessage(const FortSearchMessage& from);

  inline FortSearchMessage& operator=(const FortSearchMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FortSearchMessage& default_instance();

  void Swap(FortSearchMessage* other);

  // implements Message ----------------------------------------------

  inline FortSearchMessage* New() const { return New(NULL); }

  FortSearchMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FortSearchMessage& from);
  void MergeFrom(const FortSearchMessage& from);
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
  void InternalSwap(FortSearchMessage* other);
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

  // optional double player_latitude = 2;
  void clear_player_latitude();
  static const int kPlayerLatitudeFieldNumber = 2;
  double player_latitude() const;
  void set_player_latitude(double value);

  // optional double player_longitude = 3;
  void clear_player_longitude();
  static const int kPlayerLongitudeFieldNumber = 3;
  double player_longitude() const;
  void set_player_longitude(double value);

  // optional double fort_latitude = 4;
  void clear_fort_latitude();
  static const int kFortLatitudeFieldNumber = 4;
  double fort_latitude() const;
  void set_fort_latitude(double value);

  // optional double fort_longitude = 5;
  void clear_fort_longitude();
  static const int kFortLongitudeFieldNumber = 5;
  double fort_longitude() const;
  void set_fort_longitude(double value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Requests.Messages.FortSearchMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr fort_id_;
  double player_latitude_;
  double player_longitude_;
  double fort_latitude_;
  double fort_longitude_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fFortSearchMessage_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fFortSearchMessage_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fFortSearchMessage_2eproto();

  void InitAsDefaultInstance();
  static FortSearchMessage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// FortSearchMessage

// optional string fort_id = 1;
inline void FortSearchMessage::clear_fort_id() {
  fort_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& FortSearchMessage::fort_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.FortSearchMessage.fort_id)
  return fort_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FortSearchMessage::set_fort_id(const ::std::string& value) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.FortSearchMessage.fort_id)
}
inline void FortSearchMessage::set_fort_id(const char* value) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Requests.Messages.FortSearchMessage.fort_id)
}
inline void FortSearchMessage::set_fort_id(const char* value, size_t size) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Requests.Messages.FortSearchMessage.fort_id)
}
inline ::std::string* FortSearchMessage::mutable_fort_id() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Requests.Messages.FortSearchMessage.fort_id)
  return fort_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* FortSearchMessage::release_fort_id() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Requests.Messages.FortSearchMessage.fort_id)
  
  return fort_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void FortSearchMessage::set_allocated_fort_id(::std::string* fort_id) {
  if (fort_id != NULL) {
    
  } else {
    
  }
  fort_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), fort_id);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Requests.Messages.FortSearchMessage.fort_id)
}

// optional double player_latitude = 2;
inline void FortSearchMessage::clear_player_latitude() {
  player_latitude_ = 0;
}
inline double FortSearchMessage::player_latitude() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.FortSearchMessage.player_latitude)
  return player_latitude_;
}
inline void FortSearchMessage::set_player_latitude(double value) {
  
  player_latitude_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.FortSearchMessage.player_latitude)
}

// optional double player_longitude = 3;
inline void FortSearchMessage::clear_player_longitude() {
  player_longitude_ = 0;
}
inline double FortSearchMessage::player_longitude() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.FortSearchMessage.player_longitude)
  return player_longitude_;
}
inline void FortSearchMessage::set_player_longitude(double value) {
  
  player_longitude_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.FortSearchMessage.player_longitude)
}

// optional double fort_latitude = 4;
inline void FortSearchMessage::clear_fort_latitude() {
  fort_latitude_ = 0;
}
inline double FortSearchMessage::fort_latitude() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.FortSearchMessage.fort_latitude)
  return fort_latitude_;
}
inline void FortSearchMessage::set_fort_latitude(double value) {
  
  fort_latitude_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.FortSearchMessage.fort_latitude)
}

// optional double fort_longitude = 5;
inline void FortSearchMessage::clear_fort_longitude() {
  fort_longitude_ = 0;
}
inline double FortSearchMessage::fort_longitude() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.FortSearchMessage.fort_longitude)
  return fort_longitude_;
}
inline void FortSearchMessage::set_fort_longitude(double value) {
  
  fort_longitude_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.FortSearchMessage.fort_longitude)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages
}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fFortSearchMessage_2eproto__INCLUDED
