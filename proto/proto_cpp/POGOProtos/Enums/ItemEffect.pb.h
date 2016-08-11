// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Enums/ItemEffect.proto

#ifndef PROTOBUF_POGOProtos_2fEnums_2fItemEffect_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fEnums_2fItemEffect_2eproto__INCLUDED

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
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Enums {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fEnums_2fItemEffect_2eproto();
void protobuf_AssignDesc_POGOProtos_2fEnums_2fItemEffect_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fEnums_2fItemEffect_2eproto();


enum ItemEffect {
  ITEM_EFFECT_NONE = 0,
  ITEM_EFFECT_CAP_NO_FLEE = 1000,
  ITEM_EFFECT_CAP_NO_MOVEMENT = 1002,
  ITEM_EFFECT_CAP_NO_THREAT = 1003,
  ITEM_EFFECT_CAP_TARGET_MAX = 1004,
  ITEM_EFFECT_CAP_TARGET_SLOW = 1005,
  ITEM_EFFECT_CAP_CHANCE_NIGHT = 1006,
  ITEM_EFFECT_CAP_CHANCE_TRAINER = 1007,
  ITEM_EFFECT_CAP_CHANCE_FIRST_THROW = 1008,
  ITEM_EFFECT_CAP_CHANCE_LEGEND = 1009,
  ITEM_EFFECT_CAP_CHANCE_HEAVY = 1010,
  ITEM_EFFECT_CAP_CHANCE_REPEAT = 1011,
  ITEM_EFFECT_CAP_CHANCE_MULTI_THROW = 1012,
  ITEM_EFFECT_CAP_CHANCE_ALWAYS = 1013,
  ITEM_EFFECT_CAP_CHANCE_SINGLE_THROW = 1014,
  ItemEffect_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ItemEffect_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ItemEffect_IsValid(int value);
const ItemEffect ItemEffect_MIN = ITEM_EFFECT_NONE;
const ItemEffect ItemEffect_MAX = ITEM_EFFECT_CAP_CHANCE_SINGLE_THROW;
const int ItemEffect_ARRAYSIZE = ItemEffect_MAX + 1;

const ::google::protobuf::EnumDescriptor* ItemEffect_descriptor();
inline const ::std::string& ItemEffect_Name(ItemEffect value) {
  return ::google::protobuf::internal::NameOfEnum(
    ItemEffect_descriptor(), value);
}
inline bool ItemEffect_Parse(
    const ::std::string& name, ItemEffect* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ItemEffect>(
    ItemEffect_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Enums
}  // namespace POGOProtos

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::POGOProtos::Enums::ItemEffect> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::POGOProtos::Enums::ItemEffect>() {
  return ::POGOProtos::Enums::ItemEffect_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fEnums_2fItemEffect_2eproto__INCLUDED
