// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SimpleCity/SimpleCityConfig.h"
#include "DungeonArchitectRuntime/Public/Builders/SimpleCity/SimpleCityModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCityConfig() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityConfig();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityConfig_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCityBlockDimension();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USimpleCityConfig
void USimpleCityConfig::StaticRegisterNativesUSimpleCityConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCityConfig);
UClass* Z_Construct_UClass_USimpleCityConfig_NoRegister()
{
	return USimpleCityConfig::StaticClass();
}
struct Z_Construct_UClass_USimpleCityConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SimpleCity/SimpleCityConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The size of each cell. Set this to the size of your modular asset\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The size of each cell. Set this to the size of your modular asset" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinCitySize_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The minimum size of the city in cell units\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimum size of the city in cell units" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCitySize_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The maximum size of the city in cell units\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum size of the city in cell units" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinBlockSize_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The minimum size of each block, in cell units\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimum size of each block, in cell units" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBlockSize_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The minimum size of each block, in cell units\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The minimum size of each block, in cell units" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BiggerHouseProbability_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * The probability that a bigger house would spawn.  Valid range is from [0..1]\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The probability that a bigger house would spawn.  Valid range is from [0..1]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoadEdgeRemovalProbability_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n    * Randomly removes certain straight lines of roads to create an uneven and more natural looking city (value between 0..1)\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Randomly removes certain straight lines of roads to create an uneven and more natural looking city (value between 0..1)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CityBlockDimensions_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinCitySize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCitySize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinBlockSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBlockSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BiggerHouseProbability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RoadEdgeRemovalProbability;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CityBlockDimensions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CityBlockDimensions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCityConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleCityConfig, CellSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MinCitySize = { "MinCitySize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleCityConfig, MinCitySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinCitySize_MetaData), NewProp_MinCitySize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MaxCitySize = { "MaxCitySize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleCityConfig, MaxCitySize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCitySize_MetaData), NewProp_MaxCitySize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MinBlockSize = { "MinBlockSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleCityConfig, MinBlockSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinBlockSize_MetaData), NewProp_MinBlockSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MaxBlockSize = { "MaxBlockSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleCityConfig, MaxBlockSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBlockSize_MetaData), NewProp_MaxBlockSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_BiggerHouseProbability = { "BiggerHouseProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleCityConfig, BiggerHouseProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BiggerHouseProbability_MetaData), NewProp_BiggerHouseProbability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_RoadEdgeRemovalProbability = { "RoadEdgeRemovalProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleCityConfig, RoadEdgeRemovalProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoadEdgeRemovalProbability_MetaData), NewProp_RoadEdgeRemovalProbability_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CityBlockDimensions_Inner = { "CityBlockDimensions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCityBlockDimension, METADATA_PARAMS(0, nullptr) }; // 3890583430
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CityBlockDimensions = { "CityBlockDimensions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleCityConfig, CityBlockDimensions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CityBlockDimensions_MetaData), NewProp_CityBlockDimensions_MetaData) }; // 3890583430
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleCityConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MinCitySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MaxCitySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MinBlockSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_MaxBlockSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_BiggerHouseProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_RoadEdgeRemovalProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CityBlockDimensions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityConfig_Statics::NewProp_CityBlockDimensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleCityConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCityConfig_Statics::ClassParams = {
	&USimpleCityConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USimpleCityConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleCityConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleCityConfig()
{
	if (!Z_Registration_Info_UClass_USimpleCityConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCityConfig.OuterSingleton, Z_Construct_UClass_USimpleCityConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleCityConfig.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USimpleCityConfig>()
{
	return USimpleCityConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCityConfig);
USimpleCityConfig::~USimpleCityConfig() {}
// End Class USimpleCityConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleCityConfig, USimpleCityConfig::StaticClass, TEXT("USimpleCityConfig"), &Z_Registration_Info_UClass_USimpleCityConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCityConfig), 1075033649U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityConfig_h_1948150130(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
