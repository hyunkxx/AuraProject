#include "Character/EnemyAnimInstance.h"
#include "Character/AuraEnemy.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"

UEnemyAnimInstance::UEnemyAnimInstance()
{
}

void UEnemyAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	AuraEnemy = Cast<AAuraEnemy>(TryGetPawnOwner());
	if (AuraEnemy)
	{
		EnemyMovement = AuraEnemy->GetCharacterMovement();
	}

}

void UEnemyAnimInstance::NativeUpdateAnimation(float TimeDelta)
{
	Super::NativeUpdateAnimation(TimeDelta);

	if (EnemyMovement)
	{
		Speed = UKismetMathLibrary::VSizeXY(EnemyMovement->Velocity);
	}

}
