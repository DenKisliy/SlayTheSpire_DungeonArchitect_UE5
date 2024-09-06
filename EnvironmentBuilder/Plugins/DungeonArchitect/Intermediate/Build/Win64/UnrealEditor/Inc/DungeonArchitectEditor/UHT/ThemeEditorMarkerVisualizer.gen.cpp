// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/Visualization/ThemeEditorMarkerVisualizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThemeEditorMarkerVisualizer() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_AThemeEditorMarkerVisualizer();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_AThemeEditorMarkerVisualizer_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDAProcMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class AThemeEditorMarkerVisualizer
void AThemeEditorMarkerVisualizer::StaticRegisterNativesAThemeEditorMarkerVisualizer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AThemeEditorMarkerVisualizer);
UClass* Z_Construct_UClass_AThemeEditorMarkerVisualizer_NoRegister()
{
	return AThemeEditorMarkerVisualizer::StaticClass();
}
struct Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/Visualization/ThemeEditorMarkerVisualizer.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/Visualization/ThemeEditorMarkerVisualizer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/Visualization/ThemeEditorMarkerVisualizer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThemeEditorMarkerVisualizer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AThemeEditorMarkerVisualizer, MeshComponent), Z_Construct_UClass_UDAProcMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::NewProp_MeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::ClassParams = {
	&AThemeEditorMarkerVisualizer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::Class_MetaDataParams), Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AThemeEditorMarkerVisualizer()
{
	if (!Z_Registration_Info_UClass_AThemeEditorMarkerVisualizer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AThemeEditorMarkerVisualizer.OuterSingleton, Z_Construct_UClass_AThemeEditorMarkerVisualizer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AThemeEditorMarkerVisualizer.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<AThemeEditorMarkerVisualizer>()
{
	return AThemeEditorMarkerVisualizer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AThemeEditorMarkerVisualizer);
AThemeEditorMarkerVisualizer::~AThemeEditorMarkerVisualizer() {}
// End Class AThemeEditorMarkerVisualizer

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_Visualization_ThemeEditorMarkerVisualizer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AThemeEditorMarkerVisualizer, AThemeEditorMarkerVisualizer::StaticClass, TEXT("AThemeEditorMarkerVisualizer"), &Z_Registration_Info_UClass_AThemeEditorMarkerVisualizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AThemeEditorMarkerVisualizer), 2042195468U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_Visualization_ThemeEditorMarkerVisualizer_h_505330399(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_Visualization_ThemeEditorMarkerVisualizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_Visualization_ThemeEditorMarkerVisualizer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
