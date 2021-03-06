// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Map/MapCell.proto

#ifndef PROTOBUF_POGOProtos_2fMap_2fMapCell_2eproto__INCLUDED
#define PROTOBUF_POGOProtos_2fMap_2fMapCell_2eproto__INCLUDED

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
#include "POGOProtos/Map/SpawnPoint.pb.h"
#include "POGOProtos/Map/Fort/FortData.pb.h"
#include "POGOProtos/Map/Fort/FortSummary.pb.h"
#include "POGOProtos/Map/Pokemon/NearbyPokemon.pb.h"
#include "POGOProtos/Map/Pokemon/WildPokemon.pb.h"
#include "POGOProtos/Map/Pokemon/MapPokemon.pb.h"
// @@protoc_insertion_point(includes)

namespace POGOProtos {
namespace Map {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_POGOProtos_2fMap_2fMapCell_2eproto();
void protobuf_AssignDesc_POGOProtos_2fMap_2fMapCell_2eproto();
void protobuf_ShutdownFile_POGOProtos_2fMap_2fMapCell_2eproto();

class MapCell;

// ===================================================================

class MapCell : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:POGOProtos.Map.MapCell) */ {
 public:
  MapCell();
  virtual ~MapCell();

  MapCell(const MapCell& from);

  inline MapCell& operator=(const MapCell& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MapCell& default_instance();

  void Swap(MapCell* other);

  // implements Message ----------------------------------------------

  inline MapCell* New() const { return New(NULL); }

  MapCell* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MapCell& from);
  void MergeFrom(const MapCell& from);
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
  void InternalSwap(MapCell* other);
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

  // optional uint64 s2_cell_id = 1;
  void clear_s2_cell_id();
  static const int kS2CellIdFieldNumber = 1;
  ::google::protobuf::uint64 s2_cell_id() const;
  void set_s2_cell_id(::google::protobuf::uint64 value);

  // optional int64 current_timestamp_ms = 2;
  void clear_current_timestamp_ms();
  static const int kCurrentTimestampMsFieldNumber = 2;
  ::google::protobuf::int64 current_timestamp_ms() const;
  void set_current_timestamp_ms(::google::protobuf::int64 value);

  // repeated .POGOProtos.Map.Fort.FortData forts = 3;
  int forts_size() const;
  void clear_forts();
  static const int kFortsFieldNumber = 3;
  const ::POGOProtos::Map::Fort::FortData& forts(int index) const;
  ::POGOProtos::Map::Fort::FortData* mutable_forts(int index);
  ::POGOProtos::Map::Fort::FortData* add_forts();
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortData >*
      mutable_forts();
  const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortData >&
      forts() const;

  // repeated .POGOProtos.Map.SpawnPoint spawn_points = 4;
  int spawn_points_size() const;
  void clear_spawn_points();
  static const int kSpawnPointsFieldNumber = 4;
  const ::POGOProtos::Map::SpawnPoint& spawn_points(int index) const;
  ::POGOProtos::Map::SpawnPoint* mutable_spawn_points(int index);
  ::POGOProtos::Map::SpawnPoint* add_spawn_points();
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::SpawnPoint >*
      mutable_spawn_points();
  const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::SpawnPoint >&
      spawn_points() const;

