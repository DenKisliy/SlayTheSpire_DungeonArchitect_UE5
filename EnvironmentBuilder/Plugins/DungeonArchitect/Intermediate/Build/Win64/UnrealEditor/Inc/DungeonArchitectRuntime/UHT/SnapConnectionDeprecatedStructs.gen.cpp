// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Connection/Deprecated/SnapConnectionDeprecatedStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapConnectionDeprecatedStructs() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FSnapConnectionVisualMeshInfo_DEPRECATED
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapConnectionVisualMeshInfo_DEPRECATED;
class UScriptStruct* FSnapConnectionVisualMeshInfo_DEPRECATED::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapConnectionVisualMeshInfo_DEPRECATED.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapConnectionVisualMeshInfo_DEPRECATED.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapConnectionVisualMeshInfo_DEPRECATED"));
	}
	return Z_Registration_Info_UScriptStruct_SnapConnectionVisualMeshInfo_DEPRECATED.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapConnectionVisualMeshInfo_DEPRECATED>()
{
	return FSnapConnectionVisualMeshInfo_DEPRECATED::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/Deprecated/SnapConnectionDeprecatedStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/Deprecated/SnapConnectionDeprecatedStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/Deprecated/SnapConnectionDeprecatedStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/Deprecated/SnapConnectionDeprecatedStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialOverride;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapConnectionVisualMeshInfo_DEPRECATED>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionVisualMeshInfo_DEPRECATED, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED_Statics::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionVisualMeshInfo_DEPRECATED, MaterialOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOverride_MetaData), NewProp_MaterialOverride_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionVisualMeshInfo_DEPRECATED, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED_Statics::NewProp_MaterialOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SnapConnectionVisualMeshInfo_DEPRECATED",
	Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED_Statics::PropPointers),
	sizeof(FSnapConnectionVisualMeshInfo_DEPRECATED),
	alignof(FSnapConnectionVisualMeshInfo_DEPRECATED),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED()
{
	if (!Z_Registration_Info_UScriptStruct_SnapConnectionVisualMeshInfo_DEPRECATED.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapConnectionVisualMeshInfo_DEPRECATED.InnerSingleton, Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SnapConnectionVisualMeshInfo_DEPRECATED.InnerSingleton;
}
// End ScriptStruct FSnapConnectionVisualMeshInfo_DEPRECATED

// Begin ScriptStruct FSnapConnectionVisualBlueprintInfo_DEPRECATED
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapConnectionVisualBlueprintInfo_DEPRECATED;
class UScriptStruct* FSnapConnectionVisualBlueprintInfo_DEPRECATED::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapConnectionVisualBlueprintInfo_DEPRECATED.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapConnectionVisualBlueprintInfo_DEPRECATED.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapConnectionVisualBlueprintInfo_DEPRECATED"));
	}
	return Z_Registration_Info_UScriptStruct_SnapConnectionVisualBlueprintInfo_DEPRECATED.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapConnectionVisualBlueprintInfo_DEPRECATED>()
{
	return FSnapConnectionVisualBlueprintInfo_DEPRECATED::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/Deprecated/SnapConnectionDeprecatedStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintClass_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/Deprecated/SnapConnectionDeprecatedStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/Deprecated/SnapConnectionDeprecatedStructs.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BlueprintClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapConnectionVisualBlueprintInfo_DEPRECATED>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED_Statics::NewProp_BlueprintClass = { "BlueprintClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionVisualBlueprintInfo_DEPRECATED, BlueprintClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintClass_MetaData), NewProp_BlueprintClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionVisualBlueprintInfo_DEPRECATED, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED_Statics::NewProp_BlueprintClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SnapConnectionVisualBlueprintInfo_DEPRECATED",
	Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED_Statics::PropPointers),
	sizeof(FSnapConnectionVisualBlueprintInfo_DEPRECATED),
	alignof(FSnapConnectionVisualBlueprintInfo_DEPRECATED),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED()
{
	if (!Z_Registration_Info_UScriptStruct_SnapConnectionVisualBlueprintInfo_DEPRECATED.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapConnectionVisualBlueprintInfo_DEPRECATED.InnerSingleton, Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SnapConnectionVisualBlueprintInfo_DEPRECATED.InnerSingleton;
}
// End ScriptStruct FSnapConnectionVisualBlueprintInfo_DEPRECATED

// Begin ScriptStruct FSnapConnectionVisualInfo_DEPRECATED
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapConnectionVisualInfo_DEPRECATED;
class UScriptStruct* FSnapConnectionVisualInfo_DEPRECATED::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapConnectionVisualInfo_DEPRECATED.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapConnectionVisualInfo_DEPRECATED.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapConnectionVisualInfo_DEPRECATED"));
	}
	return Z_Registration_Info_UScriptStruct_SnapConnectionVisualInfo_DEPRECATED.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapConnectionVisualInfo_DEPRECATED>()
{
	return FSnapConnectionVisualInfo_DEPRECATED::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/Deprecated/SnapConnectionDeprecatedStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStaticMesh_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/Deprecated/SnapConnectionDeprecatedStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshInfo_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/Deprecated/SnapConnectionDeprecatedStructs.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintInfo_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/Deprecated/SnapConnectionDeprecatedStructs.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bStaticMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlueprintInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapConnectionVisualInfo_DEPRECATED>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::NewProp_bStaticMesh_SetBit(void* Obj)
{
	((FSnapConnectionVisualInfo_DEPRECATED*)Obj)->bStaticMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::NewProp_bStaticMesh = { "bStaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSnapConnectionVisualInfo_DEPRECATED), &Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::NewProp_bStaticMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStaticMesh_MetaData), NewProp_bStaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::NewProp_MeshInfo = { "MeshInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionVisualInfo_DEPRECATED, MeshInfo), Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshInfo_MetaData), NewProp_MeshInfo_MetaData) }; // 4273904274
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::NewProp_BlueprintInfo = { "BlueprintInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionVisualInfo_DEPRECATED, BlueprintInfo), Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintInfo_MetaData), NewProp_BlueprintInfo_MetaData) }; // 2205536216
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::NewProp_bStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::NewProp_MeshInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::NewProp_BlueprintInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SnapConnectionVisualInfo_DEPRECATED",
	Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::PropPointers),
	sizeof(FSnapConnectionVisualInfo_DEPRECATED),
	alignof(FSnapConnectionVisualInfo_DEPRECATED),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED()
{
	if (!Z_Registration_Info_UScriptStruct_SnapConnectionVisualInfo_DEPRECATED.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapConnectionVisualInfo_DEPRECATED.InnerSingleton, Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SnapConnectionVisualInfo_DEPRECATED.InnerSingleton;
}
// End ScriptStruct FSnapConnectionVisualInfo_DEPRECATED

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_Deprecated_SnapConnectionDeprecatedStructs_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSnapConnectionVisualMeshInfo_DEPRECATED::StaticStruct, Z_Construct_UScriptStruct_FSnapConnectionVisualMeshInfo_DEPRECATED_Statics::NewStructOps, TEXT("SnapConnectionVisualMeshInfo_DEPRECATED"), &Z_Registration_Info_UScriptStruct_SnapConnectionVisualMeshInfo_DEPRECATED, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapConnectionVisualMeshInfo_DEPRECATED), 4273904274U) },
		{ FSnapConnectionVisualBlueprintInfo_DEPRECATED::StaticStruct, Z_Construct_UScriptStruct_FSnapConnectionVisualBlueprintInfo_DEPRECATED_Statics::NewStructOps, TEXT("SnapConnectionVisualBlueprintInfo_DEPRECATED"), &Z_Registration_Info_UScriptStruct_SnapConnectionVisualBlueprintInfo_DEPRECATED, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapConnectionVisualBlueprintInfo_DEPRECATED), 2205536216U) },
		{ FSnapConnectionVisualInfo_DEPRECATED::StaticStruct, Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED_Statics::NewStructOps, TEXT("SnapConnectionVisualInfo_DEPRECATED"), &Z_Registration_Info_UScriptStruct_SnapConnectionVisualInfo_DEPRECATED, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapConnectionVisualInfo_DEPRECATED), 3521610491U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_Deprecated_SnapConnectionDeprecatedStructs_h_3877441544(TEXT("/Script/DungeonArchitectRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_Deprecated_SnapConnectionDeprecatedStructs_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_Deprecated_SnapConnectionDeprecatedStructs_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
