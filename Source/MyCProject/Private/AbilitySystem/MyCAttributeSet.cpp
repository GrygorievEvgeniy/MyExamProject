// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/MyCAttributeSet.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Net/UnrealNetwork.h"

UMyCAttributeSet::UMyCAttributeSet()

{
	Health = 100.0f;
	MaxHealth = 100.0f;
}

void UMyCAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION_NOTIFY(UMyCAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always);	
	DOREPLIFETIME_CONDITION_NOTIFY(UMyCAttributeSet, Health, COND_None, REPNOTIFY_Always);
}

void UMyCAttributeSet::OnRep_Health(const FGameplayAttributeData& OldHealth) const
{
	
}
void UMyCAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth) const
{
	
}
