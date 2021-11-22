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
	virtual void UseGadget(APlayerController* User) override {};

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override; // Destory�� �߻�
private :
	/*
	// �� ī�޶� ����ϴ� ����
	UPROPERTY()
	APlayerController* User;*/

	// �� ī�޶� ����ϴ� pawn
	UPROPERTY()
	APawn* PrevPawn;
};