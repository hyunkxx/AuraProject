#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AuraAnimInstance.generated.h"

class AAuraCharacter;
class UCharacterMovementComponent;

UCLASS()
class AURA_API UAuraAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	UAuraAnimInstance();

public:
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float TimeDelta) override;

private:
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess))
	AAuraCharacter* AuraCharacter;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess))
	UCharacterMovementComponent* AuraMovement;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess))
	float Speed;

};
