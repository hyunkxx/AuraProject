#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Interface/EnemyInterface.h"
#include "AuraPlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

struct FInputActionValue;

UCLASS()
class AURA_API AAuraPlayerController 
	: public APlayerController
{
	GENERATED_BODY()
	
public:
	AAuraPlayerController();
	
public:
	virtual void PlayerTick(float TimeDelta) override;

protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

private:
	void Move(const FInputActionValue& InputActionValue);
	void CursorTrace();

private:
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext* AuraContext;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MoveAction;

	IEnemyInterface* LastActor;
	IEnemyInterface* ThisActor;

};
