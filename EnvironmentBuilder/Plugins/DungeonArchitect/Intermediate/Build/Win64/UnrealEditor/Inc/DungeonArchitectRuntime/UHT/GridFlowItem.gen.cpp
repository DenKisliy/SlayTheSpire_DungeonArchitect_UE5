// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowItem() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UFlowGraphItem();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowGraphItem();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowGraphItem_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapItemPlacementMode();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum EGridFlowTilemapItemPlacementMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGridFlowTilemapItemPlacementMode;
static UEnum* EGridFlowTilemapItemPlacementMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGridFlowTilemapItemPlacementMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGridFlowTilemapItemPlacementMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapItemPlacementMode, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EGridFlowTilemapItemPlacementMode"));
	}
	return Z_Registration_Info_UEnum_EGridFlowTilemapItemPlacementMode.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EGridFlowTilemapItemPlacementMode>()
{
	return EGridFlowTilemapItemPlacementMode_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapItemPlacementMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Center.Name", "EGridFlowTilemapItemPlacementMode::Center" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h" },
		{ "NearEdges.Name", "EGridFlowTilemapItemPlacementMode::NearEdges" },
		{ "Random.Name", "EGridFlowTilemapItemPlacementMode::Random" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGridFlowTilemapItemPlacementMode::Random", (int64)EGridFlowTilemapItemPlacementMode::Random },
		{ "EGridFlowTilemapItemPlacementMode::NearEdges", (int64)EGridFlowTilemapItemPlacementMode::NearEdges },
		{ "EGridFlowTilemapItemPlacementMode::Center", (int64)EGridFlowTilemapItemPlacementMode::Center },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapItemPlacementMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EGridFlowTilemapItemPlacementMode",
	"EGridFlowTilemapItemPlacementMode",
	Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapItemPlacementMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapItemPlacementMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapItemPlacementMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapItemPlacementMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapItemPlacementMode()
{
	if (!Z_Registration_Info_UEnum_EGridFlowTilemapItemPlacementMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGridFlowTilemapItemPlacementMode.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapItemPlacementMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGridFlowTilemapItemPlacementMode.InnerSingleton;
}
// End Enum EGridFlowTilemapItemPlacementMode

// Begin ScriptStruct FGridFlowTilemapItemPlacementSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GridFlowTilemapItemPlacementSettings;
class UScriptStruct* FGridFlowTilemapItemPlacementSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GridFlowTilemapItemPlacementSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GridFlowTilemapItemPlacementSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("GridFlowTilemapItemPlacementSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GridFlowTilemapItemPlacementSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FGridFlowTilemapItemPlacementSettings>()
{
	return FGridFlowTilemapItemPlacementSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementMode_MetaData[] = {
		{ "Category", "Item Placement" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAvoidPlacingNearDoors_MetaData[] = {
		{ "Category", "Item Placement" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlacementMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlacementMode;
	static void NewProp_bAvoidPlacingNearDoors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAvoidPlacingNearDoors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGridFlowTilemapItemPlacementSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::NewProp_PlacementMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::NewProp_PlacementMode = { "PlacementMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGridFlowTilemapItemPlacementSettings, PlacementMode), Z_Construct_UEnum_DungeonArchitectRuntime_EGridFlowTilemapItemPlacementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementMode_MetaData), NewProp_PlacementMode_MetaData) }; // 1359708072
void Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::NewProp_bAvoidPlacingNearDoors_SetBit(void* Obj)
{
	((FGridFlowTilemapItemPlacementSettings*)Obj)->bAvoidPlacingNearDoors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::NewProp_bAvoidPlacingNearDoors = { "bAvoidPlacingNearDoors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGridFlowTilemapItemPlacementSettings), &Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::NewProp_bAvoidPlacingNearDoors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAvoidPlacingNearDoors_MetaData), NewProp_bAvoidPlacingNearDoors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::NewProp_PlacementMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::NewProp_PlacementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::NewProp_bAvoidPlacingNearDoors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"GridFlowTilemapItemPlacementSettings",
	Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::PropPointers),
	sizeof(FGridFlowTilemapItemPlacementSettings),
	alignof(FGridFlowTilemapItemPlacementSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings()
{
	if (!Z_Registration_Info_UScriptStruct_GridFlowTilemapItemPlacementSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GridFlowTilemapItemPlacementSettings.InnerSingleton, Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GridFlowTilemapItemPlacementSettings.InnerSingleton;
}
// End ScriptStruct FGridFlowTilemapItemPlacementSettings

// Begin Class UGridFlowGraphItem
void UGridFlowGraphItem::StaticRegisterNativesUGridFlowGraphItem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowGraphItem);
UClass* Z_Construct_UClass_UGridFlowGraphItem_NoRegister()
{
	return UGridFlowGraphItem::StaticClass();
}
struct Z_Construct_UClass_UGridFlowGraphItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementSettings_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlacementSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowGraphItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowGraphItem_Statics::NewProp_PlacementSettings = { "PlacementSettings", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowGraphItem, PlacementSettings), Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementSettings_MetaData), NewProp_PlacementSettings_MetaData) }; // 1297846474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowGraphItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowGraphItem_Statics::NewProp_PlacementSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowGraphItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridFlowGraphItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFlowGraphItem,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowGraphItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowGraphItem_Statics::ClassParams = {
	&UGridFlowGraphItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridFlowGraphItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowGraphItem_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowGraphItem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowGraphItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowGraphItem()
{
	if (!Z_Registration_Info_UClass_UGridFlowGraphItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowGraphItem.OuterSingleton, Z_Construct_UClass_UGridFlowGraphItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowGraphItem.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowGraphItem>()
{
	return UGridFlowGraphItem::StaticClass();
}
UGridFlowGraphItem::UGridFlowGraphItem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowGraphItem);
UGridFlowGraphItem::~UGridFlowGraphItem() {}
// End Class UGridFlowGraphItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Common_GridFlowItem_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGridFlowTilemapItemPlacementMode_StaticEnum, TEXT("EGridFlowTilemapItemPlacementMode"), &Z_Registration_Info_UEnum_EGridFlowTilemapItemPlacementMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1359708072U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGridFlowTilemapItemPlacementSettings::StaticStruct, Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings_Statics::NewStructOps, TEXT("GridFlowTilemapItemPlacementSettings"), &Z_Registration_Info_UScriptStruct_GridFlowTilemapItemPlacementSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGridFlowTilemapItemPlacementSettings), 1297846474U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowGraphItem, UGridFlowGraphItem::StaticClass, TEXT("UGridFlowGraphItem"), &Z_Registration_Info_UClass_UGridFlowGraphItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowGraphItem), 2492933032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Common_GridFlowItem_h_2564279902(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Common_GridFlowItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Common_GridFlowItem_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Common_GridFlowItem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Common_GridFlowItem_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Common_GridFlowItem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_Common_GridFlowItem_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
