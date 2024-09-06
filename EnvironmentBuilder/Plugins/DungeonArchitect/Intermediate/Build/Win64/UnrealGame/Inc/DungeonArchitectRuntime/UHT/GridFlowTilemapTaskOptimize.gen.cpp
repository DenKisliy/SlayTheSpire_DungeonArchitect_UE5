// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskOptimize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowTilemapTaskOptimize() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTaskOptimize();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapTaskOptimize();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapTaskOptimize_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridFlowTilemapTaskOptimize
void UGridFlowTilemapTaskOptimize::StaticRegisterNativesUGridFlowTilemapTaskOptimize()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowTilemapTaskOptimize);
UClass* Z_Construct_UClass_UGridFlowTilemapTaskOptimize_NoRegister()
{
	return UGridFlowTilemapTaskOptimize::StaticClass();
}
struct Z_Construct_UClass_UGridFlowTilemapTaskOptimize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskOptimize.h" },
		{ "MenuPriority", "2500" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskOptimize.h" },
		{ "TilemapTask", "" },
		{ "Title", "Optimize Tilemap" },
		{ "Tooltip", "Optimize Tilemap" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowTilemapTaskOptimize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGridFlowTilemapTaskOptimize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowTilemapTaskOptimize,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskOptimize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowTilemapTaskOptimize_Statics::ClassParams = {
	&UGridFlowTilemapTaskOptimize::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskOptimize_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowTilemapTaskOptimize_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowTilemapTaskOptimize()
{
	if (!Z_Registration_Info_UClass_UGridFlowTilemapTaskOptimize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowTilemapTaskOptimize.OuterSingleton, Z_Construct_UClass_UGridFlowTilemapTaskOptimize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowTilemapTaskOptimize.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowTilemapTaskOptimize>()
{
	return UGridFlowTilemapTaskOptimize::StaticClass();
}
UGridFlowTilemapTaskOptimize::UGridFlowTilemapTaskOptimize(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowTilemapTaskOptimize);
UGridFlowTilemapTaskOptimize::~UGridFlowTilemapTaskOptimize() {}
// End Class UGridFlowTilemapTaskOptimize

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskOptimize_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowTilemapTaskOptimize, UGridFlowTilemapTaskOptimize::StaticClass, TEXT("UGridFlowTilemapTaskOptimize"), &Z_Registration_Info_UClass_UGridFlowTilemapTaskOptimize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowTilemapTaskOptimize), 2672982542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskOptimize_h_3785499658(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskOptimize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskOptimize_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
