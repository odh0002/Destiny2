// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Destiny2Projectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DESTINY2_Destiny2Projectile_generated_h
#error "Destiny2Projectile.generated.h already included, missing '#pragma once' in Destiny2Projectile.h"
#endif
#define DESTINY2_Destiny2Projectile_generated_h

#define FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADestiny2Projectile(); \
	friend struct Z_Construct_UClass_ADestiny2Projectile_Statics; \
public: \
	DECLARE_CLASS(ADestiny2Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Destiny2"), NO_API) \
	DECLARE_SERIALIZER(ADestiny2Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADestiny2Projectile(ADestiny2Projectile&&); \
	ADestiny2Projectile(const ADestiny2Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestiny2Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestiny2Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADestiny2Projectile) \
	NO_API virtual ~ADestiny2Projectile();


#define FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2Projectile_h_12_PROLOG
#define FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DESTINY2_API UClass* StaticClass<class ADestiny2Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
