// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: POGOProtos/Enums/PokemonFamilyId.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "POGOProtos/Enums/PokemonFamilyId.pb.h"

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
namespace Enums {

namespace {

const ::google::protobuf::EnumDescriptor* PokemonFamilyId_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_POGOProtos_2fEnums_2fPokemonFamilyId_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_POGOProtos_2fEnums_2fPokemonFamilyId_2eproto() {
  protobuf_AddDesc_POGOProtos_2fEnums_2fPokemonFamilyId_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "POGOProtos/Enums/PokemonFamilyId.proto");
  GOOGLE_CHECK(file != NULL);
  PokemonFamilyId_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_POGOProtos_2fEnums_2fPokemonFamilyId_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_POGOProtos_2fEnums_2fPokemonFamilyId_2eproto() {
}

void protobuf_AddDesc_POGOProtos_2fEnums_2fPokemonFamilyId_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_POGOProtos_2fEnums_2fPokemonFamilyId_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n&POGOProtos/Enums/PokemonFamilyId.proto"
    "\022\020POGOProtos.Enums*\372\014\n\017PokemonFamilyId\022\020"
    "\n\014FAMILY_UNSET\020\000\022\024\n\020FAMILY_BULBASAUR\020\001\022\025"
    "\n\021FAMILY_CHARMANDER\020\004\022\023\n\017FAMILY_SQUIRTLE"
    "\020\007\022\023\n\017FAMILY_CATERPIE\020\n\022\021\n\rFAMILY_WEEDLE"
    "\020\r\022\021\n\rFAMILY_PIDGEY\020\020\022\022\n\016FAMILY_RATTATA\020"
    "\023\022\022\n\016FAMILY_SPEAROW\020\025\022\020\n\014FAMILY_EKANS\020\027\022"
    "\022\n\016FAMILY_PIKACHU\020\031\022\024\n\020FAMILY_SANDSHREW\020"
    "\033\022\031\n\025FAMILY_NIDORAN_FEMALE\020\035\022\027\n\023FAMILY_N"
    "IDORAN_MALE\020 \022\023\n\017FAMILY_CLEFAIRY\020#\022\021\n\rFA"
    "MILY_VULPIX\020%\022\025\n\021FAMILY_JIGGLYPUFF\020\'\022\020\n\014"
    "FAMILY_ZUBAT\020)\022\021\n\rFAMILY_ODDISH\020+\022\020\n\014FAM"
    "ILY_PARAS\020.\022\022\n\016FAMILY_VENONAT\0200\022\022\n\016FAMIL"
    "Y_DIGLETT\0202\022\021\n\rFAMILY_MEOWTH\0204\022\022\n\016FAMILY"
    "_PSYDUCK\0206\022\021\n\rFAMILY_MANKEY\0208\022\024\n\020FAMILY_"
    "GROWLITHE\020:\022\022\n\016FAMILY_POLIWAG\020<\022\017\n\013FAMIL"
    "Y_ABRA\020\?\022\021\n\rFAMILY_MACHOP\020B\022\025\n\021FAMILY_BE"
    "LLSPROUT\020E\022\024\n\020FAMILY_TENTACOOL\020H\022\022\n\016FAMI"
    "LY_GEODUDE\020J\022\021\n\rFAMILY_PONYTA\020M\022\023\n\017FAMIL"
    "Y_SLOWPOKE\020O\022\024\n\020FAMILY_MAGNEMITE\020Q\022\024\n\020FA"
    "MILY_FARFETCHD\020S\022\020\n\014FAMILY_DODUO\020T\022\017\n\013FA"
    "MILY_SEEL\020V\022\021\n\rFAMILY_GRIMER\020X\022\023\n\017FAMILY"
    "_SHELLDER\020Z\022\021\n\rFAMILY_GASTLY\020\\\022\017\n\013FAMILY"
    "_ONIX\020_\022\022\n\016FAMILY_DROWZEE\020`\022\020\n\014FAMILY_HY"
    "PNO\020a\022\021\n\rFAMILY_KRABBY\020b\022\022\n\016FAMILY_VOLTO"
    "RB\020d\022\024\n\020FAMILY_EXEGGCUTE\020f\022\021\n\rFAMILY_CUB"
    "ONE\020h\022\024\n\020FAMILY_HITMONLEE\020j\022\025\n\021FAMILY_HI"
    "TMONCHAN\020k\022\024\n\020FAMILY_LICKITUNG\020l\022\022\n\016FAMI"
    "LY_KOFFING\020m\022\022\n\016FAMILY_RHYHORN\020o\022\022\n\016FAMI"
    "LY_CHANSEY\020q\022\022\n\016FAMILY_TANGELA\020r\022\025\n\021FAMI"
    "LY_KANGASKHAN\020s\022\021\n\rFAMILY_HORSEA\020t\022\022\n\016FA"
    "MILY_GOLDEEN\020v\022\021\n\rFAMILY_STARYU\020x\022\022\n\016FAM"
    "ILY_MR_MIME\020z\022\022\n\016FAMILY_SCYTHER\020{\022\017\n\013FAM"
    "ILY_JYNX\020|\022\025\n\021FAMILY_ELECTABUZZ\020}\022\021\n\rFAM"
    "ILY_MAGMAR\020~\022\021\n\rFAMILY_PINSIR\020\177\022\022\n\rFAMIL"
    "Y_TAUROS\020\200\001\022\024\n\017FAMILY_MAGIKARP\020\201\001\022\022\n\rFAM"
    "ILY_LAPRAS\020\203\001\022\021\n\014FAMILY_DITTO\020\204\001\022\021\n\014FAMI"
    "LY_EEVEE\020\205\001\022\023\n\016FAMILY_PORYGON\020\211\001\022\023\n\016FAMI"
    "LY_OMANYTE\020\212\001\022\022\n\rFAMILY_KABUTO\020\214\001\022\026\n\021FAM"
    "ILY_AERODACTYL\020\216\001\022\023\n\016FAMILY_SNORLAX\020\217\001\022\024"
    "\n\017FAMILY_ARTICUNO\020\220\001\022\022\n\rFAMILY_ZAPDOS\020\221\001"
    "\022\023\n\016FAMILY_MOLTRES\020\222\001\022\023\n\016FAMILY_DRATINI\020"
    "\223\001\022\022\n\rFAMILY_MEWTWO\020\226\001\022\017\n\nFAMILY_MEW\020\227\001b"
    "\006proto3", 1727);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "POGOProtos/Enums/PokemonFamilyId.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_POGOProtos_2fEnums_2fPokemonFamilyId_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_POGOProtos_2fEnums_2fPokemonFamilyId_2eproto {
  StaticDescriptorInitializer_POGOProtos_2fEnums_2fPokemonFamilyId_2eproto() {
    protobuf_AddDesc_POGOProtos_2fEnums_2fPokemonFamilyId_2eproto();
  }
} static_descriptor_initializer_POGOProtos_2fEnums_2fPokemonFamilyId_2eproto_;
const ::google::protobuf::EnumDescriptor* PokemonFamilyId_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PokemonFamilyId_descriptor_;
}
bool PokemonFamilyId_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 4:
    case 7:
    case 10:
    case 13:
    case 16:
    case 19:
    case 21:
    case 23:
    case 25:
    case 27:
    case 29:
    case 32:
    case 35:
    case 37:
    case 39:
    case 41:
    case 43:
    case 46:
    case 48:
    case 50:
    case 52:
    case 54:
    case 56:
    case 58:
    case 60:
    case 63:
    case 66:
    case 69:
    case 72:
    case 74:
    case 77:
    case 79:
    case 81:
    case 83:
    case 84:
    case 86:
    case 88:
    case 90:
    case 92:
    case 95:
    case 96:
    case 97:
    case 98:
    case 100:
    case 102:
    case 104:
    case 106:
    case 107:
    case 108:
    case 109:
    case 111:
    case 113:
    case 114:
    case 115:
    case 116:
    case 118:
    case 120:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case 128:
    case 129:
    case 131:
    case 132:
    case 133:
    case 137:
    case 138:
    case 140:
    case 142:
    case 143:
    case 144:
    case 145:
    case 146:
    case 147:
    case 150:
    case 151:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Enums
}  // namespace POGOProtos

// @@protoc_insertion_point(global_scope)