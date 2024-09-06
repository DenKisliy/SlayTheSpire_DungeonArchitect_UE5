// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builders/Isaac/IsaacDungeonQuery.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FIsaacRoom;
#ifdef DUNGEONARCHITECTRUNTIME_IsaacDungeonQuery_generated_h
#error "IsaacDungeonQuery.generated.h already included, missing '#pragma once' in IsaacDungeonQuery.h"
#endif
#define DUNGEONARCHITECTRUNTIME_IsaacDungeonQuery_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRandomValidPlatform); \
	DECLARE_FUNCTION(execGetValidPlatformOnRoom); \
	DECLARE_FUNCTION(execContainsDoorBetween); \
	DECLARE_FUNCTION(execGetFurthestRooms); \
	DECLARE_FUNCTION(execGetRoom);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsaacDungeonQuery(); \
	friend struct Z_Construct_UClass_UIsaacDungeonQuery_Statics; \
public: \
	DECLARE_CLASS(UIsaacDungeonQuery, UDungeonQuery, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UIsaacDungeonQuery)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsaacDungeonQuery(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIsaacDungeonQuery(UIsaacDungeonQuery&&); \
	UIsaacDungeonQuery(const UIsaacDungeonQuery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsaacDungeonQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsaacDungeonQuery); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UIsaacDungeonQuery) \
	NO_API virtual ~UIsaacDungeonQuery();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_16_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_18_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UIsaacDungeonQuery>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
