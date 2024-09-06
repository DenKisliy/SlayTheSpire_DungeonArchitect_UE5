// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builders/SnapGridFlow/SnapGridFlowDungeon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADungeon;
class UDungeonStreamingChunk;
class USnapGridFlowBuilder;
class USnapGridFlowConfig;
class USnapGridFlowModel;
class USnapGridFlowQuery;
struct FRandomStream;
#ifdef DUNGEONARCHITECTRUNTIME_SnapGridFlowDungeon_generated_h
#error "SnapGridFlowDungeon.generated.h already included, missing '#pragma once' in SnapGridFlowDungeon.h"
#endif
#define DUNGEONARCHITECTRUNTIME_SnapGridFlowDungeon_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSnapGridFlowConfig(); \
	friend struct Z_Construct_UClass_USnapGridFlowConfig_Statics; \
public: \
	DECLARE_CLASS(USnapGridFlowConfig, UDungeonConfig, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(USnapGridFlowConfig)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USnapGridFlowConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USnapGridFlowConfig(USnapGridFlowConfig&&); \
	USnapGridFlowConfig(const USnapGridFlowConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnapGridFlowConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnapGridFlowConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnapGridFlowConfig) \
	NO_API virtual ~USnapGridFlowConfig();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_23_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_25_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class USnapGridFlowConfig>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSnapGridFlowModel(); \
	friend struct Z_Construct_UClass_USnapGridFlowModel_Statics; \
public: \
	DECLARE_CLASS(USnapGridFlowModel, USnapDungeonModelBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(USnapGridFlowModel)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USnapGridFlowModel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USnapGridFlowModel(USnapGridFlowModel&&); \
	USnapGridFlowModel(const USnapGridFlowModel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnapGridFlowModel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnapGridFlowModel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnapGridFlowModel) \
	NO_API virtual ~USnapGridFlowModel();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_97_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_99_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class USnapGridFlowModel>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_112_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSnapGridFlowQuery(); \
	friend struct Z_Construct_UClass_USnapGridFlowQuery_Statics; \
public: \
	DECLARE_CLASS(USnapGridFlowQuery, UDungeonQuery, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(USnapGridFlowQuery)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_112_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USnapGridFlowQuery(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USnapGridFlowQuery(USnapGridFlowQuery&&); \
	USnapGridFlowQuery(const USnapGridFlowQuery&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnapGridFlowQuery); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnapGridFlowQuery); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USnapGridFlowQuery) \
	NO_API virtual ~USnapGridFlowQuery();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_110_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_112_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_112_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_112_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class USnapGridFlowQuery>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSnapGridFlowToolData(); \
	friend struct Z_Construct_UClass_USnapGridFlowToolData_Statics; \
public: \
	DECLARE_CLASS(USnapGridFlowToolData, UDungeonToolData, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(USnapGridFlowToolData)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USnapGridFlowToolData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USnapGridFlowToolData(USnapGridFlowToolData&&); \
	USnapGridFlowToolData(const USnapGridFlowToolData&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnapGridFlowToolData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnapGridFlowToolData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnapGridFlowToolData) \
	NO_API virtual ~USnapGridFlowToolData();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_115_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_117_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class USnapGridFlowToolData>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleChunkVisible); \
	DECLARE_FUNCTION(execHandleChunkLoaded);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSnapGridFlowBuilder(); \
	friend struct Z_Construct_UClass_USnapGridFlowBuilder_Statics; \
public: \
	DECLARE_CLASS(USnapGridFlowBuilder, UDungeonBuilder, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(USnapGridFlowBuilder)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USnapGridFlowBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USnapGridFlowBuilder(USnapGridFlowBuilder&&); \
	USnapGridFlowBuilder(const USnapGridFlowBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnapGridFlowBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnapGridFlowBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnapGridFlowBuilder) \
	NO_API virtual ~USnapGridFlowBuilder();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_121_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_123_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_123_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class USnapGridFlowBuilder>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelectNode);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_181_CALLBACK_WRAPPERS
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSnapGridFlowSelectorLogic(); \
	friend struct Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics; \
public: \
	DECLARE_CLASS(USnapGridFlowSelectorLogic, UDungeonSelectorLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(USnapGridFlowSelectorLogic)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USnapGridFlowSelectorLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USnapGridFlowSelectorLogic(USnapGridFlowSelectorLogic&&); \
	USnapGridFlowSelectorLogic(const USnapGridFlowSelectorLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnapGridFlowSelectorLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnapGridFlowSelectorLogic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnapGridFlowSelectorLogic) \
	NO_API virtual ~USnapGridFlowSelectorLogic();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_179_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_181_CALLBACK_WRAPPERS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_181_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_181_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class USnapGridFlowSelectorLogic>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_192_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNodeOffset);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_192_CALLBACK_WRAPPERS
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_192_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSnapGridFlowTransformLogic(); \
	friend struct Z_Construct_UClass_USnapGridFlowTransformLogic_Statics; \
public: \
	DECLARE_CLASS(USnapGridFlowTransformLogic, UDungeonTransformLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(USnapGridFlowTransformLogic)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_192_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USnapGridFlowTransformLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USnapGridFlowTransformLogic(USnapGridFlowTransformLogic&&); \
	USnapGridFlowTransformLogic(const USnapGridFlowTransformLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnapGridFlowTransformLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnapGridFlowTransformLogic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnapGridFlowTransformLogic) \
	NO_API virtual ~USnapGridFlowTransformLogic();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_190_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_192_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_192_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_192_CALLBACK_WRAPPERS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_192_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_192_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class USnapGridFlowTransformLogic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
