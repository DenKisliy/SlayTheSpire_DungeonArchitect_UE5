// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskSpawnItems.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapGridFlowLayoutTaskSpawnItems() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapGridFlowLayoutTaskSpawnItems
void USnapGridFlowLayoutTaskSpawnItems::StaticRegisterNativesUSnapGridFlowLayoutTaskSpawnItems()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowLayoutTaskSpawnItems);
UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_NoRegister()
{
	return USnapGridFlowLayoutTaskSpawnItems::StaticClass();
}
struct Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskSpawnItems.h" },
		{ "MenuPriority", "1300" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Tasks/SnapGridFlowLayoutTaskSpawnItems.h" },
		{ "Title", "Spawn Items" },
		{ "Tooltip", "Spawn items in the layout nodes" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowLayoutTaskSpawnItems>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_Statics::ClassParams = {
	&USnapGridFlowLayoutTaskSpawnItems::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems()
{
	if (!Z_Registration_Info_UClass_USnapGridFlowLayoutTaskSpawnItems.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowLayoutTaskSpawnItems.OuterSingleton, Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapGridFlowLayoutTaskSpawnItems.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowLayoutTaskSpawnItems>()
{
	return USnapGridFlowLayoutTaskSpawnItems::StaticClass();
}
USnapGridFlowLayoutTaskSpawnItems::USnapGridFlowLayoutTaskSpawnItems(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowLayoutTaskSpawnItems);
USnapGridFlowLayoutTaskSpawnItems::~USnapGridFlowLayoutTaskSpawnItems() {}
// End Class USnapGridFlowLayoutTaskSpawnItems

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskSpawnItems_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowLayoutTaskSpawnItems, USnapGridFlowLayoutTaskSpawnItems::StaticClass, TEXT("USnapGridFlowLayoutTaskSpawnItems"), &Z_Registration_Info_UClass_USnapGridFlowLayoutTaskSpawnItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowLayoutTaskSpawnItems), 2843977573U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskSpawnItems_h_4231583236(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskSpawnItems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Tasks_SnapGridFlowLayoutTaskSpawnItems_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
