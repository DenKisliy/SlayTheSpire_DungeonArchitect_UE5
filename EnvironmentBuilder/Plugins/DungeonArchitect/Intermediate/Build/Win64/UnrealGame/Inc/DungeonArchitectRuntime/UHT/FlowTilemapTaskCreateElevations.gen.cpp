// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowTilemapTaskCreateElevations() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTask();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTaskCreateElevations();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowTilemapTaskCreateElevations_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UFlowTilemapTaskCreateElevations
void UFlowTilemapTaskCreateElevations::StaticRegisterNativesUFlowTilemapTaskCreateElevations()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlowTilemapTaskCreateElevations);
UClass* Z_Construct_UClass_UFlowTilemapTaskCreateElevations_NoRegister()
{
	return UFlowTilemapTaskCreateElevations::StaticClass();
}
struct Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseOctaves_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "Comment", "/**\n        Number of octaves to apply on the Perlin noise\n\n        Variable Name: NoiseOctaves\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "Number of octaves to apply on the Perlin noise\n\nVariable Name: NoiseOctaves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseFrequency_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "Comment", "/**\n        Frequency of the Noise\n\n        Variable Name: NoiseFrequency\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "Frequency of the Noise\n\nVariable Name: NoiseFrequency" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseValuePower_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "Comment", "/**\n\n        Variable Name: NoiseValuePower\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "Variable Name: NoiseValuePower" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSteps_MetaData[] = {
		{ "Category", "Noise Settings" },
		{ "Comment", "/**\n        The Elevation noise field is divided into steps.  Increase this value for a smoother terrain\n\n        Variable Name: NumSteps\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "The Elevation noise field is divided into steps.  Increase this value for a smoother terrain\n\nVariable Name: NumSteps" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
		{ "Category", "Theme" },
		{ "Comment", "/**\n        The marker name the emit on the elevation tile.   Create a marker node with this \n        name in the theme file and add your assets there\n\n        Variable Name: MarkerName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "The marker name the emit on the elevation tile.   Create a marker node with this\nname in the theme file and add your assets there\n\nVariable Name: MarkerName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinHeight_MetaData[] = {
		{ "Category", "Height Settings" },
		{ "Comment", "/**\n        The minimum height of the elevation. This value is in logical units and will be \n        multiplied with the Dungeon actor's GridSize config height. So a \n        logical height of -2 would be multiplied with 200 if the GridSize is (400, 400, 200) to \n        have the final value of -400 in unreal units\n\n        Variable Name: MinHeight\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "The minimum height of the elevation. This value is in logical units and will be\nmultiplied with the Dungeon actor's GridSize config height. So a\nlogical height of -2 would be multiplied with 200 if the GridSize is (400, 400, 200) to\nhave the final value of -400 in unreal units\n\nVariable Name: MinHeight" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[] = {
		{ "Category", "Height Settings" },
		{ "Comment", "/**\n        The maximum height of the elevation. This value is in logical units and will be\n        multiplied with the Dungeon actor's GridSize config height\n\n        Variable Name: MaxHeight\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "The maximum height of the elevation. This value is in logical units and will be\nmultiplied with the Dungeon actor's GridSize config height\n\nVariable Name: MaxHeight" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeaLevel_MetaData[] = {
		{ "Category", "Height Settings" },
		{ "Comment", "/**\n        The sea level of the elevation. This value is in logical units and will be\n        multiplied with the Dungeon actor's GridSize config height\n\n        Variable Name: SeaLevel\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "The sea level of the elevation. This value is in logical units and will be\nmultiplied with the Dungeon actor's GridSize config height\n\nVariable Name: SeaLevel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandColor_MetaData[] = {
		{ "Category", "Color Settings" },
		{ "Comment", "/**\n        The color of the elevation tiles above the sea level.  Used only for visualization\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "The color of the elevation tiles above the sea level.  Used only for visualization\n\nVariable Name: [N/A]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeaColor_MetaData[] = {
		{ "Category", "Color Settings" },
		{ "Comment", "/**\n        The color of the elevation tiles below the sea level.  Used only for visualization\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "The color of the elevation tiles below the sea level.  Used only for visualization\n\nVariable Name: [N/A]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinColorMultiplier_MetaData[] = {
		{ "Category", "Color Settings" },
		{ "Comment", "/**\n        Adjust the color tint multiplier of the land/sea colors\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/Tilemap/Tasks/FlowTilemapTaskCreateElevations.h" },
		{ "ToolTip", "Adjust the color tint multiplier of the land/sea colors\n\nVariable Name: [N/A]" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NoiseOctaves;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseValuePower;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSteps;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SeaLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SeaColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinColorMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlowTilemapTaskCreateElevations>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseOctaves = { "NoiseOctaves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, NoiseOctaves), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseOctaves_MetaData), NewProp_NoiseOctaves_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseFrequency = { "NoiseFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, NoiseFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseFrequency_MetaData), NewProp_NoiseFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseValuePower = { "NoiseValuePower", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, NoiseValuePower), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseValuePower_MetaData), NewProp_NoiseValuePower_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, NumSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSteps_MetaData), NewProp_NumSteps_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, MarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerName_MetaData), NewProp_MarkerName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MinHeight = { "MinHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, MinHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinHeight_MetaData), NewProp_MinHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, MaxHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHeight_MetaData), NewProp_MaxHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_SeaLevel = { "SeaLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, SeaLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeaLevel_MetaData), NewProp_SeaLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_LandColor = { "LandColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, LandColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandColor_MetaData), NewProp_LandColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_SeaColor = { "SeaColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, SeaColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeaColor_MetaData), NewProp_SeaColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MinColorMultiplier = { "MinColorMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlowTilemapTaskCreateElevations, MinColorMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinColorMultiplier_MetaData), NewProp_MinColorMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseOctaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NoiseValuePower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_NumSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MinHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MaxHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_SeaLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_LandColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_SeaColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::NewProp_MinColorMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowTilemapTask,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::ClassParams = {
	&UFlowTilemapTaskCreateElevations::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlowTilemapTaskCreateElevations()
{
	if (!Z_Registration_Info_UClass_UFlowTilemapTaskCreateElevations.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlowTilemapTaskCreateElevations.OuterSingleton, Z_Construct_UClass_UFlowTilemapTaskCreateElevations_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlowTilemapTaskCreateElevations.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UFlowTilemapTaskCreateElevations>()
{
	return UFlowTilemapTaskCreateElevations::StaticClass();
}
UFlowTilemapTaskCreateElevations::UFlowTilemapTaskCreateElevations(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlowTilemapTaskCreateElevations);
UFlowTilemapTaskCreateElevations::~UFlowTilemapTaskCreateElevations() {}
// End Class UFlowTilemapTaskCreateElevations

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskCreateElevations_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlowTilemapTaskCreateElevations, UFlowTilemapTaskCreateElevations::StaticClass, TEXT("UFlowTilemapTaskCreateElevations"), &Z_Registration_Info_UClass_UFlowTilemapTaskCreateElevations, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlowTilemapTaskCreateElevations), 459021277U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskCreateElevations_h_1268722844(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskCreateElevations_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_Tilemap_Tasks_FlowTilemapTaskCreateElevations_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
