// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Utils/DungeonModelHelper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRectangle;
#ifdef DUNGEONARCHITECTRUNTIME_DungeonModelHelper_generated_h
#error "DungeonModelHelper.generated.h already included, missing '#pragma once' in DungeonModelHelper.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonModelHelper_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonModelHelper_h_18_RPC_WRAPPERS \
	DECLARE_FUNCTION(execGetRectAreaPoints); \
	DECLARE_FUNCTION(execGetRectBorderPoints); \
	DECLARE_FUNCTION(execGetCenterExtent); \
	DECLARE_FUNCTION(execExpandBounds); \
	DECLARE_FUNCTION(execMakeIntVector); \
	DECLARE_FUNCTION(execMakeVector);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonModelHelper_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUDungeonModelHelper(); \
	friend struct Z_Construct_UClass_UDungeonModelHelper_Statics; \
public: \
	DECLARE_CLASS(UDungeonModelHelper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonModelHelper)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonModelHelper_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonModelHelper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonModelHelper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonModelHelper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonModelHelper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonModelHelper(UDungeonModelHelper&&); \
	UDungeonModelHelper(const UDungeonModelHelper&); \
public: \
	NO_API virtual ~UDungeonModelHelper();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonModelHelper_h_16_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonModelHelper_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonModelHelper_h_18_RPC_WRAPPERS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonModelHelper_h_18_INCLASS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonModelHelper_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonModelHelper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonModelHelper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
