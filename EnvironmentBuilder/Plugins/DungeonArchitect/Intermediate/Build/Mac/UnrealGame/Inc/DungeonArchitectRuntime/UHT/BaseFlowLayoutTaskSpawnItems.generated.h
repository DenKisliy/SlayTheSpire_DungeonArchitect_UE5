// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_BaseFlowLayoutTaskSpawnItems_generated_h
#error "BaseFlowLayoutTaskSpawnItems.generated.h already included, missing '#pragma once' in BaseFlowLayoutTaskSpawnItems.h"
#endif
#define DUNGEONARCHITECTRUNTIME_BaseFlowLayoutTaskSpawnItems_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseFlowLayoutTaskSpawnItems(); \
	friend struct Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics; \
public: \
	DECLARE_CLASS(UBaseFlowLayoutTaskSpawnItems, UBaseFlowLayoutTask, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UBaseFlowLayoutTaskSpawnItems)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseFlowLayoutTaskSpawnItems(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseFlowLayoutTaskSpawnItems(UBaseFlowLayoutTaskSpawnItems&&); \
	UBaseFlowLayoutTaskSpawnItems(const UBaseFlowLayoutTaskSpawnItems&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseFlowLayoutTaskSpawnItems); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseFlowLayoutTaskSpawnItems); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseFlowLayoutTaskSpawnItems) \
	NO_API virtual ~UBaseFlowLayoutTaskSpawnItems();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_15_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_17_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UBaseFlowLayoutTaskSpawnItems>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h


#define FOREACH_ENUM_ERIDFLOWTASK_SPAWNITEMSMETHOD(op) \
	op(EridFlowTask_SpawnItemsMethod::RandomRange) \
	op(EridFlowTask_SpawnItemsMethod::LinearDifficulty) 

enum class EridFlowTask_SpawnItemsMethod : uint8;
template<> struct TIsUEnumClass<EridFlowTask_SpawnItemsMethod> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EridFlowTask_SpawnItemsMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
