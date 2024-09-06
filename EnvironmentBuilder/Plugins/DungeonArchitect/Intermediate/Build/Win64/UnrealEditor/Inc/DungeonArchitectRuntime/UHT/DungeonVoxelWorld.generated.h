// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/Voxel/Scene/DungeonVoxelWorld.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_DungeonVoxelWorld_generated_h
#error "DungeonVoxelWorld.generated.h already included, missing '#pragma once' in DungeonVoxelWorld.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonVoxelWorld_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelWorld_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveBlock); \
	DECLARE_FUNCTION(execBuildWorld);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelWorld_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonVoxelWorld(); \
	friend struct Z_Construct_UClass_ADungeonVoxelWorld_Statics; \
public: \
	DECLARE_CLASS(ADungeonVoxelWorld, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(ADungeonVoxelWorld)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelWorld_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADungeonVoxelWorld(ADungeonVoxelWorld&&); \
	ADungeonVoxelWorld(const ADungeonVoxelWorld&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonVoxelWorld); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonVoxelWorld); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonVoxelWorld) \
	NO_API virtual ~ADungeonVoxelWorld();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelWorld_h_17_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelWorld_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelWorld_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelWorld_h_19_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelWorld_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class ADungeonVoxelWorld>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Voxel_Scene_DungeonVoxelWorld_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
