


#include "CharacterControllerBase.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "SCharacter.h"
#include "SMagicProjectile.h"
#include "SInteractionComponent.h"

void ACharacterControllerBase::SetupInputComponent()
{
	Super::SetupInputComponent();

	TObjectPtr<UEnhancedInputComponent> EnhancedInputComponent
		= Cast<UEnhancedInputComponent>(this->InputComponent);
	

	if (EnhancedInputComponent)
	{
		//Move
		EnhancedInputComponent->BindAction(MoveAction.Get(),
			ETriggerEvent::Triggered,
			this,
			&ACharacterControllerBase::Move);

		//Look
		EnhancedInputComponent->BindAction(LookAction.Get(),
			ETriggerEvent::Triggered,
			this,
			&ACharacterControllerBase::Look);

		//Jump
		EnhancedInputComponent->BindAction(JumpAction.Get(),
			ETriggerEvent::Started,
			this,
			&ACharacterControllerBase::JumpStart);

		EnhancedInputComponent->BindAction(JumpAction.Get(),
			ETriggerEvent::Completed,
			this,
			&ACharacterControllerBase::JumpStop);

		//Run
		EnhancedInputComponent->BindAction(RunAction.Get(),
			ETriggerEvent::Started,
			this,
			&ACharacterControllerBase::RunStart);
		EnhancedInputComponent->BindAction(RunAction.Get(),
			ETriggerEvent::Completed,
			this,
			&ACharacterControllerBase::RunStop);

		//PrimaryAttack
		EnhancedInputComponent->BindAction(PrimaryAttackAction.Get(),
			ETriggerEvent::Triggered,
			this,
			&ACharacterControllerBase::PrimaryAttack);

		//PrimaryInteract
		EnhancedInputComponent->BindAction(PrimaryInteractAction.Get(),
			ETriggerEvent::Triggered,
			this,
			&ACharacterControllerBase::PrimaryInteract);

		//PrimaryInteract
		EnhancedInputComponent->BindAction(TestAction.Get(),
			ETriggerEvent::Triggered,
			this,
			&ACharacterControllerBase::Test);

	}
}

void ACharacterControllerBase::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	this->CurrentCharacter = Cast<ASCharacter>(InPawn);

	TObjectPtr<UEnhancedInputLocalPlayerSubsystem> InputLocalPlayerSubsystem
		= ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this->GetLocalPlayer());

	if (InputLocalPlayerSubsystem)
	{
		InputLocalPlayerSubsystem->AddMappingContext(this->CurrentMappingContext.Get(), 0);
	}

	TObjectPtr<USInteractionComponent> InteractionComponent
		= this->CurrentCharacter->FindComponentByClass<USInteractionComponent>();


	UE_LOG(LogTemp, Display, TEXT("Mapping Context: %s"), *GetNameSafe(CurrentMappingContext));


}
void ACharacterControllerBase::Move(const FInputActionValue& Value)
{
	const FVector2d MovementVector = Value.Get<FVector2d>();

	const FRotator Rotation = this->GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	this->CurrentCharacter->AddMovementInput(ForwardDirection, MovementVector.Y);
	this->CurrentCharacter->AddMovementInput(RightDirection, MovementVector.X);
}
void ACharacterControllerBase::Look(const FInputActionValue& Value)
{
	const FVector2d LookAxisVector = Value.Get<FVector2d>();

	this->CurrentCharacter->AddControllerYawInput(LookAxisVector.X);
	this->CurrentCharacter->AddControllerPitchInput(LookAxisVector.Y);
}

void ACharacterControllerBase::JumpStart()
{
	UE_LOG(LogTemp, Display, TEXT("jumping"));
	this->CurrentCharacter->Jump();
}

void ACharacterControllerBase::JumpStop()
{
	this->CurrentCharacter->StopJumping();
}

void ACharacterControllerBase::RunStart()
{
	this->CurrentCharacter->GetCharacterMovement()->MaxWalkSpeed *= 2.0f;
}

void ACharacterControllerBase::RunStop()
{
	this->CurrentCharacter->GetCharacterMovement()->MaxWalkSpeed /= 2.0f;
}

void ACharacterControllerBase::PrimaryAttack()
{

	this->CurrentCharacter->PlayAnimMontage(this->AttackMontage);

	GetWorldTimerManager().SetTimer(Timerhandle_PrimaryAttack, this, &ACharacterControllerBase::PrimaryAttack_TimeElapsed, 0.2f);

}

void ACharacterControllerBase::PrimaryAttack_TimeElapsed()
{
	UE_LOG(LogTemp, Display, TEXT("Primary Attack Time Elapsed"));
	FVector HandLocation = this->CurrentCharacter->GetMesh()->GetSocketLocation("Muzzle_01");
	FRotator CharRotation = this->CurrentCharacter->GetActorRotation();
	FTransform SpawnTransform = FTransform(CharRotation, HandLocation);

	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;


	GetWorld()->SpawnActor<ASMagicProjectile>(ProjectileClass,
		SpawnTransform, SpawnParams);

	UE_LOG(LogTemp, Display, TEXT("Shooting"));
}

void ACharacterControllerBase::PrimaryInteract()
{
	UE_LOG(LogTemp, Display, TEXT("Primary Interact"));

	USInteractionComponent* InteractionComponent
		= this->CurrentCharacter->FindComponentByClass<USInteractionComponent>();

	if (InteractionComponent)
	{
		UE_LOG(LogTemp, Display, TEXT("Primary Interact component found"));
		InteractionComponent->PrimaryInteract();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("No Interaction Component Found"));
		
	}
}

void ACharacterControllerBase::Test()
{
	UE_LOG(LogTemp, Display, TEXT("Test Action"));
}