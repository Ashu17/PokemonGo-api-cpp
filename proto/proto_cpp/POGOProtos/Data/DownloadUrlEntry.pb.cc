// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Data/DownloadUrlEntry.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Data/DownloadUrlEntry.pb.h"

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
namespace Data {

namespace {

const ::google::protobuf::Descriptor* DownloadUrlEntry_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  DownloadUrlEntry_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fData_2fDownloadUrlEntry_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fData_2fDownloadUrlEntry_2eproto() {
  protobuf_AddDesc_POGOProtos_2fData_2fDownloadUrlEntry_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Data/DownloadUrlEntry.proto");
  GOOGLE_CHECK(file != NULL);
  DownloadUrlEntry_descriptor_ = file->message_type(0);
  static const int DownloadUrlEntry_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DownloadUrlEntry, asset_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DownloadUrlEntry, url_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DownloadUrlEntry, size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DownloadUrlEntry, checksum_),
  };
  DownloadUrlEntry_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      DownloadUrlEntry_descriptor_,
      DownloadUrlEntry::default_instance_,
      DownloadUrlEntry_offsets_,
      -1,
      -1,
      -1,
      sizeof(DownloadUrlEntry),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DownloadUrlEntry, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(DownloadUrlEntry, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fData_2fDownloadUrlEntry_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      DownloadUrlEntry_descriptor_, &DownloadUrlEntry::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fData_2fDownloadUrlEntry_2eproto() {
  delete DownloadUrlEntry::default_instance_;
  delete DownloadUrlEntry_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fData_2fDownloadUrlEntry_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fData_2fDownloadUrlEntry_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n&POGOProtos/Data/DownloadUrlEntry.proto"
    "\022\017POGOProtos.Data\"Q\n\020DownloadUrlEntry\022\020\n"
    "\010asset_id\030\001 \001(\t\022\013\n\003url\030\002 \001(\t\022\014\n\004size\030\003 \001"
    "(\005\022\020\n\010checksum\030\004 \001(\007b\006proto3", 148);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Data/DownloadUrlEntry.proto", &protobuf_RegisterTypes);
  DownloadUrlEntry::default_instance_ = new DownloadUrlEntry();
  DownloadUrlEntry::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fData_2fDownloadUrlEntry_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fData_2fDownloadUrlEntry_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fData_2fDownloadUrlEntry_2eproto() {
    protobuf_AddDesc_POGOProtos_2fData_2fDownloadUrlEntry_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fData_2fDownloadUrlEntry_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int DownloadUrlEntry::kAssetIdFieldNumber;
const int DownloadUrlEntry::kUrlFieldNumber;
const int DownloadUrlEntry::kSizeFieldNumber;
const int DownloadUrlEntry::kChecksumFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

DownloadUrlEntry::DownloadUrlEntry()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Data.DownloadUrlEntry)
}

void DownloadUrlEntry::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

DownloadUrlEntry::DownloadUrlEntry(const DownloadUrlEntry& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Data.DownloadUrlEntry)
}

void DownloadUrlEntry::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  asset_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  size_ = 0;
  checksum_ = 0u;
}

DownloadUrlEntry::~DownloadUrlEntry() {
  // @@protoc_insertion_point(destructor:POGOProtos.Data.DownloadUrlEntry)
  SharedDtor();
}

void DownloadUrlEntry::SharedDtor() {
  asset_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void DownloadUrlEntry::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* DownloadUrlEntry::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DownloadUrlEntry_descriptor_;
}

const DownloadUrlEntry& DownloadUrlEntry::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fData_2fDownloadUrlEntry_2eproto();
  return *default_instance_;
}

DownloadUrlEntry* DownloadUrlEntry::default_instance_ = NULL;

DownloadUrlEntry* DownloadUrlEntry::New(::google::protobuf::Arena* arena) const {
  DownloadUrlEntry* n = new DownloadUrlEntry;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void DownloadUrlEntry::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Data.DownloadUrlEntry)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(DownloadUrlEntry, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<DownloadUrlEntry*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(size_, checksum_);
  asset_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool DownloadUrlEntry::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Data.DownloadUrlEntry)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string asset_id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_asset_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->asset_id().data(), this->asset_id().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "POGOProtos.Data.DownloadUrlEntry.asset_id"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_url;
        break;
      }

      // optional string url = 2;
      case 2: {
        if (tag == 18) {
         parse_url:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_url()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->url().data(), this->url().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "POGOProtos.Data.DownloadUrlEntry.url"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_size;
        break;
      }

      // optional int32 size = 3;
      case 3: {
        if (tag == 24) {
         parse_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &size_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(37)) goto parse_checksum;
        break;
      }

      // optional fixed32 checksum = 4;
      case 4: {
        if (tag == 37) {
         parse_checksum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_FIXED32>(
                 input, &checksum_)));

        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Data.DownloadUrlEntry)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Data.DownloadUrlEntry)
  return false;
#undef DO_
}

void DownloadUrlEntry::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Data.DownloadUrlEntry)
  // optional string asset_id = 1;
  if (this->asset_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->asset_id().data(), this->asset_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Data.DownloadUrlEntry.asset_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->asset_id(), output);
  }

  // optional string url = 2;
  if (this->url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->url().data(), this->url().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Data.DownloadUrlEntry.url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->url(), output);
  }

  // optional int32 size = 3;
  if (this->size() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->size(), output);
  }

  // optional fixed32 checksum = 4;
  if (this->checksum() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFixed32(4, this->checksum(), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Data.DownloadUrlEntry)
}

