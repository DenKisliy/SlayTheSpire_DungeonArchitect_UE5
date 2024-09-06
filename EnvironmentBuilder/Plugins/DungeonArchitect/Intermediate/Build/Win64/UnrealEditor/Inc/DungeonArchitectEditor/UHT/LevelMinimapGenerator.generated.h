// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/MiniMap/LevelMinimapGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UWorld;
#ifdef DUNGEONARCHITECTEDITOR_LevelMinimapGenerator_generated_h
#error "LevelMinimapGenerator.generated.h already included, missing '#pragma once' in LevelMinimapGenerator.h"
#endif
#define DUNGEONARCHITECTEDITOR_LevelMinimapGenerator_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelMinimapGeneratorSettings(); \
	friend struct Z_Construct_UClass_ULevelMinimapGeneratorSettings_Statics; \
public: \
	DECLARE_CLASS(ULevelMinimapGeneratorSettings, UAssetUserData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectEditor"), NO_API) \
	DECLARE_SERIALIZER(ULevelMinimapGeneratorSettings)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelMinimapGeneratorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelMinimapGeneratorSettings(ULevelMinimapGeneratorSettings&&); \
	ULevelMinimapGeneratorSettings(const ULevelMinimapGeneratorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelMinimapGeneratorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelMinimapGeneratorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelMinimapGeneratorSettings) \
	NO_API virtual ~ULevelMinimapGeneratorSettings();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_10_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_12_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<class ULevelMinimapGeneratorSettings>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateMinimapMeshFromWorld);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelMinimapGenerator(); \
	friend struct Z_Construct_UClass_ULevelMinimapGenerator_Statics; \
public: \
	DECLARE_CLASS(ULevelMinimapGenerator, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectEditor"), NO_API) \
	DECLARE_SERIALIZER(ULevelMinimapGenerator)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelMinimapGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ULevelMinimapGenerator(ULevelMinimapGenerator&&); \
	ULevelMinimapGenerator(const ULevelMinimapGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelMinimapGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelMinimapGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelMinimapGenerator) \
	NO_API virtual ~ULevelMinimapGenerator();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_102_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_104_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_104_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h_104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<class ULevelMinimapGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_MiniMap_LevelMinimapGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
