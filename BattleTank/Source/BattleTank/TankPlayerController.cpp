// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankPlayerController.h"

void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("PlayerController Begin Play"));

	auto ControlledTank = GetControlledTank();
	if(!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player controller not posessing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Player controller posessing: %s"), *ControlledTank->GetName());
	}

}

ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


