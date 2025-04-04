// Fill out your copyright notice in the Description page of Project Settings.


#include "SCharacter.h"
#include <GameFramework/SpringArmComponent.h>
#include <Camera/CameraComponent.h>
#include <GameFramework/CharacterMovementComponent.h>


// Sets default values
ASCharacter::ASCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	this->bUseControllerRotationPitch = false;
	this->bUseControllerRotationYaw = false;
	this->bUseControllerRotationRoll = false;

	TObjectPtr<UCharacterMovementComponent> MovementComponent = this->GetCharacterMovement();
	MovementComponent->bOrientRotationToMovement = true;

	this->CameraArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("TWA SpringArmComponent"));
	this->CameraArmComponent->SetupAttachment(this->RootComponent.Get());
	this->CameraArmComponent->TargetArmLength = 400.0f;
	this->CameraArmComponent->bUsePawnControlRotation = true;

	this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("TWA CameraComponent"));
	this->CameraComponent->SetupAttachment(this->CameraArmComponent.Get(), USpringArmComponent::SocketName);
	this->CameraComponent->bUsePawnControlRotation = false;


}


// Called when the game starts or when spawned
void ASCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

