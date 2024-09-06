// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/GraphGrammar/RuleGraph/EdGraph_Grammar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraph_Grammar() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraph_Grammar();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraph_Grammar_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UEdGraph_Grammar
void UEdGraph_Grammar::StaticRegisterNativesUEdGraph_Grammar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraph_Grammar);
UClass* Z_Construct_UClass_UEdGraph_Grammar_NoRegister()
{
	return UEdGraph_Grammar::StaticClass();
}
struct Z_Construct_UClass_UEdGraph_Grammar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/RuleGraph/EdGraph_Grammar.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/EdGraph_Grammar.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraph_Grammar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEdGraph_Grammar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Grammar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraph_Grammar_Statics::ClassParams = {
	&UEdGraph_Grammar::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_Grammar_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraph_Grammar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraph_Grammar()
{
	if (!Z_Registration_Info_UClass_UEdGraph_Grammar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraph_Grammar.OuterSingleton, Z_Construct_UClass_UEdGraph_Grammar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraph_Grammar.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraph_Grammar>()
{
	return UEdGraph_Grammar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraph_Grammar);
UEdGraph_Grammar::~UEdGraph_Grammar() {}
// End Class UEdGraph_Grammar

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraph_Grammar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraph_Grammar, UEdGraph_Grammar::StaticClass, TEXT("UEdGraph_Grammar"), &Z_Registration_Info_UClass_UEdGraph_Grammar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraph_Grammar), 219101530U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraph_Grammar_h_3023019000(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraph_Grammar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_EdGraph_Grammar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
