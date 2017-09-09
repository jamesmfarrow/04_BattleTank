// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h" // put new includes above this

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()



private:

	// Called when the game starts or when spawned
	//virtual void BeginPlay() override;
	UPROPERTY(EditDefaultsOnly, Category = "Setup")
	int32 StartingHealth = 100;

	UPROPERTY(VisibleAnywhere, Category = "Health")
	int32 CurrentHealth = StartingHealth;

public:
	
	// Sets default values for this pawn's properties
	ATank();

	//called by the engine when actor damage is dealt 
	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const & DamageEvent, class AController * EventInstigator,AActor * DamageCauser) override;

};