  // repeated string deleted_objects = 6;
  int deleted_objects_size() const;
  void clear_deleted_objects();
  static const int kDeletedObjectsFieldNumber = 6;
  const ::std::string& deleted_objects(int index) const;
  ::std::string* mutable_deleted_objects(int index);
  void set_deleted_objects(int index, const ::std::string& value);
  void set_deleted_objects(int index, const char* value);
  void set_deleted_objects(int index, const char* value, size_t size);
  ::std::string* add_deleted_objects();
  void add_deleted_objects(const ::std::string& value);
  void add_deleted_objects(const char* value);
  void add_deleted_objects(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& deleted_objects() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_deleted_objects();

  // optional bool is_truncated_list = 7;
  void clear_is_truncated_list();
  static const int kIsTruncatedListFieldNumber = 7;
  bool is_truncated_list() const;
  void set_is_truncated_list(bool value);

  // repeated .POGOProtos.Map.Fort.FortSummary fort_summaries = 8;
  int fort_summaries_size() const;
  void clear_fort_summaries();
  static const int kFortSummariesFieldNumber = 8;
  const ::POGOProtos::Map::Fort::FortSummary& fort_summaries(int index) const;
  ::POGOProtos::Map::Fort::FortSummary* mutable_fort_summaries(int index);
  ::POGOProtos::Map::Fort::FortSummary* add_fort_summaries();
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortSummary >*
      mutable_fort_summaries();
  const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortSummary >&
      fort_summaries() const;

  // repeated .POGOProtos.Map.SpawnPoint decimated_spawn_points = 9;
  int decimated_spawn_points_size() const;
  void clear_decimated_spawn_points();
  static const int kDecimatedSpawnPointsFieldNumber = 9;
  const ::POGOProtos::Map::SpawnPoint& decimated_spawn_points(int index) const;
  ::POGOProtos::Map::SpawnPoint* mutable_decimated_spawn_points(int index);
  ::POGOProtos::Map::SpawnPoint* add_decimated_spawn_points();
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::SpawnPoint >*
      mutable_decimated_spawn_points();
  const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::SpawnPoint >&
      decimated_spawn_points() const;

  // repeated .POGOProtos.Map.Pokemon.WildPokemon wild_pokemons = 5;
  int wild_pokemons_size() const;
  void clear_wild_pokemons();
  static const int kWildPokemonsFieldNumber = 5;
  const ::POGOProtos::Map::Pokemon::WildPokemon& wild_pokemons(int index) const;
  ::POGOProtos::Map::Pokemon::WildPokemon* mutable_wild_pokemons(int index);
  ::POGOProtos::Map::Pokemon::WildPokemon* add_wild_pokemons();
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::WildPokemon >*
      mutable_wild_pokemons();
  const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::WildPokemon >&
      wild_pokemons() const;

  // repeated .POGOProtos.Map.Pokemon.MapPokemon catchable_pokemons = 10;
  int catchable_pokemons_size() const;
  void clear_catchable_pokemons();
  static const int kCatchablePokemonsFieldNumber = 10;
  const ::POGOProtos::Map::Pokemon::MapPokemon& catchable_pokemons(int index) const;
  ::POGOProtos::Map::Pokemon::MapPokemon* mutable_catchable_pokemons(int index);
  ::POGOProtos::Map::Pokemon::MapPokemon* add_catchable_pokemons();
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::MapPokemon >*
      mutable_catchable_pokemons();
  const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::MapPokemon >&
      catchable_pokemons() const;

  // repeated .POGOProtos.Map.Pokemon.NearbyPokemon nearby_pokemons = 11;
  int nearby_pokemons_size() const;
  void clear_nearby_pokemons();
  static const int kNearbyPokemonsFieldNumber = 11;
  const ::POGOProtos::Map::Pokemon::NearbyPokemon& nearby_pokemons(int index) const;
  ::POGOProtos::Map::Pokemon::NearbyPokemon* mutable_nearby_pokemons(int index);
  ::POGOProtos::Map::Pokemon::NearbyPokemon* add_nearby_pokemons();
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::NearbyPokemon >*
      mutable_nearby_pokemons();
  const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::NearbyPokemon >&
      nearby_pokemons() const;

  // @@protoc_insertion_point(class_scope:POGOProtos.Map.MapCell)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 s2_cell_id_;
  ::google::protobuf::int64 current_timestamp_ms_;
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortData > forts_;
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::SpawnPoint > spawn_points_;
  ::google::protobuf::RepeatedPtrField< ::std::string> deleted_objects_;
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortSummary > fort_summaries_;
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::SpawnPoint > decimated_spawn_points_;
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::WildPokemon > wild_pokemons_;
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::MapPokemon > catchable_pokemons_;
  ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::NearbyPokemon > nearby_pokemons_;
  bool is_truncated_list_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_POGOProtos_2fMap_2fMapCell_2eproto();
  friend void protobuf_AssignDesc_POGOProtos_2fMap_2fMapCell_2eproto();
  friend void protobuf_ShutdownFile_POGOProtos_2fMap_2fMapCell_2eproto();

  void InitAsDefaultInstance();
  static MapCell* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// MapCell

// optional uint64 s2_cell_id = 1;
inline void MapCell::clear_s2_cell_id() {
  s2_cell_id_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 MapCell::s2_cell_id() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.MapCell.s2_cell_id)
  return s2_cell_id_;
}
inline void MapCell::set_s2_cell_id(::google::protobuf::uint64 value) {
  
  s2_cell_id_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.MapCell.s2_cell_id)
}

// optional int64 current_timestamp_ms = 2;
inline void MapCell::clear_current_timestamp_ms() {
  current_timestamp_ms_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MapCell::current_timestamp_ms() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.MapCell.current_timestamp_ms)
  return current_timestamp_ms_;
}
inline void MapCell::set_current_timestamp_ms(::google::protobuf::int64 value) {
  
  current_timestamp_ms_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.MapCell.current_timestamp_ms)
}

