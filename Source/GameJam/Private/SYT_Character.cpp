// Fill out your copyright notice in the Description page of Project Settings.


#include "SYT_Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
ASYT_Character::ASYT_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CreateDefaultSubobject<USpringArmComponent>("CameraBoom");
	CreateDefaultSubobject<UCameraComponent>("PlayerCamera");

}

// Called when the game starts or when spawned
void ASYT_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASYT_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASYT_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

