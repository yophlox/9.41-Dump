#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerPawn_Generic_Parent

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
// 0x00E0 (0x2570 - 0x2490)
class APlayerPawn_Generic_Parent_C final : public AFortPlayerPawn
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2490(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UMaterialInterface*>             Default_Weapon_Materials;                          // 0x2498(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnBackpackMaterials;                             // 0x24A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnHatMaterials;                                  // 0x24B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnHeadMaterials;                                 // 0x24C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnBodyMaterials;                                 // 0x24D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnCharmMaterials;                                // 0x24E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnFaceMaterials;                                 // 0x24F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             PawnLegsMaterials;                                 // 0x2508(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>             PawnTorsoMaterials;                                // 0x2518(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UPostProcessComponent*                  PlayerPostProcessFX;                               // 0x2528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         SkeletalMeshes;                                    // 0x2530(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInstanceDynamic*>       PawnMaterials_ALL;                                 // 0x2540(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         WaterCounter;                                      // 0x2550(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2554[0x4];                                     // 0x2554(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CurrentWaterMeshActor;                             // 0x2558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsInWater;                                         // 0x2560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2561[0x3];                                     // 0x2561(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Time_when_you_ll_be_able_to_splash_again;          // 0x2564(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlayerPawn_Generic_Parent(int32 EntryPoint);
	void Entered_Water_Volume();
	void Player_Creates_a_Splash(const struct FTransform& NewTransform);
	void ReceiveBeginPlay();
	void ReinitializeWeaponMaterials();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerPawn_Generic_Parent_C">();
	}
	static class APlayerPawn_Generic_Parent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APlayerPawn_Generic_Parent_C>();
	}
};
static_assert(alignof(APlayerPawn_Generic_Parent_C) == 0x000010, "Wrong alignment on APlayerPawn_Generic_Parent_C");
static_assert(sizeof(APlayerPawn_Generic_Parent_C) == 0x002570, "Wrong size on APlayerPawn_Generic_Parent_C");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, UberGraphFrame) == 0x002490, "Member 'APlayerPawn_Generic_Parent_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, Default_Weapon_Materials) == 0x002498, "Member 'APlayerPawn_Generic_Parent_C::Default_Weapon_Materials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnBackpackMaterials) == 0x0024A8, "Member 'APlayerPawn_Generic_Parent_C::PawnBackpackMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnHatMaterials) == 0x0024B8, "Member 'APlayerPawn_Generic_Parent_C::PawnHatMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnHeadMaterials) == 0x0024C8, "Member 'APlayerPawn_Generic_Parent_C::PawnHeadMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnBodyMaterials) == 0x0024D8, "Member 'APlayerPawn_Generic_Parent_C::PawnBodyMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnCharmMaterials) == 0x0024E8, "Member 'APlayerPawn_Generic_Parent_C::PawnCharmMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnFaceMaterials) == 0x0024F8, "Member 'APlayerPawn_Generic_Parent_C::PawnFaceMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnLegsMaterials) == 0x002508, "Member 'APlayerPawn_Generic_Parent_C::PawnLegsMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnTorsoMaterials) == 0x002518, "Member 'APlayerPawn_Generic_Parent_C::PawnTorsoMaterials' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PlayerPostProcessFX) == 0x002528, "Member 'APlayerPawn_Generic_Parent_C::PlayerPostProcessFX' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, SkeletalMeshes) == 0x002530, "Member 'APlayerPawn_Generic_Parent_C::SkeletalMeshes' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, PawnMaterials_ALL) == 0x002540, "Member 'APlayerPawn_Generic_Parent_C::PawnMaterials_ALL' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, WaterCounter) == 0x002550, "Member 'APlayerPawn_Generic_Parent_C::WaterCounter' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, CurrentWaterMeshActor) == 0x002558, "Member 'APlayerPawn_Generic_Parent_C::CurrentWaterMeshActor' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, IsInWater) == 0x002560, "Member 'APlayerPawn_Generic_Parent_C::IsInWater' has a wrong offset!");
static_assert(offsetof(APlayerPawn_Generic_Parent_C, Time_when_you_ll_be_able_to_splash_again) == 0x002564, "Member 'APlayerPawn_Generic_Parent_C::Time_when_you_ll_be_able_to_splash_again' has a wrong offset!");

}
