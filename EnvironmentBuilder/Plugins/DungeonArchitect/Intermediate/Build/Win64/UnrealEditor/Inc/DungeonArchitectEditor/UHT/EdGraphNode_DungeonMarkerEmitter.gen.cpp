// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMarkerEmitter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraphNode_DungeonMarkerEmitter() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonBase();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonMarker_NoRegister();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UEdGraphNode_DungeonMarkerEmitter
void UEdGraphNode_DungeonMarkerEmitter::StaticRegisterNativesUEdGraphNode_DungeonMarkerEmitter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraphNode_DungeonMarkerEmitter);
UClass* Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_NoRegister()
{
	return UEdGraphNode_DungeonMarkerEmitter::StaticClass();
}
struct Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMarkerEmitter.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMarkerEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentMarker_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMarkerEmitter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/ThemeGraph/Graph/EdGraphNode_DungeonMarkerEmitter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentMarker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraphNode_DungeonMarkerEmitter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_Statics::NewProp_ParentMarker = { "ParentMarker", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_DungeonMarkerEmitter, ParentMarker), Z_Construct_UClass_UEdGraphNode_DungeonMarker_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentMarker_MetaData), NewProp_ParentMarker_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraphNode_DungeonMarkerEmitter, Offset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_Statics::NewProp_ParentMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_Statics::NewProp_Offset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode_DungeonBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_Statics::ClassParams = {
	&UEdGraphNode_DungeonMarkerEmitter::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter()
{
	if (!Z_Registration_Info_UClass_UEdGraphNode_DungeonMarkerEmitter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraphNode_DungeonMarkerEmitter.OuterSingleton, Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraphNode_DungeonMarkerEmitter.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UEdGraphNode_DungeonMarkerEmitter>()
{
	return UEdGraphNode_DungeonMarkerEmitter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraphNode_DungeonMarkerEmitter);
UEdGraphNode_DungeonMarkerEmitter::~UEdGraphNode_DungeonMarkerEmitter() {}
// End Class UEdGraphNode_DungeonMarkerEmitter

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonMarkerEmitter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraphNode_DungeonMarkerEmitter, UEdGraphNode_DungeonMarkerEmitter::StaticClass, TEXT("UEdGraphNode_DungeonMarkerEmitter"), &Z_Registration_Info_UClass_UEdGraphNode_DungeonMarkerEmitter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraphNode_DungeonMarkerEmitter), 1651795628U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonMarkerEmitter_h_557121433(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonMarkerEmitter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_ThemeGraph_Graph_EdGraphNode_DungeonMarkerEmitter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
