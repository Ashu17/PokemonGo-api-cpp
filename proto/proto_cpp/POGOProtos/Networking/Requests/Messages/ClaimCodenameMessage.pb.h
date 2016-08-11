// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/Messages/ClaimCodenameMessage.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fClaimCodenameMessage_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fClaimCodenameMessage_2eproto__INCLUDED

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
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fClaimCodenameMessage_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fClaimCodenameMessage_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fClaimCodenameMessage_2eproto();

class ClaimCodenameMessage;

// ===================================================================

class ClaimCodenameMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Requests.Messages.ClaimCodenameMessage) */ {
 public:
  ClaimCodenameMessage();
  virtual ~ClaimCodenameMessage();

  ClaimCodenameMessage(const ClaimCodenameMessage& from);

  inline ClaimCodenameMessage& operator=(const ClaimCodenameMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ClaimCodenameMessage& default_instance();

  void Swap(ClaimCodenameMessage* other);

  // implements Message ----------------------------------------------

  inline ClaimCodenameMessage* New() const { return New(NULL); }

  ClaimCodenameMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ClaimCodenameMessage& from);
  void MergeFrom(const ClaimCodenameMessage& from);
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
  void InternalSwap(ClaimCodenameMessage* other);
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

  // optional string codename = 1;
  void clear_codename();
  static const int kCodenameFieldNumber = 1;
  const ::std::string& codename() const;
  void set_codename(const ::std::string& value);
  void set_codename(const char* value);
  void set_codename(const char* value, size_t size);
  ::std::string* mutable_codename();
  ::std::string* release_codename();
  void set_allocated_codename(::std::string* codename);

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Requests.Messages.ClaimCodenameMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr codename_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fClaimCodenameMessage_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fClaimCodenameMessage_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fClaimCodenameMessage_2eproto();

  void InitAsDefaultInstance();
  static ClaimCodenameMessage* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ClaimCodenameMessage

// optional string codename = 1;
inline void ClaimCodenameMessage::clear_codename() {
  codename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ClaimCodenameMessage::codename() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.ClaimCodenameMessage.codename)
  return codename_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClaimCodenameMessage::set_codename(const ::std::string& value) {
  
  codename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.ClaimCodenameMessage.codename)
}
inline void ClaimCodenameMessage::set_codename(const char* value) {
  
  codename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Requests.Messages.ClaimCodenameMessage.codename)
}
inline void ClaimCodenameMessage::set_codename(const char* value, size_t size) {
  
  codename_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Requests.Messages.ClaimCodenameMessage.codename)
}
inline ::std::string* ClaimCodenameMessage::mutable_codename() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Requests.Messages.ClaimCodenameMessage.codename)
  return codename_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ClaimCodenameMessage::release_codename() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Requests.Messages.ClaimCodenameMessage.codename)
  
  return codename_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ClaimCodenameMessage::set_allocated_codename(::std::string* codename) {
  if (codename != NULL) {
    
  } else {
    
  }
  codename_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), codename);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Requests.Messages.ClaimCodenameMessage.codename)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages
}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fRequests_2fMessages_2fClaimCodenameMessage_2eproto__INCLUDED
