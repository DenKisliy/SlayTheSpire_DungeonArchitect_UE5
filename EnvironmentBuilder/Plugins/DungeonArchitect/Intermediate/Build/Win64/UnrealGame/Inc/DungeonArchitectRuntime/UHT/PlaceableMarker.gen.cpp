// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaceableMarker() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_APlaceableMarkerActor();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_APlaceableMarkerActor_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UPlaceableMarkerAsset();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UPlaceableMarkerAsset_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UPlaceableMarkerComponent();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UPlaceableMarkerComponent_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FPlaceableMarkerAssetSpriteSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlaceableMarkerAssetSpriteSettings;
class UScriptStruct* FPlaceableMarkerAssetSpriteSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlaceableMarkerAssetSpriteSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlaceableMarkerAssetSpriteSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("PlaceableMarkerAssetSpriteSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PlaceableMarkerAssetSpriteSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FPlaceableMarkerAssetSpriteSettings>()
{
	return FPlaceableMarkerAssetSpriteSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffsetZ_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OffsetZ;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaceableMarkerAssetSpriteSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaceableMarkerAssetSpriteSettings, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewProp_OffsetZ = { "OffsetZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlaceableMarkerAssetSpriteSettings, OffsetZ), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffsetZ_MetaData), NewProp_OffsetZ_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewProp_OffsetZ,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"PlaceableMarkerAssetSpriteSettings",
	Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::PropPointers),
	sizeof(FPlaceableMarkerAssetSpriteSettings),
	alignof(FPlaceableMarkerAssetSpriteSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings()
{
	if (!Z_Registration_Info_UScriptStruct_PlaceableMarkerAssetSpriteSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlaceableMarkerAssetSpriteSettings.InnerSingleton, Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlaceableMarkerAssetSpriteSettings.InnerSingleton;
}
// End ScriptStruct FPlaceableMarkerAssetSpriteSettings

// Begin Class UPlaceableMarkerAsset
void UPlaceableMarkerAsset::StaticRegisterNativesUPlaceableMarkerAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaceableMarkerAsset);
UClass* Z_Construct_UClass_UPlaceableMarkerAsset_NoRegister()
{
	return UPlaceableMarkerAsset::StaticClass();
}
struct Z_Construct_UClass_UPlaceableMarkerAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerNames_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSprite_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "Comment", "/** An editor-only sprite to attach to the placed actor. This is purely for visual purpose while designing your levels */" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
		{ "ToolTip", "An editor-only sprite to attach to the placed actor. This is purely for visual purpose while designing your levels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSpriteSettings_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_MarkerNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MarkerNames;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewSprite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviewSpriteSettings;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaceableMarkerAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_MarkerNames_Inner = { "MarkerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_MarkerNames = { "MarkerNames", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaceableMarkerAsset, MarkerNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerNames_MetaData), NewProp_MarkerNames_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaceableMarkerAsset, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_PreviewSprite = { "PreviewSprite", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaceableMarkerAsset, PreviewSprite), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewSprite_MetaData), NewProp_PreviewSprite_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_PreviewSpriteSettings = { "PreviewSpriteSettings", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaceableMarkerAsset, PreviewSpriteSettings), Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewSpriteSettings_MetaData), NewProp_PreviewSpriteSettings_MetaData) }; // 2633535155
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaceableMarkerAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_MarkerNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_MarkerNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_Version,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_PreviewSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableMarkerAsset_Statics::NewProp_PreviewSpriteSettings,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlaceableMarkerAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaceableMarkerAsset_Statics::ClassParams = {
	&UPlaceableMarkerAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlaceableMarkerAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlaceableMarkerAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlaceableMarkerAsset()
{
	if (!Z_Registration_Info_UClass_UPlaceableMarkerAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaceableMarkerAsset.OuterSingleton, Z_Construct_UClass_UPlaceableMarkerAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlaceableMarkerAsset.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UPlaceableMarkerAsset>()
{
	return UPlaceableMarkerAsset::StaticClass();
}
UPlaceableMarkerAsset::UPlaceableMarkerAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaceableMarkerAsset);
UPlaceableMarkerAsset::~UPlaceableMarkerAsset() {}
// End Class UPlaceableMarkerAsset

// Begin Class UPlaceableMarkerComponent
void UPlaceableMarkerComponent::StaticRegisterNativesUPlaceableMarkerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlaceableMarkerComponent);
UClass* Z_Construct_UClass_UPlaceableMarkerComponent_NoRegister()
{
	return UPlaceableMarkerComponent::StaticClass();
}
struct Z_Construct_UClass_UPlaceableMarkerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Place a marker on to the world.   If the theme engine picks this component up (which depends on the builder),\n * then it will spawn the objects defined in the theme file under the specified marker name\n */" },
		{ "HideCategories", "Rendering Input Actor Misc Replication Collision LOD Cooking Trigger PhysicsVolume" },
		{ "IncludePath", "Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
		{ "ToolTip", "Place a marker on to the world.   If the theme engine picks this component up (which depends on the builder),\nthen it will spawn the objects defined in the theme file under the specified marker name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerAsset_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlaceableMarkerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlaceableMarkerComponent_Statics::NewProp_MarkerAsset = { "MarkerAsset", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPlaceableMarkerComponent, MarkerAsset), Z_Construct_UClass_UPlaceableMarkerAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerAsset_MetaData), NewProp_MarkerAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlaceableMarkerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlaceableMarkerComponent_Statics::NewProp_MarkerAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPlaceableMarkerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlaceableMarkerComponent_Statics::ClassParams = {
	&UPlaceableMarkerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UPlaceableMarkerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlaceableMarkerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlaceableMarkerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlaceableMarkerComponent()
{
	if (!Z_Registration_Info_UClass_UPlaceableMarkerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlaceableMarkerComponent.OuterSingleton, Z_Construct_UClass_UPlaceableMarkerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlaceableMarkerComponent.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UPlaceableMarkerComponent>()
{
	return UPlaceableMarkerComponent::StaticClass();
}
UPlaceableMarkerComponent::UPlaceableMarkerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlaceableMarkerComponent);
UPlaceableMarkerComponent::~UPlaceableMarkerComponent() {}
// End Class UPlaceableMarkerComponent

// Begin Class APlaceableMarkerActor
void APlaceableMarkerActor::StaticRegisterNativesAPlaceableMarkerActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlaceableMarkerActor);
UClass* Z_Construct_UClass_APlaceableMarkerActor_NoRegister()
{
	return APlaceableMarkerActor::StaticClass();
}
struct Z_Construct_UClass_APlaceableMarkerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Rendering Input Actor Misc Replication Collision LOD Cooking" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
		{ "IsBlueprintBase", "true" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaceableMarkerComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Dungeon" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/ThemeEngine/Markers/PlaceableMarker.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlaceableMarkerComponent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlaceableMarkerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_PlaceableMarkerComponent = { "PlaceableMarkerComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlaceableMarkerActor, PlaceableMarkerComponent), Z_Construct_UClass_UPlaceableMarkerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaceableMarkerComponent_MetaData), NewProp_PlaceableMarkerComponent_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0010000800080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlaceableMarkerActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0010000800082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlaceableMarkerActor, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowComponent_MetaData), NewProp_ArrowComponent_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlaceableMarkerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_PlaceableMarkerComponent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_SpriteComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaceableMarkerActor_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableMarkerActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlaceableMarkerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableMarkerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlaceableMarkerActor_Statics::ClassParams = {
	&APlaceableMarkerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlaceableMarkerActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableMarkerActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableMarkerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APlaceableMarkerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlaceableMarkerActor()
{
	if (!Z_Registration_Info_UClass_APlaceableMarkerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlaceableMarkerActor.OuterSingleton, Z_Construct_UClass_APlaceableMarkerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlaceableMarkerActor.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<APlaceableMarkerActor>()
{
	return APlaceableMarkerActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlaceableMarkerActor);
APlaceableMarkerActor::~APlaceableMarkerActor() {}
// End Class APlaceableMarkerActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_PlaceableMarker_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlaceableMarkerAssetSpriteSettings::StaticStruct, Z_Construct_UScriptStruct_FPlaceableMarkerAssetSpriteSettings_Statics::NewStructOps, TEXT("PlaceableMarkerAssetSpriteSettings"), &Z_Registration_Info_UScriptStruct_PlaceableMarkerAssetSpriteSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaceableMarkerAssetSpriteSettings), 2633535155U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlaceableMarkerAsset, UPlaceableMarkerAsset::StaticClass, TEXT("UPlaceableMarkerAsset"), &Z_Registration_Info_UClass_UPlaceableMarkerAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaceableMarkerAsset), 3591185270U) },
		{ Z_Construct_UClass_UPlaceableMarkerComponent, UPlaceableMarkerComponent::StaticClass, TEXT("UPlaceableMarkerComponent"), &Z_Registration_Info_UClass_UPlaceableMarkerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlaceableMarkerComponent), 2022872451U) },
		{ Z_Construct_UClass_APlaceableMarkerActor, APlaceableMarkerActor::StaticClass, TEXT("APlaceableMarkerActor"), &Z_Registration_Info_UClass_APlaceableMarkerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlaceableMarkerActor), 1005876418U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_PlaceableMarker_h_2429812698(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_PlaceableMarker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_PlaceableMarker_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_PlaceableMarker_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_ThemeEngine_Markers_PlaceableMarker_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
