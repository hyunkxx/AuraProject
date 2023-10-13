#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EnemyAnimInstance.generated.h"

class AAuraEnemy;
class UCharacterMovementComponent;

UCLASS()
class AURA_API UEnemyAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UEnemyAnimInstance();

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float TimeDelta) override;

private:
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess))
	AAuraEnemy* AuraEnemy;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess))
	UCharacterMovementComponent* EnemyMovement;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess))
	float Speed;

};
