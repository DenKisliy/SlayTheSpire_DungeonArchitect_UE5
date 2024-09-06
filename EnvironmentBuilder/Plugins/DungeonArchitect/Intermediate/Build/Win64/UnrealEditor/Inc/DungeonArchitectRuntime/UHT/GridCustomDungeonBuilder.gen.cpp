// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DungeonArchitectRuntime/Public/Builders/GridCustom/GridCustomDungeonBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridCustomDungeonBuilder() {}

// Begin Cross Module References
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridCustomDungeonBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridCustomDungeonBuilder_NoRegister();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonBuilder();
DUNGEONARCHITECTRUNTIME_API UClass* Z_Construct_UClass_UGridDungeonConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_DungeonArchitectRuntime();
// End Cross Module References

// Begin Class UGridCustomDungeonBuilder Function ConnectRooms
struct Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms_Statics
{
	struct GridCustomDungeonBuilder_eventConnectRooms_Parms
	{
		int32 Room1;
		int32 Room2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridCustom/GridCustomDungeonBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Room1;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Room2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms_Statics::NewProp_Room1 = { "Room1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventConnectRooms_Parms, Room1), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms_Statics::NewProp_Room2 = { "Room2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventConnectRooms_Parms, Room2), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms_Statics::NewProp_Room1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms_Statics::NewProp_Room2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridCustomDungeonBuilder, nullptr, "ConnectRooms", nullptr, nullptr, Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms_Statics::GridCustomDungeonBuilder_eventConnectRooms_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms_Statics::GridCustomDungeonBuilder_eventConnectRooms_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridCustomDungeonBuilder::execConnectRooms)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Room1);
	P_GET_PROPERTY(FIntProperty,Z_Param_Room2);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConnectRooms(Z_Param_Room1,Z_Param_Room2);
	P_NATIVE_END;
}
// End Class UGridCustomDungeonBuilder Function ConnectRooms

// Begin Class UGridCustomDungeonBuilder Function GenerateCustomLayout
struct GridCustomDungeonBuilder_eventGenerateCustomLayout_Parms
{
	UGridDungeonConfig* InGridConfig;
};
static FName NAME_UGridCustomDungeonBuilder_GenerateCustomLayout = FName(TEXT("GenerateCustomLayout"));
void UGridCustomDungeonBuilder::GenerateCustomLayout(UGridDungeonConfig* InGridConfig)
{
	GridCustomDungeonBuilder_eventGenerateCustomLayout_Parms Parms;
	Parms.InGridConfig=InGridConfig;
	ProcessEvent(FindFunctionChecked(NAME_UGridCustomDungeonBuilder_GenerateCustomLayout),&Parms);
}
struct Z_Construct_UFunction_UGridCustomDungeonBuilder_GenerateCustomLayout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** called when something enters the sphere component */" },
#endif
		{ "ModuleRelativePath", "Public/Builders/GridCustom/GridCustomDungeonBuilder.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "called when something enters the sphere component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InGridConfig_MetaData[] = {
		{ "DisplayName", "GridConfig" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InGridConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_GenerateCustomLayout_Statics::NewProp_InGridConfig = { "InGridConfig", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventGenerateCustomLayout_Parms, InGridConfig), Z_Construct_UClass_UGridDungeonConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InGridConfig_MetaData), NewProp_InGridConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridCustomDungeonBuilder_GenerateCustomLayout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_GenerateCustomLayout_Statics::NewProp_InGridConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCustomDungeonBuilder_GenerateCustomLayout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridCustomDungeonBuilder_GenerateCustomLayout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridCustomDungeonBuilder, nullptr, "GenerateCustomLayout", nullptr, nullptr, Z_Construct_UFunction_UGridCustomDungeonBuilder_GenerateCustomLayout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCustomDungeonBuilder_GenerateCustomLayout_Statics::PropPointers), sizeof(GridCustomDungeonBuilder_eventGenerateCustomLayout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCustomDungeonBuilder_GenerateCustomLayout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridCustomDungeonBuilder_GenerateCustomLayout_Statics::Function_MetaDataParams) };
