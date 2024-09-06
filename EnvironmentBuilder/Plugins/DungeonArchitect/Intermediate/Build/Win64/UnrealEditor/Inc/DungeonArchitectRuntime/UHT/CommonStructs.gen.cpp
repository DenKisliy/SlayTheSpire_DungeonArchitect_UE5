// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/CommonStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonStructs() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonArchitectImageChannel();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum EDungeonArchitectImageChannel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDungeonArchitectImageChannel;
static UEnum* EDungeonArchitectImageChannel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDungeonArchitectImageChannel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDungeonArchitectImageChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonArchitectImageChannel, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EDungeonArchitectImageChannel"));
	}
	return Z_Registration_Info_UEnum_EDungeonArchitectImageChannel.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EDungeonArchitectImageChannel>()
{
	return EDungeonArchitectImageChannel_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonArchitectImageChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alpha.Name", "EDungeonArchitectImageChannel::Alpha" },
		{ "Blue.Name", "EDungeonArchitectImageChannel::Blue" },
		{ "Green.Name", "EDungeonArchitectImageChannel::Green" },
		{ "ModuleRelativePath", "Public/Core/Utils/CommonStructs.h" },
		{ "Red.Name", "EDungeonArchitectImageChannel::Red" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDungeonArchitectImageChannel::Red", (int64)EDungeonArchitectImageChannel::Red },
		{ "EDungeonArchitectImageChannel::Green", (int64)EDungeonArchitectImageChannel::Green },
		{ "EDungeonArchitectImageChannel::Blue", (int64)EDungeonArchitectImageChannel::Blue },
		{ "EDungeonArchitectImageChannel::Alpha", (int64)EDungeonArchitectImageChannel::Alpha },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonArchitectImageChannel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EDungeonArchitectImageChannel",
	"EDungeonArchitectImageChannel",
	Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonArchitectImageChannel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonArchitectImageChannel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonArchitectImageChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonArchitectImageChannel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonArchitectImageChannel()
{
	if (!Z_Registration_Info_UEnum_EDungeonArchitectImageChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDungeonArchitectImageChannel.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EDungeonArchitectImageChannel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDungeonArchitectImageChannel.InnerSingleton;
}
// End Enum EDungeonArchitectImageChannel

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_CommonStructs_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDungeonArchitectImageChannel_StaticEnum, TEXT("EDungeonArchitectImageChannel"), &Z_Registration_Info_UEnum_EDungeonArchitectImageChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3835936595U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_CommonStructs_h_3709266598(TEXT("/Script/DungeonArchitectRuntime"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_CommonStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_CommonStructs_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
