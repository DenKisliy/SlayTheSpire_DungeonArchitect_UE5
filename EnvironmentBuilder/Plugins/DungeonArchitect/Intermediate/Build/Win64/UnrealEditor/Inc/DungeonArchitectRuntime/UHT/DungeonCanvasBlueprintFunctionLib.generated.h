// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/Canvas/DungeonCanvasBlueprintFunctionLib.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCanvasRenderTarget2D;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture;
struct FDungeonCanvasDrawContext;
struct FDungeonCanvasOverlayIcon;
struct FDungeonCanvasOverlayInternalIcon;
struct FDungeonLayoutData;
struct FLinearColor;
#ifdef DUNGEONARCHITECTRUNTIME_DungeonCanvasBlueprintFunctionLib_generated_h
#error "DungeonCanvasBlueprintFunctionLib.generated.h already included, missing '#pragma once' in DungeonCanvasBlueprintFunctionLib.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonCanvasBlueprintFunctionLib_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintFunctionLib_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUpdateFogOfWarTexture); \
	DECLARE_FUNCTION(execSetCanvasMaterialWorldBounds); \
	DECLARE_FUNCTION(execSetCanvasMaterialTextureParameter); \
	DECLARE_FUNCTION(execSetCanvasMaterialColorParameter); \
	DECLARE_FUNCTION(execSetCanvasMaterialVectorParameter); \
	DECLARE_FUNCTION(execSetCanvasMaterialScalarParameter); \
	DECLARE_FUNCTION(execDungeonCanvasDrawTrackedActorIcons); \
	DECLARE_FUNCTION(execDungeonCanvasDrawStairIcons); \
	DECLARE_FUNCTION(execDungeonCanvasDrawLayoutIcons); \
	DECLARE_FUNCTION(execDungeonCanvasDrawMaterial); \
	DECLARE_FUNCTION(execBlurTexture5x); \
	DECLARE_FUNCTION(execBlurTexture3x); \
	DECLARE_FUNCTION(execUpdateDynamicOcclusions); \
	DECLARE_FUNCTION(execGenerateVoronoiSdfEffect); \
	DECLARE_FUNCTION(execGenerateSDF);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintFunctionLib_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonCanvasBlueprintFunctionLib(); \
	friend struct Z_Construct_UClass_UDungeonCanvasBlueprintFunctionLib_Statics; \
public: \
	DECLARE_CLASS(UDungeonCanvasBlueprintFunctionLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonCanvasBlueprintFunctionLib)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintFunctionLib_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonCanvasBlueprintFunctionLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonCanvasBlueprintFunctionLib(UDungeonCanvasBlueprintFunctionLib&&); \
	UDungeonCanvasBlueprintFunctionLib(const UDungeonCanvasBlueprintFunctionLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonCanvasBlueprintFunctionLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonCanvasBlueprintFunctionLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonCanvasBlueprintFunctionLib) \
	NO_API virtual ~UDungeonCanvasBlueprintFunctionLib();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintFunctionLib_h_16_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintFunctionLib_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintFunctionLib_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintFunctionLib_h_18_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintFunctionLib_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonCanvasBlueprintFunctionLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprintFunctionLib_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
