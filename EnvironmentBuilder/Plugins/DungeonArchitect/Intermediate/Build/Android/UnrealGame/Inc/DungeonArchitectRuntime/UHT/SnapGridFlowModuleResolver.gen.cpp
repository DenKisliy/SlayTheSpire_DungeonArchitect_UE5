// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleResolver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapGridFlowModuleResolver() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAbstractNode_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleSelectionRule();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleSelectionRule_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapGridFlowModuleSelectionRule Function CanSelect
struct SnapGridFlowModuleSelectionRule_eventCanSelect_Parms
{
	UFlowAbstractNode* Node;
	TArray<UFlowAbstractNode*> ExistingNodes;
	FName Category;
	TArray<FName> Tags;
	int32 RotationIndex;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SnapGridFlowModuleSelectionRule_eventCanSelect_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USnapGridFlowModuleSelectionRule_CanSelect = FName(TEXT("CanSelect"));
bool USnapGridFlowModuleSelectionRule::CanSelect(UFlowAbstractNode* Node, TArray<UFlowAbstractNode*> const& ExistingNodes, FName const& Category, TArray<FName> const& Tags, int32 RotationIndex)
{
	SnapGridFlowModuleSelectionRule_eventCanSelect_Parms Parms;
	Parms.Node=Node;
	Parms.ExistingNodes=ExistingNodes;
	Parms.Category=Category;
	Parms.Tags=Tags;
	Parms.RotationIndex=RotationIndex;
	ProcessEvent(FindFunctionChecked(NAME_USnapGridFlowModuleSelectionRule_CanSelect),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleResolver.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExistingNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExistingNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExistingNodes;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RotationIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowModuleSelectionRule_eventCanSelect_Parms, Node), Z_Construct_UClass_UFlowAbstractNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_ExistingNodes_Inner = { "ExistingNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFlowAbstractNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_ExistingNodes = { "ExistingNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowModuleSelectionRule_eventCanSelect_Parms, ExistingNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExistingNodes_MetaData), NewProp_ExistingNodes_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowModuleSelectionRule_eventCanSelect_Parms, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowModuleSelectionRule_eventCanSelect_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_RotationIndex = { "RotationIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowModuleSelectionRule_eventCanSelect_Parms, RotationIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SnapGridFlowModuleSelectionRule_eventCanSelect_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SnapGridFlowModuleSelectionRule_eventCanSelect_Parms), &Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_ExistingNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_ExistingNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_RotationIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapGridFlowModuleSelectionRule, nullptr, "CanSelect", nullptr, nullptr, Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::PropPointers), sizeof(SnapGridFlowModuleSelectionRule_eventCanSelect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::Function_MetaDataParams) };
static_assert(sizeof(SnapGridFlowModuleSelectionRule_eventCanSelect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USnapGridFlowModuleSelectionRule::execCanSelect)
{
	P_GET_OBJECT(UFlowAbstractNode,Z_Param_Node);
	P_GET_TARRAY_REF(UFlowAbstractNode*,Z_Param_Out_ExistingNodes);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Category);
	P_GET_TARRAY_REF(FName,Z_Param_Out_Tags);
	P_GET_PROPERTY(FIntProperty,Z_Param_RotationIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSelect_Implementation(Z_Param_Node,Z_Param_Out_ExistingNodes,Z_Param_Out_Category,Z_Param_Out_Tags,Z_Param_RotationIndex);
	P_NATIVE_END;
}
// End Class USnapGridFlowModuleSelectionRule Function CanSelect

// Begin Class USnapGridFlowModuleSelectionRule
void USnapGridFlowModuleSelectionRule::StaticRegisterNativesUSnapGridFlowModuleSelectionRule()
{
	UClass* Class = USnapGridFlowModuleSelectionRule::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanSelect", &USnapGridFlowModuleSelectionRule::execCanSelect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowModuleSelectionRule);
UClass* Z_Construct_UClass_USnapGridFlowModuleSelectionRule_NoRegister()
{
	return USnapGridFlowModuleSelectionRule::StaticClass();
}
struct Z_Construct_UClass_USnapGridFlowModuleSelectionRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Decide whether a module is allowed in this place. This happens in the last stage of the SGF generation process,\n * allowing you to filter out modules based on the node configuration\n */" },
		{ "IncludePath", "Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleResolver.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/SnapGridFlow/SnapGridFlowModuleResolver.h" },
		{ "ToolTip", "Decide whether a module is allowed in this place. This happens in the last stage of the SGF generation process,\nallowing you to filter out modules based on the node configuration" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapGridFlowModuleSelectionRule_CanSelect, "CanSelect" }, // 3135670144
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowModuleSelectionRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapGridFlowModuleSelectionRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleSelectionRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowModuleSelectionRule_Statics::ClassParams = {
	&USnapGridFlowModuleSelectionRule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x043010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleSelectionRule_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapGridFlowModuleSelectionRule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapGridFlowModuleSelectionRule()
{
	if (!Z_Registration_Info_UClass_USnapGridFlowModuleSelectionRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowModuleSelectionRule.OuterSingleton, Z_Construct_UClass_USnapGridFlowModuleSelectionRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapGridFlowModuleSelectionRule.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowModuleSelectionRule>()
{
	return USnapGridFlowModuleSelectionRule::StaticClass();
}
USnapGridFlowModuleSelectionRule::USnapGridFlowModuleSelectionRule(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowModuleSelectionRule);
USnapGridFlowModuleSelectionRule::~USnapGridFlowModuleSelectionRule() {}
// End Class USnapGridFlowModuleSelectionRule

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleResolver_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowModuleSelectionRule, USnapGridFlowModuleSelectionRule::StaticClass, TEXT("USnapGridFlowModuleSelectionRule"), &Z_Registration_Info_UClass_USnapGridFlowModuleSelectionRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowModuleSelectionRule), 3297074212U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleResolver_h_3183211872(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleResolver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_SnapGridFlow_SnapGridFlowModuleResolver_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
