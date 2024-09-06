// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellFlowLayoutTaskScatterProps() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTask();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowLayoutTaskScatterProps();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowLayoutTaskScatterProps_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FCellFlowLayoutTaskScatterPropAssemblySettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CellFlowLayoutTaskScatterPropAssemblySettings;
class UScriptStruct* FCellFlowLayoutTaskScatterPropAssemblySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowLayoutTaskScatterPropAssemblySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CellFlowLayoutTaskScatterPropAssemblySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("CellFlowLayoutTaskScatterPropAssemblySettings"));
	}
	return Z_Registration_Info_UScriptStruct_CellFlowLayoutTaskScatterPropAssemblySettings.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FCellFlowLayoutTaskScatterPropAssemblySettings>()
{
	return FCellFlowLayoutTaskScatterPropAssemblySettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Category", "Prop" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
		{ "Category", "Prop" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[] = {
		{ "Category", "Prop" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCellFlowLayoutTaskScatterPropAssemblySettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((FCellFlowLayoutTaskScatterPropAssemblySettings*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FCellFlowLayoutTaskScatterPropAssemblySettings), &Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowLayoutTaskScatterPropAssemblySettings, MarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerName_MetaData), NewProp_MarkerName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowLayoutTaskScatterPropAssemblySettings, Probability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Probability_MetaData), NewProp_Probability_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::NewProp_MarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::NewProp_Probability,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"CellFlowLayoutTaskScatterPropAssemblySettings",
	Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::PropPointers),
	sizeof(FCellFlowLayoutTaskScatterPropAssemblySettings),
	alignof(FCellFlowLayoutTaskScatterPropAssemblySettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowLayoutTaskScatterPropAssemblySettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CellFlowLayoutTaskScatterPropAssemblySettings.InnerSingleton, Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CellFlowLayoutTaskScatterPropAssemblySettings.InnerSingleton;
}
// End ScriptStruct FCellFlowLayoutTaskScatterPropAssemblySettings

// Begin ScriptStruct FCellFlowLayoutTaskScatterPropSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CellFlowLayoutTaskScatterPropSettings;
class UScriptStruct* FCellFlowLayoutTaskScatterPropSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowLayoutTaskScatterPropSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CellFlowLayoutTaskScatterPropSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("CellFlowLayoutTaskScatterPropSettings"));
	}
	return Z_Registration_Info_UScriptStruct_CellFlowLayoutTaskScatterPropSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FCellFlowLayoutTaskScatterPropSettings>()
{
	return FCellFlowLayoutTaskScatterPropSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeMarkerNames_MetaData[] = {
		{ "Category", "Marker Names" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundMarkerNames_MetaData[] = {
		{ "Category", "Marker Names" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMarkerNames_MetaData[] = {
		{ "Category", "Marker Names" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StairMarkerNames_MetaData[] = {
		{ "Category", "Marker Names" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilesMarkersToAvoid_MetaData[] = {
		{ "Category", "Marker Names" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prop1x1_MetaData[] = {
		{ "Category", "Props" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prop1x2_MetaData[] = {
		{ "Category", "Props" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Prop1x3_MetaData[] = {
		{ "Category", "Props" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_EdgeMarkerNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EdgeMarkerNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroundMarkerNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroundMarkerNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DoorMarkerNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoorMarkerNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StairMarkerNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StairMarkerNames;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TilesMarkersToAvoid_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TilesMarkersToAvoid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Prop1x1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Prop1x2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Prop1x3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCellFlowLayoutTaskScatterPropSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_EdgeMarkerNames_Inner = { "EdgeMarkerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_EdgeMarkerNames = { "EdgeMarkerNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowLayoutTaskScatterPropSettings, EdgeMarkerNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeMarkerNames_MetaData), NewProp_EdgeMarkerNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_GroundMarkerNames_Inner = { "GroundMarkerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_GroundMarkerNames = { "GroundMarkerNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowLayoutTaskScatterPropSettings, GroundMarkerNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundMarkerNames_MetaData), NewProp_GroundMarkerNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_DoorMarkerNames_Inner = { "DoorMarkerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_DoorMarkerNames = { "DoorMarkerNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowLayoutTaskScatterPropSettings, DoorMarkerNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMarkerNames_MetaData), NewProp_DoorMarkerNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_StairMarkerNames_Inner = { "StairMarkerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_StairMarkerNames = { "StairMarkerNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowLayoutTaskScatterPropSettings, StairMarkerNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StairMarkerNames_MetaData), NewProp_StairMarkerNames_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_TilesMarkersToAvoid_Inner = { "TilesMarkersToAvoid", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_TilesMarkersToAvoid = { "TilesMarkersToAvoid", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowLayoutTaskScatterPropSettings, TilesMarkersToAvoid), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilesMarkersToAvoid_MetaData), NewProp_TilesMarkersToAvoid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_Prop1x1 = { "Prop1x1", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowLayoutTaskScatterPropSettings, Prop1x1), Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prop1x1_MetaData), NewProp_Prop1x1_MetaData) }; // 1489030980
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_Prop1x2 = { "Prop1x2", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowLayoutTaskScatterPropSettings, Prop1x2), Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prop1x2_MetaData), NewProp_Prop1x2_MetaData) }; // 1489030980
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_Prop1x3 = { "Prop1x3", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCellFlowLayoutTaskScatterPropSettings, Prop1x3), Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Prop1x3_MetaData), NewProp_Prop1x3_MetaData) }; // 1489030980
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_EdgeMarkerNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_EdgeMarkerNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_GroundMarkerNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_GroundMarkerNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_DoorMarkerNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_DoorMarkerNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_StairMarkerNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_StairMarkerNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_TilesMarkersToAvoid_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_TilesMarkersToAvoid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_Prop1x1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_Prop1x2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewProp_Prop1x3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"CellFlowLayoutTaskScatterPropSettings",
	Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::PropPointers),
	sizeof(FCellFlowLayoutTaskScatterPropSettings),
	alignof(FCellFlowLayoutTaskScatterPropSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings()
{
	if (!Z_Registration_Info_UScriptStruct_CellFlowLayoutTaskScatterPropSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CellFlowLayoutTaskScatterPropSettings.InnerSingleton, Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CellFlowLayoutTaskScatterPropSettings.InnerSingleton;
}
// End ScriptStruct FCellFlowLayoutTaskScatterPropSettings

// Begin Class UCellFlowLayoutTaskScatterProps
void UCellFlowLayoutTaskScatterProps::StaticRegisterNativesUCellFlowLayoutTaskScatterProps()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCellFlowLayoutTaskScatterProps);
UClass* Z_Construct_UClass_UCellFlowLayoutTaskScatterProps_NoRegister()
{
	return UCellFlowLayoutTaskScatterProps::StaticClass();
}
struct Z_Construct_UClass_UCellFlowLayoutTaskScatterProps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h" },
		{ "MenuPriority", "1500" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h" },
		{ "Title", "Scatter Props (Grid)" },
		{ "Tooltip", "Scatter Props in free space around the scene" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Category", "Scatter" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskScatterProps.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCellFlowLayoutTaskScatterProps>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskScatterProps_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskScatterProps, Settings), Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 4124455094
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCellFlowLayoutTaskScatterProps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskScatterProps_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskScatterProps_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCellFlowLayoutTaskScatterProps_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTask,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskScatterProps_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCellFlowLayoutTaskScatterProps_Statics::ClassParams = {
	&UCellFlowLayoutTaskScatterProps::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCellFlowLayoutTaskScatterProps_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskScatterProps_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskScatterProps_Statics::Class_MetaDataParams), Z_Construct_UClass_UCellFlowLayoutTaskScatterProps_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCellFlowLayoutTaskScatterProps()
{
	if (!Z_Registration_Info_UClass_UCellFlowLayoutTaskScatterProps.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCellFlowLayoutTaskScatterProps.OuterSingleton, Z_Construct_UClass_UCellFlowLayoutTaskScatterProps_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCellFlowLayoutTaskScatterProps.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UCellFlowLayoutTaskScatterProps>()
{
	return UCellFlowLayoutTaskScatterProps::StaticClass();
}
UCellFlowLayoutTaskScatterProps::UCellFlowLayoutTaskScatterProps(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCellFlowLayoutTaskScatterProps);
UCellFlowLayoutTaskScatterProps::~UCellFlowLayoutTaskScatterProps() {}
// End Class UCellFlowLayoutTaskScatterProps

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskScatterProps_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCellFlowLayoutTaskScatterPropAssemblySettings::StaticStruct, Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropAssemblySettings_Statics::NewStructOps, TEXT("CellFlowLayoutTaskScatterPropAssemblySettings"), &Z_Registration_Info_UScriptStruct_CellFlowLayoutTaskScatterPropAssemblySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCellFlowLayoutTaskScatterPropAssemblySettings), 1489030980U) },
		{ FCellFlowLayoutTaskScatterPropSettings::StaticStruct, Z_Construct_UScriptStruct_FCellFlowLayoutTaskScatterPropSettings_Statics::NewStructOps, TEXT("CellFlowLayoutTaskScatterPropSettings"), &Z_Registration_Info_UScriptStruct_CellFlowLayoutTaskScatterPropSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCellFlowLayoutTaskScatterPropSettings), 4124455094U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCellFlowLayoutTaskScatterProps, UCellFlowLayoutTaskScatterProps::StaticClass, TEXT("UCellFlowLayoutTaskScatterProps"), &Z_Registration_Info_UClass_UCellFlowLayoutTaskScatterProps, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCellFlowLayoutTaskScatterProps), 3103691791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskScatterProps_h_4173040921(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskScatterProps_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskScatterProps_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskScatterProps_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskScatterProps_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
