// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/DungeonProp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonProp() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSelectorLogic_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpatialConstraint_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpawnLogic_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonTransformLogic_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UProceduralDungeonTransformLogic_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDAMarkerInfo();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPropChildSocketData();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPropTypeData();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FDAMarkerInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DAMarkerInfo;
class UScriptStruct* FDAMarkerInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DAMarkerInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DAMarkerInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDAMarkerInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DAMarkerInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DAMarkerInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDAMarkerInfo>()
{
	return FDAMarkerInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDAMarkerInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "DungeonMarker" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerName_MetaData[] = {
		{ "Category", "DungeonMarker" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClusterThemeOverride_MetaData[] = {
		{ "Category", "DungeonMarker" },
		{ "Comment", "/** The name of the clustered theme to override on this marker */" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
		{ "ToolTip", "The name of the clustered theme to override on this marker" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "Category", "DungeonMarker" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ClusterThemeOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDAMarkerInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAMarkerInfo, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_MarkerName = { "MarkerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAMarkerInfo, MarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerName_MetaData), NewProp_MarkerName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_ClusterThemeOverride = { "ClusterThemeOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAMarkerInfo, ClusterThemeOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClusterThemeOverride_MetaData), NewProp_ClusterThemeOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDAMarkerInfo, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_MarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_ClusterThemeOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewProp_Transform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DAMarkerInfo",
	Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::PropPointers),
	sizeof(FDAMarkerInfo),
	alignof(FDAMarkerInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDAMarkerInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DAMarkerInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DAMarkerInfo.InnerSingleton, Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DAMarkerInfo.InnerSingleton;
}
// End ScriptStruct FDAMarkerInfo

// Begin ScriptStruct FPropChildSocketData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropChildSocketData;
class UScriptStruct* FPropChildSocketData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropChildSocketData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropChildSocketData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropChildSocketData, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("PropChildSocketData"));
	}
	return Z_Registration_Info_UScriptStruct_PropChildSocketData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FPropChildSocketData>()
{
	return FPropChildSocketData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPropChildSocketData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Props can emit new sockets when they are inserted, to add more child props relative to them */" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
		{ "ToolTip", "Props can emit new sockets when they are inserted, to add more child props relative to them" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketType_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SocketType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropChildSocketData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewProp_SocketType = { "SocketType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropChildSocketData, SocketType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketType_MetaData), NewProp_SocketType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropChildSocketData, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropChildSocketData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewProp_SocketType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropChildSocketData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropChildSocketData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"PropChildSocketData",
	Z_Construct_UScriptStruct_FPropChildSocketData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropChildSocketData_Statics::PropPointers),
	sizeof(FPropChildSocketData),
	alignof(FPropChildSocketData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropChildSocketData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropChildSocketData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropChildSocketData()
{
	if (!Z_Registration_Info_UScriptStruct_PropChildSocketData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropChildSocketData.InnerSingleton, Z_Construct_UScriptStruct_FPropChildSocketData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PropChildSocketData.InnerSingleton;
}
// End ScriptStruct FPropChildSocketData

// Begin ScriptStruct FPropTypeData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PropTypeData;
class UScriptStruct* FPropTypeData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PropTypeData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PropTypeData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPropTypeData, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("PropTypeData"));
	}
	return Z_Registration_Info_UScriptStruct_PropTypeData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FPropTypeData>()
{
	return FPropTypeData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPropTypeData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetObject_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachToSocket_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Probability_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSelectionLogic_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogicOverridesAffinity_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionLogics_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTransformLogic_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformLogics_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseProceduralTransformLogic_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralTransformLogics_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpawnLogic_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLogics_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumeOnAttach_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSpatialConstraint_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpatialConstraint_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildSockets_MetaData[] = {
		{ "Category", "DungeonProp" },
		{ "ModuleRelativePath", "Public/Core/DungeonProp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NodeId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttachToSocket;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Probability;
	static void NewProp_bUseSelectionLogic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSelectionLogic;
	static void NewProp_bLogicOverridesAffinity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogicOverridesAffinity;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectionLogics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectionLogics;
	static void NewProp_bUseTransformLogic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTransformLogic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformLogics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformLogics;
	static void NewProp_bUseProceduralTransformLogic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseProceduralTransformLogic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProceduralTransformLogics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ProceduralTransformLogics;
	static void NewProp_bUseSpawnLogic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpawnLogic;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnLogics_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnLogics;
	static void NewProp_ConsumeOnAttach_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ConsumeOnAttach;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static void NewProp_bUseSpatialConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSpatialConstraint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpatialConstraint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ChildSockets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildSockets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPropTypeData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_NodeId = { "NodeId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropTypeData, NodeId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeId_MetaData), NewProp_NodeId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_AssetObject = { "AssetObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropTypeData, AssetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetObject_MetaData), NewProp_AssetObject_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_AttachToSocket = { "AttachToSocket", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropTypeData, AttachToSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachToSocket_MetaData), NewProp_AttachToSocket_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_Probability = { "Probability", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropTypeData, Probability), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Probability_MetaData), NewProp_Probability_MetaData) };
void Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSelectionLogic_SetBit(void* Obj)
{
	((FPropTypeData*)Obj)->bUseSelectionLogic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSelectionLogic = { "bUseSelectionLogic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPropTypeData), &Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSelectionLogic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSelectionLogic_MetaData), NewProp_bUseSelectionLogic_MetaData) };
void Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bLogicOverridesAffinity_SetBit(void* Obj)
{
	((FPropTypeData*)Obj)->bLogicOverridesAffinity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bLogicOverridesAffinity = { "bLogicOverridesAffinity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPropTypeData), &Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bLogicOverridesAffinity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogicOverridesAffinity_MetaData), NewProp_bLogicOverridesAffinity_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SelectionLogics_Inner = { "SelectionLogics", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonSelectorLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SelectionLogics = { "SelectionLogics", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropTypeData, SelectionLogics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionLogics_MetaData), NewProp_SelectionLogics_MetaData) };
void Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseTransformLogic_SetBit(void* Obj)
{
	((FPropTypeData*)Obj)->bUseTransformLogic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseTransformLogic = { "bUseTransformLogic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPropTypeData), &Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseTransformLogic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTransformLogic_MetaData), NewProp_bUseTransformLogic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_TransformLogics_Inner = { "TransformLogics", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonTransformLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_TransformLogics = { "TransformLogics", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropTypeData, TransformLogics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformLogics_MetaData), NewProp_TransformLogics_MetaData) };
void Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseProceduralTransformLogic_SetBit(void* Obj)
{
	((FPropTypeData*)Obj)->bUseProceduralTransformLogic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseProceduralTransformLogic = { "bUseProceduralTransformLogic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPropTypeData), &Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseProceduralTransformLogic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseProceduralTransformLogic_MetaData), NewProp_bUseProceduralTransformLogic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ProceduralTransformLogics_Inner = { "ProceduralTransformLogics", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UProceduralDungeonTransformLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ProceduralTransformLogics = { "ProceduralTransformLogics", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropTypeData, ProceduralTransformLogics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralTransformLogics_MetaData), NewProp_ProceduralTransformLogics_MetaData) };
void Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpawnLogic_SetBit(void* Obj)
{
	((FPropTypeData*)Obj)->bUseSpawnLogic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpawnLogic = { "bUseSpawnLogic", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPropTypeData), &Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpawnLogic_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSpawnLogic_MetaData), NewProp_bUseSpawnLogic_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpawnLogics_Inner = { "SpawnLogics", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonSpawnLogic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpawnLogics = { "SpawnLogics", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropTypeData, SpawnLogics), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLogics_MetaData), NewProp_SpawnLogics_MetaData) };
void Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ConsumeOnAttach_SetBit(void* Obj)
{
	((FPropTypeData*)Obj)->ConsumeOnAttach = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ConsumeOnAttach = { "ConsumeOnAttach", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPropTypeData), &Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ConsumeOnAttach_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumeOnAttach_MetaData), NewProp_ConsumeOnAttach_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropTypeData, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
void Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpatialConstraint_SetBit(void* Obj)
{
	((FPropTypeData*)Obj)->bUseSpatialConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpatialConstraint = { "bUseSpatialConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPropTypeData), &Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpatialConstraint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSpatialConstraint_MetaData), NewProp_bUseSpatialConstraint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpatialConstraint = { "SpatialConstraint", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropTypeData, SpatialConstraint), Z_Construct_UClass_UDungeonSpatialConstraint_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpatialConstraint_MetaData), NewProp_SpatialConstraint_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ChildSockets_Inner = { "ChildSockets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPropChildSocketData, METADATA_PARAMS(0, nullptr) }; // 1199853404
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ChildSockets = { "ChildSockets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPropTypeData, ChildSockets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildSockets_MetaData), NewProp_ChildSockets_MetaData) }; // 1199853404
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPropTypeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_NodeId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_AssetObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_AttachToSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_Probability,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSelectionLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bLogicOverridesAffinity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SelectionLogics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SelectionLogics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseTransformLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_TransformLogics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_TransformLogics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseProceduralTransformLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ProceduralTransformLogics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ProceduralTransformLogics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpawnLogic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpawnLogics_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpawnLogics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ConsumeOnAttach,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_bUseSpatialConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_SpatialConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ChildSockets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPropTypeData_Statics::NewProp_ChildSockets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPropTypeData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"PropTypeData",
	Z_Construct_UScriptStruct_FPropTypeData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::PropPointers),
	sizeof(FPropTypeData),
	alignof(FPropTypeData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPropTypeData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPropTypeData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPropTypeData()
{
	if (!Z_Registration_Info_UScriptStruct_PropTypeData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PropTypeData.InnerSingleton, Z_Construct_UScriptStruct_FPropTypeData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PropTypeData.InnerSingleton;
}
// End ScriptStruct FPropTypeData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonProp_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDAMarkerInfo::StaticStruct, Z_Construct_UScriptStruct_FDAMarkerInfo_Statics::NewStructOps, TEXT("DAMarkerInfo"), &Z_Registration_Info_UScriptStruct_DAMarkerInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDAMarkerInfo), 2488712063U) },
		{ FPropChildSocketData::StaticStruct, Z_Construct_UScriptStruct_FPropChildSocketData_Statics::NewStructOps, TEXT("PropChildSocketData"), &Z_Registration_Info_UScriptStruct_PropChildSocketData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropChildSocketData), 1199853404U) },
		{ FPropTypeData::StaticStruct, Z_Construct_UScriptStruct_FPropTypeData_Statics::NewStructOps, TEXT("PropTypeData"), &Z_Registration_Info_UScriptStruct_PropTypeData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPropTypeData), 2203011960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonProp_h_2188860878(TEXT("/Script/DungeonArchitectRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonProp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonProp_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
