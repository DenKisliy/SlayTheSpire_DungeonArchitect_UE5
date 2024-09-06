// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskFinalize.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFlowLayoutTaskFinalize() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTask();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskFinalize();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UBaseFlowLayoutTaskFinalize
void UBaseFlowLayoutTaskFinalize::StaticRegisterNativesUBaseFlowLayoutTaskFinalize()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFlowLayoutTaskFinalize);
UClass* Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_NoRegister()
{
	return UBaseFlowLayoutTaskFinalize::StaticClass();
}
struct Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskFinalize.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskFinalize.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OneWayDoorPromotionWeight_MetaData[] = {
		{ "Category", "Finalize Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n        Some of the links will be converted to one way links, to avoid the player walking around locked doors.\n        Adjust this weight to modify the one-way door promotion criteria\n\n        Variable Name: OneWayDoorPromotionWeight\n    */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskFinalize.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Some of the links will be converted to one way links, to avoid the player walking around locked doors.\nAdjust this weight to modify the one-way door promotion criteria\n\nVariable Name: OneWayDoorPromotionWeight" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDebugData_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Frameworks/Flow/Domains/LayoutGraph/Tasks/BaseFlowLayoutTaskFinalize.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OneWayDoorPromotionWeight;
	static void NewProp_bShowDebugData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDebugData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFlowLayoutTaskFinalize>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_OneWayDoorPromotionWeight = { "OneWayDoorPromotionWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseFlowLayoutTaskFinalize, OneWayDoorPromotionWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OneWayDoorPromotionWeight_MetaData), NewProp_OneWayDoorPromotionWeight_MetaData) };
void Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_bShowDebugData_SetBit(void* Obj)
{
	((UBaseFlowLayoutTaskFinalize*)Obj)->bShowDebugData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_bShowDebugData = { "bShowDebugData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBaseFlowLayoutTaskFinalize), &Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_bShowDebugData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDebugData_MetaData), NewProp_bShowDebugData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_OneWayDoorPromotionWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::NewProp_bShowDebugData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseFlowLayoutTask,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::ClassParams = {
	&UBaseFlowLayoutTaskFinalize::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseFlowLayoutTaskFinalize()
{
	if (!Z_Registration_Info_UClass_UBaseFlowLayoutTaskFinalize.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFlowLayoutTaskFinalize.OuterSingleton, Z_Construct_UClass_UBaseFlowLayoutTaskFinalize_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseFlowLayoutTaskFinalize.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UBaseFlowLayoutTaskFinalize>()
{
	return UBaseFlowLayoutTaskFinalize::StaticClass();
}
UBaseFlowLayoutTaskFinalize::UBaseFlowLayoutTaskFinalize(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFlowLayoutTaskFinalize);
UBaseFlowLayoutTaskFinalize::~UBaseFlowLayoutTaskFinalize() {}
// End Class UBaseFlowLayoutTaskFinalize

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskFinalize_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFlowLayoutTaskFinalize, UBaseFlowLayoutTaskFinalize::StaticClass, TEXT("UBaseFlowLayoutTaskFinalize"), &Z_Registration_Info_UClass_UBaseFlowLayoutTaskFinalize, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFlowLayoutTaskFinalize), 144125570U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskFinalize_h_728105635(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskFinalize_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Flow_Domains_LayoutGraph_Tasks_BaseFlowLayoutTaskFinalize_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
