// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Grid/Volumes/GridDungeonPlatformVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonPlatformVolume() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVolume();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_AGridDungeonPlatformVolume();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_AGridDungeonPlatformVolume_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonCellType();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class AGridDungeonPlatformVolume
void AGridDungeonPlatformVolume::StaticRegisterNativesAGridDungeonPlatformVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridDungeonPlatformVolume);
UClass* Z_Construct_UClass_AGridDungeonPlatformVolume_NoRegister()
{
	return AGridDungeonPlatformVolume::StaticClass();
}
struct Z_Construct_UClass_AGridDungeonPlatformVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Builders/Grid/Volumes/GridDungeonPlatformVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Grid/Volumes/GridDungeonPlatformVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellType_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Grid/Volumes/GridDungeonPlatformVolume.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CellType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CellType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridDungeonPlatformVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::NewProp_CellType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::NewProp_CellType = { "CellType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGridDungeonPlatformVolume, CellType), Z_Construct_UEnum_DungeonArchitectRuntime_EGridDungeonCellType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellType_MetaData), NewProp_CellType_MetaData) }; // 3332370902
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::NewProp_CellType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::NewProp_CellType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADungeonVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::ClassParams = {
	&AGridDungeonPlatformVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGridDungeonPlatformVolume()
{
	if (!Z_Registration_Info_UClass_AGridDungeonPlatformVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridDungeonPlatformVolume.OuterSingleton, Z_Construct_UClass_AGridDungeonPlatformVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGridDungeonPlatformVolume.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<AGridDungeonPlatformVolume>()
{
	return AGridDungeonPlatformVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGridDungeonPlatformVolume);
AGridDungeonPlatformVolume::~AGridDungeonPlatformVolume() {}
// End Class AGridDungeonPlatformVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Volumes_GridDungeonPlatformVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGridDungeonPlatformVolume, AGridDungeonPlatformVolume::StaticClass, TEXT("AGridDungeonPlatformVolume"), &Z_Registration_Info_UClass_AGridDungeonPlatformVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridDungeonPlatformVolume), 3851344505U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Volumes_GridDungeonPlatformVolume_h_1958758370(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Volumes_GridDungeonPlatformVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Grid_Volumes_GridDungeonPlatformVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
