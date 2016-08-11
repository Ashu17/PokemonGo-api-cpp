// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/SfidaActionLogResponse.proto

#ifndef PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fSfidaActionLogResponse_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fSfidaActionLogResponse_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "POGOProtos/Data/Logs/ActionLogEntry.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fSfidaActionLogResponse_2eproto();
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fSfidaActionLogResponse_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fSfidaActionLogResponse_2eproto();

class SfidaActionLogResponse;

enum SfidaActionLogResponse_Result {
  SfidaActionLogResponse_Result_UNSET = 0,
  SfidaActionLogResponse_Result_SUCCESS = 1,
  SfidaActionLogResponse_Result_SfidaActionLogResponse_Result_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  SfidaActionLogResponse_Result_SfidaActionLogResponse_Result_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool SfidaActionLogResponse_Result_IsValid(int value);
const SfidaActionLogResponse_Result SfidaActionLogResponse_Result_Result_MIN = SfidaActionLogResponse_Result_UNSET;
const SfidaActionLogResponse_Result SfidaActionLogResponse_Result_Result_MAX = SfidaActionLogResponse_Result_SUCCESS;
const int SfidaActionLogResponse_Result_Result_ARRAYSIZE = SfidaActionLogResponse_Result_Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* SfidaActionLogResponse_Result_descriptor();
inline const ::std::string& SfidaActionLogResponse_Result_Name(SfidaActionLogResponse_Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    SfidaActionLogResponse_Result_descriptor(), value);
}
inline bool SfidaActionLogResponse_Result_Parse(
    const ::std::string& name, SfidaActionLogResponse_Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SfidaActionLogResponse_Result>(
    SfidaActionLogResponse_Result_descriptor(), name, value);
}
// ===================================================================

class SfidaActionLogResponse : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Networking.Responses.SfidaActionLogResponse) */ {
 public:
  SfidaActionLogResponse();
  virtual ~SfidaActionLogResponse();

  SfidaActionLogResponse(const SfidaActionLogResponse& from);

  inline SfidaActionLogResponse& operator=(const SfidaActionLogResponse& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SfidaActionLogResponse& default_instance();

  void Swap(SfidaActionLogResponse* other);

  // implements Message ----------------------------------------------

  inline SfidaActionLogResponse* New() const { return New(NULL); }

  SfidaActionLogResponse* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SfidaActionLogResponse& from);
  void MergeFrom(const SfidaActionLogResponse& from);
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
  void InternalSwap(SfidaActionLogResponse* other);
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

  typedef SfidaActionLogResponse_Result Result;
  static const Result UNSET =
    SfidaActionLogResponse_Result_UNSET;
  static const Result SUCCESS =
    SfidaActionLogResponse_Result_SUCCESS;
  static inline bool Result_IsValid(int value) {
    return SfidaActionLogResponse_Result_IsValid(value);
  }
  static const Result Result_MIN =
    SfidaActionLogResponse_Result_Result_MIN;
  static const Result Result_MAX =
    SfidaActionLogResponse_Result_Result_MAX;
  static const int Result_ARRAYSIZE =
    SfidaActionLogResponse_Result_Result_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Result_descriptor() {
    return SfidaActionLogResponse_Result_descriptor();
  }
  static inline const ::std::string& Result_Name(Result value) {
    return SfidaActionLogResponse_Result_Name(value);
  }
  static inline bool Result_Parse(const ::std::string& name,
      Result* value) {
    return SfidaActionLogResponse_Result_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .POGOProtos.Networking.Responses.SfidaActionLogResponse.Result result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::POGOProtos::Networking::Responses::SfidaActionLogResponse_Result result() const;
  void set_result(::POGOProtos::Networking::Responses::SfidaActionLogResponse_Result value);

  // repeated .POGOProtos.Data.Logs.ActionLogEntry log_entries = 2;
  int log_entries_size() const;
  void clear_log_entries();
  static const int kLogEntriesFieldNumber = 2;
  const ::POGOProtos::Data::Logs::ActionLogEntry& log_entries(int index) const;
  ::POGOProtos::Data::Logs::ActionLogEntry* mutable_log_entries(int index);
  ::POGOProtos::Data::Logs::ActionLogEntry* add_log_entries();
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Data::Logs::ActionLogEntry >*
      mutable_log_entries();
  const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Data::Logs::ActionLogEntry >&
      log_entries() const;

  // @@protoc_insertion_point(class_scope:POGOProtos.Networking.Responses.SfidaActionLogResponse)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Data::Logs::ActionLogEntry > log_entries_;
  int result_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fSfidaActionLogResponse_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fSfidaActionLogResponse_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fSfidaActionLogResponse_2eproto();

  void InitAsDefaultInstance();
  static SfidaActionLogResponse* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SfidaActionLogResponse

// optional .POGOProtos.Networking.Responses.SfidaActionLogResponse.Result result = 1;
inline void SfidaActionLogResponse::clear_result() {
  result_ = 0;
}
inline ::POGOProtos::Networking::Responses::SfidaActionLogResponse_Result SfidaActionLogResponse::result() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.SfidaActionLogResponse.result)
  return static_cast< ::POGOProtos::Networking::Responses::SfidaActionLogResponse_Result >(result_);
}
inline void SfidaActionLogResponse::set_result(::POGOProtos::Networking::Responses::SfidaActionLogResponse_Result value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Responses.SfidaActionLogResponse.result)
}

// repeated .POGOProtos.Data.Logs.ActionLogEntry log_entries = 2;
inline int SfidaActionLogResponse::log_entries_size() const {
  return log_entries_.size();
}
inline void SfidaActionLogResponse::clear_log_entries() {
  log_entries_.Clear();
}
inline const ::POGOProtos::Data::Logs::ActionLogEntry& SfidaActionLogResponse::log_entries(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.SfidaActionLogResponse.log_entries)
  return log_entries_.Get(index);
}
inline ::POGOProtos::Data::Logs::ActionLogEntry* SfidaActionLogResponse::mutable_log_entries(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.SfidaActionLogResponse.log_entries)
  return log_entries_.Mutable(index);
}
inline ::POGOProtos::Data::Logs::ActionLogEntry* SfidaActionLogResponse::add_log_entries() {
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Responses.SfidaActionLogResponse.log_entries)
  return log_entries_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::POGOProtos::Data::Logs::ActionLogEntry >*
SfidaActionLogResponse::mutable_log_entries() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Responses.SfidaActionLogResponse.log_entries)
  return &log_entries_;
}
inline const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Data::Logs::ActionLogEntry >&
SfidaActionLogResponse::log_entries() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Responses.SfidaActionLogResponse.log_entries)
  return log_entries_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Networking::Responses::SfidaActionLogResponse_Result> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Networking::Responses::SfidaActionLogResponse_Result>() {
  return ::POGOProtos::Networking::Responses::SfidaActionLogResponse_Result_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fNetworking_2fResponses_2fSfidaActionLogResponse_2eproto__INCLUDED