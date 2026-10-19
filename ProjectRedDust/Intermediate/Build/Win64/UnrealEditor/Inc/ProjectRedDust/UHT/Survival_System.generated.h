// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Survival_System.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTREDDUST_Survival_System_generated_h
#error "Survival_System.generated.h already included, missing '#pragma once' in Survival_System.h"
#endif
#define PROJECTREDDUST_Survival_System_generated_h

#define FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_11_DELEGATE \
PROJECTREDDUST_API void FOnOxygenChanged_DelegateWrapper(const FMulticastScriptDelegate& OnOxygenChanged, float NewOxygen);


#define FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_12_DELEGATE \
PROJECTREDDUST_API void FOnPowerChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPowerChanged, float NewPower);


#define FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_13_DELEGATE \
PROJECTREDDUST_API void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float NewHealth);


#define FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_14_DELEGATE \
PROJECTREDDUST_API void FOnHungerChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHungerChanged, float NewHunger);


#define FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_15_DELEGATE \
PROJECTREDDUST_API void FOnThirstChanged_DelegateWrapper(const FMulticastScriptDelegate& OnThirstChanged, float NewThirst);


#define FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execModifyPower); \
	DECLARE_FUNCTION(execModifyOxygen);


#define FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSurvival_System(); \
	friend struct Z_Construct_UClass_USurvival_System_Statics; \
public: \
	DECLARE_CLASS(USurvival_System, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRedDust"), NO_API) \
	DECLARE_SERIALIZER(USurvival_System)


#define FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USurvival_System(USurvival_System&&); \
	USurvival_System(const USurvival_System&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvival_System); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvival_System); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USurvival_System) \
	NO_API virtual ~USurvival_System();


#define FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_18_PROLOG
#define FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTREDDUST_API UClass* StaticClass<class USurvival_System>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
