// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_DungeonParticleSystem() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonActorBase();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UEdGraphNode_DungeonParticleSystem
void UEdGraphNode_DungeonParticleSystem::StaticRegisterNativesUEdGraphNode_DungeonParticleSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_DungeonParticleSystem);
UClass* Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem_NoRegister()
{
	return UEdGraphNode_DungeonParticleSystem::StaticClass();
}
struct Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonParticleSystem.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonParticleSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonParticleSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_DungeonParticleSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_DungeonParticleSystem, ParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleSystem_MetaData), NewProp_ParticleSystem_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem_Statics::NewProp_ParticleSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode_DungeonActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem_Statics::ClassParams = {
	&UEdGraphNode_DungeonParticleSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem()
{
	if (!Z_Registration_Info_UClass_UEdGraphNode_DungeonParticleSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_DungeonParticleSystem.OuterSingleton, Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraphNode_DungeonParticleSystem.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphNode_DungeonParticleSystem>()
{
	return UEdGraphNode_DungeonParticleSystem::StaticClass();
}
UEdGraphNode_DungeonParticleSystem::UEdGraphNode_DungeonParticleSystem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_DungeonParticleSystem);
UEdGraphNode_DungeonParticleSystem::~UEdGraphNode_DungeonParticleSystem() {}
// End Class UEdGraphNode_DungeonParticleSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonParticleSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_DungeonParticleSystem, UEdGraphNode_DungeonParticleSystem::StaticClass, TEXT("UEdGraphNode_DungeonParticleSystem"), &Z_Registration_Info_UClass_UEdGraphNode_DungeonParticleSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_DungeonParticleSystem), 1362942482U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonParticleSystem_h_2204858531(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonParticleSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonParticleSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
