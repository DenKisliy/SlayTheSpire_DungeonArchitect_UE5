// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/LevelStreaming/DungeonLevelStreamingModel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADungeon;
class UDungeonStreamingChunk;
class UObject;
#ifdef DUNGEONARCHITECTRUNTIME_DungeonLevelStreamingModel_generated_h
#error "DungeonLevelStreamingModel.generated.h already included, missing '#pragma once' in DungeonLevelStreamingModel.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonLevelStreamingModel_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADungeonStreamingChunkLevelInstance(); \
	friend struct Z_Construct_UClass_ADungeonStreamingChunkLevelInstance_Statics; \
public: \
	DECLARE_CLASS(ADungeonStreamingChunkLevelInstance, ALevelInstance, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(ADungeonStreamingChunkLevelInstance)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADungeonStreamingChunkLevelInstance(ADungeonStreamingChunkLevelInstance&&); \
	ADungeonStreamingChunkLevelInstance(const ADungeonStreamingChunkLevelInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADungeonStreamingChunkLevelInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADungeonStreamingChunkLevelInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADungeonStreamingChunkLevelInstance) \
	NO_API virtual ~ADungeonStreamingChunkLevelInstance();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_19_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_21_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class ADungeonStreamingChunkLevelInstance>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_59_RPC_WRAPPERS \
	DECLARE_FUNCTION(execHandleChunkUnloaded); \
	DECLARE_FUNCTION(execHandleChunkLoaded); \
	DECLARE_FUNCTION(execHandleChunkHidden); \
	DECLARE_FUNCTION(execHandleChunkVisible); \
	DECLARE_FUNCTION(execGetLoadedChunkActorOfType); \
	DECLARE_FUNCTION(execGetLoadedChunkActorsOfType); \
	DECLARE_FUNCTION(execGetLoadedChunkActors);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUDungeonStreamingChunk(); \
	friend struct Z_Construct_UClass_UDungeonStreamingChunk_Statics; \
public: \
	DECLARE_CLASS(UDungeonStreamingChunk, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonStreamingChunk)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonStreamingChunk(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonStreamingChunk) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonStreamingChunk); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonStreamingChunk); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonStreamingChunk(UDungeonStreamingChunk&&); \
	UDungeonStreamingChunk(const UDungeonStreamingChunk&); \
public: \
	NO_API virtual ~UDungeonStreamingChunk();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_57_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_59_RPC_WRAPPERS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_59_INCLASS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonStreamingChunk>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_150_DELEGATE \
DUNGEONARCHITECTRUNTIME_API void FDALevelStreamerBindableEvent_DelegateWrapper(const FMulticastScriptDelegate& DALevelStreamerBindableEvent, ADungeon* Dungeon);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_151_DELEGATE \
DUNGEONARCHITECTRUNTIME_API void FDALevelStreamerStateChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& DALevelStreamerStateChangeDelegate, ADungeon* Dungeon, UDungeonStreamingChunk* Chunk);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_155_INCLASS \
private: \
	static void StaticRegisterNativesUDungeonLevelStreamingModel(); \
	friend struct Z_Construct_UClass_UDungeonLevelStreamingModel_Statics; \
public: \
	DECLARE_CLASS(UDungeonLevelStreamingModel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonLevelStreamingModel)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_155_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonLevelStreamingModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonLevelStreamingModel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonLevelStreamingModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonLevelStreamingModel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonLevelStreamingModel(UDungeonLevelStreamingModel&&); \
	UDungeonLevelStreamingModel(const UDungeonLevelStreamingModel&); \
public: \
	NO_API virtual ~UDungeonLevelStreamingModel();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_153_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_155_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_155_INCLASS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h_155_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonLevelStreamingModel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_DungeonLevelStreamingModel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
