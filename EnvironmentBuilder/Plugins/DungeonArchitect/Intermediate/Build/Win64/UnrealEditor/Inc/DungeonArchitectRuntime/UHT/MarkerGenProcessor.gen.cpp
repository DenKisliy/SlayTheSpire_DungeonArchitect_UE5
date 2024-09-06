// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/MarkerGenerator/MarkerGenProcessor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarkerGenProcessor() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGMarkerListDuplicateCheckMethod();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum EMGMarkerListDuplicateCheckMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMGMarkerListDuplicateCheckMethod;
static UEnum* EMGMarkerListDuplicateCheckMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMGMarkerListDuplicateCheckMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMGMarkerListDuplicateCheckMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EMGMarkerListDuplicateCheckMethod, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EMGMarkerListDuplicateCheckMethod"));
	}
	return Z_Registration_Info_UEnum_EMGMarkerListDuplicateCheckMethod.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EMGMarkerListDuplicateCheckMethod>()
{
	return EMGMarkerListDuplicateCheckMethod_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EMGMarkerListDuplicateCheckMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CheckFullTransform.Name", "EMGMarkerListDuplicateCheckMethod::CheckFullTransform" },
		{ "CheckLocationAndRotation.Name", "EMGMarkerListDuplicateCheckMethod::CheckLocationAndRotation" },
		{ "CheckLocationOnly.Name", "EMGMarkerListDuplicateCheckMethod::CheckLocationOnly" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/MarkerGenProcessor.h" },
		{ "None.Name", "EMGMarkerListDuplicateCheckMethod::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMGMarkerListDuplicateCheckMethod::None", (int64)EMGMarkerListDuplicateCheckMethod::None },
		{ "EMGMarkerListDuplicateCheckMethod::CheckLocationOnly", (int64)EMGMarkerListDuplicateCheckMethod::CheckLocationOnly },
		{ "EMGMarkerListDuplicateCheckMethod::CheckLocationAndRotation", (int64)EMGMarkerListDuplicateCheckMethod::CheckLocationAndRotation },
		{ "EMGMarkerListDuplicateCheckMethod::CheckFullTransform", (int64)EMGMarkerListDuplicateCheckMethod::CheckFullTransform },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EMGMarkerListDuplicateCheckMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EMGMarkerListDuplicateCheckMethod",
	"EMGMarkerListDuplicateCheckMethod",
	Z_Construct_UEnum_DungeonArchitectRuntime_EMGMarkerListDuplicateCheckMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMGMarkerListDuplicateCheckMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMGMarkerListDuplicateCheckMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EMGMarkerListDuplicateCheckMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGMarkerListDuplicateCheckMethod()
{
	if (!Z_Registration_Info_UEnum_EMGMarkerListDuplicateCheckMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMGMarkerListDuplicateCheckMethod.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EMGMarkerListDuplicateCheckMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMGMarkerListDuplicateCheckMethod.InnerSingleton;
}
// End Enum EMGMarkerListDuplicateCheckMethod

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenProcessor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMGMarkerListDuplicateCheckMethod_StaticEnum, TEXT("EMGMarkerListDuplicateCheckMethod"), &Z_Registration_Info_UEnum_EMGMarkerListDuplicateCheckMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1331217795U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenProcessor_h_1920075165(TEXT("/Script/DungeonArchitectRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenProcessor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_MarkerGenProcessor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
