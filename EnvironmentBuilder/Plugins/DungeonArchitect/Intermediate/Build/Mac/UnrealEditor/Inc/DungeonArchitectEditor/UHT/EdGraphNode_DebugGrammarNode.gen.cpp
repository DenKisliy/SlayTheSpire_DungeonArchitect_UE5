// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/GraphGrammar/RuleGraph/Debugging/EdGraphNode_DebugGrammarNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_DebugGrammarNode() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DebugGrammarNode();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DebugGrammarNode_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_GrammarNode();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UEdGraphNode_DebugGrammarNode
void UEdGraphNode_DebugGrammarNode::StaticRegisterNativesUEdGraphNode_DebugGrammarNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_DebugGrammarNode);
UClass* Z_Construct_UClass_UEdGraphNode_DebugGrammarNode_NoRegister()
{
	return UEdGraphNode_DebugGrammarNode::StaticClass();
}
struct Z_Construct_UClass_UEdGraphNode_DebugGrammarNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/RuleGraph/Debugging/EdGraphNode_DebugGrammarNode.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Debugging/EdGraphNode_DebugGrammarNode.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_DebugGrammarNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEdGraphNode_DebugGrammarNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode_GrammarNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DebugGrammarNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_DebugGrammarNode_Statics::ClassParams = {
	&UEdGraphNode_DebugGrammarNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DebugGrammarNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphNode_DebugGrammarNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraphNode_DebugGrammarNode()
{
	if (!Z_Registration_Info_UClass_UEdGraphNode_DebugGrammarNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_DebugGrammarNode.OuterSingleton, Z_Construct_UClass_UEdGraphNode_DebugGrammarNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraphNode_DebugGrammarNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphNode_DebugGrammarNode>()
{
	return UEdGraphNode_DebugGrammarNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_DebugGrammarNode);
UEdGraphNode_DebugGrammarNode::~UEdGraphNode_DebugGrammarNode() {}
// End Class UEdGraphNode_DebugGrammarNode

// Begin Class UEdGraphNode_DebugGrammarDoorNode
void UEdGraphNode_DebugGrammarDoorNode::StaticRegisterNativesUEdGraphNode_DebugGrammarDoorNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_DebugGrammarDoorNode);
UClass* Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_NoRegister()
{
	return UEdGraphNode_DebugGrammarDoorNode::StaticClass();
}
struct Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/RuleGraph/Debugging/EdGraphNode_DebugGrammarNode.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Debugging/EdGraphNode_DebugGrammarNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Incoming_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Debugging/EdGraphNode_DebugGrammarNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Outgoing_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Debugging/EdGraphNode_DebugGrammarNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Incoming;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Outgoing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_DebugGrammarDoorNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_Statics::NewProp_Incoming = { "Incoming", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_DebugGrammarDoorNode, Incoming), Z_Construct_UClass_UEdGraphNode_DebugGrammarNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Incoming_MetaData), NewProp_Incoming_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_Statics::NewProp_Outgoing = { "Outgoing", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_DebugGrammarDoorNode, Outgoing), Z_Construct_UClass_UEdGraphNode_DebugGrammarNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Outgoing_MetaData), NewProp_Outgoing_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_Statics::NewProp_Incoming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_Statics::NewProp_Outgoing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_Statics::ClassParams = {
	&UEdGraphNode_DebugGrammarDoorNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode()
{
	if (!Z_Registration_Info_UClass_UEdGraphNode_DebugGrammarDoorNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_DebugGrammarDoorNode.OuterSingleton, Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraphNode_DebugGrammarDoorNode.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphNode_DebugGrammarDoorNode>()
{
	return UEdGraphNode_DebugGrammarDoorNode::StaticClass();
}
UEdGraphNode_DebugGrammarDoorNode::UEdGraphNode_DebugGrammarDoorNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_DebugGrammarDoorNode);
UEdGraphNode_DebugGrammarDoorNode::~UEdGraphNode_DebugGrammarDoorNode() {}
// End Class UEdGraphNode_DebugGrammarDoorNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Debugging_EdGraphNode_DebugGrammarNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_DebugGrammarNode, UEdGraphNode_DebugGrammarNode::StaticClass, TEXT("UEdGraphNode_DebugGrammarNode"), &Z_Registration_Info_UClass_UEdGraphNode_DebugGrammarNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_DebugGrammarNode), 2792261262U) },
		{ Z_Construct_UClass_UEdGraphNode_DebugGrammarDoorNode, UEdGraphNode_DebugGrammarDoorNode::StaticClass, TEXT("UEdGraphNode_DebugGrammarDoorNode"), &Z_Registration_Info_UClass_UEdGraphNode_DebugGrammarDoorNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_DebugGrammarDoorNode), 4208053034U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Debugging_EdGraphNode_DebugGrammarNode_h_1743746539(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Debugging_EdGraphNode_DebugGrammarNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Debugging_EdGraphNode_DebugGrammarNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
