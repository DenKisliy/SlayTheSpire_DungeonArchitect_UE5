// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SimpleCity/SimpleCityToolData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCityToolData() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonToolData();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityToolData();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USimpleCityToolData_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USimpleCityToolData
void USimpleCityToolData::StaticRegisterNativesUSimpleCityToolData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleCityToolData);
UClass* Z_Construct_UClass_USimpleCityToolData_NoRegister()
{
	return USimpleCityToolData::StaticClass();
}
struct Z_Construct_UClass_USimpleCityToolData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SimpleCity/SimpleCityToolData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityToolData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintedCells_MetaData[] = {
		{ "Comment", "// The cells painted by the \"Paint\" tool\n" },
		{ "ModuleRelativePath", "Public/Builders/SimpleCity/SimpleCityToolData.h" },
		{ "ToolTip", "The cells painted by the \"Paint\" tool" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PaintedCells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PaintedCells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USimpleCityToolData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USimpleCityToolData_Statics::NewProp_PaintedCells_Inner = { "PaintedCells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USimpleCityToolData_Statics::NewProp_PaintedCells = { "PaintedCells", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USimpleCityToolData, PaintedCells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintedCells_MetaData), NewProp_PaintedCells_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USimpleCityToolData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityToolData_Statics::NewProp_PaintedCells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USimpleCityToolData_Statics::NewProp_PaintedCells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityToolData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USimpleCityToolData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonToolData,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityToolData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleCityToolData_Statics::ClassParams = {
	&USimpleCityToolData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USimpleCityToolData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityToolData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleCityToolData_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleCityToolData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleCityToolData()
{
	if (!Z_Registration_Info_UClass_USimpleCityToolData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleCityToolData.OuterSingleton, Z_Construct_UClass_USimpleCityToolData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleCityToolData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USimpleCityToolData>()
{
	return USimpleCityToolData::StaticClass();
}
USimpleCityToolData::USimpleCityToolData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleCityToolData);
USimpleCityToolData::~USimpleCityToolData() {}
// End Class USimpleCityToolData

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityToolData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleCityToolData, USimpleCityToolData::StaticClass, TEXT("USimpleCityToolData"), &Z_Registration_Info_UClass_USimpleCityToolData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleCityToolData), 2719015797U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityToolData_h_1458205317(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityToolData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SimpleCity_SimpleCityToolData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
