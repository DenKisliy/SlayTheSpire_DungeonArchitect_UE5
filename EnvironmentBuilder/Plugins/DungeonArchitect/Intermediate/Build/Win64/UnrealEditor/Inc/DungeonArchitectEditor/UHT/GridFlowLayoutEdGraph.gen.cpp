// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/Flow/Domains/LayoutGraph/Impl/GridFlow/GridFlowLayoutEdGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowLayoutEdGraph() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UFlowLayoutEdGraph();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowLayoutEdGraph();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridFlowLayoutEdGraph_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UGridFlowLayoutEdGraph
void UGridFlowLayoutEdGraph::StaticRegisterNativesUGridFlowLayoutEdGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowLayoutEdGraph);
UClass* Z_Construct_UClass_UGridFlowLayoutEdGraph_NoRegister()
{
	return UGridFlowLayoutEdGraph::StaticClass();
}
struct Z_Construct_UClass_UGridFlowLayoutEdGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/LayoutGraph/Impl/GridFlow/GridFlowLayoutEdGraph.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Impl/GridFlow/GridFlowLayoutEdGraph.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowLayoutEdGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGridFlowLayoutEdGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowLayoutEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutEdGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowLayoutEdGraph_Statics::ClassParams = {
	&UGridFlowLayoutEdGraph::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutEdGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowLayoutEdGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowLayoutEdGraph()
{
	if (!Z_Registration_Info_UClass_UGridFlowLayoutEdGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowLayoutEdGraph.OuterSingleton, Z_Construct_UClass_UGridFlowLayoutEdGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowLayoutEdGraph.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridFlowLayoutEdGraph>()
{
	return UGridFlowLayoutEdGraph::StaticClass();
}
UGridFlowLayoutEdGraph::UGridFlowLayoutEdGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowLayoutEdGraph);
UGridFlowLayoutEdGraph::~UGridFlowLayoutEdGraph() {}
// End Class UGridFlowLayoutEdGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_Impl_GridFlow_GridFlowLayoutEdGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowLayoutEdGraph, UGridFlowLayoutEdGraph::StaticClass, TEXT("UGridFlowLayoutEdGraph"), &Z_Registration_Info_UClass_UGridFlowLayoutEdGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowLayoutEdGraph), 1482336689U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_Impl_GridFlow_GridFlowLayoutEdGraph_h_3806873193(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_Impl_GridFlow_GridFlowLayoutEdGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_Flow_Domains_LayoutGraph_Impl_GridFlow_GridFlowLayoutEdGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
