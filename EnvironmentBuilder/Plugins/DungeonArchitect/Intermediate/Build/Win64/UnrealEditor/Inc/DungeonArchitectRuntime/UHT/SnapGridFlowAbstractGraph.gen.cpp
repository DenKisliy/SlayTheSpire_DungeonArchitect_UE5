// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/SnapGridFlowAbstractGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapGridFlowAbstractGraph() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractGraphBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecCloneableState_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowAbstractGraph();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowAbstractGraph_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapGridFlowAbstractGraph
void USnapGridFlowAbstractGraph::StaticRegisterNativesUSnapGridFlowAbstractGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowAbstractGraph);
UClass* Z_Construct_UClass_USnapGridFlowAbstractGraph_NoRegister()
{
	return USnapGridFlowAbstractGraph::StaticClass();
}
struct Z_Construct_UClass_USnapGridFlowAbstractGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////// Grid Flow Abstract Graph 3D ///////////////////////////// \n" },
#endif
		{ "IncludePath", "Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/SnapGridFlowAbstractGraph.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/SnapGridFlowAbstractGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Grid Flow Abstract Graph 3D" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/SnapGridFlowAbstractGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowAbstractGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapGridFlowAbstractGraph_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowAbstractGraph, GridSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapGridFlowAbstractGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowAbstractGraph_Statics::NewProp_GridSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowAbstractGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapGridFlowAbstractGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowAbstractGraphBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowAbstractGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USnapGridFlowAbstractGraph_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UFlowExecCloneableState_NoRegister, (int32)VTABLE_OFFSET(USnapGridFlowAbstractGraph, IFlowExecCloneableState), false },  // 3774609617
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowAbstractGraph_Statics::ClassParams = {
	&USnapGridFlowAbstractGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapGridFlowAbstractGraph_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowAbstractGraph_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowAbstractGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapGridFlowAbstractGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapGridFlowAbstractGraph()
{
	if (!Z_Registration_Info_UClass_USnapGridFlowAbstractGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowAbstractGraph.OuterSingleton, Z_Construct_UClass_USnapGridFlowAbstractGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapGridFlowAbstractGraph.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowAbstractGraph>()
{
	return USnapGridFlowAbstractGraph::StaticClass();
}
USnapGridFlowAbstractGraph::USnapGridFlowAbstractGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowAbstractGraph);
USnapGridFlowAbstractGraph::~USnapGridFlowAbstractGraph() {}
// End Class USnapGridFlowAbstractGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_SnapGridFlowAbstractGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowAbstractGraph, USnapGridFlowAbstractGraph::StaticClass, TEXT("USnapGridFlowAbstractGraph"), &Z_Registration_Info_UClass_USnapGridFlowAbstractGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowAbstractGraph), 851066405U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_SnapGridFlowAbstractGraph_h_2106582405(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_SnapGridFlowAbstractGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_SnapGridFlowAbstractGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
