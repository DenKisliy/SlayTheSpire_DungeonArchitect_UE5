// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Core/Game/DungeonBuildSystem.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDungeonBuildSystem() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeon_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonBuildSystem();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_ADungeonBuildSystem_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuildSystemComponent();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonBuildSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UDungeonBuildSystemComponent Function CanStartMatch
struct DungeonBuildSystemComponent_eventCanStartMatch_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	DungeonBuildSystemComponent_eventCanStartMatch_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UDungeonBuildSystemComponent_CanStartMatch = FName(TEXT("CanStartMatch"));
bool UDungeonBuildSystemComponent::CanStartMatch()
{
	DungeonBuildSystemComponent_eventCanStartMatch_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UDungeonBuildSystemComponent_CanStartMatch),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UDungeonBuildSystemComponent_CanStartMatch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Game/DungeonBuildSystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDungeonBuildSystemComponent_CanStartMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DungeonBuildSystemComponent_eventCanStartMatch_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBuildSystemComponent_CanStartMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBuildSystemComponent_eventCanStartMatch_Parms), &Z_Construct_UFunction_UDungeonBuildSystemComponent_CanStartMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBuildSystemComponent_CanStartMatch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBuildSystemComponent_CanStartMatch_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuildSystemComponent_CanStartMatch_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBuildSystemComponent_CanStartMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBuildSystemComponent, nullptr, "CanStartMatch", nullptr, nullptr, Z_Construct_UFunction_UDungeonBuildSystemComponent_CanStartMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuildSystemComponent_CanStartMatch_Statics::PropPointers), sizeof(DungeonBuildSystemComponent_eventCanStartMatch_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuildSystemComponent_CanStartMatch_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBuildSystemComponent_CanStartMatch_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonBuildSystemComponent_eventCanStartMatch_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBuildSystemComponent_CanStartMatch()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBuildSystemComponent_CanStartMatch_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBuildSystemComponent::execCanStartMatch)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanStartMatch_Implementation();
	P_NATIVE_END;
}
// End Class UDungeonBuildSystemComponent Function CanStartMatch

// Begin Class UDungeonBuildSystemComponent Function MulticastBuildDungeon
struct DungeonBuildSystemComponent_eventMulticastBuildDungeon_Parms
{
	int32 InSeed;
};
static FName NAME_UDungeonBuildSystemComponent_MulticastBuildDungeon = FName(TEXT("MulticastBuildDungeon"));
void UDungeonBuildSystemComponent::MulticastBuildDungeon(int32 InSeed)
{
	DungeonBuildSystemComponent_eventMulticastBuildDungeon_Parms Parms;
	Parms.InSeed=InSeed;
	ProcessEvent(FindFunctionChecked(NAME_UDungeonBuildSystemComponent_MulticastBuildDungeon),&Parms);
}
struct Z_Construct_UFunction_UDungeonBuildSystemComponent_MulticastBuildDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Multicast function to build the dungeon on all clients */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Game/DungeonBuildSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Multicast function to build the dungeon on all clients" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonBuildSystemComponent_MulticastBuildDungeon_Statics::NewProp_InSeed = { "InSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBuildSystemComponent_eventMulticastBuildDungeon_Parms, InSeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBuildSystemComponent_MulticastBuildDungeon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBuildSystemComponent_MulticastBuildDungeon_Statics::NewProp_InSeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuildSystemComponent_MulticastBuildDungeon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBuildSystemComponent_MulticastBuildDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBuildSystemComponent, nullptr, "MulticastBuildDungeon", nullptr, nullptr, Z_Construct_UFunction_UDungeonBuildSystemComponent_MulticastBuildDungeon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuildSystemComponent_MulticastBuildDungeon_Statics::PropPointers), sizeof(DungeonBuildSystemComponent_eventMulticastBuildDungeon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuildSystemComponent_MulticastBuildDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBuildSystemComponent_MulticastBuildDungeon_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonBuildSystemComponent_eventMulticastBuildDungeon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBuildSystemComponent_MulticastBuildDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBuildSystemComponent_MulticastBuildDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBuildSystemComponent::execMulticastBuildDungeon)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InSeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastBuildDungeon_Implementation(Z_Param_InSeed);
	P_NATIVE_END;
}
// End Class UDungeonBuildSystemComponent Function MulticastBuildDungeon

