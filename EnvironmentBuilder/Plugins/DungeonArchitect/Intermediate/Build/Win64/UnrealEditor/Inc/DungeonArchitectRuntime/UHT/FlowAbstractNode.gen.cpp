// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowAbstractNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractNode();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractNode_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowGraphItem_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowAbstractNodeGroup();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UFlowAbstractNode Function ContainsItem
struct Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics
{
	struct FlowAbstractNode_eventContainsItem_Parms
	{
		EFlowGraphItemType ItemType;
		int32 Count;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlowAbstractNode_eventContainsItem_Parms, ItemType), Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType, METADATA_PARAMS(0, nullptr) }; // 55434792
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlowAbstractNode_eventContainsItem_Parms, Count), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlowAbstractNode_eventContainsItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlowAbstractNode_eventContainsItem_Parms), &Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_Count,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlowAbstractNode, nullptr, "ContainsItem", nullptr, nullptr, Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::FlowAbstractNode_eventContainsItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::FlowAbstractNode_eventContainsItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlowAbstractNode_ContainsItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlowAbstractNode_ContainsItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlowAbstractNode::execContainsItem)
{
	P_GET_ENUM(EFlowGraphItemType,Z_Param_ItemType);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Count);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContainsItem(EFlowGraphItemType(Z_Param_ItemType),Z_Param_Out_Count);
	P_NATIVE_END;
}
// End Class UFlowAbstractNode Function ContainsItem

// Begin Class UFlowAbstractNode
void UFlowAbstractNode::StaticRegisterNativesUFlowAbstractNode()
{
	UClass* Class = UFlowAbstractNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ContainsItem", &UFlowAbstractNode::execContainsItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowAbstractNode);
UClass* Z_Construct_UClass_UFlowAbstractNode_NoRegister()
{
	return UFlowAbstractNode::StaticClass();
}
struct Z_Construct_UClass_UFlowAbstractNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathName_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeItems_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MergedCompositeNodes_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This node may be a composite node which was created by merging these nodes */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This node may be a composite node which was created by merging these nodes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossDomainNodeData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Node data saved for use with another domain further down the lane (e.g. tilemap data, voxel data etc)\n" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Node data saved for use with another domain further down the lane (e.g. tilemap data, voxel data etc)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathIndex_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How far is this node from the start of this branch */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far is this node from the start of this branch" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathLength_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The length of this branch */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The length of this branch" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeId;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coord;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PathName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeItems_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeItems;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MergedCompositeNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MergedCompositeNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrossDomainNodeData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CrossDomainNodeData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PathIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PathLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlowAbstractNode_ContainsItem, "ContainsItem" }, // 1935170629
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowAbstractNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowAbstractNode, NodeId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
void Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((UFlowAbstractNode*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFlowAbstractNode), &Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowAbstractNode, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowAbstractNode, Coord), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coord_MetaData), NewProp_Coord_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathName = { "PathName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowAbstractNode, PathName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathName_MetaData), NewProp_PathName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeItems_Inner = { "NodeItems", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFlowGraphItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeItems = { "NodeItems", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowAbstractNode, NodeItems), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeItems_MetaData), NewProp_NodeItems_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_MergedCompositeNodes_Inner = { "MergedCompositeNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFlowAbstractNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_MergedCompositeNodes = { "MergedCompositeNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowAbstractNode, MergedCompositeNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MergedCompositeNodes_MetaData), NewProp_MergedCompositeNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_CrossDomainNodeData_Inner = { "CrossDomainNodeData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_CrossDomainNodeData = { "CrossDomainNodeData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowAbstractNode, CrossDomainNodeData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossDomainNodeData_MetaData), NewProp_CrossDomainNodeData_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathIndex = { "PathIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowAbstractNode, PathIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathIndex_MetaData), NewProp_PathIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathLength = { "PathLength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowAbstractNode, PathLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathLength_MetaData), NewProp_PathLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowAbstractNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_bActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_Coord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeItems_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_NodeItems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_MergedCompositeNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_MergedCompositeNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_CrossDomainNodeData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_CrossDomainNodeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowAbstractNode_Statics::NewProp_PathLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowAbstractNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowAbstractNode_Statics::ClassParams = {
	&UFlowAbstractNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFlowAbstractNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowAbstractNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowAbstractNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowAbstractNode()
{
	if (!Z_Registration_Info_UClass_UFlowAbstractNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowAbstractNode.OuterSingleton, Z_Construct_UClass_UFlowAbstractNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowAbstractNode.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowAbstractNode>()
{
	return UFlowAbstractNode::StaticClass();
}
UFlowAbstractNode::UFlowAbstractNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowAbstractNode);
UFlowAbstractNode::~UFlowAbstractNode() {}
// End Class UFlowAbstractNode

// Begin ScriptStruct FFlowAbstractNodeGroup
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlowAbstractNodeGroup;
class UScriptStruct* FFlowAbstractNodeGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlowAbstractNodeGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlowAbstractNodeGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlowAbstractNodeGroup, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("FlowAbstractNodeGroup"));
	}
	return Z_Registration_Info_UScriptStruct_FlowAbstractNodeGroup.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FFlowAbstractNodeGroup>()
{
	return FFlowAbstractNodeGroup::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlowAbstractNodeGroup>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupId = { "GroupId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowAbstractNodeGroup, GroupId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupId_MetaData), NewProp_GroupId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupNodes_Inner = { "GroupNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupNodes = { "GroupNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlowAbstractNodeGroup, GroupNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupNodes_MetaData), NewProp_GroupNodes_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewProp_GroupNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"FlowAbstractNodeGroup",
	Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::PropPointers),
	sizeof(FFlowAbstractNodeGroup),
	alignof(FFlowAbstractNodeGroup),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlowAbstractNodeGroup()
{
	if (!Z_Registration_Info_UScriptStruct_FlowAbstractNodeGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlowAbstractNodeGroup.InnerSingleton, Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlowAbstractNodeGroup.InnerSingleton;
}
// End ScriptStruct FFlowAbstractNodeGroup

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractNode_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFlowAbstractNodeGroup::StaticStruct, Z_Construct_UScriptStruct_FFlowAbstractNodeGroup_Statics::NewStructOps, TEXT("FlowAbstractNodeGroup"), &Z_Registration_Info_UScriptStruct_FlowAbstractNodeGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlowAbstractNodeGroup), 3501473509U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowAbstractNode, UFlowAbstractNode::StaticClass, TEXT("UFlowAbstractNode"), &Z_Registration_Info_UClass_UFlowAbstractNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowAbstractNode), 3870891404U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractNode_h_3696693817(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractNode_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractNode_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Core_FlowAbstractNode_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
