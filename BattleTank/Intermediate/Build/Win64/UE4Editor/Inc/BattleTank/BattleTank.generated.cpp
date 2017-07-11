// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BattleTank.h"
#include "BattleTank.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1BattleTank() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UProjectileMovementComponent();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	AIMODULE_API class UClass* Z_Construct_UClass_AAIController();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController();

	BATTLETANK_API class UClass* Z_Construct_UClass_ABattleTankGameModeBase_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_ABattleTankGameModeBase();
	BATTLETANK_API class UClass* Z_Construct_UClass_AProjectile_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_AProjectile();
	BATTLETANK_API class UClass* Z_Construct_UClass_UProjectileMovementComponent_BP_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_UProjectileMovementComponent_BP();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_ATank_Fire();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_ATank_SetBarrelReference();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_ATank_SetTurretReference();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATank_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATank();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATankAIController_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATankAIController();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankAimingComponent();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankBarrel_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankBarrel();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATankPlayerController_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATankPlayerController();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankTurret_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankTurret();
	BATTLETANK_API class UPackage* Z_Construct_UPackage__Script_BattleTank();
	void ABattleTankGameModeBase::StaticRegisterNativesABattleTankGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABattleTankGameModeBase_NoRegister()
	{
		return ABattleTankGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABattleTankGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = ABattleTankGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABattleTankGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BattleTankGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BattleTankGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattleTankGameModeBase, 2579875846);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleTankGameModeBase(Z_Construct_UClass_ABattleTankGameModeBase, &ABattleTankGameModeBase::StaticClass, TEXT("/Script/BattleTank"), TEXT("ABattleTankGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleTankGameModeBase);
	void AProjectile::StaticRegisterNativesAProjectile()
	{
	}
	UClass* Z_Construct_UClass_AProjectile_NoRegister()
	{
		return AProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = AProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<AProjectile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Projectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Projectile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectile, 2602017106);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectile(Z_Construct_UClass_AProjectile, &AProjectile::StaticClass, TEXT("/Script/BattleTank"), TEXT("AProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile);
	void UProjectileMovementComponent_BP::StaticRegisterNativesUProjectileMovementComponent_BP()
	{
	}
	UClass* Z_Construct_UClass_UProjectileMovementComponent_BP_NoRegister()
	{
		return UProjectileMovementComponent_BP::StaticClass();
	}
	UClass* Z_Construct_UClass_UProjectileMovementComponent_BP()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UProjectileMovementComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UProjectileMovementComponent_BP::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UProjectileMovementComponent_BP> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ProjectileMovementComponent_BP.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/ProjectileMovementComponent_BP.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProjectileMovementComponent_BP, 4038299849);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProjectileMovementComponent_BP(Z_Construct_UClass_UProjectileMovementComponent_BP, &UProjectileMovementComponent_BP::StaticClass, TEXT("/Script/BattleTank"), TEXT("UProjectileMovementComponent_BP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectileMovementComponent_BP);
	void ATank::StaticRegisterNativesATank()
	{
		UClass* Class = ATank::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Fire", (Native)&ATank::execFire },
			{ "SetBarrelReference", (Native)&ATank::execSetBarrelReference },
			{ "SetTurretReference", (Native)&ATank::execSetTurretReference },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 3);
	}
	UFunction* Z_Construct_UFunction_ATank_Fire()
	{
		UObject* Outer=Z_Construct_UClass_ATank();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Fire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Firing"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATank_SetBarrelReference()
	{
		struct Tank_eventSetBarrelReference_Parms
		{
			UTankBarrel* BarrelToSet;
		};
		UObject* Outer=Z_Construct_UClass_ATank();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetBarrelReference"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(Tank_eventSetBarrelReference_Parms));
			UProperty* NewProp_BarrelToSet = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BarrelToSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BarrelToSet, Tank_eventSetBarrelReference_Parms), 0x0010000000080080, Z_Construct_UClass_UTankBarrel_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Setup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
			MetaData->SetValue(NewProp_BarrelToSet, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ATank_SetTurretReference()
	{
		struct Tank_eventSetTurretReference_Parms
		{
			UTankTurret* TurretToSet;
		};
		UObject* Outer=Z_Construct_UClass_ATank();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetTurretReference"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(Tank_eventSetTurretReference_Parms));
			UProperty* NewProp_TurretToSet = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TurretToSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TurretToSet, Tank_eventSetTurretReference_Parms), 0x0010000000080080, Z_Construct_UClass_UTankTurret_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Setup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
			MetaData->SetValue(NewProp_TurretToSet, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATank_NoRegister()
	{
		return ATank::StaticClass();
	}
	UClass* Z_Construct_UClass_ATank()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = ATank::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ATank_Fire());
				OuterClass->LinkChild(Z_Construct_UFunction_ATank_SetBarrelReference());
				OuterClass->LinkChild(Z_Construct_UFunction_ATank_SetTurretReference());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ReloadTimeInSeconds = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ReloadTimeInSeconds"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReloadTimeInSeconds, ATank), 0x0040000000010001);
				UProperty* NewProp_LaunchSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LaunchSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LaunchSpeed, ATank), 0x0040000000010001);
				UProperty* NewProp_ProjectileBluePrint = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ProjectileBluePrint"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(ProjectileBluePrint, ATank), 0x0044000000010001, Z_Construct_UClass_AProjectile_NoRegister(), UClass::StaticClass());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATank_Fire(), "Fire"); // 849603197
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATank_SetBarrelReference(), "SetBarrelReference"); // 2570909085
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATank_SetTurretReference(), "SetTurretReference"); // 1358035061
				static TCppClassTypeInfo<TCppClassTypeTraits<ATank> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Tank.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
				MetaData->SetValue(NewProp_ReloadTimeInSeconds, TEXT("Category"), TEXT("Firing"));
				MetaData->SetValue(NewProp_ReloadTimeInSeconds, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
				MetaData->SetValue(NewProp_ReloadTimeInSeconds, TEXT("ToolTip"), TEXT("TODO find sensible default"));
				MetaData->SetValue(NewProp_LaunchSpeed, TEXT("Category"), TEXT("Firing"));
				MetaData->SetValue(NewProp_LaunchSpeed, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
				MetaData->SetValue(NewProp_ProjectileBluePrint, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_ProjectileBluePrint, TEXT("ModuleRelativePath"), TEXT("Public/Tank.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATank, 927580474);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATank(Z_Construct_UClass_ATank, &ATank::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATank);
	void ATankAIController::StaticRegisterNativesATankAIController()
	{
	}
	UClass* Z_Construct_UClass_ATankAIController_NoRegister()
	{
		return ATankAIController::StaticClass();
	}
	UClass* Z_Construct_UClass_ATankAIController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AAIController();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = ATankAIController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900280;


				static TCppClassTypeInfo<TCppClassTypeTraits<ATankAIController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankAIController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankAIController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankAIController, 3634848402);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankAIController(Z_Construct_UClass_ATankAIController, &ATankAIController::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATankAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankAIController);
	void UTankAimingComponent::StaticRegisterNativesUTankAimingComponent()
	{
	}
	UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister()
	{
		return UTankAimingComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankAimingComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankAimingComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UTankAimingComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankAimingComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Holds barrels properties and elevate method"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankAimingComponent, 4089014178);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankAimingComponent(Z_Construct_UClass_UTankAimingComponent, &UTankAimingComponent::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankAimingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankAimingComponent);
	void UTankBarrel::StaticRegisterNativesUTankBarrel()
	{
	}
	UClass* Z_Construct_UClass_UTankBarrel_NoRegister()
	{
		return UTankBarrel::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankBarrel()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UStaticMeshComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankBarrel::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B01080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MaxElevationDegrees = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxElevationDegrees"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxElevationDegrees, UTankBarrel), 0x0040000000010001);
				UProperty* NewProp_MinElevationDegrees = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinElevationDegrees"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinElevationDegrees, UTankBarrel), 0x0040000000010001);
				UProperty* NewProp_MaxDegreesPerSecond = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxDegreesPerSecond"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxDegreesPerSecond, UTankBarrel), 0x0040000000010001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UTankBarrel> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Activation Components|Activation Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankBarrel.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankBarrel.h"));
				MetaData->SetValue(NewProp_MaxElevationDegrees, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_MaxElevationDegrees, TEXT("ModuleRelativePath"), TEXT("Public/TankBarrel.h"));
				MetaData->SetValue(NewProp_MinElevationDegrees, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_MinElevationDegrees, TEXT("ModuleRelativePath"), TEXT("Public/TankBarrel.h"));
				MetaData->SetValue(NewProp_MaxDegreesPerSecond, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_MaxDegreesPerSecond, TEXT("ModuleRelativePath"), TEXT("Public/TankBarrel.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankBarrel, 3336770368);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankBarrel(Z_Construct_UClass_UTankBarrel, &UTankBarrel::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankBarrel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankBarrel);
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
				OuterClass->ClassFlags |= 0x20900284;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_LineTraceRange = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LineTraceRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LineTraceRange, ATankPlayerController), 0x0040000000010001);
				UProperty* NewProp_CrossHairYLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CrossHairYLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CrossHairYLocation, ATankPlayerController), 0x0040000000010001);
				UProperty* NewProp_CrossHairXLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CrossHairXLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CrossHairXLocation, ATankPlayerController), 0x0040000000010001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
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
	IMPLEMENT_CLASS(ATankPlayerController, 1900194237);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankPlayerController(Z_Construct_UClass_ATankPlayerController, &ATankPlayerController::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATankPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPlayerController);
	void UTankTurret::StaticRegisterNativesUTankTurret()
	{
	}
	UClass* Z_Construct_UClass_UTankTurret_NoRegister()
	{
		return UTankTurret::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankTurret()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UStaticMeshComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankTurret::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B01080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MaxRotationDegreesPerSecond = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxRotationDegreesPerSecond"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxRotationDegreesPerSecond, UTankTurret), 0x0040000000010001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UTankTurret> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Activation Components|Activation Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankTurret.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankTurret.h"));
				MetaData->SetValue(NewProp_MaxRotationDegreesPerSecond, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_MaxRotationDegreesPerSecond, TEXT("ModuleRelativePath"), TEXT("Public/TankTurret.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankTurret, 4243727479);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankTurret(Z_Construct_UClass_UTankTurret, &UTankTurret::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankTurret"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankTurret);
	UPackage* Z_Construct_UPackage__Script_BattleTank()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/BattleTank")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x67DF8615;
			Guid.B = 0x6EFDC8BA;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
