// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"

#include "TitanCharacter.h"
#include "TitanTargetPoint.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"

#include "Kismet/GameplayStatics.h"

#include "TitanController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLEFORCES_API ATitanController : public AAIController
{
	GENERATED_BODY()

		/*Behavior tree component*/
		UBehaviorTreeComponent* BehaviorComp;
	
		/*Our blackboard component*/
		UBlackboardComponent* BlackboardComp;

		/*Blackboard Keys*/
		UPROPERTY(EditDefaultsOnly, Category = AI)
		FName LocationToGoKey; // ������ Ű ������ ����� ����

		UPROPERTY(EditDefaultsOnly, Category = AI)
		FName PlayerKey; // ������ �÷��̾� Ű ������ ����� ����

		TArray<AActor*> PatrolPoints;

		virtual void OnPossess(APawn* pawn);

		
public:
	ATitanController();

	void SetPlayerCaught(APawn* pawn);

	int32 CurrentPatrolPoint = 0;

	/*Inline getter Funcitons*/
	FORCEINLINE UBlackboardComponent* GetBlackboardComp() const {return BlackboardComp; }
	FORCEINLINE TArray<AActor*> GetPatrolPoints() const { return PatrolPoints; }
	
};
