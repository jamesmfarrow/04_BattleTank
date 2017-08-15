// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h" // put new includes above this

class UTankTurret; // forward declaration
class UTankBarrel; // forward declaration
class UTankAimingComponent; // forward declaration
class AProjectile;


UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:
	void AimAt(FVector OutHitLocation); 
	
	UFUNCTION(Blueprintcallable, Category = Firing)
	void Fire();

protected:
	UPROPERTY(BlueprintReadOnly)
	UTankAimingComponent* TankAimingComponent = nullptr;

private:
	// Sets default values for this pawn's properties
	ATank();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Setup" )
	TSubclassOf<AProjectile> ProjectileBluePrint;

	UPROPERTY(EditDefaultsOnly, Category = "Firing" )
	float LaunchSpeed = 4000; // TODO find sensible default

	// TODO remove once firing moved to aiming component
	UPROPERTY(EditDefaultsOnly, Category = "Firing" )
	float ReloadTimeInSeconds = 3;

	UTankBarrel* Barrel = nullptr; // TODO remove

	double LastFireTime = 0;

};
