// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellFlowLayoutTaskCreateCellsGrid() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UCellFlowLayoutTaskCreateCellsGrid
void UCellFlowLayoutTaskCreateCellsGrid::StaticRegisterNativesUCellFlowLayoutTaskCreateCellsGrid()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCellFlowLayoutTaskCreateCellsGrid);
UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_NoRegister()
{
	return UCellFlowLayoutTaskCreateCellsGrid::StaticClass();
}
struct Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsGrid.h" },
		{ "MenuPriority", "1000" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsGrid.h" },
		{ "Title", "Create Cells (Grid)" },
		{ "Tooltip", "Create the initial grid cell graph to work on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinCellSize_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCellSize_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FitIterations_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAspectRatio_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsGrid.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAspectRatio_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsGrid.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinCellSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCellSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FitIterations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAspectRatio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAspectRatio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCellFlowLayoutTaskCreateCellsGrid>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::NewProp_MinCellSize = { "MinCellSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskCreateCellsGrid, MinCellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinCellSize_MetaData), NewProp_MinCellSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::NewProp_MaxCellSize = { "MaxCellSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskCreateCellsGrid, MaxCellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCellSize_MetaData), NewProp_MaxCellSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::NewProp_FitIterations = { "FitIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskCreateCellsGrid, FitIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FitIterations_MetaData), NewProp_FitIterations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::NewProp_MinAspectRatio = { "MinAspectRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskCreateCellsGrid, MinAspectRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAspectRatio_MetaData), NewProp_MinAspectRatio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::NewProp_MaxAspectRatio = { "MaxAspectRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskCreateCellsGrid, MaxAspectRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAspectRatio_MetaData), NewProp_MaxAspectRatio_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::NewProp_MinCellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::NewProp_MaxCellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::NewProp_FitIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::NewProp_MinAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::NewProp_MaxAspectRatio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::ClassParams = {
	&UCellFlowLayoutTaskCreateCellsGrid::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid()
{
	if (!Z_Registration_Info_UClass_UCellFlowLayoutTaskCreateCellsGrid.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCellFlowLayoutTaskCreateCellsGrid.OuterSingleton, Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCellFlowLayoutTaskCreateCellsGrid.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UCellFlowLayoutTaskCreateCellsGrid>()
{
	return UCellFlowLayoutTaskCreateCellsGrid::StaticClass();
}
UCellFlowLayoutTaskCreateCellsGrid::UCellFlowLayoutTaskCreateCellsGrid() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCellFlowLayoutTaskCreateCellsGrid);
UCellFlowLayoutTaskCreateCellsGrid::~UCellFlowLayoutTaskCreateCellsGrid() {}
// End Class UCellFlowLayoutTaskCreateCellsGrid

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreateCellsGrid_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsGrid, UCellFlowLayoutTaskCreateCellsGrid::StaticClass, TEXT("UCellFlowLayoutTaskCreateCellsGrid"), &Z_Registration_Info_UClass_UCellFlowLayoutTaskCreateCellsGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCellFlowLayoutTaskCreateCellsGrid), 2543585318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreateCellsGrid_h_2235598581(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreateCellsGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreateCellsGrid_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
