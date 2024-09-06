// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/DungeonNavLinkProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonNavLinkProxy() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_ANavLinkProxy();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonNavLinkProxy();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonNavLinkProxy_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavLinkDirection();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class ADungeonNavLinkProxy Function SetupSmartLinkData
struct Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics
{
	struct DungeonNavLinkProxy_eventSetupSmartLinkData_Parms
	{
		FVector Start;
		FVector End;
		TEnumAsByte<ENavLinkDirection::Type> Direction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonNavLinkProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonNavLinkProxy_eventSetupSmartLinkData_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonNavLinkProxy_eventSetupSmartLinkData_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonNavLinkProxy_eventSetupSmartLinkData_Parms, Direction), Z_Construct_UEnum_Engine_ENavLinkDirection, METADATA_PARAMS(0, nullptr) }; // 469077754
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::NewProp_Direction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonNavLinkProxy, nullptr, "SetupSmartLinkData", nullptr, nullptr, Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::DungeonNavLinkProxy_eventSetupSmartLinkData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::DungeonNavLinkProxy_eventSetupSmartLinkData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonNavLinkProxy::execSetupSmartLinkData)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
	P_GET_PROPERTY(FByteProperty,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupSmartLinkData(Z_Param_Out_Start,Z_Param_Out_End,ENavLinkDirection::Type(Z_Param_Direction));
	P_NATIVE_END;
}
// End Class ADungeonNavLinkProxy Function SetupSmartLinkData

// Begin Class ADungeonNavLinkProxy
void ADungeonNavLinkProxy::StaticRegisterNativesADungeonNavLinkProxy()
{
	UClass* Class = ADungeonNavLinkProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetupSmartLinkData", &ADungeonNavLinkProxy::execSetupSmartLinkData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonNavLinkProxy);
UClass* Z_Construct_UClass_ADungeonNavLinkProxy_NoRegister()
{
	return ADungeonNavLinkProxy::StaticClass();
}
struct Z_Construct_UClass_ADungeonNavLinkProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "SmartLink Actor SmartLink Actor" },
		{ "BlueprintType", "true" },
		{ "HideCategories", "Input Input" },
		{ "IncludePath", "Core/Utils/DungeonNavLinkProxy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Utils/DungeonNavLinkProxy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeonNavLinkProxy_SetupSmartLinkData, "SetupSmartLinkData" }, // 2814638375
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonNavLinkProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADungeonNavLinkProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ANavLinkProxy,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonNavLinkProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonNavLinkProxy_Statics::ClassParams = {
	&ADungeonNavLinkProxy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonNavLinkProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonNavLinkProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonNavLinkProxy()
{
	if (!Z_Registration_Info_UClass_ADungeonNavLinkProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonNavLinkProxy.OuterSingleton, Z_Construct_UClass_ADungeonNavLinkProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonNavLinkProxy.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonNavLinkProxy>()
{
	return ADungeonNavLinkProxy::StaticClass();
}
ADungeonNavLinkProxy::ADungeonNavLinkProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonNavLinkProxy);
ADungeonNavLinkProxy::~ADungeonNavLinkProxy() {}
// End Class ADungeonNavLinkProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonNavLinkProxy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonNavLinkProxy, ADungeonNavLinkProxy::StaticClass, TEXT("ADungeonNavLinkProxy"), &Z_Registration_Info_UClass_ADungeonNavLinkProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonNavLinkProxy), 4077264294U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonNavLinkProxy_h_241693631(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonNavLinkProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_DungeonNavLinkProxy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
