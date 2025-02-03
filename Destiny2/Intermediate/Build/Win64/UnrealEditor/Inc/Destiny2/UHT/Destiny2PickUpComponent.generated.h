// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Destiny2PickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ADestiny2Character;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DESTINY2_Destiny2PickUpComponent_generated_h
#error "Destiny2PickUpComponent.generated.h already included, missing '#pragma once' in Destiny2PickUpComponent.h"
#endif
#define DESTINY2_Destiny2PickUpComponent_generated_h

#define FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2PickUpComponent_h_12_DELEGATE \
DESTINY2_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, ADestiny2Character* PickUpCharacter);


#define FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDestiny2PickUpComponent(); \
	friend struct Z_Construct_UClass_UDestiny2PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UDestiny2PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Destiny2"), NO_API) \
	DECLARE_SERIALIZER(UDestiny2PickUpComponent)


#define FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDestiny2PickUpComponent(UDestiny2PickUpComponent&&); \
	UDestiny2PickUpComponent(const UDestiny2PickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDestiny2PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDestiny2PickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDestiny2PickUpComponent) \
	NO_API virtual ~UDestiny2PickUpComponent();


#define FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2PickUpComponent_h_14_PROLOG
#define FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESTINY2_API UClass* StaticClass<class UDestiny2PickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2PickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
