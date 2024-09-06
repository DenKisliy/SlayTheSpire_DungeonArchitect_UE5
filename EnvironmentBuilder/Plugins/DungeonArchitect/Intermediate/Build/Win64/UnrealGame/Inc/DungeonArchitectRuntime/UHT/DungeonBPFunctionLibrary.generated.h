// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Utils/DungeonBPFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADungeon;
class UCanvasRenderTarget2D;
class ULevel;
class UObject;
class UTextureRenderTarget2D;
struct FDungeonLayoutData;
struct FLinearColor;
#ifdef DUNGEONARCHITECTRUNTIME_DungeonBPFunctionLibrary_generated_h
#error "DungeonBPFunctionLibrary.generated.h already included, missing '#pragma once' in DungeonBPFunctionLibrary.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonBPFunctionLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTextureNeedsRecreation); \
	DECLARE_FUNCTION(execDACreateCanvasRenderTexture); \
	DECLARE_FUNCTION(execGenerateDungeonLayoutBounds); \
	DECLARE_FUNCTION(execGetDungeonBounds); \
	DECLARE_FUNCTION(execGetDungeonLayout); \
	DECLARE_FUNCTION(execDAHashCombine); \
	DECLARE_FUNCTION(execDAHashTransform); \
	DECLARE_FUNCTION(execDAHashLocation); \
	DECLARE_FUNCTION(execDARecreateActorInLevel); \
	DECLARE_FUNCTION(execDAGetActorOfClass); \
	DECLARE_FUNCTION(execDAGetAllActorsOfClass); \
	DECLARE_FUNCTION(execDungeonObjectHasAuthority); \
	DECLARE_FUNCTION(execActorBelongsToDungeon); \
	DECLARE_FUNCTION(execSpawnDungeonOwnedActor);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonBPFunctionLibrary(); \
	friend struct Z_Construct_UClass_UDungeonBPFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UDungeonBPFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonBPFunctionLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonBPFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonBPFunctionLibrary(UDungeonBPFunctionLibrary&&); \
	UDungeonBPFunctionLibrary(const UDungeonBPFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonBPFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonBPFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonBPFunctionLibrary) \
	NO_API virtual ~UDungeonBPFunctionLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_16_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonBPFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonBPFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
