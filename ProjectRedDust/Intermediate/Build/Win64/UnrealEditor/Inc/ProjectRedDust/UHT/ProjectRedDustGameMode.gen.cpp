// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectRedDust/ProjectRedDustGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectRedDustGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECTREDDUST_API UClass* Z_Construct_UClass_AProjectRedDustGameMode();
PROJECTREDDUST_API UClass* Z_Construct_UClass_AProjectRedDustGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRedDust();
// End Cross Module References

// Begin Class AProjectRedDustGameMode
void AProjectRedDustGameMode::StaticRegisterNativesAProjectRedDustGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectRedDustGameMode);
UClass* Z_Construct_UClass_AProjectRedDustGameMode_NoRegister()
{
	return AProjectRedDustGameMode::StaticClass();
}
struct Z_Construct_UClass_AProjectRedDustGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectRedDustGameMode.h" },
		{ "ModuleRelativePath", "ProjectRedDustGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectRedDustGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProjectRedDustGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRedDust,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectRedDustGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectRedDustGameMode_Statics::ClassParams = {
	&AProjectRedDustGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectRedDustGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectRedDustGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectRedDustGameMode()
{
	if (!Z_Registration_Info_UClass_AProjectRedDustGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectRedDustGameMode.OuterSingleton, Z_Construct_UClass_AProjectRedDustGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectRedDustGameMode.OuterSingleton;
}
template<> PROJECTREDDUST_API UClass* StaticClass<AProjectRedDustGameMode>()
{
	return AProjectRedDustGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectRedDustGameMode);
AProjectRedDustGameMode::~AProjectRedDustGameMode() {}
// End Class AProjectRedDustGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectRedDustGameMode, AProjectRedDustGameMode::StaticClass, TEXT("AProjectRedDustGameMode"), &Z_Registration_Info_UClass_AProjectRedDustGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectRedDustGameMode), 3574031510U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustGameMode_h_3463993618(TEXT("/Script/ProjectRedDust"),
	Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
