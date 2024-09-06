// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Layout/FloorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorSettings() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonFloorSettings();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FDungeonFloorSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonFloorSettings;
class UScriptStruct* FDungeonFloorSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonFloorSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonFloorSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonFloorSettings, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonFloorSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonFloorSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonFloorSettings>()
{
	return FDungeonFloorSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/FloorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorHeight_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Layout/FloorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorCaptureHeight_MetaData[] = {
		{ "Comment", "// Height of a floor\n" },
		{ "ModuleRelativePath", "Public/Core/Layout/FloorSettings.h" },
		{ "ToolTip", "Height of a floor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GlobalHeightOffset_MetaData[] = {
		{ "Comment", "// This should not account for the ceiling mesh, or it may overlap with the floor above\n" },
		{ "ModuleRelativePath", "Public/Core/Layout/FloorSettings.h" },
		{ "ToolTip", "This should not account for the ceiling mesh, or it may overlap with the floor above" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorLowestIndex_MetaData[] = {
		{ "Comment", "// The offset to apply to the dungeon height\n" },
		{ "ModuleRelativePath", "Public/Core/Layout/FloorSettings.h" },
		{ "ToolTip", "The offset to apply to the dungeon height" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloorHighestIndex_MetaData[] = {
		{ "Comment", "// Minimum Floor Index\n" },
		{ "ModuleRelativePath", "Public/Core/Layout/FloorSettings.h" },
		{ "ToolTip", "Minimum Floor Index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloorCaptureHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GlobalHeightOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FloorLowestIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FloorHighestIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonFloorSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::NewProp_FloorHeight = { "FloorHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonFloorSettings, FloorHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorHeight_MetaData), NewProp_FloorHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::NewProp_FloorCaptureHeight = { "FloorCaptureHeight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonFloorSettings, FloorCaptureHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorCaptureHeight_MetaData), NewProp_FloorCaptureHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::NewProp_GlobalHeightOffset = { "GlobalHeightOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonFloorSettings, GlobalHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GlobalHeightOffset_MetaData), NewProp_GlobalHeightOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::NewProp_FloorLowestIndex = { "FloorLowestIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonFloorSettings, FloorLowestIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorLowestIndex_MetaData), NewProp_FloorLowestIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::NewProp_FloorHighestIndex = { "FloorHighestIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonFloorSettings, FloorHighestIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloorHighestIndex_MetaData), NewProp_FloorHighestIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::NewProp_FloorHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::NewProp_FloorCaptureHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::NewProp_GlobalHeightOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::NewProp_FloorLowestIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::NewProp_FloorHighestIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonFloorSettings",
	Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::PropPointers),
	sizeof(FDungeonFloorSettings),
	alignof(FDungeonFloorSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonFloorSettings()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonFloorSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonFloorSettings.InnerSingleton, Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonFloorSettings.InnerSingleton;
}
// End ScriptStruct FDungeonFloorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_FloorSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDungeonFloorSettings::StaticStruct, Z_Construct_UScriptStruct_FDungeonFloorSettings_Statics::NewStructOps, TEXT("DungeonFloorSettings"), &Z_Registration_Info_UScriptStruct_DungeonFloorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonFloorSettings), 2050747746U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_FloorSettings_h_1345637006(TEXT("/Script/DungeonArchitectRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_FloorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Layout_FloorSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
