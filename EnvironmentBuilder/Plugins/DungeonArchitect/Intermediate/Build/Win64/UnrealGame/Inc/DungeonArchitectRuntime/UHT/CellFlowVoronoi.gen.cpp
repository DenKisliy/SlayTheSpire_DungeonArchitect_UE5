// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Impl/CellFlowVoronoi.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellFlowVoronoi() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDAFlowCellLeafNode();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDAFlowCellLeafNodeVoronoi
void UDAFlowCellLeafNodeVoronoi::StaticRegisterNativesUDAFlowCellLeafNodeVoronoi()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDAFlowCellLeafNodeVoronoi);
UClass* Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_NoRegister()
{
	return UDAFlowCellLeafNodeVoronoi::StaticClass();
}
struct Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/CellFlow/LayoutGraph/Impl/CellFlowVoronoi.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Impl/CellFlowVoronoi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SiteIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Impl/CellFlowVoronoi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterX_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Impl/CellFlowVoronoi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterY_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Impl/CellFlowVoronoi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Area_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Impl/CellFlowVoronoi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SiteIndex;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CenterX;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_CenterY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Area;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDAFlowCellLeafNodeVoronoi>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::NewProp_SiteIndex = { "SiteIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAFlowCellLeafNodeVoronoi, SiteIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SiteIndex_MetaData), NewProp_SiteIndex_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::NewProp_CenterX = { "CenterX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAFlowCellLeafNodeVoronoi, CenterX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterX_MetaData), NewProp_CenterX_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::NewProp_CenterY = { "CenterY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAFlowCellLeafNodeVoronoi, CenterY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterY_MetaData), NewProp_CenterY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::NewProp_Area = { "Area", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDAFlowCellLeafNodeVoronoi, Area), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Area_MetaData), NewProp_Area_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::NewProp_SiteIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::NewProp_CenterX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::NewProp_CenterY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::NewProp_Area,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDAFlowCellLeafNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::ClassParams = {
	&UDAFlowCellLeafNodeVoronoi::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::Class_MetaDataParams), Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi()
{
	if (!Z_Registration_Info_UClass_UDAFlowCellLeafNodeVoronoi.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDAFlowCellLeafNodeVoronoi.OuterSingleton, Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDAFlowCellLeafNodeVoronoi.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDAFlowCellLeafNodeVoronoi>()
{
	return UDAFlowCellLeafNodeVoronoi::StaticClass();
}
UDAFlowCellLeafNodeVoronoi::UDAFlowCellLeafNodeVoronoi(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDAFlowCellLeafNodeVoronoi);
UDAFlowCellLeafNodeVoronoi::~UDAFlowCellLeafNodeVoronoi() {}
// End Class UDAFlowCellLeafNodeVoronoi

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Impl_CellFlowVoronoi_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDAFlowCellLeafNodeVoronoi, UDAFlowCellLeafNodeVoronoi::StaticClass, TEXT("UDAFlowCellLeafNodeVoronoi"), &Z_Registration_Info_UClass_UDAFlowCellLeafNodeVoronoi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDAFlowCellLeafNodeVoronoi), 14150784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Impl_CellFlowVoronoi_h_1074063596(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Impl_CellFlowVoronoi_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Impl_CellFlowVoronoi_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
