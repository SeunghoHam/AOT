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

void ACamera::DetachFromControllerPendingDestroy()
{
	if (Controller != nullptr && Controller->GetPawn() == this)
	{
		Controller->PawnPendingDestroy(this);
		UnusedGadget();
	}
}

/*
void ACamera::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (HasAuthority())
	{
		Controller->PawnPendingDestroy(this);

		UnusedGadget();
	}

	Super::EndPlay(EndPlayReason);
}*/


void ACamera::UseGadget(APlayerController* User)
{
	PrevPawn = User->GetPawn();

	User->Possess(this);
}

void ACamera::UnusedGadget()
{
	if (GetController() && GetController() && PrevPawn)
	{
		GetController()->Possess(PrevPawn);

		PrevPawn = nullptr;
	}
}