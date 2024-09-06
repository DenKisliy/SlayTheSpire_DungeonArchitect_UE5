// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/Snap/Lib/Connection/SnapConnectionConstants.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_SnapConnectionConstants_generated_h
#error "SnapConnectionConstants.generated.h already included, missing '#pragma once' in SnapConnectionConstants.h"
#endif
#define DUNGEONARCHITECTRUNTIME_SnapConnectionConstants_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionConstants_h


#define FOREACH_ENUM_ESNAPCONNECTIONSTATE(op) \
	op(ESnapConnectionState::Unknown) \
	op(ESnapConnectionState::Door) \
	op(ESnapConnectionState::Wall) 

enum class ESnapConnectionState : uint8;
template<> struct TIsUEnumClass<ESnapConnectionState> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<ESnapConnectionState>();

#define FOREACH_ENUM_ESNAPCONNECTIONDOORTYPE(op) \
	op(ESnapConnectionDoorType::NotApplicable) \
	op(ESnapConnectionDoorType::NormalDoor) \
	op(ESnapConnectionDoorType::OneWayDoor) \
	op(ESnapConnectionDoorType::OneWayDoorUp) \
	op(ESnapConnectionDoorType::OneWayDoorDown) \
	op(ESnapConnectionDoorType::LockedDoor) \
	op(ESnapConnectionDoorType::CustomDoor) 

enum class ESnapConnectionDoorType : uint8;
template<> struct TIsUEnumClass<ESnapConnectionDoorType> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<ESnapConnectionDoorType>();

#define FOREACH_ENUM_ESNAPCONNECTIONCONSTRAINT(op) \
	op(ESnapConnectionConstraint::Magnet) \
	op(ESnapConnectionConstraint::PlugMale) \
	op(ESnapConnectionConstraint::PlugFemale) \
	op(ESnapConnectionConstraint::RoomEntry) \
	op(ESnapConnectionConstraint::RoomExit) 

enum class ESnapConnectionConstraint : uint8;
template<> struct TIsUEnumClass<ESnapConnectionConstraint> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<ESnapConnectionConstraint>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
