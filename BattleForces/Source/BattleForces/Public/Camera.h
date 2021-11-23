// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Gadget.h"
#include "Camera.generated.h"

UCLASS()
class BATTLEFORCES_API ACamera : public APawn, public IGadget
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACamera();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public: 
	UFUNCTION(BlueprintCallable)
	virtual void UseGadget(APlayerController* User) override;

	UFUNCTION(BlueprintCallable)
	void UnusedGadget();

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override; // Destory시 발생
	virtual void DetachFromControllerPendingDestroy() override;
private :
	/*
	// 이 카메라를 사용하는 유저
	UPROPERTY()
	APlayerController* User;*/

	// 이 카메라를 사용하는 pawn
	UPROPERTY()
	APawn* PrevPawn;
};
