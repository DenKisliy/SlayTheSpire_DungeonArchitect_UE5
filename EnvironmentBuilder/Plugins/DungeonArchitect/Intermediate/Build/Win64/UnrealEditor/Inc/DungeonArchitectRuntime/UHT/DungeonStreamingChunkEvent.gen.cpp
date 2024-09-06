// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Frameworks/LevelStreaming/Interfaces/DungeonStreamingChunkEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonStreamingChunkEvent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonStreamingChunkEventInterface();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonStreamingChunkEventInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Interface UDungeonStreamingChunkEventInterface Function OnChunkHidden
struct DungeonStreamingChunkEventInterface_eventOnChunkHidden_Parms
{
	ADungeon* OwningDungeon;
};
void IDungeonStreamingChunkEventInterface::OnChunkHidden(ADungeon* OwningDungeon)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnChunkHidden instead.");
}
static FName NAME_UDungeonStreamingChunkEventInterface_OnChunkHidden = FName(TEXT("OnChunkHidden"));
void IDungeonStreamingChunkEventInterface::Execute_OnChunkHidden(UObject* O, ADungeon* OwningDungeon)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDungeonStreamingChunkEventInterface::StaticClass()));
	DungeonStreamingChunkEventInterface_eventOnChunkHidden_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDungeonStreamingChunkEventInterface_OnChunkHidden);
	if (Func)
	{
		Parms.OwningDungeon=OwningDungeon;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkHidden_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Dungeon Streaming Chunks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fired when the chunk is hidden, e.g. when the player gets far away. It might still be kept in memory */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/Interfaces/DungeonStreamingChunkEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when the chunk is hidden, e.g. when the player gets far away. It might still be kept in memory" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningDungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkHidden_Statics::NewProp_OwningDungeon = { "OwningDungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStreamingChunkEventInterface_eventOnChunkHidden_Parms, OwningDungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkHidden_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkHidden_Statics::NewProp_OwningDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkHidden_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunkEventInterface, nullptr, "OnChunkHidden", nullptr, nullptr, Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkHidden_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkHidden_Statics::PropPointers), sizeof(DungeonStreamingChunkEventInterface_eventOnChunkHidden_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkHidden_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkHidden_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonStreamingChunkEventInterface_eventOnChunkHidden_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkHidden()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkHidden_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UDungeonStreamingChunkEventInterface Function OnChunkHidden

// Begin Interface UDungeonStreamingChunkEventInterface Function OnChunkLoaded
struct DungeonStreamingChunkEventInterface_eventOnChunkLoaded_Parms
{
	ADungeon* OwningDungeon;
};
void IDungeonStreamingChunkEventInterface::OnChunkLoaded(ADungeon* OwningDungeon)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnChunkLoaded instead.");
}
static FName NAME_UDungeonStreamingChunkEventInterface_OnChunkLoaded = FName(TEXT("OnChunkLoaded"));
void IDungeonStreamingChunkEventInterface::Execute_OnChunkLoaded(UObject* O, ADungeon* OwningDungeon)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDungeonStreamingChunkEventInterface::StaticClass()));
	DungeonStreamingChunkEventInterface_eventOnChunkLoaded_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDungeonStreamingChunkEventInterface_OnChunkLoaded);
	if (Func)
	{
		Parms.OwningDungeon=OwningDungeon;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkLoaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Dungeon Streaming Chunks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When the chunk was loaded for the first time. Do you one-time initializations here */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/Interfaces/DungeonStreamingChunkEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the chunk was loaded for the first time. Do you one-time initializations here" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningDungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkLoaded_Statics::NewProp_OwningDungeon = { "OwningDungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStreamingChunkEventInterface_eventOnChunkLoaded_Parms, OwningDungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkLoaded_Statics::NewProp_OwningDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunkEventInterface, nullptr, "OnChunkLoaded", nullptr, nullptr, Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkLoaded_Statics::PropPointers), sizeof(DungeonStreamingChunkEventInterface_eventOnChunkLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonStreamingChunkEventInterface_eventOnChunkLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UDungeonStreamingChunkEventInterface Function OnChunkLoaded

// Begin Interface UDungeonStreamingChunkEventInterface Function OnChunkUnloaded
struct DungeonStreamingChunkEventInterface_eventOnChunkUnloaded_Parms
{
	ADungeon* OwningDungeon;
};
void IDungeonStreamingChunkEventInterface::OnChunkUnloaded(ADungeon* OwningDungeon)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnChunkUnloaded instead.");
}
static FName NAME_UDungeonStreamingChunkEventInterface_OnChunkUnloaded = FName(TEXT("OnChunkUnloaded"));
void IDungeonStreamingChunkEventInterface::Execute_OnChunkUnloaded(UObject* O, ADungeon* OwningDungeon)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDungeonStreamingChunkEventInterface::StaticClass()));
	DungeonStreamingChunkEventInterface_eventOnChunkUnloaded_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDungeonStreamingChunkEventInterface_OnChunkUnloaded);
	if (Func)
	{
		Parms.OwningDungeon=OwningDungeon;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkUnloaded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Dungeon Streaming Chunks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When the chunk is unloaded from memory */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/Interfaces/DungeonStreamingChunkEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When the chunk is unloaded from memory" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningDungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkUnloaded_Statics::NewProp_OwningDungeon = { "OwningDungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStreamingChunkEventInterface_eventOnChunkUnloaded_Parms, OwningDungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkUnloaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkUnloaded_Statics::NewProp_OwningDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkUnloaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkUnloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunkEventInterface, nullptr, "OnChunkUnloaded", nullptr, nullptr, Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkUnloaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkUnloaded_Statics::PropPointers), sizeof(DungeonStreamingChunkEventInterface_eventOnChunkUnloaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkUnloaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkUnloaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonStreamingChunkEventInterface_eventOnChunkUnloaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkUnloaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkUnloaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UDungeonStreamingChunkEventInterface Function OnChunkUnloaded

// Begin Interface UDungeonStreamingChunkEventInterface Function OnChunkVisible
struct DungeonStreamingChunkEventInterface_eventOnChunkVisible_Parms
{
	ADungeon* OwningDungeon;
};
void IDungeonStreamingChunkEventInterface::OnChunkVisible(ADungeon* OwningDungeon)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnChunkVisible instead.");
}
static FName NAME_UDungeonStreamingChunkEventInterface_OnChunkVisible = FName(TEXT("OnChunkVisible"));
void IDungeonStreamingChunkEventInterface::Execute_OnChunkVisible(UObject* O, ADungeon* OwningDungeon)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UDungeonStreamingChunkEventInterface::StaticClass()));
	DungeonStreamingChunkEventInterface_eventOnChunkVisible_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UDungeonStreamingChunkEventInterface_OnChunkVisible);
	if (Func)
	{
		Parms.OwningDungeon=OwningDungeon;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkVisible_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Dungeon Streaming Chunks" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fired when the chunk is made visible, e.g. when the player gets close */" },
