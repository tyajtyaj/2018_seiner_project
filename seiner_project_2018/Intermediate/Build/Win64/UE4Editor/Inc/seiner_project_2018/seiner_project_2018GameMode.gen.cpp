// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "seiner_project_2018GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeseiner_project_2018GameMode() {}
// Cross Module References
	SEINER_PROJECT_2018_API UClass* Z_Construct_UClass_Aseiner_project_2018GameMode_NoRegister();
	SEINER_PROJECT_2018_API UClass* Z_Construct_UClass_Aseiner_project_2018GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_seiner_project_2018();
// End Cross Module References
	void Aseiner_project_2018GameMode::StaticRegisterNativesAseiner_project_2018GameMode()
	{
	}
	UClass* Z_Construct_UClass_Aseiner_project_2018GameMode_NoRegister()
	{
		return Aseiner_project_2018GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_Aseiner_project_2018GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_seiner_project_2018,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "seiner_project_2018GameMode.h" },
				{ "ModuleRelativePath", "seiner_project_2018GameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<Aseiner_project_2018GameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&Aseiner_project_2018GameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aseiner_project_2018GameMode, 1071864859);
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aseiner_project_2018GameMode(Z_Construct_UClass_Aseiner_project_2018GameMode, &Aseiner_project_2018GameMode::StaticClass, TEXT("/Script/seiner_project_2018"), TEXT("Aseiner_project_2018GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aseiner_project_2018GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
