// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SYT_Character.generated.h"


class USpringArmComponent;
class UCameraComponent;


UCLASS()
class ASYT_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASYT_Character();

	USpringArmComponent* CameraBoom;
	UCameraComponent* PlayerCamera;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
