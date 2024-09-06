// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/ExecGraph/FlowExecEdGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowExecEdGraph() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowExecEdGraph();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowExecEdGraph_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowExecEdGraphNode_Result_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UFlowExecEdGraph
void UFlowExecEdGraph::StaticRegisterNativesUFlowExecEdGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowExecEdGraph);
UClass* Z_Construct_UClass_UFlowExecEdGraph_NoRegister()
{
	return UFlowExecEdGraph::StaticClass();
}
struct Z_Construct_UClass_UFlowExecEdGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/FlowExecEdGraph.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecEdGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecEdGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowExecEdGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowExecEdGraph_Statics::NewProp_ResultNode = { "ResultNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowExecEdGraph, ResultNode), Z_Construct_UClass_UFlowExecEdGraphNode_Result_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultNode_MetaData), NewProp_ResultNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowExecEdGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowExecEdGraph_Statics::NewProp_ResultNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecEdGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowExecEdGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecEdGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowExecEdGraph_Statics::ClassParams = {
	&UFlowExecEdGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowExecEdGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecEdGraph_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecEdGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowExecEdGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowExecEdGraph()
{
	if (!Z_Registration_Info_UClass_UFlowExecEdGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowExecEdGraph.OuterSingleton, Z_Construct_UClass_UFlowExecEdGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowExecEdGraph.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UFlowExecEdGraph>()
{
	return UFlowExecEdGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowExecEdGraph);
UFlowExecEdGraph::~UFlowExecEdGraph() {}
// End Class UFlowExecEdGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_FlowExecEdGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowExecEdGraph, UFlowExecEdGraph::StaticClass, TEXT("UFlowExecEdGraph"), &Z_Registration_Info_UClass_UFlowExecEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowExecEdGraph), 1384069627U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_FlowExecEdGraph_h_2703315560(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_FlowExecEdGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_ExecGraph_FlowExecEdGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
