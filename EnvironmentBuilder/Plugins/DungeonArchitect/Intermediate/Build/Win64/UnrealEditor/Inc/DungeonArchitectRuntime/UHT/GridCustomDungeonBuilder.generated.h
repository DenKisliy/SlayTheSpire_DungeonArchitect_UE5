// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builders/GridCustom/GridCustomDungeonBuilder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGridDungeonConfig;
#ifdef DUNGEONARCHITECTRUNTIME_GridCustomDungeonBuilder_generated_h
#error "GridCustomDungeonBuilder.generated.h already included, missing '#pragma once' in GridCustomDungeonBuilder.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridCustomDungeonBuilder_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGenerateCustomLayout); \
	DECLARE_FUNCTION(execGetRandomOffset); \
	DECLARE_FUNCTION(execConnectRooms); \
	DECLARE_FUNCTION(execRegisterRoomAt); \
	DECLARE_FUNCTION(execRegisterRoom);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_CALLBACK_WRAPPERS
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridCustomDungeonBuilder(); \
	friend struct Z_Construct_UClass_UGridCustomDungeonBuilder_Statics; \
public: \
	DECLARE_CLASS(UGridCustomDungeonBuilder, UGridDungeonBuilder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridCustomDungeonBuilder)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGridCustomDungeonBuilder(UGridCustomDungeonBuilder&&); \
	UGridCustomDungeonBuilder(const UGridCustomDungeonBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridCustomDungeonBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridCustomDungeonBuilder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGridCustomDungeonBuilder) \
	NO_API virtual ~UGridCustomDungeonBuilder();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_21_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_CALLBACK_WRAPPERS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UGridCustomDungeonBuilder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
