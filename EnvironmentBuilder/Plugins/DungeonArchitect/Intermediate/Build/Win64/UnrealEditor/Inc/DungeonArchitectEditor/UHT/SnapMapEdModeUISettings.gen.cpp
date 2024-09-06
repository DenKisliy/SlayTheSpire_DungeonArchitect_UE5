// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Builders/SnapMap/EditorMode/UI/SnapMapEdModeUISettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapEdModeUISettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapEdModeUISettings();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapMapEdModeUISettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class USnapMapEdModeUISettings
void USnapMapEdModeUISettings::StaticRegisterNativesUSnapMapEdModeUISettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapEdModeUISettings);
UClass* Z_Construct_UClass_USnapMapEdModeUISettings_NoRegister()
{
	return USnapMapEdModeUISettings::StaticClass();
}
struct Z_Construct_UClass_USnapMapEdModeUISettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builders/SnapMap/EditorMode/UI/SnapMapEdModeUISettings.h" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/EditorMode/UI/SnapMapEdModeUISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNeonVisuals_MetaData[] = {
		{ "Category", "SnapMap" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lets you emit your own markers into the scene */" },
#endif
		{ "ModuleRelativePath", "Public/Builders/SnapMap/EditorMode/UI/SnapMapEdModeUISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lets you emit your own markers into the scene" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bNeonVisuals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeonVisuals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapEdModeUISettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_USnapMapEdModeUISettings_Statics::NewProp_bNeonVisuals_SetBit(void* Obj)
{
	((USnapMapEdModeUISettings*)Obj)->bNeonVisuals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapMapEdModeUISettings_Statics::NewProp_bNeonVisuals = { "bNeonVisuals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USnapMapEdModeUISettings), &Z_Construct_UClass_USnapMapEdModeUISettings_Statics::NewProp_bNeonVisuals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNeonVisuals_MetaData), NewProp_bNeonVisuals_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapMapEdModeUISettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapEdModeUISettings_Statics::NewProp_bNeonVisuals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEdModeUISettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapMapEdModeUISettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEdModeUISettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapEdModeUISettings_Statics::ClassParams = {
	&USnapMapEdModeUISettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapMapEdModeUISettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEdModeUISettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapEdModeUISettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapMapEdModeUISettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapMapEdModeUISettings()
{
	if (!Z_Registration_Info_UClass_USnapMapEdModeUISettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapEdModeUISettings.OuterSingleton, Z_Construct_UClass_USnapMapEdModeUISettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapMapEdModeUISettings.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapMapEdModeUISettings>()
{
	return USnapMapEdModeUISettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapEdModeUISettings);
USnapMapEdModeUISettings::~USnapMapEdModeUISettings() {}
// End Class USnapMapEdModeUISettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_UI_SnapMapEdModeUISettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapEdModeUISettings, USnapMapEdModeUISettings::StaticClass, TEXT("USnapMapEdModeUISettings"), &Z_Registration_Info_UClass_USnapMapEdModeUISettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapEdModeUISettings), 3559085220U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_UI_SnapMapEdModeUISettings_h_2654482348(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_UI_SnapMapEdModeUISettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_SnapMap_EditorMode_UI_SnapMapEdModeUISettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
