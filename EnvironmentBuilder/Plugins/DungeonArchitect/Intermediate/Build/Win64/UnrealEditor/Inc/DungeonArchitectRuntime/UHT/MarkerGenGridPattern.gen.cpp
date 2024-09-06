// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridPattern.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarkerGenGridPattern() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenGridPattern();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenGridPattern_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenGridPatternRule();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenGridPatternRule_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenPattern();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMarkerGenPatternRule();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum EMarkerGenGridPatternRuleType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMarkerGenGridPatternRuleType;
static UEnum* EMarkerGenGridPatternRuleType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMarkerGenGridPatternRuleType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMarkerGenGridPatternRuleType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EMarkerGenGridPatternRuleType"));
	}
	return Z_Registration_Info_UEnum_EMarkerGenGridPatternRuleType.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EMarkerGenGridPatternRuleType>()
{
	return EMarkerGenGridPatternRuleType_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Corner.Name", "EMarkerGenGridPatternRuleType::Corner" },
		{ "EdgeX.Name", "EMarkerGenGridPatternRuleType::EdgeX" },
		{ "EdgeY.Name", "EMarkerGenGridPatternRuleType::EdgeY" },
		{ "Ground.Name", "EMarkerGenGridPatternRuleType::Ground" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridPattern.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMarkerGenGridPatternRuleType::Ground", (int64)EMarkerGenGridPatternRuleType::Ground },
		{ "EMarkerGenGridPatternRuleType::EdgeX", (int64)EMarkerGenGridPatternRuleType::EdgeX },
		{ "EMarkerGenGridPatternRuleType::EdgeY", (int64)EMarkerGenGridPatternRuleType::EdgeY },
		{ "EMarkerGenGridPatternRuleType::Corner", (int64)EMarkerGenGridPatternRuleType::Corner },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EMarkerGenGridPatternRuleType",
	"EMarkerGenGridPatternRuleType",
	Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType()
{
	if (!Z_Registration_Info_UEnum_EMarkerGenGridPatternRuleType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMarkerGenGridPatternRuleType.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMarkerGenGridPatternRuleType.InnerSingleton;
}
// End Enum EMarkerGenGridPatternRuleType

// Begin Class UMarkerGenGridPatternRule
void UMarkerGenGridPatternRule::StaticRegisterNativesUMarkerGenGridPatternRule()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMarkerGenGridPatternRule);
UClass* Z_Construct_UClass_UMarkerGenGridPatternRule_NoRegister()
{
	return UMarkerGenGridPatternRule::StaticClass();
}
struct Z_Construct_UClass_UMarkerGenGridPatternRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridPattern.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coord_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridPattern.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuleType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridPattern.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Coord;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RuleType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RuleType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMarkerGenGridPatternRule>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_Coord = { "Coord", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarkerGenGridPatternRule, Coord), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coord_MetaData), NewProp_Coord_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_RuleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_RuleType = { "RuleType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMarkerGenGridPatternRule, RuleType), Z_Construct_UEnum_DungeonArchitectRuntime_EMarkerGenGridPatternRuleType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuleType_MetaData), NewProp_RuleType_MetaData) }; // 2458490519
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_Coord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_RuleType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::NewProp_RuleType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMarkerGenPatternRule,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::ClassParams = {
	&UMarkerGenGridPatternRule::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::Class_MetaDataParams), Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMarkerGenGridPatternRule()
{
	if (!Z_Registration_Info_UClass_UMarkerGenGridPatternRule.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMarkerGenGridPatternRule.OuterSingleton, Z_Construct_UClass_UMarkerGenGridPatternRule_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMarkerGenGridPatternRule.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMarkerGenGridPatternRule>()
{
	return UMarkerGenGridPatternRule::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMarkerGenGridPatternRule);
UMarkerGenGridPatternRule::~UMarkerGenGridPatternRule() {}
// End Class UMarkerGenGridPatternRule

// Begin Class UMarkerGenGridPattern
void UMarkerGenGridPattern::StaticRegisterNativesUMarkerGenGridPattern()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMarkerGenGridPattern);
UClass* Z_Construct_UClass_UMarkerGenGridPattern_NoRegister()
{
	return UMarkerGenGridPattern::StaticClass();
}
struct Z_Construct_UClass_UMarkerGenGridPattern_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridPattern.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/Impl/Grid/MarkerGenGridPattern.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMarkerGenGridPattern>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMarkerGenGridPattern_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMarkerGenPattern,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenGridPattern_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMarkerGenGridPattern_Statics::ClassParams = {
	&UMarkerGenGridPattern::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMarkerGenGridPattern_Statics::Class_MetaDataParams), Z_Construct_UClass_UMarkerGenGridPattern_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMarkerGenGridPattern()
{
	if (!Z_Registration_Info_UClass_UMarkerGenGridPattern.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMarkerGenGridPattern.OuterSingleton, Z_Construct_UClass_UMarkerGenGridPattern_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMarkerGenGridPattern.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMarkerGenGridPattern>()
{
	return UMarkerGenGridPattern::StaticClass();
}
UMarkerGenGridPattern::UMarkerGenGridPattern(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMarkerGenGridPattern);
UMarkerGenGridPattern::~UMarkerGenGridPattern() {}
// End Class UMarkerGenGridPattern

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridPattern_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMarkerGenGridPatternRuleType_StaticEnum, TEXT("EMarkerGenGridPatternRuleType"), &Z_Registration_Info_UEnum_EMarkerGenGridPatternRuleType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2458490519U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMarkerGenGridPatternRule, UMarkerGenGridPatternRule::StaticClass, TEXT("UMarkerGenGridPatternRule"), &Z_Registration_Info_UClass_UMarkerGenGridPatternRule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMarkerGenGridPatternRule), 2744257710U) },
		{ Z_Construct_UClass_UMarkerGenGridPattern, UMarkerGenGridPattern::StaticClass, TEXT("UMarkerGenGridPattern"), &Z_Registration_Info_UClass_UMarkerGenGridPattern, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMarkerGenGridPattern), 2403325744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridPattern_h_1876599698(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridPattern_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridPattern_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridPattern_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_Impl_Grid_MarkerGenGridPattern_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
