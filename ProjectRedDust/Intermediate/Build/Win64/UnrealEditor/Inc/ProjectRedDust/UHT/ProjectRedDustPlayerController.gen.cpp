// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectRedDust/ProjectRedDustPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectRedDustPlayerController() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
PROJECTREDDUST_API UClass* Z_Construct_UClass_AProjectRedDustPlayerController();
PROJECTREDDUST_API UClass* Z_Construct_UClass_AProjectRedDustPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_ProjectRedDust();
// End Cross Module References

// Begin Class AProjectRedDustPlayerController
void AProjectRedDustPlayerController::StaticRegisterNativesAProjectRedDustPlayerController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectRedDustPlayerController);
UClass* Z_Construct_UClass_AProjectRedDustPlayerController_NoRegister()
{
	return AProjectRedDustPlayerController::StaticClass();
}
struct Z_Construct_UClass_AProjectRedDustPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "ProjectRedDustPlayerController.h" },
		{ "ModuleRelativePath", "ProjectRedDustPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "ProjectRedDustPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectRedDustPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectRedDustPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AProjectRedDustPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectRedDustPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectRedDustPlayerController_Statics::NewProp_InputMappingContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectRedDustPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AProjectRedDustPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRedDust,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectRedDustPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectRedDustPlayerController_Statics::ClassParams = {
	&AProjectRedDustPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AProjectRedDustPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AProjectRedDustPlayerController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectRedDustPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectRedDustPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProjectRedDustPlayerController()
{
	if (!Z_Registration_Info_UClass_AProjectRedDustPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectRedDustPlayerController.OuterSingleton, Z_Construct_UClass_AProjectRedDustPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProjectRedDustPlayerController.OuterSingleton;
}
template<> PROJECTREDDUST_API UClass* StaticClass<AProjectRedDustPlayerController>()
{
	return AProjectRedDustPlayerController::StaticClass();
}
AProjectRedDustPlayerController::AProjectRedDustPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectRedDustPlayerController);
AProjectRedDustPlayerController::~AProjectRedDustPlayerController() {}
// End Class AProjectRedDustPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProjectRedDustPlayerController, AProjectRedDustPlayerController::StaticClass, TEXT("AProjectRedDustPlayerController"), &Z_Registration_Info_UClass_AProjectRedDustPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectRedDustPlayerController), 254688757U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustPlayerController_h_3623102144(TEXT("/Script/ProjectRedDust"),
	Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
