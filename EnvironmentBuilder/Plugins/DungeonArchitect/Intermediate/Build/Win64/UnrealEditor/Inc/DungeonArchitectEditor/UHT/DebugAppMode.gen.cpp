// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/SnapMapEditor/AppModes/DebugAppMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugAppMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UPackage();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_ASnapMapFlowEditorVisualization();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_ASnapMapFlowEditorVisualization_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ULevelStreamingDynamic_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class ASnapMapFlowEditorVisualization
void ASnapMapFlowEditorVisualization::StaticRegisterNativesASnapMapFlowEditorVisualization()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASnapMapFlowEditorVisualization);
UClass* Z_Construct_UClass_ASnapMapFlowEditorVisualization_NoRegister()
{
	return ASnapMapFlowEditorVisualization::StaticClass();
}
struct Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/////////////////////// ASnapMapFlowEditorVisualization ///////////////////////\n" },
#endif
		{ "IncludePath", "Core/Editors/SnapMapEditor/AppModes/DebugAppMode.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/AppModes/DebugAppMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ASnapMapFlowEditorVisualization" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedLevels_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/AppModes/DebugAppMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedPackages_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/AppModes/DebugAppMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/AppModes/DebugAppMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/SnapMapEditor/AppModes/DebugAppMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedLevels_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedLevels_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LoadedLevels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedPackages_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadedPackages_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LoadedPackages;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugDrawBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugDrawColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASnapMapFlowEditorVisualization>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedLevels_ValueProp = { "LoadedLevels", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_ULevelStreamingDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedLevels_Key_KeyProp = { "LoadedLevels_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedLevels = { "LoadedLevels", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapMapFlowEditorVisualization, LoadedLevels), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedLevels_MetaData), NewProp_LoadedLevels_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedPackages_ValueProp = { "LoadedPackages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPackage, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedPackages_Key_KeyProp = { "LoadedPackages_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedPackages = { "LoadedPackages", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapMapFlowEditorVisualization, LoadedPackages), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedPackages_MetaData), NewProp_LoadedPackages_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_DebugDrawBounds = { "DebugDrawBounds", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapMapFlowEditorVisualization, DebugDrawBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawBounds_MetaData), NewProp_DebugDrawBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_DebugDrawColor = { "DebugDrawColor", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASnapMapFlowEditorVisualization, DebugDrawColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugDrawColor_MetaData), NewProp_DebugDrawColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedLevels_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedLevels_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedPackages_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedPackages_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_LoadedPackages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_DebugDrawBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::NewProp_DebugDrawColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::ClassParams = {
	&ASnapMapFlowEditorVisualization::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::PropPointers),
	0,
	0x048000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::Class_MetaDataParams), Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASnapMapFlowEditorVisualization()
{
	if (!Z_Registration_Info_UClass_ASnapMapFlowEditorVisualization.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASnapMapFlowEditorVisualization.OuterSingleton, Z_Construct_UClass_ASnapMapFlowEditorVisualization_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASnapMapFlowEditorVisualization.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<ASnapMapFlowEditorVisualization>()
{
	return ASnapMapFlowEditorVisualization::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASnapMapFlowEditorVisualization);
ASnapMapFlowEditorVisualization::~ASnapMapFlowEditorVisualization() {}
// End Class ASnapMapFlowEditorVisualization

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_AppModes_DebugAppMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASnapMapFlowEditorVisualization, ASnapMapFlowEditorVisualization::StaticClass, TEXT("ASnapMapFlowEditorVisualization"), &Z_Registration_Info_UClass_ASnapMapFlowEditorVisualization, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASnapMapFlowEditorVisualization), 969731140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_AppModes_DebugAppMode_h_1608793753(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_AppModes_DebugAppMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_SnapMapEditor_AppModes_DebugAppMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
