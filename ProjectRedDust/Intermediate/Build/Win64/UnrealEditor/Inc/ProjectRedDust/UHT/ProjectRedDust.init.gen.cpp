// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectRedDust_init() {}
	PROJECTREDDUST_API UFunction* Z_Construct_UDelegateFunction_ProjectRedDust_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ProjectRedDust;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ProjectRedDust()
	{
		if (!Z_Registration_Info_UPackage__Script_ProjectRedDust.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ProjectRedDust_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ProjectRedDust",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1C522D49,
				0x972B8CA4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ProjectRedDust.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ProjectRedDust.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ProjectRedDust(Z_Construct_UPackage__Script_ProjectRedDust, TEXT("/Script/ProjectRedDust"), Z_Registration_Info_UPackage__Script_ProjectRedDust, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1C522D49, 0x972B8CA4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
