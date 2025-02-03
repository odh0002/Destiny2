// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Destiny2/Destiny2GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestiny2GameMode() {}

// Begin Cross Module References
DESTINY2_API UClass* Z_Construct_UClass_ADestiny2GameMode();
DESTINY2_API UClass* Z_Construct_UClass_ADestiny2GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Destiny2();
// End Cross Module References

// Begin Class ADestiny2GameMode
void ADestiny2GameMode::StaticRegisterNativesADestiny2GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADestiny2GameMode);
UClass* Z_Construct_UClass_ADestiny2GameMode_NoRegister()
{
	return ADestiny2GameMode::StaticClass();
}
struct Z_Construct_UClass_ADestiny2GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Destiny2GameMode.h" },
		{ "ModuleRelativePath", "Destiny2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestiny2GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ADestiny2GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Destiny2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADestiny2GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADestiny2GameMode_Statics::ClassParams = {
	&ADestiny2GameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADestiny2GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ADestiny2GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADestiny2GameMode()
{
	if (!Z_Registration_Info_UClass_ADestiny2GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADestiny2GameMode.OuterSingleton, Z_Construct_UClass_ADestiny2GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADestiny2GameMode.OuterSingleton;
}
template<> DESTINY2_API UClass* StaticClass<ADestiny2GameMode>()
{
	return ADestiny2GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADestiny2GameMode);
ADestiny2GameMode::~ADestiny2GameMode() {}
// End Class ADestiny2GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADestiny2GameMode, ADestiny2GameMode::StaticClass, TEXT("ADestiny2GameMode"), &Z_Registration_Info_UClass_ADestiny2GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADestiny2GameMode), 3201657799U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2GameMode_h_3563427934(TEXT("/Script/Destiny2"),
	Z_CompiledInDeferFile_FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Destiny2222222_Destiny2_Source_Destiny2_Destiny2GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