static_assert(sizeof(GridCustomDungeonBuilder_eventGenerateCustomLayout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridCustomDungeonBuilder_GenerateCustomLayout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridCustomDungeonBuilder_GenerateCustomLayout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridCustomDungeonBuilder::execGenerateCustomLayout)
{
	P_GET_OBJECT(UGridDungeonConfig,Z_Param_InGridConfig);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GenerateCustomLayout_Implementation(Z_Param_InGridConfig);
	P_NATIVE_END;
}
// End Class UGridCustomDungeonBuilder Function GenerateCustomLayout

// Begin Class UGridCustomDungeonBuilder Function GetRandomOffset
struct Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics
{
	struct GridCustomDungeonBuilder_eventGetRandomOffset_Parms
	{
		int32 X;
		int32 Y;
		float Radius;
		int32 OutX;
		int32 OutY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridCustom/GridCustomDungeonBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventGetRandomOffset_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventGetRandomOffset_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventGetRandomOffset_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::NewProp_OutX = { "OutX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventGetRandomOffset_Parms, OutX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::NewProp_OutY = { "OutY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventGetRandomOffset_Parms, OutY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::NewProp_OutX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::NewProp_OutY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridCustomDungeonBuilder, nullptr, "GetRandomOffset", nullptr, nullptr, Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::GridCustomDungeonBuilder_eventGetRandomOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::GridCustomDungeonBuilder_eventGetRandomOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridCustomDungeonBuilder::execGetRandomOffset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutX);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetRandomOffset(Z_Param_X,Z_Param_Y,Z_Param_Radius,Z_Param_Out_OutX,Z_Param_Out_OutY);
	P_NATIVE_END;
}
// End Class UGridCustomDungeonBuilder Function GetRandomOffset

// Begin Class UGridCustomDungeonBuilder Function RegisterRoom
struct Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics
{
	struct GridCustomDungeonBuilder_eventRegisterRoom_Parms
	{
		int32 X;
		int32 Y;
		int32 Z;
		int32 Width;
		int32 Height;
		int32 RoomID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridCustom/GridCustomDungeonBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Z;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventRegisterRoom_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventRegisterRoom_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventRegisterRoom_Parms, Z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventRegisterRoom_Parms, Width), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventRegisterRoom_Parms, Height), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventRegisterRoom_Parms, RoomID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::NewProp_Width,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::NewProp_RoomID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridCustomDungeonBuilder, nullptr, "RegisterRoom", nullptr, nullptr, Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::GridCustomDungeonBuilder_eventRegisterRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::GridCustomDungeonBuilder_eventRegisterRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridCustomDungeonBuilder::execRegisterRoom)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_Z);
	P_GET_PROPERTY(FIntProperty,Z_Param_Width);
	P_GET_PROPERTY(FIntProperty,Z_Param_Height);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RoomID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterRoom(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Width,Z_Param_Height,Z_Param_Out_RoomID);
	P_NATIVE_END;
}
// End Class UGridCustomDungeonBuilder Function RegisterRoom

