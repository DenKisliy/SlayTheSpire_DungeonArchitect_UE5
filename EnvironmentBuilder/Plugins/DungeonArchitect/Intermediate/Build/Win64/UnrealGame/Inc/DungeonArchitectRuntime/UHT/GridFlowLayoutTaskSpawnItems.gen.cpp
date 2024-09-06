// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskSpawnItems.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowLayoutTaskSpawnItems() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridFlowLayoutTaskSpawnItems
void UGridFlowLayoutTaskSpawnItems::StaticRegisterNativesUGridFlowLayoutTaskSpawnItems()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowLayoutTaskSpawnItems);
UClass* Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_NoRegister()
{
	return UGridFlowLayoutTaskSpawnItems::StaticClass();
}
struct Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskSpawnItems.h" },
		{ "MenuPriority", "1300" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskSpawnItems.h" },
		{ "Title", "Spawn Items" },
		{ "Tooltip", "Spawn items in the layout nodes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementSettings_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskSpawnItems.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlacementSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowLayoutTaskSpawnItems>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::NewProp_PlacementSettings = { "PlacementSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowLayoutTaskSpawnItems, PlacementSettings), Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementSettings_MetaData), NewProp_PlacementSettings_MetaData) }; // 1297846474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::NewProp_PlacementSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::ClassParams = {
	&UGridFlowLayoutTaskSpawnItems::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems()
{
	if (!Z_Registration_Info_UClass_UGridFlowLayoutTaskSpawnItems.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowLayoutTaskSpawnItems.OuterSingleton, Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowLayoutTaskSpawnItems.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowLayoutTaskSpawnItems>()
{
	return UGridFlowLayoutTaskSpawnItems::StaticClass();
}
UGridFlowLayoutTaskSpawnItems::UGridFlowLayoutTaskSpawnItems(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowLayoutTaskSpawnItems);
UGridFlowLayoutTaskSpawnItems::~UGridFlowLayoutTaskSpawnItems() {}
// End Class UGridFlowLayoutTaskSpawnItems

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskSpawnItems_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowLayoutTaskSpawnItems, UGridFlowLayoutTaskSpawnItems::StaticClass, TEXT("UGridFlowLayoutTaskSpawnItems"), &Z_Registration_Info_UClass_UGridFlowLayoutTaskSpawnItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowLayoutTaskSpawnItems), 1942549743U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskSpawnItems_h_1801346790(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskSpawnItems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskSpawnItems_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
