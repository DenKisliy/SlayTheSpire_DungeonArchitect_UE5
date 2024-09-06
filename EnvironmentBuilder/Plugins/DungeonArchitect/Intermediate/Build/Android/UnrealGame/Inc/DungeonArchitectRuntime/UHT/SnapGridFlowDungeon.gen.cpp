// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapGridFlowDungeon() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonConfig();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQuery();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSelectorLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonStreamingChunk_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonThemeAsset_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonToolData();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonTransformLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapDungeonModelBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowAbstractGraph_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowAsset_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowBuilder_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowConfig();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowConfig_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModel();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleDatabase_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowModuleSelectionRule_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowQuery();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowQuery_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowSelectorLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowSelectorLogic_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowToolData();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowToolData_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowTransformLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapGridFlowTransformLogic_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapGridFlowConfig
void USnapGridFlowConfig::StaticRegisterNativesUSnapGridFlowConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowConfig);
UClass* Z_Construct_UClass_USnapGridFlowConfig_NoRegister()
{
	return USnapGridFlowConfig::StaticClass();
}
struct Z_Construct_UClass_USnapGridFlowConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleDatabase_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** A module database asset that contains the references of the modules to use for building the dungeon */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "A module database asset that contains the references of the modules to use for building the dungeon" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlowGraph_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** A flow graph allows you to design the flow of your dungeon paths */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "A flow graph allows you to design the flow of your dungeon paths" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemTheme_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Spawn the item actors using a theme file.   Here you'd define markers for every item you specified in the flow graph */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "Spawn the item actors using a theme file.   Here you'd define markers for every item you specified in the flow graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportDoorCategories_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n     * Supports door categories names. When stitching the modules, only connections with the same door categories will be stitched together\n     * This will require more processing power, use it only when required. Disable if not needed, to get faster dungeon builds\n     */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "Supports door categories names. When stitching the modules, only connections with the same door categories will be stitched together\nThis will require more processing power, use it only when required. Disable if not needed, to get faster dungeon builds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumLayoutBuildRetries_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** If the layout graph build fails, it will be retried with another seed multiple tiles based on this count */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "If the layout graph build fails, it will be retried with another seed multiple tiles based on this count" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreferModulesWithMinimumDoors_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n    * When choosing modules to stitch,  prefer modules with minimum possible doors.\n    * E.g. If a module requires 3 doors,  a module with 4 doors will not be used as a better alternative with 3 doors is available\n    * Disable this (bring close to 0) if you want some randomness.   Fully enabling this (setting it to 1.0) will not make some\n    * modules show up in the final graph as the version with lesser doors will always show up\n    */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "When choosing modules to stitch,  prefer modules with minimum possible doors.\nE.g. If a module requires 3 doors,  a module with 4 doors will not be used as a better alternative with 3 doors is available\nDisable this (bring close to 0) if you want some randomness.   Fully enabling this (setting it to 1.0) will not make some\nmodules show up in the final graph as the version with lesser doors will always show up" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterOverrides_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** Override any of the flow graph variables at runtime */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "Override any of the flow graph variables at runtime" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTimeoutsRetriesAllowed_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** The number of timeouts allowed while building the dungeon with multiple retries */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "The number of timeouts allowed while building the dungeon with multiple retries" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxResolveFrames_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n     * The processing power allotted to the module resolve stage.  This allows the algorithm to bail out early if a solution is not\n     * found and make another retry.  Provide a value around (10,000)\n     */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "The processing power allotted to the module resolve stage.  This allows the algorithm to bail out early if a solution is not\nfound and make another retry.  Provide a value around (10,000)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxItemFitnessFrames_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n     * The processing power allotted to the module resolve stage.  This allows the algorithm to bail out early if a solution is not\n     * found and make another retry.  Provide a value around (10,000)\n     */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "The processing power allotted to the module resolve stage.  This allows the algorithm to bail out early if a solution is not\nfound and make another retry.  Provide a value around (10,000)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonRepeatingRooms_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n     * The system tries to not repeat a module within the last few room depths specified below\n     */" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "The system tries to not repeat a module within the last few room depths specified below" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleResolveRules_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/**\n     * Decide whether a module is allowed at a certain node position. This happens in the last stage of the SGF generation process,\n     * allowing you to filter out modules based on the node configuration\n     */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ToolTip", "Decide whether a module is allowed at a certain node position. This happens in the last stage of the SGF generation process,\nallowing you to filter out modules based on the node configuration" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ModuleDatabase;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FlowGraph;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ItemTheme;
	static void NewProp_bSupportDoorCategories_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportDoorCategories;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumLayoutBuildRetries;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreferModulesWithMinimumDoors;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverrides_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ParameterOverrides;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTimeoutsRetriesAllowed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResolveFrames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxItemFitnessFrames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NonRepeatingRooms;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ModuleResolveRules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModuleResolveRules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ModuleDatabase = { "ModuleDatabase", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowConfig, ModuleDatabase), Z_Construct_UClass_USnapGridFlowModuleDatabase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleDatabase_MetaData), NewProp_ModuleDatabase_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_FlowGraph = { "FlowGraph", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowConfig, FlowGraph), Z_Construct_UClass_USnapGridFlowAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlowGraph_MetaData), NewProp_FlowGraph_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ItemTheme = { "ItemTheme", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowConfig, ItemTheme), Z_Construct_UClass_UDungeonThemeAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemTheme_MetaData), NewProp_ItemTheme_MetaData) };
void Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bSupportDoorCategories_SetBit(void* Obj)
{
	((USnapGridFlowConfig*)Obj)->bSupportDoorCategories = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bSupportDoorCategories = { "bSupportDoorCategories", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USnapGridFlowConfig), &Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bSupportDoorCategories_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportDoorCategories_MetaData), NewProp_bSupportDoorCategories_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NumLayoutBuildRetries = { "NumLayoutBuildRetries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowConfig, NumLayoutBuildRetries), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumLayoutBuildRetries_MetaData), NewProp_NumLayoutBuildRetries_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_PreferModulesWithMinimumDoors = { "PreferModulesWithMinimumDoors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowConfig, PreferModulesWithMinimumDoors), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreferModulesWithMinimumDoors_MetaData), NewProp_PreferModulesWithMinimumDoors_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ParameterOverrides_ValueProp = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ParameterOverrides_Key_KeyProp = { "ParameterOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ParameterOverrides = { "ParameterOverrides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowConfig, ParameterOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterOverrides_MetaData), NewProp_ParameterOverrides_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NumTimeoutsRetriesAllowed = { "NumTimeoutsRetriesAllowed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowConfig, NumTimeoutsRetriesAllowed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTimeoutsRetriesAllowed_MetaData), NewProp_NumTimeoutsRetriesAllowed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_MaxResolveFrames = { "MaxResolveFrames", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowConfig, MaxResolveFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxResolveFrames_MetaData), NewProp_MaxResolveFrames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_MaxItemFitnessFrames = { "MaxItemFitnessFrames", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowConfig, MaxItemFitnessFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxItemFitnessFrames_MetaData), NewProp_MaxItemFitnessFrames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NonRepeatingRooms = { "NonRepeatingRooms", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowConfig, NonRepeatingRooms), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonRepeatingRooms_MetaData), NewProp_NonRepeatingRooms_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ModuleResolveRules_Inner = { "ModuleResolveRules", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USnapGridFlowModuleSelectionRule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ModuleResolveRules = { "ModuleResolveRules", nullptr, (EPropertyFlags)0x011404800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowConfig, ModuleResolveRules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleResolveRules_MetaData), NewProp_ModuleResolveRules_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapGridFlowConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ModuleDatabase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_FlowGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ItemTheme,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_bSupportDoorCategories,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NumLayoutBuildRetries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_PreferModulesWithMinimumDoors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ParameterOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ParameterOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ParameterOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NumTimeoutsRetriesAllowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_MaxResolveFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_MaxItemFitnessFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_NonRepeatingRooms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ModuleResolveRules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowConfig_Statics::NewProp_ModuleResolveRules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapGridFlowConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonConfig,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowConfig_Statics::ClassParams = {
	&USnapGridFlowConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapGridFlowConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapGridFlowConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapGridFlowConfig()
{
	if (!Z_Registration_Info_UClass_USnapGridFlowConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowConfig.OuterSingleton, Z_Construct_UClass_USnapGridFlowConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapGridFlowConfig.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowConfig>()
{
	return USnapGridFlowConfig::StaticClass();
}
USnapGridFlowConfig::USnapGridFlowConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowConfig);
USnapGridFlowConfig::~USnapGridFlowConfig() {}
// End Class USnapGridFlowConfig

// Begin Class USnapGridFlowModel
void USnapGridFlowModel::StaticRegisterNativesUSnapGridFlowModel()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowModel);
UClass* Z_Construct_UClass_USnapGridFlowModel_NoRegister()
{
	return USnapGridFlowModel::StaticClass();
}
struct Z_Construct_UClass_USnapGridFlowModel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbstractGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbstractGraph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowModel>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_AbstractGraph = { "AbstractGraph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowModel, AbstractGraph), Z_Construct_UClass_USnapGridFlowAbstractGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbstractGraph_MetaData), NewProp_AbstractGraph_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapGridFlowModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModel_Statics::NewProp_AbstractGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModel_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapGridFlowModel_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USnapDungeonModelBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModel_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowModel_Statics::ClassParams = {
	&USnapGridFlowModel::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapGridFlowModel_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModel_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModel_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapGridFlowModel_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapGridFlowModel()
{
	if (!Z_Registration_Info_UClass_USnapGridFlowModel.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowModel.OuterSingleton, Z_Construct_UClass_USnapGridFlowModel_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapGridFlowModel.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowModel>()
{
	return USnapGridFlowModel::StaticClass();
}
USnapGridFlowModel::USnapGridFlowModel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowModel);
USnapGridFlowModel::~USnapGridFlowModel() {}
// End Class USnapGridFlowModel

// Begin Class USnapGridFlowQuery
void USnapGridFlowQuery::StaticRegisterNativesUSnapGridFlowQuery()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowQuery);
UClass* Z_Construct_UClass_USnapGridFlowQuery_NoRegister()
{
	return USnapGridFlowQuery::StaticClass();
}
struct Z_Construct_UClass_USnapGridFlowQuery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowQuery>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapGridFlowQuery_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonQuery,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowQuery_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowQuery_Statics::ClassParams = {
	&USnapGridFlowQuery::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowQuery_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapGridFlowQuery_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapGridFlowQuery()
{
	if (!Z_Registration_Info_UClass_USnapGridFlowQuery.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowQuery.OuterSingleton, Z_Construct_UClass_USnapGridFlowQuery_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapGridFlowQuery.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowQuery>()
{
	return USnapGridFlowQuery::StaticClass();
}
USnapGridFlowQuery::USnapGridFlowQuery() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowQuery);
USnapGridFlowQuery::~USnapGridFlowQuery() {}
// End Class USnapGridFlowQuery

// Begin Class USnapGridFlowToolData
void USnapGridFlowToolData::StaticRegisterNativesUSnapGridFlowToolData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowToolData);
UClass* Z_Construct_UClass_USnapGridFlowToolData_NoRegister()
{
	return USnapGridFlowToolData::StaticClass();
}
struct Z_Construct_UClass_USnapGridFlowToolData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowToolData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapGridFlowToolData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonToolData,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowToolData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowToolData_Statics::ClassParams = {
	&USnapGridFlowToolData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowToolData_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapGridFlowToolData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapGridFlowToolData()
{
	if (!Z_Registration_Info_UClass_USnapGridFlowToolData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowToolData.OuterSingleton, Z_Construct_UClass_USnapGridFlowToolData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapGridFlowToolData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowToolData>()
{
	return USnapGridFlowToolData::StaticClass();
}
USnapGridFlowToolData::USnapGridFlowToolData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowToolData);
USnapGridFlowToolData::~USnapGridFlowToolData() {}
// End Class USnapGridFlowToolData

// Begin Class USnapGridFlowBuilder Function HandleChunkLoaded
struct Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded_Statics
{
	struct SnapGridFlowBuilder_eventHandleChunkLoaded_Parms
	{
		ADungeon* InDungeon;
		UDungeonStreamingChunk* InChunk;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDungeon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InChunk;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded_Statics::NewProp_InDungeon = { "InDungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowBuilder_eventHandleChunkLoaded_Parms, InDungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded_Statics::NewProp_InChunk = { "InChunk", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowBuilder_eventHandleChunkLoaded_Parms, InChunk), Z_Construct_UClass_UDungeonStreamingChunk_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded_Statics::NewProp_InDungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded_Statics::NewProp_InChunk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapGridFlowBuilder, nullptr, "HandleChunkLoaded", nullptr, nullptr, Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded_Statics::SnapGridFlowBuilder_eventHandleChunkLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded_Statics::SnapGridFlowBuilder_eventHandleChunkLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USnapGridFlowBuilder::execHandleChunkLoaded)
{
	P_GET_OBJECT(ADungeon,Z_Param_InDungeon);
	P_GET_OBJECT(UDungeonStreamingChunk,Z_Param_InChunk);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleChunkLoaded(Z_Param_InDungeon,Z_Param_InChunk);
	P_NATIVE_END;
}
// End Class USnapGridFlowBuilder Function HandleChunkLoaded

// Begin Class USnapGridFlowBuilder Function HandleChunkVisible
struct Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible_Statics
{
	struct SnapGridFlowBuilder_eventHandleChunkVisible_Parms
	{
		ADungeon* InDungeon;
		UDungeonStreamingChunk* InChunk;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDungeon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InChunk;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible_Statics::NewProp_InDungeon = { "InDungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowBuilder_eventHandleChunkVisible_Parms, InDungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible_Statics::NewProp_InChunk = { "InChunk", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowBuilder_eventHandleChunkVisible_Parms, InChunk), Z_Construct_UClass_UDungeonStreamingChunk_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible_Statics::NewProp_InDungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible_Statics::NewProp_InChunk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapGridFlowBuilder, nullptr, "HandleChunkVisible", nullptr, nullptr, Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible_Statics::SnapGridFlowBuilder_eventHandleChunkVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible_Statics::SnapGridFlowBuilder_eventHandleChunkVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USnapGridFlowBuilder::execHandleChunkVisible)
{
	P_GET_OBJECT(ADungeon,Z_Param_InDungeon);
	P_GET_OBJECT(UDungeonStreamingChunk,Z_Param_InChunk);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleChunkVisible(Z_Param_InDungeon,Z_Param_InChunk);
	P_NATIVE_END;
}
// End Class USnapGridFlowBuilder Function HandleChunkVisible

// Begin Class USnapGridFlowBuilder
void USnapGridFlowBuilder::StaticRegisterNativesUSnapGridFlowBuilder()
{
	UClass* Class = USnapGridFlowBuilder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleChunkLoaded", &USnapGridFlowBuilder::execHandleChunkLoaded },
		{ "HandleChunkVisible", &USnapGridFlowBuilder::execHandleChunkVisible },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowBuilder);
UClass* Z_Construct_UClass_USnapGridFlowBuilder_NoRegister()
{
	return USnapGridFlowBuilder::StaticClass();
}
struct Z_Construct_UClass_USnapGridFlowBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Description", "Stitch pre-built snap modules using a 3D grid flow graph. Create multi-floor dungeons, side scrollers, top-down dungeon crawlers and much more with this powerful builder" },
		{ "DisplayName", "Snap Grid Flow" },
		{ "IncludePath", "Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkLoaded, "HandleChunkLoaded" }, // 1213850493
		{ &Z_Construct_UFunction_USnapGridFlowBuilder_HandleChunkVisible, "HandleChunkVisible" }, // 3931758961
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapGridFlowBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowBuilder_Statics::ClassParams = {
	&USnapGridFlowBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapGridFlowBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapGridFlowBuilder()
{
	if (!Z_Registration_Info_UClass_USnapGridFlowBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowBuilder.OuterSingleton, Z_Construct_UClass_USnapGridFlowBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapGridFlowBuilder.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowBuilder>()
{
	return USnapGridFlowBuilder::StaticClass();
}
USnapGridFlowBuilder::USnapGridFlowBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowBuilder);
USnapGridFlowBuilder::~USnapGridFlowBuilder() {}
// End Class USnapGridFlowBuilder

// Begin Class USnapGridFlowSelectorLogic Function SelectNode
struct SnapGridFlowSelectorLogic_eventSelectNode_Parms
{
	USnapGridFlowModel* Model;
	USnapGridFlowConfig* Config;
	USnapGridFlowBuilder* Builder;
	USnapGridFlowQuery* Query;
	FRandomStream RandomStream;
	FTransform MarkerTransform;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SnapGridFlowSelectorLogic_eventSelectNode_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USnapGridFlowSelectorLogic_SelectNode = FName(TEXT("SelectNode"));
bool USnapGridFlowSelectorLogic::SelectNode(USnapGridFlowModel* Model, USnapGridFlowConfig* Config, USnapGridFlowBuilder* Builder, USnapGridFlowQuery* Query, FRandomStream const& RandomStream, FTransform const& MarkerTransform)
{
	SnapGridFlowSelectorLogic_eventSelectNode_Parms Parms;
	Parms.Model=Model;
	Parms.Config=Config;
	Parms.Builder=Builder;
	Parms.Query=Query;
	Parms.RandomStream=RandomStream;
	Parms.MarkerTransform=MarkerTransform;
	ProcessEvent(FindFunctionChecked(NAME_USnapGridFlowSelectorLogic_SelectNode),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Builder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Query;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowSelectorLogic_eventSelectNode_Parms, Model), Z_Construct_UClass_USnapGridFlowModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowSelectorLogic_eventSelectNode_Parms, Config), Z_Construct_UClass_USnapGridFlowConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_Builder = { "Builder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowSelectorLogic_eventSelectNode_Parms, Builder), Z_Construct_UClass_USnapGridFlowBuilder_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowSelectorLogic_eventSelectNode_Parms, Query), Z_Construct_UClass_USnapGridFlowQuery_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowSelectorLogic_eventSelectNode_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_MarkerTransform = { "MarkerTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowSelectorLogic_eventSelectNode_Parms, MarkerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerTransform_MetaData), NewProp_MarkerTransform_MetaData) };
void Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SnapGridFlowSelectorLogic_eventSelectNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SnapGridFlowSelectorLogic_eventSelectNode_Parms), &Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_Builder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_Query,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_RandomStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_MarkerTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapGridFlowSelectorLogic, nullptr, "SelectNode", nullptr, nullptr, Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::PropPointers), sizeof(SnapGridFlowSelectorLogic_eventSelectNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(SnapGridFlowSelectorLogic_eventSelectNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USnapGridFlowSelectorLogic::execSelectNode)
{
	P_GET_OBJECT(USnapGridFlowModel,Z_Param_Model);
	P_GET_OBJECT(USnapGridFlowConfig,Z_Param_Config);
	P_GET_OBJECT(USnapGridFlowBuilder,Z_Param_Builder);
	P_GET_OBJECT(USnapGridFlowQuery,Z_Param_Query);
	P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_MarkerTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SelectNode_Implementation(Z_Param_Model,Z_Param_Config,Z_Param_Builder,Z_Param_Query,Z_Param_Out_RandomStream,Z_Param_Out_MarkerTransform);
	P_NATIVE_END;
}
// End Class USnapGridFlowSelectorLogic Function SelectNode

// Begin Class USnapGridFlowSelectorLogic
void USnapGridFlowSelectorLogic::StaticRegisterNativesUSnapGridFlowSelectorLogic()
{
	UClass* Class = USnapGridFlowSelectorLogic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SelectNode", &USnapGridFlowSelectorLogic::execSelectNode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowSelectorLogic);
UClass* Z_Construct_UClass_USnapGridFlowSelectorLogic_NoRegister()
{
	return USnapGridFlowSelectorLogic::StaticClass();
}
struct Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapGridFlowSelectorLogic_SelectNode, "SelectNode" }, // 211008742
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowSelectorLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonSelectorLogic,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics::ClassParams = {
	&USnapGridFlowSelectorLogic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x043010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapGridFlowSelectorLogic()
{
	if (!Z_Registration_Info_UClass_USnapGridFlowSelectorLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowSelectorLogic.OuterSingleton, Z_Construct_UClass_USnapGridFlowSelectorLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapGridFlowSelectorLogic.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowSelectorLogic>()
{
	return USnapGridFlowSelectorLogic::StaticClass();
}
USnapGridFlowSelectorLogic::USnapGridFlowSelectorLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowSelectorLogic);
USnapGridFlowSelectorLogic::~USnapGridFlowSelectorLogic() {}
// End Class USnapGridFlowSelectorLogic

// Begin Class USnapGridFlowTransformLogic Function GetNodeOffset
struct SnapGridFlowTransformLogic_eventGetNodeOffset_Parms
{
	USnapGridFlowModel* Model;
	USnapGridFlowConfig* Config;
	USnapGridFlowQuery* Query;
	FRandomStream RandomStream;
	FTransform Offset;
};
static FName NAME_USnapGridFlowTransformLogic_GetNodeOffset = FName(TEXT("GetNodeOffset"));
void USnapGridFlowTransformLogic::GetNodeOffset(USnapGridFlowModel* Model, USnapGridFlowConfig* Config, USnapGridFlowQuery* Query, FRandomStream const& RandomStream, FTransform& Offset)
{
	SnapGridFlowTransformLogic_eventGetNodeOffset_Parms Parms;
	Parms.Model=Model;
	Parms.Config=Config;
	Parms.Query=Query;
	Parms.RandomStream=RandomStream;
	Parms.Offset=Offset;
	ProcessEvent(FindFunctionChecked(NAME_USnapGridFlowTransformLogic_GetNodeOffset),&Parms);
	Offset=Parms.Offset;
}
struct Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Query;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowTransformLogic_eventGetNodeOffset_Parms, Model), Z_Construct_UClass_USnapGridFlowModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowTransformLogic_eventGetNodeOffset_Parms, Config), Z_Construct_UClass_USnapGridFlowConfig_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_Query = { "Query", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowTransformLogic_eventGetNodeOffset_Parms, Query), Z_Construct_UClass_USnapGridFlowQuery_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowTransformLogic_eventGetNodeOffset_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapGridFlowTransformLogic_eventGetNodeOffset_Parms, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_Model,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_Query,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_RandomStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapGridFlowTransformLogic, nullptr, "GetNodeOffset", nullptr, nullptr, Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::PropPointers), sizeof(SnapGridFlowTransformLogic_eventGetNodeOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(SnapGridFlowTransformLogic_eventGetNodeOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USnapGridFlowTransformLogic::execGetNodeOffset)
{
	P_GET_OBJECT(USnapGridFlowModel,Z_Param_Model);
	P_GET_OBJECT(USnapGridFlowConfig,Z_Param_Config);
	P_GET_OBJECT(USnapGridFlowQuery,Z_Param_Query);
	P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Offset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetNodeOffset_Implementation(Z_Param_Model,Z_Param_Config,Z_Param_Query,Z_Param_Out_RandomStream,Z_Param_Out_Offset);
	P_NATIVE_END;
}
// End Class USnapGridFlowTransformLogic Function GetNodeOffset

// Begin Class USnapGridFlowTransformLogic
void USnapGridFlowTransformLogic::StaticRegisterNativesUSnapGridFlowTransformLogic()
{
	UClass* Class = USnapGridFlowTransformLogic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNodeOffset", &USnapGridFlowTransformLogic::execGetNodeOffset },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowTransformLogic);
UClass* Z_Construct_UClass_USnapGridFlowTransformLogic_NoRegister()
{
	return USnapGridFlowTransformLogic::StaticClass();
}
struct Z_Construct_UClass_USnapGridFlowTransformLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapGridFlow/SnapGridFlowDungeon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapGridFlowTransformLogic_GetNodeOffset, "GetNodeOffset" }, // 3614142795
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowTransformLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapGridFlowTransformLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonTransformLogic,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowTransformLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowTransformLogic_Statics::ClassParams = {
	&USnapGridFlowTransformLogic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x043010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowTransformLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapGridFlowTransformLogic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapGridFlowTransformLogic()
{
	if (!Z_Registration_Info_UClass_USnapGridFlowTransformLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowTransformLogic.OuterSingleton, Z_Construct_UClass_USnapGridFlowTransformLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapGridFlowTransformLogic.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapGridFlowTransformLogic>()
{
	return USnapGridFlowTransformLogic::StaticClass();
}
USnapGridFlowTransformLogic::USnapGridFlowTransformLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowTransformLogic);
USnapGridFlowTransformLogic::~USnapGridFlowTransformLogic() {}
// End Class USnapGridFlowTransformLogic

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowConfig, USnapGridFlowConfig::StaticClass, TEXT("USnapGridFlowConfig"), &Z_Registration_Info_UClass_USnapGridFlowConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowConfig), 2369278508U) },
		{ Z_Construct_UClass_USnapGridFlowModel, USnapGridFlowModel::StaticClass, TEXT("USnapGridFlowModel"), &Z_Registration_Info_UClass_USnapGridFlowModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowModel), 1678648998U) },
		{ Z_Construct_UClass_USnapGridFlowQuery, USnapGridFlowQuery::StaticClass, TEXT("USnapGridFlowQuery"), &Z_Registration_Info_UClass_USnapGridFlowQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowQuery), 2107107855U) },
		{ Z_Construct_UClass_USnapGridFlowToolData, USnapGridFlowToolData::StaticClass, TEXT("USnapGridFlowToolData"), &Z_Registration_Info_UClass_USnapGridFlowToolData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowToolData), 14858799U) },
		{ Z_Construct_UClass_USnapGridFlowBuilder, USnapGridFlowBuilder::StaticClass, TEXT("USnapGridFlowBuilder"), &Z_Registration_Info_UClass_USnapGridFlowBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowBuilder), 1356067381U) },
		{ Z_Construct_UClass_USnapGridFlowSelectorLogic, USnapGridFlowSelectorLogic::StaticClass, TEXT("USnapGridFlowSelectorLogic"), &Z_Registration_Info_UClass_USnapGridFlowSelectorLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowSelectorLogic), 901538009U) },
		{ Z_Construct_UClass_USnapGridFlowTransformLogic, USnapGridFlowTransformLogic::StaticClass, TEXT("USnapGridFlowTransformLogic"), &Z_Registration_Info_UClass_USnapGridFlowTransformLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowTransformLogic), 1869581771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_3222961351(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapGridFlow_SnapGridFlowDungeon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
