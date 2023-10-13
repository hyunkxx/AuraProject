#include "Character/AuraAnimInstance.h"
#include "Character/AuraCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

UAuraAnimInstance::UAuraAnimInstance()
{
}

void UAuraAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	AuraCharacter = Cast<AAuraCharacter>(TryGetPawnOwner());
	if (AuraCharacter)
	{
		AuraMovement = AuraCharacter->GetCharacterMovement();
	}
}

void UAuraAnimInstance::NativeUpdateAnimation(float TimeDelta)
{
	Super::NativeUpdateAnimation(TimeDelta);

	if (AuraMovement)
	{
		Speed = UKismetMathLibrary::VSizeXY(AuraMovement->Velocity);
	}
}
