// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BattleTank.h"
#include "TankPlayerController.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPlayerController() {}
// Cross Module References
	BATTLETANK_API UClass* Z_Construct_UClass_ATankPlayerController_NoRegister();
	BATTLETANK_API UClass* Z_Construct_UClass_ATankPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_BattleTank();
// End Cross Module References
	void ATankPlayerController::StaticRegisterNativesATankPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ATankPlayerController_NoRegister()
	{
		return ATankPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_ATankPlayerController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = ATankPlayerController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900284u;


				UProperty* NewProp_LineTraceRange = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LineTraceRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LineTraceRange, ATankPlayerController), 0x0040000000010001);
				UProperty* NewProp_CrossHairYLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CrossHairYLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CrossHairYLocation, ATankPlayerController), 0x0040000000010001);
				UProperty* NewProp_CrossHairXLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CrossHairXLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CrossHairXLocation, ATankPlayerController), 0x0040000000010001);
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ATankPlayerController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankPlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TankPlayerController.h"));
				MetaData->SetValue(NewProp_LineTraceRange, TEXT("Category"), TEXT("TankPlayerController"));
				MetaData->SetValue(NewProp_LineTraceRange, TEXT("ModuleRelativePath"), TEXT("TankPlayerController.h"));
				MetaData->SetValue(NewProp_CrossHairYLocation, TEXT("Category"), TEXT("TankPlayerController"));
				MetaData->SetValue(NewProp_CrossHairYLocation, TEXT("ModuleRelativePath"), TEXT("TankPlayerController.h"));
				MetaData->SetValue(NewProp_CrossHairXLocation, TEXT("Category"), TEXT("TankPlayerController"));
				MetaData->SetValue(NewProp_CrossHairXLocation, TEXT("ModuleRelativePath"), TEXT("TankPlayerController.h"));
				MetaData->SetValue(NewProp_CrossHairXLocation, TEXT("ToolTip"), TEXT("dot screen location"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankPlayerController, 218091510);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankPlayerController(Z_Construct_UClass_ATankPlayerController, &ATankPlayerController::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATankPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
