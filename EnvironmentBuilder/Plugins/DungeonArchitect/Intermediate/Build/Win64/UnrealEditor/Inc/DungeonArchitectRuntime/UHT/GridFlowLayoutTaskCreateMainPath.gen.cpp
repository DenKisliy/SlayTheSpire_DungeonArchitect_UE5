// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateMainPath.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/Common/GridFlowItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowLayoutTaskCreateMainPath() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridFlowLayoutTaskCreateMainPath
void UGridFlowLayoutTaskCreateMainPath::StaticRegisterNativesUGridFlowLayoutTaskCreateMainPath()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowLayoutTaskCreateMainPath);
UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_NoRegister()
{
	return UGridFlowLayoutTaskCreateMainPath::StaticClass();
}
struct Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateMainPath.h" },
		{ "MenuPriority", "1100" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateMainPath.h" },
		{ "Title", "Create Main Path" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Create a main path with spawn and goal" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideStartGridPosition_MetaData[] = {
		{ "Category", "Start Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        Enable this to override the start node position\n\n        Variable Name: bOverrideStartGridPosition\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateMainPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable this to override the start node position\n\nVariable Name: bOverrideStartGridPosition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartGridPosition_MetaData[] = {
		{ "Category", "Start Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        Override the start node position of the path.   \n        This is useful if you want static entrances to your dungeon\n        This parameter requires bOverrideStartNodePosition flag to be set\n\n        Variable Name: StartGridPosition\n    */" },
#endif
		{ "EditCondition", "bOverrideStartGridPosition" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateMainPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Override the start node position of the path.\nThis is useful if you want static entrances to your dungeon\nThis parameter requires bOverrideStartNodePosition flag to be set\n\nVariable Name: StartGridPosition" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFullSizeStartRoom_MetaData[] = {
		{ "Category", "Start Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        The room in the tilemap generate from the start node will have it's full size\n        (perturb value for this node will be disable)\n\n        Variable Name: bFullSizeStartRoom\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateMainPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The room in the tilemap generate from the start node will have it's full size\n(perturb value for this node will be disable)\n\nVariable Name: bFullSizeStartRoom" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFullSizeGoalRoom_MetaData[] = {
		{ "Category", "Start Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        The room in the tilemap generate from the goal node (last node in the path) will\n        have it's full size (perturb value for this node will be disable)\n\n        Variable Name: bFullSizeGoalRoom\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateMainPath.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The room in the tilemap generate from the goal node (last node in the path) will\nhave it's full size (perturb value for this node will be disable)\n\nVariable Name: bFullSizeGoalRoom" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartNodePlacement_MetaData[] = {
		{ "Category", "Item Placement" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateMainPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndNodePlacement_MetaData[] = {
		{ "Category", "Item Placement" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskCreateMainPath.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverrideStartGridPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideStartGridPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartGridPosition;
	static void NewProp_bFullSizeStartRoom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullSizeStartRoom;
	static void NewProp_bFullSizeGoalRoom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullSizeGoalRoom;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartNodePlacement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EndNodePlacement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowLayoutTaskCreateMainPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bOverrideStartGridPosition_SetBit(void* Obj)
{
	((UGridFlowLayoutTaskCreateMainPath*)Obj)->bOverrideStartGridPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bOverrideStartGridPosition = { "bOverrideStartGridPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridFlowLayoutTaskCreateMainPath), &Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bOverrideStartGridPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideStartGridPosition_MetaData), NewProp_bOverrideStartGridPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_StartGridPosition = { "StartGridPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowLayoutTaskCreateMainPath, StartGridPosition), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartGridPosition_MetaData), NewProp_StartGridPosition_MetaData) };
void Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bFullSizeStartRoom_SetBit(void* Obj)
{
	((UGridFlowLayoutTaskCreateMainPath*)Obj)->bFullSizeStartRoom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bFullSizeStartRoom = { "bFullSizeStartRoom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridFlowLayoutTaskCreateMainPath), &Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bFullSizeStartRoom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFullSizeStartRoom_MetaData), NewProp_bFullSizeStartRoom_MetaData) };
void Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bFullSizeGoalRoom_SetBit(void* Obj)
{
	((UGridFlowLayoutTaskCreateMainPath*)Obj)->bFullSizeGoalRoom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bFullSizeGoalRoom = { "bFullSizeGoalRoom", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridFlowLayoutTaskCreateMainPath), &Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bFullSizeGoalRoom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFullSizeGoalRoom_MetaData), NewProp_bFullSizeGoalRoom_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_StartNodePlacement = { "StartNodePlacement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowLayoutTaskCreateMainPath, StartNodePlacement), Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartNodePlacement_MetaData), NewProp_StartNodePlacement_MetaData) }; // 1297846474
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_EndNodePlacement = { "EndNodePlacement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowLayoutTaskCreateMainPath, EndNodePlacement), Z_Construct_UScriptStruct_FGridFlowTilemapItemPlacementSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndNodePlacement_MetaData), NewProp_EndNodePlacement_MetaData) }; // 1297846474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bOverrideStartGridPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_StartGridPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bFullSizeStartRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_bFullSizeGoalRoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_StartNodePlacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::NewProp_EndNodePlacement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::ClassParams = {
	&UGridFlowLayoutTaskCreateMainPath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath()
{
	if (!Z_Registration_Info_UClass_UGridFlowLayoutTaskCreateMainPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowLayoutTaskCreateMainPath.OuterSingleton, Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowLayoutTaskCreateMainPath.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowLayoutTaskCreateMainPath>()
{
	return UGridFlowLayoutTaskCreateMainPath::StaticClass();
}
UGridFlowLayoutTaskCreateMainPath::UGridFlowLayoutTaskCreateMainPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowLayoutTaskCreateMainPath);
UGridFlowLayoutTaskCreateMainPath::~UGridFlowLayoutTaskCreateMainPath() {}
// End Class UGridFlowLayoutTaskCreateMainPath

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreateMainPath_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowLayoutTaskCreateMainPath, UGridFlowLayoutTaskCreateMainPath::StaticClass, TEXT("UGridFlowLayoutTaskCreateMainPath"), &Z_Registration_Info_UClass_UGridFlowLayoutTaskCreateMainPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowLayoutTaskCreateMainPath), 4265965998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreateMainPath_h_3543770459(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreateMainPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskCreateMainPath_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
