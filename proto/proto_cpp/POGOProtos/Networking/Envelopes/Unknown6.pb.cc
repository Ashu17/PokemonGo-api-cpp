// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Envelopes/Unknown6.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Envelopes/Unknown6.pb.h"

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

const ::google::protobuf::Descriptor* Unknown6_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Unknown6_reflection_ = NULL;
const ::google::protobuf::Descriptor* Unknown6_Unknown2_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Unknown6_Unknown2_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Envelopes/Unknown6.proto");
  GOOGLE_CHECK(file != NULL);
  Unknown6_descriptor_ = file->message_type(0);
  static const int Unknown6_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Unknown6, request_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Unknown6, unknown2_),
  };
  Unknown6_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Unknown6_descriptor_,
      Unknown6::default_instance_,
      Unknown6_offsets_,
      -1,
      -1,
      -1,
      sizeof(Unknown6),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Unknown6, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Unknown6, _is_default_instance_));
  Unknown6_Unknown2_descriptor_ = Unknown6_descriptor_->nested_type(0);
  static const int Unknown6_Unknown2_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Unknown6_Unknown2, encrypted_signature_),
  };
  Unknown6_Unknown2_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Unknown6_Unknown2_descriptor_,
      Unknown6_Unknown2::default_instance_,
      Unknown6_Unknown2_offsets_,
      -1,
      -1,
      -1,
      sizeof(Unknown6_Unknown2),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Unknown6_Unknown2, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Unknown6_Unknown2, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Unknown6_descriptor_, &Unknown6::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Unknown6_Unknown2_descriptor_, &Unknown6_Unknown2::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto() {
  delete Unknown6::default_instance_;
  delete Unknown6_reflection_;
  delete Unknown6_Unknown2::default_instance_;
  delete Unknown6_Unknown2_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n.POGOProtos/Networking/Envelopes/Unknow"
    "n6.proto\022\037POGOProtos.Networking.Envelope"
    "s\"\217\001\n\010Unknown6\022\024\n\014request_type\030\001 \001(\005\022D\n\010"
    "unknown2\030\002 \001(\01322.POGOProtos.Networking.E"
    "nvelopes.Unknown6.Unknown2\032\'\n\010Unknown2\022\033"
    "\n\023encrypted_signature\030\001 \001(\014b\006proto3", 235);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Envelopes/Unknown6.proto", &protobuf_RegisterTypes);
  Unknown6::default_instance_ = new Unknown6();
  Unknown6_Unknown2::default_instance_ = new Unknown6_Unknown2();
  Unknown6::default_instance_->InitAsDefaultInstance();
  Unknown6_Unknown2::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Unknown6_Unknown2::kEncryptedSignatureFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Unknown6_Unknown2::Unknown6_Unknown2()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
}

void Unknown6_Unknown2::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Unknown6_Unknown2::Unknown6_Unknown2(const Unknown6_Unknown2& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
}

void Unknown6_Unknown2::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  encrypted_signature_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Unknown6_Unknown2::~Unknown6_Unknown2() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
  SharedDtor();
}

void Unknown6_Unknown2::SharedDtor() {
  encrypted_signature_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Unknown6_Unknown2::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Unknown6_Unknown2::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Unknown6_Unknown2_descriptor_;
}

const Unknown6_Unknown2& Unknown6_Unknown2::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto();
  return *default_instance_;
}

Unknown6_Unknown2* Unknown6_Unknown2::default_instance_ = NULL;

Unknown6_Unknown2* Unknown6_Unknown2::New(::google::protobuf::Arena* arena) const {
  Unknown6_Unknown2* n = new Unknown6_Unknown2;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Unknown6_Unknown2::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
  encrypted_signature_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool Unknown6_Unknown2::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bytes encrypted_signature = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_encrypted_signature()));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
  return false;
#undef DO_
}

void Unknown6_Unknown2::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
  // optional bytes encrypted_signature = 1;
  if (this->encrypted_signature().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->encrypted_signature(), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
}

::google::protobuf::uint8* Unknown6_Unknown2::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
  // optional bytes encrypted_signature = 1;
  if (this->encrypted_signature().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->encrypted_signature(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
  return target;
}

int Unknown6_Unknown2::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
  int total_size = 0;

  // optional bytes encrypted_signature = 1;
  if (this->encrypted_signature().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->encrypted_signature());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Unknown6_Unknown2::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Unknown6_Unknown2* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Unknown6_Unknown2>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
    MergeFrom(*source);
  }
}

