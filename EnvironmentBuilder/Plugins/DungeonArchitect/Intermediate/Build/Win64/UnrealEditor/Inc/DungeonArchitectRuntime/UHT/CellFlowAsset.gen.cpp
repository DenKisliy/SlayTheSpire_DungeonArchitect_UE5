// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/CellFlow/CellFlowAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellFlowAsset() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowAsset();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UCellFlowAsset_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowAssetBase();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UCellFlowAsset
void UCellFlowAsset::StaticRegisterNativesUCellFlowAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCellFlowAsset);
UClass* Z_Construct_UClass_UCellFlowAsset_NoRegister()
{
	return UCellFlowAsset::StaticClass();
}
struct Z_Construct_UClass_UCellFlowAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builders/CellFlow/CellFlowAsset.h" },
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowAsset.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/CellFlow/CellFlowAsset.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCellFlowAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCellFlowAsset_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCellFlowAsset, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCellFlowAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCellFlowAsset_Statics::NewProp_Version,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCellFlowAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowAssetBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCellFlowAsset_Statics::ClassParams = {
	&UCellFlowAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCellFlowAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCellFlowAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UCellFlowAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCellFlowAsset()
{
	if (!Z_Registration_Info_UClass_UCellFlowAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCellFlowAsset.OuterSingleton, Z_Construct_UClass_UCellFlowAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCellFlowAsset.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UCellFlowAsset>()
{
	return UCellFlowAsset::StaticClass();
}
UCellFlowAsset::UCellFlowAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCellFlowAsset);
UCellFlowAsset::~UCellFlowAsset() {}
// End Class UCellFlowAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCellFlowAsset, UCellFlowAsset::StaticClass, TEXT("UCellFlowAsset"), &Z_Registration_Info_UClass_UCellFlowAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCellFlowAsset), 2903964434U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowAsset_h_1692136665(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_CellFlow_CellFlowAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
