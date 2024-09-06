// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Actors/DungeonMesh.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonMesh() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonMesh();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonMesh_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialOverride();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FMaterialOverride
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialOverride;
class UScriptStruct* FMaterialOverride::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialOverride.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialOverride.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialOverride, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("MaterialOverride"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialOverride.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FMaterialOverride>()
{
	return FMaterialOverride::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialOverride>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialOverride, index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_index_MetaData), NewProp_index_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialOverride, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewProp_index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialOverride_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"MaterialOverride",
	Z_Construct_UScriptStruct_FMaterialOverride_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOverride_Statics::PropPointers),
	sizeof(FMaterialOverride),
	alignof(FMaterialOverride),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialOverride_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialOverride_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialOverride()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialOverride.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialOverride.InnerSingleton, Z_Construct_UScriptStruct_FMaterialOverride_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialOverride.InnerSingleton;
}
// End ScriptStruct FMaterialOverride

// Begin Class UDungeonMesh
void UDungeonMesh::StaticRegisterNativesUDungeonMesh()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonMesh);
UClass* Z_Construct_UClass_UDungeonMesh_NoRegister()
{
	return UDungeonMesh::StaticClass();
}
struct Z_Construct_UClass_UDungeonMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Actors/DungeonMesh.h" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverrides_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HashCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomCollision_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Actors/DungeonMesh.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialOverrides_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialOverrides;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_HashCode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
	static void NewProp_bUseCustomCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Template;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonMesh_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonMesh, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonMesh_Statics::NewProp_MaterialOverrides_Inner = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialOverride, METADATA_PARAMS(0, nullptr) }; // 657831865
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonMesh_Statics::NewProp_MaterialOverrides = { "MaterialOverrides", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonMesh, MaterialOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialOverrides_MetaData), NewProp_MaterialOverrides_MetaData) }; // 657831865
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDungeonMesh_Statics::NewProp_HashCode = { "HashCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonMesh, HashCode), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HashCode_MetaData), NewProp_HashCode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDungeonMesh_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonMesh, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyInstance_MetaData), NewProp_BodyInstance_MetaData) }; // 3706165537
void Z_Construct_UClass_UDungeonMesh_Statics::NewProp_bUseCustomCollision_SetBit(void* Obj)
{
	((UDungeonMesh*)Obj)->bUseCustomCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonMesh_Statics::NewProp_bUseCustomCollision = { "bUseCustomCollision", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonMesh), &Z_Construct_UClass_UDungeonMesh_Statics::NewProp_bUseCustomCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomCollision_MetaData), NewProp_bUseCustomCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonMesh_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonMesh, Template), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Template_MetaData), NewProp_Template_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMesh_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMesh_Statics::NewProp_MaterialOverrides_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMesh_Statics::NewProp_MaterialOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMesh_Statics::NewProp_HashCode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMesh_Statics::NewProp_BodyInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMesh_Statics::NewProp_bUseCustomCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonMesh_Statics::NewProp_Template,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonMesh_Statics::ClassParams = {
	&UDungeonMesh::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonMesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMesh_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonMesh()
{
	if (!Z_Registration_Info_UClass_UDungeonMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonMesh.OuterSingleton, Z_Construct_UClass_UDungeonMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonMesh.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonMesh>()
{
	return UDungeonMesh::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonMesh);
UDungeonMesh::~UDungeonMesh() {}
// End Class UDungeonMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMesh_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMaterialOverride::StaticStruct, Z_Construct_UScriptStruct_FMaterialOverride_Statics::NewStructOps, TEXT("MaterialOverride"), &Z_Registration_Info_UScriptStruct_MaterialOverride, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialOverride), 657831865U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonMesh, UDungeonMesh::StaticClass, TEXT("UDungeonMesh"), &Z_Registration_Info_UClass_UDungeonMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonMesh), 736590460U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMesh_h_2914634430(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMesh_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Actors_DungeonMesh_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
