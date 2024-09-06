// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Frameworks/Flow/Domains/LayoutGraph/FlowLayoutEdGraphSchema.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTEDITOR_FlowLayoutEdGraphSchema_generated_h
#error "FlowLayoutEdGraphSchema.generated.h already included, missing '#pragma once' in FlowLayoutEdGraphSchema.h"
#endif
#define DUNGEONARCHITECTEDITOR_FlowLayoutEdGraphSchema_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphSchema_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUFlowLayoutEdGraphSchema(); \
	friend struct Z_Construct_UClass_UFlowLayoutEdGraphSchema_Statics; \
public: \
	DECLARE_CLASS(UFlowLayoutEdGraphSchema, UEdGraphSchema, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectEditor"), NO_API) \
	DECLARE_SERIALIZER(UFlowLayoutEdGraphSchema)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphSchema_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlowLayoutEdGraphSchema(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlowLayoutEdGraphSchema) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlowLayoutEdGraphSchema); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlowLayoutEdGraphSchema); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFlowLayoutEdGraphSchema(UFlowLayoutEdGraphSchema&&); \
	UFlowLayoutEdGraphSchema(const UFlowLayoutEdGraphSchema&); \
public: \
	NO_API virtual ~UFlowLayoutEdGraphSchema();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphSchema_h_13_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphSchema_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphSchema_h_15_INCLASS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphSchema_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<class UFlowLayoutEdGraphSchema>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphSchema_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFlowAbstractSchemaAction_NewNode_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FDungeonSchemaAction_NewNode Super;


template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<struct FFlowAbstractSchemaAction_NewNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_FlowLayoutEdGraphSchema_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