// repeated .POGOProtos.Map.Fort.FortData forts = 3;
inline int MapCell::forts_size() const {
  return forts_.size();
}
inline void MapCell::clear_forts() {
  forts_.Clear();
}
inline const ::POGOProtos::Map::Fort::FortData& MapCell::forts(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.MapCell.forts)
  return forts_.Get(index);
}
inline ::POGOProtos::Map::Fort::FortData* MapCell::mutable_forts(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Map.MapCell.forts)
  return forts_.Mutable(index);
}
inline ::POGOProtos::Map::Fort::FortData* MapCell::add_forts() {
  // @@protoc_insertion_point(field_add:POGOProtos.Map.MapCell.forts)
  return forts_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortData >*
MapCell::mutable_forts() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Map.MapCell.forts)
  return &forts_;
}
inline const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortData >&
MapCell::forts() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Map.MapCell.forts)
  return forts_;
}

// repeated .POGOProtos.Map.SpawnPoint spawn_points = 4;
inline int MapCell::spawn_points_size() const {
  return spawn_points_.size();
}
inline void MapCell::clear_spawn_points() {
  spawn_points_.Clear();
}
inline const ::POGOProtos::Map::SpawnPoint& MapCell::spawn_points(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.MapCell.spawn_points)
  return spawn_points_.Get(index);
}
inline ::POGOProtos::Map::SpawnPoint* MapCell::mutable_spawn_points(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Map.MapCell.spawn_points)
  return spawn_points_.Mutable(index);
}
inline ::POGOProtos::Map::SpawnPoint* MapCell::add_spawn_points() {
  // @@protoc_insertion_point(field_add:POGOProtos.Map.MapCell.spawn_points)
  return spawn_points_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::SpawnPoint >*
MapCell::mutable_spawn_points() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Map.MapCell.spawn_points)
  return &spawn_points_;
}
inline const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::SpawnPoint >&
MapCell::spawn_points() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Map.MapCell.spawn_points)
  return spawn_points_;
}

// repeated string deleted_objects = 6;
inline int MapCell::deleted_objects_size() const {
  return deleted_objects_.size();
}
inline void MapCell::clear_deleted_objects() {
  deleted_objects_.Clear();
}
inline const ::std::string& MapCell::deleted_objects(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.MapCell.deleted_objects)
  return deleted_objects_.Get(index);
}
inline ::std::string* MapCell::mutable_deleted_objects(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Map.MapCell.deleted_objects)
  return deleted_objects_.Mutable(index);
}
inline void MapCell::set_deleted_objects(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:POGOProtos.Map.MapCell.deleted_objects)
  deleted_objects_.Mutable(index)->assign(value);
}
inline void MapCell::set_deleted_objects(int index, const char* value) {
  deleted_objects_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:POGOProtos.Map.MapCell.deleted_objects)
}
inline void MapCell::set_deleted_objects(int index, const char* value, size_t size) {
  deleted_objects_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:POGOProtos.Map.MapCell.deleted_objects)
}
inline ::std::string* MapCell::add_deleted_objects() {
  // @@protoc_insertion_point(field_add_mutable:POGOProtos.Map.MapCell.deleted_objects)
  return deleted_objects_.Add();
}
inline void MapCell::add_deleted_objects(const ::std::string& value) {
  deleted_objects_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:POGOProtos.Map.MapCell.deleted_objects)
}
inline void MapCell::add_deleted_objects(const char* value) {
  deleted_objects_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:POGOProtos.Map.MapCell.deleted_objects)
}
inline void MapCell::add_deleted_objects(const char* value, size_t size) {
  deleted_objects_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:POGOProtos.Map.MapCell.deleted_objects)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
