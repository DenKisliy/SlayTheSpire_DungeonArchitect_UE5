// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Builders/Grid/GridDungeonSelectorLogic.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGridDungeonBuilder;
class UGridDungeonConfig;
class UGridDungeonModel;
class UGridDungeonQuery;
struct FGridDungeonCell;
struct FRandomStream;
#ifdef DUNGEONARCHITECTRUNTIME_GridDungeonSelectorLogic_generated_h
#error "GridDungeonSelectorLogic.generated.h already included, missing '#pragma once' in GridDungeonSelectorLogic.h"
#endif
#define DUNGEONARCHITECTRUNTIME_GridDungeonSelectorLogic_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonSelectorLogic_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSelectNode); \
	DECLARE_FUNCTION(execContainsStair); \
	DECLARE_FUNCTION(execIsPassageTooNarrow); \
	DECLARE_FUNCTION(execIsPillarOnCorner); \
	DECLARE_FUNCTION(execIsOnCorner);


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonSelectorLogic_h_14_CALLBACK_WRAPPERS
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonSelectorLogic_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGridDungeonSelectorLogic(); \
	friend struct Z_Construct_UClass_UGridDungeonSelectorLogic_Statics; \
public: \
	DECLARE_CLASS(UGridDungeonSelectorLogic, UDungeonSelectorLogic, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectRuntime"), NO_API) \
	DECLARE_SERIALIZER(UGridDungeonSelectorLogic)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonSelectorLogic_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGridDungeonSelectorLogic(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGridDungeonSelectorLogic(UGridDungeonSelectorLogic&&); \
	UGridDungeonSelectorLogic(const UGridDungeonSelectorLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGridDungeonSelectorLogic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGridDungeonSelectorLogic); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGridDungeonSelectorLogic) \
	NO_API virtual ~UGridDungeonSelectorLogic();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonSelectorLogic_h_12_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonSelectorLogic_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonSelectorLogic_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonSelectorLogic_h_14_CALLBACK_WRAPPERS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonSelectorLogic_h_14_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonSelectorLogic_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<class UGridDungeonSelectorLogic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_GridDungeonSelectorLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
