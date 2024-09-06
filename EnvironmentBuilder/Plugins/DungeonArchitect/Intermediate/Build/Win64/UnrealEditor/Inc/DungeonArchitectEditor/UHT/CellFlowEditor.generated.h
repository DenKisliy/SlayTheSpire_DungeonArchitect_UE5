// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/Editors/FlowEditor/BaseEditors/CellFlowEditor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTEDITOR_CellFlowEditor_generated_h
#error "CellFlowEditor.generated.h already included, missing '#pragma once' in CellFlowEditor.h"
#endif
#define DUNGEONARCHITECTEDITOR_CellFlowEditor_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_BaseEditors_CellFlowEditor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCellFlowEditorSettings(); \
	friend struct Z_Construct_UClass_UCellFlowEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UCellFlowEditorSettings, UFlowEditorSettings, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DungeonArchitectEditor"), NO_API) \
	DECLARE_SERIALIZER(UCellFlowEditorSettings)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_BaseEditors_CellFlowEditor_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCellFlowEditorSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCellFlowEditorSettings(UCellFlowEditorSettings&&); \
	UCellFlowEditorSettings(const UCellFlowEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCellFlowEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCellFlowEditorSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCellFlowEditorSettings) \
	NO_API virtual ~UCellFlowEditorSettings();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_BaseEditors_CellFlowEditor_h_9_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_BaseEditors_CellFlowEditor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_BaseEditors_CellFlowEditor_h_11_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_BaseEditors_CellFlowEditor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<class UCellFlowEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_FlowEditor_BaseEditors_CellFlowEditor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