MapCell::deleted_objects() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Map.MapCell.deleted_objects)
  return deleted_objects_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
MapCell::mutable_deleted_objects() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Map.MapCell.deleted_objects)
  return &deleted_objects_;
}

// optional bool is_truncated_list = 7;
inline void MapCell::clear_is_truncated_list() {
  is_truncated_list_ = false;
}
inline bool MapCell::is_truncated_list() const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.MapCell.is_truncated_list)
  return is_truncated_list_;
}
inline void MapCell::set_is_truncated_list(bool value) {
  
  is_truncated_list_ = value;
  // @@protoc_insertion_point(field_set:POGOProtos.Map.MapCell.is_truncated_list)
}

// repeated .POGOProtos.Map.Fort.FortSummary fort_summaries = 8;
inline int MapCell::fort_summaries_size() const {
  return fort_summaries_.size();
}
inline void MapCell::clear_fort_summaries() {
  fort_summaries_.Clear();
}
inline const ::POGOProtos::Map::Fort::FortSummary& MapCell::fort_summaries(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.MapCell.fort_summaries)
  return fort_summaries_.Get(index);
}
inline ::POGOProtos::Map::Fort::FortSummary* MapCell::mutable_fort_summaries(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Map.MapCell.fort_summaries)
  return fort_summaries_.Mutable(index);
}
inline ::POGOProtos::Map::Fort::FortSummary* MapCell::add_fort_summaries() {
  // @@protoc_insertion_point(field_add:POGOProtos.Map.MapCell.fort_summaries)
  return fort_summaries_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortSummary >*
MapCell::mutable_fort_summaries() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Map.MapCell.fort_summaries)
  return &fort_summaries_;
}
inline const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Fort::FortSummary >&
MapCell::fort_summaries() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Map.MapCell.fort_summaries)
  return fort_summaries_;
}

// repeated .POGOProtos.Map.SpawnPoint decimated_spawn_points = 9;
inline int MapCell::decimated_spawn_points_size() const {
  return decimated_spawn_points_.size();
}
inline void MapCell::clear_decimated_spawn_points() {
  decimated_spawn_points_.Clear();
}
inline const ::POGOProtos::Map::SpawnPoint& MapCell::decimated_spawn_points(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.MapCell.decimated_spawn_points)
  return decimated_spawn_points_.Get(index);
}
inline ::POGOProtos::Map::SpawnPoint* MapCell::mutable_decimated_spawn_points(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Map.MapCell.decimated_spawn_points)
  return decimated_spawn_points_.Mutable(index);
}
inline ::POGOProtos::Map::SpawnPoint* MapCell::add_decimated_spawn_points() {
  // @@protoc_insertion_point(field_add:POGOProtos.Map.MapCell.decimated_spawn_points)
  return decimated_spawn_points_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::SpawnPoint >*
MapCell::mutable_decimated_spawn_points() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Map.MapCell.decimated_spawn_points)
  return &decimated_spawn_points_;
}
inline const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::SpawnPoint >&
MapCell::decimated_spawn_points() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Map.MapCell.decimated_spawn_points)
  return decimated_spawn_points_;
}

