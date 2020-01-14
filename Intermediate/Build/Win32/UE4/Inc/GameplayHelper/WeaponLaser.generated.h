// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USceneComponent;
#ifdef GAMEPLAYHELPER_WeaponLaser_generated_h
#error "WeaponLaser.generated.h already included, missing '#pragma once' in WeaponLaser.h"
#endif
#define GAMEPLAYHELPER_WeaponLaser_generated_h

#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_SPARSE_DATA
#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInitializeLaserComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeLaserComponent(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetState) \
	{ \
		P_GET_UBOOL(Z_Param_On); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetState(Z_Param_On); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleLaser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleLaser(); \
		P_NATIVE_END; \
	}


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInitializeLaserComponent) \
	{ \
		P_GET_OBJECT(USceneComponent,Z_Param_Component); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->InitializeLaserComponent(Z_Param_Component); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetState) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetState(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetState) \
	{ \
		P_GET_UBOOL(Z_Param_On); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetState(Z_Param_On); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleLaser) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleLaser(); \
		P_NATIVE_END; \
	}


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWeaponLaser(); \
	friend struct Z_Construct_UClass_UWeaponLaser_Statics; \
public: \
	DECLARE_CLASS(UWeaponLaser, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayHelper"), NO_API) \
	DECLARE_SERIALIZER(UWeaponLaser)


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUWeaponLaser(); \
	friend struct Z_Construct_UClass_UWeaponLaser_Statics; \
public: \
	DECLARE_CLASS(UWeaponLaser, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayHelper"), NO_API) \
	DECLARE_SERIALIZER(UWeaponLaser)


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWeaponLaser(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWeaponLaser) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponLaser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponLaser); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponLaser(UWeaponLaser&&); \
	NO_API UWeaponLaser(const UWeaponLaser&); \
public:


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWeaponLaser(UWeaponLaser&&); \
	NO_API UWeaponLaser(const UWeaponLaser&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWeaponLaser); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWeaponLaser); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWeaponLaser)


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_PRIVATE_PROPERTY_OFFSET
#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_12_PROLOG
#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_PRIVATE_PROPERTY_OFFSET \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_SPARSE_DATA \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_RPC_WRAPPERS \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_INCLASS \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_PRIVATE_PROPERTY_OFFSET \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_SPARSE_DATA \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_INCLASS_NO_PURE_DECLS \
	CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYHELPER_API UClass* StaticClass<class UWeaponLaser>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CompleteShooter_svn_GameplayHelper_GameplayHelper_HostProject_Plugins_GameplayHelper_Source_GameplayHelper_Public_WeaponLaser_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
