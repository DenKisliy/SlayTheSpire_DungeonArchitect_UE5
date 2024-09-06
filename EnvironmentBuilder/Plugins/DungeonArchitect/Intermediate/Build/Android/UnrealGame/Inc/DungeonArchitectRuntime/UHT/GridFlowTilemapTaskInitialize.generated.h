// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskInitialize.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_GridFlowTilemapTaskInitialize_generated_h
#error "GridFlowTilemapTaskInitialize.generated.h already included, missing '#pragma once' in GridFlowTilemapTaskInitialize.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridFlowTilemapTaskInitialize_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridFlowTilemapTaskInitialize(); \
	friend struct Z_Construct_UClass_UGridFlowTilemapTaskInitialize_Statics; \
public: \
	DECLARE_CLASS(UGridFlowTilemapTaskInitialize, UFlowTilemapTask, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridFlowTilemapTaskInitialize)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridFlowTilemapTaskInitialize(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGridFlowTilemapTaskInitialize(UGridFlowTilemapTaskInitialize&&); \
	UGridFlowTilemapTaskInitialize(const UGridFlowTilemapTaskInitialize&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridFlowTilemapTaskInitialize); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridFlowTilemapTaskInitialize); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridFlowTilemapTaskInitialize) \
	NO_API virtual ~UGridFlowTilemapTaskInitialize();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_65_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_67_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h_67_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UGridFlowTilemapTaskInitialize>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskInitialize_h


#define FOREACH_ENUM_EGRIDFLOWTILEMAPWALLGENERATIONMETHOD(op) \
	op(EGridFlowTilemapWallGenerationMethod::WallAsTiles) \
	op(EGridFlowTilemapWallGenerationMethod::WallAsEdges) 

enum class EGridFlowTilemapWallGenerationMethod : uint8;
template<> struct TIsUEnumClass<EGridFlowTilemapWallGenerationMethod> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridFlowTilemapWallGenerationMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
