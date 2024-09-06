// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Common/SpatialConstraints/GridSpatialConstraintEdge.h"
#include "DungeonArchitectRuntime/Public/Builders/Common/SpatialConstraints/GridSpatialConstraintCellData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridSpatialConstraintEdge() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpatialConstraint();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridSpatialConstraintEdge();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridSpatialConstraintEdge_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridSpatialConstraintCellData();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FGridSpatialConstraintEdgeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridSpatialConstraintEdgeData;
class UScriptStruct* FGridSpatialConstraintEdgeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridSpatialConstraintEdgeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridSpatialConstraintEdgeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridSpatialConstraintEdgeData"));
	}
	return Z_Registration_Info_UScriptStruct_GridSpatialConstraintEdgeData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridSpatialConstraintEdgeData>()
{
	return FGridSpatialConstraintEdgeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraintEdge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cells_MetaData[] = {
		{ "Category", "Spatial Setup" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraintEdge.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Cells_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridSpatialConstraintEdgeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::NewProp_Cells_Inner = { "Cells", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGridSpatialConstraintCellData, METADATA_PARAMS(0, nullptr) }; // 4037464750
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::NewProp_Cells = { "Cells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridSpatialConstraintEdgeData, Cells), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cells_MetaData), NewProp_Cells_MetaData) }; // 4037464750
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::NewProp_Cells_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::NewProp_Cells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"GridSpatialConstraintEdgeData",
	Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::PropPointers),
	sizeof(FGridSpatialConstraintEdgeData),
	alignof(FGridSpatialConstraintEdgeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData()
{
	if (!Z_Registration_Info_UScriptStruct_GridSpatialConstraintEdgeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridSpatialConstraintEdgeData.InnerSingleton, Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GridSpatialConstraintEdgeData.InnerSingleton;
}
// End ScriptStruct FGridSpatialConstraintEdgeData

// Begin Class UGridSpatialConstraintEdge
void UGridSpatialConstraintEdge::StaticRegisterNativesUGridSpatialConstraintEdge()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridSpatialConstraintEdge);
UClass* Z_Construct_UClass_UGridSpatialConstraintEdge_NoRegister()
{
	return UGridSpatialConstraintEdge::StaticClass();
}
struct Z_Construct_UClass_UGridSpatialConstraintEdge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/Common/SpatialConstraints/GridSpatialConstraintEdge.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraintEdge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Configuration_MetaData[] = {
		{ "Category", "Spatial Setup" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraintEdge.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Configuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridSpatialConstraintEdge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::NewProp_Configuration = { "Configuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridSpatialConstraintEdge, Configuration), Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Configuration_MetaData), NewProp_Configuration_MetaData) }; // 1740843569
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::NewProp_Configuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonSpatialConstraint,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::ClassParams = {
	&UGridSpatialConstraintEdge::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridSpatialConstraintEdge()
{
	if (!Z_Registration_Info_UClass_UGridSpatialConstraintEdge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridSpatialConstraintEdge.OuterSingleton, Z_Construct_UClass_UGridSpatialConstraintEdge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridSpatialConstraintEdge.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridSpatialConstraintEdge>()
{
	return UGridSpatialConstraintEdge::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridSpatialConstraintEdge);
UGridSpatialConstraintEdge::~UGridSpatialConstraintEdge() {}
// End Class UGridSpatialConstraintEdge

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintEdge_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGridSpatialConstraintEdgeData::StaticStruct, Z_Construct_UScriptStruct_FGridSpatialConstraintEdgeData_Statics::NewStructOps, TEXT("GridSpatialConstraintEdgeData"), &Z_Registration_Info_UScriptStruct_GridSpatialConstraintEdgeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridSpatialConstraintEdgeData), 1740843569U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridSpatialConstraintEdge, UGridSpatialConstraintEdge::StaticClass, TEXT("UGridSpatialConstraintEdge"), &Z_Registration_Info_UClass_UGridSpatialConstraintEdge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridSpatialConstraintEdge), 3824737954U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintEdge_h_1981114726(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintEdge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintEdge_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintEdge_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintEdge_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
