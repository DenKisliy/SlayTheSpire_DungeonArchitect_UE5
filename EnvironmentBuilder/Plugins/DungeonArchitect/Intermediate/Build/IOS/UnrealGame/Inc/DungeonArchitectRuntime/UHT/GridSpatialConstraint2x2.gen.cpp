// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Common/SpatialConstraints/GridSpatialConstraint2x2.h"
#include "DungeonArchitectRuntime/Public/Builders/Common/SpatialConstraints/GridSpatialConstraintCellData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridSpatialConstraint2x2() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpatialConstraint();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridSpatialConstraint2x2();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridSpatialConstraint2x2_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridSpatialConstraintCellData();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FGridSpatialConstraint2x2Data
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridSpatialConstraint2x2Data;
class UScriptStruct* FGridSpatialConstraint2x2Data::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridSpatialConstraint2x2Data.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridSpatialConstraint2x2Data.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridSpatialConstraint2x2Data"));
	}
	return Z_Registration_Info_UScriptStruct_GridSpatialConstraint2x2Data.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridSpatialConstraint2x2Data>()
{
	return FGridSpatialConstraint2x2Data::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraint2x2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[] = {
		{ "Category", "Spatial Setup" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraint2x2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridSpatialConstraint2x2Data>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridSpatialConstraintCellData, METADATA_PARAMS(0, nullptr) }; // 4037464750
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridSpatialConstraint2x2Data, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cells_MetaData), NewProp_Cells_MetaData) }; // 4037464750
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data_Statics::NewProp_Cells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data_Statics::NewProp_Cells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"GridSpatialConstraint2x2Data",
	Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data_Statics::PropPointers),
	sizeof(FGridSpatialConstraint2x2Data),
	alignof(FGridSpatialConstraint2x2Data),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data()
{
	if (!Z_Registration_Info_UScriptStruct_GridSpatialConstraint2x2Data.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridSpatialConstraint2x2Data.InnerSingleton, Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GridSpatialConstraint2x2Data.InnerSingleton;
}
// End ScriptStruct FGridSpatialConstraint2x2Data

// Begin Class UGridSpatialConstraint2x2
void UGridSpatialConstraint2x2::StaticRegisterNativesUGridSpatialConstraint2x2()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridSpatialConstraint2x2);
UClass* Z_Construct_UClass_UGridSpatialConstraint2x2_NoRegister()
{
	return UGridSpatialConstraint2x2::StaticClass();
}
struct Z_Construct_UClass_UGridSpatialConstraint2x2_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/Common/SpatialConstraints/GridSpatialConstraint2x2.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraint2x2.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[] = {
		{ "Category", "Spatial Setup" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraint2x2.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Configuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridSpatialConstraint2x2>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridSpatialConstraint2x2_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridSpatialConstraint2x2, Configuration), Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Configuration_MetaData), NewProp_Configuration_MetaData) }; // 2664969837
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridSpatialConstraint2x2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSpatialConstraint2x2_Statics::NewProp_Configuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridSpatialConstraint2x2_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridSpatialConstraint2x2_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonSpatialConstraint,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridSpatialConstraint2x2_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridSpatialConstraint2x2_Statics::ClassParams = {
	&UGridSpatialConstraint2x2::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridSpatialConstraint2x2_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridSpatialConstraint2x2_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridSpatialConstraint2x2_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridSpatialConstraint2x2_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridSpatialConstraint2x2()
{
	if (!Z_Registration_Info_UClass_UGridSpatialConstraint2x2.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridSpatialConstraint2x2.OuterSingleton, Z_Construct_UClass_UGridSpatialConstraint2x2_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridSpatialConstraint2x2.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridSpatialConstraint2x2>()
{
	return UGridSpatialConstraint2x2::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridSpatialConstraint2x2);
UGridSpatialConstraint2x2::~UGridSpatialConstraint2x2() {}
// End Class UGridSpatialConstraint2x2

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraint2x2_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGridSpatialConstraint2x2Data::StaticStruct, Z_Construct_UScriptStruct_FGridSpatialConstraint2x2Data_Statics::NewStructOps, TEXT("GridSpatialConstraint2x2Data"), &Z_Registration_Info_UScriptStruct_GridSpatialConstraint2x2Data, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridSpatialConstraint2x2Data), 2664969837U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridSpatialConstraint2x2, UGridSpatialConstraint2x2::StaticClass, TEXT("UGridSpatialConstraint2x2"), &Z_Registration_Info_UClass_UGridSpatialConstraint2x2, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridSpatialConstraint2x2), 3033593874U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraint2x2_h_3510351750(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraint2x2_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraint2x2_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraint2x2_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraint2x2_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
