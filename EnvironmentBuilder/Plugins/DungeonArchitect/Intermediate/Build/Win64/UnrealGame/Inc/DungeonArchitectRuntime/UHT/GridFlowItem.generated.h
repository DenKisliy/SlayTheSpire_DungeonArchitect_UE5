// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_GridFlowItem_generated_h
#error "GridFlowItem.generated.h already included, missing '#pragma once' in GridFlowItem.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridFlowItem_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Common_GridFlowItem_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics; \
	DUNGEONARCHITECTRUNTIME_API static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FGridFlowTilemapItemPlacementSettings>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Common_GridFlowItem_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridFlowGraphItem(); \
	friend struct Z_Construct_UClass_UGridFlowGraphItem_Statics; \
public: \
	DECLARE_CLASS(UGridFlowGraphItem, UFlowGraphItem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridFlowGraphItem)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Common_GridFlowItem_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridFlowGraphItem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGridFlowGraphItem(UGridFlowGraphItem&&); \
	UGridFlowGraphItem(const UGridFlowGraphItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridFlowGraphItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridFlowGraphItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridFlowGraphItem) \
	NO_API virtual ~UGridFlowGraphItem();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Common_GridFlowItem_h_27_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Common_GridFlowItem_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Common_GridFlowItem_h_29_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Common_GridFlowItem_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UGridFlowGraphItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Common_GridFlowItem_h


#define FOREACH_ENUM_EGRIDFLOWTILEMAPITEMPLACEMENTMODE(op) \
	op(EGridFlowTilemapItemPlacementMode::Random) \
	op(EGridFlowTilemapItemPlacementMode::NearEdges) \
	op(EGridFlowTilemapItemPlacementMode::Center) 

enum class EGridFlowTilemapItemPlacementMode;
template<> struct TIsUEnumClass<EGridFlowTilemapItemPlacementMode> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridFlowTilemapItemPlacementMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
