// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateOverlay.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/Tilemap/FlowTilemap.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowTilemapTaskCreateOverlay() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTask();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTaskCreateOverlay();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FFlowExecNodeTilemapOverlayNoiseSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowExecNodeTilemapOverlayNoiseSettings;
class UScriptStruct* FFlowExecNodeTilemapOverlayNoiseSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowExecNodeTilemapOverlayNoiseSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowExecNodeTilemapOverlayNoiseSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowExecNodeTilemapOverlayNoiseSettings"));
	}
	return Z_Registration_Info_UScriptStruct_FlowExecNodeTilemapOverlayNoiseSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowExecNodeTilemapOverlayNoiseSettings>()
{
	return FFlowExecNodeTilemapOverlayNoiseSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseOctaves_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "Comment", "/**\n\x09\x09Number of octaves to apply on the Perlin noise\n\n\x09\x09Variable Name: NoiseOctaves\n\x09*/" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateOverlay.h" },
		{ "ToolTip", "Number of octaves to apply on the Perlin noise\n\nVariable Name: NoiseOctaves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseFrequency_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "Comment", "/**\n\x09\x09""Frequency of the Noise\n\n\x09\x09Variable Name: NoiseFrequency\n\x09*/" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateOverlay.h" },
		{ "ToolTip", "Frequency of the Noise\n\nVariable Name: NoiseFrequency" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseValuePower_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "Comment", "/**\n\n\x09\x09Variable Name: NoiseValuePower\n\x09*/" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateOverlay.h" },
		{ "ToolTip", "Variable Name: NoiseValuePower" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseMinValue_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "Comment", "/**\n\x09\x09Min Noise Value. Higher generated noise values override other overlay noise values lower than this\n\n\x09\x09Variable Name: NoiseMinValue\n\x09*/" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateOverlay.h" },
		{ "ToolTip", "Min Noise Value. Higher generated noise values override other overlay noise values lower than this\n\nVariable Name: NoiseMinValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseMaxValue_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "Comment", "/**\n\x09\x09Max Noise Value. Higher generated noise values override other overlay noise values lower than this\n\n\x09\x09Variable Name: NoiseMaxValue\n\x09*/" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateOverlay.h" },
		{ "ToolTip", "Max Noise Value. Higher generated noise values override other overlay noise values lower than this\n\nVariable Name: NoiseMaxValue" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseThreshold_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "Comment", "/**\n\x09\x09If the generated noise value is greater than this value, the overlay is created\n\n\x09\x09Variable Name: NoiseThreshold\n\x09*/" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateOverlay.h" },
		{ "ToolTip", "If the generated noise value is greater than this value, the overlay is created\n\nVariable Name: NoiseThreshold" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinDistFromMainPath_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "Comment", "/**\n\x09\x09How far away should the overlays be created from the main path\n\n\x09\x09Variable Name: MinDistFromMainPath\n\x09*/" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateOverlay.h" },
		{ "ToolTip", "How far away should the overlays be created from the main path\n\nVariable Name: MinDistFromMainPath" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NoiseOctaves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseValuePower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseMinValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseMaxValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseThreshold;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinDistFromMainPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowExecNodeTilemapOverlayNoiseSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::NewProp_NoiseOctaves = { "NoiseOctaves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowExecNodeTilemapOverlayNoiseSettings, NoiseOctaves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseOctaves_MetaData), NewProp_NoiseOctaves_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::NewProp_NoiseFrequency = { "NoiseFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowExecNodeTilemapOverlayNoiseSettings, NoiseFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseFrequency_MetaData), NewProp_NoiseFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::NewProp_NoiseValuePower = { "NoiseValuePower", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowExecNodeTilemapOverlayNoiseSettings, NoiseValuePower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseValuePower_MetaData), NewProp_NoiseValuePower_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::NewProp_NoiseMinValue = { "NoiseMinValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowExecNodeTilemapOverlayNoiseSettings, NoiseMinValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseMinValue_MetaData), NewProp_NoiseMinValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::NewProp_NoiseMaxValue = { "NoiseMaxValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowExecNodeTilemapOverlayNoiseSettings, NoiseMaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseMaxValue_MetaData), NewProp_NoiseMaxValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::NewProp_NoiseThreshold = { "NoiseThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowExecNodeTilemapOverlayNoiseSettings, NoiseThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseThreshold_MetaData), NewProp_NoiseThreshold_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::NewProp_MinDistFromMainPath = { "MinDistFromMainPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowExecNodeTilemapOverlayNoiseSettings, MinDistFromMainPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinDistFromMainPath_MetaData), NewProp_MinDistFromMainPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::NewProp_NoiseOctaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::NewProp_NoiseFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::NewProp_NoiseValuePower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::NewProp_NoiseMinValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::NewProp_NoiseMaxValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::NewProp_NoiseThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::NewProp_MinDistFromMainPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"FlowExecNodeTilemapOverlayNoiseSettings",
	Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::PropPointers),
	sizeof(FFlowExecNodeTilemapOverlayNoiseSettings),
	alignof(FFlowExecNodeTilemapOverlayNoiseSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings()
{
	if (!Z_Registration_Info_UScriptStruct_FlowExecNodeTilemapOverlayNoiseSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowExecNodeTilemapOverlayNoiseSettings.InnerSingleton, Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlowExecNodeTilemapOverlayNoiseSettings.InnerSingleton;
}
// End ScriptStruct FFlowExecNodeTilemapOverlayNoiseSettings

// Begin Class UFlowTilemapTaskCreateOverlay
void UFlowTilemapTaskCreateOverlay::StaticRegisterNativesUFlowTilemapTaskCreateOverlay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowTilemapTaskCreateOverlay);
UClass* Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_NoRegister()
{
	return UFlowTilemapTaskCreateOverlay::StaticClass();
}
struct Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateOverlay.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
		{ "Category", "Create Overlay" },
		{ "Comment", "/**\n\x09\x09The name of the marker to emit. Create a marker node with this name in the theme file and \n\x09\x09""add your overlay asset there\n\n\x09\x09Variable Name: MarkerName\n\x09*/" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateOverlay.h" },
		{ "ToolTip", "The name of the marker to emit. Create a marker node with this name in the theme file and\nadd your overlay asset there\n\nVariable Name: MarkerName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Create Overlay" },
		{ "Comment", "/**\n\x09\x09The visualization color of the overlay in the preview viewports\n\n\x09\x09Variable Name: [N/A]\n\x09*/" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateOverlay.h" },
		{ "ToolTip", "The visualization color of the overlay in the preview viewports\n\nVariable Name: [N/A]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverlayBlocksTile_MetaData[] = {
		{ "Category", "Create Overlay" },
		{ "Comment", "/**\n\x09\x09Indicates if this overlay blocks the walkable area.  (E.g. trees/rocks block, while grass doesn't)\n\x09\x09This test is used to make sure items are not placed behind rocks and trees where the player might not\n\x09\x09""be able to get to\n\n\x09\x09Variable Name: bOverlayBlocksTile\n\x09*/" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateOverlay.h" },
		{ "ToolTip", "Indicates if this overlay blocks the walkable area.  (E.g. trees/rocks block, while grass doesn't)\nThis test is used to make sure items are not placed behind rocks and trees where the player might not\nbe able to get to\n\nVariable Name: bOverlayBlocksTile" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseSettings_MetaData[] = {
		{ "Category", "Create Overlay" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergeConfig_MetaData[] = {
		{ "Category", "Create Overlay" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_bOverlayBlocksTile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverlayBlocksTile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MergeConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowTilemapTaskCreateOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateOverlay, MarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerName_MetaData), NewProp_MarkerName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateOverlay, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
void Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::NewProp_bOverlayBlocksTile_SetBit(void* Obj)
{
	((UFlowTilemapTaskCreateOverlay*)Obj)->bOverlayBlocksTile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::NewProp_bOverlayBlocksTile = { "bOverlayBlocksTile", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFlowTilemapTaskCreateOverlay), &Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::NewProp_bOverlayBlocksTile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverlayBlocksTile_MetaData), NewProp_bOverlayBlocksTile_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::NewProp_NoiseSettings = { "NoiseSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateOverlay, NoiseSettings), Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseSettings_MetaData), NewProp_NoiseSettings_MetaData) }; // 2152175095
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::NewProp_MergeConfig = { "MergeConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateOverlay, MergeConfig), Z_Construct_UScriptStruct_FFlowTilemapCellOverlayMergeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergeConfig_MetaData), NewProp_MergeConfig_MetaData) }; // 3592733391
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::NewProp_MarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::NewProp_bOverlayBlocksTile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::NewProp_NoiseSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::NewProp_MergeConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowTilemapTask,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::ClassParams = {
	&UFlowTilemapTaskCreateOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowTilemapTaskCreateOverlay()
{
	if (!Z_Registration_Info_UClass_UFlowTilemapTaskCreateOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowTilemapTaskCreateOverlay.OuterSingleton, Z_Construct_UClass_UFlowTilemapTaskCreateOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowTilemapTaskCreateOverlay.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowTilemapTaskCreateOverlay>()
{
	return UFlowTilemapTaskCreateOverlay::StaticClass();
}
UFlowTilemapTaskCreateOverlay::UFlowTilemapTaskCreateOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowTilemapTaskCreateOverlay);
UFlowTilemapTaskCreateOverlay::~UFlowTilemapTaskCreateOverlay() {}
// End Class UFlowTilemapTaskCreateOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskCreateOverlay_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFlowExecNodeTilemapOverlayNoiseSettings::StaticStruct, Z_Construct_UScriptStruct_FFlowExecNodeTilemapOverlayNoiseSettings_Statics::NewStructOps, TEXT("FlowExecNodeTilemapOverlayNoiseSettings"), &Z_Registration_Info_UScriptStruct_FlowExecNodeTilemapOverlayNoiseSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowExecNodeTilemapOverlayNoiseSettings), 2152175095U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowTilemapTaskCreateOverlay, UFlowTilemapTaskCreateOverlay::StaticClass, TEXT("UFlowTilemapTaskCreateOverlay"), &Z_Registration_Info_UClass_UFlowTilemapTaskCreateOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowTilemapTaskCreateOverlay), 1167808172U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskCreateOverlay_h_518939425(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskCreateOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskCreateOverlay_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskCreateOverlay_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskCreateOverlay_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
