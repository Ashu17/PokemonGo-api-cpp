// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Data/Battle/BattleLog.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Data/Battle/BattleLog.pb.h"

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
namespace Battle {

namespace {

const ::google::protobuf::Descriptor* BattleLog_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  BattleLog_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fData_2fBattle_2fBattleLog_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fData_2fBattle_2fBattleLog_2eproto() {
  protobuf_AddDesc_POGOProtos_2fData_2fBattle_2fBattleLog_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Data/Battle/BattleLog.proto");
  GOOGLE_CHECK(file != NULL);
  BattleLog_descriptor_ = file->message_type(0);
  static const int BattleLog_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleLog, state_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleLog, battle_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleLog, server_ms_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleLog, battle_actions_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleLog, battle_start_timestamp_ms_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleLog, battle_end_timestamp_ms_),
  };
  BattleLog_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      BattleLog_descriptor_,
      BattleLog::default_instance_,
      BattleLog_offsets_,
      -1,
      -1,
      -1,
      sizeof(BattleLog),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleLog, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BattleLog, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fData_2fBattle_2fBattleLog_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      BattleLog_descriptor_, &BattleLog::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fData_2fBattle_2fBattleLog_2eproto() {
  delete BattleLog::default_instance_;
  delete BattleLog_reflection_;
}

void protobuf_AddDesc_POGOProtos_2fData_2fBattle_2fBattleLog_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fData_2fBattle_2fBattleLog_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::POGOProtos::Data::Battle::protobuf_AddDesc_POGOProtos_2fData_2fBattle_2fBattleState_2eproto();
  ::POGOProtos::Data::Battle::protobuf_AddDesc_POGOProtos_2fData_2fBattle_2fBattleType_2eproto();
  ::POGOProtos::Data::Battle::protobuf_AddDesc_POGOProtos_2fData_2fBattle_2fBattleAction_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n&POGOProtos/Data/Battle/BattleLog.proto"
    "\022\026POGOProtos.Data.Battle\032(POGOProtos/Dat"
    "a/Battle/BattleState.proto\032\'POGOProtos/D"
    "ata/Battle/BattleType.proto\032)POGOProtos/"
    "Data/Battle/BattleAction.proto\"\215\002\n\tBattl"
    "eLog\0222\n\005state\030\001 \001(\0162#.POGOProtos.Data.Ba"
    "ttle.BattleState\0227\n\013battle_type\030\002 \001(\0162\"."
    "POGOProtos.Data.Battle.BattleType\022\021\n\tser"
    "ver_ms\030\003 \001(\003\022<\n\016battle_actions\030\004 \003(\0132$.P"
    "OGOProtos.Data.Battle.BattleAction\022!\n\031ba"
    "ttle_start_timestamp_ms\030\005 \001(\003\022\037\n\027battle_"
    "end_timestamp_ms\030\006 \001(\003b\006proto3", 470);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Data/Battle/BattleLog.proto", &protobuf_RegisterTypes);
  BattleLog::default_instance_ = new BattleLog();
  BattleLog::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fData_2fBattle_2fBattleLog_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fData_2fBattle_2fBattleLog_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fData_2fBattle_2fBattleLog_2eproto() {
    protobuf_AddDesc_POGOProtos_2fData_2fBattle_2fBattleLog_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fData_2fBattle_2fBattleLog_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BattleLog::kStateFieldNumber;
const int BattleLog::kBattleTypeFieldNumber;
const int BattleLog::kServerMsFieldNumber;
const int BattleLog::kBattleActionsFieldNumber;
const int BattleLog::kBattleStartTimestampMsFieldNumber;
const int BattleLog::kBattleEndTimestampMsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BattleLog::BattleLog()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:POGOProtos.Data.Battle.BattleLog)
}

void BattleLog::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

BattleLog::BattleLog(const BattleLog& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:POGOProtos.Data.Battle.BattleLog)
}

