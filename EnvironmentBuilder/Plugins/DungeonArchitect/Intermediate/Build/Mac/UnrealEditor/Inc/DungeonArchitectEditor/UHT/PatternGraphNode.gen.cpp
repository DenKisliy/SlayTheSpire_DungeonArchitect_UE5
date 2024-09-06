// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatternGraphNode() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraphActionNode();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraphActionNode_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraphConditionNode();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraphConditionNode_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraphNode();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGPatternGraphNode_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UMGPatternGraphNode
void UMGPatternGraphNode::StaticRegisterNativesUMGPatternGraphNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternGraphNode);
UClass* Z_Construct_UClass_UMGPatternGraphNode_NoRegister()
{
	return UMGPatternGraphNode::StaticClass();
}
struct Z_Construct_UClass_UMGPatternGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphNode.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMGPatternGraphNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternGraphNode, NodeTemplate), Z_Construct_UClass_UMGPatternScriptNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeTemplate_MetaData), NewProp_NodeTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGPatternGraphNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternGraphNode_Statics::NewProp_NodeTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraphNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMGPatternGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternGraphNode_Statics::ClassParams = {
	&UMGPatternGraphNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMGPatternGraphNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraphNode_Statics::PropPointers),
	0,
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternGraphNode()
{
	if (!Z_Registration_Info_UClass_UMGPatternGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternGraphNode.OuterSingleton, Z_Construct_UClass_UMGPatternGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternGraphNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UMGPatternGraphNode>()
{
	return UMGPatternGraphNode::StaticClass();
}
UMGPatternGraphNode::UMGPatternGraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternGraphNode);
UMGPatternGraphNode::~UMGPatternGraphNode() {}
// End Class UMGPatternGraphNode

// Begin Class UMGPatternGraphConditionNode
void UMGPatternGraphConditionNode::StaticRegisterNativesUMGPatternGraphConditionNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternGraphConditionNode);
UClass* Z_Construct_UClass_UMGPatternGraphConditionNode_NoRegister()
{
	return UMGPatternGraphConditionNode::StaticClass();
}
struct Z_Construct_UClass_UMGPatternGraphConditionNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphNode.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternGraphConditionNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMGPatternGraphConditionNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMGPatternGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraphConditionNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternGraphConditionNode_Statics::ClassParams = {
	&UMGPatternGraphConditionNode::StaticClass,
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
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraphConditionNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternGraphConditionNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternGraphConditionNode()
{
	if (!Z_Registration_Info_UClass_UMGPatternGraphConditionNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternGraphConditionNode.OuterSingleton, Z_Construct_UClass_UMGPatternGraphConditionNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternGraphConditionNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UMGPatternGraphConditionNode>()
{
	return UMGPatternGraphConditionNode::StaticClass();
}
UMGPatternGraphConditionNode::UMGPatternGraphConditionNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternGraphConditionNode);
UMGPatternGraphConditionNode::~UMGPatternGraphConditionNode() {}
// End Class UMGPatternGraphConditionNode

// Begin Class UMGPatternGraphActionNode
void UMGPatternGraphActionNode::StaticRegisterNativesUMGPatternGraphActionNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternGraphActionNode);
UClass* Z_Construct_UClass_UMGPatternGraphActionNode_NoRegister()
{
	return UMGPatternGraphActionNode::StaticClass();
}
struct Z_Construct_UClass_UMGPatternGraphActionNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphNode.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternGraph/PatternGraphNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternGraphActionNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMGPatternGraphActionNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMGPatternGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraphActionNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternGraphActionNode_Statics::ClassParams = {
	&UMGPatternGraphActionNode::StaticClass,
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
	0x000000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternGraphActionNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternGraphActionNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternGraphActionNode()
{
	if (!Z_Registration_Info_UClass_UMGPatternGraphActionNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternGraphActionNode.OuterSingleton, Z_Construct_UClass_UMGPatternGraphActionNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternGraphActionNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UMGPatternGraphActionNode>()
{
	return UMGPatternGraphActionNode::StaticClass();
}
UMGPatternGraphActionNode::UMGPatternGraphActionNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternGraphActionNode);
UMGPatternGraphActionNode::~UMGPatternGraphActionNode() {}
// End Class UMGPatternGraphActionNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMGPatternGraphNode, UMGPatternGraphNode::StaticClass, TEXT("UMGPatternGraphNode"), &Z_Registration_Info_UClass_UMGPatternGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternGraphNode), 1947724064U) },
		{ Z_Construct_UClass_UMGPatternGraphConditionNode, UMGPatternGraphConditionNode::StaticClass, TEXT("UMGPatternGraphConditionNode"), &Z_Registration_Info_UClass_UMGPatternGraphConditionNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternGraphConditionNode), 383137764U) },
		{ Z_Construct_UClass_UMGPatternGraphActionNode, UMGPatternGraphActionNode::StaticClass, TEXT("UMGPatternGraphActionNode"), &Z_Registration_Info_UClass_UMGPatternGraphActionNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternGraphActionNode), 223797064U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraphNode_h_1995127394(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternGraph_PatternGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
