// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectRedDust/Survival_System.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSurvival_System() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PROJECTREDDUST_API UClass* Z_Construct_UClass_USurvival_System();
PROJECTREDDUST_API UClass* Z_Construct_UClass_USurvival_System_NoRegister();
PROJECTREDDUST_API UFunction* Z_Construct_UDelegateFunction_ProjectRedDust_OnHealthChanged__DelegateSignature();
PROJECTREDDUST_API UFunction* Z_Construct_UDelegateFunction_ProjectRedDust_OnHungerChanged__DelegateSignature();
PROJECTREDDUST_API UFunction* Z_Construct_UDelegateFunction_ProjectRedDust_OnOxygenChanged__DelegateSignature();
PROJECTREDDUST_API UFunction* Z_Construct_UDelegateFunction_ProjectRedDust_OnPowerChanged__DelegateSignature();
PROJECTREDDUST_API UFunction* Z_Construct_UDelegateFunction_ProjectRedDust_OnThirstChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_ProjectRedDust();
// End Cross Module References

// Begin Delegate FOnOxygenChanged
struct Z_Construct_UDelegateFunction_ProjectRedDust_OnOxygenChanged__DelegateSignature_Statics
{
	struct _Script_ProjectRedDust_eventOnOxygenChanged_Parms
	{
		float NewOxygen;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//don't Change these delegates \n" },
#endif
		{ "ModuleRelativePath", "Survival_System.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "don't Change these delegates" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewOxygen;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectRedDust_OnOxygenChanged__DelegateSignature_Statics::NewProp_NewOxygen = { "NewOxygen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectRedDust_eventOnOxygenChanged_Parms, NewOxygen), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectRedDust_OnOxygenChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectRedDust_OnOxygenChanged__DelegateSignature_Statics::NewProp_NewOxygen,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRedDust_OnOxygenChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectRedDust_OnOxygenChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectRedDust, nullptr, "OnOxygenChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectRedDust_OnOxygenChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRedDust_OnOxygenChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectRedDust_OnOxygenChanged__DelegateSignature_Statics::_Script_ProjectRedDust_eventOnOxygenChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRedDust_OnOxygenChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectRedDust_OnOxygenChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectRedDust_OnOxygenChanged__DelegateSignature_Statics::_Script_ProjectRedDust_eventOnOxygenChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectRedDust_OnOxygenChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectRedDust_OnOxygenChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnOxygenChanged_DelegateWrapper(const FMulticastScriptDelegate& OnOxygenChanged, float NewOxygen)
{
	struct _Script_ProjectRedDust_eventOnOxygenChanged_Parms
	{
		float NewOxygen;
	};
	_Script_ProjectRedDust_eventOnOxygenChanged_Parms Parms;
	Parms.NewOxygen=NewOxygen;
	OnOxygenChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnOxygenChanged

// Begin Delegate FOnPowerChanged
struct Z_Construct_UDelegateFunction_ProjectRedDust_OnPowerChanged__DelegateSignature_Statics
{
	struct _Script_ProjectRedDust_eventOnPowerChanged_Parms
	{
		float NewPower;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Survival_System.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPower;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectRedDust_OnPowerChanged__DelegateSignature_Statics::NewProp_NewPower = { "NewPower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectRedDust_eventOnPowerChanged_Parms, NewPower), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectRedDust_OnPowerChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectRedDust_OnPowerChanged__DelegateSignature_Statics::NewProp_NewPower,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRedDust_OnPowerChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectRedDust_OnPowerChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectRedDust, nullptr, "OnPowerChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectRedDust_OnPowerChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRedDust_OnPowerChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectRedDust_OnPowerChanged__DelegateSignature_Statics::_Script_ProjectRedDust_eventOnPowerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRedDust_OnPowerChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectRedDust_OnPowerChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectRedDust_OnPowerChanged__DelegateSignature_Statics::_Script_ProjectRedDust_eventOnPowerChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectRedDust_OnPowerChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectRedDust_OnPowerChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPowerChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPowerChanged, float NewPower)
{
	struct _Script_ProjectRedDust_eventOnPowerChanged_Parms
	{
		float NewPower;
	};
	_Script_ProjectRedDust_eventOnPowerChanged_Parms Parms;
	Parms.NewPower=NewPower;
	OnPowerChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPowerChanged

// Begin Delegate FOnHealthChanged
struct Z_Construct_UDelegateFunction_ProjectRedDust_OnHealthChanged__DelegateSignature_Statics
{
	struct _Script_ProjectRedDust_eventOnHealthChanged_Parms
	{
		float NewHealth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Survival_System.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectRedDust_OnHealthChanged__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectRedDust_eventOnHealthChanged_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectRedDust_OnHealthChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectRedDust_OnHealthChanged__DelegateSignature_Statics::NewProp_NewHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRedDust_OnHealthChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectRedDust_OnHealthChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectRedDust, nullptr, "OnHealthChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectRedDust_OnHealthChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRedDust_OnHealthChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectRedDust_OnHealthChanged__DelegateSignature_Statics::_Script_ProjectRedDust_eventOnHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRedDust_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectRedDust_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectRedDust_OnHealthChanged__DelegateSignature_Statics::_Script_ProjectRedDust_eventOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectRedDust_OnHealthChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectRedDust_OnHealthChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float NewHealth)
{
	struct _Script_ProjectRedDust_eventOnHealthChanged_Parms
	{
		float NewHealth;
	};
	_Script_ProjectRedDust_eventOnHealthChanged_Parms Parms;
	Parms.NewHealth=NewHealth;
	OnHealthChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHealthChanged

// Begin Delegate FOnHungerChanged
struct Z_Construct_UDelegateFunction_ProjectRedDust_OnHungerChanged__DelegateSignature_Statics
{
	struct _Script_ProjectRedDust_eventOnHungerChanged_Parms
	{
		float NewHunger;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Survival_System.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHunger;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectRedDust_OnHungerChanged__DelegateSignature_Statics::NewProp_NewHunger = { "NewHunger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectRedDust_eventOnHungerChanged_Parms, NewHunger), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectRedDust_OnHungerChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectRedDust_OnHungerChanged__DelegateSignature_Statics::NewProp_NewHunger,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRedDust_OnHungerChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectRedDust_OnHungerChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectRedDust, nullptr, "OnHungerChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectRedDust_OnHungerChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRedDust_OnHungerChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectRedDust_OnHungerChanged__DelegateSignature_Statics::_Script_ProjectRedDust_eventOnHungerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRedDust_OnHungerChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectRedDust_OnHungerChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectRedDust_OnHungerChanged__DelegateSignature_Statics::_Script_ProjectRedDust_eventOnHungerChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectRedDust_OnHungerChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectRedDust_OnHungerChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHungerChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHungerChanged, float NewHunger)
{
	struct _Script_ProjectRedDust_eventOnHungerChanged_Parms
	{
		float NewHunger;
	};
	_Script_ProjectRedDust_eventOnHungerChanged_Parms Parms;
	Parms.NewHunger=NewHunger;
	OnHungerChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHungerChanged

// Begin Delegate FOnThirstChanged
struct Z_Construct_UDelegateFunction_ProjectRedDust_OnThirstChanged__DelegateSignature_Statics
{
	struct _Script_ProjectRedDust_eventOnThirstChanged_Parms
	{
		float NewThirst;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Survival_System.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewThirst;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_ProjectRedDust_OnThirstChanged__DelegateSignature_Statics::NewProp_NewThirst = { "NewThirst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ProjectRedDust_eventOnThirstChanged_Parms, NewThirst), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ProjectRedDust_OnThirstChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ProjectRedDust_OnThirstChanged__DelegateSignature_Statics::NewProp_NewThirst,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRedDust_OnThirstChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ProjectRedDust_OnThirstChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ProjectRedDust, nullptr, "OnThirstChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ProjectRedDust_OnThirstChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRedDust_OnThirstChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ProjectRedDust_OnThirstChanged__DelegateSignature_Statics::_Script_ProjectRedDust_eventOnThirstChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ProjectRedDust_OnThirstChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ProjectRedDust_OnThirstChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ProjectRedDust_OnThirstChanged__DelegateSignature_Statics::_Script_ProjectRedDust_eventOnThirstChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ProjectRedDust_OnThirstChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ProjectRedDust_OnThirstChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnThirstChanged_DelegateWrapper(const FMulticastScriptDelegate& OnThirstChanged, float NewThirst)
{
	struct _Script_ProjectRedDust_eventOnThirstChanged_Parms
	{
		float NewThirst;
	};
	_Script_ProjectRedDust_eventOnThirstChanged_Parms Parms;
	Parms.NewThirst=NewThirst;
	OnThirstChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnThirstChanged

// Begin Class USurvival_System Function ModifyOxygen
struct Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics
{
	struct Survival_System_eventModifyOxygen_Parms
	{
		bool UseOxygen;
		bool RefillOxygen;
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Survival" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//These Functions will be used to modify the stats. Warning to touch them if you don't know what your doing.\n" },
#endif
		{ "ModuleRelativePath", "Survival_System.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These Functions will be used to modify the stats. Warning to touch them if you don't know what your doing." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_UseOxygen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseOxygen;
	static void NewProp_RefillOxygen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RefillOxygen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::NewProp_UseOxygen_SetBit(void* Obj)
{
	((Survival_System_eventModifyOxygen_Parms*)Obj)->UseOxygen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::NewProp_UseOxygen = { "UseOxygen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Survival_System_eventModifyOxygen_Parms), &Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::NewProp_UseOxygen_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::NewProp_RefillOxygen_SetBit(void* Obj)
{
	((Survival_System_eventModifyOxygen_Parms*)Obj)->RefillOxygen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::NewProp_RefillOxygen = { "RefillOxygen", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Survival_System_eventModifyOxygen_Parms), &Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::NewProp_RefillOxygen_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Survival_System_eventModifyOxygen_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::NewProp_UseOxygen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::NewProp_RefillOxygen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvival_System, nullptr, "ModifyOxygen", nullptr, nullptr, Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::PropPointers), sizeof(Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::Survival_System_eventModifyOxygen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::Function_MetaDataParams), Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::Survival_System_eventModifyOxygen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USurvival_System_ModifyOxygen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvival_System_ModifyOxygen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USurvival_System::execModifyOxygen)
{
	P_GET_UBOOL(Z_Param_UseOxygen);
	P_GET_UBOOL(Z_Param_RefillOxygen);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyOxygen(Z_Param_UseOxygen,Z_Param_RefillOxygen,Z_Param_Amount);
	P_NATIVE_END;
}
// End Class USurvival_System Function ModifyOxygen

// Begin Class USurvival_System Function ModifyPower
struct Z_Construct_UFunction_USurvival_System_ModifyPower_Statics
{
	struct Survival_System_eventModifyPower_Parms
	{
		bool UsePower;
		bool GeneratePower;
		float Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Survival" },
		{ "ModuleRelativePath", "Survival_System.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UsePower_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UsePower;
	static void NewProp_GeneratePower_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_GeneratePower;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::NewProp_UsePower_SetBit(void* Obj)
{
	((Survival_System_eventModifyPower_Parms*)Obj)->UsePower = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::NewProp_UsePower = { "UsePower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Survival_System_eventModifyPower_Parms), &Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::NewProp_UsePower_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::NewProp_GeneratePower_SetBit(void* Obj)
{
	((Survival_System_eventModifyPower_Parms*)Obj)->GeneratePower = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::NewProp_GeneratePower = { "GeneratePower", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Survival_System_eventModifyPower_Parms), &Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::NewProp_GeneratePower_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Survival_System_eventModifyPower_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::NewProp_UsePower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::NewProp_GeneratePower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USurvival_System, nullptr, "ModifyPower", nullptr, nullptr, Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::Survival_System_eventModifyPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::Survival_System_eventModifyPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USurvival_System_ModifyPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USurvival_System_ModifyPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USurvival_System::execModifyPower)
{
	P_GET_UBOOL(Z_Param_UsePower);
	P_GET_UBOOL(Z_Param_GeneratePower);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyPower(Z_Param_UsePower,Z_Param_GeneratePower,Z_Param_Amount);
	P_NATIVE_END;
}
// End Class USurvival_System Function ModifyPower

// Begin Class USurvival_System
void USurvival_System::StaticRegisterNativesUSurvival_System()
{
	UClass* Class = USurvival_System::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ModifyOxygen", &USurvival_System::execModifyOxygen },
		{ "ModifyPower", &USurvival_System::execModifyPower },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USurvival_System);
UClass* Z_Construct_UClass_USurvival_System_NoRegister()
{
	return USurvival_System::StaticClass();
}
struct Z_Construct_UClass_USurvival_System_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Survival_System.h" },
		{ "ModuleRelativePath", "Survival_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hunger_MetaData[] = {
		{ "Category", "Survival" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//This is shows all the basic stats that the player will need to manage. Add any other stats If missing.\n" },
#endif
		{ "ModuleRelativePath", "Survival_System.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This is shows all the basic stats that the player will need to manage. Add any other stats If missing." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thirst_MetaData[] = {
		{ "Category", "Survival" },
		{ "ModuleRelativePath", "Survival_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Survival" },
		{ "ModuleRelativePath", "Survival_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Oxygen_MetaData[] = {
		{ "Category", "Survival" },
		{ "ModuleRelativePath", "Survival_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Power_MetaData[] = {
		{ "Category", "Survival" },
		{ "ModuleRelativePath", "Survival_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumeOxygen_MetaData[] = {
		{ "Category", "Survival" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//These are some extra properties that are required for the system to work. These will be shown in the Editor.\n" },
#endif
		{ "ModuleRelativePath", "Survival_System.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These are some extra properties that are required for the system to work. These will be shown in the Editor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConsumePower_MetaData[] = {
		{ "Category", "Survival" },
		{ "ModuleRelativePath", "Survival_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsRefillingOxygen_MetaData[] = {
		{ "Category", "Survival" },
		{ "ModuleRelativePath", "Survival_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsGeneratingPower_MetaData[] = {
		{ "Category", "Survival" },
		{ "ModuleRelativePath", "Survival_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPowerChanged_MetaData[] = {
		{ "Category", "Survival" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// These are delegates that will be used to broadcast the changes in the stats. You can bind them to any function you want.\n" },
#endif
		{ "ModuleRelativePath", "Survival_System.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "These are delegates that will be used to broadcast the changes in the stats. You can bind them to any function you want." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOxygenChanged_MetaData[] = {
		{ "Category", "Survival" },
		{ "ModuleRelativePath", "Survival_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHungerChanged_MetaData[] = {
		{ "Category", "Survival" },
		{ "ModuleRelativePath", "Survival_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnThirstChanged_MetaData[] = {
		{ "Category", "Survival" },
		{ "ModuleRelativePath", "Survival_System.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Survival" },
		{ "ModuleRelativePath", "Survival_System.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Hunger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thirst;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Oxygen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Power;
	static void NewProp_ConsumeOxygen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ConsumeOxygen;
	static void NewProp_ConsumePower_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ConsumePower;
	static void NewProp_IsRefillingOxygen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRefillingOxygen;
	static void NewProp_IsGeneratingPower_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGeneratingPower;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPowerChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOxygenChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHungerChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnThirstChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USurvival_System_ModifyOxygen, "ModifyOxygen" }, // 2125656484
		{ &Z_Construct_UFunction_USurvival_System_ModifyPower, "ModifyPower" }, // 3809491298
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USurvival_System>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvival_System_Statics::NewProp_Hunger = { "Hunger", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USurvival_System, Hunger), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hunger_MetaData), NewProp_Hunger_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvival_System_Statics::NewProp_Thirst = { "Thirst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USurvival_System, Thirst), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thirst_MetaData), NewProp_Thirst_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvival_System_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USurvival_System, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvival_System_Statics::NewProp_Oxygen = { "Oxygen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USurvival_System, Oxygen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Oxygen_MetaData), NewProp_Oxygen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USurvival_System_Statics::NewProp_Power = { "Power", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USurvival_System, Power), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Power_MetaData), NewProp_Power_MetaData) };
void Z_Construct_UClass_USurvival_System_Statics::NewProp_ConsumeOxygen_SetBit(void* Obj)
{
	((USurvival_System*)Obj)->ConsumeOxygen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvival_System_Statics::NewProp_ConsumeOxygen = { "ConsumeOxygen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USurvival_System), &Z_Construct_UClass_USurvival_System_Statics::NewProp_ConsumeOxygen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumeOxygen_MetaData), NewProp_ConsumeOxygen_MetaData) };
void Z_Construct_UClass_USurvival_System_Statics::NewProp_ConsumePower_SetBit(void* Obj)
{
	((USurvival_System*)Obj)->ConsumePower = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvival_System_Statics::NewProp_ConsumePower = { "ConsumePower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USurvival_System), &Z_Construct_UClass_USurvival_System_Statics::NewProp_ConsumePower_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConsumePower_MetaData), NewProp_ConsumePower_MetaData) };
void Z_Construct_UClass_USurvival_System_Statics::NewProp_IsRefillingOxygen_SetBit(void* Obj)
{
	((USurvival_System*)Obj)->IsRefillingOxygen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvival_System_Statics::NewProp_IsRefillingOxygen = { "IsRefillingOxygen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USurvival_System), &Z_Construct_UClass_USurvival_System_Statics::NewProp_IsRefillingOxygen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsRefillingOxygen_MetaData), NewProp_IsRefillingOxygen_MetaData) };
void Z_Construct_UClass_USurvival_System_Statics::NewProp_IsGeneratingPower_SetBit(void* Obj)
{
	((USurvival_System*)Obj)->IsGeneratingPower = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USurvival_System_Statics::NewProp_IsGeneratingPower = { "IsGeneratingPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USurvival_System), &Z_Construct_UClass_USurvival_System_Statics::NewProp_IsGeneratingPower_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsGeneratingPower_MetaData), NewProp_IsGeneratingPower_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USurvival_System_Statics::NewProp_OnPowerChanged = { "OnPowerChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USurvival_System, OnPowerChanged), Z_Construct_UDelegateFunction_ProjectRedDust_OnPowerChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPowerChanged_MetaData), NewProp_OnPowerChanged_MetaData) }; // 205935888
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USurvival_System_Statics::NewProp_OnOxygenChanged = { "OnOxygenChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USurvival_System, OnOxygenChanged), Z_Construct_UDelegateFunction_ProjectRedDust_OnOxygenChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOxygenChanged_MetaData), NewProp_OnOxygenChanged_MetaData) }; // 1590811613
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USurvival_System_Statics::NewProp_OnHungerChanged = { "OnHungerChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USurvival_System, OnHungerChanged), Z_Construct_UDelegateFunction_ProjectRedDust_OnHungerChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHungerChanged_MetaData), NewProp_OnHungerChanged_MetaData) }; // 439618722
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USurvival_System_Statics::NewProp_OnThirstChanged = { "OnThirstChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USurvival_System, OnThirstChanged), Z_Construct_UDelegateFunction_ProjectRedDust_OnThirstChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnThirstChanged_MetaData), NewProp_OnThirstChanged_MetaData) }; // 694283539
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USurvival_System_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USurvival_System, OnHealthChanged), Z_Construct_UDelegateFunction_ProjectRedDust_OnHealthChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 173885811
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USurvival_System_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvival_System_Statics::NewProp_Hunger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvival_System_Statics::NewProp_Thirst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvival_System_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvival_System_Statics::NewProp_Oxygen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvival_System_Statics::NewProp_Power,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvival_System_Statics::NewProp_ConsumeOxygen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvival_System_Statics::NewProp_ConsumePower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvival_System_Statics::NewProp_IsRefillingOxygen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvival_System_Statics::NewProp_IsGeneratingPower,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvival_System_Statics::NewProp_OnPowerChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvival_System_Statics::NewProp_OnOxygenChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvival_System_Statics::NewProp_OnHungerChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvival_System_Statics::NewProp_OnThirstChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USurvival_System_Statics::NewProp_OnHealthChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USurvival_System_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USurvival_System_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ProjectRedDust,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USurvival_System_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USurvival_System_Statics::ClassParams = {
	&USurvival_System::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USurvival_System_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USurvival_System_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USurvival_System_Statics::Class_MetaDataParams), Z_Construct_UClass_USurvival_System_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USurvival_System()
{
	if (!Z_Registration_Info_UClass_USurvival_System.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USurvival_System.OuterSingleton, Z_Construct_UClass_USurvival_System_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USurvival_System.OuterSingleton;
}
template<> PROJECTREDDUST_API UClass* StaticClass<USurvival_System>()
{
	return USurvival_System::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USurvival_System);
USurvival_System::~USurvival_System() {}
// End Class USurvival_System

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USurvival_System, USurvival_System::StaticClass, TEXT("USurvival_System"), &Z_Registration_Info_UClass_USurvival_System, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USurvival_System), 4159174018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_4174145437(TEXT("/Script/ProjectRedDust"),
	Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_Survival_System_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