void BattleLog::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  state_ = 0;
  battle_type_ = 0;
  server_ms_ = GOOGLE_LONGLONG(0);
  battle_start_timestamp_ms_ = GOOGLE_LONGLONG(0);
  battle_end_timestamp_ms_ = GOOGLE_LONGLONG(0);
}

BattleLog::~BattleLog() {
  // @@protoc_insertion_point(destructor:POGOProtos.Data.Battle.BattleLog)
  SharedDtor();
}

void BattleLog::SharedDtor() {
  if (this != default_instance_) {
  }
}

void BattleLog::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BattleLog::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BattleLog_descriptor_;
}

const BattleLog& BattleLog::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_POGOProtos_2fData_2fBattle_2fBattleLog_2eproto();
  return *default_instance_;
}

BattleLog* BattleLog::default_instance_ = NULL;

BattleLog* BattleLog::New(::google::protobuf::Arena* arena) const {
  BattleLog* n = new BattleLog;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BattleLog::Clear() {
// @@protoc_insertion_point(message_clear_start:POGOProtos.Data.Battle.BattleLog)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(BattleLog, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<BattleLog*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(state_, server_ms_);
  ZR_(battle_start_timestamp_ms_, battle_end_timestamp_ms_);

#undef ZR_HELPER_
#undef ZR_

  battle_actions_.Clear();
}

bool BattleLog::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:POGOProtos.Data.Battle.BattleLog)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .POGOProtos.Data.Battle.BattleState state = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_state(static_cast< ::POGOProtos::Data::Battle::BattleState >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_battle_type;
        break;
      }

      // optional .POGOProtos.Data.Battle.BattleType battle_type = 2;
      case 2: {
        if (tag == 16) {
         parse_battle_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_battle_type(static_cast< ::POGOProtos::Data::Battle::BattleType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_server_ms;
        break;
      }

      // optional int64 server_ms = 3;
      case 3: {
        if (tag == 24) {
         parse_server_ms:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &server_ms_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_battle_actions;
        break;
      }

      // repeated .POGOProtos.Data.Battle.BattleAction battle_actions = 4;
      case 4: {
        if (tag == 34) {
         parse_battle_actions:
          DO_(input->IncrementRecursionDepth());
         parse_loop_battle_actions:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_battle_actions()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_loop_battle_actions;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(40)) goto parse_battle_start_timestamp_ms;
        break;
      }

      // optional int64 battle_start_timestamp_ms = 5;
      case 5: {
        if (tag == 40) {
         parse_battle_start_timestamp_ms:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &battle_start_timestamp_ms_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_battle_end_timestamp_ms;
        break;
      }

      // optional int64 battle_end_timestamp_ms = 6;
      case 6: {
        if (tag == 48) {
         parse_battle_end_timestamp_ms:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &battle_end_timestamp_ms_)));

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
  // @@protoc_insertion_point(parse_success:POGOProtos.Data.Battle.BattleLog)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:POGOProtos.Data.Battle.BattleLog)
  return false;
#undef DO_
}

void BattleLog::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:POGOProtos.Data.Battle.BattleLog)
  // optional .POGOProtos.Data.Battle.BattleState state = 1;
  if (this->state() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->state(), output);
  }

  // optional .POGOProtos.Data.Battle.BattleType battle_type = 2;
  if (this->battle_type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->battle_type(), output);
  }

  // optional int64 server_ms = 3;
  if (this->server_ms() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->server_ms(), output);
  }

  // repeated .POGOProtos.Data.Battle.BattleAction battle_actions = 4;
  for (unsigned int i = 0, n = this->battle_actions_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->battle_actions(i), output);
  }

  // optional int64 battle_start_timestamp_ms = 5;
  if (this->battle_start_timestamp_ms() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->battle_start_timestamp_ms(), output);
  }

  // optional int64 battle_end_timestamp_ms = 6;
  if (this->battle_end_timestamp_ms() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(6, this->battle_end_timestamp_ms(), output);
  }

  // @@protoc_insertion_point(serialize_end:POGOProtos.Data.Battle.BattleLog)
}

