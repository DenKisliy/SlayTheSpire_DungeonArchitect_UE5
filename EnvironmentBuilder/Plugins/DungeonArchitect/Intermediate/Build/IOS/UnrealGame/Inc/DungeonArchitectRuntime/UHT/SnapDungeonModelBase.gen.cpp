// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/SnapDungeonModelBase.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Serialization/SnapConnectionSerialization.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Serialization/SnapModuleInstanceSerialization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapDungeonModelBase() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonModel();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapDungeonModelBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapDungeonModelBase_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionInstance();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapWallInstance();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapDungeonModelBase
void USnapDungeonModelBase::StaticRegisterNativesUSnapDungeonModelBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapDungeonModelBase);
UClass* Z_Construct_UClass_USnapDungeonModelBase_NoRegister()
{
	return USnapDungeonModelBase::StaticClass();
}
struct Z_Construct_UClass_USnapDungeonModelBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/Snap/Lib/SnapDungeonModelBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/SnapDungeonModelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Connections_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/SnapDungeonModelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Walls_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/SnapDungeonModelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleInstances_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/SnapDungeonModelBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Connections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Connections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Walls_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Walls;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ModuleInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapDungeonModelBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapDungeonModelBase_Statics::NewProp_Connections_Inner = { "Connections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSnapConnectionInstance, METADATA_PARAMS(0, nullptr) }; // 547724640
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapDungeonModelBase_Statics::NewProp_Connections = { "Connections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapDungeonModelBase, Connections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Connections_MetaData), NewProp_Connections_MetaData) }; // 547724640
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapDungeonModelBase_Statics::NewProp_Walls_Inner = { "Walls", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSnapWallInstance, METADATA_PARAMS(0, nullptr) }; // 1021728818
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapDungeonModelBase_Statics::NewProp_Walls = { "Walls", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapDungeonModelBase, Walls), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Walls_MetaData), NewProp_Walls_MetaData) }; // 1021728818
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapDungeonModelBase_Statics::NewProp_ModuleInstances_Inner = { "ModuleInstances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSnapModuleInstanceSerializedData, METADATA_PARAMS(0, nullptr) }; // 2436367469
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USnapDungeonModelBase_Statics::NewProp_ModuleInstances = { "ModuleInstances", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapDungeonModelBase, ModuleInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleInstances_MetaData), NewProp_ModuleInstances_MetaData) }; // 2436367469
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapDungeonModelBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapDungeonModelBase_Statics::NewProp_Connections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapDungeonModelBase_Statics::NewProp_Connections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapDungeonModelBase_Statics::NewProp_Walls_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapDungeonModelBase_Statics::NewProp_Walls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapDungeonModelBase_Statics::NewProp_ModuleInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapDungeonModelBase_Statics::NewProp_ModuleInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapDungeonModelBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapDungeonModelBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonModel,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapDungeonModelBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapDungeonModelBase_Statics::ClassParams = {
	&USnapDungeonModelBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapDungeonModelBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapDungeonModelBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapDungeonModelBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapDungeonModelBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapDungeonModelBase()
{
	if (!Z_Registration_Info_UClass_USnapDungeonModelBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapDungeonModelBase.OuterSingleton, Z_Construct_UClass_USnapDungeonModelBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapDungeonModelBase.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapDungeonModelBase>()
{
	return USnapDungeonModelBase::StaticClass();
}
USnapDungeonModelBase::USnapDungeonModelBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapDungeonModelBase);
USnapDungeonModelBase::~USnapDungeonModelBase() {}
// End Class USnapDungeonModelBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_SnapDungeonModelBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapDungeonModelBase, USnapDungeonModelBase::StaticClass, TEXT("USnapDungeonModelBase"), &Z_Registration_Info_UClass_USnapDungeonModelBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapDungeonModelBase), 1266638267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_SnapDungeonModelBase_h_3661118636(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_SnapDungeonModelBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_SnapDungeonModelBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