#endif
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/Interfaces/DungeonStreamingChunkEvent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fired when the chunk is made visible, e.g. when the player gets close" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningDungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkVisible_Statics::NewProp_OwningDungeon = { "OwningDungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonStreamingChunkEventInterface_eventOnChunkVisible_Parms, OwningDungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkVisible_Statics::NewProp_OwningDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonStreamingChunkEventInterface, nullptr, "OnChunkVisible", nullptr, nullptr, Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkVisible_Statics::PropPointers), sizeof(DungeonStreamingChunkEventInterface_eventOnChunkVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonStreamingChunkEventInterface_eventOnChunkVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UDungeonStreamingChunkEventInterface Function OnChunkVisible

// Begin Interface UDungeonStreamingChunkEventInterface
void UDungeonStreamingChunkEventInterface::StaticRegisterNativesUDungeonStreamingChunkEventInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonStreamingChunkEventInterface);
UClass* Z_Construct_UClass_UDungeonStreamingChunkEventInterface_NoRegister()
{
	return UDungeonStreamingChunkEventInterface::StaticClass();
}
struct Z_Construct_UClass_UDungeonStreamingChunkEventInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Frameworks/LevelStreaming/Interfaces/DungeonStreamingChunkEvent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkHidden, "OnChunkHidden" }, // 2641647469
		{ &Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkLoaded, "OnChunkLoaded" }, // 1578584061
		{ &Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkUnloaded, "OnChunkUnloaded" }, // 1641241271
		{ &Z_Construct_UFunction_UDungeonStreamingChunkEventInterface_OnChunkVisible, "OnChunkVisible" }, // 1314832404
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDungeonStreamingChunkEventInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDungeonStreamingChunkEventInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingChunkEventInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonStreamingChunkEventInterface_Statics::ClassParams = {
	&UDungeonStreamingChunkEventInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonStreamingChunkEventInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonStreamingChunkEventInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonStreamingChunkEventInterface()
{
	if (!Z_Registration_Info_UClass_UDungeonStreamingChunkEventInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonStreamingChunkEventInterface.OuterSingleton, Z_Construct_UClass_UDungeonStreamingChunkEventInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonStreamingChunkEventInterface.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonStreamingChunkEventInterface>()
{
	return UDungeonStreamingChunkEventInterface::StaticClass();
}
UDungeonStreamingChunkEventInterface::UDungeonStreamingChunkEventInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonStreamingChunkEventInterface);
UDungeonStreamingChunkEventInterface::~UDungeonStreamingChunkEventInterface() {}
// End Interface UDungeonStreamingChunkEventInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingChunkEvent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonStreamingChunkEventInterface, UDungeonStreamingChunkEventInterface::StaticClass, TEXT("UDungeonStreamingChunkEventInterface"), &Z_Registration_Info_UClass_UDungeonStreamingChunkEventInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonStreamingChunkEventInterface), 2167039611U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingChunkEvent_h_1004239722(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingChunkEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Frameworks_LevelStreaming_Interfaces_DungeonStreamingChunkEvent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
