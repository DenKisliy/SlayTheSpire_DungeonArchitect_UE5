// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SnapMap/SnapMapDungeonSelectorLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapDungeonSelectorLogic() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSelectorLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonSelectorLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonSelectorLogic_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapMapDungeonSelectorLogic Function SelectNode
struct SnapMapDungeonSelectorLogic_eventSelectNode_Parms
{
	USnapMapDungeonModel* Model;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SnapMapDungeonSelectorLogic_eventSelectNode_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USnapMapDungeonSelectorLogic_SelectNode = FName(TEXT("SelectNode"));
bool USnapMapDungeonSelectorLogic::SelectNode(USnapMapDungeonModel* Model)
{
	SnapMapDungeonSelectorLogic_eventSelectNode_Parms Parms;
	Parms.Model=Model;
	ProcessEvent(FindFunctionChecked(NAME_USnapMapDungeonSelectorLogic_SelectNode),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** called when something enters the sphere component */" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonSelectorLogic.h" },
		{ "ToolTip", "called when something enters the sphere component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapMapDungeonSelectorLogic_eventSelectNode_Parms, Model), Z_Construct_UClass_USnapMapDungeonModel_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SnapMapDungeonSelectorLogic_eventSelectNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SnapMapDungeonSelectorLogic_eventSelectNode_Parms), &Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapMapDungeonSelectorLogic, nullptr, "SelectNode", nullptr, nullptr, Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::PropPointers), sizeof(SnapMapDungeonSelectorLogic_eventSelectNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(SnapMapDungeonSelectorLogic_eventSelectNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USnapMapDungeonSelectorLogic::execSelectNode)
{
	P_GET_OBJECT(USnapMapDungeonModel,Z_Param_Model);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SelectNode_Implementation(Z_Param_Model);
	P_NATIVE_END;
}
// End Class USnapMapDungeonSelectorLogic Function SelectNode

// Begin Class USnapMapDungeonSelectorLogic
void USnapMapDungeonSelectorLogic::StaticRegisterNativesUSnapMapDungeonSelectorLogic()
{
	UClass* Class = USnapMapDungeonSelectorLogic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SelectNode", &USnapMapDungeonSelectorLogic::execSelectNode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapDungeonSelectorLogic);
UClass* Z_Construct_UClass_USnapMapDungeonSelectorLogic_NoRegister()
{
	return USnapMapDungeonSelectorLogic::StaticClass();
}
struct Z_Construct_UClass_USnapMapDungeonSelectorLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Builders/SnapMap/SnapMapDungeonSelectorLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonSelectorLogic.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapMapDungeonSelectorLogic_SelectNode, "SelectNode" }, // 2820339289
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapDungeonSelectorLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapMapDungeonSelectorLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonSelectorLogic,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonSelectorLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapDungeonSelectorLogic_Statics::ClassParams = {
	&USnapMapDungeonSelectorLogic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonSelectorLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapMapDungeonSelectorLogic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapMapDungeonSelectorLogic()
{
	if (!Z_Registration_Info_UClass_USnapMapDungeonSelectorLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapDungeonSelectorLogic.OuterSingleton, Z_Construct_UClass_USnapMapDungeonSelectorLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapMapDungeonSelectorLogic.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapMapDungeonSelectorLogic>()
{
	return USnapMapDungeonSelectorLogic::StaticClass();
}
USnapMapDungeonSelectorLogic::USnapMapDungeonSelectorLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapDungeonSelectorLogic);
USnapMapDungeonSelectorLogic::~USnapMapDungeonSelectorLogic() {}
// End Class USnapMapDungeonSelectorLogic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonSelectorLogic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapDungeonSelectorLogic, USnapMapDungeonSelectorLogic::StaticClass, TEXT("USnapMapDungeonSelectorLogic"), &Z_Registration_Info_UClass_USnapMapDungeonSelectorLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapDungeonSelectorLogic), 2001713982U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonSelectorLogic_h_3556914054(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonSelectorLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonSelectorLogic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