void Unknown6_Unknown2::MergeFrom(const Unknown6_Unknown2& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.encrypted_signature().size() > 0) {

    encrypted_signature_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.encrypted_signature_);
  }
}

void Unknown6_Unknown2::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Unknown6_Unknown2::CopyFrom(const Unknown6_Unknown2& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Envelopes.Unknown6.Unknown2)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Unknown6_Unknown2::IsInitialized() const {

  return true;
}

void Unknown6_Unknown2::Swap(Unknown6_Unknown2* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Unknown6_Unknown2::InternalSwap(Unknown6_Unknown2* other) {
  encrypted_signature_.Swap(&other->encrypted_signature_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Unknown6_Unknown2::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Unknown6_Unknown2_descriptor_;
  metadata.reflection = Unknown6_Unknown2_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Unknown6::kRequestTypeFieldNumber;
const int Unknown6::kUnknown2FieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Unknown6::Unknown6()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Envelopes.Unknown6)
}

void Unknown6::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  unknown2_ = const_cast< ::POGOProtos::Networking::Envelopes::Unknown6_Unknown2*>(&::POGOProtos::Networking::Envelopes::Unknown6_Unknown2::default_instance());
}

Unknown6::Unknown6(const Unknown6& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Envelopes.Unknown6)
}

void Unknown6::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  request_type_ = 0;
  unknown2_ = NULL;
}

Unknown6::~Unknown6() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Envelopes.Unknown6)
  SharedDtor();
}

void Unknown6::SharedDtor() {
  if (this != default_instance_) {
    delete unknown2_;
  }
}

void Unknown6::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Unknown6::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Unknown6_descriptor_;
}

const Unknown6& Unknown6::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fEnvelopes_2fUnknown6_2eproto();
  return *default_instance_;
}

Unknown6* Unknown6::default_instance_ = NULL;

Unknown6* Unknown6::New(::google::protobuf::Arena* arena) const {
  Unknown6* n = new Unknown6;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Unknown6::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Envelopes.Unknown6)
  request_type_ = 0;
  if (GetArenaNoVirtual() == NULL && unknown2_ != NULL) delete unknown2_;
  unknown2_ = NULL;
}

bool Unknown6::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Envelopes.Unknown6)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 request_type = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &request_type_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_unknown2;
        break;
      }

      // optional .POGOProtos.Networking.Envelopes.Unknown6.Unknown2 unknown2 = 2;
      case 2: {
        if (tag == 18) {
         parse_unknown2:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_unknown2()));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Envelopes.Unknown6)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Envelopes.Unknown6)
  return false;
#undef DO_
}

void Unknown6::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Envelopes.Unknown6)
  // optional int32 request_type = 1;
  if (this->request_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->request_type(), output);
  }

  // optional .POGOProtos.Networking.Envelopes.Unknown6.Unknown2 unknown2 = 2;
  if (this->has_unknown2()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->unknown2_, output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Envelopes.Unknown6)
}

::google::protobuf::uint8* Unknown6::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Envelopes.Unknown6)
  // optional int32 request_type = 1;
  if (this->request_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->request_type(), target);
  }

  // optional .POGOProtos.Networking.Envelopes.Unknown6.Unknown2 unknown2 = 2;
  if (this->has_unknown2()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->unknown2_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Envelopes.Unknown6)
  return target;
}

int Unknown6::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Envelopes.Unknown6)
  int total_size = 0;

  // optional int32 request_type = 1;
  if (this->request_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->request_type());
  }

  // optional .POGOProtos.Networking.Envelopes.Unknown6.Unknown2 unknown2 = 2;
  if (this->has_unknown2()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->unknown2_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Unknown6::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Envelopes.Unknown6)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const Unknown6* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Unknown6>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Envelopes.Unknown6)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Envelopes.Unknown6)
    MergeFrom(*source);
  }
}

