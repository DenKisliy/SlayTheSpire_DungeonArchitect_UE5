// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SnapMap/SnapMapDungeonToolData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapDungeonToolData() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonToolData();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonToolData();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapDungeonToolData_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapMapDungeonToolData
void USnapMapDungeonToolData::StaticRegisterNativesUSnapMapDungeonToolData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapDungeonToolData);
UClass* Z_Construct_UClass_USnapMapDungeonToolData_NoRegister()
{
	return USnapMapDungeonToolData::StaticClass();
}
struct Z_Construct_UClass_USnapMapDungeonToolData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Builders/SnapMap/SnapMapDungeonToolData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapDungeonToolData.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapDungeonToolData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapMapDungeonToolData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonToolData,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonToolData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapDungeonToolData_Statics::ClassParams = {
	&USnapMapDungeonToolData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapDungeonToolData_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapMapDungeonToolData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapMapDungeonToolData()
{
	if (!Z_Registration_Info_UClass_USnapMapDungeonToolData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapDungeonToolData.OuterSingleton, Z_Construct_UClass_USnapMapDungeonToolData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapMapDungeonToolData.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapMapDungeonToolData>()
{
	return USnapMapDungeonToolData::StaticClass();
}
USnapMapDungeonToolData::USnapMapDungeonToolData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapDungeonToolData);
USnapMapDungeonToolData::~USnapMapDungeonToolData() {}
// End Class USnapMapDungeonToolData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonToolData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapDungeonToolData, USnapMapDungeonToolData::StaticClass, TEXT("USnapMapDungeonToolData"), &Z_Registration_Info_UClass_USnapMapDungeonToolData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapDungeonToolData), 2637346912U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonToolData_h_3110039190(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonToolData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapDungeonToolData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
