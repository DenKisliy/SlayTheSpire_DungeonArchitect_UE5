// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Utils/CommonStructs.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_CommonStructs_generated_h
#error "CommonStructs.generated.h already included, missing '#pragma once' in CommonStructs.h"
#endif
#define DUNGEONARCHITECTRUNTIME_CommonStructs_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_CommonStructs_h


#define FOREACH_ENUM_EDUNGEONARCHITECTIMAGECHANNEL(op) \
	op(EDungeonArchitectImageChannel::Red) \
	op(EDungeonArchitectImageChannel::Green) \
	op(EDungeonArchitectImageChannel::Blue) \
	op(EDungeonArchitectImageChannel::Alpha) 

enum class EDungeonArchitectImageChannel : uint8;
template<> struct TIsUEnumClass<EDungeonArchitectImageChannel> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonArchitectImageChannel>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
