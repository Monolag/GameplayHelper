// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayHelper/Public/WeaponLaser.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponLaser() {}
// Cross Module References
	GAMEPLAYHELPER_API UClass* Z_Construct_UClass_UWeaponLaser_NoRegister();
	GAMEPLAYHELPER_API UClass* Z_Construct_UClass_UWeaponLaser();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GameplayHelper();
	GAMEPLAYHELPER_API UFunction* Z_Construct_UFunction_UWeaponLaser_GetState();
	GAMEPLAYHELPER_API UFunction* Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	GAMEPLAYHELPER_API UFunction* Z_Construct_UFunction_UWeaponLaser_SetState();
	GAMEPLAYHELPER_API UFunction* Z_Construct_UFunction_UWeaponLaser_ToggleLaser();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UWeaponLaser::StaticRegisterNativesUWeaponLaser()
	{
		UClass* Class = UWeaponLaser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetState", &UWeaponLaser::execGetState },
			{ "InitializeLaserComponent", &UWeaponLaser::execInitializeLaserComponent },
			{ "SetState", &UWeaponLaser::execSetState },
			{ "ToggleLaser", &UWeaponLaser::execToggleLaser },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWeaponLaser_GetState_Statics
	{
		struct WeaponLaser_eventGetState_Parms
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
	void Z_Construct_UFunction_UWeaponLaser_GetState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WeaponLaser_eventGetState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponLaser_GetState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponLaser_eventGetState_Parms), &Z_Construct_UFunction_UWeaponLaser_GetState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponLaser_GetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponLaser_GetState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponLaser_GetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Public/WeaponLaser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponLaser_GetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponLaser, nullptr, "GetState", nullptr, nullptr, sizeof(WeaponLaser_eventGetState_Parms), Z_Construct_UFunction_UWeaponLaser_GetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLaser_GetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponLaser_GetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLaser_GetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponLaser_GetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponLaser_GetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent_Statics
	{
		struct WeaponLaser_eventInitializeLaserComponent_Parms
		{
			USceneComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WeaponLaser_eventInitializeLaserComponent_Parms, Component), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Public/WeaponLaser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponLaser, nullptr, "InitializeLaserComponent", nullptr, nullptr, sizeof(WeaponLaser_eventInitializeLaserComponent_Parms), Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponLaser_SetState_Statics
	{
		struct WeaponLaser_eventSetState_Parms
		{
			bool On;
		};
		static void NewProp_On_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_On;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWeaponLaser_SetState_Statics::NewProp_On_SetBit(void* Obj)
	{
		((WeaponLaser_eventSetState_Parms*)Obj)->On = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWeaponLaser_SetState_Statics::NewProp_On = { "On", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WeaponLaser_eventSetState_Parms), &Z_Construct_UFunction_UWeaponLaser_SetState_Statics::NewProp_On_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWeaponLaser_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWeaponLaser_SetState_Statics::NewProp_On,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponLaser_SetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Public/WeaponLaser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponLaser_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponLaser, nullptr, "SetState", nullptr, nullptr, sizeof(WeaponLaser_eventSetState_Parms), Z_Construct_UFunction_UWeaponLaser_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLaser_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponLaser_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLaser_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponLaser_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponLaser_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWeaponLaser_ToggleLaser_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWeaponLaser_ToggleLaser_Statics::Function_MetaDataParams[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Public/WeaponLaser.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWeaponLaser_ToggleLaser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWeaponLaser, nullptr, "ToggleLaser", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWeaponLaser_ToggleLaser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWeaponLaser_ToggleLaser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWeaponLaser_ToggleLaser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWeaponLaser_ToggleLaser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWeaponLaser_NoRegister()
	{
		return UWeaponLaser::StaticClass();
	}
	struct Z_Construct_UClass_UWeaponLaser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DecalClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseRightVector_MetaData[];
#endif
		static void NewProp_UseRightVector_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseRightVector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Socket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Socket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWeaponLaser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayHelper,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWeaponLaser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWeaponLaser_GetState, "GetState" }, // 173846911
		{ &Z_Construct_UFunction_UWeaponLaser_InitializeLaserComponent, "InitializeLaserComponent" }, // 3257287151
		{ &Z_Construct_UFunction_UWeaponLaser_SetState, "SetState" }, // 1698158199
		{ &Z_Construct_UFunction_UWeaponLaser_ToggleLaser, "ToggleLaser" }, // 3474288270
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponLaser_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "WeaponLaser.h" },
		{ "ModuleRelativePath", "Public/WeaponLaser.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponLaser_Statics::NewProp_DecalScale_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/WeaponLaser.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWeaponLaser_Statics::NewProp_DecalScale = { "DecalScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponLaser, DecalScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UWeaponLaser_Statics::NewProp_DecalScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLaser_Statics::NewProp_DecalScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponLaser_Statics::NewProp_DecalClass_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/WeaponLaser.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWeaponLaser_Statics::NewProp_DecalClass = { "DecalClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponLaser, DecalClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWeaponLaser_Statics::NewProp_DecalClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLaser_Statics::NewProp_DecalClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponLaser_Statics::NewProp_UseRightVector_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/WeaponLaser.h" },
	};
#endif
	void Z_Construct_UClass_UWeaponLaser_Statics::NewProp_UseRightVector_SetBit(void* Obj)
	{
		((UWeaponLaser*)Obj)->UseRightVector = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWeaponLaser_Statics::NewProp_UseRightVector = { "UseRightVector", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UWeaponLaser), &Z_Construct_UClass_UWeaponLaser_Statics::NewProp_UseRightVector_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWeaponLaser_Statics::NewProp_UseRightVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLaser_Statics::NewProp_UseRightVector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWeaponLaser_Statics::NewProp_Socket_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/WeaponLaser.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWeaponLaser_Statics::NewProp_Socket = { "Socket", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWeaponLaser, Socket), METADATA_PARAMS(Z_Construct_UClass_UWeaponLaser_Statics::NewProp_Socket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLaser_Statics::NewProp_Socket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWeaponLaser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLaser_Statics::NewProp_DecalScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLaser_Statics::NewProp_DecalClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLaser_Statics::NewProp_UseRightVector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWeaponLaser_Statics::NewProp_Socket,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWeaponLaser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWeaponLaser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWeaponLaser_Statics::ClassParams = {
		&UWeaponLaser::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWeaponLaser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLaser_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWeaponLaser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWeaponLaser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWeaponLaser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWeaponLaser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWeaponLaser, 3169768020);
	template<> GAMEPLAYHELPER_API UClass* StaticClass<UWeaponLaser>()
	{
		return UWeaponLaser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWeaponLaser(Z_Construct_UClass_UWeaponLaser, &UWeaponLaser::StaticClass, TEXT("/Script/GameplayHelper"), TEXT("UWeaponLaser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWeaponLaser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
