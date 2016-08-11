// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/Messages/GetMapObjectsMessage.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetMapObjectsMessage_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetMapObjectsMessage_2eproto__INCLUDED

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
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetMapObjectsMessage_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetMapObjectsMessage_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetMapObjectsMessage_2eproto();

class GetMapObjectsMessage;

// ===================================================================

class GetMapObjectsMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Requests.Messages.GetMapObjectsMessage) */ {
 public:
  GetMapObjectsMessage();
  virtual ~GetMapObjectsMessage();

  GetMapObjectsMessage(const GetMapObjectsMessage& from);

  inline GetMapObjectsMessage& operator=(const GetMapObjectsMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GetMapObjectsMessage& default_instance();

  void Swap(GetMapObjectsMessage* other);

  // implements Message ----------------------------------------------

  inline GetMapObjectsMessage* New() const { return New(NULL); }

  GetMapObjectsMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GetMapObjectsMessage& from);
  void MergeFrom(const GetMapObjectsMessage& from);
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
  void InternalSwap(GetMapObjectsMessage* other);
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

  // repeated uint64 cell_id = 1 [packed = true];
  int cell_id_size() const;
  void clear_cell_id();
  static const int kCellIdFieldNumber = 1;
  ::google::protobuf::uint64 cell_id(int index) const;
  void set_cell_id(int index, ::google::protobuf::uint64 value);
  void add_cell_id(::google::protobuf::uint64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      cell_id() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_cell_id();

  // repeated int64 since_timestamp_ms = 2 [packed = true];
  int since_timestamp_ms_size() const;
  void clear_since_timestamp_ms();
  static const int kSinceTimestampMsFieldNumber = 2;
  ::google::protobuf::int64 since_timestamp_ms(int index) const;
  void set_since_timestamp_ms(int index, ::google::protobuf::int64 value);
  void add_since_timestamp_ms(::google::protobuf::int64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      since_timestamp_ms() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_since_timestamp_ms();

  // optional double latitude = 3;
  void clear_latitude();
  static const int kLatitudeFieldNumber = 3;
  double latitude() const;
  void set_latitude(double value);

  // optional double longitude = 4;
  void clear_longitude();
  static const int kLongitudeFieldNumber = 4;
  double longitude() const;
  void set_longitude(double value);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Requests.Messages.GetMapObjectsMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > cell_id_;
  mutable int _cell_id_cached_byte_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > since_timestamp_ms_;
  mutable int _since_timestamp_ms_cached_byte_size_;
  double latitude_;
  double longitude_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetMapObjectsMessage_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetMapObjectsMessage_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetMapObjectsMessage_2eproto();

  void InitAsDefaultInstance();
  static GetMapObjectsMessage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// GetMapObjectsMessage

// repeated uint64 cell_id = 1 [packed = true];
inline int GetMapObjectsMessage::cell_id_size() const {
  return cell_id_.size();
}
inline void GetMapObjectsMessage::clear_cell_id() {
  cell_id_.Clear();
}
inline ::google::protobuf::uint64 GetMapObjectsMessage::cell_id(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.GetMapObjectsMessage.cell_id)
  return cell_id_.Get(index);
}
inline void GetMapObjectsMessage::set_cell_id(int index, ::google::protobuf::uint64 value) {
  cell_id_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.GetMapObjectsMessage.cell_id)
}
inline void GetMapObjectsMessage::add_cell_id(::google::protobuf::uint64 value) {
  cell_id_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Requests.Messages.GetMapObjectsMessage.cell_id)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
GetMapObjectsMessage::cell_id() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Requests.Messages.GetMapObjectsMessage.cell_id)
  return cell_id_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
GetMapObjectsMessage::mutable_cell_id() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Requests.Messages.GetMapObjectsMessage.cell_id)
  return &cell_id_;
}

// repeated int64 since_timestamp_ms = 2 [packed = true];
inline int GetMapObjectsMessage::since_timestamp_ms_size() const {
  return since_timestamp_ms_.size();
}
inline void GetMapObjectsMessage::clear_since_timestamp_ms() {
  since_timestamp_ms_.Clear();
}
inline ::google::protobuf::int64 GetMapObjectsMessage::since_timestamp_ms(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.GetMapObjectsMessage.since_timestamp_ms)
  return since_timestamp_ms_.Get(index);
}
inline void GetMapObjectsMessage::set_since_timestamp_ms(int index, ::google::protobuf::int64 value) {
  since_timestamp_ms_.Set(index, value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.GetMapObjectsMessage.since_timestamp_ms)
}
inline void GetMapObjectsMessage::add_since_timestamp_ms(::google::protobuf::int64 value) {
  since_timestamp_ms_.Add(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Requests.Messages.GetMapObjectsMessage.since_timestamp_ms)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
GetMapObjectsMessage::since_timestamp_ms() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Requests.Messages.GetMapObjectsMessage.since_timestamp_ms)
  return since_timestamp_ms_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
GetMapObjectsMessage::mutable_since_timestamp_ms() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Requests.Messages.GetMapObjectsMessage.since_timestamp_ms)
  return &since_timestamp_ms_;
}

// optional double latitude = 3;
inline void GetMapObjectsMessage::clear_latitude() {
  latitude_ = 0;
}
inline double GetMapObjectsMessage::latitude() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.GetMapObjectsMessage.latitude)
  return latitude_;
}
inline void GetMapObjectsMessage::set_latitude(double value) {
  
  latitude_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.GetMapObjectsMessage.latitude)
}

// optional double longitude = 4;
inline void GetMapObjectsMessage::clear_longitude() {
  longitude_ = 0;
}
inline double GetMapObjectsMessage::longitude() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.GetMapObjectsMessage.longitude)
  return longitude_;
}
inline void GetMapObjectsMessage::set_longitude(double value) {
  
  longitude_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.GetMapObjectsMessage.longitude)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages
}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fGetMapObjectsMessage_2eproto__INCLUDED
