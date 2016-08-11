// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/GetDownloadUrlsResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto__INCLUDED

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
#include "POGOProtos/Data/DownloadUrlEntry.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto();

class GetDownloadUrlsResponse;

// ===================================================================

class GetDownloadUrlsResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.GetDownloadUrlsResponse) */ {
 public:
  GetDownloadUrlsResponse();
  virtual ~GetDownloadUrlsResponse();

  GetDownloadUrlsResponse(const GetDownloadUrlsResponse& from);

  inline GetDownloadUrlsResponse& operator=(const GetDownloadUrlsResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GetDownloadUrlsResponse& default_instance();

  void Swap(GetDownloadUrlsResponse* other);

  // implements Message ----------------------------------------------

  inline GetDownloadUrlsResponse* New() const { return New(NULL); }

  GetDownloadUrlsResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GetDownloadUrlsResponse& from);
  void MergeFrom(const GetDownloadUrlsResponse& from);
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
  void InternalSwap(GetDownloadUrlsResponse* other);
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

  // repeated .POGOProtos.Data.DownloadUrlEntry download_urls = 1;
  int download_urls_size() const;
  void clear_download_urls();
  static const int kDownloadUrlsFieldNumber = 1;
  const ::POGOProtos::Data::DownloadUrlEntry& download_urls(int index) const;
  ::POGOProtos::Data::DownloadUrlEntry* mutable_download_urls(int index);
  ::POGOProtos::Data::DownloadUrlEntry* add_download_urls();
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Data::DownloadUrlEntry >*
      mutable_download_urls();
  const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Data::DownloadUrlEntry >&
      download_urls() const;

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Data::DownloadUrlEntry > download_urls_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto();

  void InitAsDefaultInstance();
  static GetDownloadUrlsResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// GetDownloadUrlsResponse

// repeated .POGOProtos.Data.DownloadUrlEntry download_urls = 1;
inline int GetDownloadUrlsResponse::download_urls_size() const {
  return download_urls_.size();
}
inline void GetDownloadUrlsResponse::clear_download_urls() {
  download_urls_.Clear();
}
inline const ::POGOProtos::Data::DownloadUrlEntry& GetDownloadUrlsResponse::download_urls(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.GetDownloadUrlsResponse.download_urls)
  return download_urls_.Get(index);
}
inline ::POGOProtos::Data::DownloadUrlEntry* GetDownloadUrlsResponse::mutable_download_urls(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.GetDownloadUrlsResponse.download_urls)
  return download_urls_.Mutable(index);
}
inline ::POGOProtos::Data::DownloadUrlEntry* GetDownloadUrlsResponse::add_download_urls() {
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Responses.GetDownloadUrlsResponse.download_urls)
  return download_urls_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::POGOProtos::Data::DownloadUrlEntry >*
GetDownloadUrlsResponse::mutable_download_urls() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Responses.GetDownloadUrlsResponse.download_urls)
  return &download_urls_;
}
inline const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Data::DownloadUrlEntry >&
GetDownloadUrlsResponse::download_urls() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Responses.GetDownloadUrlsResponse.download_urls)
  return download_urls_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto__INCLUDED