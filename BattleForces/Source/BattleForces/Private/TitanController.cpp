// Fill out your copyright notice in the Description page of Project Settings.


#include "TitanController.h"

ATitanController::ATitanController()
{
	/*Initialize blackboard and behavior tree*/
	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));

	/*Initialize blackboard keys*/
	PlayerKey = "Target";
	LocationToGoKey = "LocationToGo"; // .h 에서 FName으로 정의시킨것들임

	CurrentPatrolPoint = 0;
		
}

void ATitanController::SetPlayerCaught(APawn* pawn)
{
	if (BlackboardComp)
	{
		BlackboardComp->SetValueAsObject(PlayerKey, pawn);
	}
}

void ATitanController::OnPossess(APawn* pawn)
{
	Super::OnPossess(pawn);

	/*Get reference to the character*/
	ATitanCharacter* AICharacter = Cast<ATitanCharacter>(pawn);


	if (AICharacter)
	{	
		if (AICharacter->BehaviorTree->BlackboardAsset) // TitanCharacter.h 에 UBehaviorTree 를 class 로 선언했음
		{
			BlackboardComp->InitializeBlackboard(*(AICharacter->BehaviorTree->BlackboardAsset));
		}

		/*Populate patrol point array*/

		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ATitanTargetPoint::StaticClass(), PatrolPoints);

		BehaviorComp->StartTree(*AICharacter->BehaviorTree);
		
	}
}

