// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/Request.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fRequest_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fRequest_2eproto__INCLUDED

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
#include "POGOProtos/Networking/Requests/RequestType.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Requests {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fRequest_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fRequest_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fRequest_2eproto();

class Request;

// ===================================================================

class Request : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Requests.Request) */ {
 public:
  Request();
  virtual ~Request();

  Request(const Request& from);

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Request& default_instance();

  void Swap(Request* other);

  // implements Message ----------------------------------------------

  inline Request* New() const { return New(NULL); }

  Request* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
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
  void InternalSwap(Request* other);
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

  // optional .POGOProtos.Networking.Requests.RequestType request_type = 1;
  void clear_request_type();
  static const int kRequestTypeFieldNumber = 1;
  ::POGOProtos::Networking::Requests::RequestType request_type() const;
  void set_request_type(::POGOProtos::Networking::Requests::RequestType value);

  // optional bytes request_message = 2;
  void clear_request_message();
  static const int kRequestMessageFieldNumber = 2;
  const ::std::string& request_message() const;
  void set_request_message(const ::std::string& value);
  void set_request_message(const char* value);
  void set_request_message(const void* value, size_t size);
  ::std::string* mutable_request_message();
  ::std::string* release_request_message();
  void set_allocated_request_message(::std::string* request_message);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Requests.Request)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr request_message_;
  int request_type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fRequest_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fRequest_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fRequest_2eproto();

  void InitAsDefaultInstance();
  static Request* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Request

// optional .POGOProtos.Networking.Requests.RequestType request_type = 1;
inline void Request::clear_request_type() {
  request_type_ = 0;
}
inline ::POGOProtos::Networking::Requests::RequestType Request::request_type() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Request.request_type)
  return static_cast< ::POGOProtos::Networking::Requests::RequestType >(request_type_);
}
inline void Request::set_request_type(::POGOProtos::Networking::Requests::RequestType value) {
  
  request_type_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Request.request_type)
}

// optional bytes request_message = 2;
inline void Request::clear_request_message() {
  request_message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& Request::request_message() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Request.request_message)
  return request_message_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_request_message(const ::std::string& value) {
  
  request_message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Request.request_message)
}
inline void Request::set_request_message(const char* value) {
  
  request_message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Requests.Request.request_message)
}
inline void Request::set_request_message(const void* value, size_t size) {
  
  request_message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Requests.Request.request_message)
}
inline ::std::string* Request::mutable_request_message() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Requests.Request.request_message)
  return request_message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Request::release_request_message() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Requests.Request.request_message)
  
  return request_message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Request::set_allocated_request_message(::std::string* request_message) {
  if (request_message != NULL) {
    
  } else {
    
  }
  request_message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), request_message);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Requests.Request.request_message)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fRequest_2eproto__INCLUDED
