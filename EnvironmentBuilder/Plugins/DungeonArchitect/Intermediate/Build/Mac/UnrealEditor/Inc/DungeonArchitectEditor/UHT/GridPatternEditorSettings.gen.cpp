// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectEditor/Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridPatternEditorSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGGridPatternEditorSettings();
DUNGEONARCHITECTEDITOR_API UClass* Z_Construct_UClass_UMGGridPatternEditorSettings_NoRegister();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings();
DUNGEONARCHITECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectEditor();
// End Cross Module References

// Begin ScriptStruct FMGGridPatternGroundMeshItemColors
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MGGridPatternGroundMeshItemColors;
class UScriptStruct* FMGGridPatternGroundMeshItemColors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MGGridPatternGroundMeshItemColors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MGGridPatternGroundMeshItemColors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("MGGridPatternGroundMeshItemColors"));
	}
	return Z_Registration_Info_UScriptStruct_MGGridPatternGroundMeshItemColors.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FMGGridPatternGroundMeshItemColors>()
{
	return FMGGridPatternGroundMeshItemColors::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyColor_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderColor_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverBodyColor_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverBorderColor_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BorderColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoverBodyColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HoverBorderColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMGGridPatternGroundMeshItemColors>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_BodyColor = { "BodyColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGGridPatternGroundMeshItemColors, BodyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyColor_MetaData), NewProp_BodyColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_BorderColor = { "BorderColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGGridPatternGroundMeshItemColors, BorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderColor_MetaData), NewProp_BorderColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_HoverBodyColor = { "HoverBodyColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGGridPatternGroundMeshItemColors, HoverBodyColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverBodyColor_MetaData), NewProp_HoverBodyColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_HoverBorderColor = { "HoverBorderColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGGridPatternGroundMeshItemColors, HoverBorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverBorderColor_MetaData), NewProp_HoverBorderColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_BodyColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_BorderColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_HoverBodyColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewProp_HoverBorderColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	&NewStructOps,
	"MGGridPatternGroundMeshItemColors",
	Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::PropPointers),
	sizeof(FMGGridPatternGroundMeshItemColors),
	alignof(FMGGridPatternGroundMeshItemColors),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors()
{
	if (!Z_Registration_Info_UScriptStruct_MGGridPatternGroundMeshItemColors.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MGGridPatternGroundMeshItemColors.InnerSingleton, Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MGGridPatternGroundMeshItemColors.InnerSingleton;
}
// End ScriptStruct FMGGridPatternGroundMeshItemColors

// Begin ScriptStruct FMGGridPatternEdGroundSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MGGridPatternEdGroundSettings;
class UScriptStruct* FMGGridPatternEdGroundSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MGGridPatternEdGroundSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MGGridPatternEdGroundSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectEditor(), TEXT("MGGridPatternEdGroundSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MGGridPatternEdGroundSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UScriptStruct* StaticStruct<FMGGridPatternEdGroundSettings>()
{
	return FMGGridPatternEdGroundSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeSize_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BorderThickness_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverBorderThickness_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverAnimationTime_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HoverAnimation_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundColor_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeColor_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CornerColor_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BorderThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HoverBorderThickness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HoverAnimationTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HoverAnimation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EdgeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CornerColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMGGridPatternEdGroundSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, Start), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, End), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_EdgeSize = { "EdgeSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, EdgeSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeSize_MetaData), NewProp_EdgeSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_BorderThickness = { "BorderThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, BorderThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BorderThickness_MetaData), NewProp_BorderThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverBorderThickness = { "HoverBorderThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, HoverBorderThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverBorderThickness_MetaData), NewProp_HoverBorderThickness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverAnimationTime = { "HoverAnimationTime", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, HoverAnimationTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverAnimationTime_MetaData), NewProp_HoverAnimationTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverAnimation = { "HoverAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, HoverAnimation), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HoverAnimation_MetaData), NewProp_HoverAnimation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_GroundColor = { "GroundColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, GroundColor), Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundColor_MetaData), NewProp_GroundColor_MetaData) }; // 2402415220
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_EdgeColor = { "EdgeColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, EdgeColor), Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeColor_MetaData), NewProp_EdgeColor_MetaData) }; // 2402415220
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_CornerColor = { "CornerColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMGGridPatternEdGroundSettings, CornerColor), Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CornerColor_MetaData), NewProp_CornerColor_MetaData) }; // 2402415220
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_TileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_EdgeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_BorderThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverBorderThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverAnimationTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_HoverAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_GroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_EdgeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewProp_CornerColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
	nullptr,
	&NewStructOps,
	"MGGridPatternEdGroundSettings",
	Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::PropPointers),
	sizeof(FMGGridPatternEdGroundSettings),
	alignof(FMGGridPatternEdGroundSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings()
{
	if (!Z_Registration_Info_UScriptStruct_MGGridPatternEdGroundSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MGGridPatternEdGroundSettings.InnerSingleton, Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MGGridPatternEdGroundSettings.InnerSingleton;
}
// End ScriptStruct FMGGridPatternEdGroundSettings

// Begin Class UMGGridPatternEditorSettings
void UMGGridPatternEditorSettings::StaticRegisterNativesUMGGridPatternEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGGridPatternEditorSettings);
UClass* Z_Construct_UClass_UMGGridPatternEditorSettings_NoRegister()
{
	return UMGGridPatternEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UMGGridPatternEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSettings_MetaData[] = {
		{ "Category", "Theme Editor" },
		{ "ModuleRelativePath", "Public/Core/Editors/ThemeEditor/AppModes/MarkerGenerator/PatternEditor/Impl/Grid/GridPatternEditorSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGGridPatternEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::NewProp_GroundSettings = { "GroundSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGGridPatternEditorSettings, GroundSettings), Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSettings_MetaData), NewProp_GroundSettings_MetaData) }; // 701889085
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::NewProp_GroundSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::ClassParams = {
	&UMGGridPatternEditorSettings::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::PropPointers),
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGGridPatternEditorSettings()
{
	if (!Z_Registration_Info_UClass_UMGGridPatternEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGGridPatternEditorSettings.OuterSingleton, Z_Construct_UClass_UMGGridPatternEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGGridPatternEditorSettings.OuterSingleton;
}
template<> DUNGEONARCHITECTEDITOR_API UClass* StaticClass<UMGGridPatternEditorSettings>()
{
	return UMGGridPatternEditorSettings::StaticClass();
}
UMGGridPatternEditorSettings::UMGGridPatternEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGGridPatternEditorSettings);
UMGGridPatternEditorSettings::~UMGGridPatternEditorSettings() {}
// End Class UMGGridPatternEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEditorSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMGGridPatternGroundMeshItemColors::StaticStruct, Z_Construct_UScriptStruct_FMGGridPatternGroundMeshItemColors_Statics::NewStructOps, TEXT("MGGridPatternGroundMeshItemColors"), &Z_Registration_Info_UScriptStruct_MGGridPatternGroundMeshItemColors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMGGridPatternGroundMeshItemColors), 2402415220U) },
		{ FMGGridPatternEdGroundSettings::StaticStruct, Z_Construct_UScriptStruct_FMGGridPatternEdGroundSettings_Statics::NewStructOps, TEXT("MGGridPatternEdGroundSettings"), &Z_Registration_Info_UScriptStruct_MGGridPatternEdGroundSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMGGridPatternEdGroundSettings), 701889085U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMGGridPatternEditorSettings, UMGGridPatternEditorSettings::StaticClass, TEXT("UMGGridPatternEditorSettings"), &Z_Registration_Info_UClass_UMGGridPatternEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGGridPatternEditorSettings), 360970835U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEditorSettings_h_4040171852(TEXT("/Script/DungeonArchitectEditor"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEditorSettings_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEditorSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectEditor_Public_Core_Editors_ThemeEditor_AppModes_MarkerGenerator_PatternEditor_Impl_Grid_GridPatternEditorSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