::google::protobuf::uint8* BattleLog::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:POGOProtos.Data.Battle.BattleLog)
  // optional .POGOProtos.Data.Battle.BattleState state = 1;
  if (this->state() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->state(), target);
  }

  // optional .POGOProtos.Data.Battle.BattleType battle_type = 2;
  if (this->battle_type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->battle_type(), target);
  }

  // optional int64 server_ms = 3;
  if (this->server_ms() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->server_ms(), target);
  }

  // repeated .POGOProtos.Data.Battle.BattleAction battle_actions = 4;
  for (unsigned int i = 0, n = this->battle_actions_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->battle_actions(i), false, target);
  }

  // optional int64 battle_start_timestamp_ms = 5;
  if (this->battle_start_timestamp_ms() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->battle_start_timestamp_ms(), target);
  }

  // optional int64 battle_end_timestamp_ms = 6;
  if (this->battle_end_timestamp_ms() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, this->battle_end_timestamp_ms(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:POGOProtos.Data.Battle.BattleLog)
  return target;
}

int BattleLog::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:POGOProtos.Data.Battle.BattleLog)
  int total_size = 0;

  // optional .POGOProtos.Data.Battle.BattleState state = 1;
  if (this->state() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->state());
  }

  // optional .POGOProtos.Data.Battle.BattleType battle_type = 2;
  if (this->battle_type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->battle_type());
  }

  // optional int64 server_ms = 3;
  if (this->server_ms() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->server_ms());
  }

  // optional int64 battle_start_timestamp_ms = 5;
  if (this->battle_start_timestamp_ms() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->battle_start_timestamp_ms());
  }

  // optional int64 battle_end_timestamp_ms = 6;
  if (this->battle_end_timestamp_ms() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->battle_end_timestamp_ms());
  }

  // repeated .POGOProtos.Data.Battle.BattleAction battle_actions = 4;
  total_size += 1 * this->battle_actions_size();
  for (int i = 0; i < this->battle_actions_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->battle_actions(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BattleLog::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:POGOProtos.Data.Battle.BattleLog)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const BattleLog* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const BattleLog>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:POGOProtos.Data.Battle.BattleLog)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:POGOProtos.Data.Battle.BattleLog)
    MergeFrom(*source);
  }
}

void BattleLog::MergeFrom(const BattleLog& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:POGOProtos.Data.Battle.BattleLog)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  battle_actions_.MergeFrom(from.battle_actions_);
  if (from.state() != 0) {
    set_state(from.state());
  }
  if (from.battle_type() != 0) {
    set_battle_type(from.battle_type());
  }
  if (from.server_ms() != 0) {
    set_server_ms(from.server_ms());
  }
  if (from.battle_start_timestamp_ms() != 0) {
    set_battle_start_timestamp_ms(from.battle_start_timestamp_ms());
  }
  if (from.battle_end_timestamp_ms() != 0) {
    set_battle_end_timestamp_ms(from.battle_end_timestamp_ms());
  }
}

void BattleLog::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:POGOProtos.Data.Battle.BattleLog)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BattleLog::CopyFrom(const BattleLog& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:POGOProtos.Data.Battle.BattleLog)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BattleLog::IsInitialized() const {

  return true;
}

