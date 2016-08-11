// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/Messages/SetContactSettingsMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Requests/Messages/SetContactSettingsMessage.pb.h"

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
namespace Requests {
namespace Messages {

namespace {

const ::google::protobuf::Descriptor* SetContactSettingsMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SetContactSettingsMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetContactSettingsMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetContactSettingsMessage_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetContactSettingsMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Requests/Messages/SetContactSettingsMessage.proto");
  GOOGLE_CHECK(file != NULL);
  SetContactSettingsMessage_descriptor_ = file->message_type(0);
  static const int SetContactSettingsMessage_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SetContactSettingsMessage, contact_settings_),
  };
  SetContactSettingsMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SetContactSettingsMessage_descriptor_,
      SetContactSettingsMessage::default_instance_,
      SetContactSettingsMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(SetContactSettingsMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SetContactSettingsMessage, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SetContactSettingsMessage, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetContactSettingsMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SetContactSettingsMessage_descriptor_, &SetContactSettingsMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetContactSettingsMessage_2eproto() {
  delete SetContactSettingsMessage::default_instance_;
  delete SetContactSettingsMessage_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetContactSettingsMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetContactSettingsMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Data::Player::protobuf_AddDesc_POGOProtos_2fData_2fPlayer_2fContactSettings_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nGPOGOProtos/Networking/Requests/Message"
    "s/SetContactSettingsMessage.proto\022\'POGOP"
    "rotos.Networking.Requests.Messages\032,POGO"
    "Protos/Data/Player/ContactSettings.proto"
    "\"^\n\031SetContactSettingsMessage\022A\n\020contact"
    "_settings\030\001 \001(\0132\'.POGOProtos.Data.Player"
    ".ContactSettingsb\006proto3", 264);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Requests/Messages/SetContactSettingsMessage.proto", &protobuf_RegisterTypes);
  SetContactSettingsMessage::default_instance_ = new SetContactSettingsMessage();
  SetContactSettingsMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetContactSettingsMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetContactSettingsMessage_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetContactSettingsMessage_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetContactSettingsMessage_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetContactSettingsMessage_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SetContactSettingsMessage::kContactSettingsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SetContactSettingsMessage::SetContactSettingsMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
}

void SetContactSettingsMessage::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  contact_settings_ = const_cast< ::POGOProtos::Data::Player::ContactSettings*>(&::POGOProtos::Data::Player::ContactSettings::default_instance());
}

SetContactSettingsMessage::SetContactSettingsMessage(const SetContactSettingsMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
}

void SetContactSettingsMessage::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  contact_settings_ = NULL;
}

SetContactSettingsMessage::~SetContactSettingsMessage() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
  SharedDtor();
}

void SetContactSettingsMessage::SharedDtor() {
  if (this != default_instance_) {
    delete contact_settings_;
  }
}

void SetContactSettingsMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SetContactSettingsMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SetContactSettingsMessage_descriptor_;
}

const SetContactSettingsMessage& SetContactSettingsMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fSetContactSettingsMessage_2eproto();
  return *default_instance_;
}

SetContactSettingsMessage* SetContactSettingsMessage::default_instance_ = NULL;

SetContactSettingsMessage* SetContactSettingsMessage::New(::google::protobuf::Arena* arena) const {
  SetContactSettingsMessage* n = new SetContactSettingsMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SetContactSettingsMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
  if (GetArenaNoVirtual() == NULL && contact_settings_ != NULL) delete contact_settings_;
  contact_settings_ = NULL;
}

bool SetContactSettingsMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .POGOProtos.Data.Player.ContactSettings contact_settings = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_contact_settings()));
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
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
  return false;
#undef DO_
}

void SetContactSettingsMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
  // optional .POGOProtos.Data.Player.ContactSettings contact_settings = 1;
  if (this->has_contact_settings()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->contact_settings_, output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
}

::google::protobuf::uint8* SetContactSettingsMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
  // optional .POGOProtos.Data.Player.ContactSettings contact_settings = 1;
  if (this->has_contact_settings()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->contact_settings_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
  return target;
}

int SetContactSettingsMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
  int total_size = 0;

  // optional .POGOProtos.Data.Player.ContactSettings contact_settings = 1;
  if (this->has_contact_settings()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->contact_settings_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SetContactSettingsMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const SetContactSettingsMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SetContactSettingsMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
    MergeFrom(*source);
  }
}

void SetContactSettingsMessage::MergeFrom(const SetContactSettingsMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.has_contact_settings()) {
    mutable_contact_settings()->::POGOProtos::Data::Player::ContactSettings::MergeFrom(from.contact_settings());
  }
}

void SetContactSettingsMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SetContactSettingsMessage::CopyFrom(const SetContactSettingsMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SetContactSettingsMessage::IsInitialized() const {

  return true;
}

void SetContactSettingsMessage::Swap(SetContactSettingsMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SetContactSettingsMessage::InternalSwap(SetContactSettingsMessage* other) {
  std::swap(contact_settings_, other->contact_settings_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SetContactSettingsMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SetContactSettingsMessage_descriptor_;
  metadata.reflection = SetContactSettingsMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SetContactSettingsMessage

// optional .POGOProtos.Data.Player.ContactSettings contact_settings = 1;
bool SetContactSettingsMessage::has_contact_settings() const {
  return !_is_default_instance_ && contact_settings_ != NULL;
}
void SetContactSettingsMessage::clear_contact_settings() {
  if (GetArenaNoVirtual() == NULL && contact_settings_ != NULL) delete contact_settings_;
  contact_settings_ = NULL;
}
const ::POGOProtos::Data::Player::ContactSettings& SetContactSettingsMessage::contact_settings() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage.contact_settings)
  return contact_settings_ != NULL ? *contact_settings_ : *default_instance_->contact_settings_;
}
::POGOProtos::Data::Player::ContactSettings* SetContactSettingsMessage::mutable_contact_settings() {
  
  if (contact_settings_ == NULL) {
    contact_settings_ = new ::POGOProtos::Data::Player::ContactSettings;
  }
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage.contact_settings)
  return contact_settings_;
}
::POGOProtos::Data::Player::ContactSettings* SetContactSettingsMessage::release_contact_settings() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage.contact_settings)
  
  ::POGOProtos::Data::Player::ContactSettings* temp = contact_settings_;
  contact_settings_ = NULL;
  return temp;
}
void SetContactSettingsMessage::set_allocated_contact_settings(::POGOProtos::Data::Player::ContactSettings* contact_settings) {
  delete contact_settings_;
  contact_settings_ = contact_settings;
  if (contact_settings) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Requests.Messages.SetContactSettingsMessage.contact_settings)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages
}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)