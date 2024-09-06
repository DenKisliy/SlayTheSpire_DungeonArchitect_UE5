// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Connection/Deprecated/SnapConnectionDeprecatedStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapConnectionInfo() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonThemeAsset_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapConnectionInfo();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapConnectionInfo_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class USnapConnectionInfo
void USnapConnectionInfo::StaticRegisterNativesUSnapConnectionInfo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapConnectionInfo);
UClass* Z_Construct_UClass_USnapConnectionInfo_NoRegister()
{
	return USnapConnectionInfo::StaticClass();
}
struct Z_Construct_UClass_USnapConnectionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionCategory_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVerticalDoor_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "Comment", "/** Check this if you are create a vertical door to move between floors */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
		{ "ToolTip", "Check this if you are create a vertical door to move between floors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectionWidth_MetaData[] = {
		{ "Category", "SnapMap" },
		{ "Comment", "/** Check this if you are create a vertical door to move between floors */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
		{ "ToolTip", "Check this if you are create a vertical door to move between floors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThemeAsset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WallVisuals_MetaData[] = {
		{ "Comment", "/** Deprecated property. This value is now fetched from the connection theme graph */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
		{ "ToolTip", "Deprecated property. This value is now fetched from the connection theme graph" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorVisuals_MetaData[] = {
		{ "Comment", "/** Deprecated property. This value is now fetched from the connection theme graph */" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionInfo.h" },
		{ "ToolTip", "Deprecated property. This value is now fetched from the connection theme graph" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ConnectionCategory;
	static void NewProp_bVerticalDoor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVerticalDoor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConnectionWidth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThemeAsset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Version;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WallVisuals;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorVisuals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapConnectionInfo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_ConnectionCategory = { "ConnectionCategory", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapConnectionInfo, ConnectionCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionCategory_MetaData), NewProp_ConnectionCategory_MetaData) };
void Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_bVerticalDoor_SetBit(void* Obj)
{
	((USnapConnectionInfo*)Obj)->bVerticalDoor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_bVerticalDoor = { "bVerticalDoor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USnapConnectionInfo), &Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_bVerticalDoor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVerticalDoor_MetaData), NewProp_bVerticalDoor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_ConnectionWidth = { "ConnectionWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapConnectionInfo, ConnectionWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectionWidth_MetaData), NewProp_ConnectionWidth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_ThemeAsset = { "ThemeAsset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapConnectionInfo, ThemeAsset), Z_Construct_UClass_UDungeonThemeAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThemeAsset_MetaData), NewProp_ThemeAsset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapConnectionInfo, Version), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Version_MetaData), NewProp_Version_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_WallVisuals = { "WallVisuals", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapConnectionInfo, WallVisuals), Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WallVisuals_MetaData), NewProp_WallVisuals_MetaData) }; // 3521610491
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_DoorVisuals = { "DoorVisuals", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapConnectionInfo, DoorVisuals), Z_Construct_UScriptStruct_FSnapConnectionVisualInfo_DEPRECATED, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorVisuals_MetaData), NewProp_DoorVisuals_MetaData) }; // 3521610491
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapConnectionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_ConnectionCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_bVerticalDoor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_ConnectionWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_ThemeAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_Version,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_WallVisuals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapConnectionInfo_Statics::NewProp_DoorVisuals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionInfo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USnapConnectionInfo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionInfo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapConnectionInfo_Statics::ClassParams = {
	&USnapConnectionInfo::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapConnectionInfo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionInfo_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionInfo_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapConnectionInfo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapConnectionInfo()
{
	if (!Z_Registration_Info_UClass_USnapConnectionInfo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapConnectionInfo.OuterSingleton, Z_Construct_UClass_USnapConnectionInfo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapConnectionInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapConnectionInfo>()
{
	return USnapConnectionInfo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapConnectionInfo);
USnapConnectionInfo::~USnapConnectionInfo() {}
// End Class USnapConnectionInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionInfo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapConnectionInfo, USnapConnectionInfo::StaticClass, TEXT("USnapConnectionInfo"), &Z_Registration_Info_UClass_USnapConnectionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapConnectionInfo), 3030870025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionInfo_h_3761657366(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionInfo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionInfo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
