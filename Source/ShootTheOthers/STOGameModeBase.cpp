// ShootTheOthers Game, All Rights Reserved.


#include "STOGameModeBase.h"
#include "Player/STOBaseCharacter.h"
#include "Player/STOPlayerController.h"

ASTOGameModeBase::ASTOGameModeBase() 
{
    DefaultPawnClass = ASTOBaseCharacter::StaticClass();
    PlayerControllerClass = ASTOPlayerController::StaticClass();

}
