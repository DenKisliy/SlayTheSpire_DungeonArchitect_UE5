// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskPathBuilderBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFlowLayoutTaskPathBuilderBase() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTask();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskPathBuilderBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskPathBuilderBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UBaseFlowLayoutTaskPathBuilderBase
void UBaseFlowLayoutTaskPathBuilderBase::StaticRegisterNativesUBaseFlowLayoutTaskPathBuilderBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFlowLayoutTaskPathBuilderBase);
UClass* Z_Construct_UClass_UBaseFlowLayoutTaskPathBuilderBase_NoRegister()
{
	return UBaseFlowLayoutTaskPathBuilderBase::StaticClass();
}
struct Z_Construct_UClass_UBaseFlowLayoutTaskPathBuilderBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskPathBuilderBase.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskPathBuilderBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFlowLayoutTaskPathBuilderBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseFlowLayoutTaskPathBuilderBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTask,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskPathBuilderBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFlowLayoutTaskPathBuilderBase_Statics::ClassParams = {
	&UBaseFlowLayoutTaskPathBuilderBase::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskPathBuilderBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseFlowLayoutTaskPathBuilderBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseFlowLayoutTaskPathBuilderBase()
{
	if (!Z_Registration_Info_UClass_UBaseFlowLayoutTaskPathBuilderBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFlowLayoutTaskPathBuilderBase.OuterSingleton, Z_Construct_UClass_UBaseFlowLayoutTaskPathBuilderBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseFlowLayoutTaskPathBuilderBase.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UBaseFlowLayoutTaskPathBuilderBase>()
{
	return UBaseFlowLayoutTaskPathBuilderBase::StaticClass();
}
UBaseFlowLayoutTaskPathBuilderBase::UBaseFlowLayoutTaskPathBuilderBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFlowLayoutTaskPathBuilderBase);
UBaseFlowLayoutTaskPathBuilderBase::~UBaseFlowLayoutTaskPathBuilderBase() {}
// End Class UBaseFlowLayoutTaskPathBuilderBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskPathBuilderBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFlowLayoutTaskPathBuilderBase, UBaseFlowLayoutTaskPathBuilderBase::StaticClass, TEXT("UBaseFlowLayoutTaskPathBuilderBase"), &Z_Registration_Info_UClass_UBaseFlowLayoutTaskPathBuilderBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFlowLayoutTaskPathBuilderBase), 2584635164U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskPathBuilderBase_h_2227897982(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskPathBuilderBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskPathBuilderBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
