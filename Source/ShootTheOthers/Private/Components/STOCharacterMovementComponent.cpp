// ShootTheOthers Game, All Rights Reserved.


#include "Components/STOCharacterMovementComponent.h"
#include "STOBaseCharacter.h"

float USTOCharacterMovementComponent::GetMaxSpeed() const
{
    const float MaxSpeed = Super::GetMaxSpeed();
    const ASTOBaseCharacter* Player = Cast<ASTOBaseCharacter>(GetPawnOwner());

    return Player && Player->IsRunning() ? MaxSpeed * RunModifier : MaxSpeed;
}