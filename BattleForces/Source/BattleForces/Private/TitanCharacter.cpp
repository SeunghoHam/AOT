// Fill out your copyright notice in the Description page of Project Settings.


#include "TitanCharacter.h"

#include "TitanController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Perception/PawnSensingComponent.h"
// Sets default values
ATitanCharacter::ATitanCharacter()
{
	/*Initialize sens*/
	PawnSensingComp = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensingComp"));
	PawnSensingComp->SetPeripheralVisionAngle(90.f);
}

// Called when the game starts or when spawned
void ATitanCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (PawnSensingComp)
	{
		PawnSensingComp->OnSeePawn.AddDynamic(this, &ATitanCharacter::OnPlayerCaught);
	}
}

// Called to bind functionality to input
void ATitanCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATitanCharacter::OnPlayerCaught(APawn* Pawn)
{
	/*Get a reference to the player controller*/

	ATitanController* AIController = Cast<ATitanController>(GetController());

	if (AIController)
	{
		
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("You have been cauthg!")); // GEngine 사용하려면 프로젝트명.h 에 Engine.h 포함시켜야함

		AIController->SetPlayerCaught(Pawn);
	}
}