// Begin Class UDungeonBuildSystemComponent Function OnBuildComplete
struct Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics
{
	struct DungeonBuildSystemComponent_eventOnBuildComplete_Parms
	{
		ADungeon* InDungeon;
		bool bSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Game/DungeonBuildSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDungeon;
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics::NewProp_InDungeon = { "InDungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBuildSystemComponent_eventOnBuildComplete_Parms, InDungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((DungeonBuildSystemComponent_eventOnBuildComplete_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DungeonBuildSystemComponent_eventOnBuildComplete_Parms), &Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics::NewProp_InDungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBuildSystemComponent, nullptr, "OnBuildComplete", nullptr, nullptr, Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics::DungeonBuildSystemComponent_eventOnBuildComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics::DungeonBuildSystemComponent_eventOnBuildComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBuildSystemComponent::execOnBuildComplete)
{
	P_GET_OBJECT(ADungeon,Z_Param_InDungeon);
	P_GET_UBOOL(Z_Param_bSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBuildComplete(Z_Param_InDungeon,Z_Param_bSuccess);
	P_NATIVE_END;
}
// End Class UDungeonBuildSystemComponent Function OnBuildComplete

// Begin Class UDungeonBuildSystemComponent Function OnInitialChunksLoaded
struct Z_Construct_UFunction_UDungeonBuildSystemComponent_OnInitialChunksLoaded_Statics
{
	struct DungeonBuildSystemComponent_eventOnInitialChunksLoaded_Parms
	{
		ADungeon* InDungeon;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Core/Game/DungeonBuildSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InDungeon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDungeonBuildSystemComponent_OnInitialChunksLoaded_Statics::NewProp_InDungeon = { "InDungeon", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBuildSystemComponent_eventOnInitialChunksLoaded_Parms, InDungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBuildSystemComponent_OnInitialChunksLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBuildSystemComponent_OnInitialChunksLoaded_Statics::NewProp_InDungeon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuildSystemComponent_OnInitialChunksLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBuildSystemComponent_OnInitialChunksLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBuildSystemComponent, nullptr, "OnInitialChunksLoaded", nullptr, nullptr, Z_Construct_UFunction_UDungeonBuildSystemComponent_OnInitialChunksLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuildSystemComponent_OnInitialChunksLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDungeonBuildSystemComponent_OnInitialChunksLoaded_Statics::DungeonBuildSystemComponent_eventOnInitialChunksLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuildSystemComponent_OnInitialChunksLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBuildSystemComponent_OnInitialChunksLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDungeonBuildSystemComponent_OnInitialChunksLoaded_Statics::DungeonBuildSystemComponent_eventOnInitialChunksLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBuildSystemComponent_OnInitialChunksLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBuildSystemComponent_OnInitialChunksLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBuildSystemComponent::execOnInitialChunksLoaded)
{
	P_GET_OBJECT(ADungeon,Z_Param_InDungeon);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnInitialChunksLoaded(Z_Param_InDungeon);
	P_NATIVE_END;
}
// End Class UDungeonBuildSystemComponent Function OnInitialChunksLoaded

// Begin Class UDungeonBuildSystemComponent Function ServerBuildDungeon
struct DungeonBuildSystemComponent_eventServerBuildDungeon_Parms
{
	int32 InSeed;
};
static FName NAME_UDungeonBuildSystemComponent_ServerBuildDungeon = FName(TEXT("ServerBuildDungeon"));
void UDungeonBuildSystemComponent::ServerBuildDungeon(int32 InSeed)
{
	DungeonBuildSystemComponent_eventServerBuildDungeon_Parms Parms;
	Parms.InSeed=InSeed;
	ProcessEvent(FindFunctionChecked(NAME_UDungeonBuildSystemComponent_ServerBuildDungeon),&Parms);
}
struct Z_Construct_UFunction_UDungeonBuildSystemComponent_ServerBuildDungeon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Manually invoke the build system on the server */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Game/DungeonBuildSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manually invoke the build system on the server" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDungeonBuildSystemComponent_ServerBuildDungeon_Statics::NewProp_InSeed = { "InSeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DungeonBuildSystemComponent_eventServerBuildDungeon_Parms, InSeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDungeonBuildSystemComponent_ServerBuildDungeon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDungeonBuildSystemComponent_ServerBuildDungeon_Statics::NewProp_InSeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuildSystemComponent_ServerBuildDungeon_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDungeonBuildSystemComponent_ServerBuildDungeon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDungeonBuildSystemComponent, nullptr, "ServerBuildDungeon", nullptr, nullptr, Z_Construct_UFunction_UDungeonBuildSystemComponent_ServerBuildDungeon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuildSystemComponent_ServerBuildDungeon_Statics::PropPointers), sizeof(DungeonBuildSystemComponent_eventServerBuildDungeon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x84220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDungeonBuildSystemComponent_ServerBuildDungeon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDungeonBuildSystemComponent_ServerBuildDungeon_Statics::Function_MetaDataParams) };
static_assert(sizeof(DungeonBuildSystemComponent_eventServerBuildDungeon_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDungeonBuildSystemComponent_ServerBuildDungeon()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDungeonBuildSystemComponent_ServerBuildDungeon_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDungeonBuildSystemComponent::execServerBuildDungeon)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InSeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerBuildDungeon_Validate(Z_Param_InSeed))
	{
		RPC_ValidateFailed(TEXT("ServerBuildDungeon_Validate"));
		return;
	}
	P_THIS->ServerBuildDungeon_Implementation(Z_Param_InSeed);
	P_NATIVE_END;
}
// End Class UDungeonBuildSystemComponent Function ServerBuildDungeon

// Begin Class UDungeonBuildSystemComponent
void UDungeonBuildSystemComponent::StaticRegisterNativesUDungeonBuildSystemComponent()
{
	UClass* Class = UDungeonBuildSystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanStartMatch", &UDungeonBuildSystemComponent::execCanStartMatch },
		{ "MulticastBuildDungeon", &UDungeonBuildSystemComponent::execMulticastBuildDungeon },
		{ "OnBuildComplete", &UDungeonBuildSystemComponent::execOnBuildComplete },
		{ "OnInitialChunksLoaded", &UDungeonBuildSystemComponent::execOnInitialChunksLoaded },
		{ "ServerBuildDungeon", &UDungeonBuildSystemComponent::execServerBuildDungeon },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDungeonBuildSystemComponent);
UClass* Z_Construct_UClass_UDungeonBuildSystemComponent_NoRegister()
{
	return UDungeonBuildSystemComponent::StaticClass();
}
struct Z_Construct_UClass_UDungeonBuildSystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Core/Game/DungeonBuildSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Game/DungeonBuildSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dungeon_MetaData[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The dungeon actor to build. Leave it blank to automatically pick the first Dungeon actor it finds on the screen */" },
#endif
		{ "ModuleRelativePath", "Public/Core/Game/DungeonBuildSystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The dungeon actor to build. Leave it blank to automatically pick the first Dungeon actor it finds on the screen" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoBuildOnPlay_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Game/DungeonBuildSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomizeSeedOnBuild_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Core/Game/DungeonBuildSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDungeonReady_MetaData[] = {
		{ "ModuleRelativePath", "Public/Core/Game/DungeonBuildSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dungeon;
	static void NewProp_bAutoBuildOnPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoBuildOnPlay;
	static void NewProp_bRandomizeSeedOnBuild_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomizeSeedOnBuild;
	static void NewProp_bIsDungeonReady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDungeonReady;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDungeonBuildSystemComponent_CanStartMatch, "CanStartMatch" }, // 2058763359
		{ &Z_Construct_UFunction_UDungeonBuildSystemComponent_MulticastBuildDungeon, "MulticastBuildDungeon" }, // 605963303
		{ &Z_Construct_UFunction_UDungeonBuildSystemComponent_OnBuildComplete, "OnBuildComplete" }, // 940832976
		{ &Z_Construct_UFunction_UDungeonBuildSystemComponent_OnInitialChunksLoaded, "OnInitialChunksLoaded" }, // 3413783025
		{ &Z_Construct_UFunction_UDungeonBuildSystemComponent_ServerBuildDungeon, "ServerBuildDungeon" }, // 2477484578
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDungeonBuildSystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::NewProp_Dungeon = { "Dungeon", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDungeonBuildSystemComponent, Dungeon), Z_Construct_UClass_ADungeon_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dungeon_MetaData), NewProp_Dungeon_MetaData) };
void Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::NewProp_bAutoBuildOnPlay_SetBit(void* Obj)
{
	((UDungeonBuildSystemComponent*)Obj)->bAutoBuildOnPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::NewProp_bAutoBuildOnPlay = { "bAutoBuildOnPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonBuildSystemComponent), &Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::NewProp_bAutoBuildOnPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoBuildOnPlay_MetaData), NewProp_bAutoBuildOnPlay_MetaData) };
void Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::NewProp_bRandomizeSeedOnBuild_SetBit(void* Obj)
{
	((UDungeonBuildSystemComponent*)Obj)->bRandomizeSeedOnBuild = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::NewProp_bRandomizeSeedOnBuild = { "bRandomizeSeedOnBuild", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonBuildSystemComponent), &Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::NewProp_bRandomizeSeedOnBuild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomizeSeedOnBuild_MetaData), NewProp_bRandomizeSeedOnBuild_MetaData) };
void Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::NewProp_bIsDungeonReady_SetBit(void* Obj)
{
	((UDungeonBuildSystemComponent*)Obj)->bIsDungeonReady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::NewProp_bIsDungeonReady = { "bIsDungeonReady", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDungeonBuildSystemComponent), &Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::NewProp_bIsDungeonReady_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDungeonReady_MetaData), NewProp_bIsDungeonReady_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::NewProp_Dungeon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::NewProp_bAutoBuildOnPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::NewProp_bRandomizeSeedOnBuild,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::NewProp_bIsDungeonReady,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::ClassParams = {
	&UDungeonBuildSystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDungeonBuildSystemComponent()
{
	if (!Z_Registration_Info_UClass_UDungeonBuildSystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDungeonBuildSystemComponent.OuterSingleton, Z_Construct_UClass_UDungeonBuildSystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDungeonBuildSystemComponent.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UDungeonBuildSystemComponent>()
{
	return UDungeonBuildSystemComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDungeonBuildSystemComponent);
UDungeonBuildSystemComponent::~UDungeonBuildSystemComponent() {}
// End Class UDungeonBuildSystemComponent

// Begin Class ADungeonBuildSystem
void ADungeonBuildSystem::StaticRegisterNativesADungeonBuildSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADungeonBuildSystem);
UClass* Z_Construct_UClass_ADungeonBuildSystem_NoRegister()
{
	return ADungeonBuildSystem::StaticClass();
}
struct Z_Construct_UClass_ADungeonBuildSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Core/Game/DungeonBuildSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Core/Game/DungeonBuildSystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuildSystemComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Dungeon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Game/DungeonBuildSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuildSystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADungeonBuildSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADungeonBuildSystem_Statics::NewProp_BuildSystemComponent = { "BuildSystemComponent", nullptr, (EPropertyFlags)0x01440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADungeonBuildSystem, BuildSystemComponent), Z_Construct_UClass_UDungeonBuildSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuildSystemComponent_MetaData), NewProp_BuildSystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADungeonBuildSystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADungeonBuildSystem_Statics::NewProp_BuildSystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonBuildSystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADungeonBuildSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonBuildSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADungeonBuildSystem_Statics::ClassParams = {
	&ADungeonBuildSystem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADungeonBuildSystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonBuildSystem_Statics::PropPointers),
	0,
	0x008000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADungeonBuildSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_ADungeonBuildSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADungeonBuildSystem()
{
	if (!Z_Registration_Info_UClass_ADungeonBuildSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADungeonBuildSystem.OuterSingleton, Z_Construct_UClass_ADungeonBuildSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADungeonBuildSystem.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<ADungeonBuildSystem>()
{
	return ADungeonBuildSystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADungeonBuildSystem);
ADungeonBuildSystem::~ADungeonBuildSystem() {}
// End Class ADungeonBuildSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDungeonBuildSystemComponent, UDungeonBuildSystemComponent::StaticClass, TEXT("UDungeonBuildSystemComponent"), &Z_Registration_Info_UClass_UDungeonBuildSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDungeonBuildSystemComponent), 3248221928U) },
		{ Z_Construct_UClass_ADungeonBuildSystem, ADungeonBuildSystem::StaticClass, TEXT("ADungeonBuildSystem"), &Z_Registration_Info_UClass_ADungeonBuildSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADungeonBuildSystem), 1807061925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_8025502(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Core_Game_DungeonBuildSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
