// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_GrammarNode() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_GrammarBase();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_GrammarNode();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_GrammarNode_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrammarNodeType_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UEdGraphNode_GrammarNode
void UEdGraphNode_GrammarNode::StaticRegisterNativesUEdGraphNode_GrammarNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_GrammarNode);
UClass* Z_Construct_UClass_UEdGraphNode_GrammarNode_NoRegister()
{
	return UEdGraphNode_GrammarNode::StaticClass();
}
struct Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "Grammar" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayIndex_MetaData[] = {
		{ "Category", "Grammar" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DependentNodes_MetaData[] = {
		{ "Comment", "/** The nodes in this list will be dependent on this node to be processed first */" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h" },
		{ "ToolTip", "The nodes in this list will be dependent on this node to be processed first" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TypeInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_bDisplayIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DependentNodes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DependentNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_GrammarNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_TypeInfo = { "TypeInfo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_GrammarNode, TypeInfo), Z_Construct_UClass_UGrammarNodeType_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeInfo_MetaData), NewProp_TypeInfo_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_GrammarNode, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
void Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_bDisplayIndex_SetBit(void* Obj)
{
	((UEdGraphNode_GrammarNode*)Obj)->bDisplayIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_bDisplayIndex = { "bDisplayIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UEdGraphNode_GrammarNode), &Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_bDisplayIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayIndex_MetaData), NewProp_bDisplayIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_GrammarNode, NodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_DependentNodes_ElementProp = { "DependentNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
static_assert(TModels_V<CGetTypeHashable, FGuid>, "The structure 'FGuid' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_DependentNodes = { "DependentNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_GrammarNode, DependentNodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DependentNodes_MetaData), NewProp_DependentNodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_TypeInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_bDisplayIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_DependentNodes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::NewProp_DependentNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode_GrammarBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::ClassParams = {
	&UEdGraphNode_GrammarNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraphNode_GrammarNode()
{
	if (!Z_Registration_Info_UClass_UEdGraphNode_GrammarNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_GrammarNode.OuterSingleton, Z_Construct_UClass_UEdGraphNode_GrammarNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraphNode_GrammarNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphNode_GrammarNode>()
{
	return UEdGraphNode_GrammarNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_GrammarNode);
UEdGraphNode_GrammarNode::~UEdGraphNode_GrammarNode() {}
// End Class UEdGraphNode_GrammarNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Nodes_EdGraphNode_GrammarNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_GrammarNode, UEdGraphNode_GrammarNode::StaticClass, TEXT("UEdGraphNode_GrammarNode"), &Z_Registration_Info_UClass_UEdGraphNode_GrammarNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_GrammarNode), 3493568277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Nodes_EdGraphNode_GrammarNode_h_291166849(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Nodes_EdGraphNode_GrammarNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Nodes_EdGraphNode_GrammarNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
