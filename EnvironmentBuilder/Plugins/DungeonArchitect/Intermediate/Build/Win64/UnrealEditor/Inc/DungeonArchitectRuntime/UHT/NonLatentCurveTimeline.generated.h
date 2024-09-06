// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Utils/NonLatentCurveTimeline.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FNonLatentCurveTimeline;
#ifdef DUNGEONARCHITECTRUNTIME_NonLatentCurveTimeline_generated_h
#error "NonLatentCurveTimeline.generated.h already included, missing '#pragma once' in NonLatentCurveTimeline.h"
#endif
#define DUNGEONARCHITECTRUNTIME_NonLatentCurveTimeline_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_NonLatentCurveTimeline_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNonLatentCurveTimeline_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FNonLatentCurveTimeline>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_NonLatentCurveTimeline_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetValue); \
	DECLARE_FUNCTION(execTickBackward); \
	DECLARE_FUNCTION(execTickForward);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_NonLatentCurveTimeline_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNonLatentCurveTimelineBlueprintFunctionLib(); \
	friend struct Z_Construct_UClass_UNonLatentCurveTimelineBlueprintFunctionLib_Statics; \
public: \
	DECLARE_CLASS(UNonLatentCurveTimelineBlueprintFunctionLib, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UNonLatentCurveTimelineBlueprintFunctionLib)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_NonLatentCurveTimeline_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNonLatentCurveTimelineBlueprintFunctionLib(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UNonLatentCurveTimelineBlueprintFunctionLib(UNonLatentCurveTimelineBlueprintFunctionLib&&); \
	UNonLatentCurveTimelineBlueprintFunctionLib(const UNonLatentCurveTimelineBlueprintFunctionLib&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNonLatentCurveTimelineBlueprintFunctionLib); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNonLatentCurveTimelineBlueprintFunctionLib); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNonLatentCurveTimelineBlueprintFunctionLib) \
	NO_API virtual ~UNonLatentCurveTimelineBlueprintFunctionLib();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_NonLatentCurveTimeline_h_21_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_NonLatentCurveTimeline_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_NonLatentCurveTimeline_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_NonLatentCurveTimeline_h_23_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_NonLatentCurveTimeline_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UNonLatentCurveTimelineBlueprintFunctionLib>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_NonLatentCurveTimeline_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
