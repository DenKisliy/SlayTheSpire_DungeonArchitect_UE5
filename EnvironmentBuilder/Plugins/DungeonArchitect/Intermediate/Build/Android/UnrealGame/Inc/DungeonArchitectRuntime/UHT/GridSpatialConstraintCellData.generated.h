// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builders/Common/SpatialConstraints/GridSpatialConstraintCellData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_GridSpatialConstraintCellData_generated_h
#error "GridSpatialConstraintCellData.generated.h already included, missing '#pragma once' in GridSpatialConstraintCellData.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridSpatialConstraintCellData_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintCellData_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FGridSpatialConstraintCellData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintCellData_h


#define FOREACH_ENUM_EGRIDSPATIALCELLOCCUPATION(op) \
	op(EGridSpatialCellOccupation::DontCare) \
	op(EGridSpatialCellOccupation::Occupied) \
	op(EGridSpatialCellOccupation::Empty) 

enum class EGridSpatialCellOccupation : uint8;
template<> struct TIsUEnumClass<EGridSpatialCellOccupation> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridSpatialCellOccupation>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
