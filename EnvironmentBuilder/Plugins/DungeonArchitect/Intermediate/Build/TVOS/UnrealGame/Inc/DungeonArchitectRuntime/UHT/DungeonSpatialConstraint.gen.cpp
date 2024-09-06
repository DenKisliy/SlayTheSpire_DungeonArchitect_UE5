// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/DungeonSpatialConstraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonSpatialConstraint() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpatialConstraint();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSpatialConstraint_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonSpatialConstraint
void UDungeonSpatialConstraint::StaticRegisterNativesUDungeonSpatialConstraint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonSpatialConstraint);
UClass* Z_Construct_UClass_UDungeonSpatialConstraint_NoRegister()
{
	return UDungeonSpatialConstraint::StaticClass();
}
struct Z_Construct_UClass_UDungeonSpatialConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/DungeonSpatialConstraint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/DungeonSpatialConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyBaseRotation_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Core/DungeonSpatialConstraint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateToFitConstraint_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Should the constraints be rotated to fit the spatial configuration? */" },
		{ "ModuleRelativePath", "Public/Core/DungeonSpatialConstraint.h" },
		{ "ToolTip", "Should the constraints be rotated to fit the spatial configuration?" },
	};
#endif // WITH_METADATA
	static void NewProp_bApplyBaseRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyBaseRotation;
	static void NewProp_bRotateToFitConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateToFitConstraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonSpatialConstraint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDungeonSpatialConstraint_Statics::NewProp_bApplyBaseRotation_SetBit(void* Obj)
{
	((UDungeonSpatialConstraint*)Obj)->bApplyBaseRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonSpatialConstraint_Statics::NewProp_bApplyBaseRotation = { "bApplyBaseRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonSpatialConstraint), &Z_Construct_UClass_UDungeonSpatialConstraint_Statics::NewProp_bApplyBaseRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyBaseRotation_MetaData), NewProp_bApplyBaseRotation_MetaData) };
void Z_Construct_UClass_UDungeonSpatialConstraint_Statics::NewProp_bRotateToFitConstraint_SetBit(void* Obj)
{
	((UDungeonSpatialConstraint*)Obj)->bRotateToFitConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonSpatialConstraint_Statics::NewProp_bRotateToFitConstraint = { "bRotateToFitConstraint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonSpatialConstraint), &Z_Construct_UClass_UDungeonSpatialConstraint_Statics::NewProp_bRotateToFitConstraint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateToFitConstraint_MetaData), NewProp_bRotateToFitConstraint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonSpatialConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonSpatialConstraint_Statics::NewProp_bApplyBaseRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonSpatialConstraint_Statics::NewProp_bRotateToFitConstraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSpatialConstraint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonSpatialConstraint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSpatialConstraint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonSpatialConstraint_Statics::ClassParams = {
	&UDungeonSpatialConstraint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonSpatialConstraint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSpatialConstraint_Statics::PropPointers),
	0,
	0x043010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonSpatialConstraint_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonSpatialConstraint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonSpatialConstraint()
{
	if (!Z_Registration_Info_UClass_UDungeonSpatialConstraint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonSpatialConstraint.OuterSingleton, Z_Construct_UClass_UDungeonSpatialConstraint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonSpatialConstraint.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonSpatialConstraint>()
{
	return UDungeonSpatialConstraint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonSpatialConstraint);
UDungeonSpatialConstraint::~UDungeonSpatialConstraint() {}
// End Class UDungeonSpatialConstraint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonSpatialConstraint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonSpatialConstraint, UDungeonSpatialConstraint::StaticClass, TEXT("UDungeonSpatialConstraint"), &Z_Registration_Info_UClass_UDungeonSpatialConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonSpatialConstraint), 1392542241U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonSpatialConstraint_h_886069483(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonSpatialConstraint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_DungeonSpatialConstraint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
