// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Private/Frameworks/FlowImpl/CellFlow/Lib/Meshing/CellFlowChunkMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCellFlowChunkMeshActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ACellFlowChunkMesh();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ACellFlowChunkMesh_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDAProcMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class ACellFlowChunkMesh
void ACellFlowChunkMesh::StaticRegisterNativesACellFlowChunkMesh()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACellFlowChunkMesh);
UClass* Z_Construct_UClass_ACellFlowChunkMesh_NoRegister()
{
	return ACellFlowChunkMesh::StaticClass();
}
struct Z_Construct_UClass_ACellFlowChunkMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/FlowImpl/CellFlow/Lib/Meshing/CellFlowChunkMeshActor.h" },
		{ "ModuleRelativePath", "Private/Frameworks/FlowImpl/CellFlow/Lib/Meshing/CellFlowChunkMeshActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonID_MetaData[] = {
		{ "ModuleRelativePath", "Private/Frameworks/FlowImpl/CellFlow/Lib/Meshing/CellFlowChunkMeshActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Frameworks/FlowImpl/CellFlow/Lib/Meshing/CellFlowChunkMeshActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DungeonID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACellFlowChunkMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACellFlowChunkMesh_Statics::NewProp_DungeonID = { "DungeonID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellFlowChunkMesh, DungeonID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonID_MetaData), NewProp_DungeonID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACellFlowChunkMesh_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACellFlowChunkMesh, MeshComponent), Z_Construct_UClass_UDAProcMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACellFlowChunkMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellFlowChunkMesh_Statics::NewProp_DungeonID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACellFlowChunkMesh_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACellFlowChunkMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACellFlowChunkMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACellFlowChunkMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACellFlowChunkMesh_Statics::ClassParams = {
	&ACellFlowChunkMesh::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACellFlowChunkMesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACellFlowChunkMesh_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACellFlowChunkMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_ACellFlowChunkMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACellFlowChunkMesh()
{
	if (!Z_Registration_Info_UClass_ACellFlowChunkMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACellFlowChunkMesh.OuterSingleton, Z_Construct_UClass_ACellFlowChunkMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACellFlowChunkMesh.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ACellFlowChunkMesh>()
{
	return ACellFlowChunkMesh::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACellFlowChunkMesh);
ACellFlowChunkMesh::~ACellFlowChunkMesh() {}
// End Class ACellFlowChunkMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Private_Frameworks_FlowImpl_CellFlow_Lib_Meshing_CellFlowChunkMeshActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACellFlowChunkMesh, ACellFlowChunkMesh::StaticClass, TEXT("ACellFlowChunkMesh"), &Z_Registration_Info_UClass_ACellFlowChunkMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACellFlowChunkMesh), 3425330552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Private_Frameworks_FlowImpl_CellFlow_Lib_Meshing_CellFlowChunkMeshActor_h_498230118(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Private_Frameworks_FlowImpl_CellFlow_Lib_Meshing_CellFlowChunkMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Private_Frameworks_FlowImpl_CellFlow_Lib_Meshing_CellFlowChunkMeshActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
