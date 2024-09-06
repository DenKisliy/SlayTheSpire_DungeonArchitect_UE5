// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_GrammarExecRuleNode.h"
#include "DungeonArchitectRuntime/Public/Frameworks/GraphGrammar/Script/GrammarExecutionScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_GrammarExecRuleNode() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_GrammarExecNodeBase();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGraphGrammarProduction_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UEdGraphNode_GrammarExecRuleNode
void UEdGraphNode_GrammarExecRuleNode::StaticRegisterNativesUEdGraphNode_GrammarExecRuleNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_GrammarExecRuleNode);
UClass* Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_NoRegister()
{
	return UEdGraphNode_GrammarExecRuleNode::StaticClass();
}
struct Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_GrammarExecRuleNode.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_GrammarExecRuleNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rule_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_GrammarExecRuleNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionMode_MetaData[] = {
		{ "Category", "Grammar" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_GrammarExecRuleNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_GrammarExecRuleNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Rule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExecutionConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_GrammarExecRuleNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::NewProp_Rule = { "Rule", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_GrammarExecRuleNode, Rule), Z_Construct_UClass_UGraphGrammarProduction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rule_MetaData), NewProp_Rule_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::NewProp_ExecutionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::NewProp_ExecutionMode = { "ExecutionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_GrammarExecRuleNode, ExecutionMode), Z_Construct_UEnum_DungeonArchitectRuntime_ERuleNodeExecutionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionMode_MetaData), NewProp_ExecutionMode_MetaData) }; // 903757429
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::NewProp_ExecutionConfig = { "ExecutionConfig", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_GrammarExecRuleNode, ExecutionConfig), Z_Construct_UScriptStruct_FRuleNodeExecutionModeConfig, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionConfig_MetaData), NewProp_ExecutionConfig_MetaData) }; // 1613982349
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::NewProp_Rule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::NewProp_ExecutionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::NewProp_ExecutionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::NewProp_ExecutionConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode_GrammarExecNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::ClassParams = {
	&UEdGraphNode_GrammarExecRuleNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode()
{
	if (!Z_Registration_Info_UClass_UEdGraphNode_GrammarExecRuleNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_GrammarExecRuleNode.OuterSingleton, Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraphNode_GrammarExecRuleNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphNode_GrammarExecRuleNode>()
{
	return UEdGraphNode_GrammarExecRuleNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_GrammarExecRuleNode);
UEdGraphNode_GrammarExecRuleNode::~UEdGraphNode_GrammarExecRuleNode() {}
// End Class UEdGraphNode_GrammarExecRuleNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_GrammarExecRuleNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_GrammarExecRuleNode, UEdGraphNode_GrammarExecRuleNode::StaticClass, TEXT("UEdGraphNode_GrammarExecRuleNode"), &Z_Registration_Info_UClass_UEdGraphNode_GrammarExecRuleNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_GrammarExecRuleNode), 2045646654U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_GrammarExecRuleNode_h_2784602350(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_GrammarExecRuleNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_ExecutionGraph_Nodes_EdGraphNode_GrammarExecRuleNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
