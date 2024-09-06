// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/Customizations/DungeonActorEditorCustomization.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonActorEditorCustomization() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapGridFlowModuleDBImportSettings();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class USnapGridFlowModuleDBImportSettings
void USnapGridFlowModuleDBImportSettings::StaticRegisterNativesUSnapGridFlowModuleDBImportSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapGridFlowModuleDBImportSettings);
UClass* Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_NoRegister()
{
	return USnapGridFlowModuleDBImportSettings::StaticClass();
}
struct Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/Customizations/DungeonActorEditorCustomization.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Customizations/DungeonActorEditorCustomization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Customizations/DungeonActorEditorCustomization.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRotation_MetaData[] = {
		{ "Category", "Module" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Customizations/DungeonActorEditorCustomization.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Category;
	static void NewProp_bAllowRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapGridFlowModuleDBImportSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapGridFlowModuleDBImportSettings, Category), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Category_MetaData), NewProp_Category_MetaData) };
void Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_bAllowRotation_SetBit(void* Obj)
{
	((USnapGridFlowModuleDBImportSettings*)Obj)->bAllowRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_bAllowRotation = { "bAllowRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USnapGridFlowModuleDBImportSettings), &Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_bAllowRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowRotation_MetaData), NewProp_bAllowRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_Category,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::NewProp_bAllowRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::ClassParams = {
	&USnapGridFlowModuleDBImportSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapGridFlowModuleDBImportSettings()
{
	if (!Z_Registration_Info_UClass_USnapGridFlowModuleDBImportSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapGridFlowModuleDBImportSettings.OuterSingleton, Z_Construct_UClass_USnapGridFlowModuleDBImportSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapGridFlowModuleDBImportSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<USnapGridFlowModuleDBImportSettings>()
{
	return USnapGridFlowModuleDBImportSettings::StaticClass();
}
USnapGridFlowModuleDBImportSettings::USnapGridFlowModuleDBImportSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapGridFlowModuleDBImportSettings);
USnapGridFlowModuleDBImportSettings::~USnapGridFlowModuleDBImportSettings() {}
// End Class USnapGridFlowModuleDBImportSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Customizations_DungeonActorEditorCustomization_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapGridFlowModuleDBImportSettings, USnapGridFlowModuleDBImportSettings::StaticClass, TEXT("USnapGridFlowModuleDBImportSettings"), &Z_Registration_Info_UClass_USnapGridFlowModuleDBImportSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapGridFlowModuleDBImportSettings), 2112068305U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Customizations_DungeonActorEditorCustomization_h_481682587(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Customizations_DungeonActorEditorCustomization_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Customizations_DungeonActorEditorCustomization_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
