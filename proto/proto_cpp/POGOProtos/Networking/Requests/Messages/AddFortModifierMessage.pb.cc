// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Networking/Requests/Messages/AddFortModifierMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Networking/Requests/Messages/AddFortModifierMessage.pb.h"

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

const ::google::protobuf::Descriptor* AddFortModifierMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AddFortModifierMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fAddFortModifierMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fAddFortModifierMessage_2eproto() {
  protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fAddFortModifierMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Networking/Requests/Messages/AddFortModifierMessage.proto");
  GOOGLE_CHECK(file != NULL);
  AddFortModifierMessage_descriptor_ = file->message_type(0);
  static const int AddFortModifierMessage_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddFortModifierMessage, modifier_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddFortModifierMessage, fort_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddFortModifierMessage, player_latitude_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddFortModifierMessage, player_longitude_),
  };
  AddFortModifierMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AddFortModifierMessage_descriptor_,
      AddFortModifierMessage::default_instance_,
      AddFortModifierMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(AddFortModifierMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddFortModifierMessage, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AddFortModifierMessage, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fAddFortModifierMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AddFortModifierMessage_descriptor_, &AddFortModifierMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fAddFortModifierMessage_2eproto() {
  delete AddFortModifierMessage::default_instance_;
  delete AddFortModifierMessage_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fAddFortModifierMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fAddFortModifierMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Inventory::Item::protobuf_AddDesc_POGOProtos_2fInventory_2fItem_2fItemId_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nDPOGOProtos/Networking/Requests/Message"
    "s/AddFortModifierMessage.proto\022\'POGOProt"
    "os.Networking.Requests.Messages\032&POGOPro"
    "tos/Inventory/Item/ItemId.proto\"\226\001\n\026AddF"
    "ortModifierMessage\0228\n\rmodifier_type\030\001 \001("
    "\0162!.POGOProtos.Inventory.Item.ItemId\022\017\n\007"
    "fort_id\030\002 \001(\t\022\027\n\017player_latitude\030\003 \001(\001\022\030"
    "\n\020player_longitude\030\004 \001(\001b\006proto3", 312);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Networking/Requests/Messages/AddFortModifierMessage.proto", &protobuf_RegisterTypes);
  AddFortModifierMessage::default_instance_ = new AddFortModifierMessage();
  AddFortModifierMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fNetworking_2fRequests_2fMessages_2fAddFortModifierMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fAddFortModifierMessage_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fAddFortModifierMessage_2eproto() {
    protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fAddFortModifierMessage_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fNetworking_2fRequests_2fMessages_2fAddFortModifierMessage_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AddFortModifierMessage::kModifierTypeFieldNumber;
const int AddFortModifierMessage::kFortIdFieldNumber;
const int AddFortModifierMessage::kPlayerLatitudeFieldNumber;
const int AddFortModifierMessage::kPlayerLongitudeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AddFortModifierMessage::AddFortModifierMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
}

void AddFortModifierMessage::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

AddFortModifierMessage::AddFortModifierMessage(const AddFortModifierMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
}

void AddFortModifierMessage::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  modifier_type_ = 0;
  fort_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  player_latitude_ = 0;
  player_longitude_ = 0;
}

AddFortModifierMessage::~AddFortModifierMessage() {
  // @@protoc_insertion_point(destructor:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
  SharedDtor();
}

void AddFortModifierMessage::SharedDtor() {
  fort_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void AddFortModifierMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AddFortModifierMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AddFortModifierMessage_descriptor_;
}

const AddFortModifierMessage& AddFortModifierMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fNetworking_2fRequests_2fMessages_2fAddFortModifierMessage_2eproto();
  return *default_instance_;
}

AddFortModifierMessage* AddFortModifierMessage::default_instance_ = NULL;

AddFortModifierMessage* AddFortModifierMessage::New(::google::protobuf::Arena* arena) const {
  AddFortModifierMessage* n = new AddFortModifierMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AddFortModifierMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(AddFortModifierMessage, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<AddFortModifierMessage*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(player_latitude_, modifier_type_);
  fort_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());

#undef ZR_HELPER_
#undef ZR_

}

bool AddFortModifierMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .POGOProtos.Inventory.Item.ItemId modifier_type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_modifier_type(static_cast< ::POGOProtos::Inventory::Item::ItemId >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_fort_id;
        break;
      }

      // optional string fort_id = 2;
      case 2: {
        if (tag == 18) {
         parse_fort_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_fort_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->fort_id().data(), this->fort_id().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "POGOProtos.Networking.Requests.Messages.AddFortModifierMessage.fort_id"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_player_latitude;
        break;
      }

      // optional double player_latitude = 3;
      case 3: {
        if (tag == 25) {
         parse_player_latitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &player_latitude_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_player_longitude;
        break;
      }

      // optional double player_longitude = 4;
      case 4: {
        if (tag == 33) {
         parse_player_longitude:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &player_longitude_)));

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
  // @@protoc_insertion_point(parse_success:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
  return false;
#undef DO_
}

void AddFortModifierMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
  // optional .POGOProtos.Inventory.Item.ItemId modifier_type = 1;
  if (this->modifier_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->modifier_type(), output);
  }

  // optional string fort_id = 2;
  if (this->fort_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->fort_id().data(), this->fort_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Networking.Requests.Messages.AddFortModifierMessage.fort_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->fort_id(), output);
  }

  // optional double player_latitude = 3;
  if (this->player_latitude() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->player_latitude(), output);
  }

  // optional double player_longitude = 4;
  if (this->player_longitude() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->player_longitude(), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
}

::google::protobuf::uint8* AddFortModifierMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
  // optional .POGOProtos.Inventory.Item.ItemId modifier_type = 1;
  if (this->modifier_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->modifier_type(), target);
  }

  // optional string fort_id = 2;
  if (this->fort_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->fort_id().data(), this->fort_id().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "POGOProtos.Networking.Requests.Messages.AddFortModifierMessage.fort_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->fort_id(), target);
  }

  // optional double player_latitude = 3;
  if (this->player_latitude() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->player_latitude(), target);
  }

  // optional double player_longitude = 4;
  if (this->player_longitude() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->player_longitude(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
  return target;
}

int AddFortModifierMessage::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
  int total_size = 0;

  // optional .POGOProtos.Inventory.Item.ItemId modifier_type = 1;
  if (this->modifier_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->modifier_type());
  }

  // optional string fort_id = 2;
  if (this->fort_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->fort_id());
  }

  // optional double player_latitude = 3;
  if (this->player_latitude() != 0) {
    total_size += 1 + 8;
  }

  // optional double player_longitude = 4;
  if (this->player_longitude() != 0) {
    total_size += 1 + 8;
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AddFortModifierMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const AddFortModifierMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const AddFortModifierMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
    MergeFrom(*source);
  }
}

void AddFortModifierMessage::MergeFrom(const AddFortModifierMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.modifier_type() != 0) {
    set_modifier_type(from.modifier_type());
  }
  if (from.fort_id().size() > 0) {

    fort_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.fort_id_);
  }
  if (from.player_latitude() != 0) {
    set_player_latitude(from.player_latitude());
  }
  if (from.player_longitude() != 0) {
    set_player_longitude(from.player_longitude());
  }
}

void AddFortModifierMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AddFortModifierMessage::CopyFrom(const AddFortModifierMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AddFortModifierMessage::IsInitialized() const {

  return true;
}

void AddFortModifierMessage::Swap(AddFortModifierMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AddFortModifierMessage::InternalSwap(AddFortModifierMessage* other) {
  std::swap(modifier_type_, other->modifier_type_);
  fort_id_.Swap(&other->fort_id_);
  std::swap(player_latitude_, other->player_latitude_);
  std::swap(player_longitude_, other->player_longitude_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AddFortModifierMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AddFortModifierMessage_descriptor_;
  metadata.reflection = AddFortModifierMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AddFortModifierMessage

// optional .POGOProtos.Inventory.Item.ItemId modifier_type = 1;
void AddFortModifierMessage::clear_modifier_type() {
  modifier_type_ = 0;
}
 ::POGOProtos::Inventory::Item::ItemId AddFortModifierMessage::modifier_type() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage.modifier_type)
  return static_cast< ::POGOProtos::Inventory::Item::ItemId >(modifier_type_);
}
 void AddFortModifierMessage::set_modifier_type(::POGOProtos::Inventory::Item::ItemId value) {
  
  modifier_type_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage.modifier_type)
}

// optional string fort_id = 2;
void AddFortModifierMessage::clear_fort_id() {
  fort_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& AddFortModifierMessage::fort_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage.fort_id)
  return fort_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AddFortModifierMessage::set_fort_id(const ::std::string& value) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage.fort_id)
}
 void AddFortModifierMessage::set_fort_id(const char* value) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage.fort_id)
}
 void AddFortModifierMessage::set_fort_id(const char* value, size_t size) {
  
  fort_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage.fort_id)
}
 ::std::string* AddFortModifierMessage::mutable_fort_id() {
  
  // @@protoc_insertion_point(field_mutable:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage.fort_id)
  return fort_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* AddFortModifierMessage::release_fort_id() {
  // @@protoc_insertion_point(field_release:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage.fort_id)
  
  return fort_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void AddFortModifierMessage::set_allocated_fort_id(::std::string* fort_id) {
  if (fort_id != NULL) {
    
  } else {
    
  }
  fort_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), fort_id);
  // @@protoc_insertion_point(field_set_allocated:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage.fort_id)
}

// optional double player_latitude = 3;
void AddFortModifierMessage::clear_player_latitude() {
  player_latitude_ = 0;
}
 double AddFortModifierMessage::player_latitude() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage.player_latitude)
  return player_latitude_;
}
 void AddFortModifierMessage::set_player_latitude(double value) {
  
  player_latitude_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage.player_latitude)
}

// optional double player_longitude = 4;
void AddFortModifierMessage::clear_player_longitude() {
  player_longitude_ = 0;
}
 double AddFortModifierMessage::player_longitude() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage.player_longitude)
  return player_longitude_;
}
 void AddFortModifierMessage::set_player_longitude(double value) {
  
  player_longitude_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Networking.Requests.Messages.AddFortModifierMessage.player_longitude)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages
}  // namespace Requests
}  // namespace Networking
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)