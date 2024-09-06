// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Landscape/DungeonLandscapeModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonLandscapeModifier() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonEventListener();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonLandscapeModifier();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonLandscapeModifier_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonLandscapeModifier
void UDungeonLandscapeModifier::StaticRegisterNativesUDungeonLandscapeModifier()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonLandscapeModifier);
UClass* Z_Construct_UClass_UDungeonLandscapeModifier_NoRegister()
{
	return UDungeonLandscapeModifier::StaticClass();
}
struct Z_Construct_UClass_UDungeonLandscapeModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* Modifies the landscape.  Attach to the dungeon actor\n*/" },
#endif
		{ "IncludePath", "Core/Landscape/DungeonLandscapeModifier.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifies the landscape.  Attach to the dungeon actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightBlurRadius_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightBlurIterations_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightBlurWeight_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintBlurRadius_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintBlurIterations_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintBlurWeight_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PaintBlurWeightCurve_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseHeight_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Landscape/DungeonLandscapeModifier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Landscape;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightBlurRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HeightBlurIterations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightBlurWeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PaintBlurRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PaintBlurIterations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PaintBlurWeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaintBlurWeightCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonLandscapeModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Landscape_MetaData), NewProp_Landscape_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurRadius = { "HeightBlurRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, HeightBlurRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightBlurRadius_MetaData), NewProp_HeightBlurRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurIterations = { "HeightBlurIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, HeightBlurIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightBlurIterations_MetaData), NewProp_HeightBlurIterations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurWeight = { "HeightBlurWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, HeightBlurWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightBlurWeight_MetaData), NewProp_HeightBlurWeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurRadius = { "PaintBlurRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, PaintBlurRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintBlurRadius_MetaData), NewProp_PaintBlurRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurIterations = { "PaintBlurIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, PaintBlurIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintBlurIterations_MetaData), NewProp_PaintBlurIterations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurWeight = { "PaintBlurWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, PaintBlurWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintBlurWeight_MetaData), NewProp_PaintBlurWeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurWeightCurve = { "PaintBlurWeightCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, PaintBlurWeightCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PaintBlurWeightCurve_MetaData), NewProp_PaintBlurWeightCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_BaseHeight = { "BaseHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, BaseHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseHeight_MetaData), NewProp_BaseHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonLandscapeModifier, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonLandscapeModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Landscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_HeightBlurWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_PaintBlurWeightCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_BaseHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonLandscapeModifier_Statics::NewProp_Layers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonLandscapeModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonEventListener,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonLandscapeModifier_Statics::ClassParams = {
	&UDungeonLandscapeModifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonLandscapeModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonLandscapeModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonLandscapeModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonLandscapeModifier()
{
	if (!Z_Registration_Info_UClass_UDungeonLandscapeModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonLandscapeModifier.OuterSingleton, Z_Construct_UClass_UDungeonLandscapeModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonLandscapeModifier.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonLandscapeModifier>()
{
	return UDungeonLandscapeModifier::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonLandscapeModifier);
UDungeonLandscapeModifier::~UDungeonLandscapeModifier() {}
// End Class UDungeonLandscapeModifier

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Landscape_DungeonLandscapeModifier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonLandscapeModifier, UDungeonLandscapeModifier::StaticClass, TEXT("UDungeonLandscapeModifier"), &Z_Registration_Info_UClass_UDungeonLandscapeModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonLandscapeModifier), 286749367U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Landscape_DungeonLandscapeModifier_h_1733966973(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Landscape_DungeonLandscapeModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Landscape_DungeonLandscapeModifier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
