// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskOptimize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowTilemapTaskOptimize() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTask();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTaskOptimize();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTaskOptimize_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UFlowTilemapTaskOptimize
void UFlowTilemapTaskOptimize::StaticRegisterNativesUFlowTilemapTaskOptimize()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowTilemapTaskOptimize);
UClass* Z_Construct_UClass_UFlowTilemapTaskOptimize_NoRegister()
{
	return UFlowTilemapTaskOptimize::StaticClass();
}
struct Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskOptimize.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskOptimize.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiscardDistanceFromLayout_MetaData[] = {
		{ "Category", "Optimize" },
		{ "Comment", "/**\n\x09\x09If the distance of a tile from the nearest layout tile is\n\x09\x09greater than the specified amount, it is discarded\n\n\x09\x09Variable Name: DiscardDistanceFromLayout\n\x09*/" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskOptimize.h" },
		{ "ToolTip", "If the distance of a tile from the nearest layout tile is\ngreater than the specified amount, it is discarded\n\nVariable Name: DiscardDistanceFromLayout" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DiscardDistanceFromLayout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowTilemapTaskOptimize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::NewProp_DiscardDistanceFromLayout = { "DiscardDistanceFromLayout", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapTaskOptimize, DiscardDistanceFromLayout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiscardDistanceFromLayout_MetaData), NewProp_DiscardDistanceFromLayout_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::NewProp_DiscardDistanceFromLayout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowTilemapTask,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::ClassParams = {
	&UFlowTilemapTaskOptimize::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowTilemapTaskOptimize()
{
	if (!Z_Registration_Info_UClass_UFlowTilemapTaskOptimize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowTilemapTaskOptimize.OuterSingleton, Z_Construct_UClass_UFlowTilemapTaskOptimize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowTilemapTaskOptimize.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowTilemapTaskOptimize>()
{
	return UFlowTilemapTaskOptimize::StaticClass();
}
UFlowTilemapTaskOptimize::UFlowTilemapTaskOptimize(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowTilemapTaskOptimize);
UFlowTilemapTaskOptimize::~UFlowTilemapTaskOptimize() {}
// End Class UFlowTilemapTaskOptimize

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskOptimize_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowTilemapTaskOptimize, UFlowTilemapTaskOptimize::StaticClass, TEXT("UFlowTilemapTaskOptimize"), &Z_Registration_Info_UClass_UFlowTilemapTaskOptimize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowTilemapTaskOptimize), 3692136256U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskOptimize_h_2701623637(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskOptimize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskOptimize_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
