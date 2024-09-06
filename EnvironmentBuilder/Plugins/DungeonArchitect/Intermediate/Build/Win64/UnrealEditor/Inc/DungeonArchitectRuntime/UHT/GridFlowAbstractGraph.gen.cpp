// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/GridFlowAbstractGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowAbstractGraph() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractGraphBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecCloneableState_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowAbstractGraph();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowAbstractGraph_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridFlowAbstractGraph
void UGridFlowAbstractGraph::StaticRegisterNativesUGridFlowAbstractGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowAbstractGraph);
UClass* Z_Construct_UClass_UGridFlowAbstractGraph_NoRegister()
{
	return UGridFlowAbstractGraph::StaticClass();
}
struct Z_Construct_UClass_UGridFlowAbstractGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////// Grid Flow Abstract Graph /////////////////////////////\n" },
#endif
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/LayoutGraph/GridFlowAbstractGraph.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/GridFlowAbstractGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid Flow Abstract Graph" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/GridFlowAbstractGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowAbstractGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowAbstractGraph_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowAbstractGraph, GridSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowAbstractGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowAbstractGraph_Statics::NewProp_GridSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowAbstractGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridFlowAbstractGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowAbstractGraphBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowAbstractGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGridFlowAbstractGraph_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UFlowExecCloneableState_NoRegister, (int32)VTABLE_OFFSET(UGridFlowAbstractGraph, IFlowExecCloneableState), false },  // 3774609617
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowAbstractGraph_Statics::ClassParams = {
	&UGridFlowAbstractGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridFlowAbstractGraph_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowAbstractGraph_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowAbstractGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowAbstractGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowAbstractGraph()
{
	if (!Z_Registration_Info_UClass_UGridFlowAbstractGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowAbstractGraph.OuterSingleton, Z_Construct_UClass_UGridFlowAbstractGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowAbstractGraph.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowAbstractGraph>()
{
	return UGridFlowAbstractGraph::StaticClass();
}
UGridFlowAbstractGraph::UGridFlowAbstractGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowAbstractGraph);
UGridFlowAbstractGraph::~UGridFlowAbstractGraph() {}
// End Class UGridFlowAbstractGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_GridFlowAbstractGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowAbstractGraph, UGridFlowAbstractGraph::StaticClass, TEXT("UGridFlowAbstractGraph"), &Z_Registration_Info_UClass_UGridFlowAbstractGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowAbstractGraph), 456830007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_GridFlowAbstractGraph_h_2541707770(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_GridFlowAbstractGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_GridFlowAbstractGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
