// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Game/DungeonBuildSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADungeon;
#ifdef DUNGEONARCHITECTRUNTIME_DungeonBuildSystem_generated_h
#error "DungeonBuildSystem.generated.h already included, missing '#pragma once' in DungeonBuildSystem.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonBuildSystem_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanStartMatch_Implementation(); \
	virtual void MulticastBuildDungeon_Implementation(int32 InSeed); \
	virtual bool ServerBuildDungeon_Validate(int32 ); \
	virtual void ServerBuildDungeon_Implementation(int32 InSeed); \
	DECLARE_FUNCTION(execOnBuildComplete); \
	DECLARE_FUNCTION(execOnInitialChunksLoaded); \
	DECLARE_FUNCTION(execCanStartMatch); \
	DECLARE_FUNCTION(execMulticastBuildDungeon); \
	DECLARE_FUNCTION(execServerBuildDungeon);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_14_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonBuildSystemComponent(); \
	friend struct Z_Construct_UClass_UDungeonBuildSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UDungeonBuildSystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonBuildSystemComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonBuildSystemComponent(UDungeonBuildSystemComponent&&); \
	UDungeonBuildSystemComponent(const UDungeonBuildSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonBuildSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonBuildSystemComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDungeonBuildSystemComponent) \
	NO_API virtual ~UDungeonBuildSystemComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_12_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_14_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_14_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonBuildSystemComponent>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonBuildSystem(); \
	friend struct Z_Construct_UClass_ADungeonBuildSystem_Statics; \
public: \
	DECLARE_CLASS(ADungeonBuildSystem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(ADungeonBuildSystem)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADungeonBuildSystem(ADungeonBuildSystem&&); \
	ADungeonBuildSystem(const ADungeonBuildSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonBuildSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonBuildSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonBuildSystem) \
	NO_API virtual ~ADungeonBuildSystem();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_64_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_66_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class ADungeonBuildSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
