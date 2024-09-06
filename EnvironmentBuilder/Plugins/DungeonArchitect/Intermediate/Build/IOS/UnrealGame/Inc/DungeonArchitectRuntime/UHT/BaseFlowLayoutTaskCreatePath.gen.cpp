// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreatePath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFlowLayoutTaskCreatePath() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskPathBuilderBase();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UBaseFlowLayoutTaskCreatePath
void UBaseFlowLayoutTaskCreatePath::StaticRegisterNativesUBaseFlowLayoutTaskCreatePath()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFlowLayoutTaskCreatePath);
UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_NoRegister()
{
	return UBaseFlowLayoutTaskCreatePath::StaticClass();
}
struct Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreatePath.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreatePath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPathSize_MetaData[] = {
		{ "Category", "Create Path" },
		{ "Comment", "/**\n        The minimum path size\n\n        Variable Name: MinPathSize\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "The minimum path size\n\nVariable Name: MinPathSize" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPathSize_MetaData[] = {
		{ "Category", "Create Path" },
		{ "Comment", "/**\n        The maximum path size\n\n        Variable Name: MaxPathSize\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "The maximum path size\n\nVariable Name: MaxPathSize" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathName_MetaData[] = {
		{ "Category", "Create Path" },
		{ "Comment", "/**\n        The name of the path.  This name can be used later to reference this path\n\n        Variable Name: PathName\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "The name of the path.  This name can be used later to reference this path\n\nVariable Name: PathName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeColor_MetaData[] = {
		{ "Category", "Create Path" },
		{ "Comment", "/**\n        The color of the nodes in this path\n\n        Variable Name: [N/A]\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "The color of the nodes in this path\n\nVariable Name: [N/A]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFromPath_MetaData[] = {
		{ "Category", "Create Path" },
		{ "Comment", "/**\n        The name of an existing path that this branch is going to grow out of\n\n        Variable Name: StartFromPath\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "The name of an existing path that this branch is going to grow out of\n\nVariable Name: StartFromPath" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndOnPath_MetaData[] = {
		{ "Category", "Create Path" },
		{ "Comment", "/**\n        The name of an existing path that this branch should connect back to.\n        Leave it empty if the path doesn't connect back to anything\n\n        Variable Name: EndOnPath\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "The name of an existing path that this branch should connect back to.\nLeave it empty if the path doesn't connect back to anything\n\nVariable Name: EndOnPath" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnterThroughTeleporter_MetaData[] = {
		{ "Category", "Teleporter" },
		{ "Comment", "/**\n        If set, you'd enter this path through a teleporter, and there won't be a door connecting from the StartFromPath branch to this\n\n        Variable Name: bEnterThroughTeleporter\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "If set, you'd enter this path through a teleporter, and there won't be a door connecting from the StartFromPath branch to this\n\nVariable Name: bEnterThroughTeleporter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleporterMarkerName_MetaData[] = {
		{ "Category", "Teleporter" },
		{ "Comment", "/**\n        The marker to spawn for the teleporter\n\n        Variable Name: TeleporterMarkerName\n    */" },
		{ "EditCondition", "bEnterThroughTeleporter" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "The marker to spawn for the teleporter\n\nVariable Name: TeleporterMarkerName" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartNodePathNameOverride_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n        Override the path name of the first node in the path.  Useful for connecting other paths to it\n\n        VariableName: StartNodePathNameOverride\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "Override the path name of the first node in the path.  Useful for connecting other paths to it\n\nVariableName: StartNodePathNameOverride" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndNodePathNameOverride_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n        Override the path name of the first node in the path.  Useful for connecting other paths to it\n\n        VariableName: EndNodePathNameOverride\n    */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "Override the path name of the first node in the path.  Useful for connecting other paths to it\n\nVariableName: EndNodePathNameOverride" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumParallelSearches_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/**\n       Number of searches to perform at once.  This helps converge to a solution faster if we are stuck on a single search path.\n       However, this might increase the overall search time by a little bit.\n     */" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreatePath.h" },
		{ "ToolTip", "Number of searches to perform at once.  This helps converge to a solution faster if we are stuck on a single search path.\nHowever, this might increase the overall search time by a little bit." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxFramesToProcess_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskCreatePath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinPathSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPathSize;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PathName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeColor;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartFromPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EndOnPath;
	static void NewProp_bEnterThroughTeleporter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnterThroughTeleporter;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TeleporterMarkerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartNodePathNameOverride;
	static const UECodeGen_Private::FStrPropertyParams NewProp_EndNodePathNameOverride;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumParallelSearches;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_MaxFramesToProcess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFlowLayoutTaskCreatePath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_MinPathSize = { "MinPathSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreatePath, MinPathSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPathSize_MetaData), NewProp_MinPathSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_MaxPathSize = { "MaxPathSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreatePath, MaxPathSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPathSize_MetaData), NewProp_MaxPathSize_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_PathName = { "PathName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreatePath, PathName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathName_MetaData), NewProp_PathName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_NodeColor = { "NodeColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreatePath, NodeColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeColor_MetaData), NewProp_NodeColor_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_StartFromPath = { "StartFromPath", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreatePath, StartFromPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFromPath_MetaData), NewProp_StartFromPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_EndOnPath = { "EndOnPath", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreatePath, EndOnPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndOnPath_MetaData), NewProp_EndOnPath_MetaData) };
void Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_bEnterThroughTeleporter_SetBit(void* Obj)
{
	((UBaseFlowLayoutTaskCreatePath*)Obj)->bEnterThroughTeleporter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_bEnterThroughTeleporter = { "bEnterThroughTeleporter", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseFlowLayoutTaskCreatePath), &Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_bEnterThroughTeleporter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnterThroughTeleporter_MetaData), NewProp_bEnterThroughTeleporter_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_TeleporterMarkerName = { "TeleporterMarkerName", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreatePath, TeleporterMarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleporterMarkerName_MetaData), NewProp_TeleporterMarkerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_StartNodePathNameOverride = { "StartNodePathNameOverride", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreatePath, StartNodePathNameOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartNodePathNameOverride_MetaData), NewProp_StartNodePathNameOverride_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_EndNodePathNameOverride = { "EndNodePathNameOverride", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreatePath, EndNodePathNameOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndNodePathNameOverride_MetaData), NewProp_EndNodePathNameOverride_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_NumParallelSearches = { "NumParallelSearches", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreatePath, NumParallelSearches), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumParallelSearches_MetaData), NewProp_NumParallelSearches_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_MaxFramesToProcess = { "MaxFramesToProcess", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskCreatePath, MaxFramesToProcess), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxFramesToProcess_MetaData), NewProp_MaxFramesToProcess_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_MinPathSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_MaxPathSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_PathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_NodeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_StartFromPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_EndOnPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_bEnterThroughTeleporter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_TeleporterMarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_StartNodePathNameOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_EndNodePathNameOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_NumParallelSearches,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::NewProp_MaxFramesToProcess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTaskPathBuilderBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::ClassParams = {
	&UBaseFlowLayoutTaskCreatePath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath()
{
	if (!Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreatePath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreatePath.OuterSingleton, Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreatePath.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UBaseFlowLayoutTaskCreatePath>()
{
	return UBaseFlowLayoutTaskCreatePath::StaticClass();
}
UBaseFlowLayoutTaskCreatePath::UBaseFlowLayoutTaskCreatePath(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFlowLayoutTaskCreatePath);
UBaseFlowLayoutTaskCreatePath::~UBaseFlowLayoutTaskCreatePath() {}
// End Class UBaseFlowLayoutTaskCreatePath

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskCreatePath_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFlowLayoutTaskCreatePath, UBaseFlowLayoutTaskCreatePath::StaticClass, TEXT("UBaseFlowLayoutTaskCreatePath"), &Z_Registration_Info_UClass_UBaseFlowLayoutTaskCreatePath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFlowLayoutTaskCreatePath), 392226297U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskCreatePath_h_1462330867(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskCreatePath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskCreatePath_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
