// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/LevelEditor/EditorMode/Tools/DungeonEdTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DUNGEONARCHITECTEDITOR_DungeonEdTool_generated_h
#error "DungeonEdTool.generated.h already included, missing '#pragma once' in DungeonEdTool.h"
#endif
#define DUNGEONARCHITECTEDITOR_DungeonEdTool_generated_h

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonEdTool(); \
	friend struct Z_Construct_UClass_UDungeonEdTool_Statics; \
public: \
	DECLARE_CLASS(UDungeonEdTool, UInteractiveTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DungeonArchitectEditor"), NO_API) \
	DECLARE_SERIALIZER(UDungeonEdTool)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonEdTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonEdTool(UDungeonEdTool&&); \
	UDungeonEdTool(const UDungeonEdTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonEdTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonEdTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDungeonEdTool) \
	NO_API virtual ~UDungeonEdTool();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_13_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_15_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<class UDungeonEdTool>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonEdToolBuilder(); \
	friend struct Z_Construct_UClass_UDungeonEdToolBuilder_Statics; \
public: \
	DECLARE_CLASS(UDungeonEdToolBuilder, UInteractiveToolBuilder, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DungeonArchitectEditor"), NO_API) \
	DECLARE_SERIALIZER(UDungeonEdToolBuilder)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonEdToolBuilder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonEdToolBuilder(UDungeonEdToolBuilder&&); \
	UDungeonEdToolBuilder(const UDungeonEdToolBuilder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonEdToolBuilder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonEdToolBuilder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDungeonEdToolBuilder) \
	NO_API virtual ~UDungeonEdToolBuilder();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_18_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_21_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<class UDungeonEdToolBuilder>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonEdToolBase(); \
	friend struct Z_Construct_UClass_UDungeonEdToolBase_Statics; \
public: \
	DECLARE_CLASS(UDungeonEdToolBase, USingleClickTool, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DungeonArchitectEditor"), NO_API) \
	DECLARE_SERIALIZER(UDungeonEdToolBase) \
	virtual UObject* _getUObject() const override { return const_cast<UDungeonEdToolBase*>(this); }


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonEdToolBase(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonEdToolBase(UDungeonEdToolBase&&); \
	UDungeonEdToolBase(const UDungeonEdToolBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonEdToolBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonEdToolBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDungeonEdToolBase) \
	NO_API virtual ~UDungeonEdToolBase();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_33_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_35_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<class UDungeonEdToolBase>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_106_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonGridPaintEdTool(); \
	friend struct Z_Construct_UClass_UDungeonGridPaintEdTool_Statics; \
public: \
	DECLARE_CLASS(UDungeonGridPaintEdTool, UDungeonEdToolBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DungeonArchitectEditor"), NO_API) \
	DECLARE_SERIALIZER(UDungeonGridPaintEdTool)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_106_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonGridPaintEdTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonGridPaintEdTool(UDungeonGridPaintEdTool&&); \
	UDungeonGridPaintEdTool(const UDungeonGridPaintEdTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonGridPaintEdTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonGridPaintEdTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDungeonGridPaintEdTool) \
	NO_API virtual ~UDungeonGridPaintEdTool();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_104_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_106_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_106_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_106_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<class UDungeonGridPaintEdTool>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonSnapStitchEdTool(); \
	friend struct Z_Construct_UClass_UDungeonSnapStitchEdTool_Statics; \
public: \
	DECLARE_CLASS(UDungeonSnapStitchEdTool, UDungeonEdToolBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DungeonArchitectEditor"), NO_API) \
	DECLARE_SERIALIZER(UDungeonSnapStitchEdTool)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_115_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonSnapStitchEdTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonSnapStitchEdTool(UDungeonSnapStitchEdTool&&); \
	UDungeonSnapStitchEdTool(const UDungeonSnapStitchEdTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonSnapStitchEdTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonSnapStitchEdTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDungeonSnapStitchEdTool) \
	NO_API virtual ~UDungeonSnapStitchEdTool();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_113_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_115_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<class UDungeonSnapStitchEdTool>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_124_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonSnapConnectionEdTool(); \
	friend struct Z_Construct_UClass_UDungeonSnapConnectionEdTool_Statics; \
public: \
	DECLARE_CLASS(UDungeonSnapConnectionEdTool, UDungeonEdToolBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DungeonArchitectEditor"), NO_API) \
	DECLARE_SERIALIZER(UDungeonSnapConnectionEdTool)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_124_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonSnapConnectionEdTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonSnapConnectionEdTool(UDungeonSnapConnectionEdTool&&); \
	UDungeonSnapConnectionEdTool(const UDungeonSnapConnectionEdTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonSnapConnectionEdTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonSnapConnectionEdTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDungeonSnapConnectionEdTool) \
	NO_API virtual ~UDungeonSnapConnectionEdTool();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_122_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_124_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_124_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_124_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<class UDungeonSnapConnectionEdTool>();

#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_133_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDungeonFlowNodeEdTool(); \
	friend struct Z_Construct_UClass_UDungeonFlowNodeEdTool_Statics; \
public: \
	DECLARE_CLASS(UDungeonFlowNodeEdTool, UDungeonEdToolBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DungeonArchitectEditor"), NO_API) \
	DECLARE_SERIALIZER(UDungeonFlowNodeEdTool)


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_133_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDungeonFlowNodeEdTool(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDungeonFlowNodeEdTool(UDungeonFlowNodeEdTool&&); \
	UDungeonFlowNodeEdTool(const UDungeonFlowNodeEdTool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDungeonFlowNodeEdTool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDungeonFlowNodeEdTool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDungeonFlowNodeEdTool) \
	NO_API virtual ~UDungeonFlowNodeEdTool();


#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_131_PROLOG
#define FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_133_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_133_INCLASS_NO_PURE_DECLS \
	FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h_133_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<class UDungeonFlowNodeEdTool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Private_Core_LevelEditor_EditorMode_Tools_DungeonEdTool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
