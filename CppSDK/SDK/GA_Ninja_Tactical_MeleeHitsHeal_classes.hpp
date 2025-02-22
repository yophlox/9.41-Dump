#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Ninja_Tactical_MeleeHitsHeal

#include "Basic.hpp"

#include "GAT_GenericTriggeredAbility_classes.hpp"
#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C
// 0x0058 (0x0A78 - 0x0A20)
class UGA_Ninja_Tactical_MeleeHitsHeal_C : public UGAT_GenericTriggeredAbility_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Ninja_Tactical_MeleeHitsHeal_C;  // 0x0A20(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           EventActivation;                                   // 0x0A28(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                           EventComplete;                                     // 0x0A30(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                 GE_Ninja_Tactical_MeleeHitsHeal;                   // 0x0A38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                  TC_Melee;                                          // 0x0A40(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MeleeCount;                                        // 0x0A60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastHitSwingTime;                                  // 0x0A64(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseHealValue;                                     // 0x0A68(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FinalHealValue;                                    // 0x0A6C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   DataRowName;                                       // 0x0A70(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void SetupAbility(class UAbilitySystemComponent* AbilitySystem);
	void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& Param_EventData);

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Ninja_Tactical_MeleeHitsHeal_C">();
	}
	static class UGA_Ninja_Tactical_MeleeHitsHeal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Ninja_Tactical_MeleeHitsHeal_C>();
	}
};
static_assert(alignof(UGA_Ninja_Tactical_MeleeHitsHeal_C) == 0x000008, "Wrong alignment on UGA_Ninja_Tactical_MeleeHitsHeal_C");
static_assert(sizeof(UGA_Ninja_Tactical_MeleeHitsHeal_C) == 0x000A78, "Wrong size on UGA_Ninja_Tactical_MeleeHitsHeal_C");
static_assert(offsetof(UGA_Ninja_Tactical_MeleeHitsHeal_C, UberGraphFrame_GA_Ninja_Tactical_MeleeHitsHeal_C) == 0x000A20, "Member 'UGA_Ninja_Tactical_MeleeHitsHeal_C::UberGraphFrame_GA_Ninja_Tactical_MeleeHitsHeal_C' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_Tactical_MeleeHitsHeal_C, EventActivation) == 0x000A28, "Member 'UGA_Ninja_Tactical_MeleeHitsHeal_C::EventActivation' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_Tactical_MeleeHitsHeal_C, EventComplete) == 0x000A30, "Member 'UGA_Ninja_Tactical_MeleeHitsHeal_C::EventComplete' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_Tactical_MeleeHitsHeal_C, GE_Ninja_Tactical_MeleeHitsHeal) == 0x000A38, "Member 'UGA_Ninja_Tactical_MeleeHitsHeal_C::GE_Ninja_Tactical_MeleeHitsHeal' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_Tactical_MeleeHitsHeal_C, TC_Melee) == 0x000A40, "Member 'UGA_Ninja_Tactical_MeleeHitsHeal_C::TC_Melee' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_Tactical_MeleeHitsHeal_C, MeleeCount) == 0x000A60, "Member 'UGA_Ninja_Tactical_MeleeHitsHeal_C::MeleeCount' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_Tactical_MeleeHitsHeal_C, LastHitSwingTime) == 0x000A64, "Member 'UGA_Ninja_Tactical_MeleeHitsHeal_C::LastHitSwingTime' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_Tactical_MeleeHitsHeal_C, BaseHealValue) == 0x000A68, "Member 'UGA_Ninja_Tactical_MeleeHitsHeal_C::BaseHealValue' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_Tactical_MeleeHitsHeal_C, FinalHealValue) == 0x000A6C, "Member 'UGA_Ninja_Tactical_MeleeHitsHeal_C::FinalHealValue' has a wrong offset!");
static_assert(offsetof(UGA_Ninja_Tactical_MeleeHitsHeal_C, DataRowName) == 0x000A70, "Member 'UGA_Ninja_Tactical_MeleeHitsHeal_C::DataRowName' has a wrong offset!");

}

