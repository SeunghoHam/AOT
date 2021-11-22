// Fill out your copyright notice in the Description page of Project Settings.


#include "Camera.h"

// Sets default values
ACamera::ACamera()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ACamera::BeginPlay()
{
	Super::BeginPlay();
	
}
void ACamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ACamera::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	if (HasAuthority() &&  PrevPawn)
	{
		GetController()->Possess(PrevPawn);
	}
}

void ACamera::UseGadget(APlayerController* User)
{
	 PrevPawn =  User->GetPawn();

	 User->Possess(this);
}