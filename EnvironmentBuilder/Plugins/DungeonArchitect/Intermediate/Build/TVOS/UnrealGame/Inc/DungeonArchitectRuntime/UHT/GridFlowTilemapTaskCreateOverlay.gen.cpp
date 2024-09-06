// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskCreateOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowTilemapTaskCreateOverlay() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTaskCreateOverlay();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapTaskCreateOverlay();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapTaskCreateOverlay_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridFlowTilemapTaskCreateOverlay
void UGridFlowTilemapTaskCreateOverlay::StaticRegisterNativesUGridFlowTilemapTaskCreateOverlay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowTilemapTaskCreateOverlay);
UClass* Z_Construct_UClass_UGridFlowTilemapTaskCreateOverlay_NoRegister()
{
	return UGridFlowTilemapTaskCreateOverlay::StaticClass();
}
struct Z_Construct_UClass_UGridFlowTilemapTaskCreateOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskCreateOverlay.h" },
		{ "MenuPriority", "2300" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskCreateOverlay.h" },
		{ "TilemapTask", "" },
		{ "Title", "Create Overlay" },
		{ "Tooltip", "Create Overlay" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowTilemapTaskCreateOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGridFlowTilemapTaskCreateOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowTilemapTaskCreateOverlay,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskCreateOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowTilemapTaskCreateOverlay_Statics::ClassParams = {
	&UGridFlowTilemapTaskCreateOverlay::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskCreateOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowTilemapTaskCreateOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowTilemapTaskCreateOverlay()
{
	if (!Z_Registration_Info_UClass_UGridFlowTilemapTaskCreateOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowTilemapTaskCreateOverlay.OuterSingleton, Z_Construct_UClass_UGridFlowTilemapTaskCreateOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowTilemapTaskCreateOverlay.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowTilemapTaskCreateOverlay>()
{
	return UGridFlowTilemapTaskCreateOverlay::StaticClass();
}
UGridFlowTilemapTaskCreateOverlay::UGridFlowTilemapTaskCreateOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowTilemapTaskCreateOverlay);
UGridFlowTilemapTaskCreateOverlay::~UGridFlowTilemapTaskCreateOverlay() {}
// End Class UGridFlowTilemapTaskCreateOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskCreateOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowTilemapTaskCreateOverlay, UGridFlowTilemapTaskCreateOverlay::StaticClass, TEXT("UGridFlowTilemapTaskCreateOverlay"), &Z_Registration_Info_UClass_UGridFlowTilemapTaskCreateOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowTilemapTaskCreateOverlay), 1805951813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskCreateOverlay_h_323043942(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskCreateOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskCreateOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
