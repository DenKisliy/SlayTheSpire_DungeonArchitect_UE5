// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/LevelEditor/Config/CustomInputMapping.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomInputMapping() {}

// Begin Cross Module References
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_ADACustomInputConfigBinder();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_ADACustomInputConfigBinder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin Class ADACustomInputConfigBinder
void ADACustomInputConfigBinder::StaticRegisterNativesADACustomInputConfigBinder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADACustomInputConfigBinder);
UClass* Z_Construct_UClass_ADACustomInputConfigBinder_NoRegister()
{
	return ADACustomInputConfigBinder::StaticClass();
}
struct Z_Construct_UClass_ADACustomInputConfigBinder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/LevelEditor/Config/CustomInputMapping.h" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Config/CustomInputMapping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** List of Action Mappings */" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Config/CustomInputMapping.h" },
		{ "ToolTip", "List of Action Mappings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AxisMappings_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** List of Axis Mappings */" },
		{ "ModuleRelativePath", "Public/Core/LevelEditor/Config/CustomInputMapping.h" },
		{ "ToolTip", "List of Axis Mappings" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionMappings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AxisMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AxisMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADACustomInputConfigBinder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_ActionMappings_Inner = { "ActionMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 3236058125
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_ActionMappings = { "ActionMappings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADACustomInputConfigBinder, ActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionMappings_MetaData), NewProp_ActionMappings_MetaData) }; // 3236058125
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_AxisMappings_Inner = { "AxisMappings", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(0, nullptr) }; // 2680743740
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_AxisMappings = { "AxisMappings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADACustomInputConfigBinder, AxisMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AxisMappings_MetaData), NewProp_AxisMappings_MetaData) }; // 2680743740
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADACustomInputConfigBinder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_ActionMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_ActionMappings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_AxisMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADACustomInputConfigBinder_Statics::NewProp_AxisMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADACustomInputConfigBinder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADACustomInputConfigBinder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADACustomInputConfigBinder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADACustomInputConfigBinder_Statics::ClassParams = {
	&ADACustomInputConfigBinder::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADACustomInputConfigBinder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADACustomInputConfigBinder_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADACustomInputConfigBinder_Statics::Class_MetaDataParams), Z_Construct_UClass_ADACustomInputConfigBinder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADACustomInputConfigBinder()
{
	if (!Z_Registration_Info_UClass_ADACustomInputConfigBinder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADACustomInputConfigBinder.OuterSingleton, Z_Construct_UClass_ADACustomInputConfigBinder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADACustomInputConfigBinder.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<ADACustomInputConfigBinder>()
{
	return ADACustomInputConfigBinder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADACustomInputConfigBinder);
ADACustomInputConfigBinder::~ADACustomInputConfigBinder() {}
// End Class ADACustomInputConfigBinder

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Config_CustomInputMapping_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADACustomInputConfigBinder, ADACustomInputConfigBinder::StaticClass, TEXT("ADACustomInputConfigBinder"), &Z_Registration_Info_UClass_ADACustomInputConfigBinder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADACustomInputConfigBinder), 4072318761U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Config_CustomInputMapping_h_889205888(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Config_CustomInputMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_LevelEditor_Config_CustomInputMapping_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
