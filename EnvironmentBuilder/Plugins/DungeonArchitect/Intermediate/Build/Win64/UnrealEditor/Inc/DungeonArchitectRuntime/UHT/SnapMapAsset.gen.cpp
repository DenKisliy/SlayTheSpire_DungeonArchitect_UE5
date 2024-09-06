// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/SnapMap/SnapMapAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapMapAsset() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGraphGrammar_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapAsset();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapMapAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapMapAsset
void USnapMapAsset::StaticRegisterNativesUSnapMapAsset()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapMapAsset);
UClass* Z_Construct_UClass_USnapMapAsset_NoRegister()
{
	return USnapMapAsset::StaticClass();
}
struct Z_Construct_UClass_USnapMapAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This class represents the data model for the dungeon flow graph */" },
#endif
		{ "DisplayName", "SnapMap Flow Graph" },
		{ "IncludePath", "Builders/SnapMap/SnapMapAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class represents the data model for the dungeon flow graph" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MissionGrammar_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapAsset.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewDungeonConfigCopy_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Save a copy of the editor's preview dungeon so when it is reopened, the config is restored\n" },
#endif
		{ "ModuleRelativePath", "Public/Builders/SnapMap/SnapMapAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Save a copy of the editor's preview dungeon so when it is reopened, the config is restored" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MissionGrammar;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewDungeonConfigCopy;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapMapAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapMapAsset_Statics::NewProp_MissionGrammar = { "MissionGrammar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapAsset, MissionGrammar), Z_Construct_UClass_UGraphGrammar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MissionGrammar_MetaData), NewProp_MissionGrammar_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapMapAsset_Statics::NewProp_PreviewDungeonConfigCopy = { "PreviewDungeonConfigCopy", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapMapAsset, PreviewDungeonConfigCopy), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewDungeonConfigCopy_MetaData), NewProp_PreviewDungeonConfigCopy_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapMapAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapAsset_Statics::NewProp_MissionGrammar,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapMapAsset_Statics::NewProp_PreviewDungeonConfigCopy,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapAsset_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapMapAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapMapAsset_Statics::ClassParams = {
	&USnapMapAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapMapAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapMapAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapMapAsset_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapMapAsset()
{
	if (!Z_Registration_Info_UClass_USnapMapAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapMapAsset.OuterSingleton, Z_Construct_UClass_USnapMapAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapMapAsset.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapMapAsset>()
{
	return USnapMapAsset::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapMapAsset);
USnapMapAsset::~USnapMapAsset() {}
// End Class USnapMapAsset

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapAsset_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapMapAsset, USnapMapAsset::StaticClass, TEXT("USnapMapAsset"), &Z_Registration_Info_UClass_USnapMapAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapMapAsset), 2603311557U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapAsset_h_3201591439(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_SnapMap_SnapMapAsset_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