// Begin Class UGridCustomDungeonBuilder Function RegisterRoomAt
struct Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics
{
	struct GridCustomDungeonBuilder_eventRegisterRoomAt_Parms
	{
		int32 X;
		int32 Y;
		int32 Z;
		int32 RoomID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridCustom/GridCustomDungeonBuilder.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Z;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoomID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventRegisterRoomAt_Parms, X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventRegisterRoomAt_Parms, Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventRegisterRoomAt_Parms, Z), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::NewProp_RoomID = { "RoomID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GridCustomDungeonBuilder_eventRegisterRoomAt_Parms, RoomID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::NewProp_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::NewProp_Z,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::NewProp_RoomID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGridCustomDungeonBuilder, nullptr, "RegisterRoomAt", nullptr, nullptr, Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::GridCustomDungeonBuilder_eventRegisterRoomAt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::GridCustomDungeonBuilder_eventRegisterRoomAt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGridCustomDungeonBuilder::execRegisterRoomAt)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_Z);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RoomID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterRoomAt(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_Out_RoomID);
	P_NATIVE_END;
}
// End Class UGridCustomDungeonBuilder Function RegisterRoomAt

// Begin Class UGridCustomDungeonBuilder
void UGridCustomDungeonBuilder::StaticRegisterNativesUGridCustomDungeonBuilder()
{
	UClass* Class = UGridCustomDungeonBuilder::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConnectRooms", &UGridCustomDungeonBuilder::execConnectRooms },
		{ "GenerateCustomLayout", &UGridCustomDungeonBuilder::execGenerateCustomLayout },
		{ "GetRandomOffset", &UGridCustomDungeonBuilder::execGetRandomOffset },
		{ "RegisterRoom", &UGridCustomDungeonBuilder::execRegisterRoom },
		{ "RegisterRoomAt", &UGridCustomDungeonBuilder::execRegisterRoomAt },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridCustomDungeonBuilder);
UClass* Z_Construct_UClass_UGridCustomDungeonBuilder_NoRegister()
{
	return UGridCustomDungeonBuilder::StaticClass();
}
struct Z_Construct_UClass_UGridCustomDungeonBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*\n*/" },
#endif
		{ "Description", "An example of a custom grid builder. This has been derived from the Grid builder and exposes blueprint functions to create rooms and their connections at certain positions" },
		{ "DisplayName", "Grid (Custom)" },
		{ "IncludePath", "Builders/GridCustom/GridCustomDungeonBuilder.h" },
		{ "ModuleRelativePath", "Public/Builders/GridCustom/GridCustomDungeonBuilder.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHeightVariation_MetaData[] = {
		{ "Category", "Dungeon" },
		{ "ModuleRelativePath", "Public/Builders/GridCustom/GridCustomDungeonBuilder.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseHeightVariation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHeightVariation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGridCustomDungeonBuilder_ConnectRooms, "ConnectRooms" }, // 3030247985
		{ &Z_Construct_UFunction_UGridCustomDungeonBuilder_GenerateCustomLayout, "GenerateCustomLayout" }, // 1628964623
		{ &Z_Construct_UFunction_UGridCustomDungeonBuilder_GetRandomOffset, "GetRandomOffset" }, // 2735144723
		{ &Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoom, "RegisterRoom" }, // 1986597255
		{ &Z_Construct_UFunction_UGridCustomDungeonBuilder_RegisterRoomAt, "RegisterRoomAt" }, // 3532706713
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridCustomDungeonBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGridCustomDungeonBuilder_Statics::NewProp_bUseHeightVariation_SetBit(void* Obj)
{
	((UGridCustomDungeonBuilder*)Obj)->bUseHeightVariation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridCustomDungeonBuilder_Statics::NewProp_bUseHeightVariation = { "bUseHeightVariation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGridCustomDungeonBuilder), &Z_Construct_UClass_UGridCustomDungeonBuilder_Statics::NewProp_bUseHeightVariation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHeightVariation_MetaData), NewProp_bUseHeightVariation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridCustomDungeonBuilder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridCustomDungeonBuilder_Statics::NewProp_bUseHeightVariation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridCustomDungeonBuilder_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGridCustomDungeonBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGridDungeonBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_DungeonArchitectRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridCustomDungeonBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridCustomDungeonBuilder_Statics::ClassParams = {
	&UGridCustomDungeonBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGridCustomDungeonBuilder_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGridCustomDungeonBuilder_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridCustomDungeonBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridCustomDungeonBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridCustomDungeonBuilder()
{
	if (!Z_Registration_Info_UClass_UGridCustomDungeonBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridCustomDungeonBuilder.OuterSingleton, Z_Construct_UClass_UGridCustomDungeonBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridCustomDungeonBuilder.OuterSingleton;
}
template<> DUNGEONARCHITECTRUNTIME_API UClass* StaticClass<UGridCustomDungeonBuilder>()
{
	return UGridCustomDungeonBuilder::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridCustomDungeonBuilder);
UGridCustomDungeonBuilder::~UGridCustomDungeonBuilder() {}
// End Class UGridCustomDungeonBuilder

// Begin Registration
struct Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridCustomDungeonBuilder, UGridCustomDungeonBuilder::StaticClass, TEXT("UGridCustomDungeonBuilder"), &Z_Registration_Info_UClass_UGridCustomDungeonBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridCustomDungeonBuilder), 209430516U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_3673938298(TEXT("/Script/DungeonArchitectRuntime"),
	Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EnvironmentBuilder_Plugins_DungeonArchitect_Source_DungeonArchitectRuntime_Public_Builders_GridCustom_GridCustomDungeonBuilder_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