void Unknown6::MergeFrom(const Unknown6& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Envelopes.Unknown6)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.request_type() != 0) {
    set_request_type(from.request_type());
  }
  if (from.has_unknown2()) {
    mutable_unknown2()->::POGOProtos::Networking::Envelopes::Unknown6_Unknown2::MergeFrom(from.unknown2());
  }
}

void Unknown6::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Envelopes.Unknown6)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Unknown6::CopyFrom(const Unknown6& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Envelopes.Unknown6)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Unknown6::IsInitialized() const {

  return true;
}

void Unknown6::Swap(Unknown6* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Unknown6::InternalSwap(Unknown6* other) {
  std::swap(request_type_, other->request_type_);
  std::swap(unknown2_, other->unknown2_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Unknown6::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Unknown6_descriptor_;
  metadata.reflection = Unknown6_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Unknown6_Unknown2

// optional bytes encrypted_signature = 1;
void Unknown6_Unknown2::clear_encrypted_signature() {
  encrypted_signature_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Unknown6_Unknown2::encrypted_signature() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Envelopes.Unknown6.Unknown2.encrypted_signature)
  return encrypted_signature_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Unknown6_Unknown2::set_encrypted_signature(const ::std::string& value) {
  
  encrypted_signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Envelopes.Unknown6.Unknown2.encrypted_signature)
}
 void Unknown6_Unknown2::set_encrypted_signature(const char* value) {
  
  encrypted_signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Envelopes.Unknown6.Unknown2.encrypted_signature)
}
 void Unknown6_Unknown2::set_encrypted_signature(const void* value, size_t size) {
  
  encrypted_signature_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Envelopes.Unknown6.Unknown2.encrypted_signature)
}
 ::std::string* Unknown6_Unknown2::mutable_encrypted_signature() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Envelopes.Unknown6.Unknown2.encrypted_signature)
  return encrypted_signature_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Unknown6_Unknown2::release_encrypted_signature() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Envelopes.Unknown6.Unknown2.encrypted_signature)
  
  return encrypted_signature_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Unknown6_Unknown2::set_allocated_encrypted_signature(::std::string* encrypted_signature) {
  if (encrypted_signature != NULL) {
    
  } else {
    
  }
  encrypted_signature_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), encrypted_signature);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Envelopes.Unknown6.Unknown2.encrypted_signature)
}

// -------------------------------------------------------------------

// Unknown6

// optional int32 request_type = 1;
void Unknown6::clear_request_type() {
  request_type_ = 0;
}
 ::google::protobuf::int32 Unknown6::request_type() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Envelopes.Unknown6.request_type)
  return request_type_;
}
 void Unknown6::set_request_type(::google::protobuf::int32 value) {
  
  request_type_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Envelopes.Unknown6.request_type)
}

// optional .POGOProtos.Networking.Envelopes.Unknown6.Unknown2 unknown2 = 2;
bool Unknown6::has_unknown2() const {
  return !_is_default_instance_ && unknown2_ != NULL;
}
void Unknown6::clear_unknown2() {
  if (GetArenaNoVirtual() == NULL && unknown2_ != NULL) delete unknown2_;
  unknown2_ = NULL;
}
const ::POGOProtos::Networking::Envelopes::Unknown6_Unknown2& Unknown6::unknown2() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Envelopes.Unknown6.unknown2)
  return unknown2_ != NULL ? *unknown2_ : *default_instance_->unknown2_;
}
::POGOProtos::Networking::Envelopes::Unknown6_Unknown2* Unknown6::mutable_unknown2() {
  
  if (unknown2_ == NULL) {
    unknown2_ = new ::POGOProtos::Networking::Envelopes::Unknown6_Unknown2;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Envelopes.Unknown6.unknown2)
  return unknown2_;
}
::POGOProtos::Networking::Envelopes::Unknown6_Unknown2* Unknown6::release_unknown2() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Envelopes.Unknown6.unknown2)
  
  ::POGOProtos::Networking::Envelopes::Unknown6_Unknown2* temp = unknown2_;
  unknown2_ = NULL;
  return temp;
}
void Unknown6::set_allocated_unknown2(::POGOProtos::Networking::Envelopes::Unknown6_Unknown2* unknown2) {
  delete unknown2_;
  unknown2_ = unknown2;
  if (unknown2) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Envelopes.Unknown6.unknown2)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Envelopes
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)
