// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayHelper/Public/AngleSpeed.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAngleSpeed() {}
// Cross Module References
	GAMEPLAYHELPER_API UClass* Z_Construct_UClass_UAngleSpeed_NoRegister();
	GAMEPLAYHELPER_API UClass* Z_Construct_UClass_UAngleSpeed();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayHelper();
	GAMEPLAYHELPER_API UFunction* Z_Construct_UFunction_UAngleSpeed_GetAngleSpeed();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	void UAngleSpeed::StaticRegisterNativesUAngleSpeed()
	{
		UClass* Class = UAngleSpeed::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAngleSpeed", &UAngleSpeed::execGetAngleSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAngleSpeed_GetAngleSpeed_Statics
	{
		struct AngleSpeed_eventGetAngleSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAngleSpeed_GetAngleSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AngleSpeed_eventGetAngleSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAngleSpeed_GetAngleSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAngleSpeed_GetAngleSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAngleSpeed_GetAngleSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "AngleSpeed" },
		{ "ModuleRelativePath", "Public/AngleSpeed.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAngleSpeed_GetAngleSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAngleSpeed, nullptr, "GetAngleSpeed", nullptr, nullptr, sizeof(AngleSpeed_eventGetAngleSpeed_Parms), Z_Construct_UFunction_UAngleSpeed_GetAngleSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAngleSpeed_GetAngleSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAngleSpeed_GetAngleSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAngleSpeed_GetAngleSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAngleSpeed_GetAngleSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAngleSpeed_GetAngleSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAngleSpeed_NoRegister()
	{
		return UAngleSpeed::StaticClass();
	}
	struct Z_Construct_UClass_UAngleSpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurveFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurveFloat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAngleSpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayHelper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAngleSpeed_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAngleSpeed_GetAngleSpeed, "GetAngleSpeed" }, // 2214859851
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAngleSpeed_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AngleSpeed.h" },
		{ "ModuleRelativePath", "Public/AngleSpeed.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAngleSpeed_Statics::NewProp_CurveFloat_MetaData[] = {
		{ "Category", "AngleSpeed" },
		{ "ModuleRelativePath", "Public/AngleSpeed.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAngleSpeed_Statics::NewProp_CurveFloat = { "CurveFloat", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAngleSpeed, CurveFloat), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAngleSpeed_Statics::NewProp_CurveFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAngleSpeed_Statics::NewProp_CurveFloat_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAngleSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAngleSpeed_Statics::NewProp_CurveFloat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAngleSpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAngleSpeed>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAngleSpeed_Statics::ClassParams = {
		&UAngleSpeed::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAngleSpeed_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAngleSpeed_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAngleSpeed_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAngleSpeed_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAngleSpeed()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAngleSpeed_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAngleSpeed, 2888079673);
	template<> GAMEPLAYHELPER_API UClass* StaticClass<UAngleSpeed>()
	{
		return UAngleSpeed::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAngleSpeed(Z_Construct_UClass_UAngleSpeed, &UAngleSpeed::StaticClass, TEXT("/Script/GameplayHelper"), TEXT("UAngleSpeed"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAngleSpeed);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
