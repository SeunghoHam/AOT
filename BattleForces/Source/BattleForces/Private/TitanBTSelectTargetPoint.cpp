// Fill out your copyright notice in the Description page of Project Settings.


#include "TitanBTSelectTargetPoint.h"
#include "TitanTargetPoint.h"
#include "TitanController.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UTitanBTSelectTargetPoint::ExecuteTask(UBehaviorTreeComponent  & OwnerComp, uint8* NodeMemory)
{

	ATitanController* AIController = Cast<ATitanController>(OwnerComp.GetAIOwner());

	if (AIController)
	{
		/*Get BB component*/
		UBlackboardComponent* BlackboardComp = AIController->GetBlackboardComp();

		ATitanTargetPoint* CurrentPoint = Cast<ATitanTargetPoint>(BlackboardComp->GetValueAsObject("LocationToGo"));

		TArray<AActor* > AvailablePatrolPoints = AIController->GetPatrolPoints();

		ATitanTargetPoint* NextPatrolPoint = nullptr;

		if (AIController->CurrentPatrolPoint != AvailablePatrolPoints.Num() -1)
		{
			NextPatrolPoint = Cast<ATitanTargetPoint>(AvailablePatrolPoints[++AIController->CurrentPatrolPoint]);
		}
		else // if threr is not anymore poitns to go to
		{
			NextPatrolPoint = Cast<ATitanTargetPoint>(AvailablePatrolPoints[0]);
			AIController->CurrentPatrolPoint = 0;
		}
		
		BlackboardComp->SetValueAsObject("LocationToGo", NextPatrolPoint); // ( Keyname, OnjectValue)

		return EBTNodeResult::Succeeded;
	}

	return EBTNodeResult::Failed;
}
