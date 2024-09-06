// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Utils/NonLatentCurveTimeline.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNonLatentCurveTimeline() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UNonLatentCurveTimelineBlueprintFunctionLib();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UNonLatentCurveTimelineBlueprintFunctionLib_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FNonLatentCurveTimeline();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FNonLatentCurveTimeline
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NonLatentCurveTimeline;
class UScriptStruct* FNonLatentCurveTimeline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NonLatentCurveTimeline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NonLatentCurveTimeline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNonLatentCurveTimeline, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("NonLatentCurveTimeline"));
	}
	return Z_Registration_Info_UScriptStruct_NonLatentCurveTimeline.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FNonLatentCurveTimeline>()
{
	return FNonLatentCurveTimeline::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNonLatentCurveTimeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Utils/NonLatentCurveTimeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Core/Utils/NonLatentCurveTimeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Utils/NonLatentCurveTimeline.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNonLatentCurveTimeline>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNonLatentCurveTimeline_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNonLatentCurveTimeline, Curve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNonLatentCurveTimeline_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNonLatentCurveTimeline, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNonLatentCurveTimeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonLatentCurveTimeline_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonLatentCurveTimeline_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonLatentCurveTimeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNonLatentCurveTimeline_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"NonLatentCurveTimeline",
	Z_Construct_UScriptStruct_FNonLatentCurveTimeline_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonLatentCurveTimeline_Statics::PropPointers),
	sizeof(FNonLatentCurveTimeline),
	alignof(FNonLatentCurveTimeline),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonLatentCurveTimeline_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNonLatentCurveTimeline_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNonLatentCurveTimeline()
{
	if (!Z_Registration_Info_UScriptStruct_NonLatentCurveTimeline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NonLatentCurveTimeline.InnerSingleton, Z_Construct_UScriptStruct_FNonLatentCurveTimeline_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NonLatentCurveTimeline.InnerSingleton;
}
// End ScriptStruct FNonLatentCurveTimeline

// Begin Class UNonLatentCurveTimelineBlueprintFunctionLib Function GetValue
struct Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue_Statics
{
	struct NonLatentCurveTimelineBlueprintFunctionLib_eventGetValue_Parms
	{
		FNonLatentCurveTimeline Timeline;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Core/Utils/NonLatentCurveTimeline.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Timeline_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timeline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue_Statics::NewProp_Timeline = { "Timeline", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NonLatentCurveTimelineBlueprintFunctionLib_eventGetValue_Parms, Timeline), Z_Construct_UScriptStruct_FNonLatentCurveTimeline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Timeline_MetaData), NewProp_Timeline_MetaData) }; // 1429783409
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NonLatentCurveTimelineBlueprintFunctionLib_eventGetValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue_Statics::NewProp_Timeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNonLatentCurveTimelineBlueprintFunctionLib, nullptr, "GetValue", nullptr, nullptr, Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue_Statics::NonLatentCurveTimelineBlueprintFunctionLib_eventGetValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue_Statics::NonLatentCurveTimelineBlueprintFunctionLib_eventGetValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNonLatentCurveTimelineBlueprintFunctionLib::execGetValue)
{
	P_GET_STRUCT_REF(FNonLatentCurveTimeline,Z_Param_Out_Timeline);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UNonLatentCurveTimelineBlueprintFunctionLib::GetValue(Z_Param_Out_Timeline);
	P_NATIVE_END;
}
// End Class UNonLatentCurveTimelineBlueprintFunctionLib Function GetValue

// Begin Class UNonLatentCurveTimelineBlueprintFunctionLib Function TickBackward
struct Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward_Statics
{
	struct NonLatentCurveTimelineBlueprintFunctionLib_eventTickBackward_Parms
	{
		UObject* WorldContextObject;
		FNonLatentCurveTimeline Timeline;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Architect" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Core/Utils/NonLatentCurveTimeline.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timeline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NonLatentCurveTimelineBlueprintFunctionLib_eventTickBackward_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward_Statics::NewProp_Timeline = { "Timeline", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NonLatentCurveTimelineBlueprintFunctionLib_eventTickBackward_Parms, Timeline), Z_Construct_UScriptStruct_FNonLatentCurveTimeline, METADATA_PARAMS(0, nullptr) }; // 1429783409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward_Statics::NewProp_Timeline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNonLatentCurveTimelineBlueprintFunctionLib, nullptr, "TickBackward", nullptr, nullptr, Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward_Statics::NonLatentCurveTimelineBlueprintFunctionLib_eventTickBackward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward_Statics::NonLatentCurveTimelineBlueprintFunctionLib_eventTickBackward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNonLatentCurveTimelineBlueprintFunctionLib::execTickBackward)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FNonLatentCurveTimeline,Z_Param_Out_Timeline);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNonLatentCurveTimelineBlueprintFunctionLib::TickBackward(Z_Param_WorldContextObject,Z_Param_Out_Timeline);
	P_NATIVE_END;
}
// End Class UNonLatentCurveTimelineBlueprintFunctionLib Function TickBackward

// Begin Class UNonLatentCurveTimelineBlueprintFunctionLib Function TickForward
struct Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward_Statics
{
	struct NonLatentCurveTimelineBlueprintFunctionLib_eventTickForward_Parms
	{
		UObject* WorldContextObject;
		FNonLatentCurveTimeline Timeline;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon Architect" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/Core/Utils/NonLatentCurveTimeline.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timeline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NonLatentCurveTimelineBlueprintFunctionLib_eventTickForward_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward_Statics::NewProp_Timeline = { "Timeline", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NonLatentCurveTimelineBlueprintFunctionLib_eventTickForward_Parms, Timeline), Z_Construct_UScriptStruct_FNonLatentCurveTimeline, METADATA_PARAMS(0, nullptr) }; // 1429783409
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward_Statics::NewProp_Timeline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNonLatentCurveTimelineBlueprintFunctionLib, nullptr, "TickForward", nullptr, nullptr, Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward_Statics::NonLatentCurveTimelineBlueprintFunctionLib_eventTickForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward_Statics::NonLatentCurveTimelineBlueprintFunctionLib_eventTickForward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNonLatentCurveTimelineBlueprintFunctionLib::execTickForward)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FNonLatentCurveTimeline,Z_Param_Out_Timeline);
	P_FINISH;
	P_NATIVE_BEGIN;
	UNonLatentCurveTimelineBlueprintFunctionLib::TickForward(Z_Param_WorldContextObject,Z_Param_Out_Timeline);
	P_NATIVE_END;
}
// End Class UNonLatentCurveTimelineBlueprintFunctionLib Function TickForward

