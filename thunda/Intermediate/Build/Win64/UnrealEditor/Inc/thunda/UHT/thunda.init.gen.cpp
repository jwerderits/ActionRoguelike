// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodethunda_init() {}
	THUNDA_API UFunction* Z_Construct_UDelegateFunction_thunda_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_thunda;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_thunda()
	{
		if (!Z_Registration_Info_UPackage__Script_thunda.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_thunda_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/thunda",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x933B2013,
				0x2BB62805,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_thunda.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_thunda.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_thunda(Z_Construct_UPackage__Script_thunda, TEXT("/Script/thunda"), Z_Registration_Info_UPackage__Script_thunda, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x933B2013, 0x2BB62805));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
