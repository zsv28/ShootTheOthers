// ShootTheOthers Game, All Rights Reserved.


#include "Player/STOBaseCharacter.h"
#include "Camera/CameraComponent.h"
#include <Components/InputComponent.h>
#include <GameFramework/SpringArmComponent.h>


// Sets default values
ASTOBaseCharacter::ASTOBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("SpringArmComponent");
    SpringArmComponent->SetupAttachment(GetRootComponent());
    SpringArmComponent->bUsePawnControlRotation = true;

    CameraComponent = CreateDefaultSubobject<UCameraComponent>("CameraComponent");
    CameraComponent->SetupAttachment(SpringArmComponent);
    
}

// Called when the game starts or when spawned
void ASTOBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTOBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASTOBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveForward", this, &ASTOBaseCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ASTOBaseCharacter::MoveRight);
    PlayerInputComponent->BindAxis("LookUp", this, &ASTOBaseCharacter::AddControllerPitchInput);
    PlayerInputComponent->BindAxis("TurnAround", this, &ASTOBaseCharacter::AddControllerYawInput);
}

void ASTOBaseCharacter::MoveForward(float Amount) 
{
    AddMovementInput(GetActorForwardVector(), Amount);
}

void ASTOBaseCharacter::MoveRight(float Amount) 
{
    AddMovementInput(GetActorRightVector(), Amount);
}


