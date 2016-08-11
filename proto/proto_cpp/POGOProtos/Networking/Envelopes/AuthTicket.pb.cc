// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Envelopes/AuthTicket.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Envelopes/AuthTicket.pb.h"

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
namespace Envelopes {

namespace {

const ::google::protobuf::Descriptor* AuthTicket_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AuthTicket_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fEnvelopes_2fAuthTicket_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fEnvelopes_2fAuthTicket_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fEnvelopes_2fAuthTicket_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Envelopes/AuthTicket.proto");
  GOOGLE_CHECK(file != NULL);
  AuthTicket_descriptor_ = file->message_type(0);
  static const int AuthTicket_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthTicket, start_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthTicket, expire_timestamp_ms_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthTicket, end_),
  };
  AuthTicket_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AuthTicket_descriptor_,
      AuthTicket::default_instance_,
      AuthTicket_offsets_,
      -1,
      -1,
      -1,
      sizeof(AuthTicket),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthTicket, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthTicket, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fEnvelopes_2fAuthTicket_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AuthTicket_descriptor_, &AuthTicket::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fEnvelopes_2fAuthTicket_2eproto() {
  delete AuthTicket::default_instance_;
  delete AuthTicket_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fEnvelopes_2fAuthTicket_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fEnvelopes_2fAuthTicket_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n0POGOProtos/Networking/Envelopes/AuthTi"
    "cket.proto\022\037POGOProtos.Networking.Envelo"
    "pes\"E\n\nAuthTicket\022\r\n\005start\030\001 \001(\014\022\033\n\023expi"
    "re_timestamp_ms\030\002 \001(\004\022\013\n\003end\030\003 \001(\014b\006prot"
    "o3", 162);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Envelopes/AuthTicket.proto", &protobuf_RegisterTypes);
  AuthTicket::default_instance_ = new AuthTicket();
  AuthTicket::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fEnvelopes_2fAuthTicket_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fEnvelopes_2fAuthTicket_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fEnvelopes_2fAuthTicket_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fEnvelopes_2fAuthTicket_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fEnvelopes_2fAuthTicket_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AuthTicket::kStartFieldNumber;
const int AuthTicket::kExpireTimestampMsFieldNumber;
const int AuthTicket::kEndFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AuthTicket::AuthTicket()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Envelopes.AuthTicket)
}

void AuthTicket::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

AuthTicket::AuthTicket(const AuthTicket& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Envelopes.AuthTicket)
}

void AuthTicket::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  start_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  expire_timestamp_ms_ = GOOGLE_ULONGLONG(0);
  end_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

AuthTicket::~AuthTicket() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Envelopes.AuthTicket)
  SharedDtor();
}

void AuthTicket::SharedDtor() {
  start_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  end_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void AuthTicket::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AuthTicket::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AuthTicket_descriptor_;
}

const AuthTicket& AuthTicket::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fEnvelopes_2fAuthTicket_2eproto();
  return *default_instance_;
}

AuthTicket* AuthTicket::default_instance_ = NULL;

AuthTicket* AuthTicket::New(::google::protobuf::Arena* arena) const {
  AuthTicket* n = new AuthTicket;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AuthTicket::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Envelopes.AuthTicket)
  start_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  expire_timestamp_ms_ = GOOGLE_ULONGLONG(0);
  end_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool AuthTicket::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Envelopes.AuthTicket)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes start = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_start()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_expire_timestamp_ms;
        break;
      }

      // optional uint64 expire_timestamp_ms = 2;
      case 2: {
        if (tag == 16) {
         parse_expire_timestamp_ms:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &expire_timestamp_ms_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_end;
        break;
      }

      // optional bytes end = 3;
      case 3: {
        if (tag == 26) {
         parse_end:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_end()));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Envelopes.AuthTicket)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Envelopes.AuthTicket)
  return false;
#undef DO_
}

void AuthTicket::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Envelopes.AuthTicket)
  // optional bytes start = 1;
  if (this->start().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->start(), output);
  }

  // optional uint64 expire_timestamp_ms = 2;
  if (this->expire_timestamp_ms() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->expire_timestamp_ms(), output);
  }

  // optional bytes end = 3;
  if (this->end().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->end(), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Envelopes.AuthTicket)
}

