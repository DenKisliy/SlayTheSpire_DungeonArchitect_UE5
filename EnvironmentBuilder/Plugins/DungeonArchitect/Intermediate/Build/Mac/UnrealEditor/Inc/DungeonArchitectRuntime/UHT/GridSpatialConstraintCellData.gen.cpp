// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Common/SpatialConstraints/GridSpatialConstraintCellData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridSpatialConstraintCellData() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridSpatialConstraintCellData();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum EGridSpatialCellOccupation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridSpatialCellOccupation;
static UEnum* EGridSpatialCellOccupation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGridSpatialCellOccupation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGridSpatialCellOccupation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EGridSpatialCellOccupation"));
	}
	return Z_Registration_Info_UEnum_EGridSpatialCellOccupation.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridSpatialCellOccupation>()
{
	return EGridSpatialCellOccupation_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontCare.DisplayName", "Ignore" },
		{ "DontCare.Name", "EGridSpatialCellOccupation::DontCare" },
		{ "Empty.DisplayName", "Empty" },
		{ "Empty.Name", "EGridSpatialCellOccupation::Empty" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraintCellData.h" },
		{ "Occupied.DisplayName", "Occupied" },
		{ "Occupied.Name", "EGridSpatialCellOccupation::Occupied" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGridSpatialCellOccupation::DontCare", (int64)EGridSpatialCellOccupation::DontCare },
		{ "EGridSpatialCellOccupation::Occupied", (int64)EGridSpatialCellOccupation::Occupied },
		{ "EGridSpatialCellOccupation::Empty", (int64)EGridSpatialCellOccupation::Empty },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EGridSpatialCellOccupation",
	"EGridSpatialCellOccupation",
	Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation()
{
	if (!Z_Registration_Info_UEnum_EGridSpatialCellOccupation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridSpatialCellOccupation.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGridSpatialCellOccupation.InnerSingleton;
}
// End Enum EGridSpatialCellOccupation

// Begin ScriptStruct FGridSpatialConstraintCellData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridSpatialConstraintCellData;
class UScriptStruct* FGridSpatialConstraintCellData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridSpatialConstraintCellData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridSpatialConstraintCellData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridSpatialConstraintCellData, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridSpatialConstraintCellData"));
	}
	return Z_Registration_Info_UScriptStruct_GridSpatialConstraintCellData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridSpatialConstraintCellData>()
{
	return FGridSpatialConstraintCellData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraintCellData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OccupationConstraint_MetaData[] = {
		{ "Category", "Spatial Setup" },
		{ "ModuleRelativePath", "Public/Builders/Common/SpatialConstraints/GridSpatialConstraintCellData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OccupationConstraint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OccupationConstraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridSpatialConstraintCellData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::NewProp_OccupationConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::NewProp_OccupationConstraint = { "OccupationConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridSpatialConstraintCellData, OccupationConstraint), Z_Construct_UEnum_DungeonArchitectRuntime_EGridSpatialCellOccupation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OccupationConstraint_MetaData), NewProp_OccupationConstraint_MetaData) }; // 4294758936
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::NewProp_OccupationConstraint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::NewProp_OccupationConstraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"GridSpatialConstraintCellData",
	Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::PropPointers),
	sizeof(FGridSpatialConstraintCellData),
	alignof(FGridSpatialConstraintCellData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridSpatialConstraintCellData()
{
	if (!Z_Registration_Info_UScriptStruct_GridSpatialConstraintCellData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridSpatialConstraintCellData.InnerSingleton, Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GridSpatialConstraintCellData.InnerSingleton;
}
// End ScriptStruct FGridSpatialConstraintCellData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintCellData_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGridSpatialCellOccupation_StaticEnum, TEXT("EGridSpatialCellOccupation"), &Z_Registration_Info_UEnum_EGridSpatialCellOccupation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4294758936U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGridSpatialConstraintCellData::StaticStruct, Z_Construct_UScriptStruct_FGridSpatialConstraintCellData_Statics::NewStructOps, TEXT("GridSpatialConstraintCellData"), &Z_Registration_Info_UScriptStruct_GridSpatialConstraintCellData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridSpatialConstraintCellData), 4037464750U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintCellData_h_1844630963(TEXT("/Script/DungeonArchitectRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintCellData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintCellData_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintCellData_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Common_SpatialConstraints_GridSpatialConstraintCellData_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
