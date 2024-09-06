// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonToolsEditorModeSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonToolsEditorModeSettings();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonToolsEditorModeSettings_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonToolsModeCustomizationSettings();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_NoRegister();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonModeCustomToolColor();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UDungeonToolsEditorModeSettings
void UDungeonToolsEditorModeSettings::StaticRegisterNativesUDungeonToolsEditorModeSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonToolsEditorModeSettings);
UClass* Z_Construct_UClass_UDungeonToolsEditorModeSettings_NoRegister()
{
	return UDungeonToolsEditorModeSettings::StaticClass();
}
struct Z_Construct_UClass_UDungeonToolsEditorModeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRespectLevelEditorGizmoMode_MetaData[] = {
		{ "Category", "Modeling Mode|User Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the standard UE Editor Gizmo Mode (ie selected via the Level Editor Viewport toggle) will be used to configure the Modeling Gizmo, otherwise a Combined Gizmo will always be used. It may be necessary to exit and re-enter Modeling Mode after changing this setting. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the standard UE Editor Gizmo Mode (ie selected via the Level Editor Viewport toggle) will be used to configure the Modeling Gizmo, otherwise a Combined Gizmo will always be used. It may be necessary to exit and re-enter Modeling Mode after changing this setting." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bRespectLevelEditorGizmoMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRespectLevelEditorGizmoMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonToolsEditorModeSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDungeonToolsEditorModeSettings_Statics::NewProp_bRespectLevelEditorGizmoMode_SetBit(void* Obj)
{
	((UDungeonToolsEditorModeSettings*)Obj)->bRespectLevelEditorGizmoMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonToolsEditorModeSettings_Statics::NewProp_bRespectLevelEditorGizmoMode = { "bRespectLevelEditorGizmoMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonToolsEditorModeSettings), &Z_Construct_UClass_UDungeonToolsEditorModeSettings_Statics::NewProp_bRespectLevelEditorGizmoMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRespectLevelEditorGizmoMode_MetaData), NewProp_bRespectLevelEditorGizmoMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonToolsEditorModeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsEditorModeSettings_Statics::NewProp_bRespectLevelEditorGizmoMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonToolsEditorModeSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonToolsEditorModeSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonToolsEditorModeSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonToolsEditorModeSettings_Statics::ClassParams = {
	&UDungeonToolsEditorModeSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonToolsEditorModeSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonToolsEditorModeSettings_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonToolsEditorModeSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonToolsEditorModeSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonToolsEditorModeSettings()
{
	if (!Z_Registration_Info_UClass_UDungeonToolsEditorModeSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonToolsEditorModeSettings.OuterSingleton, Z_Construct_UClass_UDungeonToolsEditorModeSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonToolsEditorModeSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonToolsEditorModeSettings>()
{
	return UDungeonToolsEditorModeSettings::StaticClass();
}
UDungeonToolsEditorModeSettings::UDungeonToolsEditorModeSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonToolsEditorModeSettings);
UDungeonToolsEditorModeSettings::~UDungeonToolsEditorModeSettings() {}
// End Class UDungeonToolsEditorModeSettings

// Begin ScriptStruct FDungeonModeCustomSectionColor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonModeCustomSectionColor;
class UScriptStruct* FDungeonModeCustomSectionColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonModeCustomSectionColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonModeCustomSectionColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("DungeonModeCustomSectionColor"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonModeCustomSectionColor.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FDungeonModeCustomSectionColor>()
{
	return FDungeonModeCustomSectionColor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Defines a color to be used for a particular Tool Palette Section\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines a color to be used for a particular Tool Palette Section" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionName_MetaData[] = {
		{ "Category", "SectionColor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of Section in Modeling Mode Tool Palette */" },
#endif
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of Section in Modeling Mode Tool Palette" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "SectionColor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom Header Color */" },
#endif
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Header Color" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SectionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonModeCustomSectionColor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor_Statics::NewProp_SectionName = { "SectionName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonModeCustomSectionColor, SectionName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionName_MetaData), NewProp_SectionName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonModeCustomSectionColor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor_Statics::NewProp_SectionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	&NewStructOps,
	"DungeonModeCustomSectionColor",
	Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor_Statics::PropPointers),
	sizeof(FDungeonModeCustomSectionColor),
	alignof(FDungeonModeCustomSectionColor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonModeCustomSectionColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonModeCustomSectionColor.InnerSingleton, Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonModeCustomSectionColor.InnerSingleton;
}
// End ScriptStruct FDungeonModeCustomSectionColor

// Begin ScriptStruct FDungeonModeCustomToolColor
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonModeCustomToolColor;
class UScriptStruct* FDungeonModeCustomToolColor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonModeCustomToolColor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonModeCustomToolColor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonModeCustomToolColor, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("DungeonModeCustomToolColor"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonModeCustomToolColor.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FDungeonModeCustomToolColor>()
{
	return FDungeonModeCustomToolColor::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonModeCustomToolColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Defines a color to be used for a particular Tool Palette Tool\n */" },
#endif
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines a color to be used for a particular Tool Palette Tool" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolName_MetaData[] = {
		{ "Category", "ToolColor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Name of Section or Tool in Modeling Mode Tool Palette\n\x09 *\n\x09 * Format:\n\x09 * SectionName        (Specifies a default color for all tools in the section.)\n\x09 * SectionName.ToolName        (Specifies an override color for a specific tool in the given section.)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of Section or Tool in Modeling Mode Tool Palette\n\nFormat:\nSectionName        (Specifies a default color for all tools in the section.)\nSectionName.ToolName        (Specifies an override color for a specific tool in the given section.)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "ToolColor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom Tool Color */" },
#endif
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Tool Color" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ToolName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonModeCustomToolColor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDungeonModeCustomToolColor_Statics::NewProp_ToolName = { "ToolName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonModeCustomToolColor, ToolName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolName_MetaData), NewProp_ToolName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonModeCustomToolColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonModeCustomToolColor, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonModeCustomToolColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonModeCustomToolColor_Statics::NewProp_ToolName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonModeCustomToolColor_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonModeCustomToolColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonModeCustomToolColor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	&NewStructOps,
	"DungeonModeCustomToolColor",
	Z_Construct_UScriptStruct_FDungeonModeCustomToolColor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonModeCustomToolColor_Statics::PropPointers),
	sizeof(FDungeonModeCustomToolColor),
	alignof(FDungeonModeCustomToolColor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonModeCustomToolColor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonModeCustomToolColor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonModeCustomToolColor()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonModeCustomToolColor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonModeCustomToolColor.InnerSingleton, Z_Construct_UScriptStruct_FDungeonModeCustomToolColor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonModeCustomToolColor.InnerSingleton;
}
// End ScriptStruct FDungeonModeCustomToolColor

// Begin Class UDungeonToolsModeCustomizationSettings
void UDungeonToolsModeCustomizationSettings::StaticRegisterNativesUDungeonToolsModeCustomizationSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonToolsModeCustomizationSettings);
UClass* Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_NoRegister()
{
	return UDungeonToolsModeCustomizationSettings::StaticClass();
}
struct Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyModelingPalette_MetaData[] = {
		{ "Category", "Modeling Mode|UI Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggle between the Legacy Modeling Mode Palette and the new UI (requires exiting and re-entering the Mode) */" },
#endif
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle between the Legacy Modeling Mode Palette and the new UI (requires exiting and re-entering the Mode)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolSectionOrder_MetaData[] = {
		{ "Category", "Modeling Mode|UI Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Add the names of Modeling Mode Tool Palette Sections to have them appear at the top of the Tool Palette, in the order listed below. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add the names of Modeling Mode Tool Palette Sections to have them appear at the top of the Tool Palette, in the order listed below." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SectionColors_MetaData[] = {
		{ "Category", "Modeling Mode|UI Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Custom Section Header Colors for listed Sections in the Modeling Mode Tool Palette */" },
#endif
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Section Header Colors for listed Sections in the Modeling Mode Tool Palette" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolColors_MetaData[] = {
		{ "Category", "Modeling Mode|UI Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Custom Tool Colors for listed Tools in the Modeling Mode Tool Palette.\n\x09 * \n\x09 * Format:\n\x09 * SectionName        (Specifies a default color for all tools in the section.)\n\x09 * SectionName.ToolName        (Specifies an override color for a specific tool in the given section.)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Custom Tool Colors for listed Tools in the Modeling Mode Tool Palette.\n\nFormat:\nSectionName        (Specifies a default color for all tools in the section.)\nSectionName.ToolName        (Specifies an override color for a specific tool in the given section.)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowCategoryButtonLabels_MetaData[] = {
		{ "Category", "Modeling Mode|UI Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, the category labels will be shown on the toolbar buttons, else they will be hidden\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the category labels will be shown on the toolbar buttons, else they will be hidden" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowToolButtons_MetaData[] = {
		{ "Category", "Modeling Mode|UI Customization" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If true, Tool buttons will always be shown when in a Tool. By default they will be hidden.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, Tool buttons will always be shown when in a Tool. By default they will be hidden." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastMeshSelectionDragMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// saved-state for various mode settings that are configured via UI toggles/etc, and not exposed in settings dialog\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "saved-state for various mode settings that are configured via UI toggles/etc, and not exposed in settings dialog" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastMeshSelectionElementType_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// saved-state for various mode settings that does not persist between editor runs\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "saved-state for various mode settings that does not persist between editor runs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastMeshSelectionTopologyMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastMeshSelectionVolumeToggle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastMeshSelectionStaticMeshToggle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/LevelEditor/EditorMode/DungeonToolsEditorModeSettings.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseLegacyModelingPalette_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyModelingPalette;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ToolSectionOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ToolSectionOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SectionColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SectionColors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToolColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ToolColors;
	static void NewProp_bShowCategoryButtonLabels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCategoryButtonLabels;
	static void NewProp_bAlwaysShowToolButtons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowToolButtons;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastMeshSelectionDragMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastMeshSelectionElementType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastMeshSelectionTopologyMode;
	static void NewProp_bLastMeshSelectionVolumeToggle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastMeshSelectionVolumeToggle;
	static void NewProp_bLastMeshSelectionStaticMeshToggle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastMeshSelectionStaticMeshToggle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonToolsModeCustomizationSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bUseLegacyModelingPalette_SetBit(void* Obj)
{
	((UDungeonToolsModeCustomizationSettings*)Obj)->bUseLegacyModelingPalette = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bUseLegacyModelingPalette = { "bUseLegacyModelingPalette", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonToolsModeCustomizationSettings), &Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bUseLegacyModelingPalette_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLegacyModelingPalette_MetaData), NewProp_bUseLegacyModelingPalette_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_ToolSectionOrder_Inner = { "ToolSectionOrder", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_ToolSectionOrder = { "ToolSectionOrder", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonToolsModeCustomizationSettings, ToolSectionOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolSectionOrder_MetaData), NewProp_ToolSectionOrder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_SectionColors_Inner = { "SectionColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor, METADATA_PARAMS(0, nullptr) }; // 2822559618
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_SectionColors = { "SectionColors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonToolsModeCustomizationSettings, SectionColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SectionColors_MetaData), NewProp_SectionColors_MetaData) }; // 2822559618
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_ToolColors_Inner = { "ToolColors", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonModeCustomToolColor, METADATA_PARAMS(0, nullptr) }; // 4159148106
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_ToolColors = { "ToolColors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonToolsModeCustomizationSettings, ToolColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolColors_MetaData), NewProp_ToolColors_MetaData) }; // 4159148106
void Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bShowCategoryButtonLabels_SetBit(void* Obj)
{
	((UDungeonToolsModeCustomizationSettings*)Obj)->bShowCategoryButtonLabels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bShowCategoryButtonLabels = { "bShowCategoryButtonLabels", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonToolsModeCustomizationSettings), &Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bShowCategoryButtonLabels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowCategoryButtonLabels_MetaData), NewProp_bShowCategoryButtonLabels_MetaData) };
void Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bAlwaysShowToolButtons_SetBit(void* Obj)
{
	((UDungeonToolsModeCustomizationSettings*)Obj)->bAlwaysShowToolButtons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bAlwaysShowToolButtons = { "bAlwaysShowToolButtons", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonToolsModeCustomizationSettings), &Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bAlwaysShowToolButtons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysShowToolButtons_MetaData), NewProp_bAlwaysShowToolButtons_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionDragMode = { "LastMeshSelectionDragMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonToolsModeCustomizationSettings, LastMeshSelectionDragMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastMeshSelectionDragMode_MetaData), NewProp_LastMeshSelectionDragMode_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionElementType = { "LastMeshSelectionElementType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonToolsModeCustomizationSettings, LastMeshSelectionElementType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastMeshSelectionElementType_MetaData), NewProp_LastMeshSelectionElementType_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionTopologyMode = { "LastMeshSelectionTopologyMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonToolsModeCustomizationSettings, LastMeshSelectionTopologyMode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastMeshSelectionTopologyMode_MetaData), NewProp_LastMeshSelectionTopologyMode_MetaData) };
void Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionVolumeToggle_SetBit(void* Obj)
{
	((UDungeonToolsModeCustomizationSettings*)Obj)->bLastMeshSelectionVolumeToggle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionVolumeToggle = { "bLastMeshSelectionVolumeToggle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonToolsModeCustomizationSettings), &Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionVolumeToggle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastMeshSelectionVolumeToggle_MetaData), NewProp_bLastMeshSelectionVolumeToggle_MetaData) };
void Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionStaticMeshToggle_SetBit(void* Obj)
{
	((UDungeonToolsModeCustomizationSettings*)Obj)->bLastMeshSelectionStaticMeshToggle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionStaticMeshToggle = { "bLastMeshSelectionStaticMeshToggle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonToolsModeCustomizationSettings), &Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionStaticMeshToggle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastMeshSelectionStaticMeshToggle_MetaData), NewProp_bLastMeshSelectionStaticMeshToggle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bUseLegacyModelingPalette,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_ToolSectionOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_ToolSectionOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_SectionColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_SectionColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_ToolColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_ToolColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bShowCategoryButtonLabels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bAlwaysShowToolButtons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionDragMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionElementType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_LastMeshSelectionTopologyMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionVolumeToggle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::NewProp_bLastMeshSelectionStaticMeshToggle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::ClassParams = {
	&UDungeonToolsModeCustomizationSettings::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonToolsModeCustomizationSettings()
{
	if (!Z_Registration_Info_UClass_UDungeonToolsModeCustomizationSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonToolsModeCustomizationSettings.OuterSingleton, Z_Construct_UClass_UDungeonToolsModeCustomizationSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonToolsModeCustomizationSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonToolsModeCustomizationSettings>()
{
	return UDungeonToolsModeCustomizationSettings::StaticClass();
}
UDungeonToolsModeCustomizationSettings::UDungeonToolsModeCustomizationSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonToolsModeCustomizationSettings);
UDungeonToolsModeCustomizationSettings::~UDungeonToolsModeCustomizationSettings() {}
// End Class UDungeonToolsModeCustomizationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonToolsEditorModeSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDungeonModeCustomSectionColor::StaticStruct, Z_Construct_UScriptStruct_FDungeonModeCustomSectionColor_Statics::NewStructOps, TEXT("DungeonModeCustomSectionColor"), &Z_Registration_Info_UScriptStruct_DungeonModeCustomSectionColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonModeCustomSectionColor), 2822559618U) },
		{ FDungeonModeCustomToolColor::StaticStruct, Z_Construct_UScriptStruct_FDungeonModeCustomToolColor_Statics::NewStructOps, TEXT("DungeonModeCustomToolColor"), &Z_Registration_Info_UScriptStruct_DungeonModeCustomToolColor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonModeCustomToolColor), 4159148106U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonToolsEditorModeSettings, UDungeonToolsEditorModeSettings::StaticClass, TEXT("UDungeonToolsEditorModeSettings"), &Z_Registration_Info_UClass_UDungeonToolsEditorModeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonToolsEditorModeSettings), 1403220218U) },
		{ Z_Construct_UClass_UDungeonToolsModeCustomizationSettings, UDungeonToolsModeCustomizationSettings::StaticClass, TEXT("UDungeonToolsModeCustomizationSettings"), &Z_Registration_Info_UClass_UDungeonToolsModeCustomizationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonToolsModeCustomizationSettings), 2268261713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonToolsEditorModeSettings_h_2442926461(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonToolsEditorModeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonToolsEditorModeSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonToolsEditorModeSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_EditorMode_DungeonToolsEditorModeSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
