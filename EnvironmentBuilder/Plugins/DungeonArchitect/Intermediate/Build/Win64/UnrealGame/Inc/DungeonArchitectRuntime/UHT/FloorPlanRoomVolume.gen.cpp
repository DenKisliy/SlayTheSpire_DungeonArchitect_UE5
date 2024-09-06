// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/FloorPlan/Volumes/FloorPlanRoomVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloorPlanRoomVolume() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVolume();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_AFloorPlanRoomVolume();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_AFloorPlanRoomVolume_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class AFloorPlanRoomVolume
void AFloorPlanRoomVolume::StaticRegisterNativesAFloorPlanRoomVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloorPlanRoomVolume);
UClass* Z_Construct_UClass_AFloorPlanRoomVolume_NoRegister()
{
	return AFloorPlanRoomVolume::StaticClass();
}
struct Z_Construct_UClass_AFloorPlanRoomVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Builders/FloorPlan/Volumes/FloorPlanRoomVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/Volumes/FloorPlanRoomVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCreateWalls_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Should the walls be generated around this room */" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/Volumes/FloorPlanRoomVolume.h" },
		{ "ToolTip", "Should the walls be generated around this room" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConnectDoors_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Should it be connected with doors */" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/Volumes/FloorPlanRoomVolume.h" },
		{ "ToolTip", "Should it be connected with doors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Give a higher priority to the volume chunk so it overrides everything in its path */" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/Volumes/FloorPlanRoomVolume.h" },
		{ "ToolTip", "Give a higher priority to the volume chunk so it overrides everything in its path" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallMarker_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/Volumes/FloorPlanRoomVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundMarker_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/Volumes/FloorPlanRoomVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CeilingMarker_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/Volumes/FloorPlanRoomVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorMarker_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/Volumes/FloorPlanRoomVolume.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterMarker_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Will emit a marker at the center of the volume on each floor it overlaps with */" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/Volumes/FloorPlanRoomVolume.h" },
		{ "ToolTip", "Will emit a marker at the center of the volume on each floor it overlaps with" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerFloorCenterMarker_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** The marker on the center of the room, emitted at each floor it spans */" },
		{ "ModuleRelativePath", "Public/Builders/FloorPlan/Volumes/FloorPlanRoomVolume.h" },
		{ "ToolTip", "The marker on the center of the room, emitted at each floor it spans" },
	};
#endif // WITH_METADATA
	static void NewProp_bCreateWalls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateWalls;
	static void NewProp_bConnectDoors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConnectDoors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Priority;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WallMarker;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroundMarker;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CeilingMarker;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DoorMarker;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CenterMarker;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PerFloorCenterMarker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloorPlanRoomVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_bCreateWalls_SetBit(void* Obj)
{
	((AFloorPlanRoomVolume*)Obj)->bCreateWalls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_bCreateWalls = { "bCreateWalls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFloorPlanRoomVolume), &Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_bCreateWalls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCreateWalls_MetaData), NewProp_bCreateWalls_MetaData) };
void Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_bConnectDoors_SetBit(void* Obj)
{
	((AFloorPlanRoomVolume*)Obj)->bConnectDoors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_bConnectDoors = { "bConnectDoors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFloorPlanRoomVolume), &Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_bConnectDoors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConnectDoors_MetaData), NewProp_bConnectDoors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPlanRoomVolume, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_WallMarker = { "WallMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPlanRoomVolume, WallMarker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallMarker_MetaData), NewProp_WallMarker_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_GroundMarker = { "GroundMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPlanRoomVolume, GroundMarker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundMarker_MetaData), NewProp_GroundMarker_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_CeilingMarker = { "CeilingMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPlanRoomVolume, CeilingMarker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CeilingMarker_MetaData), NewProp_CeilingMarker_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_DoorMarker = { "DoorMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPlanRoomVolume, DoorMarker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorMarker_MetaData), NewProp_DoorMarker_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_CenterMarker = { "CenterMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPlanRoomVolume, CenterMarker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterMarker_MetaData), NewProp_CenterMarker_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_PerFloorCenterMarker = { "PerFloorCenterMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFloorPlanRoomVolume, PerFloorCenterMarker), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerFloorCenterMarker_MetaData), NewProp_PerFloorCenterMarker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloorPlanRoomVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_bCreateWalls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_bConnectDoors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_WallMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_GroundMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_CeilingMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_DoorMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_CenterMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloorPlanRoomVolume_Statics::NewProp_PerFloorCenterMarker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlanRoomVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFloorPlanRoomVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADungeonVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlanRoomVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloorPlanRoomVolume_Statics::ClassParams = {
	&AFloorPlanRoomVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AFloorPlanRoomVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlanRoomVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFloorPlanRoomVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_AFloorPlanRoomVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFloorPlanRoomVolume()
{
	if (!Z_Registration_Info_UClass_AFloorPlanRoomVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloorPlanRoomVolume.OuterSingleton, Z_Construct_UClass_AFloorPlanRoomVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFloorPlanRoomVolume.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<AFloorPlanRoomVolume>()
{
	return AFloorPlanRoomVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFloorPlanRoomVolume);
AFloorPlanRoomVolume::~AFloorPlanRoomVolume() {}
// End Class AFloorPlanRoomVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_Volumes_FloorPlanRoomVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFloorPlanRoomVolume, AFloorPlanRoomVolume::StaticClass, TEXT("AFloorPlanRoomVolume"), &Z_Registration_Info_UClass_AFloorPlanRoomVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloorPlanRoomVolume), 1650411453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_Volumes_FloorPlanRoomVolume_h_2336827050(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_Volumes_FloorPlanRoomVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_FloorPlan_Volumes_FloorPlanRoomVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
