// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/Snap/Lib/Connection/SnapConnectionSelectorLogic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSnapConnectionSelectorLogic() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonSelectorLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapConnectionSelectorLogic();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_USnapConnectionSelectorLogic_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin ScriptStruct FSnapConnectionSelectorInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SnapConnectionSelectorInfo;
class UScriptStruct* FSnapConnectionSelectorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SnapConnectionSelectorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SnapConnectionSelectorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo, (UObject*)Z_Construct_UPackage__Script_DungeonArchitectRuntime(), TEXT("SnapConnectionSelectorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SnapConnectionSelectorInfo.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UScriptStruct* StaticStruct<FSnapConnectionSelectorInfo>()
{
	return FSnapConnectionSelectorInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionSelectorLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleCategory_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionSelectorLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModuleInstanceId_MetaData[] = {
		{ "Category", "Dungeon Architect" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionSelectorLogic.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ModuleCategory;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModuleInstanceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSnapConnectionSelectorInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo_Statics::NewProp_ModuleCategory = { "ModuleCategory", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionSelectorInfo, ModuleCategory), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleCategory_MetaData), NewProp_ModuleCategory_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo_Statics::NewProp_ModuleInstanceId = { "ModuleInstanceId", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSnapConnectionSelectorInfo, ModuleInstanceId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModuleInstanceId_MetaData), NewProp_ModuleInstanceId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo_Statics::NewProp_ModuleCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo_Statics::NewProp_ModuleInstanceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
	nullptr,
	&NewStructOps,
	"SnapConnectionSelectorInfo",
	Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo_Statics::PropPointers),
	sizeof(FSnapConnectionSelectorInfo),
	alignof(FSnapConnectionSelectorInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SnapConnectionSelectorInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SnapConnectionSelectorInfo.InnerSingleton, Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SnapConnectionSelectorInfo.InnerSingleton;
}
// End ScriptStruct FSnapConnectionSelectorInfo

// Begin Class USnapConnectionSelectorLogic Function SelectNode
struct SnapConnectionSelectorLogic_eventSelectNode_Parms
{
	FSnapConnectionSelectorInfo OwningModuleInfo;
	FSnapConnectionSelectorInfo RemoteModuleInfo;
	FRandomStream RandomStream;
	FTransform MarkerTransform;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	SnapConnectionSelectorLogic_eventSelectNode_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_USnapConnectionSelectorLogic_SelectNode = FName(TEXT("SelectNode"));
bool USnapConnectionSelectorLogic::SelectNode(FSnapConnectionSelectorInfo const& OwningModuleInfo, FSnapConnectionSelectorInfo const& RemoteModuleInfo, FRandomStream const& RandomStream, FTransform const& MarkerTransform)
{
	SnapConnectionSelectorLogic_eventSelectNode_Parms Parms;
	Parms.OwningModuleInfo=OwningModuleInfo;
	Parms.RemoteModuleInfo=RemoteModuleInfo;
	Parms.RandomStream=RandomStream;
	Parms.MarkerTransform=MarkerTransform;
	ProcessEvent(FindFunctionChecked(NAME_USnapConnectionSelectorLogic_SelectNode),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionSelectorLogic.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningModuleInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RemoteModuleInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomStream_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwningModuleInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteModuleInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomStream;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MarkerTransform;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::NewProp_OwningModuleInfo = { "OwningModuleInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapConnectionSelectorLogic_eventSelectNode_Parms, OwningModuleInfo), Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningModuleInfo_MetaData), NewProp_OwningModuleInfo_MetaData) }; // 1197398690
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::NewProp_RemoteModuleInfo = { "RemoteModuleInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapConnectionSelectorLogic_eventSelectNode_Parms, RemoteModuleInfo), Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RemoteModuleInfo_MetaData), NewProp_RemoteModuleInfo_MetaData) }; // 1197398690
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::NewProp_RandomStream = { "RandomStream", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapConnectionSelectorLogic_eventSelectNode_Parms, RandomStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomStream_MetaData), NewProp_RandomStream_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::NewProp_MarkerTransform = { "MarkerTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SnapConnectionSelectorLogic_eventSelectNode_Parms, MarkerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerTransform_MetaData), NewProp_MarkerTransform_MetaData) };
void Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SnapConnectionSelectorLogic_eventSelectNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SnapConnectionSelectorLogic_eventSelectNode_Parms), &Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::NewProp_OwningModuleInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::NewProp_RemoteModuleInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::NewProp_RandomStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::NewProp_MarkerTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USnapConnectionSelectorLogic, nullptr, "SelectNode", nullptr, nullptr, Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::PropPointers), sizeof(SnapConnectionSelectorLogic_eventSelectNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(SnapConnectionSelectorLogic_eventSelectNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USnapConnectionSelectorLogic::execSelectNode)
{
	P_GET_STRUCT_REF(FSnapConnectionSelectorInfo,Z_Param_Out_OwningModuleInfo);
	P_GET_STRUCT_REF(FSnapConnectionSelectorInfo,Z_Param_Out_RemoteModuleInfo);
	P_GET_STRUCT_REF(FRandomStream,Z_Param_Out_RandomStream);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_MarkerTransform);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SelectNode_Implementation(Z_Param_Out_OwningModuleInfo,Z_Param_Out_RemoteModuleInfo,Z_Param_Out_RandomStream,Z_Param_Out_MarkerTransform);
	P_NATIVE_END;
}
// End Class USnapConnectionSelectorLogic Function SelectNode

// Begin Class USnapConnectionSelectorLogic
void USnapConnectionSelectorLogic::StaticRegisterNativesUSnapConnectionSelectorLogic()
{
	UClass* Class = USnapConnectionSelectorLogic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SelectNode", &USnapConnectionSelectorLogic::execSelectNode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USnapConnectionSelectorLogic);
UClass* Z_Construct_UClass_USnapConnectionSelectorLogic_NoRegister()
{
	return USnapConnectionSelectorLogic::StaticClass();
}
struct Z_Construct_UClass_USnapConnectionSelectorLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Frameworks/Snap/Lib/Connection/SnapConnectionSelectorLogic.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Frameworks/Snap/Lib/Connection/SnapConnectionSelectorLogic.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapConnectionSelectorLogic_SelectNode, "SelectNode" }, // 2430407173
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapConnectionSelectorLogic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USnapConnectionSelectorLogic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonSelectorLogic,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionSelectorLogic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapConnectionSelectorLogic_Statics::ClassParams = {
	&USnapConnectionSelectorLogic::StaticClass,
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
	0x042010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapConnectionSelectorLogic_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapConnectionSelectorLogic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USnapConnectionSelectorLogic()
{
	if (!Z_Registration_Info_UClass_USnapConnectionSelectorLogic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapConnectionSelectorLogic.OuterSingleton, Z_Construct_UClass_USnapConnectionSelectorLogic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapConnectionSelectorLogic.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<USnapConnectionSelectorLogic>()
{
	return USnapConnectionSelectorLogic::StaticClass();
}
USnapConnectionSelectorLogic::USnapConnectionSelectorLogic(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USnapConnectionSelectorLogic);
USnapConnectionSelectorLogic::~USnapConnectionSelectorLogic() {}
// End Class USnapConnectionSelectorLogic

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionSelectorLogic_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSnapConnectionSelectorInfo::StaticStruct, Z_Construct_UScriptStruct_FSnapConnectionSelectorInfo_Statics::NewStructOps, TEXT("SnapConnectionSelectorInfo"), &Z_Registration_Info_UScriptStruct_SnapConnectionSelectorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSnapConnectionSelectorInfo), 1197398690U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapConnectionSelectorLogic, USnapConnectionSelectorLogic::StaticClass, TEXT("USnapConnectionSelectorLogic"), &Z_Registration_Info_UClass_USnapConnectionSelectorLogic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapConnectionSelectorLogic), 2993649475U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionSelectorLogic_h_2881445035(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionSelectorLogic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionSelectorLogic_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionSelectorLogic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_Snap_Lib_Connection_SnapConnectionSelectorLogic_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
