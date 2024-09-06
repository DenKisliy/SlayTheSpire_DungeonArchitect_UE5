// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Serialization/SnapModuleInstanceSerialization.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/DungeonBoundingShapes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/PointOfInterest.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Canvas/DungeonCanvasRoomShapeTexture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapModuleInstanceSerialization() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDABoundsShapeList();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonPointOfInterest();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FSnapModuleInstanceSerializedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapModuleInstanceSerializedData;
class UScriptStruct* FSnapModuleInstanceSerializedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapModuleInstanceSerializedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapModuleInstanceSerializedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapModuleInstanceSerializedData"));
	}
	return Z_Registration_Info_UScriptStruct_SnapModuleInstanceSerializedData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapModuleInstanceSerializedData>()
{
	return FSnapModuleInstanceSerializedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapModuleInstanceSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleInstanceId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapModuleInstanceSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapModuleInstanceSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapModuleInstanceSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThemedLevels_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapModuleInstanceSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapModuleInstanceSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapModuleInstanceSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleBoundShapes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapModuleInstanceSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasRoomShapeTextures_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapModuleInstanceSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointsOfInterest_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapModuleInstanceSerialization.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleInstanceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Level;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ThemedLevels_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ThemedLevels_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ThemedLevels;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleBoundShapes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasRoomShapeTextures;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointsOfInterest_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PointsOfInterest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapModuleInstanceSerializedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_ModuleInstanceId = { "ModuleInstanceId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapModuleInstanceSerializedData, ModuleInstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleInstanceId_MetaData), NewProp_ModuleInstanceId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapModuleInstanceSerializedData, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldTransform_MetaData), NewProp_WorldTransform_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapModuleInstanceSerializedData, Level), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Level_MetaData), NewProp_Level_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_ThemedLevels_ValueProp = { "ThemedLevels", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_ThemedLevels_Key_KeyProp = { "ThemedLevels_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_ThemedLevels = { "ThemedLevels", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapModuleInstanceSerializedData, ThemedLevels), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThemedLevels_MetaData), NewProp_ThemedLevels_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapModuleInstanceSerializedData, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_ModuleBounds = { "ModuleBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapModuleInstanceSerializedData, ModuleBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleBounds_MetaData), NewProp_ModuleBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_ModuleBoundShapes = { "ModuleBoundShapes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapModuleInstanceSerializedData, ModuleBoundShapes), Z_Construct_UScriptStruct_FDABoundsShapeList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleBoundShapes_MetaData), NewProp_ModuleBoundShapes_MetaData) }; // 4252500473
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_CanvasRoomShapeTextures = { "CanvasRoomShapeTextures", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapModuleInstanceSerializedData, CanvasRoomShapeTextures), Z_Construct_UScriptStruct_FDungeonCanvasRoomShapeTextureList, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasRoomShapeTextures_MetaData), NewProp_CanvasRoomShapeTextures_MetaData) }; // 4150483278
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_PointsOfInterest_Inner = { "PointsOfInterest", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonPointOfInterest, METADATA_PARAMS(0, nullptr) }; // 586671446
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_PointsOfInterest = { "PointsOfInterest", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapModuleInstanceSerializedData, PointsOfInterest), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointsOfInterest_MetaData), NewProp_PointsOfInterest_MetaData) }; // 586671446
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_ModuleInstanceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_WorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_Level,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_ThemedLevels_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_ThemedLevels_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_ThemedLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_ModuleBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_ModuleBoundShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_CanvasRoomShapeTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_PointsOfInterest_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewProp_PointsOfInterest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SnapModuleInstanceSerializedData",
	Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::PropPointers),
	sizeof(FSnapModuleInstanceSerializedData),
	alignof(FSnapModuleInstanceSerializedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData()
{
	if (!Z_Registration_Info_UScriptStruct_SnapModuleInstanceSerializedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapModuleInstanceSerializedData.InnerSingleton, Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SnapModuleInstanceSerializedData.InnerSingleton;
}
// End ScriptStruct FSnapModuleInstanceSerializedData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_SnapModuleInstanceSerialization_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSnapModuleInstanceSerializedData::StaticStruct, Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData_Statics::NewStructOps, TEXT("SnapModuleInstanceSerializedData"), &Z_Registration_Info_UScriptStruct_SnapModuleInstanceSerializedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapModuleInstanceSerializedData), 2436367469U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_SnapModuleInstanceSerialization_h_1144967600(TEXT("/Script/DungeonArchitectRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_SnapModuleInstanceSerialization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_SnapModuleInstanceSerialization_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
