// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Volumes/DungeonNegationVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonNegationVolume() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonNegationVolume();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonNegationVolume_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonVolume();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class ADungeonNegationVolume
void ADungeonNegationVolume::StaticRegisterNativesADungeonNegationVolume()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonNegationVolume);
UClass* Z_Construct_UClass_ADungeonNegationVolume_NoRegister()
{
	return ADungeonNegationVolume::StaticClass();
}
struct Z_Construct_UClass_ADungeonNegationVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*/" },
#endif
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Core/Volumes/DungeonNegationVolume.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonNegationVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reversed_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates if the negation should be reversed, i.e. everything outside this volume is negated */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonNegationVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates if the negation should be reversed, i.e. everything outside this volume is negated" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectsUserDefinedCells_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Indicates if the volume affects user defined cells (e.g. placed with platform volumes, paint tool etc) */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Volumes/DungeonNegationVolume.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates if the volume affects user defined cells (e.g. placed with platform volumes, paint tool etc)" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_Reversed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Reversed;
	static void NewProp_AffectsUserDefinedCells_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AffectsUserDefinedCells;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonNegationVolume>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_ADungeonNegationVolume_Statics::NewProp_Reversed_SetBit(void* Obj)
{
	((ADungeonNegationVolume*)Obj)->Reversed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonNegationVolume_Statics::NewProp_Reversed = { "Reversed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonNegationVolume), &Z_Construct_UClass_ADungeonNegationVolume_Statics::NewProp_Reversed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reversed_MetaData), NewProp_Reversed_MetaData) };
void Z_Construct_UClass_ADungeonNegationVolume_Statics::NewProp_AffectsUserDefinedCells_SetBit(void* Obj)
{
	((ADungeonNegationVolume*)Obj)->AffectsUserDefinedCells = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonNegationVolume_Statics::NewProp_AffectsUserDefinedCells = { "AffectsUserDefinedCells", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonNegationVolume), &Z_Construct_UClass_ADungeonNegationVolume_Statics::NewProp_AffectsUserDefinedCells_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectsUserDefinedCells_MetaData), NewProp_AffectsUserDefinedCells_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonNegationVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonNegationVolume_Statics::NewProp_Reversed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonNegationVolume_Statics::NewProp_AffectsUserDefinedCells,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonNegationVolume_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonNegationVolume_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ADungeonVolume,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonNegationVolume_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonNegationVolume_Statics::ClassParams = {
	&ADungeonNegationVolume::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADungeonNegationVolume_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonNegationVolume_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonNegationVolume_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonNegationVolume_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonNegationVolume()
{
	if (!Z_Registration_Info_UClass_ADungeonNegationVolume.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonNegationVolume.OuterSingleton, Z_Construct_UClass_ADungeonNegationVolume_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonNegationVolume.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonNegationVolume>()
{
	return ADungeonNegationVolume::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonNegationVolume);
ADungeonNegationVolume::~ADungeonNegationVolume() {}
// End Class ADungeonNegationVolume

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonNegationVolume_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADungeonNegationVolume, ADungeonNegationVolume::StaticClass, TEXT("ADungeonNegationVolume"), &Z_Registration_Info_UClass_ADungeonNegationVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonNegationVolume), 3309369794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonNegationVolume_h_1558255864(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonNegationVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Volumes_DungeonNegationVolume_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
