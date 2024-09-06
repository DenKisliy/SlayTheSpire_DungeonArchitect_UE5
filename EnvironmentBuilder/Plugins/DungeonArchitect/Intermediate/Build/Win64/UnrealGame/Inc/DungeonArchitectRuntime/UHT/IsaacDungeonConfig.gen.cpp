// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Isaac/IsaacDungeonConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsaacDungeonConfig() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonConfig();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonConfig_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacRoomLayoutBuilder_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UIsaacDungeonConfig
void UIsaacDungeonConfig::StaticRegisterNativesUIsaacDungeonConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsaacDungeonConfig);
UClass* Z_Construct_UClass_UIsaacDungeonConfig_NoRegister()
{
	return UIsaacDungeonConfig::StaticClass();
}
struct Z_Construct_UClass_UIsaacDungeonConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/Isaac/IsaacDungeonConfig.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRooms_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n    * Min no. of rooms to create in the map\n    */" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonConfig.h" },
		{ "ToolTip", "Min no. of rooms to create in the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRooms_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Max no. of rooms to create in the map */" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonConfig.h" },
		{ "ToolTip", "Max no. of rooms to create in the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomWidth_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** The size of the room */" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonConfig.h" },
		{ "ToolTip", "The size of the room" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomLength_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomPadding_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowForwardProbability_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Probability of moving forward in the room */" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonConfig.h" },
		{ "ToolTip", "Probability of moving forward in the room" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrowSidewaysProbability_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Probability of moving forward in the room */" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonConfig.h" },
		{ "ToolTip", "Probability of moving forward in the room" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRoomBranchProbability_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Probability of moving forward in the room */" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonConfig.h" },
		{ "ToolTip", "Probability of moving forward in the room" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CycleProbability_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Probability of moving forward in the room */" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonConfig.h" },
		{ "ToolTip", "Probability of moving forward in the room" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoomLayoutBuilder_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinRooms;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRooms;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RoomPadding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrowForwardProbability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GrowSidewaysProbability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRoomBranchProbability;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CycleProbability;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomLayoutBuilder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsaacDungeonConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_MinRooms = { "MinRooms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsaacDungeonConfig, MinRooms), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRooms_MetaData), NewProp_MinRooms_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_MaxRooms = { "MaxRooms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsaacDungeonConfig, MaxRooms), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRooms_MetaData), NewProp_MaxRooms_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_RoomWidth = { "RoomWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsaacDungeonConfig, RoomWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomWidth_MetaData), NewProp_RoomWidth_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_RoomLength = { "RoomLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsaacDungeonConfig, RoomLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomLength_MetaData), NewProp_RoomLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsaacDungeonConfig, TileSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_RoomPadding = { "RoomPadding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsaacDungeonConfig, RoomPadding), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomPadding_MetaData), NewProp_RoomPadding_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_GrowForwardProbability = { "GrowForwardProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsaacDungeonConfig, GrowForwardProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowForwardProbability_MetaData), NewProp_GrowForwardProbability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_GrowSidewaysProbability = { "GrowSidewaysProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsaacDungeonConfig, GrowSidewaysProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrowSidewaysProbability_MetaData), NewProp_GrowSidewaysProbability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_SpawnRoomBranchProbability = { "SpawnRoomBranchProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsaacDungeonConfig, SpawnRoomBranchProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRoomBranchProbability_MetaData), NewProp_SpawnRoomBranchProbability_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_CycleProbability = { "CycleProbability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsaacDungeonConfig, CycleProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CycleProbability_MetaData), NewProp_CycleProbability_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_RoomLayoutBuilder = { "RoomLayoutBuilder", nullptr, (EPropertyFlags)0x001202000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsaacDungeonConfig, RoomLayoutBuilder), Z_Construct_UClass_UIsaacRoomLayoutBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoomLayoutBuilder_MetaData), NewProp_RoomLayoutBuilder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsaacDungeonConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_MinRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_MaxRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_RoomWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_RoomLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_RoomPadding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_GrowForwardProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_GrowSidewaysProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_SpawnRoomBranchProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_CycleProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonConfig_Statics::NewProp_RoomLayoutBuilder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsaacDungeonConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsaacDungeonConfig_Statics::ClassParams = {
	&UIsaacDungeonConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIsaacDungeonConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonConfig_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsaacDungeonConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsaacDungeonConfig()
{
	if (!Z_Registration_Info_UClass_UIsaacDungeonConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsaacDungeonConfig.OuterSingleton, Z_Construct_UClass_UIsaacDungeonConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsaacDungeonConfig.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UIsaacDungeonConfig>()
{
	return UIsaacDungeonConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsaacDungeonConfig);
UIsaacDungeonConfig::~UIsaacDungeonConfig() {}
// End Class UIsaacDungeonConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsaacDungeonConfig, UIsaacDungeonConfig::StaticClass, TEXT("UIsaacDungeonConfig"), &Z_Registration_Info_UClass_UIsaacDungeonConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsaacDungeonConfig), 1347487865U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonConfig_h_2356404821(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
