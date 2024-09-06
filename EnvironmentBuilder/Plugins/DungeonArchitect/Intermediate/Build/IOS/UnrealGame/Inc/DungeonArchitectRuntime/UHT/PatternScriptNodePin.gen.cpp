// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatternScriptNodePin() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNodePin();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNodePin_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNodePinBool();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNodePinBool_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNodePinExec();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UMGPatternScriptNodePinExec_NoRegister();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection();
DUNGEONARCHITECTRUNTIME_API UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Enum EMGPatternScriptPinDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMGPatternScriptPinDirection;
static UEnum* EMGPatternScriptPinDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMGPatternScriptPinDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMGPatternScriptPinDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EMGPatternScriptPinDirection"));
	}
	return Z_Registration_Info_UEnum_EMGPatternScriptPinDirection.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EMGPatternScriptPinDirection>()
{
	return EMGPatternScriptPinDirection_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Input.Name", "EMGPatternScriptPinDirection::Input" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
		{ "Output.Name", "EMGPatternScriptPinDirection::Output" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMGPatternScriptPinDirection::Input", (int64)EMGPatternScriptPinDirection::Input },
		{ "EMGPatternScriptPinDirection::Output", (int64)EMGPatternScriptPinDirection::Output },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EMGPatternScriptPinDirection",
	"EMGPatternScriptPinDirection",
	Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection()
{
	if (!Z_Registration_Info_UEnum_EMGPatternScriptPinDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMGPatternScriptPinDirection.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMGPatternScriptPinDirection.InnerSingleton;
}
// End Enum EMGPatternScriptPinDirection

// Begin Enum EMGPatternScriptPinConnectivityConstraint
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMGPatternScriptPinConnectivityConstraint;
static UEnum* EMGPatternScriptPinConnectivityConstraint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMGPatternScriptPinConnectivityConstraint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMGPatternScriptPinConnectivityConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("EMGPatternScriptPinConnectivityConstraint"));
	}
	return Z_Registration_Info_UEnum_EMGPatternScriptPinConnectivityConstraint.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UEnum* StaticEnum<EMGPatternScriptPinConnectivityConstraint>()
{
	return EMGPatternScriptPinConnectivityConstraint_StaticEnum();
}
struct Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Mandatory.Name", "EMGPatternScriptPinConnectivityConstraint::Mandatory" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
		{ "Optional.Name", "EMGPatternScriptPinConnectivityConstraint::Optional" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMGPatternScriptPinConnectivityConstraint::Mandatory", (int64)EMGPatternScriptPinConnectivityConstraint::Mandatory },
		{ "EMGPatternScriptPinConnectivityConstraint::Optional", (int64)EMGPatternScriptPinConnectivityConstraint::Optional },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	"EMGPatternScriptPinConnectivityConstraint",
	"EMGPatternScriptPinConnectivityConstraint",
	Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint()
{
	if (!Z_Registration_Info_UEnum_EMGPatternScriptPinConnectivityConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMGPatternScriptPinConnectivityConstraint.InnerSingleton, Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMGPatternScriptPinConnectivityConstraint.InnerSingleton;
}
// End Enum EMGPatternScriptPinConnectivityConstraint

// Begin Class UMGPatternScriptNodePin
void UMGPatternScriptNodePin::StaticRegisterNativesUMGPatternScriptNodePin()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNodePin);
UClass* Z_Construct_UClass_UMGPatternScriptNodePin_NoRegister()
{
	return UMGPatternScriptNodePin::StaticClass();
}
struct Z_Construct_UClass_UMGPatternScriptNodePin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectivityConstraint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinkedTo_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DataType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ConnectivityConstraint_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ConnectivityConstraint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedTo;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNodePin>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNodePin, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DataType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNodePin, DataType), Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptVarDataType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataType_MetaData), NewProp_DataType_MetaData) }; // 1830234952
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNodePin, Direction), Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 3348975907
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_ConnectivityConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_ConnectivityConstraint = { "ConnectivityConstraint", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNodePin, ConnectivityConstraint), Z_Construct_UEnum_DungeonArchitectRuntime_EMGPatternScriptPinConnectivityConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectivityConstraint_MetaData), NewProp_ConnectivityConstraint_MetaData) }; // 3600731812
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_LinkedTo = { "LinkedTo", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNodePin, LinkedTo), Z_Construct_UClass_UMGPatternScriptNodePin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinkedTo_MetaData), NewProp_LinkedTo_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMGPatternScriptNodePin, DefaultValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultValue_MetaData), NewProp_DefaultValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMGPatternScriptNodePin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DataType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_ConnectivityConstraint_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_ConnectivityConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_LinkedTo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMGPatternScriptNodePin_Statics::NewProp_DefaultValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMGPatternScriptNodePin_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNodePin_Statics::ClassParams = {
	&UMGPatternScriptNodePin::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMGPatternScriptNodePin_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::PropPointers),
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePin_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternScriptNodePin_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternScriptNodePin()
{
	if (!Z_Registration_Info_UClass_UMGPatternScriptNodePin.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNodePin.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNodePin_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternScriptNodePin.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNodePin>()
{
	return UMGPatternScriptNodePin::StaticClass();
}
UMGPatternScriptNodePin::UMGPatternScriptNodePin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNodePin);
UMGPatternScriptNodePin::~UMGPatternScriptNodePin() {}
// End Class UMGPatternScriptNodePin

// Begin Class UMGPatternScriptNodePinExec
void UMGPatternScriptNodePinExec::StaticRegisterNativesUMGPatternScriptNodePinExec()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNodePinExec);
UClass* Z_Construct_UClass_UMGPatternScriptNodePinExec_NoRegister()
{
	return UMGPatternScriptNodePinExec::StaticClass();
}
struct Z_Construct_UClass_UMGPatternScriptNodePinExec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNodePinExec>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMGPatternScriptNodePinExec_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMGPatternScriptNodePin,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePinExec_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNodePinExec_Statics::ClassParams = {
	&UMGPatternScriptNodePinExec::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePinExec_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternScriptNodePinExec_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternScriptNodePinExec()
{
	if (!Z_Registration_Info_UClass_UMGPatternScriptNodePinExec.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNodePinExec.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNodePinExec_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternScriptNodePinExec.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNodePinExec>()
{
	return UMGPatternScriptNodePinExec::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNodePinExec);
UMGPatternScriptNodePinExec::~UMGPatternScriptNodePinExec() {}
// End Class UMGPatternScriptNodePinExec

// Begin Class UMGPatternScriptNodePinBool
void UMGPatternScriptNodePinBool::StaticRegisterNativesUMGPatternScriptNodePinBool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMGPatternScriptNodePinBool);
UClass* Z_Construct_UClass_UMGPatternScriptNodePinBool_NoRegister()
{
	return UMGPatternScriptNodePinBool::StaticClass();
}
struct Z_Construct_UClass_UMGPatternScriptNodePinBool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
		{ "ModuleRelativePath", "Public/Frameworks/MarkerGenerator/PatternScript/PatternScriptNodePin.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMGPatternScriptNodePinBool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMGPatternScriptNodePinBool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMGPatternScriptNodePin,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePinBool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMGPatternScriptNodePinBool_Statics::ClassParams = {
	&UMGPatternScriptNodePinBool::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMGPatternScriptNodePinBool_Statics::Class_MetaDataParams), Z_Construct_UClass_UMGPatternScriptNodePinBool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMGPatternScriptNodePinBool()
{
	if (!Z_Registration_Info_UClass_UMGPatternScriptNodePinBool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMGPatternScriptNodePinBool.OuterSingleton, Z_Construct_UClass_UMGPatternScriptNodePinBool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMGPatternScriptNodePinBool.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UMGPatternScriptNodePinBool>()
{
	return UMGPatternScriptNodePinBool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMGPatternScriptNodePinBool);
UMGPatternScriptNodePinBool::~UMGPatternScriptNodePinBool() {}
// End Class UMGPatternScriptNodePinBool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNodePin_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMGPatternScriptPinDirection_StaticEnum, TEXT("EMGPatternScriptPinDirection"), &Z_Registration_Info_UEnum_EMGPatternScriptPinDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3348975907U) },
		{ EMGPatternScriptPinConnectivityConstraint_StaticEnum, TEXT("EMGPatternScriptPinConnectivityConstraint"), &Z_Registration_Info_UEnum_EMGPatternScriptPinConnectivityConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3600731812U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMGPatternScriptNodePin, UMGPatternScriptNodePin::StaticClass, TEXT("UMGPatternScriptNodePin"), &Z_Registration_Info_UClass_UMGPatternScriptNodePin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNodePin), 1883317832U) },
		{ Z_Construct_UClass_UMGPatternScriptNodePinExec, UMGPatternScriptNodePinExec::StaticClass, TEXT("UMGPatternScriptNodePinExec"), &Z_Registration_Info_UClass_UMGPatternScriptNodePinExec, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNodePinExec), 3747667158U) },
		{ Z_Construct_UClass_UMGPatternScriptNodePinBool, UMGPatternScriptNodePinBool::StaticClass, TEXT("UMGPatternScriptNodePinBool"), &Z_Registration_Info_UClass_UMGPatternScriptNodePinBool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMGPatternScriptNodePinBool), 938221324U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNodePin_h_1080587377(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNodePin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNodePin_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNodePin_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_MarkerGenerator_PatternScript_PatternScriptNodePin_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
