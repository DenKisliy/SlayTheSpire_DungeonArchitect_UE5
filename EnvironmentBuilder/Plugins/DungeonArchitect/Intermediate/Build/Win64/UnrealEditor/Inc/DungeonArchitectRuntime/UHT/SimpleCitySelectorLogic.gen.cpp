// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SimpleCity/SimpleCitySelectorLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCitySelectorLogic() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSelectorLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCitySelectorLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCitySelectorLogic_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USimpleCitySelectorLogic Function SelectNode
struct SimpleCitySelectorLogic_eventSelectNode_Parms
{
	USimpleCityModel* Model;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SimpleCitySelectorLogic_eventSelectNode_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USimpleCitySelectorLogic_SelectNode = FName(TEXT("SelectNode"));
bool USimpleCitySelectorLogic::SelectNode(USimpleCityModel* Model)
{
	SimpleCitySelectorLogic_eventSelectNode_Parms Parms;
	Parms.Model=Model;
	ProcessEvent(FindFunctionChecked(NAME_USimpleCitySelectorLogic_SelectNode),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** called when something enters the sphere component */" },
#endif
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCitySelectorLogic.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called when something enters the sphere component" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCitySelectorLogic_eventSelectNode_Parms, Model), Z_Construct_UClass_USimpleCityModel_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SimpleCitySelectorLogic_eventSelectNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SimpleCitySelectorLogic_eventSelectNode_Parms), &Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCitySelectorLogic, nullptr, "SelectNode", nullptr, nullptr, Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode_Statics::PropPointers), sizeof(SimpleCitySelectorLogic_eventSelectNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(SimpleCitySelectorLogic_eventSelectNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleCitySelectorLogic::execSelectNode)
{
	P_GET_OBJECT(USimpleCityModel,Z_Param_Model);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SelectNode_Implementation(Z_Param_Model);
	P_NATIVE_END;
}
// End Class USimpleCitySelectorLogic Function SelectNode

// Begin Class USimpleCitySelectorLogic
void USimpleCitySelectorLogic::StaticRegisterNativesUSimpleCitySelectorLogic()
{
	UClass* Class = USimpleCitySelectorLogic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SelectNode", &USimpleCitySelectorLogic::execSelectNode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCitySelectorLogic);
UClass* Z_Construct_UClass_USimpleCitySelectorLogic_NoRegister()
{
	return USimpleCitySelectorLogic::StaticClass();
}
struct Z_Construct_UClass_USimpleCitySelectorLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*/" },
#endif
		{ "IncludePath", "Builders/SimpleCity/SimpleCitySelectorLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCitySelectorLogic.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleCitySelectorLogic_SelectNode, "SelectNode" }, // 4147404358
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCitySelectorLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleCitySelectorLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonSelectorLogic,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCitySelectorLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCitySelectorLogic_Statics::ClassParams = {
	&USimpleCitySelectorLogic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCitySelectorLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleCitySelectorLogic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleCitySelectorLogic()
{
	if (!Z_Registration_Info_UClass_USimpleCitySelectorLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCitySelectorLogic.OuterSingleton, Z_Construct_UClass_USimpleCitySelectorLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleCitySelectorLogic.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USimpleCitySelectorLogic>()
{
	return USimpleCitySelectorLogic::StaticClass();
}
USimpleCitySelectorLogic::USimpleCitySelectorLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCitySelectorLogic);
USimpleCitySelectorLogic::~USimpleCitySelectorLogic() {}
// End Class USimpleCitySelectorLogic

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCitySelectorLogic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleCitySelectorLogic, USimpleCitySelectorLogic::StaticClass, TEXT("USimpleCitySelectorLogic"), &Z_Registration_Info_UClass_USimpleCitySelectorLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCitySelectorLogic), 2376778370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCitySelectorLogic_h_1651979938(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCitySelectorLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCitySelectorLogic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
