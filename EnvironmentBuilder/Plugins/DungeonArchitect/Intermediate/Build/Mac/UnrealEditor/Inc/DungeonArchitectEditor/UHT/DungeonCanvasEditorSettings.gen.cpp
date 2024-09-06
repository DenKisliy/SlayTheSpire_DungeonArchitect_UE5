// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonCanvasEditorSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonCanvasEditorDefaults();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonCanvasEditorDefaults_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonCanvasEditorSettings();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonCanvasEditorSettings_NoRegister();
DUNGEONARCHITECTEDITOR_API UEnum* Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorBackgrounds();
DUNGEONARCHITECTEDITOR_API UEnum* Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorSampling();
DUNGEONARCHITECTEDITOR_API UEnum* Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorZoomMode();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowAsset_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowAsset_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowAsset_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleDatabase_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapAsset_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapModuleDatabase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Enum EDungeonCanvasEditorBackgrounds
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDungeonCanvasEditorBackgrounds;
static UEnum* EDungeonCanvasEditorBackgrounds_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDungeonCanvasEditorBackgrounds.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDungeonCanvasEditorBackgrounds.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorBackgrounds, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("EDungeonCanvasEditorBackgrounds"));
	}
	return Z_Registration_Info_UEnum_EDungeonCanvasEditorBackgrounds.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UEnum* StaticEnum<EDungeonCanvasEditorBackgrounds>()
{
	return EDungeonCanvasEditorBackgrounds_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorBackgrounds_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Checkered.DisplayName", "Checkered" },
		{ "Checkered.Name", "EDungeonCanvasEditorBackgrounds::Checkered" },
		{ "CheckeredFill.DisplayName", "Checkered (Fill)" },
		{ "CheckeredFill.Name", "EDungeonCanvasEditorBackgrounds::CheckeredFill" },
		{ "Comment", "/**\n * Enumerates background for the texture editor view port.\n */" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
		{ "SolidColor.DisplayName", "Solid Color" },
		{ "SolidColor.Name", "EDungeonCanvasEditorBackgrounds::SolidColor" },
		{ "ToolTip", "Enumerates background for the texture editor view port." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDungeonCanvasEditorBackgrounds::SolidColor", (int64)EDungeonCanvasEditorBackgrounds::SolidColor },
		{ "EDungeonCanvasEditorBackgrounds::Checkered", (int64)EDungeonCanvasEditorBackgrounds::Checkered },
		{ "EDungeonCanvasEditorBackgrounds::CheckeredFill", (int64)EDungeonCanvasEditorBackgrounds::CheckeredFill },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorBackgrounds_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	"EDungeonCanvasEditorBackgrounds",
	"EDungeonCanvasEditorBackgrounds",
	Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorBackgrounds_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorBackgrounds_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorBackgrounds_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorBackgrounds_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorBackgrounds()
{
	if (!Z_Registration_Info_UEnum_EDungeonCanvasEditorBackgrounds.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDungeonCanvasEditorBackgrounds.InnerSingleton, Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorBackgrounds_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDungeonCanvasEditorBackgrounds.InnerSingleton;
}
// End Enum EDungeonCanvasEditorBackgrounds

// Begin Enum EDungeonCanvasEditorSampling
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDungeonCanvasEditorSampling;
static UEnum* EDungeonCanvasEditorSampling_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDungeonCanvasEditorSampling.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDungeonCanvasEditorSampling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorSampling, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("EDungeonCanvasEditorSampling"));
	}
	return Z_Registration_Info_UEnum_EDungeonCanvasEditorSampling.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UEnum* StaticEnum<EDungeonCanvasEditorSampling>()
{
	return EDungeonCanvasEditorSampling_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorSampling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Default.DisplayName", "Default Sampling" },
		{ "Default.Name", "EDungeonCanvasEditorSampling::Default" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
		{ "Point.DisplayName", "Nearest-Point Sampling" },
		{ "Point.Name", "EDungeonCanvasEditorSampling::Point" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDungeonCanvasEditorSampling::Default", (int64)EDungeonCanvasEditorSampling::Default },
		{ "EDungeonCanvasEditorSampling::Point", (int64)EDungeonCanvasEditorSampling::Point },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorSampling_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	"EDungeonCanvasEditorSampling",
	"EDungeonCanvasEditorSampling",
	Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorSampling_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorSampling_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorSampling_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorSampling_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorSampling()
{
	if (!Z_Registration_Info_UEnum_EDungeonCanvasEditorSampling.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDungeonCanvasEditorSampling.InnerSingleton, Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorSampling_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDungeonCanvasEditorSampling.InnerSingleton;
}
// End Enum EDungeonCanvasEditorSampling

// Begin Enum EDungeonCanvasEditorZoomMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDungeonCanvasEditorZoomMode;
static UEnum* EDungeonCanvasEditorZoomMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDungeonCanvasEditorZoomMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDungeonCanvasEditorZoomMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorZoomMode, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("EDungeonCanvasEditorZoomMode"));
	}
	return Z_Registration_Info_UEnum_EDungeonCanvasEditorZoomMode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UEnum* StaticEnum<EDungeonCanvasEditorZoomMode>()
{
	return EDungeonCanvasEditorZoomMode_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorZoomMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Custom.DisplayName", "Specific Zoom Level" },
		{ "Custom.Name", "EDungeonCanvasEditorZoomMode::Custom" },
		{ "Fill.DisplayName", "Scale to Fill" },
		{ "Fill.Name", "EDungeonCanvasEditorZoomMode::Fill" },
		{ "Fit.Comment", "// First so that any new modes added don't change serialized value\n" },
		{ "Fit.DisplayName", "Scale Down to Fit" },
		{ "Fit.Name", "EDungeonCanvasEditorZoomMode::Fit" },
		{ "Fit.ToolTip", "First so that any new modes added don't change serialized value" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDungeonCanvasEditorZoomMode::Custom", (int64)EDungeonCanvasEditorZoomMode::Custom },
		{ "EDungeonCanvasEditorZoomMode::Fit", (int64)EDungeonCanvasEditorZoomMode::Fit },
		{ "EDungeonCanvasEditorZoomMode::Fill", (int64)EDungeonCanvasEditorZoomMode::Fill },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorZoomMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	"EDungeonCanvasEditorZoomMode",
	"EDungeonCanvasEditorZoomMode",
	Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorZoomMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorZoomMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorZoomMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorZoomMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorZoomMode()
{
	if (!Z_Registration_Info_UEnum_EDungeonCanvasEditorZoomMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDungeonCanvasEditorZoomMode.InnerSingleton, Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorZoomMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDungeonCanvasEditorZoomMode.InnerSingleton;
}
// End Enum EDungeonCanvasEditorZoomMode

// Begin ScriptStruct FDungeonCanvasEditorMaterialLayerPreset
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonCanvasEditorMaterialLayerPreset;
class UScriptStruct* FDungeonCanvasEditorMaterialLayerPreset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasEditorMaterialLayerPreset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonCanvasEditorMaterialLayerPreset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("DungeonCanvasEditorMaterialLayerPreset"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasEditorMaterialLayerPreset.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FDungeonCanvasEditorMaterialLayerPreset>()
{
	return FDungeonCanvasEditorMaterialLayerPreset::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialLayer_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBlend_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Tooltip;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialLayer;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialBlend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonCanvasEditorMaterialLayerPreset>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasEditorMaterialLayerPreset, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasEditorMaterialLayerPreset, Tooltip), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tooltip_MetaData), NewProp_Tooltip_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::NewProp_MaterialLayer = { "MaterialLayer", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasEditorMaterialLayerPreset, MaterialLayer), Z_Construct_UClass_UMaterialFunctionMaterialLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialLayer_MetaData), NewProp_MaterialLayer_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::NewProp_MaterialBlend = { "MaterialBlend", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasEditorMaterialLayerPreset, MaterialBlend), Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialBlend_MetaData), NewProp_MaterialBlend_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::NewProp_Tooltip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::NewProp_MaterialLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::NewProp_MaterialBlend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	&NewStructOps,
	"DungeonCanvasEditorMaterialLayerPreset",
	Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::PropPointers),
	sizeof(FDungeonCanvasEditorMaterialLayerPreset),
	alignof(FDungeonCanvasEditorMaterialLayerPreset),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasEditorMaterialLayerPreset.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonCanvasEditorMaterialLayerPreset.InnerSingleton, Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasEditorMaterialLayerPreset.InnerSingleton;
}
// End ScriptStruct FDungeonCanvasEditorMaterialLayerPreset

// Begin ScriptStruct FDungeonCanvasEditorBuilderDefaults
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonCanvasEditorBuilderDefaults;
class UScriptStruct* FDungeonCanvasEditorBuilderDefaults::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasEditorBuilderDefaults.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonCanvasEditorBuilderDefaults.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("DungeonCanvasEditorBuilderDefaults"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasEditorBuilderDefaults.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FDungeonCanvasEditorBuilderDefaults>()
{
	return FDungeonCanvasEditorBuilderDefaults::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SgfGraph_MetaData[] = {
		{ "Category", "Snap Grid Flow" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SgfModDB_MetaData[] = {
		{ "Category", "Snap Grid Flow" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapMapGraph_MetaData[] = {
		{ "Category", "Snap Map" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapMapModDB_MetaData[] = {
		{ "Category", "Snap Map" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridFlowGraph_MetaData[] = {
		{ "Category", "Grid Flow" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellFlowGraph_MetaData[] = {
		{ "Category", "Cell Flow" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SgfGraph;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SgfModDB;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SnapMapGraph;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SnapMapModDB;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GridFlowGraph;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CellFlowGraph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonCanvasEditorBuilderDefaults>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::NewProp_SgfGraph = { "SgfGraph", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasEditorBuilderDefaults, SgfGraph), Z_Construct_UClass_USnapGridFlowAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SgfGraph_MetaData), NewProp_SgfGraph_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::NewProp_SgfModDB = { "SgfModDB", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasEditorBuilderDefaults, SgfModDB), Z_Construct_UClass_USnapGridFlowModuleDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SgfModDB_MetaData), NewProp_SgfModDB_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::NewProp_SnapMapGraph = { "SnapMapGraph", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasEditorBuilderDefaults, SnapMapGraph), Z_Construct_UClass_USnapMapAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapMapGraph_MetaData), NewProp_SnapMapGraph_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::NewProp_SnapMapModDB = { "SnapMapModDB", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasEditorBuilderDefaults, SnapMapModDB), Z_Construct_UClass_USnapMapModuleDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapMapModDB_MetaData), NewProp_SnapMapModDB_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::NewProp_GridFlowGraph = { "GridFlowGraph", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasEditorBuilderDefaults, GridFlowGraph), Z_Construct_UClass_UGridFlowAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridFlowGraph_MetaData), NewProp_GridFlowGraph_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::NewProp_CellFlowGraph = { "CellFlowGraph", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasEditorBuilderDefaults, CellFlowGraph), Z_Construct_UClass_UCellFlowAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellFlowGraph_MetaData), NewProp_CellFlowGraph_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::NewProp_SgfGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::NewProp_SgfModDB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::NewProp_SnapMapGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::NewProp_SnapMapModDB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::NewProp_GridFlowGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::NewProp_CellFlowGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	&NewStructOps,
	"DungeonCanvasEditorBuilderDefaults",
	Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::PropPointers),
	sizeof(FDungeonCanvasEditorBuilderDefaults),
	alignof(FDungeonCanvasEditorBuilderDefaults),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasEditorBuilderDefaults.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonCanvasEditorBuilderDefaults.InnerSingleton, Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasEditorBuilderDefaults.InnerSingleton;
}
// End ScriptStruct FDungeonCanvasEditorBuilderDefaults

// Begin Class UDungeonCanvasEditorDefaults
void UDungeonCanvasEditorDefaults::StaticRegisterNativesUDungeonCanvasEditorDefaults()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonCanvasEditorDefaults);
UClass* Z_Construct_UClass_UDungeonCanvasEditorDefaults_NoRegister()
{
	return UDungeonCanvasEditorDefaults::StaticClass();
}
struct Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLayerBlend_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialLayerPresets_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuilderDefaultAssets_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultLayerBlend;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialLayerPresets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialLayerPresets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuilderDefaultAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonCanvasEditorDefaults>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::NewProp_DefaultLayerBlend = { "DefaultLayerBlend", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasEditorDefaults, DefaultLayerBlend), Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLayerBlend_MetaData), NewProp_DefaultLayerBlend_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::NewProp_MaterialLayerPresets_Inner = { "MaterialLayerPresets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset, METADATA_PARAMS(0, nullptr) }; // 1574399787
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::NewProp_MaterialLayerPresets = { "MaterialLayerPresets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasEditorDefaults, MaterialLayerPresets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialLayerPresets_MetaData), NewProp_MaterialLayerPresets_MetaData) }; // 1574399787
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::NewProp_BuilderDefaultAssets = { "BuilderDefaultAssets", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasEditorDefaults, BuilderDefaultAssets), Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuilderDefaultAssets_MetaData), NewProp_BuilderDefaultAssets_MetaData) }; // 2801968947
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::NewProp_DefaultLayerBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::NewProp_MaterialLayerPresets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::NewProp_MaterialLayerPresets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::NewProp_BuilderDefaultAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::ClassParams = {
	&UDungeonCanvasEditorDefaults::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonCanvasEditorDefaults()
{
	if (!Z_Registration_Info_UClass_UDungeonCanvasEditorDefaults.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonCanvasEditorDefaults.OuterSingleton, Z_Construct_UClass_UDungeonCanvasEditorDefaults_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonCanvasEditorDefaults.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonCanvasEditorDefaults>()
{
	return UDungeonCanvasEditorDefaults::StaticClass();
}
UDungeonCanvasEditorDefaults::UDungeonCanvasEditorDefaults(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonCanvasEditorDefaults);
UDungeonCanvasEditorDefaults::~UDungeonCanvasEditorDefaults() {}
// End Class UDungeonCanvasEditorDefaults

// Begin Class UDungeonCanvasEditorSettings
void UDungeonCanvasEditorSettings::StaticRegisterNativesUDungeonCanvasEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonCanvasEditorSettings);
UClass* Z_Construct_UClass_UDungeonCanvasEditorSettings_NoRegister()
{
	return UDungeonCanvasEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Background_MetaData[] = {
		{ "Comment", "/** The type of background to draw in the texture editor view port. */" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
		{ "ToolTip", "The type of background to draw in the texture editor view port." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sampling_MetaData[] = {
		{ "Comment", "/** The texture sampling mode used to render textures in the texture editor view port. */" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
		{ "ToolTip", "The texture sampling mode used to render textures in the texture editor view port." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** Background and foreground color used by Texture preview view ports. */" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
		{ "ToolTip", "Background and foreground color used by Texture preview view ports." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckerColorOne_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** The first color of the checkered background. */" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
		{ "ToolTip", "The first color of the checkered background." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckerColorTwo_MetaData[] = {
		{ "Category", "Background" },
		{ "Comment", "/** The second color of the checkered background. */" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
		{ "ToolTip", "The second color of the checkered background." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckerSize_MetaData[] = {
		{ "Category", "Background" },
		{ "ClampMax", "4096" },
		{ "ClampMin", "2" },
		{ "Comment", "/** The size of the checkered background tiles. */" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
		{ "ToolTip", "The size of the checkered background tiles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomMode_MetaData[] = {
		{ "Comment", "/** Whether the texture should scale to fit or fill the view port, or use a custom zoom level. */" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
		{ "ToolTip", "Whether the texture should scale to fit or fill the view port, or use a custom zoom level." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureBorderColor_MetaData[] = {
		{ "Category", "TextureBorder" },
		{ "Comment", "/** Color to use for the texture border, if enabled. */" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
		{ "ToolTip", "Color to use for the texture border, if enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureBorderEnabled_MetaData[] = {
		{ "Comment", "/** If true, displays a border around the texture. */" },
		{ "ModuleRelativePath", "Public/Core/Editors/CanvasEditor/DungeonCanvasEditorSettings.h" },
		{ "ToolTip", "If true, displays a border around the texture." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt8PropertyParams NewProp_Background_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Background;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_Sampling_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Sampling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckerColorOne;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CheckerColorTwo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CheckerSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ZoomMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ZoomMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureBorderColor;
	static void NewProp_TextureBorderEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TextureBorderEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonCanvasEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_Background_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_Background = { "Background", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasEditorSettings, Background), Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorBackgrounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Background_MetaData), NewProp_Background_MetaData) }; // 2346598787
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_Sampling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_Sampling = { "Sampling", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasEditorSettings, Sampling), Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorSampling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sampling_MetaData), NewProp_Sampling_MetaData) }; // 2635738823
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasEditorSettings, BackgroundColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_CheckerColorOne = { "CheckerColorOne", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasEditorSettings, CheckerColorOne), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckerColorOne_MetaData), NewProp_CheckerColorOne_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_CheckerColorTwo = { "CheckerColorTwo", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasEditorSettings, CheckerColorTwo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckerColorTwo_MetaData), NewProp_CheckerColorTwo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_CheckerSize = { "CheckerSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasEditorSettings, CheckerSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckerSize_MetaData), NewProp_CheckerSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_ZoomMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_ZoomMode = { "ZoomMode", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasEditorSettings, ZoomMode), Z_Construct_UEnum_DungeonArchitectEditor_EDungeonCanvasEditorZoomMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomMode_MetaData), NewProp_ZoomMode_MetaData) }; // 1566173268
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_TextureBorderColor = { "TextureBorderColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasEditorSettings, TextureBorderColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureBorderColor_MetaData), NewProp_TextureBorderColor_MetaData) };
void Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_TextureBorderEnabled_SetBit(void* Obj)
{
	((UDungeonCanvasEditorSettings*)Obj)->TextureBorderEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_TextureBorderEnabled = { "TextureBorderEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonCanvasEditorSettings), &Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_TextureBorderEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureBorderEnabled_MetaData), NewProp_TextureBorderEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_Background_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_Background,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_Sampling_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_Sampling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_CheckerColorOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_CheckerColorTwo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_CheckerSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_ZoomMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_ZoomMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_TextureBorderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::NewProp_TextureBorderEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::ClassParams = {
	&UDungeonCanvasEditorSettings::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonCanvasEditorSettings()
{
	if (!Z_Registration_Info_UClass_UDungeonCanvasEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonCanvasEditorSettings.OuterSingleton, Z_Construct_UClass_UDungeonCanvasEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonCanvasEditorSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonCanvasEditorSettings>()
{
	return UDungeonCanvasEditorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonCanvasEditorSettings);
UDungeonCanvasEditorSettings::~UDungeonCanvasEditorSettings() {}
// End Class UDungeonCanvasEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_CanvasEditor_DungeonCanvasEditorSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDungeonCanvasEditorBackgrounds_StaticEnum, TEXT("EDungeonCanvasEditorBackgrounds"), &Z_Registration_Info_UEnum_EDungeonCanvasEditorBackgrounds, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2346598787U) },
		{ EDungeonCanvasEditorSampling_StaticEnum, TEXT("EDungeonCanvasEditorSampling"), &Z_Registration_Info_UEnum_EDungeonCanvasEditorSampling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2635738823U) },
		{ EDungeonCanvasEditorZoomMode_StaticEnum, TEXT("EDungeonCanvasEditorZoomMode"), &Z_Registration_Info_UEnum_EDungeonCanvasEditorZoomMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1566173268U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDungeonCanvasEditorMaterialLayerPreset::StaticStruct, Z_Construct_UScriptStruct_FDungeonCanvasEditorMaterialLayerPreset_Statics::NewStructOps, TEXT("DungeonCanvasEditorMaterialLayerPreset"), &Z_Registration_Info_UScriptStruct_DungeonCanvasEditorMaterialLayerPreset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonCanvasEditorMaterialLayerPreset), 1574399787U) },
		{ FDungeonCanvasEditorBuilderDefaults::StaticStruct, Z_Construct_UScriptStruct_FDungeonCanvasEditorBuilderDefaults_Statics::NewStructOps, TEXT("DungeonCanvasEditorBuilderDefaults"), &Z_Registration_Info_UScriptStruct_DungeonCanvasEditorBuilderDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonCanvasEditorBuilderDefaults), 2801968947U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonCanvasEditorDefaults, UDungeonCanvasEditorDefaults::StaticClass, TEXT("UDungeonCanvasEditorDefaults"), &Z_Registration_Info_UClass_UDungeonCanvasEditorDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonCanvasEditorDefaults), 2452339886U) },
		{ Z_Construct_UClass_UDungeonCanvasEditorSettings, UDungeonCanvasEditorSettings::StaticClass, TEXT("UDungeonCanvasEditorSettings"), &Z_Registration_Info_UClass_UDungeonCanvasEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonCanvasEditorSettings), 1448891569U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_CanvasEditor_DungeonCanvasEditorSettings_h_2956188920(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_CanvasEditor_DungeonCanvasEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_CanvasEditor_DungeonCanvasEditorSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_CanvasEditor_DungeonCanvasEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_CanvasEditor_DungeonCanvasEditorSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_CanvasEditor_DungeonCanvasEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_CanvasEditor_DungeonCanvasEditorSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
