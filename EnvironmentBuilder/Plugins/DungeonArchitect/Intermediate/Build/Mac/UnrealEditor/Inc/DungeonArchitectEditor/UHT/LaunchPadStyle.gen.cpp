// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/LaunchPad/Styles/LaunchPadStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLaunchPadStyle() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin ScriptStruct FDALaunchPadStyleRegistryPath
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistryPath;
class UScriptStruct* FDALaunchPadStyleRegistryPath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistryPath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistryPath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("DALaunchPadStyleRegistryPath"));
	}
	return Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistryPath.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FDALaunchPadStyleRegistryPath>()
{
	return FDALaunchPadStyleRegistryPath::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Styles/LaunchPadStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Styles/LaunchPadStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Styles/LaunchPadStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Styles/LaunchPadStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Styles/LaunchPadStyle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDALaunchPadStyleRegistryPath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDALaunchPadStyleRegistryPath, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDALaunchPadStyleRegistryPath, Path), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Path_MetaData), NewProp_Path_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDALaunchPadStyleRegistryPath, Width), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Width_MetaData), NewProp_Width_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDALaunchPadStyleRegistryPath, Height), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Path,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewProp_Height,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	&NewStructOps,
	"DALaunchPadStyleRegistryPath",
	Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::PropPointers),
	sizeof(FDALaunchPadStyleRegistryPath),
	alignof(FDALaunchPadStyleRegistryPath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath()
{
	if (!Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistryPath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistryPath.InnerSingleton, Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistryPath.InnerSingleton;
}
// End ScriptStruct FDALaunchPadStyleRegistryPath

// Begin ScriptStruct FDALaunchPadStyleRegistry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistry;
class UScriptStruct* FDALaunchPadStyleRegistry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("DALaunchPadStyleRegistry"));
	}
	return Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistry.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FDALaunchPadStyleRegistry>()
{
	return FDALaunchPadStyleRegistry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Styles/LaunchPadStyle.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Paths_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/LaunchPad/Styles/LaunchPadStyle.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Paths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Paths;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDALaunchPadStyleRegistry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath, METADATA_PARAMS(0, nullptr) }; // 2963392182
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDALaunchPadStyleRegistry, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Paths_MetaData), NewProp_Paths_MetaData) }; // 2963392182
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::NewProp_Paths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::NewProp_Paths,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	&NewStructOps,
	"DALaunchPadStyleRegistry",
	Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::PropPointers),
	sizeof(FDALaunchPadStyleRegistry),
	alignof(FDALaunchPadStyleRegistry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry()
{
	if (!Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistry.InnerSingleton, Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistry.InnerSingleton;
}
// End ScriptStruct FDALaunchPadStyleRegistry

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Styles_LaunchPadStyle_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDALaunchPadStyleRegistryPath::StaticStruct, Z_Construct_UScriptStruct_FDALaunchPadStyleRegistryPath_Statics::NewStructOps, TEXT("DALaunchPadStyleRegistryPath"), &Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistryPath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDALaunchPadStyleRegistryPath), 2963392182U) },
		{ FDALaunchPadStyleRegistry::StaticStruct, Z_Construct_UScriptStruct_FDALaunchPadStyleRegistry_Statics::NewStructOps, TEXT("DALaunchPadStyleRegistry"), &Z_Registration_Info_UScriptStruct_DALaunchPadStyleRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDALaunchPadStyleRegistry), 3872080314U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Styles_LaunchPadStyle_h_3211074835(TEXT("/Script/DungeonArchitectEditor"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Styles_LaunchPadStyle_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_LaunchPad_Styles_LaunchPadStyle_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
