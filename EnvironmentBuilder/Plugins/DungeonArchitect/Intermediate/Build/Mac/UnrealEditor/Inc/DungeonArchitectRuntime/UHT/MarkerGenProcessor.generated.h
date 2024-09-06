// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/MarkerGenerator/MarkerGenProcessor.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_MarkerGenProcessor_generated_h
#error "MarkerGenProcessor.generated.h already included, missing '#pragma once' in MarkerGenProcessor.h"
#endif
#define DUNGEONARCHITECTRUNTIME_MarkerGenProcessor_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenProcessor_h


#define FOREACH_ENUM_EMGMARKERLISTDUPLICATECHECKMETHOD(op) \
	op(EMGMarkerListDuplicateCheckMethod::None) \
	op(EMGMarkerListDuplicateCheckMethod::CheckLocationOnly) \
	op(EMGMarkerListDuplicateCheckMethod::CheckLocationAndRotation) \
	op(EMGMarkerListDuplicateCheckMethod::CheckFullTransform) 

enum class EMGMarkerListDuplicateCheckMethod;
template<> struct TIsUEnumClass<EMGMarkerListDuplicateCheckMethod> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EMGMarkerListDuplicateCheckMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
