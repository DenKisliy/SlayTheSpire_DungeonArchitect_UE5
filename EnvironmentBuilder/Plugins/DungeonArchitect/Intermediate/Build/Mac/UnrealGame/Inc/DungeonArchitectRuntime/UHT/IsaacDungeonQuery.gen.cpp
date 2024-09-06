// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/Isaac/IsaacDungeonQuery.h"
#include "DungeonArchitectRuntime/Public/Builders/Isaac/IsaacDungeonModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsaacDungeonQuery() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UDungeonQuery();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonConfig_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonModel_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonQuery();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UIsaacDungeonQuery_NoRegister();
DUNGEONARCHITECTRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FIsaacRoom();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UIsaacDungeonQuery Function ContainsDoorBetween
struct Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics
{
	struct IsaacDungeonQuery_eventContainsDoorBetween_Parms
	{
		int32 RoomAId;
		int32 RoomBId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonQuery.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomAId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomBId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::NewProp_RoomAId = { "RoomAId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventContainsDoorBetween_Parms, RoomAId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::NewProp_RoomBId = { "RoomBId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventContainsDoorBetween_Parms, RoomBId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IsaacDungeonQuery_eventContainsDoorBetween_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IsaacDungeonQuery_eventContainsDoorBetween_Parms), &Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::NewProp_RoomAId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::NewProp_RoomBId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsaacDungeonQuery, nullptr, "ContainsDoorBetween", nullptr, nullptr, Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::IsaacDungeonQuery_eventContainsDoorBetween_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::IsaacDungeonQuery_eventContainsDoorBetween_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsaacDungeonQuery::execContainsDoorBetween)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_RoomAId);
	P_GET_PROPERTY(FIntProperty,Z_Param_RoomBId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ContainsDoorBetween(Z_Param_RoomAId,Z_Param_RoomBId);
	P_NATIVE_END;
}
// End Class UIsaacDungeonQuery Function ContainsDoorBetween

// Begin Class UIsaacDungeonQuery Function GetFurthestRooms
struct Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics
{
	struct IsaacDungeonQuery_eventGetFurthestRooms_Parms
	{
		int32 OutRoomA;
		int32 OutRoomB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonQuery.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutRoomA;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutRoomB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::NewProp_OutRoomA = { "OutRoomA", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventGetFurthestRooms_Parms, OutRoomA), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::NewProp_OutRoomB = { "OutRoomB", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventGetFurthestRooms_Parms, OutRoomB), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::NewProp_OutRoomA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::NewProp_OutRoomB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsaacDungeonQuery, nullptr, "GetFurthestRooms", nullptr, nullptr, Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::IsaacDungeonQuery_eventGetFurthestRooms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::IsaacDungeonQuery_eventGetFurthestRooms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsaacDungeonQuery::execGetFurthestRooms)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutRoomA);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutRoomB);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetFurthestRooms(Z_Param_Out_OutRoomA,Z_Param_Out_OutRoomB);
	P_NATIVE_END;
}
// End Class UIsaacDungeonQuery Function GetFurthestRooms

// Begin Class UIsaacDungeonQuery Function GetRandomValidPlatform
struct Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics
{
	struct IsaacDungeonQuery_eventGetRandomValidPlatform_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonQuery.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventGetRandomValidPlatform_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsaacDungeonQuery, nullptr, "GetRandomValidPlatform", nullptr, nullptr, Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::IsaacDungeonQuery_eventGetRandomValidPlatform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::IsaacDungeonQuery_eventGetRandomValidPlatform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsaacDungeonQuery::execGetRandomValidPlatform)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetRandomValidPlatform();
	P_NATIVE_END;
}
// End Class UIsaacDungeonQuery Function GetRandomValidPlatform

// Begin Class UIsaacDungeonQuery Function GetRoom
struct Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics
{
	struct IsaacDungeonQuery_eventGetRoom_Parms
	{
		int32 RoomId;
		FIsaacRoom ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonQuery.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::NewProp_RoomId = { "RoomId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventGetRoom_Parms, RoomId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventGetRoom_Parms, ReturnValue), Z_Construct_UScriptStruct_FIsaacRoom, METADATA_PARAMS(0, nullptr) }; // 622021622
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::NewProp_RoomId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsaacDungeonQuery, nullptr, "GetRoom", nullptr, nullptr, Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::IsaacDungeonQuery_eventGetRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::IsaacDungeonQuery_eventGetRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsaacDungeonQuery::execGetRoom)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_RoomId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIsaacRoom*)Z_Param__Result=P_THIS->GetRoom(Z_Param_RoomId);
	P_NATIVE_END;
}
// End Class UIsaacDungeonQuery Function GetRoom

