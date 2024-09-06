// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateTeleporter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFlowLayoutTaskCreateTeleporter() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTask();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UBaseFlowLayoutTaskCreateTeleporter
void UBaseFlowLayoutTaskCreateTeleporter::StaticRegisterNativesUBaseFlowLayoutTaskCreateTeleporter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFlowLayoutTaskCreateTeleporter);
UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_NoRegister()
{
	return UBaseFlowLayoutTaskCreateTeleporter::StaticClass();
}
struct Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateTeleporter.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateTeleporter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPathName_MetaData[] = {
		{ "Category", "Create Teleporter" },
		{ "Comment", "/**\n       The name of the path the first linked item should be spawned to\n\n        Variable Name: FirstItemPathName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateTeleporter.h" },
		{ "ToolTip", "The name of the path the first linked item should be spawned to\n\n Variable Name: FirstItemPathName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondPathName_MetaData[] = {
		{ "Category", "Create Teleporter" },
		{ "Comment", "/**\n        The name of the path the second linked item should be spawned to\n\n        Variable Name: SecondItemPathName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateTeleporter.h" },
		{ "ToolTip", "The name of the path the second linked item should be spawned to\n\nVariable Name: SecondItemPathName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleporterMarkerName_MetaData[] = {
		{ "Category", "Create Teleporter" },
		{ "Comment", "/**\n        The marker name to spawn for the first linked item\n\n        Variable Name: FirstItemMarkerName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateTeleporter.h" },
		{ "ToolTip", "The marker name to spawn for the first linked item\n\nVariable Name: FirstItemMarkerName" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FirstPathName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SecondPathName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TeleporterMarkerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFlowLayoutTaskCreateTeleporter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_FirstPathName = { "FirstPathName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateTeleporter, FirstPathName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPathName_MetaData), NewProp_FirstPathName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_SecondPathName = { "SecondPathName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateTeleporter, SecondPathName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondPathName_MetaData), NewProp_SecondPathName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_TeleporterMarkerName = { "TeleporterMarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateTeleporter, TeleporterMarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleporterMarkerName_MetaData), NewProp_TeleporterMarkerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_FirstPathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_SecondPathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::NewProp_TeleporterMarkerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTask,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::ClassParams = {
	&UBaseFlowLayoutTaskCreateTeleporter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter()
{
	if (!Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateTeleporter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateTeleporter.OuterSingleton, Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateTeleporter.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UBaseFlowLayoutTaskCreateTeleporter>()
{
	return UBaseFlowLayoutTaskCreateTeleporter::StaticClass();
}
UBaseFlowLayoutTaskCreateTeleporter::UBaseFlowLayoutTaskCreateTeleporter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFlowLayoutTaskCreateTeleporter);
UBaseFlowLayoutTaskCreateTeleporter::~UBaseFlowLayoutTaskCreateTeleporter() {}
// End Class UBaseFlowLayoutTaskCreateTeleporter

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskCreateTeleporter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFlowLayoutTaskCreateTeleporter, UBaseFlowLayoutTaskCreateTeleporter::StaticClass, TEXT("UBaseFlowLayoutTaskCreateTeleporter"), &Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateTeleporter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFlowLayoutTaskCreateTeleporter), 884415226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskCreateTeleporter_h_775549497(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskCreateTeleporter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskCreateTeleporter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
