// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphSchema_Extensions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphSchema_Extensions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_Extensions();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphSchema_Extensions_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UEdGraphSchema_Extensions
void UEdGraphSchema_Extensions::StaticRegisterNativesUEdGraphSchema_Extensions()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphSchema_Extensions);
UClass* Z_Construct_UClass_UEdGraphSchema_Extensions_NoRegister()
{
	return UEdGraphSchema_Extensions::StaticClass();
}
struct Z_Construct_UClass_UEdGraphSchema_Extensions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphSchema_Extensions.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphSchema_Extensions.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphSchema_Extensions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEdGraphSchema_Extensions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_Extensions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphSchema_Extensions_Statics::ClassParams = {
	&UEdGraphSchema_Extensions::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphSchema_Extensions_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphSchema_Extensions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraphSchema_Extensions()
{
	if (!Z_Registration_Info_UClass_UEdGraphSchema_Extensions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphSchema_Extensions.OuterSingleton, Z_Construct_UClass_UEdGraphSchema_Extensions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraphSchema_Extensions.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphSchema_Extensions>()
{
	return UEdGraphSchema_Extensions::StaticClass();
}
UEdGraphSchema_Extensions::UEdGraphSchema_Extensions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphSchema_Extensions);
UEdGraphSchema_Extensions::~UEdGraphSchema_Extensions() {}
// End Class UEdGraphSchema_Extensions

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_Extensions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphSchema_Extensions, UEdGraphSchema_Extensions::StaticClass, TEXT("UEdGraphSchema_Extensions"), &Z_Registration_Info_UClass_UEdGraphSchema_Extensions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphSchema_Extensions), 4157059096U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_Extensions_h_1338302942(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_Extensions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphSchema_Extensions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
