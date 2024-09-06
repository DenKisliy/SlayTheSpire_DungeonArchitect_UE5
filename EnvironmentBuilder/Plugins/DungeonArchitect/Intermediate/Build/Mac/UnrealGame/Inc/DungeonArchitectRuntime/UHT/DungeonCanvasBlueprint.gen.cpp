// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Canvas/DungeonCanvasBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonCanvasBlueprint() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasBlueprint();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasBlueprint_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasEditorViewportProperties();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonCanvasMaterialLayer_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonEditorViewportProperties();
ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonCanvasEditorViewportProperties
void UDungeonCanvasEditorViewportProperties::StaticRegisterNativesUDungeonCanvasEditorViewportProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonCanvasEditorViewportProperties);
UClass* Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_NoRegister()
{
	return UDungeonCanvasEditorViewportProperties::StaticClass();
}
struct Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Canvas/DungeonCanvasBlueprint.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeDungeonOnBuild_MetaData[] = {
		{ "Category", "Builder" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprint.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bRandomizeDungeonOnBuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeDungeonOnBuild;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonCanvasEditorViewportProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_Statics::NewProp_bRandomizeDungeonOnBuild_SetBit(void* Obj)
{
	((UDungeonCanvasEditorViewportProperties*)Obj)->bRandomizeDungeonOnBuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_Statics::NewProp_bRandomizeDungeonOnBuild = { "bRandomizeDungeonOnBuild", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonCanvasEditorViewportProperties), &Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_Statics::NewProp_bRandomizeDungeonOnBuild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomizeDungeonOnBuild_MetaData), NewProp_bRandomizeDungeonOnBuild_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_Statics::NewProp_bRandomizeDungeonOnBuild,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonEditorViewportProperties,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_Statics::ClassParams = {
	&UDungeonCanvasEditorViewportProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonCanvasEditorViewportProperties()
{
	if (!Z_Registration_Info_UClass_UDungeonCanvasEditorViewportProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonCanvasEditorViewportProperties.OuterSingleton, Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonCanvasEditorViewportProperties.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonCanvasEditorViewportProperties>()
{
	return UDungeonCanvasEditorViewportProperties::StaticClass();
}
UDungeonCanvasEditorViewportProperties::UDungeonCanvasEditorViewportProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonCanvasEditorViewportProperties);
UDungeonCanvasEditorViewportProperties::~UDungeonCanvasEditorViewportProperties() {}
// End Class UDungeonCanvasEditorViewportProperties

// Begin Class UDungeonCanvasBlueprint
void UDungeonCanvasBlueprint::StaticRegisterNativesUDungeonCanvasBlueprint()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonCanvasBlueprint);
UClass* Z_Construct_UClass_UDungeonCanvasBlueprint_NoRegister()
{
	return UDungeonCanvasBlueprint::StaticClass();
}
struct Z_Construct_UClass_UDungeonCanvasBlueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DontUseGenericSpawnObject", "true" },
		{ "IgnoreClassThumbnail", "" },
		{ "IncludePath", "Frameworks/Canvas/DungeonCanvasBlueprint.h" },
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewDungeonProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialLayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Canvas/DungeonCanvasBlueprint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewDungeonProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialLayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonCanvasBlueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::NewProp_PreviewDungeonProperties = { "PreviewDungeonProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasBlueprint, PreviewDungeonProperties), Z_Construct_UClass_UDungeonCanvasEditorViewportProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewDungeonProperties_MetaData), NewProp_PreviewDungeonProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::NewProp_MaterialLayers_Inner = { "MaterialLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDungeonCanvasMaterialLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::NewProp_MaterialLayers = { "MaterialLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasBlueprint, MaterialLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialLayers_MetaData), NewProp_MaterialLayers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonCanvasBlueprint, MaterialInstance), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialInstance_MetaData), NewProp_MaterialInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::NewProp_PreviewDungeonProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::NewProp_MaterialLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::NewProp_MaterialLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::NewProp_MaterialInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprint,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::ClassParams = {
	&UDungeonCanvasBlueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonCanvasBlueprint()
{
	if (!Z_Registration_Info_UClass_UDungeonCanvasBlueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonCanvasBlueprint.OuterSingleton, Z_Construct_UClass_UDungeonCanvasBlueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonCanvasBlueprint.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonCanvasBlueprint>()
{
	return UDungeonCanvasBlueprint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonCanvasBlueprint);
UDungeonCanvasBlueprint::~UDungeonCanvasBlueprint() {}
// End Class UDungeonCanvasBlueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonCanvasEditorViewportProperties, UDungeonCanvasEditorViewportProperties::StaticClass, TEXT("UDungeonCanvasEditorViewportProperties"), &Z_Registration_Info_UClass_UDungeonCanvasEditorViewportProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonCanvasEditorViewportProperties), 3512904424U) },
		{ Z_Construct_UClass_UDungeonCanvasBlueprint, UDungeonCanvasBlueprint::StaticClass, TEXT("UDungeonCanvasBlueprint"), &Z_Registration_Info_UClass_UDungeonCanvasBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonCanvasBlueprint), 2969017905U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprint_h_399625871(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Canvas_DungeonCanvasBlueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
