// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/MarkerGenerator/PatternScript/PatternScriptVariable.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_PatternScriptVariable_generated_h
#error "PatternScriptVariable.generated.h already included, missing '#pragma once' in PatternScriptVariable.h"
#endif
#define DUNGEONARCHITECTRUNTIME_PatternScriptVariable_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptVariable_h


#define FOREACH_ENUM_EMGPATTERNSCRIPTVARDATATYPE(op) \
	op(EMGPatternScriptVarDataType::Unknown) \
	op(EMGPatternScriptVarDataType::Bool) \
	op(EMGPatternScriptVarDataType::Exec) 

enum class EMGPatternScriptVarDataType : uint8;
template<> struct TIsUEnumClass<EMGPatternScriptVarDataType> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EMGPatternScriptVarDataType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
