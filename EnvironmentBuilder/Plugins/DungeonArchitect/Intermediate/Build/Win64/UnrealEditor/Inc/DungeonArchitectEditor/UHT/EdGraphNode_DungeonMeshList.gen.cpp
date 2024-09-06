// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMeshList.h"
#include "DungeonArchitectRuntime/Public/Core/Actors/DungeonMeshList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_DungeonMeshList() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonActorBase();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonMeshList();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonMeshList_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonActorTemplateListItem();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDungeonMeshListItem();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UEdGraphNode_DungeonMeshList
void UEdGraphNode_DungeonMeshList::StaticRegisterNativesUEdGraphNode_DungeonMeshList()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_DungeonMeshList);
UClass* Z_Construct_UClass_UEdGraphNode_DungeonMeshList_NoRegister()
{
	return UEdGraphNode_DungeonMeshList::StaticClass();
}
struct Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMeshList.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMeshList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMeshList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blueprints_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMeshList.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Meshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Blueprints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Blueprints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_DungeonMeshList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonMeshListItem, METADATA_PARAMS(0, nullptr) }; // 2451025421
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_DungeonMeshList, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meshes_MetaData), NewProp_Meshes_MetaData) }; // 2451025421
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::NewProp_Blueprints_Inner = { "Blueprints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDungeonActorTemplateListItem, METADATA_PARAMS(0, nullptr) }; // 2283579774
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::NewProp_Blueprints = { "Blueprints", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_DungeonMeshList, Blueprints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blueprints_MetaData), NewProp_Blueprints_MetaData) }; // 2283579774
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::NewProp_Meshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::NewProp_Meshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::NewProp_Blueprints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::NewProp_Blueprints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode_DungeonActorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::ClassParams = {
	&UEdGraphNode_DungeonMeshList::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraphNode_DungeonMeshList()
{
	if (!Z_Registration_Info_UClass_UEdGraphNode_DungeonMeshList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_DungeonMeshList.OuterSingleton, Z_Construct_UClass_UEdGraphNode_DungeonMeshList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraphNode_DungeonMeshList.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphNode_DungeonMeshList>()
{
	return UEdGraphNode_DungeonMeshList::StaticClass();
}
UEdGraphNode_DungeonMeshList::UEdGraphNode_DungeonMeshList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_DungeonMeshList);
UEdGraphNode_DungeonMeshList::~UEdGraphNode_DungeonMeshList() {}
// End Class UEdGraphNode_DungeonMeshList

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonMeshList_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_DungeonMeshList, UEdGraphNode_DungeonMeshList::StaticClass, TEXT("UEdGraphNode_DungeonMeshList"), &Z_Registration_Info_UClass_UEdGraphNode_DungeonMeshList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_DungeonMeshList), 2143511525U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonMeshList_h_1804185008(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonMeshList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonMeshList_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
