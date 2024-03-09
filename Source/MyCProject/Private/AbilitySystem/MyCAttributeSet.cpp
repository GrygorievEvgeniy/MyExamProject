// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MyCAttributeSet.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Net/UnrealNetwork.h"

UMyCAttributeSet::UMyCAttributeSet()

{
	Health = 100.0f;
	MaxHealth = 100.0f;
}

void UMyCAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);
}

void UMyCAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
}


void UMyCAttributeSet::OnRep_CurrentHealth(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMyCAttributeSet, Health, OldValue);
}

void UMyCAttributeSet::OnRep_MaximumHealth(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMyCAttributeSet, MaxHealth, OldValue);
}