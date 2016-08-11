// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Responses/GetDownloadUrlsResponse.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Responses/GetDownloadUrlsResponse.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Networking {
namespace Responses {

namespace {

const ::google::protobuf::Descriptor* GetDownloadUrlsResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GetDownloadUrlsResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Responses/GetDownloadUrlsResponse.proto");
  GOOGLE_CHECK(file != NULL);
  GetDownloadUrlsResponse_descriptor_ = file->message_type(0);
  static const int GetDownloadUrlsResponse_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetDownloadUrlsResponse, download_urls_),
  };
  GetDownloadUrlsResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      GetDownloadUrlsResponse_descriptor_,
      GetDownloadUrlsResponse::default_instance_,
      GetDownloadUrlsResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(GetDownloadUrlsResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetDownloadUrlsResponse, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GetDownloadUrlsResponse, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      GetDownloadUrlsResponse_descriptor_, &GetDownloadUrlsResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto() {
  delete GetDownloadUrlsResponse::default_instance_;
  delete GetDownloadUrlsResponse_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Data::protobuf_AddDesc_POGOProtos_2fData_2fDownloadUrlEntry_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n=POGOProtos/Networking/Responses/GetDow"
    "nloadUrlsResponse.proto\022\037POGOProtos.Netw"
    "orking.Responses\032&POGOProtos/Data/Downlo"
    "adUrlEntry.proto\"S\n\027GetDownloadUrlsRespo"
    "nse\0228\n\rdownload_urls\030\001 \003(\0132!.POGOProtos."
    "Data.DownloadUrlEntryb\006proto3", 229);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Responses/GetDownloadUrlsResponse.proto", &protobuf_RegisterTypes);
  GetDownloadUrlsResponse::default_instance_ = new GetDownloadUrlsResponse();
  GetDownloadUrlsResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GetDownloadUrlsResponse::kDownloadUrlsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GetDownloadUrlsResponse::GetDownloadUrlsResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
}

void GetDownloadUrlsResponse::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

GetDownloadUrlsResponse::GetDownloadUrlsResponse(const GetDownloadUrlsResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
}

void GetDownloadUrlsResponse::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
}

GetDownloadUrlsResponse::~GetDownloadUrlsResponse() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
  SharedDtor();
}

void GetDownloadUrlsResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void GetDownloadUrlsResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GetDownloadUrlsResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GetDownloadUrlsResponse_descriptor_;
}

const GetDownloadUrlsResponse& GetDownloadUrlsResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fResponses_2fGetDownloadUrlsResponse_2eproto();
  return *default_instance_;
}

GetDownloadUrlsResponse* GetDownloadUrlsResponse::default_instance_ = NULL;

GetDownloadUrlsResponse* GetDownloadUrlsResponse::New(::google::protobuf::Arena* arena) const {
  GetDownloadUrlsResponse* n = new GetDownloadUrlsResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GetDownloadUrlsResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
  download_urls_.Clear();
}

bool GetDownloadUrlsResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .POGOProtos.Data.DownloadUrlEntry download_urls = 1;
      case 1: {
        if (tag == 10) {
          DO_(input->IncrementRecursionDepth());
         parse_loop_download_urls:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_download_urls()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_loop_download_urls;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
  return false;
#undef DO_
}

void GetDownloadUrlsResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
  // repeated .POGOProtos.Data.DownloadUrlEntry download_urls = 1;
  for (unsigned int i = 0, n = this->download_urls_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->download_urls(i), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
}

::google::protobuf::uint8* GetDownloadUrlsResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
  // repeated .POGOProtos.Data.DownloadUrlEntry download_urls = 1;
  for (unsigned int i = 0, n = this->download_urls_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->download_urls(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
  return target;
}

int GetDownloadUrlsResponse::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
  int total_size = 0;

  // repeated .POGOProtos.Data.DownloadUrlEntry download_urls = 1;
  total_size += 1 * this->download_urls_size();
  for (int i = 0; i < this->download_urls_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->download_urls(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GetDownloadUrlsResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const GetDownloadUrlsResponse* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const GetDownloadUrlsResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
    MergeFrom(*source);
  }
}

void GetDownloadUrlsResponse::MergeFrom(const GetDownloadUrlsResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  download_urls_.MergeFrom(from.download_urls_);
}

void GetDownloadUrlsResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GetDownloadUrlsResponse::CopyFrom(const GetDownloadUrlsResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Responses.GetDownloadUrlsResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GetDownloadUrlsResponse::IsInitialized() const {

  return true;
}

void GetDownloadUrlsResponse::Swap(GetDownloadUrlsResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GetDownloadUrlsResponse::InternalSwap(GetDownloadUrlsResponse* other) {
  download_urls_.UnsafeArenaSwap(&other->download_urls_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GetDownloadUrlsResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GetDownloadUrlsResponse_descriptor_;
  metadata.reflection = GetDownloadUrlsResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GetDownloadUrlsResponse

// repeated .POGOProtos.Data.DownloadUrlEntry download_urls = 1;
int GetDownloadUrlsResponse::download_urls_size() const {
  return download_urls_.size();
}
void GetDownloadUrlsResponse::clear_download_urls() {
  download_urls_.Clear();
}
const ::POGOProtos::Data::DownloadUrlEntry& GetDownloadUrlsResponse::download_urls(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Responses.GetDownloadUrlsResponse.download_urls)
  return download_urls_.Get(index);
}
::POGOProtos::Data::DownloadUrlEntry* GetDownloadUrlsResponse::mutable_download_urls(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Responses.GetDownloadUrlsResponse.download_urls)
  return download_urls_.Mutable(index);
}
::POGOProtos::Data::DownloadUrlEntry* GetDownloadUrlsResponse::add_download_urls() {
  // @@protoc_insertion_point(field_add:POGOProtos.Networking.Responses.GetDownloadUrlsResponse.download_urls)
  return download_urls_.Add();
}
::google::protobuf::RepeatedPtrField< ::POGOProtos::Data::DownloadUrlEntry >*
GetDownloadUrlsResponse::mutable_download_urls() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Networking.Responses.GetDownloadUrlsResponse.download_urls)
  return &download_urls_;
}
const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Data::DownloadUrlEntry >&
GetDownloadUrlsResponse::download_urls() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Networking.Responses.GetDownloadUrlsResponse.download_urls)
  return download_urls_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Responses
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
