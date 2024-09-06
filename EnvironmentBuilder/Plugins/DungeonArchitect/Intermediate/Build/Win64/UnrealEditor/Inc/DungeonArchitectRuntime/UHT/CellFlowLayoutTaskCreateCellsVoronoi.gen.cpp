// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsVoronoi.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellFlowLayoutTaskCreateCellsVoronoi() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowVoronoiGraph();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowVoronoiGraph_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecCloneableState_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UCellFlowLayoutTaskCreateCellsVoronoi
void UCellFlowLayoutTaskCreateCellsVoronoi::StaticRegisterNativesUCellFlowLayoutTaskCreateCellsVoronoi()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCellFlowLayoutTaskCreateCellsVoronoi);
UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_NoRegister()
{
	return UCellFlowLayoutTaskCreateCellsVoronoi::StaticClass();
}
struct Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsVoronoi.h" },
		{ "MenuPriority", "1001" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsVoronoi.h" },
		{ "Title", "Create Cells (Voronoi)" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Create the initial voronoi cell graph to work on" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumPoints_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsVoronoi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumRelaxIterations_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsVoronoi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableBoundaryCells_MetaData[] = {
		{ "Category", "CellFlow" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsVoronoi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeConnectionThreshold_MetaData[] = {
		{ "Category", "CellFlow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** We don't want to connect to an adjacent cell if the edge connecting to it is too small.  Control how small you want the ratio to be from here. */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsVoronoi.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "We don't want to connect to an adjacent cell if the edge connecting to it is too small.  Control how small you want the ratio to be from here." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumRelaxIterations;
	static void NewProp_bDisableBoundaryCells_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableBoundaryCells;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeConnectionThreshold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCellFlowLayoutTaskCreateCellsVoronoi>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskCreateCellsVoronoi, NumPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumPoints_MetaData), NewProp_NumPoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::NewProp_NumRelaxIterations = { "NumRelaxIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskCreateCellsVoronoi, NumRelaxIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumRelaxIterations_MetaData), NewProp_NumRelaxIterations_MetaData) };
void Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::NewProp_bDisableBoundaryCells_SetBit(void* Obj)
{
	((UCellFlowLayoutTaskCreateCellsVoronoi*)Obj)->bDisableBoundaryCells = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::NewProp_bDisableBoundaryCells = { "bDisableBoundaryCells", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCellFlowLayoutTaskCreateCellsVoronoi), &Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::NewProp_bDisableBoundaryCells_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableBoundaryCells_MetaData), NewProp_bDisableBoundaryCells_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::NewProp_EdgeConnectionThreshold = { "EdgeConnectionThreshold", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowLayoutTaskCreateCellsVoronoi, EdgeConnectionThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeConnectionThreshold_MetaData), NewProp_EdgeConnectionThreshold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::NewProp_NumPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::NewProp_NumRelaxIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::NewProp_bDisableBoundaryCells,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::NewProp_EdgeConnectionThreshold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::ClassParams = {
	&UCellFlowLayoutTaskCreateCellsVoronoi::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::Class_MetaDataParams), Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi()
{
	if (!Z_Registration_Info_UClass_UCellFlowLayoutTaskCreateCellsVoronoi.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCellFlowLayoutTaskCreateCellsVoronoi.OuterSingleton, Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCellFlowLayoutTaskCreateCellsVoronoi.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UCellFlowLayoutTaskCreateCellsVoronoi>()
{
	return UCellFlowLayoutTaskCreateCellsVoronoi::StaticClass();
}
UCellFlowLayoutTaskCreateCellsVoronoi::UCellFlowLayoutTaskCreateCellsVoronoi() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCellFlowLayoutTaskCreateCellsVoronoi);
UCellFlowLayoutTaskCreateCellsVoronoi::~UCellFlowLayoutTaskCreateCellsVoronoi() {}
// End Class UCellFlowLayoutTaskCreateCellsVoronoi

// Begin Class UCellFlowVoronoiGraph
void UCellFlowVoronoiGraph::StaticRegisterNativesUCellFlowVoronoiGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCellFlowVoronoiGraph);
UClass* Z_Construct_UClass_UCellFlowVoronoiGraph_NoRegister()
{
	return UCellFlowVoronoiGraph::StaticClass();
}
struct Z_Construct_UClass_UCellFlowVoronoiGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsVoronoi.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/CellFlow/LayoutGraph/Tasks/CellFlowLayoutTaskCreateCellsVoronoi.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCellFlowVoronoiGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCellFlowVoronoiGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowVoronoiGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCellFlowVoronoiGraph_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UFlowExecCloneableState_NoRegister, (int32)VTABLE_OFFSET(UCellFlowVoronoiGraph, IFlowExecCloneableState), false },  // 3774609617
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCellFlowVoronoiGraph_Statics::ClassParams = {
	&UCellFlowVoronoiGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowVoronoiGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UCellFlowVoronoiGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCellFlowVoronoiGraph()
{
	if (!Z_Registration_Info_UClass_UCellFlowVoronoiGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCellFlowVoronoiGraph.OuterSingleton, Z_Construct_UClass_UCellFlowVoronoiGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCellFlowVoronoiGraph.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UCellFlowVoronoiGraph>()
{
	return UCellFlowVoronoiGraph::StaticClass();
}
UCellFlowVoronoiGraph::UCellFlowVoronoiGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCellFlowVoronoiGraph);
UCellFlowVoronoiGraph::~UCellFlowVoronoiGraph() {}
// End Class UCellFlowVoronoiGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreateCellsVoronoi_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCellFlowLayoutTaskCreateCellsVoronoi, UCellFlowLayoutTaskCreateCellsVoronoi::StaticClass, TEXT("UCellFlowLayoutTaskCreateCellsVoronoi"), &Z_Registration_Info_UClass_UCellFlowLayoutTaskCreateCellsVoronoi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCellFlowLayoutTaskCreateCellsVoronoi), 3217437567U) },
		{ Z_Construct_UClass_UCellFlowVoronoiGraph, UCellFlowVoronoiGraph::StaticClass, TEXT("UCellFlowVoronoiGraph"), &Z_Registration_Info_UClass_UCellFlowVoronoiGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCellFlowVoronoiGraph), 935609725U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreateCellsVoronoi_h_4196294039(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreateCellsVoronoi_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_CellFlow_LayoutGraph_Tasks_CellFlowLayoutTaskCreateCellsVoronoi_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
