// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskFinalize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridFlowLayoutTaskFinalize() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskFinalize();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskFinalize();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridFlowLayoutTaskFinalize_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridFlowLayoutTaskFinalize
void UGridFlowLayoutTaskFinalize::StaticRegisterNativesUGridFlowLayoutTaskFinalize()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridFlowLayoutTaskFinalize);
UClass* Z_Construct_UClass_UGridFlowLayoutTaskFinalize_NoRegister()
{
	return UGridFlowLayoutTaskFinalize::StaticClass();
}
struct Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AbstractTask", "" },
		{ "IncludePath", "Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskFinalize.h" },
		{ "MenuPriority", "1500" },
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskFinalize.h" },
		{ "Title", "Finalize Graph" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Call this to finalize the layout graph" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateCorridors_MetaData[] = {
		{ "Category", "Finalize Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        Indicates if corridors are allowed. A corridor is created if it has one entrance and one exit \n        and they are in the same line (i.e. both along X or Y axis)\n\n        Variable Name: bGenerateCorridors\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskFinalize.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates if corridors are allowed. A corridor is created if it has one entrance and one exit\nand they are in the same line (i.e. both along X or Y axis)\n\nVariable Name: bGenerateCorridors" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateCaves_MetaData[] = {
		{ "Category", "Finalize Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        Indicates if caves are allowed. A room node is promoted to a cave \n        if the number of enemies in this node is less than or equal to MaxEnemiesPerCaveNode\n\n        Variable Name: bGenerateCaves\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskFinalize.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates if caves are allowed. A room node is promoted to a cave\nif the number of enemies in this node is less than or equal to MaxEnemiesPerCaveNode\n\nVariable Name: bGenerateCaves" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxEnemiesPerCaveNode_MetaData[] = {
		{ "Category", "Finalize Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        The condition for promoting a room to a cave.  If the number of enemies in the room node is \n        less than or equal to this value, it is promoted to a cave.\n        Sometimes, it might still be room regardless of this value, if we need a door and there \n        are no nearby rooms (caves chunks don't have doors)\n\n        Variable Name: MaxEnemiesPerCaveNode\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/FlowImpl/GridFlow/LayoutGraph/Tasks/GridFlowLayoutTaskFinalize.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The condition for promoting a room to a cave.  If the number of enemies in the room node is\nless than or equal to this value, it is promoted to a cave.\nSometimes, it might still be room regardless of this value, if we need a door and there\nare no nearby rooms (caves chunks don't have doors)\n\nVariable Name: MaxEnemiesPerCaveNode" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bGenerateCorridors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateCorridors;
	static void NewProp_bGenerateCaves_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateCaves;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEnemiesPerCaveNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridFlowLayoutTaskFinalize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCorridors_SetBit(void* Obj)
{
	((UGridFlowLayoutTaskFinalize*)Obj)->bGenerateCorridors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCorridors = { "bGenerateCorridors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridFlowLayoutTaskFinalize), &Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCorridors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateCorridors_MetaData), NewProp_bGenerateCorridors_MetaData) };
void Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCaves_SetBit(void* Obj)
{
	((UGridFlowLayoutTaskFinalize*)Obj)->bGenerateCaves = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCaves = { "bGenerateCaves", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridFlowLayoutTaskFinalize), &Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCaves_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateCaves_MetaData), NewProp_bGenerateCaves_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_MaxEnemiesPerCaveNode = { "MaxEnemiesPerCaveNode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGridFlowLayoutTaskFinalize, MaxEnemiesPerCaveNode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxEnemiesPerCaveNode_MetaData), NewProp_MaxEnemiesPerCaveNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCorridors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_bGenerateCaves,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::NewProp_MaxEnemiesPerCaveNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskFinalize,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::ClassParams = {
	&UGridFlowLayoutTaskFinalize::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridFlowLayoutTaskFinalize()
{
	if (!Z_Registration_Info_UClass_UGridFlowLayoutTaskFinalize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridFlowLayoutTaskFinalize.OuterSingleton, Z_Construct_UClass_UGridFlowLayoutTaskFinalize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridFlowLayoutTaskFinalize.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridFlowLayoutTaskFinalize>()
{
	return UGridFlowLayoutTaskFinalize::StaticClass();
}
UGridFlowLayoutTaskFinalize::UGridFlowLayoutTaskFinalize(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridFlowLayoutTaskFinalize);
UGridFlowLayoutTaskFinalize::~UGridFlowLayoutTaskFinalize() {}
// End Class UGridFlowLayoutTaskFinalize

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskFinalize_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridFlowLayoutTaskFinalize, UGridFlowLayoutTaskFinalize::StaticClass, TEXT("UGridFlowLayoutTaskFinalize"), &Z_Registration_Info_UClass_UGridFlowLayoutTaskFinalize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridFlowLayoutTaskFinalize), 649782672U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskFinalize_h_139872140(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskFinalize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_FlowImpl_GridFlow_LayoutGraph_Tasks_GridFlowLayoutTaskFinalize_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
