// Fill out your copyright notice in the Description page of Project Settings.


#include "Pawns/Bird.h"

ABird::ABird()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ABird::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABird::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABird::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

