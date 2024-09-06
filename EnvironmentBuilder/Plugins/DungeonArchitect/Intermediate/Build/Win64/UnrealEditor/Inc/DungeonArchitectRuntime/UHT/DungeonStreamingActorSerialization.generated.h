// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/LevelStreaming/Interfaces/DungeonStreamingActorSerialization.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTRUNTIME_DungeonStreamingActorSerialization_generated_h
#error "DungeonStreamingActorSerialization.generated.h already included, missing '#pragma once' in DungeonStreamingActorSerialization.h"
#endif
#define DUNGEONARCHITECTRUNTIME_DungeonStreamingActorSerialization_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDungeonStreamingActorDataEntry_Statics; \
	static class UScriptStruct* StaticStruct();


template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<struct FDungeonStreamingActorDataEntry>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonStreamingActorData(); \
	friend struct Z_Construct_UClass_UDungeonStreamingActorData_Statics; \
public: \
	DECLARE_CLASS(UDungeonStreamingActorData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonStreamingActorData)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonStreamingActorData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonStreamingActorData(UDungeonStreamingActorData&&); \
	UDungeonStreamingActorData(const UDungeonStreamingActorData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonStreamingActorData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonStreamingActorData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonStreamingActorData) \
	NO_API virtual ~UDungeonStreamingActorData();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_26_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_28_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonStreamingActorData>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnSerializedDataLoaded_Implementation() {}; \
	DECLARE_FUNCTION(execOnSerializedDataLoaded);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_46_CALLBACK_WRAPPERS
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonStreamingActorSerialization(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonStreamingActorSerialization(UDungeonStreamingActorSerialization&&); \
	UDungeonStreamingActorSerialization(const UDungeonStreamingActorSerialization&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonStreamingActorSerialization); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonStreamingActorSerialization); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonStreamingActorSerialization) \
	NO_API virtual ~UDungeonStreamingActorSerialization();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_46_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUDungeonStreamingActorSerialization(); \
	friend struct Z_Construct_UClass_UDungeonStreamingActorSerialization_Statics; \
public: \
	DECLARE_CLASS(UDungeonStreamingActorSerialization, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UDungeonStreamingActorSerialization)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_46_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_46_GENERATED_UINTERFACE_BODY() \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_46_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_46_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IDungeonStreamingActorSerialization() {} \
public: \
	typedef UDungeonStreamingActorSerialization UClassType; \
	typedef IDungeonStreamingActorSerialization ThisClass; \
	static void Execute_OnSerializedDataLoaded(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_44_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_46_CALLBACK_WRAPPERS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h_46_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UDungeonStreamingActorSerialization>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingActorSerialization_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
