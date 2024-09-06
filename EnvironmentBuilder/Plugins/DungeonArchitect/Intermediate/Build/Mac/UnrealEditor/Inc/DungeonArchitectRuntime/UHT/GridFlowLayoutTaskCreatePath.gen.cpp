// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreatePath.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowLayoutTaskCreatePath() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreatePath();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridFlowLayoutTaskCreatePath
void UGridFlowLayoutTaskCreatePath::StaticRegisterNativesUGridFlowLayoutTaskCreatePath()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowLayoutTaskCreatePath);
UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_NoRegister()
{
	return UGridFlowLayoutTaskCreatePath::StaticClass();
}
struct Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreatePath.h" },
		{ "MenuPriority", "1200" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreatePath.h" },
		{ "Title", "Create Path" },
		{ "Tooltip", "Create a path on an existing network" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleporterPlacement_MetaData[] = {
		{ "Category", "Teleporter" },
		{ "Comment", "/**\n        The marker to spawn for the teleporter\n\n        Variable Name: TeleporterMarkerName\n    */" },
		{ "EditCondition", "bEnterThroughTeleporter" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "The marker to spawn for the teleporter\n\nVariable Name: TeleporterMarkerName" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TeleporterPlacement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowLayoutTaskCreatePath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::NewProp_TeleporterPlacement = { "TeleporterPlacement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowLayoutTaskCreatePath, TeleporterPlacement), Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleporterPlacement_MetaData), NewProp_TeleporterPlacement_MetaData) }; // 1297846474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::NewProp_TeleporterPlacement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::ClassParams = {
	&UGridFlowLayoutTaskCreatePath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreatePath()
{
	if (!Z_Registration_Info_UClass_UGridFlowLayoutTaskCreatePath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowLayoutTaskCreatePath.OuterSingleton, Z_Construct_UClass_UGridFlowLayoutTaskCreatePath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowLayoutTaskCreatePath.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowLayoutTaskCreatePath>()
{
	return UGridFlowLayoutTaskCreatePath::StaticClass();
}
UGridFlowLayoutTaskCreatePath::UGridFlowLayoutTaskCreatePath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowLayoutTaskCreatePath);
UGridFlowLayoutTaskCreatePath::~UGridFlowLayoutTaskCreatePath() {}
// End Class UGridFlowLayoutTaskCreatePath

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreatePath_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowLayoutTaskCreatePath, UGridFlowLayoutTaskCreatePath::StaticClass, TEXT("UGridFlowLayoutTaskCreatePath"), &Z_Registration_Info_UClass_UGridFlowLayoutTaskCreatePath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowLayoutTaskCreatePath), 3405505542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreatePath_h_4232804694(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreatePath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreatePath_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
