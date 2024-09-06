// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskMerge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowTilemapTaskMerge() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTaskMerge();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapTaskMerge();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowTilemapTaskMerge_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridFlowTilemapTaskMerge
void UGridFlowTilemapTaskMerge::StaticRegisterNativesUGridFlowTilemapTaskMerge()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowTilemapTaskMerge);
UClass* Z_Construct_UClass_UGridFlowTilemapTaskMerge_NoRegister()
{
	return UGridFlowTilemapTaskMerge::StaticClass();
}
struct Z_Construct_UClass_UGridFlowTilemapTaskMerge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskMerge.h" },
		{ "MenuPriority", "2400" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Tilemap/Tasks/GridFlowTilemapTaskMerge.h" },
		{ "TilemapTask", "" },
		{ "Title", "Merge Tilemaps" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Merge Tilemaps" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowTilemapTaskMerge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGridFlowTilemapTaskMerge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowTilemapTaskMerge,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskMerge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowTilemapTaskMerge_Statics::ClassParams = {
	&UGridFlowTilemapTaskMerge::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowTilemapTaskMerge_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowTilemapTaskMerge_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowTilemapTaskMerge()
{
	if (!Z_Registration_Info_UClass_UGridFlowTilemapTaskMerge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowTilemapTaskMerge.OuterSingleton, Z_Construct_UClass_UGridFlowTilemapTaskMerge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowTilemapTaskMerge.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowTilemapTaskMerge>()
{
	return UGridFlowTilemapTaskMerge::StaticClass();
}
UGridFlowTilemapTaskMerge::UGridFlowTilemapTaskMerge() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowTilemapTaskMerge);
UGridFlowTilemapTaskMerge::~UGridFlowTilemapTaskMerge() {}
// End Class UGridFlowTilemapTaskMerge

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskMerge_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowTilemapTaskMerge, UGridFlowTilemapTaskMerge::StaticClass, TEXT("UGridFlowTilemapTaskMerge"), &Z_Registration_Info_UClass_UGridFlowTilemapTaskMerge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowTilemapTaskMerge), 1273541518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskMerge_h_2262728758(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskMerge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Tilemap_Tasks_GridFlowTilemapTaskMerge_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
