// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatternGraph() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraph();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraph_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraphNode_OnPass_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraphNode_Result_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UMGPatternGraph
void UMGPatternGraph::StaticRegisterNativesUMGPatternGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternGraph);
UClass* Z_Construct_UClass_UMGPatternGraph_NoRegister()
{
	return UMGPatternGraph::StaticClass();
}
struct Z_Construct_UClass_UMGPatternGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraph.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionPassNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionPassNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMGPatternGraph_Statics::NewProp_ResultNode = { "ResultNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternGraph, ResultNode), Z_Construct_UClass_UMGPatternGraphNode_Result_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultNode_MetaData), NewProp_ResultNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMGPatternGraph_Statics::NewProp_ActionPassNode = { "ActionPassNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternGraph, ActionPassNode), Z_Construct_UClass_UMGPatternGraphNode_OnPass_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionPassNode_MetaData), NewProp_ActionPassNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGPatternGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternGraph_Statics::NewProp_ResultNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternGraph_Statics::NewProp_ActionPassNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMGPatternGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternGraph_Statics::ClassParams = {
	&UMGPatternGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMGPatternGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraph_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternGraph()
{
	if (!Z_Registration_Info_UClass_UMGPatternGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternGraph.OuterSingleton, Z_Construct_UClass_UMGPatternGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternGraph.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UMGPatternGraph>()
{
	return UMGPatternGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternGraph);
UMGPatternGraph::~UMGPatternGraph() {}
// End Class UMGPatternGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMGPatternGraph, UMGPatternGraph::StaticClass, TEXT("UMGPatternGraph"), &Z_Registration_Info_UClass_UMGPatternGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternGraph), 4133888619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraph_h_3795925339(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
