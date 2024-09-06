// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateMainPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFlowLayoutTaskCreateMainPath() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskPathBuilderBase();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UBaseFlowLayoutTaskCreateMainPath
void UBaseFlowLayoutTaskCreateMainPath::StaticRegisterNativesUBaseFlowLayoutTaskCreateMainPath()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFlowLayoutTaskCreateMainPath);
UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_NoRegister()
{
	return UBaseFlowLayoutTaskCreateMainPath::StaticClass();
}
struct Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateMainPath.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateMainPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathSize_MetaData[] = {
		{ "Category", "Create Main Path" },
		{ "Comment", "/**\n        The size of the main path\n\n        Variable Name: PathSize\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateMainPath.h" },
		{ "ToolTip", "The size of the main path\n\nVariable Name: PathSize" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathName_MetaData[] = {
		{ "Category", "Create Main Path" },
		{ "Comment", "/**\n        The name of this path.  It can be later referenced with this name\n\n        Variable Name: PathName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateMainPath.h" },
		{ "ToolTip", "The name of this path.  It can be later referenced with this name\n\nVariable Name: PathName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeColor_MetaData[] = {
		{ "Category", "Create Main Path" },
		{ "Comment", "/**\n        The color of the nodes in this path\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateMainPath.h" },
		{ "ToolTip", "The color of the nodes in this path\n\nVariable Name: [N/A]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartMarkerName_MetaData[] = {
		{ "Category", "Create Main Path" },
		{ "Comment", "/**\n        Marker name to emit at the spawn point.   Add this marker name in the theme file and emit your spawn blueprints (e.g. player start)\n\n        Variable Name: StartMarkerName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateMainPath.h" },
		{ "ToolTip", "Marker name to emit at the spawn point.   Add this marker name in the theme file and emit your spawn blueprints (e.g. player start)\n\nVariable Name: StartMarkerName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalMarkerName_MetaData[] = {
		{ "Category", "Create Main Path" },
		{ "Comment", "/**\n        Marker name to emit at the goal point.   Add this marker name in the theme file and emit your level exit blueprints\n\n        Variable Name: GoalMarkerName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateMainPath.h" },
		{ "ToolTip", "Marker name to emit at the goal point.   Add this marker name in the theme file and emit your level exit blueprints\n\nVariable Name: GoalMarkerName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartNodePathName_MetaData[] = {
		{ "Category", "Create Main Path" },
		{ "Comment", "/**\n        Optionally, specify a different path name for the start node in the path\n\n        Variable Name: StartNodePathName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateMainPath.h" },
		{ "ToolTip", "Optionally, specify a different path name for the start node in the path\n\nVariable Name: StartNodePathName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoalNodePathName_MetaData[] = {
		{ "Category", "Create Main Path" },
		{ "Comment", "/**\n        Optionally, specify a different path name for the end node in the path\n\n        Variable Name: GoalNodePathName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateMainPath.h" },
		{ "ToolTip", "Optionally, specify a different path name for the end node in the path\n\nVariable Name: GoalNodePathName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumParallelSearches_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n      Number of searches to perform at once.  This helps converge to a solution faster if we are stuck on a single search path.\n      However, this might increase the overall search time by a little bit.\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateMainPath.h" },
		{ "ToolTip", "Number of searches to perform at once.  This helps converge to a solution faster if we are stuck on a single search path.\nHowever, this might increase the overall search time by a little bit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFramesToProcess_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreateMainPath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PathSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PathName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeColor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartMarkerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GoalMarkerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartNodePathName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GoalNodePathName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumParallelSearches;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_MaxFramesToProcess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFlowLayoutTaskCreateMainPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_PathSize = { "PathSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateMainPath, PathSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathSize_MetaData), NewProp_PathSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_PathName = { "PathName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateMainPath, PathName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathName_MetaData), NewProp_PathName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_NodeColor = { "NodeColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateMainPath, NodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeColor_MetaData), NewProp_NodeColor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_StartMarkerName = { "StartMarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateMainPath, StartMarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartMarkerName_MetaData), NewProp_StartMarkerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_GoalMarkerName = { "GoalMarkerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateMainPath, GoalMarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalMarkerName_MetaData), NewProp_GoalMarkerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_StartNodePathName = { "StartNodePathName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateMainPath, StartNodePathName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartNodePathName_MetaData), NewProp_StartNodePathName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_GoalNodePathName = { "GoalNodePathName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateMainPath, GoalNodePathName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoalNodePathName_MetaData), NewProp_GoalNodePathName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_NumParallelSearches = { "NumParallelSearches", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateMainPath, NumParallelSearches), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumParallelSearches_MetaData), NewProp_NumParallelSearches_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_MaxFramesToProcess = { "MaxFramesToProcess", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreateMainPath, MaxFramesToProcess), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFramesToProcess_MetaData), NewProp_MaxFramesToProcess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_PathSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_PathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_NodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_StartMarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_GoalMarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_StartNodePathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_GoalNodePathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_NumParallelSearches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::NewProp_MaxFramesToProcess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskPathBuilderBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::ClassParams = {
	&UBaseFlowLayoutTaskCreateMainPath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath()
{
	if (!Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateMainPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateMainPath.OuterSingleton, Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateMainPath.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UBaseFlowLayoutTaskCreateMainPath>()
{
	return UBaseFlowLayoutTaskCreateMainPath::StaticClass();
}
UBaseFlowLayoutTaskCreateMainPath::UBaseFlowLayoutTaskCreateMainPath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFlowLayoutTaskCreateMainPath);
UBaseFlowLayoutTaskCreateMainPath::~UBaseFlowLayoutTaskCreateMainPath() {}
// End Class UBaseFlowLayoutTaskCreateMainPath

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskCreateMainPath_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFlowLayoutTaskCreateMainPath, UBaseFlowLayoutTaskCreateMainPath::StaticClass, TEXT("UBaseFlowLayoutTaskCreateMainPath"), &Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreateMainPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFlowLayoutTaskCreateMainPath), 3085775283U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskCreateMainPath_h_2953717690(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskCreateMainPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskCreateMainPath_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
