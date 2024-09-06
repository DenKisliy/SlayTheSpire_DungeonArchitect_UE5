// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/LevelStreaming/Interfaces/DungeonStreamingChunkEvent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADungeon;
#ifdef DUNGEONARCHITECTRUNTIME_DungeonStreamingChunkEvent_generated_h
#error "DungeonStreamingChunkEvent.generated.h already included, missing '#pragma once' in DungeonStreamingChunkEvent.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonStreamingChunkEvent_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingChunkEvent_h_13_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingChunkEvent_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonStreamingChunkEventInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonStreamingChunkEventInterface(UDungeonStreamingChunkEventInterface&&); \
	UDungeonStreamingChunkEventInterface(const UDungeonStreamingChunkEventInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonStreamingChunkEventInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonStreamingChunkEventInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonStreamingChunkEventInterface) \
	NO_API virtual ~UDungeonStreamingChunkEventInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingChunkEvent_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDungeonStreamingChunkEventInterface(); \
	friend struct Z_Construct_UClass_UDungeonStreamingChunkEventInterface_Statics; \
public: \
	DECLARE_CLASS(UDungeonStreamingChunkEventInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonStreamingChunkEventInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingChunkEvent_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingChunkEvent_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingChunkEvent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingChunkEvent_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDungeonStreamingChunkEventInterface() {} \
public: \
	typedef UDungeonStreamingChunkEventInterface UClassType; \
	typedef IDungeonStreamingChunkEventInterface ThisClass; \
	static void Execute_OnChunkHidden(UObject* O, ADungeon* OwningDungeon); \
	static void Execute_OnChunkLoaded(UObject* O, ADungeon* OwningDungeon); \
	static void Execute_OnChunkUnloaded(UObject* O, ADungeon* OwningDungeon); \
	static void Execute_OnChunkVisible(UObject* O, ADungeon* OwningDungeon); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingChunkEvent_h_10_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingChunkEvent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingChunkEvent_h_13_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingChunkEvent_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonStreamingChunkEventInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingChunkEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
