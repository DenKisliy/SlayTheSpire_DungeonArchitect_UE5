// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/ExecGraph/FlowExecGraphScript.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowExecGraphScript() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecScript();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecScript_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecScriptGraph();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecScriptGraph_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecScriptGraphNode();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecScriptGraphNode_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecScriptResultNode();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecScriptResultNode_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecScriptTaskNode();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecScriptTaskNode_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowExecTask_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UFlowExecScriptGraphNode
void UFlowExecScriptGraphNode::StaticRegisterNativesUFlowExecScriptGraphNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowExecScriptGraphNode);
UClass* Z_Construct_UClass_UFlowExecScriptGraphNode_NoRegister()
{
	return UFlowExecScriptGraphNode::StaticClass();
}
struct Z_Construct_UClass_UFlowExecScriptGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutgoingNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncomingNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutgoingNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutgoingNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IncomingNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IncomingNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowExecScriptGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowExecScriptGraphNode, NodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::NewProp_OutgoingNodes_Inner = { "OutgoingNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFlowExecScriptGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::NewProp_OutgoingNodes = { "OutgoingNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowExecScriptGraphNode, OutgoingNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutgoingNodes_MetaData), NewProp_OutgoingNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::NewProp_IncomingNodes_Inner = { "IncomingNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFlowExecScriptGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::NewProp_IncomingNodes = { "IncomingNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowExecScriptGraphNode, IncomingNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncomingNodes_MetaData), NewProp_IncomingNodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::NewProp_OutgoingNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::NewProp_OutgoingNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::NewProp_IncomingNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::NewProp_IncomingNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::ClassParams = {
	&UFlowExecScriptGraphNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowExecScriptGraphNode()
{
	if (!Z_Registration_Info_UClass_UFlowExecScriptGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowExecScriptGraphNode.OuterSingleton, Z_Construct_UClass_UFlowExecScriptGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowExecScriptGraphNode.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowExecScriptGraphNode>()
{
	return UFlowExecScriptGraphNode::StaticClass();
}
UFlowExecScriptGraphNode::UFlowExecScriptGraphNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowExecScriptGraphNode);
UFlowExecScriptGraphNode::~UFlowExecScriptGraphNode() {}
// End Class UFlowExecScriptGraphNode

// Begin Class UFlowExecScriptTaskNode
void UFlowExecScriptTaskNode::StaticRegisterNativesUFlowExecScriptTaskNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowExecScriptTaskNode);
UClass* Z_Construct_UClass_UFlowExecScriptTaskNode_NoRegister()
{
	return UFlowExecScriptTaskNode::StaticClass();
}
struct Z_Construct_UClass_UFlowExecScriptTaskNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowExecScriptTaskNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowExecScriptTaskNode_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowExecScriptTaskNode, Task), Z_Construct_UClass_UFlowExecTask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Task_MetaData), NewProp_Task_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowExecScriptTaskNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowExecScriptTaskNode_Statics::NewProp_Task,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScriptTaskNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowExecScriptTaskNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowExecScriptGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScriptTaskNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowExecScriptTaskNode_Statics::ClassParams = {
	&UFlowExecScriptTaskNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowExecScriptTaskNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScriptTaskNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScriptTaskNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowExecScriptTaskNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowExecScriptTaskNode()
{
	if (!Z_Registration_Info_UClass_UFlowExecScriptTaskNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowExecScriptTaskNode.OuterSingleton, Z_Construct_UClass_UFlowExecScriptTaskNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowExecScriptTaskNode.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowExecScriptTaskNode>()
{
	return UFlowExecScriptTaskNode::StaticClass();
}
UFlowExecScriptTaskNode::UFlowExecScriptTaskNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowExecScriptTaskNode);
UFlowExecScriptTaskNode::~UFlowExecScriptTaskNode() {}
// End Class UFlowExecScriptTaskNode

// Begin Class UFlowExecScriptResultNode
void UFlowExecScriptResultNode::StaticRegisterNativesUFlowExecScriptResultNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowExecScriptResultNode);
UClass* Z_Construct_UClass_UFlowExecScriptResultNode_NoRegister()
{
	return UFlowExecScriptResultNode::StaticClass();
}
struct Z_Construct_UClass_UFlowExecScriptResultNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowExecScriptResultNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFlowExecScriptResultNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowExecScriptGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScriptResultNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowExecScriptResultNode_Statics::ClassParams = {
	&UFlowExecScriptResultNode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScriptResultNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowExecScriptResultNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowExecScriptResultNode()
{
	if (!Z_Registration_Info_UClass_UFlowExecScriptResultNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowExecScriptResultNode.OuterSingleton, Z_Construct_UClass_UFlowExecScriptResultNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowExecScriptResultNode.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowExecScriptResultNode>()
{
	return UFlowExecScriptResultNode::StaticClass();
}
UFlowExecScriptResultNode::UFlowExecScriptResultNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowExecScriptResultNode);
UFlowExecScriptResultNode::~UFlowExecScriptResultNode() {}
// End Class UFlowExecScriptResultNode

// Begin Class UFlowExecScriptGraph
void UFlowExecScriptGraph::StaticRegisterNativesUFlowExecScriptGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowExecScriptGraph);
UClass* Z_Construct_UClass_UFlowExecScriptGraph_NoRegister()
{
	return UFlowExecScriptGraph::StaticClass();
}
struct Z_Construct_UClass_UFlowExecScriptGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Nodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowExecScriptGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowExecScriptGraph_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFlowExecScriptGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowExecScriptGraph_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowExecScriptGraph, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Nodes_MetaData), NewProp_Nodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowExecScriptGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowExecScriptGraph_Statics::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowExecScriptGraph_Statics::NewProp_Nodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScriptGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowExecScriptGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScriptGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowExecScriptGraph_Statics::ClassParams = {
	&UFlowExecScriptGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowExecScriptGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScriptGraph_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScriptGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowExecScriptGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowExecScriptGraph()
{
	if (!Z_Registration_Info_UClass_UFlowExecScriptGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowExecScriptGraph.OuterSingleton, Z_Construct_UClass_UFlowExecScriptGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowExecScriptGraph.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowExecScriptGraph>()
{
	return UFlowExecScriptGraph::StaticClass();
}
UFlowExecScriptGraph::UFlowExecScriptGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowExecScriptGraph);
UFlowExecScriptGraph::~UFlowExecScriptGraph() {}
// End Class UFlowExecScriptGraph

// Begin Class UFlowExecScript
void UFlowExecScript::StaticRegisterNativesUFlowExecScript()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowExecScript);
UClass* Z_Construct_UClass_UFlowExecScript_NoRegister()
{
	return UFlowExecScript::StaticClass();
}
struct Z_Construct_UClass_UFlowExecScript_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScriptGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultNode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/ExecGraph/FlowExecGraphScript.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScriptGraph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowExecScript>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowExecScript_Statics::NewProp_ScriptGraph = { "ScriptGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowExecScript, ScriptGraph), Z_Construct_UClass_UFlowExecScriptGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScriptGraph_MetaData), NewProp_ScriptGraph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowExecScript_Statics::NewProp_ResultNode = { "ResultNode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowExecScript, ResultNode), Z_Construct_UClass_UFlowExecScriptResultNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultNode_MetaData), NewProp_ResultNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowExecScript_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowExecScript_Statics::NewProp_ScriptGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowExecScript_Statics::NewProp_ResultNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScript_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowExecScript_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScript_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowExecScript_Statics::ClassParams = {
	&UFlowExecScript::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowExecScript_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScript_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowExecScript_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowExecScript_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowExecScript()
{
	if (!Z_Registration_Info_UClass_UFlowExecScript.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowExecScript.OuterSingleton, Z_Construct_UClass_UFlowExecScript_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowExecScript.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowExecScript>()
{
	return UFlowExecScript::StaticClass();
}
UFlowExecScript::UFlowExecScript(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowExecScript);
UFlowExecScript::~UFlowExecScript() {}
// End Class UFlowExecScript

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_ExecGraph_FlowExecGraphScript_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowExecScriptGraphNode, UFlowExecScriptGraphNode::StaticClass, TEXT("UFlowExecScriptGraphNode"), &Z_Registration_Info_UClass_UFlowExecScriptGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowExecScriptGraphNode), 1664582836U) },
		{ Z_Construct_UClass_UFlowExecScriptTaskNode, UFlowExecScriptTaskNode::StaticClass, TEXT("UFlowExecScriptTaskNode"), &Z_Registration_Info_UClass_UFlowExecScriptTaskNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowExecScriptTaskNode), 2999269647U) },
		{ Z_Construct_UClass_UFlowExecScriptResultNode, UFlowExecScriptResultNode::StaticClass, TEXT("UFlowExecScriptResultNode"), &Z_Registration_Info_UClass_UFlowExecScriptResultNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowExecScriptResultNode), 2066121044U) },
		{ Z_Construct_UClass_UFlowExecScriptGraph, UFlowExecScriptGraph::StaticClass, TEXT("UFlowExecScriptGraph"), &Z_Registration_Info_UClass_UFlowExecScriptGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowExecScriptGraph), 388473624U) },
		{ Z_Construct_UClass_UFlowExecScript, UFlowExecScript::StaticClass, TEXT("UFlowExecScript"), &Z_Registration_Info_UClass_UFlowExecScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowExecScript), 1008617881U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_ExecGraph_FlowExecGraphScript_h_137381323(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_ExecGraph_FlowExecGraphScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_ExecGraph_FlowExecGraphScript_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
