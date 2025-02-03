// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Destiny2WeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADestiny2Character;
#ifdef DESTINY2_Destiny2WeaponComponent_generated_h
#error "Destiny2WeaponComponent.generated.h already included, missing '#pragma once' in Destiny2WeaponComponent.h"
#endif
#define DESTINY2_Destiny2WeaponComponent_generated_h

#define FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2WeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2WeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDestiny2WeaponComponent(); \
	friend struct Z_Construct_UClass_UDestiny2WeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UDestiny2WeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Destiny2"), NO_API) \
	DECLARE_SERIALIZER(UDestiny2WeaponComponent)


#define FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2WeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDestiny2WeaponComponent(UDestiny2WeaponComponent&&); \
	UDestiny2WeaponComponent(const UDestiny2WeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDestiny2WeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestiny2WeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDestiny2WeaponComponent) \
	NO_API virtual ~UDestiny2WeaponComponent();


#define FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2WeaponComponent_h_11_PROLOG
#define FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2WeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2WeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2WeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2WeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESTINY2_API UClass* StaticClass<class UDestiny2WeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2WeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