void BattleLog::Swap(BattleLog* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BattleLog::InternalSwap(BattleLog* other) {
  std::swap(state_, other->state_);
  std::swap(battle_type_, other->battle_type_);
  std::swap(server_ms_, other->server_ms_);
  battle_actions_.UnsafeArenaSwap(&other->battle_actions_);
  std::swap(battle_start_timestamp_ms_, other->battle_start_timestamp_ms_);
  std::swap(battle_end_timestamp_ms_, other->battle_end_timestamp_ms_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BattleLog::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = BattleLog_descriptor_;
  metadata.reflection = BattleLog_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BattleLog

// optional .POGOProtos.Data.Battle.BattleState state = 1;
void BattleLog::clear_state() {
  state_ = 0;
}
 ::POGOProtos::Data::Battle::BattleState BattleLog::state() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Battle.BattleLog.state)
  return static_cast< ::POGOProtos::Data::Battle::BattleState >(state_);
}
 void BattleLog::set_state(::POGOProtos::Data::Battle::BattleState value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Battle.BattleLog.state)
}

// optional .POGOProtos.Data.Battle.BattleType battle_type = 2;
void BattleLog::clear_battle_type() {
  battle_type_ = 0;
}
 ::POGOProtos::Data::Battle::BattleType BattleLog::battle_type() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Battle.BattleLog.battle_type)
  return static_cast< ::POGOProtos::Data::Battle::BattleType >(battle_type_);
}
 void BattleLog::set_battle_type(::POGOProtos::Data::Battle::BattleType value) {
  
  battle_type_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Battle.BattleLog.battle_type)
}

// optional int64 server_ms = 3;
void BattleLog::clear_server_ms() {
  server_ms_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 BattleLog::server_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Battle.BattleLog.server_ms)
  return server_ms_;
}
 void BattleLog::set_server_ms(::google::protobuf::int64 value) {
  
  server_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Battle.BattleLog.server_ms)
}

// repeated .POGOProtos.Data.Battle.BattleAction battle_actions = 4;
int BattleLog::battle_actions_size() const {
  return battle_actions_.size();
}
void BattleLog::clear_battle_actions() {
  battle_actions_.Clear();
}
const ::POGOProtos::Data::Battle::BattleAction& BattleLog::battle_actions(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Battle.BattleLog.battle_actions)
  return battle_actions_.Get(index);
}
::POGOProtos::Data::Battle::BattleAction* BattleLog::mutable_battle_actions(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Data.Battle.BattleLog.battle_actions)
  return battle_actions_.Mutable(index);
}
::POGOProtos::Data::Battle::BattleAction* BattleLog::add_battle_actions() {
  // @@protoc_insertion_point(field_add:POGOProtos.Data.Battle.BattleLog.battle_actions)
  return battle_actions_.Add();
}
::google::protobuf::RepeatedPtrField< ::POGOProtos::Data::Battle::BattleAction >*
BattleLog::mutable_battle_actions() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Data.Battle.BattleLog.battle_actions)
  return &battle_actions_;
}
const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Data::Battle::BattleAction >&
BattleLog::battle_actions() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Data.Battle.BattleLog.battle_actions)
  return battle_actions_;
}

// optional int64 battle_start_timestamp_ms = 5;
void BattleLog::clear_battle_start_timestamp_ms() {
  battle_start_timestamp_ms_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 BattleLog::battle_start_timestamp_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Battle.BattleLog.battle_start_timestamp_ms)
  return battle_start_timestamp_ms_;
}
 void BattleLog::set_battle_start_timestamp_ms(::google::protobuf::int64 value) {
  
  battle_start_timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Battle.BattleLog.battle_start_timestamp_ms)
}

// optional int64 battle_end_timestamp_ms = 6;
void BattleLog::clear_battle_end_timestamp_ms() {
  battle_end_timestamp_ms_ = GOOGLE_LONGLONG(0);
}
 ::google::protobuf::int64 BattleLog::battle_end_timestamp_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Data.Battle.BattleLog.battle_end_timestamp_ms)
  return battle_end_timestamp_ms_;
}
 void BattleLog::set_battle_end_timestamp_ms(::google::protobuf::int64 value) {
  
  battle_end_timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Data.Battle.BattleLog.battle_end_timestamp_ms)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Battle
}  // namespace Data
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)