// Begin Class UNonLatentCurveTimelineBlueprintFunctionLib
void UNonLatentCurveTimelineBlueprintFunctionLib::StaticRegisterNativesUNonLatentCurveTimelineBlueprintFunctionLib()
{
	UClass* Class = UNonLatentCurveTimelineBlueprintFunctionLib::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetValue", &UNonLatentCurveTimelineBlueprintFunctionLib::execGetValue },
		{ "TickBackward", &UNonLatentCurveTimelineBlueprintFunctionLib::execTickBackward },
		{ "TickForward", &UNonLatentCurveTimelineBlueprintFunctionLib::execTickForward },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNonLatentCurveTimelineBlueprintFunctionLib);
UClass* Z_Construct_UClass_UNonLatentCurveTimelineBlueprintFunctionLib_NoRegister()
{
	return UNonLatentCurveTimelineBlueprintFunctionLib::StaticClass();
}
struct Z_Construct_UClass_UNonLatentCurveTimelineBlueprintFunctionLib_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Utils/NonLatentCurveTimeline.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Utils/NonLatentCurveTimeline.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_GetValue, "GetValue" }, // 285126432
		{ &Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickBackward, "TickBackward" }, // 1583134152
		{ &Z_Construct_UFunction_UNonLatentCurveTimelineBlueprintFunctionLib_TickForward, "TickForward" }, // 6688561
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNonLatentCurveTimelineBlueprintFunctionLib>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UNonLatentCurveTimelineBlueprintFunctionLib_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNonLatentCurveTimelineBlueprintFunctionLib_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNonLatentCurveTimelineBlueprintFunctionLib_Statics::ClassParams = {
	&UNonLatentCurveTimelineBlueprintFunctionLib::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNonLatentCurveTimelineBlueprintFunctionLib_Statics::Class_MetaDataParams), Z_Construct_UClass_UNonLatentCurveTimelineBlueprintFunctionLib_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNonLatentCurveTimelineBlueprintFunctionLib()
{
	if (!Z_Registration_Info_UClass_UNonLatentCurveTimelineBlueprintFunctionLib.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNonLatentCurveTimelineBlueprintFunctionLib.OuterSingleton, Z_Construct_UClass_UNonLatentCurveTimelineBlueprintFunctionLib_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNonLatentCurveTimelineBlueprintFunctionLib.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UNonLatentCurveTimelineBlueprintFunctionLib>()
{
	return UNonLatentCurveTimelineBlueprintFunctionLib::StaticClass();
}
UNonLatentCurveTimelineBlueprintFunctionLib::UNonLatentCurveTimelineBlueprintFunctionLib(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNonLatentCurveTimelineBlueprintFunctionLib);
UNonLatentCurveTimelineBlueprintFunctionLib::~UNonLatentCurveTimelineBlueprintFunctionLib() {}
// End Class UNonLatentCurveTimelineBlueprintFunctionLib

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_NonLatentCurveTimeline_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNonLatentCurveTimeline::StaticStruct, Z_Construct_UScriptStruct_FNonLatentCurveTimeline_Statics::NewStructOps, TEXT("NonLatentCurveTimeline"), &Z_Registration_Info_UScriptStruct_NonLatentCurveTimeline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNonLatentCurveTimeline), 1429783409U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNonLatentCurveTimelineBlueprintFunctionLib, UNonLatentCurveTimelineBlueprintFunctionLib::StaticClass, TEXT("UNonLatentCurveTimelineBlueprintFunctionLib"), &Z_Registration_Info_UClass_UNonLatentCurveTimelineBlueprintFunctionLib, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNonLatentCurveTimelineBlueprintFunctionLib), 2918879991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_NonLatentCurveTimeline_h_3189894375(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_NonLatentCurveTimeline_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_NonLatentCurveTimeline_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_NonLatentCurveTimeline_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Utils_NonLatentCurveTimeline_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
