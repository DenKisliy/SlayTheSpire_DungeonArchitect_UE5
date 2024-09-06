// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptVariable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatternScriptVariable() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum EMGPatternScriptVarDataType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMGPatternScriptVarDataType;
static UEnum* EMGPatternScriptVarDataType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMGPatternScriptVarDataType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMGPatternScriptVarDataType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EMGPatternScriptVarDataType"));
	}
	return Z_Registration_Info_UEnum_EMGPatternScriptVarDataType.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EMGPatternScriptVarDataType>()
{
	return EMGPatternScriptVarDataType_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bool.Name", "EMGPatternScriptVarDataType::Bool" },
		{ "Exec.Name", "EMGPatternScriptVarDataType::Exec" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptVariable.h" },
		{ "Unknown.Name", "EMGPatternScriptVarDataType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMGPatternScriptVarDataType::Unknown", (int64)EMGPatternScriptVarDataType::Unknown },
		{ "EMGPatternScriptVarDataType::Bool", (int64)EMGPatternScriptVarDataType::Bool },
		{ "EMGPatternScriptVarDataType::Exec", (int64)EMGPatternScriptVarDataType::Exec },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EMGPatternScriptVarDataType",
	"EMGPatternScriptVarDataType",
	Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType()
{
	if (!Z_Registration_Info_UEnum_EMGPatternScriptVarDataType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMGPatternScriptVarDataType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMGPatternScriptVarDataType.InnerSingleton;
}
// End Enum EMGPatternScriptVarDataType

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptVariable_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMGPatternScriptVarDataType_StaticEnum, TEXT("EMGPatternScriptVarDataType"), &Z_Registration_Info_UEnum_EMGPatternScriptVarDataType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1830234952U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptVariable_h_1128107875(TEXT("/Script/DungeonArchitectRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptVariable_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptVariable_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
