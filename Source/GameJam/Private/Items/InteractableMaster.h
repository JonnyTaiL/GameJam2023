// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Core/I_Interact.h"

#include "InteractableMaster.generated.h"

UCLASS()
class AInteractableMaster : public AActor, public II_Interact
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractableMaster();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
