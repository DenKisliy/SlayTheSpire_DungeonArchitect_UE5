// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/ThemeEngine/DungeonThemeAsset.h"
#include "DungeonArchitectRuntime/Public/Core/DungeonProp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonThemeAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonEditorViewportProperties_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonThemeAsset();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonThemeAsset_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FClusterThemeInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPropTypeData();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonThemeAsset
void UDungeonThemeAsset::StaticRegisterNativesUDungeonThemeAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonThemeAsset);
UClass* Z_Construct_UClass_UDungeonThemeAsset_NoRegister()
{
	return UDungeonThemeAsset::StaticClass();
}
struct Z_Construct_UClass_UDungeonThemeAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** A Dungeon Theme asset lets you design the look and feel of you dungeon with an intuitive graph based approach */" },
		{ "IncludePath", "Frameworks/ThemeEngine/DungeonThemeAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/DungeonThemeAsset.h" },
		{ "ToolTip", "A Dungeon Theme asset lets you design the look and feel of you dungeon with an intuitive graph based approach" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Props_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/DungeonThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerGenerationModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/DungeonThemeAsset.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateGraph_MetaData[] = {
		{ "Comment", "/** EdGraph based representation */" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/DungeonThemeAsset.h" },
		{ "ToolTip", "EdGraph based representation" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewViewportProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/DungeonThemeAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Props_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Props;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerGenerationModel;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdateGraph;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewViewportProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonThemeAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_Props_Inner = { "Props", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPropTypeData, METADATA_PARAMS(0, nullptr) }; // 2203011960
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_Props = { "Props", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonThemeAsset, Props), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Props_MetaData), NewProp_Props_MetaData) }; // 2203011960
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_MarkerGenerationModel = { "MarkerGenerationModel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonThemeAsset, MarkerGenerationModel), Z_Construct_UClass_UMarkerGenModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerGenerationModel_MetaData), NewProp_MarkerGenerationModel_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_UpdateGraph = { "UpdateGraph", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonThemeAsset, UpdateGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateGraph_MetaData), NewProp_UpdateGraph_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_PreviewViewportProperties = { "PreviewViewportProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonThemeAsset, PreviewViewportProperties), Z_Construct_UClass_UDungeonEditorViewportProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewViewportProperties_MetaData), NewProp_PreviewViewportProperties_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonThemeAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_Props_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_Props,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_MarkerGenerationModel,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_UpdateGraph,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonThemeAsset_Statics::NewProp_PreviewViewportProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonThemeAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonThemeAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonThemeAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonThemeAsset_Statics::ClassParams = {
	&UDungeonThemeAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonThemeAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonThemeAsset_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonThemeAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonThemeAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonThemeAsset()
{
	if (!Z_Registration_Info_UClass_UDungeonThemeAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonThemeAsset.OuterSingleton, Z_Construct_UClass_UDungeonThemeAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonThemeAsset.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonThemeAsset>()
{
	return UDungeonThemeAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonThemeAsset);
UDungeonThemeAsset::~UDungeonThemeAsset() {}
// End Class UDungeonThemeAsset

// Begin ScriptStruct FClusterThemeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClusterThemeInfo;
class UScriptStruct* FClusterThemeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterThemeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClusterThemeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClusterThemeInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("ClusterThemeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ClusterThemeInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FClusterThemeInfo>()
{
	return FClusterThemeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClusterThemeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\nA dungeon builder can cluster different parts of the dungeon into groups where different themes can be applied to each group\nThis registry contains the theme registration for each group\n*/" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/DungeonThemeAsset.h" },
		{ "ToolTip", "A dungeon builder can cluster different parts of the dungeon into groups where different themes can be applied to each group\nThis registry contains the theme registration for each group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterThemeName_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/DungeonThemeAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Themes_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/DungeonThemeAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClusterThemeName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Themes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Themes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClusterThemeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_ClusterThemeName = { "ClusterThemeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterThemeInfo, ClusterThemeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterThemeName_MetaData), NewProp_ClusterThemeName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_Themes_Inner = { "Themes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonThemeAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_Themes = { "Themes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClusterThemeInfo, Themes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Themes_MetaData), NewProp_Themes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_ClusterThemeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_Themes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewProp_Themes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"ClusterThemeInfo",
	Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::PropPointers),
	sizeof(FClusterThemeInfo),
	alignof(FClusterThemeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClusterThemeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ClusterThemeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClusterThemeInfo.InnerSingleton, Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClusterThemeInfo.InnerSingleton;
}
// End ScriptStruct FClusterThemeInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_DungeonThemeAsset_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClusterThemeInfo::StaticStruct, Z_Construct_UScriptStruct_FClusterThemeInfo_Statics::NewStructOps, TEXT("ClusterThemeInfo"), &Z_Registration_Info_UScriptStruct_ClusterThemeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClusterThemeInfo), 1740626178U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonThemeAsset, UDungeonThemeAsset::StaticClass, TEXT("UDungeonThemeAsset"), &Z_Registration_Info_UClass_UDungeonThemeAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonThemeAsset), 2648766309U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_DungeonThemeAsset_h_4091704096(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_DungeonThemeAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_DungeonThemeAsset_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_DungeonThemeAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_DungeonThemeAsset_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
