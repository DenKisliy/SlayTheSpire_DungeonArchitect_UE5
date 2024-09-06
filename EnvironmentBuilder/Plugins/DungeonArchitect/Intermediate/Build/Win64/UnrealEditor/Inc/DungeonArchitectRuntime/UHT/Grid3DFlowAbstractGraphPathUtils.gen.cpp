// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Utils/Grid3DFlowAbstractGraphPathUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrid3DFlowAbstractGraphPathUtils() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowLayoutNodeCreationConstraint();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGrid3DLayoutNodeCreationConstraint Function CanCreateLayoutNode
struct Grid3DLayoutNodeCreationConstraint_eventCanCreateLayoutNode_Parms
{
	FIntVector NodeCoord;
	FIntVector GridSize;
	int32 TotalPathLength;
	int32 CurrentPathPosition;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	Grid3DLayoutNodeCreationConstraint_eventCanCreateLayoutNode_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode = FName(TEXT("CanCreateLayoutNode"));
bool UGrid3DLayoutNodeCreationConstraint::CanCreateLayoutNode(FIntVector const& NodeCoord, FIntVector const& GridSize, int32 TotalPathLength, int32 CurrentPathPosition)
{
	Grid3DLayoutNodeCreationConstraint_eventCanCreateLayoutNode_Parms Parms;
	Parms.NodeCoord=NodeCoord;
	Parms.GridSize=GridSize;
	Parms.TotalPathLength=TotalPathLength;
	Parms.CurrentPathPosition=CurrentPathPosition;
	ProcessEvent(FindFunctionChecked(NAME_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Utils/Grid3DFlowAbstractGraphPathUtils.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeCoord_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeCoord;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalPathLength;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentPathPosition;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::NewProp_NodeCoord = { "NodeCoord", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grid3DLayoutNodeCreationConstraint_eventCanCreateLayoutNode_Parms, NodeCoord), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeCoord_MetaData), NewProp_NodeCoord_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grid3DLayoutNodeCreationConstraint_eventCanCreateLayoutNode_Parms, GridSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::NewProp_TotalPathLength = { "TotalPathLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grid3DLayoutNodeCreationConstraint_eventCanCreateLayoutNode_Parms, TotalPathLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::NewProp_CurrentPathPosition = { "CurrentPathPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Grid3DLayoutNodeCreationConstraint_eventCanCreateLayoutNode_Parms, CurrentPathPosition), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Grid3DLayoutNodeCreationConstraint_eventCanCreateLayoutNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Grid3DLayoutNodeCreationConstraint_eventCanCreateLayoutNode_Parms), &Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::NewProp_NodeCoord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::NewProp_TotalPathLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::NewProp_CurrentPathPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint, nullptr, "CanCreateLayoutNode", nullptr, nullptr, Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::PropPointers), sizeof(Grid3DLayoutNodeCreationConstraint_eventCanCreateLayoutNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Grid3DLayoutNodeCreationConstraint_eventCanCreateLayoutNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGrid3DLayoutNodeCreationConstraint::execCanCreateLayoutNode)
{
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_NodeCoord);
	P_GET_STRUCT_REF(FIntVector,Z_Param_Out_GridSize);
	P_GET_PROPERTY(FIntProperty,Z_Param_TotalPathLength);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentPathPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanCreateLayoutNode_Implementation(Z_Param_Out_NodeCoord,Z_Param_Out_GridSize,Z_Param_TotalPathLength,Z_Param_CurrentPathPosition);
	P_NATIVE_END;
}
// End Class UGrid3DLayoutNodeCreationConstraint Function CanCreateLayoutNode

// Begin Class UGrid3DLayoutNodeCreationConstraint
void UGrid3DLayoutNodeCreationConstraint::StaticRegisterNativesUGrid3DLayoutNodeCreationConstraint()
{
	UClass* Class = UGrid3DLayoutNodeCreationConstraint::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanCreateLayoutNode", &UGrid3DLayoutNodeCreationConstraint::execCanCreateLayoutNode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGrid3DLayoutNodeCreationConstraint);
UClass* Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint_NoRegister()
{
	return UGrid3DLayoutNodeCreationConstraint::StaticClass();
}
struct Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Utils/Grid3DFlowAbstractGraphPathUtils.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/SnapGridFlow/LayoutGraph/Utils/Grid3DFlowAbstractGraphPathUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGrid3DLayoutNodeCreationConstraint_CanCreateLayoutNode, "CanCreateLayoutNode" }, // 2524551455
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrid3DLayoutNodeCreationConstraint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowLayoutNodeCreationConstraint,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint_Statics::ClassParams = {
	&UGrid3DLayoutNodeCreationConstraint::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint_Statics::Class_MetaDataParams), Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint()
{
	if (!Z_Registration_Info_UClass_UGrid3DLayoutNodeCreationConstraint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGrid3DLayoutNodeCreationConstraint.OuterSingleton, Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGrid3DLayoutNodeCreationConstraint.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGrid3DLayoutNodeCreationConstraint>()
{
	return UGrid3DLayoutNodeCreationConstraint::StaticClass();
}
UGrid3DLayoutNodeCreationConstraint::UGrid3DLayoutNodeCreationConstraint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGrid3DLayoutNodeCreationConstraint);
UGrid3DLayoutNodeCreationConstraint::~UGrid3DLayoutNodeCreationConstraint() {}
// End Class UGrid3DLayoutNodeCreationConstraint

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGrid3DLayoutNodeCreationConstraint, UGrid3DLayoutNodeCreationConstraint::StaticClass, TEXT("UGrid3DLayoutNodeCreationConstraint"), &Z_Registration_Info_UClass_UGrid3DLayoutNodeCreationConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGrid3DLayoutNodeCreationConstraint), 2760842844U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_65371617(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_SnapGridFlow_LayoutGraph_Utils_Grid3DFlowAbstractGraphPathUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
