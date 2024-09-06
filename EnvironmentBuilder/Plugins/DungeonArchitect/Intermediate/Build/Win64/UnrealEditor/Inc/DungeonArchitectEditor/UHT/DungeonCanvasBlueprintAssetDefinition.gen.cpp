// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/Assets/Canvas/DungeonCanvasBlueprintAssetDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonCanvasBlueprintAssetDefinition() {}

// Begin Cross Module References
ASSETDEFINITION_API UClass* Z_Construct_UClass_UAssetDefinition();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonCanvasBlueprintAssetDefinition();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonCanvasBlueprintAssetDefinition_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UDungeonCanvasBlueprintAssetDefinition
void UDungeonCanvasBlueprintAssetDefinition::StaticRegisterNativesUDungeonCanvasBlueprintAssetDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonCanvasBlueprintAssetDefinition);
UClass* Z_Construct_UClass_UDungeonCanvasBlueprintAssetDefinition_NoRegister()
{
	return UDungeonCanvasBlueprintAssetDefinition::StaticClass();
}
struct Z_Construct_UClass_UDungeonCanvasBlueprintAssetDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/Assets/Canvas/DungeonCanvasBlueprintAssetDefinition.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Assets/Canvas/DungeonCanvasBlueprintAssetDefinition.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonCanvasBlueprintAssetDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonCanvasBlueprintAssetDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetDefinition,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasBlueprintAssetDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonCanvasBlueprintAssetDefinition_Statics::ClassParams = {
	&UDungeonCanvasBlueprintAssetDefinition::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonCanvasBlueprintAssetDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonCanvasBlueprintAssetDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonCanvasBlueprintAssetDefinition()
{
	if (!Z_Registration_Info_UClass_UDungeonCanvasBlueprintAssetDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonCanvasBlueprintAssetDefinition.OuterSingleton, Z_Construct_UClass_UDungeonCanvasBlueprintAssetDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonCanvasBlueprintAssetDefinition.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UDungeonCanvasBlueprintAssetDefinition>()
{
	return UDungeonCanvasBlueprintAssetDefinition::StaticClass();
}
UDungeonCanvasBlueprintAssetDefinition::UDungeonCanvasBlueprintAssetDefinition() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonCanvasBlueprintAssetDefinition);
UDungeonCanvasBlueprintAssetDefinition::~UDungeonCanvasBlueprintAssetDefinition() {}
// End Class UDungeonCanvasBlueprintAssetDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_Canvas_DungeonCanvasBlueprintAssetDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonCanvasBlueprintAssetDefinition, UDungeonCanvasBlueprintAssetDefinition::StaticClass, TEXT("UDungeonCanvasBlueprintAssetDefinition"), &Z_Registration_Info_UClass_UDungeonCanvasBlueprintAssetDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonCanvasBlueprintAssetDefinition), 374473624U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_Canvas_DungeonCanvasBlueprintAssetDefinition_h_700086101(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_Canvas_DungeonCanvasBlueprintAssetDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Assets_Canvas_DungeonCanvasBlueprintAssetDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
