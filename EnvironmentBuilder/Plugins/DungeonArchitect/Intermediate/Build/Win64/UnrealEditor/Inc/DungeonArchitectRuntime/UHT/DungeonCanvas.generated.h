// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/Canvas/DungeonCanvas.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADungeon;
class APawn;
class UCanvas;
class UCanvasRenderTarget2D;
class UDungeonCanvasTrackedObject;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class UTextureRenderTarget2D;
struct FDungeonCanvasDrawContext;
struct FDungeonCanvasDrawSettings;
struct FDungeonCanvasItemFogOfWarSettings;
struct FDungeonCanvasTrackedActorRegistryItem;
struct FLinearColor;
#ifdef DUNGEONARCHITECTRUNTIME_DungeonCanvas_generated_h
#error "DungeonCanvas.generated.h already included, missing '#pragma once' in DungeonCanvas.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonCanvas_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonCanvasActorIconFilter(); \
	friend struct Z_Construct_UClass_UDungeonCanvasActorIconFilter_Statics; \
public: \
	DECLARE_CLASS(UDungeonCanvasActorIconFilter, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonCanvasActorIconFilter)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_64_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonCanvasActorIconFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonCanvasActorIconFilter(UDungeonCanvasActorIconFilter&&); \
	UDungeonCanvasActorIconFilter(const UDungeonCanvasActorIconFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonCanvasActorIconFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonCanvasActorIconFilter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonCanvasActorIconFilter) \
	NO_API virtual ~UDungeonCanvasActorIconFilter();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_62_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_64_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonCanvasActorIconFilter>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_72_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonCanvasCircularFrameActorIconFilter(); \
	friend struct Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics; \
public: \
	DECLARE_CLASS(UDungeonCanvasCircularFrameActorIconFilter, UDungeonCanvasActorIconFilter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonCanvasCircularFrameActorIconFilter)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_72_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonCanvasCircularFrameActorIconFilter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonCanvasCircularFrameActorIconFilter(UDungeonCanvasCircularFrameActorIconFilter&&); \
	UDungeonCanvasCircularFrameActorIconFilter(const UDungeonCanvasCircularFrameActorIconFilter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonCanvasCircularFrameActorIconFilter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonCanvasCircularFrameActorIconFilter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonCanvasCircularFrameActorIconFilter) \
	NO_API virtual ~UDungeonCanvasCircularFrameActorIconFilter();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_70_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_72_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_72_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_72_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonCanvasCircularFrameActorIconFilter>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_102_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDungeonCanvasDrawSettings>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDungeonCanvasDrawContext>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDungeonCanvasTrackedActorRegistryItem>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_165_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDungeonCanvasItemFogOfWarSettings>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_179_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetTextures); \
	DECLARE_FUNCTION(execInitFogOfWarMaterial); \
	DECLARE_FUNCTION(execInitCanvasMaterial); \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execDraw); \
	DECLARE_FUNCTION(execInitialize);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_179_CALLBACK_WRAPPERS
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_179_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonCanvasEffectBase(); \
	friend struct Z_Construct_UClass_UDungeonCanvasEffectBase_Statics; \
public: \
	DECLARE_CLASS(UDungeonCanvasEffectBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonCanvasEffectBase)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_179_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonCanvasEffectBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonCanvasEffectBase(UDungeonCanvasEffectBase&&); \
	UDungeonCanvasEffectBase(const UDungeonCanvasEffectBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonCanvasEffectBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonCanvasEffectBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonCanvasEffectBase) \
	NO_API virtual ~UDungeonCanvasEffectBase();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_177_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_179_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_179_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_179_CALLBACK_WRAPPERS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_179_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_179_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonCanvasEffectBase>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_222_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonCanvasMaterialLayer(); \
	friend struct Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics; \
public: \
	DECLARE_CLASS(UDungeonCanvasMaterialLayer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonCanvasMaterialLayer)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_222_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonCanvasMaterialLayer(UDungeonCanvasMaterialLayer&&); \
	UDungeonCanvasMaterialLayer(const UDungeonCanvasMaterialLayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonCanvasMaterialLayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonCanvasMaterialLayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDungeonCanvasMaterialLayer) \
	NO_API virtual ~UDungeonCanvasMaterialLayer();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_220_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_222_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_222_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_222_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonCanvasMaterialLayer>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_250_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TickPlayer_Implementation(); \
	virtual void SetupPlayer_Implementation(APawn* NewPlayerPawn, FDungeonCanvasItemFogOfWarSettings FogOfWarSettings); \
	virtual UCanvasRenderTarget2D* GetFogOfWarVisibilityTexture_Implementation(); \
	virtual UCanvasRenderTarget2D* GetFogOfWarExploredTexture_Implementation(); \
	DECLARE_FUNCTION(execSyncFogOfWarItemState); \
	DECLARE_FUNCTION(execOnDungeonBuildComplete); \
	DECLARE_FUNCTION(execCreateMaterialInstance); \
	DECLARE_FUNCTION(execGetCanvasBaseMaterial); \
	DECLARE_FUNCTION(execTickPlayer); \
	DECLARE_FUNCTION(execSetupPlayer); \
	DECLARE_FUNCTION(execGetFogOfWarVisibilityTexture); \
	DECLARE_FUNCTION(execGetFogOfWarExploredTexture); \
	DECLARE_FUNCTION(execAddFogOfWarExplorer); \
	DECLARE_FUNCTION(execSetHeightRangeCustom); \
	DECLARE_FUNCTION(execSetHeightRangeAcrossAllFloors); \
	DECLARE_FUNCTION(execSetHeightRangeForMultipleFloors); \
	DECLARE_FUNCTION(execInsideActiveFloorHeightRange); \
	DECLARE_FUNCTION(execGetFloorIndexAtHeight); \
	DECLARE_FUNCTION(execSetHeightRangeForSingleFloor); \
	DECLARE_FUNCTION(execSetCameraWorldTransform); \
	DECLARE_FUNCTION(execSetPlayerCanvasRotation); \
	DECLARE_FUNCTION(execSetCameraSize); \
	DECLARE_FUNCTION(execSetCameraLocation); \
	DECLARE_FUNCTION(execDrawDungeonLayout); \
	DECLARE_FUNCTION(execCreateManagedTexture); \
	DECLARE_FUNCTION(execRequestUpdate); \
	DECLARE_FUNCTION(execRequestDraw); \
	DECLARE_FUNCTION(execRequestInitialize); \
	DECLARE_FUNCTION(execAddTrackedOverlayActor); \
	DECLARE_FUNCTION(execGetTrackedOverlayActors);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_250_CALLBACK_WRAPPERS
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_250_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonCanvas(); \
	friend struct Z_Construct_UClass_ADungeonCanvas_Statics; \
public: \
	DECLARE_CLASS(ADungeonCanvas, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(ADungeonCanvas)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_250_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADungeonCanvas(ADungeonCanvas&&); \
	ADungeonCanvas(const ADungeonCanvas&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonCanvas); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonCanvas); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonCanvas) \
	NO_API virtual ~ADungeonCanvas();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_248_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_250_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_250_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_250_CALLBACK_WRAPPERS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_250_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_250_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class ADungeonCanvas>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
