// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Overwatch2_Remake/Overwatch2_RemakeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverwatch2_RemakeGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	OVERWATCH2_REMAKE_API UClass* Z_Construct_UClass_AOverwatch2_RemakeGameMode();
	OVERWATCH2_REMAKE_API UClass* Z_Construct_UClass_AOverwatch2_RemakeGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Overwatch2_Remake();
// End Cross Module References
	void AOverwatch2_RemakeGameMode::StaticRegisterNativesAOverwatch2_RemakeGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AOverwatch2_RemakeGameMode);
	UClass* Z_Construct_UClass_AOverwatch2_RemakeGameMode_NoRegister()
	{
		return AOverwatch2_RemakeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AOverwatch2_RemakeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOverwatch2_RemakeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Overwatch2_Remake,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOverwatch2_RemakeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Overwatch2_RemakeGameMode.h" },
		{ "ModuleRelativePath", "Overwatch2_RemakeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOverwatch2_RemakeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOverwatch2_RemakeGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AOverwatch2_RemakeGameMode_Statics::ClassParams = {
		&AOverwatch2_RemakeGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AOverwatch2_RemakeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOverwatch2_RemakeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOverwatch2_RemakeGameMode()
	{
		if (!Z_Registration_Info_UClass_AOverwatch2_RemakeGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOverwatch2_RemakeGameMode.OuterSingleton, Z_Construct_UClass_AOverwatch2_RemakeGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AOverwatch2_RemakeGameMode.OuterSingleton;
	}
	template<> OVERWATCH2_REMAKE_API UClass* StaticClass<AOverwatch2_RemakeGameMode>()
	{
		return AOverwatch2_RemakeGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOverwatch2_RemakeGameMode);
	AOverwatch2_RemakeGameMode::~AOverwatch2_RemakeGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_yena_Desktop_Overwatch_Reproduction_Overwatch2_Remake_Source_Overwatch2_Remake_Overwatch2_RemakeGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yena_Desktop_Overwatch_Reproduction_Overwatch2_Remake_Source_Overwatch2_Remake_Overwatch2_RemakeGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AOverwatch2_RemakeGameMode, AOverwatch2_RemakeGameMode::StaticClass, TEXT("AOverwatch2_RemakeGameMode"), &Z_Registration_Info_UClass_AOverwatch2_RemakeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOverwatch2_RemakeGameMode), 4058226090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_yena_Desktop_Overwatch_Reproduction_Overwatch2_Remake_Source_Overwatch2_Remake_Overwatch2_RemakeGameMode_h_1152827082(TEXT("/Script/Overwatch2_Remake"),
		Z_CompiledInDeferFile_FID_Users_yena_Desktop_Overwatch_Reproduction_Overwatch2_Remake_Source_Overwatch2_Remake_Overwatch2_RemakeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_yena_Desktop_Overwatch_Reproduction_Overwatch2_Remake_Source_Overwatch2_Remake_Overwatch2_RemakeGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
