// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "I_Interact.generated.h"


class ASYT_Character;

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UI_Interact : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class II_Interact
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void LookAt(ASYT_Character* PlayerRef);
	virtual void LookAt_Implementation(ASYT_Character* PlayerRef);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void InteractWith_Implementation(ASYT_Character* PlayerRef);
	virtual void InteractWith_Implementation(ASYT_Character* PlayerRef);



	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
};
