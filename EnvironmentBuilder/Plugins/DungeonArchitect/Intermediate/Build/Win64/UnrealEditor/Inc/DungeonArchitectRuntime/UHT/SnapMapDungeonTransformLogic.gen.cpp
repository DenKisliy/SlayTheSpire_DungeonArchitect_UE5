// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SnapMap/SnapMapDungeonTransformLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapDungeonTransformLogic() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonTransformLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonTransformLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonTransformLogic_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapMapDungeonTransformLogic Function GetNodeOffset
struct SnapMapDungeonTransformLogic_eventGetNodeOffset_Parms
{
	USnapMapDungeonModel* Model;
	FTransform Offset;
};
static FName NAME_USnapMapDungeonTransformLogic_GetNodeOffset = FName(TEXT("GetNodeOffset"));
void USnapMapDungeonTransformLogic::GetNodeOffset(USnapMapDungeonModel* Model, FTransform& Offset)
{
	SnapMapDungeonTransformLogic_eventGetNodeOffset_Parms Parms;
	Parms.Model=Model;
	Parms.Offset=Offset;
	ProcessEvent(FindFunctionChecked(NAME_USnapMapDungeonTransformLogic_GetNodeOffset),&Parms);
	Offset=Parms.Offset;
}
struct Z_Construct_UFunction_USnapMapDungeonTransformLogic_GetNodeOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonTransformLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapMapDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapMapDungeonTransformLogic_eventGetNodeOffset_Parms, Model), Z_Construct_UClass_USnapMapDungeonModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapMapDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapMapDungeonTransformLogic_eventGetNodeOffset_Parms, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapMapDungeonTransformLogic_GetNodeOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapMapDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapMapDungeonTransformLogic_GetNodeOffset_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapMapDungeonTransformLogic_GetNodeOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapMapDungeonTransformLogic_GetNodeOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapMapDungeonTransformLogic, nullptr, "GetNodeOffset", nullptr, nullptr, Z_Construct_UFunction_USnapMapDungeonTransformLogic_GetNodeOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapMapDungeonTransformLogic_GetNodeOffset_Statics::PropPointers), sizeof(SnapMapDungeonTransformLogic_eventGetNodeOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapMapDungeonTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USnapMapDungeonTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(SnapMapDungeonTransformLogic_eventGetNodeOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USnapMapDungeonTransformLogic_GetNodeOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapMapDungeonTransformLogic_GetNodeOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USnapMapDungeonTransformLogic::execGetNodeOffset)
{
	P_GET_OBJECT(USnapMapDungeonModel,Z_Param_Model);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNodeOffset_Implementation(Z_Param_Model,Z_Param_Out_Offset);
	P_NATIVE_END;
}
// End Class USnapMapDungeonTransformLogic Function GetNodeOffset

// Begin Class USnapMapDungeonTransformLogic
void USnapMapDungeonTransformLogic::StaticRegisterNativesUSnapMapDungeonTransformLogic()
{
	UClass* Class = USnapMapDungeonTransformLogic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNodeOffset", &USnapMapDungeonTransformLogic::execGetNodeOffset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapDungeonTransformLogic);
UClass* Z_Construct_UClass_USnapMapDungeonTransformLogic_NoRegister()
{
	return USnapMapDungeonTransformLogic::StaticClass();
}
struct Z_Construct_UClass_USnapMapDungeonTransformLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*/" },
#endif
		{ "IncludePath", "Builders/SnapMap/SnapMapDungeonTransformLogic.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonTransformLogic.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapMapDungeonTransformLogic_GetNodeOffset, "GetNodeOffset" }, // 2857621882
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapDungeonTransformLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapMapDungeonTransformLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonTransformLogic,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonTransformLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapDungeonTransformLogic_Statics::ClassParams = {
	&USnapMapDungeonTransformLogic::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonTransformLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapMapDungeonTransformLogic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapMapDungeonTransformLogic()
{
	if (!Z_Registration_Info_UClass_USnapMapDungeonTransformLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapDungeonTransformLogic.OuterSingleton, Z_Construct_UClass_USnapMapDungeonTransformLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapMapDungeonTransformLogic.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapMapDungeonTransformLogic>()
{
	return USnapMapDungeonTransformLogic::StaticClass();
}
USnapMapDungeonTransformLogic::USnapMapDungeonTransformLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapDungeonTransformLogic);
USnapMapDungeonTransformLogic::~USnapMapDungeonTransformLogic() {}
// End Class USnapMapDungeonTransformLogic

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonTransformLogic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapDungeonTransformLogic, USnapMapDungeonTransformLogic::StaticClass, TEXT("USnapMapDungeonTransformLogic"), &Z_Registration_Info_UClass_USnapMapDungeonTransformLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapDungeonTransformLogic), 162789758U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonTransformLogic_h_809638715(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonTransformLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonTransformLogic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
