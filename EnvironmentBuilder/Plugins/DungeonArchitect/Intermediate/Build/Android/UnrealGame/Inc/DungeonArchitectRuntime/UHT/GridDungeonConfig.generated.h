// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builders/Grid/GridDungeonConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_GridDungeonConfig_generated_h
#error "GridDungeonConfig.generated.h already included, missing '#pragma once' in GridDungeonConfig.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridDungeonConfig_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUGridDungeonConfig(); \
	friend struct Z_Construct_UClass_UGridDungeonConfig_Statics; \
public: \
	DECLARE_CLASS(UGridDungeonConfig, UDungeonConfig, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDungeonConfig)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridDungeonConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridDungeonConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDungeonConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDungeonConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGridDungeonConfig(UGridDungeonConfig&&); \
	UGridDungeonConfig(const UGridDungeonConfig&); \
public: \
	NO_API virtual ~UGridDungeonConfig();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_17_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_19_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UGridDungeonConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonConfig_h


#define FOREACH_ENUM_EGRIDDUNGEONWALLTYPE(op) \
	op(EGridDungeonWallType::WallsAsEdges) \
	op(EGridDungeonWallType::WallsAsTileBlocks) 

enum class EGridDungeonWallType : uint8;
template<> struct TIsUEnumClass<EGridDungeonWallType> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridDungeonWallType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
