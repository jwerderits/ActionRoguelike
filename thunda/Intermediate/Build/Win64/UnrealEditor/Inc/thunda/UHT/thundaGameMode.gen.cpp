// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "thunda/thundaGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodethundaGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
THUNDA_API UClass* Z_Construct_UClass_AthundaGameMode();
THUNDA_API UClass* Z_Construct_UClass_AthundaGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_thunda();
// End Cross Module References

// Begin Class AthundaGameMode
void AthundaGameMode::StaticRegisterNativesAthundaGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AthundaGameMode);
UClass* Z_Construct_UClass_AthundaGameMode_NoRegister()
{
	return AthundaGameMode::StaticClass();
}
struct Z_Construct_UClass_AthundaGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "thundaGameMode.h" },
		{ "ModuleRelativePath", "thundaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AthundaGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AthundaGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_thunda,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AthundaGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AthundaGameMode_Statics::ClassParams = {
	&AthundaGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AthundaGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AthundaGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AthundaGameMode()
{
	if (!Z_Registration_Info_UClass_AthundaGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AthundaGameMode.OuterSingleton, Z_Construct_UClass_AthundaGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AthundaGameMode.OuterSingleton;
}
template<> THUNDA_API UClass* StaticClass<AthundaGameMode>()
{
	return AthundaGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AthundaGameMode);
AthundaGameMode::~AthundaGameMode() {}
// End Class AthundaGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AthundaGameMode, AthundaGameMode::StaticClass, TEXT("AthundaGameMode"), &Z_Registration_Info_UClass_AthundaGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AthundaGameMode), 3389728302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaGameMode_h_1016815524(TEXT("/Script/thunda"),
	Z_CompiledInDeferFile_FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHub_ActionRoguelike_thunda_Source_thunda_thundaGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