::google::protobuf::uint8* DownloadUrlEntry::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Data.DownloadUrlEntry)
  // optional string asset_id = 1;
  if (this->asset_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->asset_id().data(), this->asset_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Data.DownloadUrlEntry.asset_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->asset_id(), target);
  }

  // optional string url = 2;
  if (this->url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->url().data(), this->url().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Data.DownloadUrlEntry.url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->url(), target);
  }

  // optional int32 size = 3;
  if (this->size() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->size(), target);
  }

  // optional fixed32 checksum = 4;
  if (this->checksum() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFixed32ToArray(4, this->checksum(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Data.DownloadUrlEntry)
  return target;
}

int DownloadUrlEntry::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Data.DownloadUrlEntry)
  int total_size = 0;

  // optional string asset_id = 1;
  if (this->asset_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->asset_id());
  }

  // optional string url = 2;
  if (this->url().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->url());
  }

  // optional int32 size = 3;
  if (this->size() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->size());
  }

  // optional fixed32 checksum = 4;
  if (this->checksum() != 0) {
    total_size += 1 + 4;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void DownloadUrlEntry::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Data.DownloadUrlEntry)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const DownloadUrlEntry* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const DownloadUrlEntry>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Data.DownloadUrlEntry)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Data.DownloadUrlEntry)
    MergeFrom(*source);
  }
}

void DownloadUrlEntry::MergeFrom(const DownloadUrlEntry& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Data.DownloadUrlEntry)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.asset_id().size() > 0) {

    asset_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.asset_id_);
  }
  if (from.url().size() > 0) {

    url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.url_);
  }
  if (from.size() != 0) {
    set_size(from.size());
  }
  if (from.checksum() != 0) {
    set_checksum(from.checksum());
  }
}

void DownloadUrlEntry::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Data.DownloadUrlEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void DownloadUrlEntry::CopyFrom(const DownloadUrlEntry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Data.DownloadUrlEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DownloadUrlEntry::IsInitialized() const {

  return true;
}

void DownloadUrlEntry::Swap(DownloadUrlEntry* other) {
  if (other == this) return;
  InternalSwap(other);
}
void DownloadUrlEntry::InternalSwap(DownloadUrlEntry* other) {
  asset_id_.Swap(&other->asset_id_);
  url_.Swap(&other->url_);
  std::swap(size_, other->size_);
  std::swap(checksum_, other->checksum_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata DownloadUrlEntry::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = DownloadUrlEntry_descriptor_;
  metadata.reflection = DownloadUrlEntry_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// DownloadUrlEntry

// optional string asset_id = 1;
void DownloadUrlEntry::clear_asset_id() {
  asset_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& DownloadUrlEntry::asset_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.DownloadUrlEntry.asset_id)
  return asset_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DownloadUrlEntry::set_asset_id(const ::std::string& value) {
  
  asset_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Data.DownloadUrlEntry.asset_id)
}
 void DownloadUrlEntry::set_asset_id(const char* value) {
  
  asset_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Data.DownloadUrlEntry.asset_id)
}
 void DownloadUrlEntry::set_asset_id(const char* value, size_t size) {
  
  asset_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Data.DownloadUrlEntry.asset_id)
}
 ::std::string* DownloadUrlEntry::mutable_asset_id() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Data.DownloadUrlEntry.asset_id)
  return asset_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* DownloadUrlEntry::release_asset_id() {
  // @@protoc_insertion_point(field_release:POGOProtos.Data.DownloadUrlEntry.asset_id)
  
  return asset_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DownloadUrlEntry::set_allocated_asset_id(::std::string* asset_id) {
  if (asset_id != NULL) {
    
  } else {
    
  }
  asset_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), asset_id);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Data.DownloadUrlEntry.asset_id)
}

// optional string url = 2;
void DownloadUrlEntry::clear_url() {
  url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& DownloadUrlEntry::url() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.DownloadUrlEntry.url)
  return url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DownloadUrlEntry::set_url(const ::std::string& value) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Data.DownloadUrlEntry.url)
}
 void DownloadUrlEntry::set_url(const char* value) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Data.DownloadUrlEntry.url)
}
 void DownloadUrlEntry::set_url(const char* value, size_t size) {
  
  url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Data.DownloadUrlEntry.url)
}
 ::std::string* DownloadUrlEntry::mutable_url() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Data.DownloadUrlEntry.url)
  return url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* DownloadUrlEntry::release_url() {
  // @@protoc_insertion_point(field_release:POGOProtos.Data.DownloadUrlEntry.url)
  
  return url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void DownloadUrlEntry::set_allocated_url(::std::string* url) {
  if (url != NULL) {
    
  } else {
    
  }
  url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Data.DownloadUrlEntry.url)
}

// optional int32 size = 3;
void DownloadUrlEntry::clear_size() {
  size_ = 0;
}
 ::google::protobuf::int32 DownloadUrlEntry::size() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.DownloadUrlEntry.size)
  return size_;
}
 void DownloadUrlEntry::set_size(::google::protobuf::int32 value) {
  
  size_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.DownloadUrlEntry.size)
}

// optional fixed32 checksum = 4;
void DownloadUrlEntry::clear_checksum() {
  checksum_ = 0u;
}
 ::google::protobuf::uint32 DownloadUrlEntry::checksum() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.DownloadUrlEntry.checksum)
  return checksum_;
}
 void DownloadUrlEntry::set_checksum(::google::protobuf::uint32 value) {
  
  checksum_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.DownloadUrlEntry.checksum)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Data
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
