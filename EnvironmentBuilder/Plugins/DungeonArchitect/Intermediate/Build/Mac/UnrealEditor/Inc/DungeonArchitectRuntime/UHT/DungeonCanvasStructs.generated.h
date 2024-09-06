// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/Canvas/DungeonCanvasStructs.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_DungeonCanvasStructs_generated_h
#error "DungeonCanvasStructs.generated.h already included, missing '#pragma once' in DungeonCanvasStructs.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonCanvasStructs_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonCanvasTrackedObject(); \
	friend struct Z_Construct_UClass_UDungeonCanvasTrackedObject_Statics; \
public: \
	DECLARE_CLASS(UDungeonCanvasTrackedObject, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonCanvasTrackedObject)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonCanvasTrackedObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonCanvasTrackedObject(UDungeonCanvasTrackedObject&&); \
	UDungeonCanvasTrackedObject(const UDungeonCanvasTrackedObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonCanvasTrackedObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonCanvasTrackedObject); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonCanvasTrackedObject) \
	NO_API virtual ~UDungeonCanvasTrackedObject();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h_12_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h_14_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonCanvasTrackedObject>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h_49_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDungeonCanvasOverlayInternalIcon_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDungeonCanvasOverlayInternalIcon>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDungeonCanvasOverlayIcon_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDungeonCanvasOverlayIcon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasStructs_h


#define FOREACH_ENUM_EDUNGEONCANVASICONCOORDINATESYSTEM(op) \
	op(EDungeonCanvasIconCoordinateSystem::Pixels) \
	op(EDungeonCanvasIconCoordinateSystem::WorldCoordinates) 

enum class EDungeonCanvasIconCoordinateSystem : uint8;
template<> struct TIsUEnumClass<EDungeonCanvasIconCoordinateSystem> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonCanvasIconCoordinateSystem>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
