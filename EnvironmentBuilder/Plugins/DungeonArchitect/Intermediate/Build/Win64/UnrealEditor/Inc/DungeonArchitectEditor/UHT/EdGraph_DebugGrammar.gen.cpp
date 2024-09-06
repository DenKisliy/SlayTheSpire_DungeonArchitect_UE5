// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Frameworks/GraphGrammar/RuleGraph/Debugging/EdGraph_DebugGrammar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraph_DebugGrammar() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraph_DebugGrammar();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraph_DebugGrammar_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraph_Grammar();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UEdGraph_DebugGrammar
void UEdGraph_DebugGrammar::StaticRegisterNativesUEdGraph_DebugGrammar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraph_DebugGrammar);
UClass* Z_Construct_UClass_UEdGraph_DebugGrammar_NoRegister()
{
	return UEdGraph_DebugGrammar::StaticClass();
}
struct Z_Construct_UClass_UEdGraph_DebugGrammar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/GraphGrammar/RuleGraph/Debugging/EdGraph_DebugGrammar.h" },
		{ "ModuleRelativePath", "Public/Frameworks/GraphGrammar/RuleGraph/Debugging/EdGraph_DebugGrammar.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraph_DebugGrammar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEdGraph_DebugGrammar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph_Grammar,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_DebugGrammar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraph_DebugGrammar_Statics::ClassParams = {
	&UEdGraph_DebugGrammar::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_DebugGrammar_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraph_DebugGrammar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraph_DebugGrammar()
{
	if (!Z_Registration_Info_UClass_UEdGraph_DebugGrammar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraph_DebugGrammar.OuterSingleton, Z_Construct_UClass_UEdGraph_DebugGrammar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraph_DebugGrammar.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraph_DebugGrammar>()
{
	return UEdGraph_DebugGrammar::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraph_DebugGrammar);
UEdGraph_DebugGrammar::~UEdGraph_DebugGrammar() {}
// End Class UEdGraph_DebugGrammar

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Debugging_EdGraph_DebugGrammar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraph_DebugGrammar, UEdGraph_DebugGrammar::StaticClass, TEXT("UEdGraph_DebugGrammar"), &Z_Registration_Info_UClass_UEdGraph_DebugGrammar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraph_DebugGrammar), 2100855860U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Debugging_EdGraph_DebugGrammar_h_1281432587(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Debugging_EdGraph_DebugGrammar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Frameworks_GraphGrammar_RuleGraph_Debugging_EdGraph_DebugGrammar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
