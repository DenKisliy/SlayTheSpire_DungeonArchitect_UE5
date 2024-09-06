// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/DungeonGraphUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonGraphUtils() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FDungeonSchemaAction_NewNode
static_assert(std::is_polymorphic<FDungeonSchemaAction_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FDungeonSchemaAction_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewNode;
class UScriptStruct* FDungeonSchemaAction_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonSchemaAction_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewNode.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonSchemaAction_NewNode>()
{
	return FDungeonSchemaAction_NewNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Action to add a node to the graph */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonGraphUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action to add a node to the graph" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeTemplate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Template of node we want to create */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonGraphUtils.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Template of node we want to create" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonSchemaAction_NewNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode_Statics::NewProp_NodeTemplate = { "NodeTemplate", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonSchemaAction_NewNode, NodeTemplate), Z_Construct_UClass_UEdGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeTemplate_MetaData), NewProp_NodeTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode_Statics::NewProp_NodeTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"DungeonSchemaAction_NewNode",
	Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode_Statics::PropPointers),
	sizeof(FDungeonSchemaAction_NewNode),
	alignof(FDungeonSchemaAction_NewNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewNode.InnerSingleton;
}
// End ScriptStruct FDungeonSchemaAction_NewNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonGraphUtils_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDungeonSchemaAction_NewNode::StaticStruct, Z_Construct_UScriptStruct_FDungeonSchemaAction_NewNode_Statics::NewStructOps, TEXT("DungeonSchemaAction_NewNode"), &Z_Registration_Info_UScriptStruct_DungeonSchemaAction_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonSchemaAction_NewNode), 3240772038U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonGraphUtils_h_2993506833(TEXT("/Script/DungeonArchitectRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonGraphUtils_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonGraphUtils_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
