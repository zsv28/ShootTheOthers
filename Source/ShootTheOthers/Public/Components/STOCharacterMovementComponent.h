// ShootTheOthers Game, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "STOCharacterMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTTHEOTHERS_API USTOCharacterMovementComponent : public UCharacterMovementComponent
{
	GENERATED_BODY()

public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement", meta = (ClampMin = "1.5", ClampMax = "5.0"))
    float RunModifier = 2.0f;

    virtual float GetMaxSpeed() const override;
};
