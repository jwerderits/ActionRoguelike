// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "thundaWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AthundaCharacter;
#ifdef THUNDA_thundaWeaponComponent_generated_h
#error "thundaWeaponComponent.generated.h already included, missing '#pragma once' in thundaWeaponComponent.h"
#endif
#define THUNDA_thundaWeaponComponent_generated_h

#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUthundaWeaponComponent(); \
	friend struct Z_Construct_UClass_UthundaWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UthundaWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/thunda"), NO_API) \
	DECLARE_SERIALIZER(UthundaWeaponComponent)


#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UthundaWeaponComponent(UthundaWeaponComponent&&); \
	UthundaWeaponComponent(const UthundaWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UthundaWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UthundaWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UthundaWeaponComponent) \
	NO_API virtual ~UthundaWeaponComponent();


#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaWeaponComponent_h_11_PROLOG
#define FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THUNDA_API UClass* StaticClass<class UthundaWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
