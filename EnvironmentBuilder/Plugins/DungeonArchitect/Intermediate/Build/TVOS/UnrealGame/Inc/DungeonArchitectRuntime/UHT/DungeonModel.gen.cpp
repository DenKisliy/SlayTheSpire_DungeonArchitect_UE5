// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/DungeonModel.h"
#include "DungeonArchitectRuntime/Public/Core/Layout/DungeonLayoutData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonModel() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpawnLogic_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonLayoutData();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonMarkerInfo();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FDungeonMarkerInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonMarkerInfo;
class UScriptStruct* FDungeonMarkerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonMarkerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonMarkerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonMarkerInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonMarkerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonMarkerInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonMarkerInfo>()
{
	return FDungeonMarkerInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_transform_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/DungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLogics_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TemplateObject_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_transform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnLogics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnLogics;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TemplateObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonMarkerInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_transform = { "transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonMarkerInfo, transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_transform_MetaData), NewProp_transform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonMarkerInfo, NodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_SpawnLogics_Inner = { "SpawnLogics", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonSpawnLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_SpawnLogics = { "SpawnLogics", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonMarkerInfo, SpawnLogics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLogics_MetaData), NewProp_SpawnLogics_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_TemplateObject = { "TemplateObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonMarkerInfo, TemplateObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TemplateObject_MetaData), NewProp_TemplateObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_SpawnLogics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_SpawnLogics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewProp_TemplateObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonMarkerInfo",
	Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::PropPointers),
	sizeof(FDungeonMarkerInfo),
	alignof(FDungeonMarkerInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonMarkerInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonMarkerInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonMarkerInfo.InnerSingleton, Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonMarkerInfo.InnerSingleton;
}
// End ScriptStruct FDungeonMarkerInfo

// Begin Class UDungeonModel Function GetDungeonBounds
struct Z_Construct_UFunction_UDungeonModel_GetDungeonBounds_Statics
{
	struct DungeonModel_eventGetDungeonBounds_Parms
	{
		FBox ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDungeonModel_GetDungeonBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonModel_eventGetDungeonBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonModel_GetDungeonBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonModel_GetDungeonBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModel_GetDungeonBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonModel_GetDungeonBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonModel, nullptr, "GetDungeonBounds", nullptr, nullptr, Z_Construct_UFunction_UDungeonModel_GetDungeonBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModel_GetDungeonBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonModel_GetDungeonBounds_Statics::DungeonModel_eventGetDungeonBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonModel_GetDungeonBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonModel_GetDungeonBounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonModel_GetDungeonBounds_Statics::DungeonModel_eventGetDungeonBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonModel_GetDungeonBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonModel_GetDungeonBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonModel::execGetDungeonBounds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBox*)Z_Param__Result=P_THIS->GetDungeonBounds();
	P_NATIVE_END;
}
// End Class UDungeonModel Function GetDungeonBounds

// Begin Class UDungeonModel
void UDungeonModel::StaticRegisterNativesUDungeonModel()
{
	UClass* Class = UDungeonModel::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDungeonBounds", &UDungeonModel::execGetDungeonBounds },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonModel);
UClass* Z_Construct_UClass_UDungeonModel_NoRegister()
{
	return UDungeonModel::StaticClass();
}
struct Z_Construct_UClass_UDungeonModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/DungeonModel.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonModel.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonLayout_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/DungeonModel.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DungeonLayout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonModel_GetDungeonBounds, "GetDungeonBounds" }, // 1440058085
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonModel_Statics::NewProp_DungeonLayout = { "DungeonLayout", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonModel, DungeonLayout), Z_Construct_UScriptStruct_FDungeonLayoutData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonLayout_MetaData), NewProp_DungeonLayout_MetaData) }; // 3618463371
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonModel_Statics::NewProp_DungeonLayout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonModel_Statics::ClassParams = {
	&UDungeonModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDungeonModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonModel_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonModel_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonModel()
{
	if (!Z_Registration_Info_UClass_UDungeonModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonModel.OuterSingleton, Z_Construct_UClass_UDungeonModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonModel.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonModel>()
{
	return UDungeonModel::StaticClass();
}
UDungeonModel::UDungeonModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonModel);
UDungeonModel::~UDungeonModel() {}
// End Class UDungeonModel

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonModel_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDungeonMarkerInfo::StaticStruct, Z_Construct_UScriptStruct_FDungeonMarkerInfo_Statics::NewStructOps, TEXT("DungeonMarkerInfo"), &Z_Registration_Info_UScriptStruct_DungeonMarkerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonMarkerInfo), 1688166034U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonModel, UDungeonModel::StaticClass, TEXT("UDungeonModel"), &Z_Registration_Info_UClass_UDungeonModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonModel), 463996893U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonModel_h_517327787(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonModel_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonModel_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
