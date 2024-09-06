// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/GridFlow/GridFlowConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowConfig() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowAsset_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowConfig();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridFlowConfig
void UGridFlowConfig::StaticRegisterNativesUGridFlowConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowConfig);
UClass* Z_Construct_UClass_UGridFlowConfig_NoRegister()
{
	return UGridFlowConfig::StaticClass();
}
struct Z_Construct_UClass_UGridFlowConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/GridFlow/GridFlowConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridFlow_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRetries_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GridSize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterOverrides_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlignDungeonAtCenter_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n       If true, the center of the generated dungeon would be around the Dungeon actor.  \n       If false, the dungeon will not be centered and you will get a more predictable position, with reference to the tilemap\n\n       Disable this if you are trying to blend static world geometry with your dungeon\n    */" },
		{ "ModuleRelativePath", "Public/Builders/GridFlow/GridFlowConfig.h" },
		{ "ToolTip", "If true, the center of the generated dungeon would be around the Dungeon actor.\nIf false, the dungeon will not be centered and you will get a more predictable position, with reference to the tilemap\n\nDisable this if you are trying to blend static world geometry with your dungeon" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_GridFlow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRetries;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverrides_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterOverrides;
	static void NewProp_bAlignDungeonAtCenter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlignDungeonAtCenter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UGridFlowConfig_Statics::NewProp_GridFlow = { "GridFlow", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowConfig, GridFlow), Z_Construct_UClass_UGridFlowAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridFlow_MetaData), NewProp_GridFlow_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridFlowConfig_Statics::NewProp_MaxRetries = { "MaxRetries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowConfig, MaxRetries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRetries_MetaData), NewProp_MaxRetries_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowConfig_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowConfig, GridSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GridSize_MetaData), NewProp_GridSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGridFlowConfig_Statics::NewProp_ParameterOverrides_ValueProp = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGridFlowConfig_Statics::NewProp_ParameterOverrides_Key_KeyProp = { "ParameterOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGridFlowConfig_Statics::NewProp_ParameterOverrides = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowConfig, ParameterOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterOverrides_MetaData), NewProp_ParameterOverrides_MetaData) };
void Z_Construct_UClass_UGridFlowConfig_Statics::NewProp_bAlignDungeonAtCenter_SetBit(void* Obj)
{
	((UGridFlowConfig*)Obj)->bAlignDungeonAtCenter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowConfig_Statics::NewProp_bAlignDungeonAtCenter = { "bAlignDungeonAtCenter", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridFlowConfig), &Z_Construct_UClass_UGridFlowConfig_Statics::NewProp_bAlignDungeonAtCenter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlignDungeonAtCenter_MetaData), NewProp_bAlignDungeonAtCenter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowConfig_Statics::NewProp_GridFlow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowConfig_Statics::NewProp_MaxRetries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowConfig_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowConfig_Statics::NewProp_ParameterOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowConfig_Statics::NewProp_ParameterOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowConfig_Statics::NewProp_ParameterOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowConfig_Statics::NewProp_bAlignDungeonAtCenter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridFlowConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowConfig_Statics::ClassParams = {
	&UGridFlowConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridFlowConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowConfig()
{
	if (!Z_Registration_Info_UClass_UGridFlowConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowConfig.OuterSingleton, Z_Construct_UClass_UGridFlowConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowConfig.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowConfig>()
{
	return UGridFlowConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowConfig);
UGridFlowConfig::~UGridFlowConfig() {}
// End Class UGridFlowConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowConfig, UGridFlowConfig::StaticClass, TEXT("UGridFlowConfig"), &Z_Registration_Info_UClass_UGridFlowConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowConfig), 1735781957U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowConfig_h_3263307037(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridFlow_GridFlowConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
