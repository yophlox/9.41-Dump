#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_TrapBuildGeneric

#include "Basic.hpp"

#include "GameplayTags_structs.hpp"
#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_TrapBuildGeneric.GA_TrapBuildGeneric_C
// 0x0010 (0x0950 - 0x0940)
class UGA_TrapBuildGeneric_C final : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0940(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                           PlacedCue;                                         // 0x0948(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_TrapBuildGeneric(int32 EntryPoint);
	void K2_ActivateAbility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_TrapBuildGeneric_C">();
	}
	static class UGA_TrapBuildGeneric_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_TrapBuildGeneric_C>();
	}
};
static_assert(alignof(UGA_TrapBuildGeneric_C) == 0x000008, "Wrong alignment on UGA_TrapBuildGeneric_C");
static_assert(sizeof(UGA_TrapBuildGeneric_C) == 0x000950, "Wrong size on UGA_TrapBuildGeneric_C");
static_assert(offsetof(UGA_TrapBuildGeneric_C, UberGraphFrame) == 0x000940, "Member 'UGA_TrapBuildGeneric_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UGA_TrapBuildGeneric_C, PlacedCue) == 0x000948, "Member 'UGA_TrapBuildGeneric_C::PlacedCue' has a wrong offset!");

}
