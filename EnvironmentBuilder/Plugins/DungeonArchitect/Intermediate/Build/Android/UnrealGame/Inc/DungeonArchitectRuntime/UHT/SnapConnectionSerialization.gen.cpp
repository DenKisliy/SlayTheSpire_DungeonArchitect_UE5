// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapConnectionSerialization() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapConnectionInfo_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionDoorType();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionInstance();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapWallInstance();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FSnapConnectionInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapConnectionInstance;
class UScriptStruct* FSnapConnectionInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapConnectionInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapConnectionInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapConnectionInstance, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapConnectionInstance"));
	}
	return Z_Registration_Info_UScriptStruct_SnapConnectionInstance.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapConnectionInstance>()
{
	return FSnapConnectionInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleA_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorA_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleB_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorB_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomMarkerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasSpawnedDoorActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnedDoorActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorB;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DoorType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DoorType;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ConnectionInfo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CustomMarkerName;
	static void NewProp_bHasSpawnedDoorActor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSpawnedDoorActor;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SpawnedDoorActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnedDoorActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapConnectionInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_ModuleA = { "ModuleA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionInstance, ModuleA), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleA_MetaData), NewProp_ModuleA_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorA = { "DoorA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionInstance, DoorA), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorA_MetaData), NewProp_DoorA_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_ModuleB = { "ModuleB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionInstance, ModuleB), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleB_MetaData), NewProp_ModuleB_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorB = { "DoorB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionInstance, DoorB), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorB_MetaData), NewProp_DoorB_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionInstance, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldTransform_MetaData), NewProp_WorldTransform_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorType = { "DoorType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionInstance, DoorType), Z_Construct_UEnum_DungeonArchitectRuntime_ESnapConnectionDoorType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorType_MetaData), NewProp_DoorType_MetaData) }; // 2455123322
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_ConnectionInfo = { "ConnectionInfo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionInstance, ConnectionInfo), Z_Construct_UClass_USnapConnectionInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionInfo_MetaData), NewProp_ConnectionInfo_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_CustomMarkerName = { "CustomMarkerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionInstance, CustomMarkerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomMarkerName_MetaData), NewProp_CustomMarkerName_MetaData) };
void Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_bHasSpawnedDoorActor_SetBit(void* Obj)
{
	((FSnapConnectionInstance*)Obj)->bHasSpawnedDoorActor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_bHasSpawnedDoorActor = { "bHasSpawnedDoorActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSnapConnectionInstance), &Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_bHasSpawnedDoorActor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasSpawnedDoorActor_MetaData), NewProp_bHasSpawnedDoorActor_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_SpawnedDoorActors_Inner = { "SpawnedDoorActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_SpawnedDoorActors = { "SpawnedDoorActors", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionInstance, SpawnedDoorActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnedDoorActors_MetaData), NewProp_SpawnedDoorActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_ModuleA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_ModuleB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_WorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_DoorType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_ConnectionInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_CustomMarkerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_bHasSpawnedDoorActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_SpawnedDoorActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewProp_SpawnedDoorActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SnapConnectionInstance",
	Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::PropPointers),
	sizeof(FSnapConnectionInstance),
	alignof(FSnapConnectionInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionInstance()
{
	if (!Z_Registration_Info_UScriptStruct_SnapConnectionInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapConnectionInstance.InnerSingleton, Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SnapConnectionInstance.InnerSingleton;
}
// End ScriptStruct FSnapConnectionInstance

// Begin ScriptStruct FSnapWallInstance
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapWallInstance;
class UScriptStruct* FSnapWallInstance::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapWallInstance.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapWallInstance.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapWallInstance, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapWallInstance"));
	}
	return Z_Registration_Info_UScriptStruct_SnapWallInstance.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapWallInstance>()
{
	return FSnapWallInstance::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSnapWallInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ConnectionInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapWallInstance>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapWallInstance_Statics::NewProp_ModuleId = { "ModuleId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapWallInstance, ModuleId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleId_MetaData), NewProp_ModuleId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapWallInstance_Statics::NewProp_DoorId = { "DoorId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapWallInstance, DoorId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorId_MetaData), NewProp_DoorId_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapWallInstance_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapWallInstance, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldTransform_MetaData), NewProp_WorldTransform_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSnapWallInstance_Statics::NewProp_ConnectionInfo = { "ConnectionInfo", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapWallInstance, ConnectionInfo), Z_Construct_UClass_USnapConnectionInfo_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionInfo_MetaData), NewProp_ConnectionInfo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapWallInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapWallInstance_Statics::NewProp_ModuleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapWallInstance_Statics::NewProp_DoorId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapWallInstance_Statics::NewProp_WorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapWallInstance_Statics::NewProp_ConnectionInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapWallInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapWallInstance_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SnapWallInstance",
	Z_Construct_UScriptStruct_FSnapWallInstance_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapWallInstance_Statics::PropPointers),
	sizeof(FSnapWallInstance),
	alignof(FSnapWallInstance),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapWallInstance_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSnapWallInstance_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSnapWallInstance()
{
	if (!Z_Registration_Info_UScriptStruct_SnapWallInstance.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapWallInstance.InnerSingleton, Z_Construct_UScriptStruct_FSnapWallInstance_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SnapWallInstance.InnerSingleton;
}
// End ScriptStruct FSnapWallInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_SnapConnectionSerialization_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSnapConnectionInstance::StaticStruct, Z_Construct_UScriptStruct_FSnapConnectionInstance_Statics::NewStructOps, TEXT("SnapConnectionInstance"), &Z_Registration_Info_UScriptStruct_SnapConnectionInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapConnectionInstance), 547724640U) },
		{ FSnapWallInstance::StaticStruct, Z_Construct_UScriptStruct_FSnapWallInstance_Statics::NewStructOps, TEXT("SnapWallInstance"), &Z_Registration_Info_UScriptStruct_SnapWallInstance, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapWallInstance), 1021728818U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_SnapConnectionSerialization_h_2736092336(TEXT("/Script/DungeonArchitectRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_SnapConnectionSerialization_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Serialization_SnapConnectionSerialization_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
