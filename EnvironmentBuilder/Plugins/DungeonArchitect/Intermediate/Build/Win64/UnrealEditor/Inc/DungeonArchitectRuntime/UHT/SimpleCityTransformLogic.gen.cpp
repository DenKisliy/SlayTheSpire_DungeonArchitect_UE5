// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SimpleCity/SimpleCityTransformLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCityTransformLogic() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonTransformLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityTransformLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityTransformLogic_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USimpleCityTransformLogic Function GetNodeOffset
struct SimpleCityTransformLogic_eventGetNodeOffset_Parms
{
	USimpleCityModel* Model;
	FTransform Offset;
};
static FName NAME_USimpleCityTransformLogic_GetNodeOffset = FName(TEXT("GetNodeOffset"));
void USimpleCityTransformLogic::GetNodeOffset(USimpleCityModel* Model, FTransform& Offset)
{
	SimpleCityTransformLogic_eventGetNodeOffset_Parms Parms;
	Parms.Model=Model;
	Parms.Offset=Offset;
	ProcessEvent(FindFunctionChecked(NAME_USimpleCityTransformLogic_GetNodeOffset),&Parms);
	Offset=Parms.Offset;
}
struct Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityTransformLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCityTransformLogic_eventGetNodeOffset_Parms, Model), Z_Construct_UClass_USimpleCityModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SimpleCityTransformLogic_eventGetNodeOffset_Parms, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USimpleCityTransformLogic, nullptr, "GetNodeOffset", nullptr, nullptr, Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::PropPointers), sizeof(SimpleCityTransformLogic_eventGetNodeOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(SimpleCityTransformLogic_eventGetNodeOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USimpleCityTransformLogic::execGetNodeOffset)
{
	P_GET_OBJECT(USimpleCityModel,Z_Param_Model);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNodeOffset_Implementation(Z_Param_Model,Z_Param_Out_Offset);
	P_NATIVE_END;
}
// End Class USimpleCityTransformLogic Function GetNodeOffset

// Begin Class USimpleCityTransformLogic
void USimpleCityTransformLogic::StaticRegisterNativesUSimpleCityTransformLogic()
{
	UClass* Class = USimpleCityTransformLogic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNodeOffset", &USimpleCityTransformLogic::execGetNodeOffset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCityTransformLogic);
UClass* Z_Construct_UClass_USimpleCityTransformLogic_NoRegister()
{
	return USimpleCityTransformLogic::StaticClass();
}
struct Z_Construct_UClass_USimpleCityTransformLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*/" },
#endif
		{ "IncludePath", "Builders/SimpleCity/SimpleCityTransformLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityTransformLogic.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USimpleCityTransformLogic_GetNodeOffset, "GetNodeOffset" }, // 1485671010
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCityTransformLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleCityTransformLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonTransformLogic,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityTransformLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCityTransformLogic_Statics::ClassParams = {
	&USimpleCityTransformLogic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityTransformLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleCityTransformLogic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleCityTransformLogic()
{
	if (!Z_Registration_Info_UClass_USimpleCityTransformLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCityTransformLogic.OuterSingleton, Z_Construct_UClass_USimpleCityTransformLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleCityTransformLogic.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USimpleCityTransformLogic>()
{
	return USimpleCityTransformLogic::StaticClass();
}
USimpleCityTransformLogic::USimpleCityTransformLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCityTransformLogic);
USimpleCityTransformLogic::~USimpleCityTransformLogic() {}
// End Class USimpleCityTransformLogic

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityTransformLogic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleCityTransformLogic, USimpleCityTransformLogic::StaticClass, TEXT("USimpleCityTransformLogic"), &Z_Registration_Info_UClass_USimpleCityTransformLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCityTransformLogic), 38479778U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityTransformLogic_h_3834435442(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityTransformLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityTransformLogic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
