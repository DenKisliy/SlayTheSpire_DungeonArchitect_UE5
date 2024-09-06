// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/LayoutGraph/Core/FlowAbstractItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFlowLayoutTaskSpawnItems() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTask();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFlowItemCustomInfo();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum EridFlowTask_SpawnItemsMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EridFlowTask_SpawnItemsMethod;
static UEnum* EridFlowTask_SpawnItemsMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EridFlowTask_SpawnItemsMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EridFlowTask_SpawnItemsMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EridFlowTask_SpawnItemsMethod"));
	}
	return Z_Registration_Info_UEnum_EridFlowTask_SpawnItemsMethod.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EridFlowTask_SpawnItemsMethod>()
{
	return EridFlowTask_SpawnItemsMethod_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "LinearDifficulty.DisplayName", "Linear Difficulty" },
		{ "LinearDifficulty.Name", "EridFlowTask_SpawnItemsMethod::LinearDifficulty" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "RandomRange.DisplayName", "Random Range" },
		{ "RandomRange.Name", "EridFlowTask_SpawnItemsMethod::RandomRange" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EridFlowTask_SpawnItemsMethod::RandomRange", (int64)EridFlowTask_SpawnItemsMethod::RandomRange },
		{ "EridFlowTask_SpawnItemsMethod::LinearDifficulty", (int64)EridFlowTask_SpawnItemsMethod::LinearDifficulty },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EridFlowTask_SpawnItemsMethod",
	"EridFlowTask_SpawnItemsMethod",
	Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod()
{
	if (!Z_Registration_Info_UEnum_EridFlowTask_SpawnItemsMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EridFlowTask_SpawnItemsMethod.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EridFlowTask_SpawnItemsMethod.InnerSingleton;
}
// End Enum EridFlowTask_SpawnItemsMethod

// Begin Class UBaseFlowLayoutTaskSpawnItems
void UBaseFlowLayoutTaskSpawnItems::StaticRegisterNativesUBaseFlowLayoutTaskSpawnItems()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFlowLayoutTaskSpawnItems);
UClass* Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_NoRegister()
{
	return UBaseFlowLayoutTaskSpawnItems::StaticClass();
}
struct Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Paths_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        The list of paths to spawn the items on\n\n        Variable Name: Paths\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "The list of paths to spawn the items on\n\nVariable Name: Paths" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        The type of item to spawn\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "The type of item to spawn\n\nVariable Name: [N/A]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        The marker name for this item. Create a marker in the theme file with this name and add you assets there\n\n        Variable Name: MarkerName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "The marker name for this item. Create a marker in the theme file with this name and add you assets there\n\nVariable Name: MarkerName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomItemInfo_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        If ItemType is set to custom, customize the visuals of the items in the graph preview\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "If ItemType is set to custom, customize the visuals of the items in the graph preview\n\nVariable Name: [N/A]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinCount_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        Minimum number of items to spawn\n\n        Variable Name: MinCount\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "Minimum number of items to spawn\n\nVariable Name: MinCount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        Maximum number of items to spawn\n\n        Variable Name: MaxCount\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "Maximum number of items to spawn\n\nVariable Name: MaxCount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnMethod_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        The method to use to control the spawn\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "The method to use to control the spawn\n\nVariable Name: [N/A]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnDistributionVariance_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        Control the random variance\n\n        Variable Name: SpawnDistributionVariance\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "Control the random variance\n\nVariable Name: SpawnDistributionVariance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnDifficulty_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        Each node in the path has a difficulty, with the first node having a difficulty of 0\n        and the last node 1 and everything in between\n        Start spawning only on nodes having difficulty greater than this value\n\n        Variable Name: MinSpawnDifficulty\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "Each node in the path has a difficulty, with the first node having a difficulty of 0\nand the last node 1 and everything in between\nStart spawning only on nodes having difficulty greater than this value\n\nVariable Name: MinSpawnDifficulty" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnProbability_MetaData[] = {
		{ "Category", "Spawn Items" },
		{ "Comment", "/**\n        The probability of spawning in this node.  It might spawn as usual or not spawn anything at all depending\n        on this value. 0 = 0% chance of spawning.  1 = 100% chance of spawning\n\n        Variable Name: SpawnProbability\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "The probability of spawning in this node.  It might spawn as usual or not spawn anything at all depending\non this value. 0 = 0% chance of spawning.  1 = 100% chance of spawning\n\nVariable Name: SpawnProbability" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugShowDifficulty_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n        Debug: Show the difficulty of the nodes in this path\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "Debug: Show the difficulty of the nodes in this path\n\nVariable Name: [N/A]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DifficultyInfoColor_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/**\n        Debug: The color of the debug data item\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskSpawnItems.h" },
		{ "ToolTip", "Debug: The color of the debug data item\n\nVariable Name: [N/A]" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Paths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Paths;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomItemInfo;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnMethod;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnDistributionVariance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpawnDifficulty;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnProbability;
	static void NewProp_bDebugShowDifficulty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugShowDifficulty;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DifficultyInfoColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFlowLayoutTaskSpawnItems>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Paths_MetaData), NewProp_Paths_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, ItemType), Z_Construct_UEnum_DungeonArchitectRuntime_EFlowGraphItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 55434792
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, MarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerName_MetaData), NewProp_MarkerName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_CustomItemInfo = { "CustomItemInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, CustomItemInfo), Z_Construct_UScriptStruct_FFlowItemCustomInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomItemInfo_MetaData), NewProp_CustomItemInfo_MetaData) }; // 1992339435
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MinCount = { "MinCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, MinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinCount_MetaData), NewProp_MinCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, MaxCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCount_MetaData), NewProp_MaxCount_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnMethod = { "SpawnMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, SpawnMethod), Z_Construct_UEnum_DungeonArchitectRuntime_EridFlowTask_SpawnItemsMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnMethod_MetaData), NewProp_SpawnMethod_MetaData) }; // 212499249
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnDistributionVariance = { "SpawnDistributionVariance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, SpawnDistributionVariance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnDistributionVariance_MetaData), NewProp_SpawnDistributionVariance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MinSpawnDifficulty = { "MinSpawnDifficulty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, MinSpawnDifficulty), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpawnDifficulty_MetaData), NewProp_MinSpawnDifficulty_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnProbability = { "SpawnProbability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, SpawnProbability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnProbability_MetaData), NewProp_SpawnProbability_MetaData) };
void Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_bDebugShowDifficulty_SetBit(void* Obj)
{
	((UBaseFlowLayoutTaskSpawnItems*)Obj)->bDebugShowDifficulty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_bDebugShowDifficulty = { "bDebugShowDifficulty", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseFlowLayoutTaskSpawnItems), &Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_bDebugShowDifficulty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugShowDifficulty_MetaData), NewProp_bDebugShowDifficulty_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_DifficultyInfoColor = { "DifficultyInfoColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskSpawnItems, DifficultyInfoColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DifficultyInfoColor_MetaData), NewProp_DifficultyInfoColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_Paths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_Paths,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_CustomItemInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MinCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MaxCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnDistributionVariance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_MinSpawnDifficulty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_SpawnProbability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_bDebugShowDifficulty,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::NewProp_DifficultyInfoColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTask,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::ClassParams = {
	&UBaseFlowLayoutTaskSpawnItems::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems()
{
	if (!Z_Registration_Info_UClass_UBaseFlowLayoutTaskSpawnItems.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFlowLayoutTaskSpawnItems.OuterSingleton, Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseFlowLayoutTaskSpawnItems.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UBaseFlowLayoutTaskSpawnItems>()
{
	return UBaseFlowLayoutTaskSpawnItems::StaticClass();
}
UBaseFlowLayoutTaskSpawnItems::UBaseFlowLayoutTaskSpawnItems(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFlowLayoutTaskSpawnItems);
UBaseFlowLayoutTaskSpawnItems::~UBaseFlowLayoutTaskSpawnItems() {}
// End Class UBaseFlowLayoutTaskSpawnItems

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EridFlowTask_SpawnItemsMethod_StaticEnum, TEXT("EridFlowTask_SpawnItemsMethod"), &Z_Registration_Info_UEnum_EridFlowTask_SpawnItemsMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 212499249U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFlowLayoutTaskSpawnItems, UBaseFlowLayoutTaskSpawnItems::StaticClass, TEXT("UBaseFlowLayoutTaskSpawnItems"), &Z_Registration_Info_UClass_UBaseFlowLayoutTaskSpawnItems, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFlowLayoutTaskSpawnItems), 3154379121U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_4259200018(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskSpawnItems_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