::google::protobuf::uint8* AuthTicket::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Envelopes.AuthTicket)
  // optional bytes start = 1;
  if (this->start().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->start(), target);
  }

  // optional uint64 expire_timestamp_ms = 2;
  if (this->expire_timestamp_ms() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->expire_timestamp_ms(), target);
  }

  // optional bytes end = 3;
  if (this->end().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->end(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Envelopes.AuthTicket)
  return target;
}

int AuthTicket::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Envelopes.AuthTicket)
  int total_size = 0;

  // optional bytes start = 1;
  if (this->start().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->start());
  }

  // optional uint64 expire_timestamp_ms = 2;
  if (this->expire_timestamp_ms() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->expire_timestamp_ms());
  }

  // optional bytes end = 3;
  if (this->end().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->end());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AuthTicket::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Envelopes.AuthTicket)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const AuthTicket* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AuthTicket>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Envelopes.AuthTicket)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Envelopes.AuthTicket)
    MergeFrom(*source);
  }
}

void AuthTicket::MergeFrom(const AuthTicket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Envelopes.AuthTicket)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.start().size() > 0) {

    start_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.start_);
  }
  if (from.expire_timestamp_ms() != 0) {
    set_expire_timestamp_ms(from.expire_timestamp_ms());
  }
  if (from.end().size() > 0) {

    end_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.end_);
  }
}

void AuthTicket::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Envelopes.AuthTicket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AuthTicket::CopyFrom(const AuthTicket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Envelopes.AuthTicket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AuthTicket::IsInitialized() const {

  return true;
}

void AuthTicket::Swap(AuthTicket* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AuthTicket::InternalSwap(AuthTicket* other) {
  start_.Swap(&other->start_);
  std::swap(expire_timestamp_ms_, other->expire_timestamp_ms_);
  end_.Swap(&other->end_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AuthTicket::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AuthTicket_descriptor_;
  metadata.reflection = AuthTicket_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AuthTicket

// optional bytes start = 1;
void AuthTicket::clear_start() {
  start_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& AuthTicket::start() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Envelopes.AuthTicket.start)
  return start_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AuthTicket::set_start(const ::std::string& value) {
  
  start_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Envelopes.AuthTicket.start)
}
 void AuthTicket::set_start(const char* value) {
  
  start_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Envelopes.AuthTicket.start)
}
 void AuthTicket::set_start(const void* value, size_t size) {
  
  start_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Envelopes.AuthTicket.start)
}
 ::std::string* AuthTicket::mutable_start() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Envelopes.AuthTicket.start)
  return start_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* AuthTicket::release_start() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Envelopes.AuthTicket.start)
  
  return start_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AuthTicket::set_allocated_start(::std::string* start) {
  if (start != NULL) {
    
  } else {
    
  }
  start_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), start);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Envelopes.AuthTicket.start)
}

// optional uint64 expire_timestamp_ms = 2;
void AuthTicket::clear_expire_timestamp_ms() {
  expire_timestamp_ms_ = GOOGLE_ULONGLONG(0);
}
 ::google::protobuf::uint64 AuthTicket::expire_timestamp_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Envelopes.AuthTicket.expire_timestamp_ms)
  return expire_timestamp_ms_;
}
 void AuthTicket::set_expire_timestamp_ms(::google::protobuf::uint64 value) {
  
  expire_timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Envelopes.AuthTicket.expire_timestamp_ms)
}

// optional bytes end = 3;
void AuthTicket::clear_end() {
  end_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& AuthTicket::end() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Envelopes.AuthTicket.end)
  return end_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AuthTicket::set_end(const ::std::string& value) {
  
  end_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Envelopes.AuthTicket.end)
}
 void AuthTicket::set_end(const char* value) {
  
  end_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Envelopes.AuthTicket.end)
}
 void AuthTicket::set_end(const void* value, size_t size) {
  
  end_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Envelopes.AuthTicket.end)
}
 ::std::string* AuthTicket::mutable_end() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Envelopes.AuthTicket.end)
  return end_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* AuthTicket::release_end() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Envelopes.AuthTicket.end)
  
  return end_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AuthTicket::set_allocated_end(::std::string* end) {
  if (end != NULL) {
    
  } else {
    
  }
  end_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), end);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Envelopes.AuthTicket.end)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Envelopes
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
