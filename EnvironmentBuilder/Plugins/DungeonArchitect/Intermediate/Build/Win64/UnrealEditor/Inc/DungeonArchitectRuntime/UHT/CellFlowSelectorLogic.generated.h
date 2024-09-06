// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builders/CellFlow/CellFlowSelectorLogic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCellFlowBuilder;
class UCellFlowConfig;
class UCellFlowModel;
class UCellFlowQuery;
struct FRandomStream;
#ifdef DUNGEONARCHITECTRUNTIME_CellFlowSelectorLogic_generated_h
#error "CellFlowSelectorLogic.generated.h already included, missing '#pragma once' in CellFlowSelectorLogic.h"
#endif
#define DUNGEONARCHITECTRUNTIME_CellFlowSelectorLogic_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowSelectorLogic_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelectNode);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowSelectorLogic_h_15_CALLBACK_WRAPPERS
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowSelectorLogic_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCellFlowSelectorLogic(); \
	friend struct Z_Construct_UClass_UCellFlowSelectorLogic_Statics; \
public: \
	DECLARE_CLASS(UCellFlowSelectorLogic, UDungeonSelectorLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UCellFlowSelectorLogic)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowSelectorLogic_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCellFlowSelectorLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCellFlowSelectorLogic(UCellFlowSelectorLogic&&); \
	UCellFlowSelectorLogic(const UCellFlowSelectorLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCellFlowSelectorLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCellFlowSelectorLogic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCellFlowSelectorLogic) \
	NO_API virtual ~UCellFlowSelectorLogic();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowSelectorLogic_h_13_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowSelectorLogic_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowSelectorLogic_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowSelectorLogic_h_15_CALLBACK_WRAPPERS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowSelectorLogic_h_15_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowSelectorLogic_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UCellFlowSelectorLogic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowSelectorLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