// Begin Class UIsaacDungeonQuery Function GetValidPlatformOnRoom
struct Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics
{
	struct IsaacDungeonQuery_eventGetValidPlatformOnRoom_Parms
	{
		int32 RoomId;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonQuery.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::NewProp_RoomId = { "RoomId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventGetValidPlatformOnRoom_Parms, RoomId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IsaacDungeonQuery_eventGetValidPlatformOnRoom_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::NewProp_RoomId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsaacDungeonQuery, nullptr, "GetValidPlatformOnRoom", nullptr, nullptr, Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::IsaacDungeonQuery_eventGetValidPlatformOnRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::IsaacDungeonQuery_eventGetValidPlatformOnRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIsaacDungeonQuery::execGetValidPlatformOnRoom)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_RoomId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetValidPlatformOnRoom(Z_Param_RoomId);
	P_NATIVE_END;
}
// End Class UIsaacDungeonQuery Function GetValidPlatformOnRoom

// Begin Class UIsaacDungeonQuery
void UIsaacDungeonQuery::StaticRegisterNativesUIsaacDungeonQuery()
{
	UClass* Class = UIsaacDungeonQuery::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ContainsDoorBetween", &UIsaacDungeonQuery::execContainsDoorBetween },
		{ "GetFurthestRooms", &UIsaacDungeonQuery::execGetFurthestRooms },
		{ "GetRandomValidPlatform", &UIsaacDungeonQuery::execGetRandomValidPlatform },
		{ "GetRoom", &UIsaacDungeonQuery::execGetRoom },
		{ "GetValidPlatformOnRoom", &UIsaacDungeonQuery::execGetValidPlatformOnRoom },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsaacDungeonQuery);
UClass* Z_Construct_UClass_UIsaacDungeonQuery_NoRegister()
{
	return UIsaacDungeonQuery::StaticClass();
}
struct Z_Construct_UClass_UIsaacDungeonQuery_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\n*/" },
		{ "IncludePath", "Builders/Isaac/IsaacDungeonQuery.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonQuery.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Config_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonQuery.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[] = {
		{ "ModuleRelativePath", "Public/Builders/Isaac/IsaacDungeonQuery.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Config;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Model;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsaacDungeonQuery_ContainsDoorBetween, "ContainsDoorBetween" }, // 987153537
		{ &Z_Construct_UFunction_UIsaacDungeonQuery_GetFurthestRooms, "GetFurthestRooms" }, // 2214315667
		{ &Z_Construct_UFunction_UIsaacDungeonQuery_GetRandomValidPlatform, "GetRandomValidPlatform" }, // 373945201
		{ &Z_Construct_UFunction_UIsaacDungeonQuery_GetRoom, "GetRoom" }, // 1612470875
		{ &Z_Construct_UFunction_UIsaacDungeonQuery_GetValidPlatformOnRoom, "GetValidPlatformOnRoom" }, // 4029469150
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsaacDungeonQuery>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsaacDungeonQuery_Statics::NewProp_Config = { "Config", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsaacDungeonQuery, Config), Z_Construct_UClass_UIsaacDungeonConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Config_MetaData), NewProp_Config_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIsaacDungeonQuery_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIsaacDungeonQuery, Model), Z_Construct_UClass_UIsaacDungeonModel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Model_MetaData), NewProp_Model_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsaacDungeonQuery_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonQuery_Statics::NewProp_Config,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsaacDungeonQuery_Statics::NewProp_Model,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonQuery_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIsaacDungeonQuery_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDungeonQuery,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonQuery_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsaacDungeonQuery_Statics::ClassParams = {
	&UIsaacDungeonQuery::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIsaacDungeonQuery_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonQuery_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIsaacDungeonQuery_Statics::Class_MetaDataParams), Z_Construct_UClass_UIsaacDungeonQuery_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIsaacDungeonQuery()
{
	if (!Z_Registration_Info_UClass_UIsaacDungeonQuery.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsaacDungeonQuery.OuterSingleton, Z_Construct_UClass_UIsaacDungeonQuery_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIsaacDungeonQuery.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UIsaacDungeonQuery>()
{
	return UIsaacDungeonQuery::StaticClass();
}
UIsaacDungeonQuery::UIsaacDungeonQuery() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIsaacDungeonQuery);
UIsaacDungeonQuery::~UIsaacDungeonQuery() {}
// End Class UIsaacDungeonQuery

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIsaacDungeonQuery, UIsaacDungeonQuery::StaticClass, TEXT("UIsaacDungeonQuery"), &Z_Registration_Info_UClass_UIsaacDungeonQuery, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsaacDungeonQuery), 2221402817U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_1885317785(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_Isaac_IsaacDungeonQuery_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
