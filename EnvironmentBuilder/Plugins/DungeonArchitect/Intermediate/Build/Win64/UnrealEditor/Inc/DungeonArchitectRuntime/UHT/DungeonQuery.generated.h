// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/DungeonQuery.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_DungeonQuery_generated_h
#error "DungeonQuery.generated.h already included, missing '#pragma once' in DungeonQuery.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonQuery_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearAllState); \
	DECLARE_FUNCTION(execGetString); \
	DECLARE_FUNCTION(execGetVector); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execGetBool); \
	DECLARE_FUNCTION(execGetInt); \
	DECLARE_FUNCTION(execSetString); \
	DECLARE_FUNCTION(execSetVector); \
	DECLARE_FUNCTION(execSetFloat); \
	DECLARE_FUNCTION(execSetBool); \
	DECLARE_FUNCTION(execSetInt);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonQueryUserState(); \
	friend struct Z_Construct_UClass_UDungeonQueryUserState_Statics; \
public: \
	DECLARE_CLASS(UDungeonQueryUserState, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonQueryUserState)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonQueryUserState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonQueryUserState(UDungeonQueryUserState&&); \
	UDungeonQueryUserState(const UDungeonQueryUserState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonQueryUserState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonQueryUserState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonQueryUserState) \
	NO_API virtual ~UDungeonQueryUserState();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_10_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_12_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonQueryUserState>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonQuery(); \
	friend struct Z_Construct_UClass_UDungeonQuery_Statics; \
public: \
	DECLARE_CLASS(UDungeonQuery, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonQuery)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonQuery(UDungeonQuery&&); \
	UDungeonQuery(const UDungeonQuery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonQuery); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDungeonQuery) \
	NO_API virtual ~UDungeonQuery();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_56_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_58_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonQuery>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonQuery_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
