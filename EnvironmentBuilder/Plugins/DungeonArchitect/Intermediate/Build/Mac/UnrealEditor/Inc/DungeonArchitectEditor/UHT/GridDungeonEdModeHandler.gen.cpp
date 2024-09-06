// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Builders/Grid/EditorMode/GridDungeonEdModeHandler.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridDungeonEdModeHandler() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UDungeonEdModeHandler();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridDungeonEdModeHandler();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UGridDungeonEdModeHandler_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class UGridDungeonEdModeHandler
void UGridDungeonEdModeHandler::StaticRegisterNativesUGridDungeonEdModeHandler()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridDungeonEdModeHandler);
UClass* Z_Construct_UClass_UGridDungeonEdModeHandler_NoRegister()
{
	return UGridDungeonEdModeHandler::StaticClass();
}
struct Z_Construct_UClass_UGridDungeonEdModeHandler_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Builders/Grid/EditorMode/GridDungeonEdModeHandler.h" },
		{ "ModuleRelativePath", "Public/Builders/Grid/EditorMode/GridDungeonEdModeHandler.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridDungeonEdModeHandler>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGridDungeonEdModeHandler_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonEdModeHandler,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonEdModeHandler_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridDungeonEdModeHandler_Statics::ClassParams = {
	&UGridDungeonEdModeHandler::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridDungeonEdModeHandler_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridDungeonEdModeHandler_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridDungeonEdModeHandler()
{
	if (!Z_Registration_Info_UClass_UGridDungeonEdModeHandler.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridDungeonEdModeHandler.OuterSingleton, Z_Construct_UClass_UGridDungeonEdModeHandler_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridDungeonEdModeHandler.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UGridDungeonEdModeHandler>()
{
	return UGridDungeonEdModeHandler::StaticClass();
}
UGridDungeonEdModeHandler::UGridDungeonEdModeHandler(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridDungeonEdModeHandler);
UGridDungeonEdModeHandler::~UGridDungeonEdModeHandler() {}
// End Class UGridDungeonEdModeHandler

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_Grid_EditorMode_GridDungeonEdModeHandler_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridDungeonEdModeHandler, UGridDungeonEdModeHandler::StaticClass, TEXT("UGridDungeonEdModeHandler"), &Z_Registration_Info_UClass_UGridDungeonEdModeHandler, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridDungeonEdModeHandler), 255063457U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_Grid_EditorMode_GridDungeonEdModeHandler_h_97181216(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_Grid_EditorMode_GridDungeonEdModeHandler_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Builders_Grid_EditorMode_GridDungeonEdModeHandler_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
