// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/MarkerGenerator/MarkerGenPattern.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarkerGenPattern() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenPattern();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenPattern_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenPatternRule();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenPatternRule_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScript_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UMarkerGenPatternRule
void UMarkerGenPatternRule::StaticRegisterNativesUMarkerGenPatternRule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMarkerGenPatternRule);
UClass* Z_Construct_UClass_UMarkerGenPatternRule_NoRegister()
{
	return UMarkerGenPatternRule::StaticClass();
}
struct Z_Construct_UClass_UMarkerGenPatternRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/MarkerGenPattern.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuleId_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHintWillInsertAssetHere_MetaData[] = {
		{ "Category", "Pattern Rule" },
		{ "Comment", "/**\n\x09 * Tell the system that you'll be inserting an art asset at this location\n\x09 * By default, if the rule graph emits a marker (EmitMarker action node), it would know that this position would be occupied by an art asset.\n\x09 * In cases where you'd insert a larger asset, e.g. a 2x2 tile, you'd use the EmitMarker node in one of the 2x2 position and the system\n\x09 * needs to know that the nearby 3 tiles would also be occupied. Go to each one and set this hint so your final result does not have overlaps\n\x09 */" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
		{ "ToolTip", "Tell the system that you'll be inserting an art asset at this location\nBy default, if the rule graph emits a marker (EmitMarker action node), it would know that this position would be occupied by an art asset.\nIn cases where you'd insert a larger asset, e.g. a 2x2 tile, you'd use the EmitMarker node in one of the 2x2 position and the system\nneeds to know that the nearby 3 tiles would also be occupied. Go to each one and set this hint so your final result does not have overlaps" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuleScript_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisuallyDominant_MetaData[] = {
		{ "Category", "Visuals" },
		{ "Comment", "// Make the editor rule block pop out in the scene.   This is purely visual, disable it for blocks whose visuals get in the way and don't really contribute to the pattern you're looking for\n" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
		{ "ToolTip", "Make the editor rule block pop out in the scene.   This is purely visual, disable it for blocks whose visuals get in the way and don't really contribute to the pattern you're looking for" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "Category", "Visuals" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuleEdGraph_MetaData[] = {
		{ "Comment", "/** EdGraph based representation */" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
		{ "ToolTip", "EdGraph based representation" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "Category", "Advanced" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuleId;
	static void NewProp_bHintWillInsertAssetHere_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHintWillInsertAssetHere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuleScript;
#if WITH_EDITORONLY_DATA
	static void NewProp_bVisuallyDominant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisuallyDominant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuleEdGraph;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMarkerGenPatternRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleId = { "RuleId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarkerGenPatternRule, RuleId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuleId_MetaData), NewProp_RuleId_MetaData) };
void Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bHintWillInsertAssetHere_SetBit(void* Obj)
{
	((UMarkerGenPatternRule*)Obj)->bHintWillInsertAssetHere = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bHintWillInsertAssetHere = { "bHintWillInsertAssetHere", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMarkerGenPatternRule), &Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bHintWillInsertAssetHere_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHintWillInsertAssetHere_MetaData), NewProp_bHintWillInsertAssetHere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleScript = { "RuleScript", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarkerGenPatternRule, RuleScript), Z_Construct_UClass_UMGPatternScript_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuleScript_MetaData), NewProp_RuleScript_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bVisuallyDominant_SetBit(void* Obj)
{
	((UMarkerGenPatternRule*)Obj)->bVisuallyDominant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bVisuallyDominant = { "bVisuallyDominant", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMarkerGenPatternRule), &Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bVisuallyDominant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisuallyDominant_MetaData), NewProp_bVisuallyDominant_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarkerGenPatternRule, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleEdGraph = { "RuleEdGraph", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarkerGenPatternRule, RuleEdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuleEdGraph_MetaData), NewProp_RuleEdGraph_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarkerGenPatternRule, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMarkerGenPatternRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bHintWillInsertAssetHere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleScript,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_bVisuallyDominant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_RuleEdGraph,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPatternRule_Statics::NewProp_Tags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPatternRule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMarkerGenPatternRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPatternRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMarkerGenPatternRule_Statics::ClassParams = {
	&UMarkerGenPatternRule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMarkerGenPatternRule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPatternRule_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPatternRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UMarkerGenPatternRule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMarkerGenPatternRule()
{
	if (!Z_Registration_Info_UClass_UMarkerGenPatternRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMarkerGenPatternRule.OuterSingleton, Z_Construct_UClass_UMarkerGenPatternRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMarkerGenPatternRule.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMarkerGenPatternRule>()
{
	return UMarkerGenPatternRule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMarkerGenPatternRule);
UMarkerGenPatternRule::~UMarkerGenPatternRule() {}
// End Class UMarkerGenPatternRule

// Begin Class UMarkerGenPattern
void UMarkerGenPattern::StaticRegisterNativesUMarkerGenPattern()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMarkerGenPattern);
UClass* Z_Construct_UClass_UMarkerGenPattern_NoRegister()
{
	return UMarkerGenPattern::StaticClass();
}
struct Z_Construct_UClass_UMarkerGenPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/MarkerGenPattern.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenPattern.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Rules_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Rules;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMarkerGenPattern>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMarkerGenPattern_Statics::NewProp_Rules_Inner = { "Rules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMarkerGenPatternRule_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMarkerGenPattern_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarkerGenPattern, Rules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rules_MetaData), NewProp_Rules_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMarkerGenPattern_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPattern_Statics::NewProp_Rules_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenPattern_Statics::NewProp_Rules,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPattern_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMarkerGenPattern_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPattern_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMarkerGenPattern_Statics::ClassParams = {
	&UMarkerGenPattern::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMarkerGenPattern_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPattern_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenPattern_Statics::Class_MetaDataParams), Z_Construct_UClass_UMarkerGenPattern_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMarkerGenPattern()
{
	if (!Z_Registration_Info_UClass_UMarkerGenPattern.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMarkerGenPattern.OuterSingleton, Z_Construct_UClass_UMarkerGenPattern_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMarkerGenPattern.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMarkerGenPattern>()
{
	return UMarkerGenPattern::StaticClass();
}
UMarkerGenPattern::UMarkerGenPattern(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMarkerGenPattern);
UMarkerGenPattern::~UMarkerGenPattern() {}
// End Class UMarkerGenPattern

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenPattern_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMarkerGenPatternRule, UMarkerGenPatternRule::StaticClass, TEXT("UMarkerGenPatternRule"), &Z_Registration_Info_UClass_UMarkerGenPatternRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMarkerGenPatternRule), 343035768U) },
		{ Z_Construct_UClass_UMarkerGenPattern, UMarkerGenPattern::StaticClass, TEXT("UMarkerGenPattern"), &Z_Registration_Info_UClass_UMarkerGenPattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMarkerGenPattern), 1922469147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenPattern_h_1805923087(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenPattern_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenPattern_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
