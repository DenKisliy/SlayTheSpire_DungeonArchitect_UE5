// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Canvas/DungeonCanvas.h"
#include "DungeonArchitectRuntime/Public/Core/Layout/DungeonLayoutData.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Canvas/DungeonCanvasViewport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonCanvas() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonCanvas();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonCanvas_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasActorIconFilter();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasActorIconFilter_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasEffectBase();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasEffectBase_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasMaterialLayer();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasMaterialLayer_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasTrackedObject_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasDrawContext();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonLayoutData();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonCanvasActorIconFilter
void UDungeonCanvasActorIconFilter::StaticRegisterNativesUDungeonCanvasActorIconFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonCanvasActorIconFilter);
UClass* Z_Construct_UClass_UDungeonCanvasActorIconFilter_NoRegister()
{
	return UDungeonCanvasActorIconFilter::StaticClass();
}
struct Z_Construct_UClass_UDungeonCanvasActorIconFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/Canvas/DungeonCanvas.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonCanvasActorIconFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonCanvasActorIconFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasActorIconFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonCanvasActorIconFilter_Statics::ClassParams = {
	&UDungeonCanvasActorIconFilter::StaticClass,
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
	0x043010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasActorIconFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonCanvasActorIconFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonCanvasActorIconFilter()
{
	if (!Z_Registration_Info_UClass_UDungeonCanvasActorIconFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonCanvasActorIconFilter.OuterSingleton, Z_Construct_UClass_UDungeonCanvasActorIconFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonCanvasActorIconFilter.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonCanvasActorIconFilter>()
{
	return UDungeonCanvasActorIconFilter::StaticClass();
}
UDungeonCanvasActorIconFilter::UDungeonCanvasActorIconFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonCanvasActorIconFilter);
UDungeonCanvasActorIconFilter::~UDungeonCanvasActorIconFilter() {}
// End Class UDungeonCanvasActorIconFilter

// Begin Class UDungeonCanvasCircularFrameActorIconFilter
void UDungeonCanvasCircularFrameActorIconFilter::StaticRegisterNativesUDungeonCanvasCircularFrameActorIconFilter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonCanvasCircularFrameActorIconFilter);
UClass* Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_NoRegister()
{
	return UDungeonCanvasCircularFrameActorIconFilter::StaticClass();
}
struct Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Canvas/DungeonCanvas.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryRadius_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryEdgeIconName_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The icon to show when the object is out of the circular bounds, e.g. an arrow of sorts */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The icon to show when the object is out of the circular bounds, e.g. an arrow of sorts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoundaryEdgeIconMaxDisplayDistance_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How far should the object be from the edge before we remove the edge icon (we don't want to show arrows for far away objects) */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How far should the object be from the edge before we remove the edge icon (we don't want to show arrows for far away objects)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedIconTags_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableScaleBeyondBoundary_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCurve_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "EditCondition", "bEnableScaleBeyondBoundary" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundaryRadius;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoundaryEdgeIconName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundaryEdgeIconMaxDisplayDistance;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackedIconTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedIconTags;
	static void NewProp_bEnableScaleBeyondBoundary_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableScaleBeyondBoundary;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ScaleCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonCanvasCircularFrameActorIconFilter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::NewProp_BoundaryRadius = { "BoundaryRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasCircularFrameActorIconFilter, BoundaryRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundaryRadius_MetaData), NewProp_BoundaryRadius_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::NewProp_BoundaryEdgeIconName = { "BoundaryEdgeIconName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasCircularFrameActorIconFilter, BoundaryEdgeIconName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundaryEdgeIconName_MetaData), NewProp_BoundaryEdgeIconName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::NewProp_BoundaryEdgeIconMaxDisplayDistance = { "BoundaryEdgeIconMaxDisplayDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasCircularFrameActorIconFilter, BoundaryEdgeIconMaxDisplayDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoundaryEdgeIconMaxDisplayDistance_MetaData), NewProp_BoundaryEdgeIconMaxDisplayDistance_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::NewProp_TrackedIconTags_Inner = { "TrackedIconTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::NewProp_TrackedIconTags = { "TrackedIconTags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasCircularFrameActorIconFilter, TrackedIconTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedIconTags_MetaData), NewProp_TrackedIconTags_MetaData) };
void Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::NewProp_bEnableScaleBeyondBoundary_SetBit(void* Obj)
{
	((UDungeonCanvasCircularFrameActorIconFilter*)Obj)->bEnableScaleBeyondBoundary = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::NewProp_bEnableScaleBeyondBoundary = { "bEnableScaleBeyondBoundary", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonCanvasCircularFrameActorIconFilter), &Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::NewProp_bEnableScaleBeyondBoundary_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableScaleBeyondBoundary_MetaData), NewProp_bEnableScaleBeyondBoundary_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::NewProp_ScaleCurve = { "ScaleCurve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasCircularFrameActorIconFilter, ScaleCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleCurve_MetaData), NewProp_ScaleCurve_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::NewProp_BoundaryRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::NewProp_BoundaryEdgeIconName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::NewProp_BoundaryEdgeIconMaxDisplayDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::NewProp_TrackedIconTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::NewProp_TrackedIconTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::NewProp_bEnableScaleBeyondBoundary,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::NewProp_ScaleCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonCanvasActorIconFilter,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::ClassParams = {
	&UDungeonCanvasCircularFrameActorIconFilter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter()
{
	if (!Z_Registration_Info_UClass_UDungeonCanvasCircularFrameActorIconFilter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonCanvasCircularFrameActorIconFilter.OuterSingleton, Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonCanvasCircularFrameActorIconFilter.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonCanvasCircularFrameActorIconFilter>()
{
	return UDungeonCanvasCircularFrameActorIconFilter::StaticClass();
}
UDungeonCanvasCircularFrameActorIconFilter::UDungeonCanvasCircularFrameActorIconFilter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonCanvasCircularFrameActorIconFilter);
UDungeonCanvasCircularFrameActorIconFilter::~UDungeonCanvasCircularFrameActorIconFilter() {}
// End Class UDungeonCanvasCircularFrameActorIconFilter

// Begin ScriptStruct FDungeonCanvasDrawSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonCanvasDrawSettings;
class UScriptStruct* FDungeonCanvasDrawSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasDrawSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonCanvasDrawSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonCanvasDrawSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasDrawSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonCanvasDrawSettings>()
{
	return FDungeonCanvasDrawSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRotateToView_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseCanvasRotation_MetaData[] = {
		{ "Category", "Dungeon Architect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The base canvas rotation, in degrees */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The base canvas rotation, in degrees" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFogOfWarEnabled_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFogOfWarFullyExplored_MetaData[] = {
		{ "Category", "Dungeon Architect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** start with fog of war map fully explored */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "start with fog of war map fully explored" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarMaterialInstanceOverride_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayActorIconFilters_Inner_MetaData[] = {
		{ "Category", "Advanced" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlayActorIconFilters_MetaData[] = {
		{ "Category", "Advanced" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bRotateToView_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRotateToView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseCanvasRotation;
	static void NewProp_bFogOfWarEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFogOfWarEnabled;
	static void NewProp_bFogOfWarFullyExplored_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFogOfWarFullyExplored;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FogOfWarMaterialInstanceOverride;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlayActorIconFilters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlayActorIconFilters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonCanvasDrawSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_bRotateToView_SetBit(void* Obj)
{
	((FDungeonCanvasDrawSettings*)Obj)->bRotateToView = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_bRotateToView = { "bRotateToView", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDungeonCanvasDrawSettings), &Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_bRotateToView_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRotateToView_MetaData), NewProp_bRotateToView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_BaseCanvasRotation = { "BaseCanvasRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasDrawSettings, BaseCanvasRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseCanvasRotation_MetaData), NewProp_BaseCanvasRotation_MetaData) };
void Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_bFogOfWarEnabled_SetBit(void* Obj)
{
	((FDungeonCanvasDrawSettings*)Obj)->bFogOfWarEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_bFogOfWarEnabled = { "bFogOfWarEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDungeonCanvasDrawSettings), &Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_bFogOfWarEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFogOfWarEnabled_MetaData), NewProp_bFogOfWarEnabled_MetaData) };
void Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_bFogOfWarFullyExplored_SetBit(void* Obj)
{
	((FDungeonCanvasDrawSettings*)Obj)->bFogOfWarFullyExplored = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_bFogOfWarFullyExplored = { "bFogOfWarFullyExplored", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FDungeonCanvasDrawSettings), &Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_bFogOfWarFullyExplored_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFogOfWarFullyExplored_MetaData), NewProp_bFogOfWarFullyExplored_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_FogOfWarMaterialInstanceOverride = { "FogOfWarMaterialInstanceOverride", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasDrawSettings, FogOfWarMaterialInstanceOverride), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogOfWarMaterialInstanceOverride_MetaData), NewProp_FogOfWarMaterialInstanceOverride_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_OverlayActorIconFilters_Inner = { "OverlayActorIconFilters", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonCanvasActorIconFilter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayActorIconFilters_Inner_MetaData), NewProp_OverlayActorIconFilters_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_OverlayActorIconFilters = { "OverlayActorIconFilters", nullptr, (EPropertyFlags)0x001002800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasDrawSettings, OverlayActorIconFilters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlayActorIconFilters_MetaData), NewProp_OverlayActorIconFilters_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_bRotateToView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_BaseCanvasRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_bFogOfWarEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_bFogOfWarFullyExplored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_FogOfWarMaterialInstanceOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_OverlayActorIconFilters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewProp_OverlayActorIconFilters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonCanvasDrawSettings",
	Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::PropPointers),
	sizeof(FDungeonCanvasDrawSettings),
	alignof(FDungeonCanvasDrawSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasDrawSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonCanvasDrawSettings.InnerSingleton, Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasDrawSettings.InnerSingleton;
}
// End ScriptStruct FDungeonCanvasDrawSettings

// Begin ScriptStruct FDungeonCanvasDrawContext
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonCanvasDrawContext;
class UScriptStruct* FDungeonCanvasDrawContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasDrawContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonCanvasDrawContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonCanvasDrawContext, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonCanvasDrawContext"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasDrawContext.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonCanvasDrawContext>()
{
	return FDungeonCanvasDrawContext::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonCanvas_MetaData[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Canvas_MetaData[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewTransform_MetaData[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawSettings_MetaData[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DungeonCanvas;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Canvas;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonCanvasDrawContext>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::NewProp_DungeonCanvas = { "DungeonCanvas", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasDrawContext, DungeonCanvas), Z_Construct_UClass_ADungeonCanvas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonCanvas_MetaData), NewProp_DungeonCanvas_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasDrawContext, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Canvas_MetaData), NewProp_Canvas_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::NewProp_ViewTransform = { "ViewTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasDrawContext, ViewTransform), Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewTransform_MetaData), NewProp_ViewTransform_MetaData) }; // 3106622410
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::NewProp_DrawSettings = { "DrawSettings", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasDrawContext, DrawSettings), Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawSettings_MetaData), NewProp_DrawSettings_MetaData) }; // 1037107739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::NewProp_DungeonCanvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::NewProp_Canvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::NewProp_ViewTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::NewProp_DrawSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonCanvasDrawContext",
	Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::PropPointers),
	sizeof(FDungeonCanvasDrawContext),
	alignof(FDungeonCanvasDrawContext),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasDrawContext()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasDrawContext.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonCanvasDrawContext.InnerSingleton, Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasDrawContext.InnerSingleton;
}
// End ScriptStruct FDungeonCanvasDrawContext

// Begin ScriptStruct FDungeonCanvasTrackedActorRegistryItem
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonCanvasTrackedActorRegistryItem;
class UScriptStruct* FDungeonCanvasTrackedActorRegistryItem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasTrackedActorRegistryItem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonCanvasTrackedActorRegistryItem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonCanvasTrackedActorRegistryItem"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasTrackedActorRegistryItem.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonCanvasTrackedActorRegistryItem>()
{
	return FDungeonCanvasTrackedActorRegistryItem::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedComponent_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstanceID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarExplored_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Is this item in the explored region of the fog of war. The value is between 0..1, 0 = black, 1 = visible */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this item in the explored region of the fog of war. The value is between 0..1, 0 = black, 1 = visible" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarLineOfSight_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Is this item in the line of sight region of the fog of war. The value is between 0..1, 0 = hidden, 1 = visible */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Is this item in the line of sight region of the fog of war. The value is between 0..1, 0 = hidden, 1 = visible" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TrackedComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InstanceID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FogOfWarExplored;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FogOfWarLineOfSight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonCanvasTrackedActorRegistryItem>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::NewProp_TrackedComponent = { "TrackedComponent", nullptr, (EPropertyFlags)0x00140000000a0009, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasTrackedActorRegistryItem, TrackedComponent), Z_Construct_UClass_UDungeonCanvasTrackedObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedComponent_MetaData), NewProp_TrackedComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::NewProp_InstanceID = { "InstanceID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasTrackedActorRegistryItem, InstanceID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstanceID_MetaData), NewProp_InstanceID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::NewProp_FogOfWarExplored = { "FogOfWarExplored", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasTrackedActorRegistryItem, FogOfWarExplored), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogOfWarExplored_MetaData), NewProp_FogOfWarExplored_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::NewProp_FogOfWarLineOfSight = { "FogOfWarLineOfSight", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasTrackedActorRegistryItem, FogOfWarLineOfSight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogOfWarLineOfSight_MetaData), NewProp_FogOfWarLineOfSight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::NewProp_TrackedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::NewProp_InstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::NewProp_FogOfWarExplored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::NewProp_FogOfWarLineOfSight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonCanvasTrackedActorRegistryItem",
	Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::PropPointers),
	sizeof(FDungeonCanvasTrackedActorRegistryItem),
	alignof(FDungeonCanvasTrackedActorRegistryItem),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasTrackedActorRegistryItem.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonCanvasTrackedActorRegistryItem.InnerSingleton, Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasTrackedActorRegistryItem.InnerSingleton;
}
// End ScriptStruct FDungeonCanvasTrackedActorRegistryItem

// Begin ScriptStruct FDungeonCanvasItemFogOfWarSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DungeonCanvasItemFogOfWarSettings;
class UScriptStruct* FDungeonCanvasItemFogOfWarSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasItemFogOfWarSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DungeonCanvasItemFogOfWarSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("DungeonCanvasItemFogOfWarSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasItemFogOfWarSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FDungeonCanvasItemFogOfWarSettings>()
{
	return FDungeonCanvasItemFogOfWarSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightRadius_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumShadowSamples_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowJitterDistance_MetaData[] = {
		{ "Category", "Dungeon Canvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumShadowSamples;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowJitterDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDungeonCanvasItemFogOfWarSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics::NewProp_LightRadius = { "LightRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasItemFogOfWarSettings, LightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightRadius_MetaData), NewProp_LightRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics::NewProp_NumShadowSamples = { "NumShadowSamples", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasItemFogOfWarSettings, NumShadowSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumShadowSamples_MetaData), NewProp_NumShadowSamples_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics::NewProp_ShadowJitterDistance = { "ShadowJitterDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDungeonCanvasItemFogOfWarSettings, ShadowJitterDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowJitterDistance_MetaData), NewProp_ShadowJitterDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics::NewProp_LightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics::NewProp_NumShadowSamples,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics::NewProp_ShadowJitterDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"DungeonCanvasItemFogOfWarSettings",
	Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics::PropPointers),
	sizeof(FDungeonCanvasItemFogOfWarSettings),
	alignof(FDungeonCanvasItemFogOfWarSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings()
{
	if (!Z_Registration_Info_UScriptStruct_DungeonCanvasItemFogOfWarSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DungeonCanvasItemFogOfWarSettings.InnerSingleton, Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DungeonCanvasItemFogOfWarSettings.InnerSingleton;
}
// End ScriptStruct FDungeonCanvasItemFogOfWarSettings

// Begin Class UDungeonCanvasEffectBase Function Draw
static FName NAME_UDungeonCanvasEffectBase_Draw = FName(TEXT("Draw"));
void UDungeonCanvasEffectBase::Draw()
{
	ProcessEvent(FindFunctionChecked(NAME_UDungeonCanvasEffectBase_Draw),NULL);
}
struct Z_Construct_UFunction_UDungeonCanvasEffectBase_Draw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasEffectBase_Draw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasEffectBase, nullptr, "Draw", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasEffectBase_Draw_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasEffectBase_Draw_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDungeonCanvasEffectBase_Draw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasEffectBase_Draw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasEffectBase::execDraw)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Draw_Implementation();
	P_NATIVE_END;
}
// End Class UDungeonCanvasEffectBase Function Draw

// Begin Class UDungeonCanvasEffectBase Function InitCanvasMaterial
struct DungeonCanvasEffectBase_eventInitCanvasMaterial_Parms
{
	UMaterialInstanceDynamic* Material;
};
static FName NAME_UDungeonCanvasEffectBase_InitCanvasMaterial = FName(TEXT("InitCanvasMaterial"));
void UDungeonCanvasEffectBase::InitCanvasMaterial(UMaterialInstanceDynamic* Material)
{
	DungeonCanvasEffectBase_eventInitCanvasMaterial_Parms Parms;
	Parms.Material=Material;
	ProcessEvent(FindFunctionChecked(NAME_UDungeonCanvasEffectBase_InitCanvasMaterial),&Parms);
}
struct Z_Construct_UFunction_UDungeonCanvasEffectBase_InitCanvasMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasEffectBase_InitCanvasMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasEffectBase_eventInitCanvasMaterial_Parms, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasEffectBase_InitCanvasMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasEffectBase_InitCanvasMaterial_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasEffectBase_InitCanvasMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasEffectBase_InitCanvasMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasEffectBase, nullptr, "InitCanvasMaterial", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasEffectBase_InitCanvasMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasEffectBase_InitCanvasMaterial_Statics::PropPointers), sizeof(DungeonCanvasEffectBase_eventInitCanvasMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasEffectBase_InitCanvasMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasEffectBase_InitCanvasMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonCanvasEffectBase_eventInitCanvasMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasEffectBase_InitCanvasMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasEffectBase_InitCanvasMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasEffectBase::execInitCanvasMaterial)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitCanvasMaterial_Implementation(Z_Param_Material);
	P_NATIVE_END;
}
// End Class UDungeonCanvasEffectBase Function InitCanvasMaterial

// Begin Class UDungeonCanvasEffectBase Function InitFogOfWarMaterial
struct DungeonCanvasEffectBase_eventInitFogOfWarMaterial_Parms
{
	UMaterialInstanceDynamic* Material;
};
static FName NAME_UDungeonCanvasEffectBase_InitFogOfWarMaterial = FName(TEXT("InitFogOfWarMaterial"));
void UDungeonCanvasEffectBase::InitFogOfWarMaterial(UMaterialInstanceDynamic* Material)
{
	DungeonCanvasEffectBase_eventInitFogOfWarMaterial_Parms Parms;
	Parms.Material=Material;
	ProcessEvent(FindFunctionChecked(NAME_UDungeonCanvasEffectBase_InitFogOfWarMaterial),&Parms);
}
struct Z_Construct_UFunction_UDungeonCanvasEffectBase_InitFogOfWarMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasEffectBase_InitFogOfWarMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasEffectBase_eventInitFogOfWarMaterial_Parms, Material), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasEffectBase_InitFogOfWarMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasEffectBase_InitFogOfWarMaterial_Statics::NewProp_Material,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasEffectBase_InitFogOfWarMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasEffectBase_InitFogOfWarMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasEffectBase, nullptr, "InitFogOfWarMaterial", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasEffectBase_InitFogOfWarMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasEffectBase_InitFogOfWarMaterial_Statics::PropPointers), sizeof(DungeonCanvasEffectBase_eventInitFogOfWarMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasEffectBase_InitFogOfWarMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasEffectBase_InitFogOfWarMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonCanvasEffectBase_eventInitFogOfWarMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasEffectBase_InitFogOfWarMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasEffectBase_InitFogOfWarMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasEffectBase::execInitFogOfWarMaterial)
{
	P_GET_OBJECT(UMaterialInstanceDynamic,Z_Param_Material);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitFogOfWarMaterial_Implementation(Z_Param_Material);
	P_NATIVE_END;
}
// End Class UDungeonCanvasEffectBase Function InitFogOfWarMaterial

// Begin Class UDungeonCanvasEffectBase Function Initialize
static FName NAME_UDungeonCanvasEffectBase_Initialize = FName(TEXT("Initialize"));
void UDungeonCanvasEffectBase::Initialize()
{
	ProcessEvent(FindFunctionChecked(NAME_UDungeonCanvasEffectBase_Initialize),NULL);
}
struct Z_Construct_UFunction_UDungeonCanvasEffectBase_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasEffectBase_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasEffectBase, nullptr, "Initialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasEffectBase_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasEffectBase_Initialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDungeonCanvasEffectBase_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasEffectBase_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasEffectBase::execInitialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize_Implementation();
	P_NATIVE_END;
}
// End Class UDungeonCanvasEffectBase Function Initialize

// Begin Class UDungeonCanvasEffectBase Function SetTextures
struct Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics
{
	struct DungeonCanvasEffectBase_eventSetTextures_Parms
	{
		UCanvasRenderTarget2D* TexLayoutFill;
		UCanvasRenderTarget2D* TexLayoutBorder;
		UCanvasRenderTarget2D* TexSDF;
		UCanvasRenderTarget2D* TexDynamicOcclusion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TexLayoutFill;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TexLayoutBorder;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TexSDF;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TexDynamicOcclusion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::NewProp_TexLayoutFill = { "TexLayoutFill", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasEffectBase_eventSetTextures_Parms, TexLayoutFill), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::NewProp_TexLayoutBorder = { "TexLayoutBorder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasEffectBase_eventSetTextures_Parms, TexLayoutBorder), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::NewProp_TexSDF = { "TexSDF", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasEffectBase_eventSetTextures_Parms, TexSDF), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::NewProp_TexDynamicOcclusion = { "TexDynamicOcclusion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasEffectBase_eventSetTextures_Parms, TexDynamicOcclusion), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::NewProp_TexLayoutFill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::NewProp_TexLayoutBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::NewProp_TexSDF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::NewProp_TexDynamicOcclusion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasEffectBase, nullptr, "SetTextures", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::DungeonCanvasEffectBase_eventSetTextures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::DungeonCanvasEffectBase_eventSetTextures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasEffectBase::execSetTextures)
{
	P_GET_OBJECT(UCanvasRenderTarget2D,Z_Param_TexLayoutFill);
	P_GET_OBJECT(UCanvasRenderTarget2D,Z_Param_TexLayoutBorder);
	P_GET_OBJECT(UCanvasRenderTarget2D,Z_Param_TexSDF);
	P_GET_OBJECT(UCanvasRenderTarget2D,Z_Param_TexDynamicOcclusion);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextures(Z_Param_TexLayoutFill,Z_Param_TexLayoutBorder,Z_Param_TexSDF,Z_Param_TexDynamicOcclusion);
	P_NATIVE_END;
}
// End Class UDungeonCanvasEffectBase Function SetTextures

// Begin Class UDungeonCanvasEffectBase Function Tick
struct DungeonCanvasEffectBase_eventTick_Parms
{
	float DeltaSeconds;
};
static FName NAME_UDungeonCanvasEffectBase_Tick = FName(TEXT("Tick"));
void UDungeonCanvasEffectBase::Tick(float DeltaSeconds)
{
	DungeonCanvasEffectBase_eventTick_Parms Parms;
	Parms.DeltaSeconds=DeltaSeconds;
	ProcessEvent(FindFunctionChecked(NAME_UDungeonCanvasEffectBase_Tick),&Parms);
}
struct Z_Construct_UFunction_UDungeonCanvasEffectBase_Tick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDungeonCanvasEffectBase_Tick_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvasEffectBase_eventTick_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonCanvasEffectBase_Tick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonCanvasEffectBase_Tick_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasEffectBase_Tick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonCanvasEffectBase_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonCanvasEffectBase, nullptr, "Tick", nullptr, nullptr, Z_Construct_UFunction_UDungeonCanvasEffectBase_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasEffectBase_Tick_Statics::PropPointers), sizeof(DungeonCanvasEffectBase_eventTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonCanvasEffectBase_Tick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonCanvasEffectBase_Tick_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonCanvasEffectBase_eventTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonCanvasEffectBase_Tick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonCanvasEffectBase_Tick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonCanvasEffectBase::execTick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Tick_Implementation(Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class UDungeonCanvasEffectBase Function Tick

// Begin Class UDungeonCanvasEffectBase
void UDungeonCanvasEffectBase::StaticRegisterNativesUDungeonCanvasEffectBase()
{
	UClass* Class = UDungeonCanvasEffectBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Draw", &UDungeonCanvasEffectBase::execDraw },
		{ "InitCanvasMaterial", &UDungeonCanvasEffectBase::execInitCanvasMaterial },
		{ "InitFogOfWarMaterial", &UDungeonCanvasEffectBase::execInitFogOfWarMaterial },
		{ "Initialize", &UDungeonCanvasEffectBase::execInitialize },
		{ "SetTextures", &UDungeonCanvasEffectBase::execSetTextures },
		{ "Tick", &UDungeonCanvasEffectBase::execTick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonCanvasEffectBase);
UClass* Z_Construct_UClass_UDungeonCanvasEffectBase_NoRegister()
{
	return UDungeonCanvasEffectBase::StaticClass();
}
struct Z_Construct_UClass_UDungeonCanvasEffectBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/Canvas/DungeonCanvas.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayoutFillTexture_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayoutBorderTexture_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SDFTexture_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicOcclusionTexture_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialLayerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LayoutFillTexture;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_LayoutBorderTexture;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SDFTexture;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_DynamicOcclusionTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialLayerInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonCanvasEffectBase_Draw, "Draw" }, // 2793617075
		{ &Z_Construct_UFunction_UDungeonCanvasEffectBase_InitCanvasMaterial, "InitCanvasMaterial" }, // 2836915584
		{ &Z_Construct_UFunction_UDungeonCanvasEffectBase_InitFogOfWarMaterial, "InitFogOfWarMaterial" }, // 1455542400
		{ &Z_Construct_UFunction_UDungeonCanvasEffectBase_Initialize, "Initialize" }, // 2540768270
		{ &Z_Construct_UFunction_UDungeonCanvasEffectBase_SetTextures, "SetTextures" }, // 2412523582
		{ &Z_Construct_UFunction_UDungeonCanvasEffectBase_Tick, "Tick" }, // 1577472123
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonCanvasEffectBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::NewProp_LayoutFillTexture = { "LayoutFillTexture", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasEffectBase, LayoutFillTexture), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayoutFillTexture_MetaData), NewProp_LayoutFillTexture_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::NewProp_LayoutBorderTexture = { "LayoutBorderTexture", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasEffectBase, LayoutBorderTexture), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayoutBorderTexture_MetaData), NewProp_LayoutBorderTexture_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::NewProp_SDFTexture = { "SDFTexture", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasEffectBase, SDFTexture), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SDFTexture_MetaData), NewProp_SDFTexture_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::NewProp_DynamicOcclusionTexture = { "DynamicOcclusionTexture", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasEffectBase, DynamicOcclusionTexture), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicOcclusionTexture_MetaData), NewProp_DynamicOcclusionTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::NewProp_MaterialLayerInstance = { "MaterialLayerInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasEffectBase, MaterialLayerInstance), Z_Construct_UClass_UMaterialFunctionMaterialLayerInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialLayerInstance_MetaData), NewProp_MaterialLayerInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::NewProp_LayoutFillTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::NewProp_LayoutBorderTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::NewProp_SDFTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::NewProp_DynamicOcclusionTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::NewProp_MaterialLayerInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::ClassParams = {
	&UDungeonCanvasEffectBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::PropPointers),
	0,
	0x043010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonCanvasEffectBase()
{
	if (!Z_Registration_Info_UClass_UDungeonCanvasEffectBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonCanvasEffectBase.OuterSingleton, Z_Construct_UClass_UDungeonCanvasEffectBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonCanvasEffectBase.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonCanvasEffectBase>()
{
	return UDungeonCanvasEffectBase::StaticClass();
}
UDungeonCanvasEffectBase::UDungeonCanvasEffectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonCanvasEffectBase);
UDungeonCanvasEffectBase::~UDungeonCanvasEffectBase() {}
// End Class UDungeonCanvasEffectBase

// Begin Class UDungeonCanvasMaterialLayer
void UDungeonCanvasMaterialLayer::StaticRegisterNativesUDungeonCanvasMaterialLayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonCanvasMaterialLayer);
UClass* Z_Construct_UClass_UDungeonCanvasMaterialLayer_NoRegister()
{
	return UDungeonCanvasMaterialLayer::StaticClass();
}
struct Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/Canvas/DungeonCanvas.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "Category", "Material Layer" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerDescription_MetaData[] = {
		{ "Category", "Material Layer" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[] = {
		{ "Category", "Material Layer" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialLayer_MetaData[] = {
		{ "Category", "Material Functions" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialBlend_MetaData[] = {
		{ "Category", "Material Functions" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_LayerDescription;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Effect;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialLayer;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialBlend;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LayerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonCanvasMaterialLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasMaterialLayer, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::NewProp_LayerDescription = { "LayerDescription", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasMaterialLayer, LayerDescription), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerDescription_MetaData), NewProp_LayerDescription_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0012040000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasMaterialLayer, Effect), Z_Construct_UClass_UDungeonCanvasEffectBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effect_MetaData), NewProp_Effect_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::NewProp_MaterialLayer = { "MaterialLayer", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasMaterialLayer, MaterialLayer), Z_Construct_UClass_UMaterialFunctionMaterialLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialLayer_MetaData), NewProp_MaterialLayer_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::NewProp_MaterialBlend = { "MaterialBlend", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasMaterialLayer, MaterialBlend), Z_Construct_UClass_UMaterialFunctionMaterialLayerBlend_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialBlend_MetaData), NewProp_MaterialBlend_MetaData) };
void Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((UDungeonCanvasMaterialLayer*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonCanvasMaterialLayer), &Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::NewProp_LayerIndex = { "LayerIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasMaterialLayer, LayerIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerIndex_MetaData), NewProp_LayerIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::NewProp_LayerDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::NewProp_Effect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::NewProp_MaterialLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::NewProp_MaterialBlend,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::NewProp_bEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::NewProp_LayerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::ClassParams = {
	&UDungeonCanvasMaterialLayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonCanvasMaterialLayer()
{
	if (!Z_Registration_Info_UClass_UDungeonCanvasMaterialLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonCanvasMaterialLayer.OuterSingleton, Z_Construct_UClass_UDungeonCanvasMaterialLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonCanvasMaterialLayer.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonCanvasMaterialLayer>()
{
	return UDungeonCanvasMaterialLayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonCanvasMaterialLayer);
UDungeonCanvasMaterialLayer::~UDungeonCanvasMaterialLayer() {}
// End Class UDungeonCanvasMaterialLayer

// Begin Class ADungeonCanvas Function AddFogOfWarExplorer
struct Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer_Statics
{
	struct DungeonCanvas_eventAddFogOfWarExplorer_Parms
	{
		AActor* Actor;
		FDungeonCanvasItemFogOfWarSettings Settings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventAddFogOfWarExplorer_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventAddFogOfWarExplorer_Parms, Settings), Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings, METADATA_PARAMS(0, nullptr) }; // 3412656040
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "AddFogOfWarExplorer", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer_Statics::DungeonCanvas_eventAddFogOfWarExplorer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer_Statics::DungeonCanvas_eventAddFogOfWarExplorer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execAddFogOfWarExplorer)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FDungeonCanvasItemFogOfWarSettings,Z_Param_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFogOfWarExplorer(Z_Param_Actor,Z_Param_Settings);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function AddFogOfWarExplorer

// Begin Class ADungeonCanvas Function AddTrackedOverlayActor
struct Z_Construct_UFunction_ADungeonCanvas_AddTrackedOverlayActor_Statics
{
	struct DungeonCanvas_eventAddTrackedOverlayActor_Parms
	{
		UDungeonCanvasTrackedObject* TrackedComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TrackedComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonCanvas_AddTrackedOverlayActor_Statics::NewProp_TrackedComponent = { "TrackedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventAddTrackedOverlayActor_Parms, TrackedComponent), Z_Construct_UClass_UDungeonCanvasTrackedObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedComponent_MetaData), NewProp_TrackedComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_AddTrackedOverlayActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_AddTrackedOverlayActor_Statics::NewProp_TrackedComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_AddTrackedOverlayActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_AddTrackedOverlayActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "AddTrackedOverlayActor", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_AddTrackedOverlayActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_AddTrackedOverlayActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_AddTrackedOverlayActor_Statics::DungeonCanvas_eventAddTrackedOverlayActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_AddTrackedOverlayActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_AddTrackedOverlayActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_AddTrackedOverlayActor_Statics::DungeonCanvas_eventAddTrackedOverlayActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_AddTrackedOverlayActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_AddTrackedOverlayActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execAddTrackedOverlayActor)
{
	P_GET_OBJECT(UDungeonCanvasTrackedObject,Z_Param_TrackedComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTrackedOverlayActor(Z_Param_TrackedComponent);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function AddTrackedOverlayActor

// Begin Class ADungeonCanvas Function CreateManagedTexture
struct Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics
{
	struct DungeonCanvas_eventCreateManagedTexture_Parms
	{
		int32 Width;
		int32 Height;
		TEnumAsByte<ETextureRenderTargetFormat> Format;
		FLinearColor ClearColor;
		UCanvasRenderTarget2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "CPP_Default_ClearColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventCreateManagedTexture_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventCreateManagedTexture_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventCreateManagedTexture_Parms, Format), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(0, nullptr) }; // 338846453
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventCreateManagedTexture_Parms, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventCreateManagedTexture_Parms, ReturnValue), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::NewProp_ClearColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "CreateManagedTexture", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::DungeonCanvas_eventCreateManagedTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::DungeonCanvas_eventCreateManagedTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execCreateManagedTexture)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_GET_PROPERTY(FByteProperty,Z_Param_Format);
	P_GET_STRUCT(FLinearColor,Z_Param_ClearColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCanvasRenderTarget2D**)Z_Param__Result=P_THIS->CreateManagedTexture(Z_Param_Width,Z_Param_Height,ETextureRenderTargetFormat(Z_Param_Format),Z_Param_ClearColor);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function CreateManagedTexture

// Begin Class ADungeonCanvas Function CreateMaterialInstance
struct Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics
{
	struct DungeonCanvas_eventCreateMaterialInstance_Parms
	{
		UMaterialInterface* MaterialTemplate;
		UObject* Outer;
		UMaterialInstanceDynamic* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialTemplate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics::NewProp_MaterialTemplate = { "MaterialTemplate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventCreateMaterialInstance_Parms, MaterialTemplate), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventCreateMaterialInstance_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventCreateMaterialInstance_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics::NewProp_MaterialTemplate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics::NewProp_Outer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "CreateMaterialInstance", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics::DungeonCanvas_eventCreateMaterialInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics::DungeonCanvas_eventCreateMaterialInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execCreateMaterialInstance)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_MaterialTemplate);
	P_GET_OBJECT(UObject,Z_Param_Outer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->CreateMaterialInstance(Z_Param_MaterialTemplate,Z_Param_Outer);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function CreateMaterialInstance

// Begin Class ADungeonCanvas Function DrawDungeonLayout
struct Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics
{
	struct DungeonCanvas_eventDrawDungeonLayout_Parms
	{
		UTextureRenderTarget2D* OutLayoutFill;
		UTextureRenderTarget2D* OutLayoutBorder;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutLayoutFill;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutLayoutBorder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics::NewProp_OutLayoutFill = { "OutLayoutFill", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventDrawDungeonLayout_Parms, OutLayoutFill), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics::NewProp_OutLayoutBorder = { "OutLayoutBorder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventDrawDungeonLayout_Parms, OutLayoutBorder), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventDrawDungeonLayout_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics::NewProp_OutLayoutFill,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics::NewProp_OutLayoutBorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "DrawDungeonLayout", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics::DungeonCanvas_eventDrawDungeonLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics::DungeonCanvas_eventDrawDungeonLayout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execDrawDungeonLayout)
{
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutLayoutFill);
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutLayoutBorder);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=P_THIS->DrawDungeonLayout(Z_Param_OutLayoutFill,Z_Param_OutLayoutBorder);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function DrawDungeonLayout

// Begin Class ADungeonCanvas Function GetCanvasBaseMaterial
struct Z_Construct_UFunction_ADungeonCanvas_GetCanvasBaseMaterial_Statics
{
	struct DungeonCanvas_eventGetCanvasBaseMaterial_Parms
	{
		UMaterialInterface* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonCanvas_GetCanvasBaseMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventGetCanvasBaseMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_GetCanvasBaseMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_GetCanvasBaseMaterial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_GetCanvasBaseMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_GetCanvasBaseMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "GetCanvasBaseMaterial", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_GetCanvasBaseMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_GetCanvasBaseMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_GetCanvasBaseMaterial_Statics::DungeonCanvas_eventGetCanvasBaseMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_GetCanvasBaseMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_GetCanvasBaseMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_GetCanvasBaseMaterial_Statics::DungeonCanvas_eventGetCanvasBaseMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_GetCanvasBaseMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_GetCanvasBaseMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execGetCanvasBaseMaterial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMaterialInterface**)Z_Param__Result=P_THIS->GetCanvasBaseMaterial();
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function GetCanvasBaseMaterial

// Begin Class ADungeonCanvas Function GetFloorIndexAtHeight
struct Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight_Statics
{
	struct DungeonCanvas_eventGetFloorIndexAtHeight_Parms
	{
		float HeightZ;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightZ;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight_Statics::NewProp_HeightZ = { "HeightZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventGetFloorIndexAtHeight_Parms, HeightZ), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventGetFloorIndexAtHeight_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight_Statics::NewProp_HeightZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "GetFloorIndexAtHeight", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight_Statics::DungeonCanvas_eventGetFloorIndexAtHeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight_Statics::DungeonCanvas_eventGetFloorIndexAtHeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execGetFloorIndexAtHeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HeightZ);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFloorIndexAtHeight(Z_Param_HeightZ);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function GetFloorIndexAtHeight

// Begin Class ADungeonCanvas Function GetFogOfWarExploredTexture
struct DungeonCanvas_eventGetFogOfWarExploredTexture_Parms
{
	UCanvasRenderTarget2D* ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonCanvas_eventGetFogOfWarExploredTexture_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_ADungeonCanvas_GetFogOfWarExploredTexture = FName(TEXT("GetFogOfWarExploredTexture"));
UCanvasRenderTarget2D* ADungeonCanvas::GetFogOfWarExploredTexture()
{
	DungeonCanvas_eventGetFogOfWarExploredTexture_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_ADungeonCanvas_GetFogOfWarExploredTexture),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarExploredTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarExploredTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventGetFogOfWarExploredTexture_Parms, ReturnValue), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarExploredTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarExploredTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarExploredTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarExploredTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "GetFogOfWarExploredTexture", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarExploredTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarExploredTexture_Statics::PropPointers), sizeof(DungeonCanvas_eventGetFogOfWarExploredTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarExploredTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarExploredTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonCanvas_eventGetFogOfWarExploredTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarExploredTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarExploredTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execGetFogOfWarExploredTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCanvasRenderTarget2D**)Z_Param__Result=P_THIS->GetFogOfWarExploredTexture_Implementation();
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function GetFogOfWarExploredTexture

// Begin Class ADungeonCanvas Function GetFogOfWarVisibilityTexture
struct DungeonCanvas_eventGetFogOfWarVisibilityTexture_Parms
{
	UCanvasRenderTarget2D* ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonCanvas_eventGetFogOfWarVisibilityTexture_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_ADungeonCanvas_GetFogOfWarVisibilityTexture = FName(TEXT("GetFogOfWarVisibilityTexture"));
UCanvasRenderTarget2D* ADungeonCanvas::GetFogOfWarVisibilityTexture()
{
	DungeonCanvas_eventGetFogOfWarVisibilityTexture_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_ADungeonCanvas_GetFogOfWarVisibilityTexture),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarVisibilityTexture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarVisibilityTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventGetFogOfWarVisibilityTexture_Parms, ReturnValue), Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarVisibilityTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarVisibilityTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarVisibilityTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarVisibilityTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "GetFogOfWarVisibilityTexture", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarVisibilityTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarVisibilityTexture_Statics::PropPointers), sizeof(DungeonCanvas_eventGetFogOfWarVisibilityTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarVisibilityTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarVisibilityTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonCanvas_eventGetFogOfWarVisibilityTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarVisibilityTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarVisibilityTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execGetFogOfWarVisibilityTexture)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCanvasRenderTarget2D**)Z_Param__Result=P_THIS->GetFogOfWarVisibilityTexture_Implementation();
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function GetFogOfWarVisibilityTexture

// Begin Class ADungeonCanvas Function GetTrackedOverlayActors
struct Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors_Statics
{
	struct DungeonCanvas_eventGetTrackedOverlayActors_Parms
	{
		TArray<FDungeonCanvasTrackedActorRegistryItem> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem, METADATA_PARAMS(0, nullptr) }; // 2692457891
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventGetTrackedOverlayActors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 2692457891
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "GetTrackedOverlayActors", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors_Statics::DungeonCanvas_eventGetTrackedOverlayActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors_Statics::DungeonCanvas_eventGetTrackedOverlayActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execGetTrackedOverlayActors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDungeonCanvasTrackedActorRegistryItem>*)Z_Param__Result=P_THIS->GetTrackedOverlayActors();
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function GetTrackedOverlayActors

// Begin Class ADungeonCanvas Function InsideActiveFloorHeightRange
struct Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics
{
	struct DungeonCanvas_eventInsideActiveFloorHeightRange_Parms
	{
		float HeightZ;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightZ;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics::NewProp_HeightZ = { "HeightZ", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventInsideActiveFloorHeightRange_Parms, HeightZ), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonCanvas_eventInsideActiveFloorHeightRange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonCanvas_eventInsideActiveFloorHeightRange_Parms), &Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics::NewProp_HeightZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "InsideActiveFloorHeightRange", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics::DungeonCanvas_eventInsideActiveFloorHeightRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics::DungeonCanvas_eventInsideActiveFloorHeightRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execInsideActiveFloorHeightRange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_HeightZ);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InsideActiveFloorHeightRange(Z_Param_HeightZ);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function InsideActiveFloorHeightRange

// Begin Class ADungeonCanvas Function OnDungeonBuildComplete
struct Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics
{
	struct DungeonCanvas_eventOnDungeonBuildComplete_Parms
	{
		ADungeon* InDungeon;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDungeon;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics::NewProp_InDungeon = { "InDungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventOnDungeonBuildComplete_Parms, InDungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((DungeonCanvas_eventOnDungeonBuildComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonCanvas_eventOnDungeonBuildComplete_Parms), &Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics::NewProp_InDungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "OnDungeonBuildComplete", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics::DungeonCanvas_eventOnDungeonBuildComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics::DungeonCanvas_eventOnDungeonBuildComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execOnDungeonBuildComplete)
{
	P_GET_OBJECT(ADungeon,Z_Param_InDungeon);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDungeonBuildComplete(Z_Param_InDungeon,Z_Param_bSuccess);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function OnDungeonBuildComplete

// Begin Class ADungeonCanvas Function ReceiveDraw
struct DungeonCanvas_eventReceiveDraw_Parms
{
	FDungeonCanvasDrawContext DrawContext;
};
static FName NAME_ADungeonCanvas_ReceiveDraw = FName(TEXT("ReceiveDraw"));
void ADungeonCanvas::ReceiveDraw(FDungeonCanvasDrawContext const& DrawContext)
{
	DungeonCanvas_eventReceiveDraw_Parms Parms;
	Parms.DrawContext=DrawContext;
	ProcessEvent(FindFunctionChecked(NAME_ADungeonCanvas_ReceiveDraw),&Parms);
}
struct Z_Construct_UFunction_ADungeonCanvas_ReceiveDraw_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "DisplayName", "Draw" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonCanvas_ReceiveDraw_Statics::NewProp_DrawContext = { "DrawContext", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventReceiveDraw_Parms, DrawContext), Z_Construct_UScriptStruct_FDungeonCanvasDrawContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawContext_MetaData), NewProp_DrawContext_MetaData) }; // 436659647
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_ReceiveDraw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_ReceiveDraw_Statics::NewProp_DrawContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_ReceiveDraw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_ReceiveDraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "ReceiveDraw", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_ReceiveDraw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_ReceiveDraw_Statics::PropPointers), sizeof(DungeonCanvas_eventReceiveDraw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_ReceiveDraw_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_ReceiveDraw_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonCanvas_eventReceiveDraw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_ReceiveDraw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_ReceiveDraw_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ADungeonCanvas Function ReceiveDraw

// Begin Class ADungeonCanvas Function ReceiveInitialize
static FName NAME_ADungeonCanvas_ReceiveInitialize = FName(TEXT("ReceiveInitialize"));
void ADungeonCanvas::ReceiveInitialize()
{
	ProcessEvent(FindFunctionChecked(NAME_ADungeonCanvas_ReceiveInitialize),NULL);
}
struct Z_Construct_UFunction_ADungeonCanvas_ReceiveInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "DisplayName", "Initialize" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_ReceiveInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "ReceiveInitialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_ReceiveInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_ReceiveInitialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonCanvas_ReceiveInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_ReceiveInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ADungeonCanvas Function ReceiveInitialize

// Begin Class ADungeonCanvas Function ReceiveUpdate
struct DungeonCanvas_eventReceiveUpdate_Parms
{
	FDungeonCanvasDrawContext UpdateContext;
	float DeltaSeconds;
};
static FName NAME_ADungeonCanvas_ReceiveUpdate = FName(TEXT("ReceiveUpdate"));
void ADungeonCanvas::ReceiveUpdate(FDungeonCanvasDrawContext const& UpdateContext, float DeltaSeconds)
{
	DungeonCanvas_eventReceiveUpdate_Parms Parms;
	Parms.UpdateContext=UpdateContext;
	Parms.DeltaSeconds=DeltaSeconds;
	ProcessEvent(FindFunctionChecked(NAME_ADungeonCanvas_ReceiveUpdate),&Parms);
}
struct Z_Construct_UFunction_ADungeonCanvas_ReceiveUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "DisplayName", "Update" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateContext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateContext;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonCanvas_ReceiveUpdate_Statics::NewProp_UpdateContext = { "UpdateContext", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventReceiveUpdate_Parms, UpdateContext), Z_Construct_UScriptStruct_FDungeonCanvasDrawContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateContext_MetaData), NewProp_UpdateContext_MetaData) }; // 436659647
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADungeonCanvas_ReceiveUpdate_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventReceiveUpdate_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_ReceiveUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_ReceiveUpdate_Statics::NewProp_UpdateContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_ReceiveUpdate_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_ReceiveUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_ReceiveUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "ReceiveUpdate", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_ReceiveUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_ReceiveUpdate_Statics::PropPointers), sizeof(DungeonCanvas_eventReceiveUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_ReceiveUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_ReceiveUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonCanvas_eventReceiveUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_ReceiveUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_ReceiveUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ADungeonCanvas Function ReceiveUpdate

// Begin Class ADungeonCanvas Function RequestDraw
struct Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics
{
	struct DungeonCanvas_eventRequestDraw_Parms
	{
		UCanvas* Canvas;
		int32 Width;
		int32 Height;
		FDungeonCanvasDrawSettings DrawSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Canvas;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::NewProp_Canvas = { "Canvas", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventRequestDraw_Parms, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventRequestDraw_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventRequestDraw_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::NewProp_DrawSettings = { "DrawSettings", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventRequestDraw_Parms, DrawSettings), Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings, METADATA_PARAMS(0, nullptr) }; // 1037107739
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::NewProp_Canvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::NewProp_DrawSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "RequestDraw", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::DungeonCanvas_eventRequestDraw_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::DungeonCanvas_eventRequestDraw_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_RequestDraw()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_RequestDraw_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execRequestDraw)
{
	P_GET_OBJECT(UCanvas,Z_Param_Canvas);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_GET_STRUCT(FDungeonCanvasDrawSettings,Z_Param_DrawSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestDraw(Z_Param_Canvas,Z_Param_Width,Z_Param_Height,Z_Param_DrawSettings);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function RequestDraw

// Begin Class ADungeonCanvas Function RequestInitialize
struct Z_Construct_UFunction_ADungeonCanvas_RequestInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_RequestInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "RequestInitialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_RequestInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_RequestInitialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonCanvas_RequestInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_RequestInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execRequestInitialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestInitialize();
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function RequestInitialize

// Begin Class ADungeonCanvas Function RequestUpdate
struct Z_Construct_UFunction_ADungeonCanvas_RequestUpdate_Statics
{
	struct DungeonCanvas_eventRequestUpdate_Parms
	{
		float DeltaSeconds;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADungeonCanvas_RequestUpdate_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventRequestUpdate_Parms, DeltaSeconds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_RequestUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_RequestUpdate_Statics::NewProp_DeltaSeconds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_RequestUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_RequestUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "RequestUpdate", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_RequestUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_RequestUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_RequestUpdate_Statics::DungeonCanvas_eventRequestUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_RequestUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_RequestUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_RequestUpdate_Statics::DungeonCanvas_eventRequestUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_RequestUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_RequestUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execRequestUpdate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestUpdate(Z_Param_DeltaSeconds);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function RequestUpdate

// Begin Class ADungeonCanvas Function SetCameraLocation
struct Z_Construct_UFunction_ADungeonCanvas_SetCameraLocation_Statics
{
	struct DungeonCanvas_eventSetCameraLocation_Parms
	{
		FVector WorldLocation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"DungeonCanvas\")\n//void DrawDungeonLayoutCustomLayer(const FDungeonLayoutData& DungeonLayout, const FBox& DrawBounds, UTextureRenderTarget2D* OutCustomLayerTexture, FDungeonCanvasDrawLayoutSettings DrawSettings, bool bShouldClearColor = false, FLinearColor ClearColor = FLinearColor::Black);\n" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"DungeonCanvas\")\nvoid DrawDungeonLayoutCustomLayer(const FDungeonLayoutData& DungeonLayout, const FBox& DrawBounds, UTextureRenderTarget2D* OutCustomLayerTexture, FDungeonCanvasDrawLayoutSettings DrawSettings, bool bShouldClearColor = false, FLinearColor ClearColor = FLinearColor::Black);" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonCanvas_SetCameraLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventSetCameraLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_SetCameraLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_SetCameraLocation_Statics::NewProp_WorldLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetCameraLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_SetCameraLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "SetCameraLocation", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_SetCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetCameraLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_SetCameraLocation_Statics::DungeonCanvas_eventSetCameraLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetCameraLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_SetCameraLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_SetCameraLocation_Statics::DungeonCanvas_eventSetCameraLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_SetCameraLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_SetCameraLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execSetCameraLocation)
{
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraLocation(Z_Param_WorldLocation);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function SetCameraLocation

// Begin Class ADungeonCanvas Function SetCameraSize
struct Z_Construct_UFunction_ADungeonCanvas_SetCameraSize_Statics
{
	struct DungeonCanvas_eventSetCameraSize_Parms
	{
		FVector WorldSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonCanvas_SetCameraSize_Statics::NewProp_WorldSize = { "WorldSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventSetCameraSize_Parms, WorldSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_SetCameraSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_SetCameraSize_Statics::NewProp_WorldSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetCameraSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_SetCameraSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "SetCameraSize", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_SetCameraSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetCameraSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_SetCameraSize_Statics::DungeonCanvas_eventSetCameraSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetCameraSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_SetCameraSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_SetCameraSize_Statics::DungeonCanvas_eventSetCameraSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_SetCameraSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_SetCameraSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execSetCameraSize)
{
	P_GET_STRUCT(FVector,Z_Param_WorldSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraSize(Z_Param_WorldSize);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function SetCameraSize

// Begin Class ADungeonCanvas Function SetCameraWorldTransform
struct Z_Construct_UFunction_ADungeonCanvas_SetCameraWorldTransform_Statics
{
	struct DungeonCanvas_eventSetCameraWorldTransform_Parms
	{
		FTransform WorldTransform;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonCanvas_SetCameraWorldTransform_Statics::NewProp_WorldTransform = { "WorldTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventSetCameraWorldTransform_Parms, WorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_SetCameraWorldTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_SetCameraWorldTransform_Statics::NewProp_WorldTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetCameraWorldTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_SetCameraWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "SetCameraWorldTransform", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_SetCameraWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetCameraWorldTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_SetCameraWorldTransform_Statics::DungeonCanvas_eventSetCameraWorldTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetCameraWorldTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_SetCameraWorldTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_SetCameraWorldTransform_Statics::DungeonCanvas_eventSetCameraWorldTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_SetCameraWorldTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_SetCameraWorldTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execSetCameraWorldTransform)
{
	P_GET_STRUCT(FTransform,Z_Param_WorldTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCameraWorldTransform(Z_Param_WorldTransform);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function SetCameraWorldTransform

// Begin Class ADungeonCanvas Function SetHeightRangeAcrossAllFloors
struct Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeAcrossAllFloors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeAcrossAllFloors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "SetHeightRangeAcrossAllFloors", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeAcrossAllFloors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeAcrossAllFloors_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeAcrossAllFloors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeAcrossAllFloors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execSetHeightRangeAcrossAllFloors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeightRangeAcrossAllFloors();
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function SetHeightRangeAcrossAllFloors

// Begin Class ADungeonCanvas Function SetHeightRangeCustom
struct Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom_Statics
{
	struct DungeonCanvas_eventSetHeightRangeCustom_Parms
	{
		float InHeightRangeMin;
		float InHeightRangeMax;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InHeightRangeMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InHeightRangeMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom_Statics::NewProp_InHeightRangeMin = { "InHeightRangeMin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventSetHeightRangeCustom_Parms, InHeightRangeMin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom_Statics::NewProp_InHeightRangeMax = { "InHeightRangeMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventSetHeightRangeCustom_Parms, InHeightRangeMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom_Statics::NewProp_InHeightRangeMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom_Statics::NewProp_InHeightRangeMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "SetHeightRangeCustom", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom_Statics::DungeonCanvas_eventSetHeightRangeCustom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom_Statics::DungeonCanvas_eventSetHeightRangeCustom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execSetHeightRangeCustom)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InHeightRangeMin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InHeightRangeMax);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeightRangeCustom(Z_Param_InHeightRangeMin,Z_Param_InHeightRangeMax);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function SetHeightRangeCustom

// Begin Class ADungeonCanvas Function SetHeightRangeForMultipleFloors
struct Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors_Statics
{
	struct DungeonCanvas_eventSetHeightRangeForMultipleFloors_Parms
	{
		TArray<int32> InFloorIndices;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFloorIndices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFloorIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InFloorIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors_Statics::NewProp_InFloorIndices_Inner = { "InFloorIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors_Statics::NewProp_InFloorIndices = { "InFloorIndices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventSetHeightRangeForMultipleFloors_Parms, InFloorIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFloorIndices_MetaData), NewProp_InFloorIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors_Statics::NewProp_InFloorIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors_Statics::NewProp_InFloorIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "SetHeightRangeForMultipleFloors", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors_Statics::DungeonCanvas_eventSetHeightRangeForMultipleFloors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors_Statics::DungeonCanvas_eventSetHeightRangeForMultipleFloors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execSetHeightRangeForMultipleFloors)
{
	P_GET_TARRAY_REF(int32,Z_Param_Out_InFloorIndices);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeightRangeForMultipleFloors(Z_Param_Out_InFloorIndices);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function SetHeightRangeForMultipleFloors

// Begin Class ADungeonCanvas Function SetHeightRangeForSingleFloor
struct Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForSingleFloor_Statics
{
	struct DungeonCanvas_eventSetHeightRangeForSingleFloor_Parms
	{
		int32 FloorIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FloorIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForSingleFloor_Statics::NewProp_FloorIndex = { "FloorIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventSetHeightRangeForSingleFloor_Parms, FloorIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForSingleFloor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForSingleFloor_Statics::NewProp_FloorIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForSingleFloor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForSingleFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "SetHeightRangeForSingleFloor", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForSingleFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForSingleFloor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForSingleFloor_Statics::DungeonCanvas_eventSetHeightRangeForSingleFloor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForSingleFloor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForSingleFloor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForSingleFloor_Statics::DungeonCanvas_eventSetHeightRangeForSingleFloor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForSingleFloor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForSingleFloor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execSetHeightRangeForSingleFloor)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_FloorIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeightRangeForSingleFloor(Z_Param_FloorIndex);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function SetHeightRangeForSingleFloor

// Begin Class ADungeonCanvas Function SetPlayerCanvasRotation
struct Z_Construct_UFunction_ADungeonCanvas_SetPlayerCanvasRotation_Statics
{
	struct DungeonCanvas_eventSetPlayerCanvasRotation_Parms
	{
		FRotator CanvasRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CanvasRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonCanvas_SetPlayerCanvasRotation_Statics::NewProp_CanvasRotation = { "CanvasRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventSetPlayerCanvasRotation_Parms, CanvasRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_SetPlayerCanvasRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_SetPlayerCanvasRotation_Statics::NewProp_CanvasRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetPlayerCanvasRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_SetPlayerCanvasRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "SetPlayerCanvasRotation", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_SetPlayerCanvasRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetPlayerCanvasRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADungeonCanvas_SetPlayerCanvasRotation_Statics::DungeonCanvas_eventSetPlayerCanvasRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetPlayerCanvasRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_SetPlayerCanvasRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADungeonCanvas_SetPlayerCanvasRotation_Statics::DungeonCanvas_eventSetPlayerCanvasRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_SetPlayerCanvasRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_SetPlayerCanvasRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execSetPlayerCanvasRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_CanvasRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerCanvasRotation(Z_Param_CanvasRotation);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function SetPlayerCanvasRotation

// Begin Class ADungeonCanvas Function SetupPlayer
struct DungeonCanvas_eventSetupPlayer_Parms
{
	APawn* NewPlayerPawn;
	FDungeonCanvasItemFogOfWarSettings FogOfWarSettings;
};
static FName NAME_ADungeonCanvas_SetupPlayer = FName(TEXT("SetupPlayer"));
void ADungeonCanvas::SetupPlayer(APawn* NewPlayerPawn, FDungeonCanvasItemFogOfWarSettings FogOfWarSettings)
{
	DungeonCanvas_eventSetupPlayer_Parms Parms;
	Parms.NewPlayerPawn=NewPlayerPawn;
	Parms.FogOfWarSettings=FogOfWarSettings;
	ProcessEvent(FindFunctionChecked(NAME_ADungeonCanvas_SetupPlayer),&Parms);
}
struct Z_Construct_UFunction_ADungeonCanvas_SetupPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPlayerPawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FogOfWarSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADungeonCanvas_SetupPlayer_Statics::NewProp_NewPlayerPawn = { "NewPlayerPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventSetupPlayer_Parms, NewPlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADungeonCanvas_SetupPlayer_Statics::NewProp_FogOfWarSettings = { "FogOfWarSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonCanvas_eventSetupPlayer_Parms, FogOfWarSettings), Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings, METADATA_PARAMS(0, nullptr) }; // 3412656040
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADungeonCanvas_SetupPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_SetupPlayer_Statics::NewProp_NewPlayerPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADungeonCanvas_SetupPlayer_Statics::NewProp_FogOfWarSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetupPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_SetupPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "SetupPlayer", nullptr, nullptr, Z_Construct_UFunction_ADungeonCanvas_SetupPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetupPlayer_Statics::PropPointers), sizeof(DungeonCanvas_eventSetupPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SetupPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_SetupPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonCanvas_eventSetupPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADungeonCanvas_SetupPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_SetupPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execSetupPlayer)
{
	P_GET_OBJECT(APawn,Z_Param_NewPlayerPawn);
	P_GET_STRUCT(FDungeonCanvasItemFogOfWarSettings,Z_Param_FogOfWarSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetupPlayer_Implementation(Z_Param_NewPlayerPawn,Z_Param_FogOfWarSettings);
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function SetupPlayer

// Begin Class ADungeonCanvas Function SyncFogOfWarItemState
struct Z_Construct_UFunction_ADungeonCanvas_SyncFogOfWarItemState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_SyncFogOfWarItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "SyncFogOfWarItemState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_SyncFogOfWarItemState_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_SyncFogOfWarItemState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonCanvas_SyncFogOfWarItemState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_SyncFogOfWarItemState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execSyncFogOfWarItemState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SyncFogOfWarItemState();
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function SyncFogOfWarItemState

// Begin Class ADungeonCanvas Function TickPlayer
static FName NAME_ADungeonCanvas_TickPlayer = FName(TEXT("TickPlayer"));
void ADungeonCanvas::TickPlayer()
{
	ProcessEvent(FindFunctionChecked(NAME_ADungeonCanvas_TickPlayer),NULL);
}
struct Z_Construct_UFunction_ADungeonCanvas_TickPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADungeonCanvas_TickPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADungeonCanvas, nullptr, "TickPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADungeonCanvas_TickPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADungeonCanvas_TickPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ADungeonCanvas_TickPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADungeonCanvas_TickPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADungeonCanvas::execTickPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TickPlayer_Implementation();
	P_NATIVE_END;
}
// End Class ADungeonCanvas Function TickPlayer

// Begin Class ADungeonCanvas
void ADungeonCanvas::StaticRegisterNativesADungeonCanvas()
{
	UClass* Class = ADungeonCanvas::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddFogOfWarExplorer", &ADungeonCanvas::execAddFogOfWarExplorer },
		{ "AddTrackedOverlayActor", &ADungeonCanvas::execAddTrackedOverlayActor },
		{ "CreateManagedTexture", &ADungeonCanvas::execCreateManagedTexture },
		{ "CreateMaterialInstance", &ADungeonCanvas::execCreateMaterialInstance },
		{ "DrawDungeonLayout", &ADungeonCanvas::execDrawDungeonLayout },
		{ "GetCanvasBaseMaterial", &ADungeonCanvas::execGetCanvasBaseMaterial },
		{ "GetFloorIndexAtHeight", &ADungeonCanvas::execGetFloorIndexAtHeight },
		{ "GetFogOfWarExploredTexture", &ADungeonCanvas::execGetFogOfWarExploredTexture },
		{ "GetFogOfWarVisibilityTexture", &ADungeonCanvas::execGetFogOfWarVisibilityTexture },
		{ "GetTrackedOverlayActors", &ADungeonCanvas::execGetTrackedOverlayActors },
		{ "InsideActiveFloorHeightRange", &ADungeonCanvas::execInsideActiveFloorHeightRange },
		{ "OnDungeonBuildComplete", &ADungeonCanvas::execOnDungeonBuildComplete },
		{ "RequestDraw", &ADungeonCanvas::execRequestDraw },
		{ "RequestInitialize", &ADungeonCanvas::execRequestInitialize },
		{ "RequestUpdate", &ADungeonCanvas::execRequestUpdate },
		{ "SetCameraLocation", &ADungeonCanvas::execSetCameraLocation },
		{ "SetCameraSize", &ADungeonCanvas::execSetCameraSize },
		{ "SetCameraWorldTransform", &ADungeonCanvas::execSetCameraWorldTransform },
		{ "SetHeightRangeAcrossAllFloors", &ADungeonCanvas::execSetHeightRangeAcrossAllFloors },
		{ "SetHeightRangeCustom", &ADungeonCanvas::execSetHeightRangeCustom },
		{ "SetHeightRangeForMultipleFloors", &ADungeonCanvas::execSetHeightRangeForMultipleFloors },
		{ "SetHeightRangeForSingleFloor", &ADungeonCanvas::execSetHeightRangeForSingleFloor },
		{ "SetPlayerCanvasRotation", &ADungeonCanvas::execSetPlayerCanvasRotation },
		{ "SetupPlayer", &ADungeonCanvas::execSetupPlayer },
		{ "SyncFogOfWarItemState", &ADungeonCanvas::execSyncFogOfWarItemState },
		{ "TickPlayer", &ADungeonCanvas::execTickPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonCanvas);
UClass* Z_Construct_UClass_ADungeonCanvas_NoRegister()
{
	return ADungeonCanvas::StaticClass();
}
struct Z_Construct_UClass_ADungeonCanvas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/Canvas/DungeonCanvas.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dungeon_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayoutDrawMarginPercent_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effects_Inner_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[] = {
		{ "Category", "Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonLayout_MetaData[] = {
		{ "Category", "DungeonCanvas" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarItemStateUpdateFPS_MetaData[] = {
		{ "Category", "Fog Of War" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* The items in the scene, like Tracked Overlay Actors, will have their fog of war data fetched from the GPU texture buffer. Control the frequency here */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The items in the scene, like Tracked Overlay Actors, will have their fog of war data fetched from the GPU texture buffer. Control the frequency here" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialTemplateCanvas_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialTemplateFogOfWar_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEditorPreviewMode_MetaData[] = {
		{ "Category", "DungeonCanvas" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If this instance is used for the editor viewport preview, DA sets this flag and lets the\n\x09 * designer render the preview viewport differently, e.g. disable fog of war\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this instance is used for the editor viewport preview, DA sets this flag and lets the\ndesigner render the preview viewport differently, e.g. disable fog of war" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The unique ID of this dungeon canvas */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique ID of this dungeon canvas" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagedRenderTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedOverlayActors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewportTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullDungeonTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCanvasRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DungeonTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LayoutDrawMarginPercent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Effects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DungeonLayout;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FogOfWarItemStateUpdateFPS;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialTemplateCanvas;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MaterialTemplateFogOfWar;
	static void NewProp_bEditorPreviewMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditorPreviewMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ManagedRenderTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ManagedRenderTargets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackedOverlayActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedOverlayActors;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewportTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FullDungeonTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerCanvasRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DungeonTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADungeonCanvas_AddFogOfWarExplorer, "AddFogOfWarExplorer" }, // 3965953935
		{ &Z_Construct_UFunction_ADungeonCanvas_AddTrackedOverlayActor, "AddTrackedOverlayActor" }, // 1528405404
		{ &Z_Construct_UFunction_ADungeonCanvas_CreateManagedTexture, "CreateManagedTexture" }, // 1142547845
		{ &Z_Construct_UFunction_ADungeonCanvas_CreateMaterialInstance, "CreateMaterialInstance" }, // 2305272142
		{ &Z_Construct_UFunction_ADungeonCanvas_DrawDungeonLayout, "DrawDungeonLayout" }, // 2251434871
		{ &Z_Construct_UFunction_ADungeonCanvas_GetCanvasBaseMaterial, "GetCanvasBaseMaterial" }, // 4116442473
		{ &Z_Construct_UFunction_ADungeonCanvas_GetFloorIndexAtHeight, "GetFloorIndexAtHeight" }, // 4220772542
		{ &Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarExploredTexture, "GetFogOfWarExploredTexture" }, // 191249752
		{ &Z_Construct_UFunction_ADungeonCanvas_GetFogOfWarVisibilityTexture, "GetFogOfWarVisibilityTexture" }, // 3322631155
		{ &Z_Construct_UFunction_ADungeonCanvas_GetTrackedOverlayActors, "GetTrackedOverlayActors" }, // 1921987322
		{ &Z_Construct_UFunction_ADungeonCanvas_InsideActiveFloorHeightRange, "InsideActiveFloorHeightRange" }, // 1982003629
		{ &Z_Construct_UFunction_ADungeonCanvas_OnDungeonBuildComplete, "OnDungeonBuildComplete" }, // 1833647390
		{ &Z_Construct_UFunction_ADungeonCanvas_ReceiveDraw, "ReceiveDraw" }, // 3755116335
		{ &Z_Construct_UFunction_ADungeonCanvas_ReceiveInitialize, "ReceiveInitialize" }, // 2654346316
		{ &Z_Construct_UFunction_ADungeonCanvas_ReceiveUpdate, "ReceiveUpdate" }, // 4006789295
		{ &Z_Construct_UFunction_ADungeonCanvas_RequestDraw, "RequestDraw" }, // 2175694547
		{ &Z_Construct_UFunction_ADungeonCanvas_RequestInitialize, "RequestInitialize" }, // 2561036108
		{ &Z_Construct_UFunction_ADungeonCanvas_RequestUpdate, "RequestUpdate" }, // 690811184
		{ &Z_Construct_UFunction_ADungeonCanvas_SetCameraLocation, "SetCameraLocation" }, // 1131090550
		{ &Z_Construct_UFunction_ADungeonCanvas_SetCameraSize, "SetCameraSize" }, // 467669486
		{ &Z_Construct_UFunction_ADungeonCanvas_SetCameraWorldTransform, "SetCameraWorldTransform" }, // 4024829963
		{ &Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeAcrossAllFloors, "SetHeightRangeAcrossAllFloors" }, // 3315568183
		{ &Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeCustom, "SetHeightRangeCustom" }, // 1255917885
		{ &Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForMultipleFloors, "SetHeightRangeForMultipleFloors" }, // 321909855
		{ &Z_Construct_UFunction_ADungeonCanvas_SetHeightRangeForSingleFloor, "SetHeightRangeForSingleFloor" }, // 836376838
		{ &Z_Construct_UFunction_ADungeonCanvas_SetPlayerCanvasRotation, "SetPlayerCanvasRotation" }, // 3194762863
		{ &Z_Construct_UFunction_ADungeonCanvas_SetupPlayer, "SetupPlayer" }, // 515853034
		{ &Z_Construct_UFunction_ADungeonCanvas_SyncFogOfWarItemState, "SyncFogOfWarItemState" }, // 2203667500
		{ &Z_Construct_UFunction_ADungeonCanvas_TickPlayer, "TickPlayer" }, // 3254386341
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonCanvas>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvas, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dungeon_MetaData), NewProp_Dungeon_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_LayoutDrawMarginPercent = { "LayoutDrawMarginPercent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvas, LayoutDrawMarginPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayoutDrawMarginPercent_MetaData), NewProp_LayoutDrawMarginPercent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonCanvasEffectBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effects_Inner_MetaData), NewProp_Effects_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x001002800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvas, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Effects_MetaData), NewProp_Effects_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_DungeonLayout = { "DungeonLayout", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvas, DungeonLayout), Z_Construct_UScriptStruct_FDungeonLayoutData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonLayout_MetaData), NewProp_DungeonLayout_MetaData) }; // 444206174
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_FogOfWarItemStateUpdateFPS = { "FogOfWarItemStateUpdateFPS", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvas, FogOfWarItemStateUpdateFPS), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogOfWarItemStateUpdateFPS_MetaData), NewProp_FogOfWarItemStateUpdateFPS_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_MaterialTemplateCanvas = { "MaterialTemplateCanvas", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvas, MaterialTemplateCanvas), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialTemplateCanvas_MetaData), NewProp_MaterialTemplateCanvas_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_MaterialTemplateFogOfWar = { "MaterialTemplateFogOfWar", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvas, MaterialTemplateFogOfWar), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialTemplateFogOfWar_MetaData), NewProp_MaterialTemplateFogOfWar_MetaData) };
void Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_bEditorPreviewMode_SetBit(void* Obj)
{
	((ADungeonCanvas*)Obj)->bEditorPreviewMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_bEditorPreviewMode = { "bEditorPreviewMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ADungeonCanvas), &Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_bEditorPreviewMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEditorPreviewMode_MetaData), NewProp_bEditorPreviewMode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvas, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_ManagedRenderTargets_Inner = { "ManagedRenderTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCanvasRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_ManagedRenderTargets = { "ManagedRenderTargets", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvas, ManagedRenderTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagedRenderTargets_MetaData), NewProp_ManagedRenderTargets_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_TrackedOverlayActors_Inner = { "TrackedOverlayActors", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem, METADATA_PARAMS(0, nullptr) }; // 2692457891
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_TrackedOverlayActors = { "TrackedOverlayActors", nullptr, (EPropertyFlags)0x0040008000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvas, TrackedOverlayActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedOverlayActors_MetaData), NewProp_TrackedOverlayActors_MetaData) }; // 2692457891
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvas, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SceneRoot_MetaData), NewProp_SceneRoot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_ViewportTransform = { "ViewportTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvas, ViewportTransform), Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewportTransform_MetaData), NewProp_ViewportTransform_MetaData) }; // 3106622410
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_FullDungeonTransform = { "FullDungeonTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvas, FullDungeonTransform), Z_Construct_UScriptStruct_FDungeonCanvasViewportTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullDungeonTransform_MetaData), NewProp_FullDungeonTransform_MetaData) }; // 3106622410
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_PlayerCanvasRotation = { "PlayerCanvasRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvas, PlayerCanvasRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCanvasRotation_MetaData), NewProp_PlayerCanvasRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_DungeonTransform = { "DungeonTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonCanvas, DungeonTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DungeonTransform_MetaData), NewProp_DungeonTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonCanvas_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_Dungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_LayoutDrawMarginPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_Effects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_Effects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_DungeonLayout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_FogOfWarItemStateUpdateFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_MaterialTemplateCanvas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_MaterialTemplateFogOfWar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_bEditorPreviewMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_ManagedRenderTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_ManagedRenderTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_TrackedOverlayActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_TrackedOverlayActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_SceneRoot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_ViewportTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_FullDungeonTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_PlayerCanvasRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonCanvas_Statics::NewProp_DungeonTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonCanvas_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonCanvas_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonCanvas_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonCanvas_Statics::ClassParams = {
	&ADungeonCanvas::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADungeonCanvas_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonCanvas_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonCanvas_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonCanvas_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonCanvas()
{
	if (!Z_Registration_Info_UClass_ADungeonCanvas.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonCanvas.OuterSingleton, Z_Construct_UClass_ADungeonCanvas_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonCanvas.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonCanvas>()
{
	return ADungeonCanvas::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonCanvas);
ADungeonCanvas::~ADungeonCanvas() {}
// End Class ADungeonCanvas

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDungeonCanvasDrawSettings::StaticStruct, Z_Construct_UScriptStruct_FDungeonCanvasDrawSettings_Statics::NewStructOps, TEXT("DungeonCanvasDrawSettings"), &Z_Registration_Info_UScriptStruct_DungeonCanvasDrawSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonCanvasDrawSettings), 1037107739U) },
		{ FDungeonCanvasDrawContext::StaticStruct, Z_Construct_UScriptStruct_FDungeonCanvasDrawContext_Statics::NewStructOps, TEXT("DungeonCanvasDrawContext"), &Z_Registration_Info_UScriptStruct_DungeonCanvasDrawContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonCanvasDrawContext), 436659647U) },
		{ FDungeonCanvasTrackedActorRegistryItem::StaticStruct, Z_Construct_UScriptStruct_FDungeonCanvasTrackedActorRegistryItem_Statics::NewStructOps, TEXT("DungeonCanvasTrackedActorRegistryItem"), &Z_Registration_Info_UScriptStruct_DungeonCanvasTrackedActorRegistryItem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonCanvasTrackedActorRegistryItem), 2692457891U) },
		{ FDungeonCanvasItemFogOfWarSettings::StaticStruct, Z_Construct_UScriptStruct_FDungeonCanvasItemFogOfWarSettings_Statics::NewStructOps, TEXT("DungeonCanvasItemFogOfWarSettings"), &Z_Registration_Info_UScriptStruct_DungeonCanvasItemFogOfWarSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDungeonCanvasItemFogOfWarSettings), 3412656040U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonCanvasActorIconFilter, UDungeonCanvasActorIconFilter::StaticClass, TEXT("UDungeonCanvasActorIconFilter"), &Z_Registration_Info_UClass_UDungeonCanvasActorIconFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonCanvasActorIconFilter), 3055661282U) },
		{ Z_Construct_UClass_UDungeonCanvasCircularFrameActorIconFilter, UDungeonCanvasCircularFrameActorIconFilter::StaticClass, TEXT("UDungeonCanvasCircularFrameActorIconFilter"), &Z_Registration_Info_UClass_UDungeonCanvasCircularFrameActorIconFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonCanvasCircularFrameActorIconFilter), 2523107253U) },
		{ Z_Construct_UClass_UDungeonCanvasEffectBase, UDungeonCanvasEffectBase::StaticClass, TEXT("UDungeonCanvasEffectBase"), &Z_Registration_Info_UClass_UDungeonCanvasEffectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonCanvasEffectBase), 2235622320U) },
		{ Z_Construct_UClass_UDungeonCanvasMaterialLayer, UDungeonCanvasMaterialLayer::StaticClass, TEXT("UDungeonCanvasMaterialLayer"), &Z_Registration_Info_UClass_UDungeonCanvasMaterialLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonCanvasMaterialLayer), 396202383U) },
		{ Z_Construct_UClass_ADungeonCanvas, ADungeonCanvas::StaticClass, TEXT("ADungeonCanvas"), &Z_Registration_Info_UClass_ADungeonCanvas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonCanvas), 2136851195U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_1082017037(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvas_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
