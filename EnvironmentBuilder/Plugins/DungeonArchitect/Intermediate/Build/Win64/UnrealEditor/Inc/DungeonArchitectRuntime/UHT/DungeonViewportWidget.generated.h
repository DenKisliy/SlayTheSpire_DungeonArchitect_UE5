// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Utils/Widgets/DungeonViewportWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDungeonPreviewScene;
class UTextureCube;
class UWorld;
enum class EDungeonViewportCameraTrackMode : uint8;
#ifdef DUNGEONARCHITECTRUNTIME_DungeonViewportWidget_generated_h
#error "DungeonViewportWidget.generated.h already included, missing '#pragma once' in DungeonViewportWidget.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonViewportWidget_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawn); \
	DECLARE_FUNCTION(execSetupSky); \
	DECLARE_FUNCTION(execGetSceneWorld); \
	DECLARE_FUNCTION(execCreateDungeonPreviewScene);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonPreviewScene(); \
	friend struct Z_Construct_UClass_UDungeonPreviewScene_Statics; \
public: \
	DECLARE_CLASS(UDungeonPreviewScene, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonPreviewScene)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonPreviewScene(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonPreviewScene(UDungeonPreviewScene&&); \
	UDungeonPreviewScene(const UDungeonPreviewScene&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonPreviewScene); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonPreviewScene); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonPreviewScene) \
	NO_API virtual ~UDungeonPreviewScene();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_23_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_25_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonPreviewScene>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_294_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDungeonViewportKeyBindings_Statics; \
	DUNGEONARCHITECTRUNTIME_API static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDungeonViewportKeyBindings>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_319_DELEGATE \
DUNGEONARCHITECTRUNTIME_API void FDungeonViewportFreeCameraBack_DelegateWrapper(const FMulticastScriptDelegate& DungeonViewportFreeCameraBack);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_323_RPC_WRAPPERS \
	DECLARE_FUNCTION(execSwitchCameraMode); \
	DECLARE_FUNCTION(execSetViewRotation); \
	DECLARE_FUNCTION(execGetViewRotation); \
	DECLARE_FUNCTION(execSetViewLocation); \
	DECLARE_FUNCTION(execGetViewLocation); \
	DECLARE_FUNCTION(execSetPreviewScene);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_323_ACCESSORS \
static void GetBackgroundColor_WrapperImpl(const void* Object, void* OutValue); \
static void SetBackgroundColor_WrapperImpl(void* Object, const void* InValue);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_323_INCLASS \
private: \
	static void StaticRegisterNativesUDungeonViewportWidget(); \
	friend struct Z_Construct_UClass_UDungeonViewportWidget_Statics; \
public: \
	DECLARE_CLASS(UDungeonViewportWidget, UContentWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonViewportWidget)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_323_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonViewportWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonViewportWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonViewportWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonViewportWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonViewportWidget(UDungeonViewportWidget&&); \
	UDungeonViewportWidget(const UDungeonViewportWidget&); \
public: \
	NO_API virtual ~UDungeonViewportWidget();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_321_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_323_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_323_RPC_WRAPPERS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_323_ACCESSORS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_323_INCLASS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h_323_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonViewportWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_Widgets_DungeonViewportWidget_h


#define FOREACH_ENUM_EDUNGEONVIEWPORTCAMERATRACKMODE(op) \
	op(EDungeonViewportCameraTrackMode::TrackPlayerCharacter) \
	op(EDungeonViewportCameraTrackMode::FreeMovement) 

enum class EDungeonViewportCameraTrackMode : uint8;
template<> struct TIsUEnumClass<EDungeonViewportCameraTrackMode> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonViewportCameraTrackMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
