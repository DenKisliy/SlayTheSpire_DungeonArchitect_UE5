// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builders/Isaac/IsaacDungeonModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_IsaacDungeonModel_generated_h
#error "IsaacDungeonModel.generated.h already included, missing '#pragma once' in IsaacDungeonModel.h"
#endif
#define DUNGEONARCHITECTRUNTIME_IsaacDungeonModel_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsaacRoomTile_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FIsaacRoomTile>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_36_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsaacRoomLayout_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FIsaacRoomLayout>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsaacRoom_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FIsaacRoom>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIsaacDoor_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FIsaacDoor>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveStylingFromRoom);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_127_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsaacDungeonModel(); \
	friend struct Z_Construct_UClass_UIsaacDungeonModel_Statics; \
public: \
	DECLARE_CLASS(UIsaacDungeonModel, UDungeonModel, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UIsaacDungeonModel)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_127_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsaacDungeonModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIsaacDungeonModel(UIsaacDungeonModel&&); \
	UIsaacDungeonModel(const UIsaacDungeonModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsaacDungeonModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsaacDungeonModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsaacDungeonModel) \
	NO_API virtual ~UIsaacDungeonModel();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_125_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_127_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_127_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_127_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h_127_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UIsaacDungeonModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonModel_h


#define FOREACH_ENUM_EISAACROOMTYPE(op) \
	op(EIsaacRoomType::Normal) \
	op(EIsaacRoomType::Spawn) \
	op(EIsaacRoomType::Treasure) \
	op(EIsaacRoomType::Boss) \
	op(EIsaacRoomType::Exit) 

enum class EIsaacRoomType : uint8;
template<> struct TIsUEnumClass<EIsaacRoomType> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EIsaacRoomType>();

#define FOREACH_ENUM_EISAACROOMTILETYPE(op) \
	op(EIsaacRoomTileType::Floor) \
	op(EIsaacRoomTileType::Door) \
	op(EIsaacRoomTileType::Empty) 

enum class EIsaacRoomTileType : uint8;
template<> struct TIsUEnumClass<EIsaacRoomTileType> { enum { Value = true }; };
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EIsaacRoomTileType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
