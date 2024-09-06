// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Dungeon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADungeon;
class UDungeonBuilder;
class UDungeonQuery;
#ifdef DUNGEONARCHITECTRUNTIME_Dungeon_generated_h
#error "Dungeon.generated.h already included, missing '#pragma once' in Dungeon.h"
#endif
#define DUNGEONARCHITECTRUNTIME_Dungeon_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_23_DELEGATE \
DUNGEONARCHITECTRUNTIME_API void FDungeonBuildCompleteBindableEvent_DelegateWrapper(const FMulticastScriptDelegate& DungeonBuildCompleteBindableEvent, ADungeon* Dungeon, bool bSuccess);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetDungeonId); \
	DECLARE_FUNCTION(execRandomizeSeed); \
	DECLARE_FUNCTION(execGetQuery); \
	DECLARE_FUNCTION(execSetBuilderClass); \
	DECLARE_FUNCTION(execDestroyDungeon); \
	DECLARE_FUNCTION(execBuildDungeon);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeon(); \
	friend struct Z_Construct_UClass_ADungeon_Statics; \
public: \
	DECLARE_CLASS(ADungeon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(ADungeon)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADungeon(ADungeon&&); \
	ADungeon(const ADungeon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeon); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADungeon) \
	NO_API virtual ~ADungeon();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_62_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_64_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class ADungeon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Dungeon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
