// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestiny2_init() {}
	DESTINY2_API UFunction* Z_Construct_UDelegateFunction_Destiny2_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Destiny2;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Destiny2()
	{
		if (!Z_Registration_Info_UPackage__Script_Destiny2.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Destiny2_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Destiny2",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5B78B415,
				0x00D539A2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Destiny2.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Destiny2.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Destiny2(Z_Construct_UPackage__Script_Destiny2, TEXT("/Script/Destiny2"), Z_Registration_Info_UPackage__Script_Destiny2, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5B78B415, 0x00D539A2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
