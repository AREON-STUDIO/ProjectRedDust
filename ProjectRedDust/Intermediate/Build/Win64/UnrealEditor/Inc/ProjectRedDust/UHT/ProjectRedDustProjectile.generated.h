// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ProjectRedDustProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROJECTREDDUST_ProjectRedDustProjectile_generated_h
#error "ProjectRedDustProjectile.generated.h already included, missing '#pragma once' in ProjectRedDustProjectile.h"
#endif
#define PROJECTREDDUST_ProjectRedDustProjectile_generated_h

#define FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectRedDustProjectile(); \
	friend struct Z_Construct_UClass_AProjectRedDustProjectile_Statics; \
public: \
	DECLARE_CLASS(AProjectRedDustProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectRedDust"), NO_API) \
	DECLARE_SERIALIZER(AProjectRedDustProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AProjectRedDustProjectile(AProjectRedDustProjectile&&); \
	AProjectRedDustProjectile(const AProjectRedDustProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectRedDustProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectRedDustProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectRedDustProjectile) \
	NO_API virtual ~AProjectRedDustProjectile();


#define FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustProjectile_h_12_PROLOG
#define FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTREDDUST_API UClass* StaticClass<class AProjectRedDustProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Lenovo_Documents_GitHub_ProjectRedDust_ProjectRedDust_Source_ProjectRedDust_ProjectRedDustProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
