// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayHelper/Public/LookAround.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLookAround() {}
// Cross Module References
	GAMEPLAYHELPER_API UClass* Z_Construct_UClass_ULookAround_NoRegister();
	GAMEPLAYHELPER_API UClass* Z_Construct_UClass_ULookAround();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayHelper();
	GAMEPLAYHELPER_API UFunction* Z_Construct_UFunction_ULookAround_GetLookingAround();
	GAMEPLAYHELPER_API UFunction* Z_Construct_UFunction_ULookAround_StartLookAround();
	GAMEPLAYHELPER_API UFunction* Z_Construct_UFunction_ULookAround_StopLookAround();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
// End Cross Module References
	void ULookAround::StaticRegisterNativesULookAround()
	{
		UClass* Class = ULookAround::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLookingAround", &ULookAround::execGetLookingAround },
			{ "StartLookAround", &ULookAround::execStartLookAround },
			{ "StopLookAround", &ULookAround::execStopLookAround },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULookAround_GetLookingAround_Statics
	{
		struct LookAround_eventGetLookingAround_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ULookAround_GetLookingAround_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((LookAround_eventGetLookingAround_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULookAround_GetLookingAround_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LookAround_eventGetLookingAround_Parms), &Z_Construct_UFunction_ULookAround_GetLookingAround_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULookAround_GetLookingAround_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULookAround_GetLookingAround_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULookAround_GetLookingAround_Statics::Function_MetaDataParams[] = {
		{ "Category", "LookAround" },
		{ "ModuleRelativePath", "Public/LookAround.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULookAround_GetLookingAround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULookAround, nullptr, "GetLookingAround", nullptr, nullptr, sizeof(LookAround_eventGetLookingAround_Parms), Z_Construct_UFunction_ULookAround_GetLookingAround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULookAround_GetLookingAround_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULookAround_GetLookingAround_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULookAround_GetLookingAround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULookAround_GetLookingAround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULookAround_GetLookingAround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULookAround_StartLookAround_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULookAround_StartLookAround_Statics::Function_MetaDataParams[] = {
		{ "Category", "LookAround" },
		{ "ModuleRelativePath", "Public/LookAround.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULookAround_StartLookAround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULookAround, nullptr, "StartLookAround", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULookAround_StartLookAround_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULookAround_StartLookAround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULookAround_StartLookAround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULookAround_StartLookAround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULookAround_StopLookAround_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULookAround_StopLookAround_Statics::Function_MetaDataParams[] = {
		{ "Category", "LookAround" },
		{ "ModuleRelativePath", "Public/LookAround.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULookAround_StopLookAround_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULookAround, nullptr, "StopLookAround", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULookAround_StopLookAround_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULookAround_StopLookAround_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULookAround_StopLookAround()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULookAround_StopLookAround_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULookAround_NoRegister()
	{
		return ULookAround::StaticClass();
	}
	struct Z_Construct_UClass_ULookAround_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpringArm;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULookAround_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayHelper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULookAround_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULookAround_GetLookingAround, "GetLookingAround" }, // 1659690950
		{ &Z_Construct_UFunction_ULookAround_StartLookAround, "StartLookAround" }, // 2985263612
		{ &Z_Construct_UFunction_ULookAround_StopLookAround, "StopLookAround" }, // 1660114852
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAround_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "LookAround.h" },
		{ "ModuleRelativePath", "Public/LookAround.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULookAround_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "LookAround" },
		{ "ModuleRelativePath", "Public/LookAround.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULookAround_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULookAround, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ULookAround_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAround_Statics::NewProp_SpringArm_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULookAround_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULookAround_Statics::NewProp_SpringArm,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULookAround_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULookAround>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULookAround_Statics::ClassParams = {
		&ULookAround::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULookAround_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULookAround_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULookAround_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULookAround_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULookAround()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULookAround_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULookAround, 1015187178);
	template<> GAMEPLAYHELPER_API UClass* StaticClass<ULookAround>()
	{
		return ULookAround::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULookAround(Z_Construct_UClass_ULookAround, &ULookAround::StaticClass, TEXT("/Script/GameplayHelper"), TEXT("ULookAround"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULookAround);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
