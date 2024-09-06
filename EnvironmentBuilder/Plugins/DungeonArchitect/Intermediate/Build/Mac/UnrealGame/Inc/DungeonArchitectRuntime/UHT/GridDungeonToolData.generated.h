// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builders/Grid/GridDungeonToolData.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_GridDungeonToolData_generated_h
#error "GridDungeonToolData.generated.h already included, missing '#pragma once' in GridDungeonToolData.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridDungeonToolData_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridToolPaintStrokeData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FGridToolPaintStrokeData>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridToolRectStrokeData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FGridToolRectStrokeData>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_43_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridDungeonToolData(); \
	friend struct Z_Construct_UClass_UGridDungeonToolData_Statics; \
public: \
	DECLARE_CLASS(UGridDungeonToolData, UDungeonToolData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDungeonToolData)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridDungeonToolData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGridDungeonToolData(UGridDungeonToolData&&); \
	UGridDungeonToolData(const UGridDungeonToolData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDungeonToolData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDungeonToolData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridDungeonToolData) \
	NO_API virtual ~UGridDungeonToolData();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_41_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_43_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_43_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h_43_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UGridDungeonToolData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonToolData_h


#define FOREACH_ENUM_EGRIDPAINTTOOLCELLTYPE(op) \
	op(EGridPaintToolCellType::Corridor) \
	op(EGridPaintToolCellType::Room) 

enum class EGridPaintToolCellType : uint8;
template<> struct TIsUEnumClass<EGridPaintToolCellType> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridPaintToolCellType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
