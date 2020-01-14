// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayHelper/Public/WeaponBlock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponBlock() {}
// Cross Module References
	GAMEPLAYHELPER_API UClass* Z_Construct_UClass_UWeaponBlock_NoRegister();
	GAMEPLAYHELPER_API UClass* Z_Construct_UClass_UWeaponBlock();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayHelper();
	GAMEPLAYHELPER_API UFunction* Z_Construct_UFunction_UWeaponBlock_GetBlockingState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void UWeaponBlock::StaticRegisterNativesUWeaponBlock()
	{
		UClass* Class = UWeaponBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlockingState", &UWeaponBlock::execGetBlockingState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponBlock_GetBlockingState_Statics
	{
		struct WeaponBlock_eventGetBlockingState_Parms
		{
			float Distance;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeaponBlock_GetBlockingState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeaponBlock_eventGetBlockingState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponBlock_GetBlockingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponBlock_eventGetBlockingState_Parms), &Z_Construct_UFunction_UWeaponBlock_GetBlockingState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWeaponBlock_GetBlockingState_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponBlock_eventGetBlockingState_Parms, Distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponBlock_GetBlockingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponBlock_GetBlockingState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponBlock_GetBlockingState_Statics::NewProp_Distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponBlock_GetBlockingState_Statics::Function_MetaDataParams[] = {
		{ "Category", "WeaponBlock" },
		{ "ModuleRelativePath", "Public/WeaponBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponBlock_GetBlockingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponBlock, nullptr, "GetBlockingState", nullptr, nullptr, sizeof(WeaponBlock_eventGetBlockingState_Parms), Z_Construct_UFunction_UWeaponBlock_GetBlockingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponBlock_GetBlockingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponBlock_GetBlockingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponBlock_GetBlockingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponBlock_GetBlockingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponBlock_GetBlockingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeaponBlock_NoRegister()
	{
		return UWeaponBlock::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToBlock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_HeadSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CameraClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayHelper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponBlock_GetBlockingState, "GetBlockingState" }, // 3590136894
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponBlock_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WeaponBlock.h" },
		{ "ModuleRelativePath", "Public/WeaponBlock.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponBlock_Statics::NewProp_DistanceToBlock_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/WeaponBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWeaponBlock_Statics::NewProp_DistanceToBlock = { "DistanceToBlock", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponBlock, DistanceToBlock), METADATA_PARAMS(Z_Construct_UClass_UWeaponBlock_Statics::NewProp_DistanceToBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBlock_Statics::NewProp_DistanceToBlock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponBlock_Statics::NewProp_HeadSocket_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/WeaponBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponBlock_Statics::NewProp_HeadSocket = { "HeadSocket", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponBlock, HeadSocket), METADATA_PARAMS(Z_Construct_UClass_UWeaponBlock_Statics::NewProp_HeadSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBlock_Statics::NewProp_HeadSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponBlock_Statics::NewProp_CameraClass_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/WeaponBlock.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponBlock_Statics::NewProp_CameraClass = { "CameraClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponBlock, CameraClass), Z_Construct_UClass_UCameraComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWeaponBlock_Statics::NewProp_CameraClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBlock_Statics::NewProp_CameraClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponBlock_Statics::NewProp_DistanceToBlock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponBlock_Statics::NewProp_HeadSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponBlock_Statics::NewProp_CameraClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponBlock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeaponBlock_Statics::ClassParams = {
		&UWeaponBlock::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBlock_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponBlock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponBlock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponBlock, 3974838321);
	template<> GAMEPLAYHELPER_API UClass* StaticClass<UWeaponBlock>()
	{
		return UWeaponBlock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponBlock(Z_Construct_UClass_UWeaponBlock, &UWeaponBlock::StaticClass, TEXT("/Script/GameplayHelper"), TEXT("UWeaponBlock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponBlock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
