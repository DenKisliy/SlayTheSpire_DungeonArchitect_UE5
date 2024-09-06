// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SimpleCity/SimpleCityBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCityBuilder() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityBuilder_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityConfig_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityModel_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USimpleCityBuilder
void USimpleCityBuilder::StaticRegisterNativesUSimpleCityBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCityBuilder);
UClass* Z_Construct_UClass_USimpleCityBuilder_NoRegister()
{
	return USimpleCityBuilder::StaticClass();
}
struct Z_Construct_UClass_USimpleCityBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n*\n*/" },
		{ "Description", "Create procedural cities with roads, blocks, houses (of different sizes) and much more" },
		{ "DisplayName", "Simple City" },
		{ "IncludePath", "Builders/SimpleCity/SimpleCityBuilder.h" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CityModel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CityConfig_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CityModel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CityConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCityBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleCityBuilder_Statics::NewProp_CityModel = { "CityModel", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleCityBuilder, CityModel), Z_Construct_UClass_USimpleCityModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CityModel_MetaData), NewProp_CityModel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USimpleCityBuilder_Statics::NewProp_CityConfig = { "CityConfig", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleCityBuilder, CityConfig), Z_Construct_UClass_USimpleCityConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CityConfig_MetaData), NewProp_CityConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleCityBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityBuilder_Statics::NewProp_CityModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityBuilder_Statics::NewProp_CityConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityBuilder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleCityBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCityBuilder_Statics::ClassParams = {
	&USimpleCityBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USimpleCityBuilder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityBuilder_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleCityBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleCityBuilder()
{
	if (!Z_Registration_Info_UClass_USimpleCityBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCityBuilder.OuterSingleton, Z_Construct_UClass_USimpleCityBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleCityBuilder.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USimpleCityBuilder>()
{
	return USimpleCityBuilder::StaticClass();
}
USimpleCityBuilder::USimpleCityBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCityBuilder);
USimpleCityBuilder::~USimpleCityBuilder() {}
// End Class USimpleCityBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleCityBuilder, USimpleCityBuilder::StaticClass, TEXT("USimpleCityBuilder"), &Z_Registration_Info_UClass_USimpleCityBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCityBuilder), 3937815086U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityBuilder_h_145216504(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