// repeated .POGOProtos.Map.Pokemon.WildPokemon wild_pokemons = 5;
inline int MapCell::wild_pokemons_size() const {
  return wild_pokemons_.size();
}
inline void MapCell::clear_wild_pokemons() {
  wild_pokemons_.Clear();
}
inline const ::POGOProtos::Map::Pokemon::WildPokemon& MapCell::wild_pokemons(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.MapCell.wild_pokemons)
  return wild_pokemons_.Get(index);
}
inline ::POGOProtos::Map::Pokemon::WildPokemon* MapCell::mutable_wild_pokemons(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Map.MapCell.wild_pokemons)
  return wild_pokemons_.Mutable(index);
}
inline ::POGOProtos::Map::Pokemon::WildPokemon* MapCell::add_wild_pokemons() {
  // @@protoc_insertion_point(field_add:POGOProtos.Map.MapCell.wild_pokemons)
  return wild_pokemons_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::WildPokemon >*
MapCell::mutable_wild_pokemons() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Map.MapCell.wild_pokemons)
  return &wild_pokemons_;
}
inline const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::WildPokemon >&
MapCell::wild_pokemons() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Map.MapCell.wild_pokemons)
  return wild_pokemons_;
}

// repeated .POGOProtos.Map.Pokemon.MapPokemon catchable_pokemons = 10;
inline int MapCell::catchable_pokemons_size() const {
  return catchable_pokemons_.size();
}
inline void MapCell::clear_catchable_pokemons() {
  catchable_pokemons_.Clear();
}
inline const ::POGOProtos::Map::Pokemon::MapPokemon& MapCell::catchable_pokemons(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.MapCell.catchable_pokemons)
  return catchable_pokemons_.Get(index);
}
inline ::POGOProtos::Map::Pokemon::MapPokemon* MapCell::mutable_catchable_pokemons(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Map.MapCell.catchable_pokemons)
  return catchable_pokemons_.Mutable(index);
}
inline ::POGOProtos::Map::Pokemon::MapPokemon* MapCell::add_catchable_pokemons() {
  // @@protoc_insertion_point(field_add:POGOProtos.Map.MapCell.catchable_pokemons)
  return catchable_pokemons_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::MapPokemon >*
MapCell::mutable_catchable_pokemons() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Map.MapCell.catchable_pokemons)
  return &catchable_pokemons_;
}
inline const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::MapPokemon >&
MapCell::catchable_pokemons() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Map.MapCell.catchable_pokemons)
  return catchable_pokemons_;
}

// repeated .POGOProtos.Map.Pokemon.NearbyPokemon nearby_pokemons = 11;
inline int MapCell::nearby_pokemons_size() const {
  return nearby_pokemons_.size();
}
inline void MapCell::clear_nearby_pokemons() {
  nearby_pokemons_.Clear();
}
inline const ::POGOProtos::Map::Pokemon::NearbyPokemon& MapCell::nearby_pokemons(int index) const {
  // @@protoc_insertion_point(field_get:POGOProtos.Map.MapCell.nearby_pokemons)
  return nearby_pokemons_.Get(index);
}
inline ::POGOProtos::Map::Pokemon::NearbyPokemon* MapCell::mutable_nearby_pokemons(int index) {
  // @@protoc_insertion_point(field_mutable:POGOProtos.Map.MapCell.nearby_pokemons)
  return nearby_pokemons_.Mutable(index);
}
inline ::POGOProtos::Map::Pokemon::NearbyPokemon* MapCell::add_nearby_pokemons() {
  // @@protoc_insertion_point(field_add:POGOProtos.Map.MapCell.nearby_pokemons)
  return nearby_pokemons_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::NearbyPokemon >*
MapCell::mutable_nearby_pokemons() {
  // @@protoc_insertion_point(field_mutable_list:POGOProtos.Map.MapCell.nearby_pokemons)
  return &nearby_pokemons_;
}
inline const ::google::protobuf::RepeatedPtrField< ::POGOProtos::Map::Pokemon::NearbyPokemon >&
MapCell::nearby_pokemons() const {
  // @@protoc_insertion_point(field_list:POGOProtos.Map.MapCell.nearby_pokemons)
  return nearby_pokemons_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Map
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_POGOProtos_2fMap_2fMapCell_2eproto__INCLUDED
