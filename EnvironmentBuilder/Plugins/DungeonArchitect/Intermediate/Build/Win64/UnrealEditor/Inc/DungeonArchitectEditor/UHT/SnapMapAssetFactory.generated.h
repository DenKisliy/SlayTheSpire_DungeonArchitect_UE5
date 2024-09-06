// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/LevelEditor/Assets/SnapMap/SnapMapAssetFactory.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTEDITOR_SnapMapAssetFactory_generated_h
#error "SnapMapAssetFactory.generated.h already included, missing '#pragma once' in SnapMapAssetFactory.h"
#endif
#define DUNGEONARCHITECTEDITOR_SnapMapAssetFactory_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapMap_SnapMapAssetFactory_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSnapMapAssetFactory(); \
	friend struct Z_Construct_UClass_USnapMapAssetFactory_Statics; \
public: \
	DECLARE_CLASS(USnapMapAssetFactory, UFactory, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectEditor"), NO_API) \
	DECLARE_SERIALIZER(USnapMapAssetFactory)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapMap_SnapMapAssetFactory_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USnapMapAssetFactory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnapMapAssetFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnapMapAssetFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnapMapAssetFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USnapMapAssetFactory(USnapMapAssetFactory&&); \
	USnapMapAssetFactory(const USnapMapAssetFactory&); \
public: \
	NO_API virtual ~USnapMapAssetFactory();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapMap_SnapMapAssetFactory_h_8_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapMap_SnapMapAssetFactory_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapMap_SnapMapAssetFactory_h_10_INCLASS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapMap_SnapMapAssetFactory_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<class USnapMapAssetFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_SnapMap_SnapMapAssetFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
