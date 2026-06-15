#include "Project4GameMode.h"
#include "ProjectPlayerController.h"
#include "ProjectPawn.h"

AProject4GameMode::AProject4GameMode()
{
	DefaultPawnClass = AProjectPawn::StaticClass();
	PlayerControllerClass = AProjectPlayerController::StaticClass();
}
