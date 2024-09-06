// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SnapMap/SnapMapDungeonConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapDungeonConfig() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapAsset_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonConfig();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonConfig_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapModuleDatabase_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapMapDungeonConfig
void USnapMapDungeonConfig::StaticRegisterNativesUSnapMapDungeonConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapDungeonConfig);
UClass* Z_Construct_UClass_USnapMapDungeonConfig_NoRegister()
{
	return USnapMapDungeonConfig::StaticClass();
}
struct Z_Construct_UClass_USnapMapDungeonConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapMap/SnapMapDungeonConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleDatabase_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** A module database asset that contains the references of the modules to use for building the dungeon */" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonConfig.h" },
		{ "ToolTip", "A module database asset that contains the references of the modules to use for building the dungeon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonFlowGraph_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTestContraction_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n     When modules are stitched together, the builder makes sure they do not overlap.  This parameter is used to \n     control the tolerance level.  If set to 0, even the slightest overlap with a nearby module would not create an adjacent module\n     Leaving to a small number like 100, would tolerate an overlap with nearby module by 100 unreal units.\n     Adjust this depending on your art asset\n    */" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonConfig.h" },
		{ "ToolTip", "When modules are stitched together, the builder makes sure they do not overlap.  This parameter is used to\ncontrol the tolerance level.  If set to 0, even the slightest overlap with a nearby module would not create an adjacent module\nLeaving to a small number like 100, would tolerate an overlap with nearby module by 100 unreal units.\nAdjust this depending on your art asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxProcessingTimeSecs_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** The max processing time (in seconds) before bailing out. This keeps the build function from hanging if it doesn't find a solution */" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonConfig.h" },
		{ "ToolTip", "The max processing time (in seconds) before bailing out. This keeps the build function from hanging if it doesn't find a solution" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportBuildRetries_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** If the dungeon build fails, it will be retried with another seed multiple times (see field NumBuildRetries) */" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonConfig.h" },
		{ "ToolTip", "If the dungeon build fails, it will be retried with another seed multiple times (see field NumBuildRetries)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumBuildRetries_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** If the dungeon build fails, it will be retried with another seed multiple tiles based on this count */" },
		{ "EditCondition", "bSupportBuildRetries" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonConfig.h" },
		{ "ToolTip", "If the dungeon build fails, it will be retried with another seed multiple tiles based on this count" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ModuleDatabase;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DungeonFlowGraph;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionTestContraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxProcessingTimeSecs;
	static void NewProp_bSupportBuildRetries_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportBuildRetries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumBuildRetries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapDungeonConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_ModuleDatabase = { "ModuleDatabase", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapDungeonConfig, ModuleDatabase), Z_Construct_UClass_USnapMapModuleDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleDatabase_MetaData), NewProp_ModuleDatabase_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_DungeonFlowGraph = { "DungeonFlowGraph", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapDungeonConfig, DungeonFlowGraph), Z_Construct_UClass_USnapMapAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonFlowGraph_MetaData), NewProp_DungeonFlowGraph_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_CollisionTestContraction = { "CollisionTestContraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapDungeonConfig, CollisionTestContraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionTestContraction_MetaData), NewProp_CollisionTestContraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_MaxProcessingTimeSecs = { "MaxProcessingTimeSecs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapDungeonConfig, MaxProcessingTimeSecs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxProcessingTimeSecs_MetaData), NewProp_MaxProcessingTimeSecs_MetaData) };
void Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bSupportBuildRetries_SetBit(void* Obj)
{
	((USnapMapDungeonConfig*)Obj)->bSupportBuildRetries = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bSupportBuildRetries = { "bSupportBuildRetries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USnapMapDungeonConfig), &Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bSupportBuildRetries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportBuildRetries_MetaData), NewProp_bSupportBuildRetries_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_NumBuildRetries = { "NumBuildRetries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapDungeonConfig, NumBuildRetries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumBuildRetries_MetaData), NewProp_NumBuildRetries_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapMapDungeonConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_ModuleDatabase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_DungeonFlowGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_CollisionTestContraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_MaxProcessingTimeSecs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_bSupportBuildRetries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapDungeonConfig_Statics::NewProp_NumBuildRetries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapMapDungeonConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapDungeonConfig_Statics::ClassParams = {
	&USnapMapDungeonConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapMapDungeonConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapMapDungeonConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapMapDungeonConfig()
{
	if (!Z_Registration_Info_UClass_USnapMapDungeonConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapDungeonConfig.OuterSingleton, Z_Construct_UClass_USnapMapDungeonConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapMapDungeonConfig.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapMapDungeonConfig>()
{
	return USnapMapDungeonConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapDungeonConfig);
USnapMapDungeonConfig::~USnapMapDungeonConfig() {}
// End Class USnapMapDungeonConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapDungeonConfig, USnapMapDungeonConfig::StaticClass, TEXT("USnapMapDungeonConfig"), &Z_Registration_Info_UClass_USnapMapDungeonConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapDungeonConfig), 3856391689U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonConfig_h_2494922344(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
