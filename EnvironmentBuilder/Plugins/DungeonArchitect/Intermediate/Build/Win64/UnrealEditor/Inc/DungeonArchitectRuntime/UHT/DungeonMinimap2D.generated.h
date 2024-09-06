// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/Minimap/DungeonMinimap2D.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADungeon;
class UMaterialInterface;
#ifdef DUNGEONARCHITECTRUNTIME_DungeonMinimap2D_generated_h
#error "DungeonMinimap2D.generated.h already included, missing '#pragma once' in DungeonMinimap2D.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonMinimap2D_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonMinimapBase(); \
	friend struct Z_Construct_UClass_ADungeonMinimapBase_Statics; \
public: \
	DECLARE_CLASS(ADungeonMinimapBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(ADungeonMinimapBase)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADungeonMinimapBase(ADungeonMinimapBase&&); \
	ADungeonMinimapBase(const ADungeonMinimapBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonMinimapBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonMinimapBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ADungeonMinimapBase) \
	NO_API virtual ~ADungeonMinimapBase();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_21_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_23_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class ADungeonMinimapBase>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBuildLayout); \
	DECLARE_FUNCTION(execUpdateMaterial); \
	DECLARE_FUNCTION(execCreateMaterialInstanceFromTemplate); \
	DECLARE_FUNCTION(execCreateMaterialInstance);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonMinimap2D(); \
	friend struct Z_Construct_UClass_ADungeonMinimap2D_Statics; \
public: \
	DECLARE_CLASS(ADungeonMinimap2D, ADungeonMinimapBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(ADungeonMinimap2D)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_62_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADungeonMinimap2D(ADungeonMinimap2D&&); \
	ADungeonMinimap2D(const ADungeonMinimap2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonMinimap2D); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonMinimap2D); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonMinimap2D) \
	NO_API virtual ~ADungeonMinimap2D();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_60_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_62_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h_62_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class ADungeonMinimap2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Minimap_DungeonMinimap2D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
