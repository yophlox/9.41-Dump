#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Athena_Environmental_ZipLine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "FortniteGame_structs.hpp"
#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C
// 0x0120 (0x0888 - 0x0768)
class ABP_Athena_Environmental_ZipLine_C final : public AFortAthenaZipline
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0768(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                      InteractCapsule;                                   // 0x0770(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Line;                                           // 0x0778(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      OverlapCapsule;                                    // 0x0780(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Zipline;                                           // 0x0788(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0790(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                                StartLocation;                                     // 0x0798(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                TargetLocation;                                    // 0x07A4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                MotorOffset;                                       // 0x07B0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LineThickness;                                     // 0x07BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LineCollisionThickness;                            // 0x07C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PlayerOffsetToLine;                                // 0x07C4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 PoleA;                                             // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                 PoleB;                                             // 0x07D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FCurveTableRowHandle                   SpeedCTHandle;                                     // 0x07E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                   ZipLineEnabledCTHandle;                            // 0x07F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                   LineCollisionRadiusCTHandle;                       // 0x0800(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FCurveTableRowHandle                   BuildingCheckBoxExtentsCTHandle;                   // 0x0810(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   BackendName;                                       // 0x0820(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*               QuestItem;                                         // 0x0828(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    ObjStat;                                           // 0x0830(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                         LineExtendBeyondPoleLength;                        // 0x0840(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PoleASocketLocation;                               // 0x0844(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PoleBSocketLocation;                               // 0x0850(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_85C[0x4];                                      // 0x085C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawn*                        PlayerPawn;                                        // 0x0860(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerPawn*>                PlayersPendingMovementModeChange;                  // 0x0868(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         CollisionHeightAboveLine;                          // 0x0878(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                PlayerOffsetToLine_Hoverboard;                     // 0x087C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Athena_Environmental_ZipLine(int32 EntryPoint);
	void HandleOnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void HandleOnBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void HandleOnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void HandleOnMapInfoInitialized();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void StartZipLining(class AFortPlayerPawn* FortPlayerPawn);
	void GetCharacterCustomMovementMode(class APawn* Character, EFortCustomMovement* CustomMovementMode, EMovementMode* MovementMode);
	void QuestCheckForUse(class AFortPlayerController* FortPlayerController);
	void CheckForBuildings(class AFortPlayerPawn* Player, bool* BuildingNearby_);
	void HandleEnterZipline(class AFortPlayerPawn* InPlayerPawn);
	void Setup_Overlap_Bindings();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Athena_Environmental_ZipLine_C">();
	}
	static class ABP_Athena_Environmental_ZipLine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Athena_Environmental_ZipLine_C>();
	}
};
static_assert(alignof(ABP_Athena_Environmental_ZipLine_C) == 0x000008, "Wrong alignment on ABP_Athena_Environmental_ZipLine_C");
static_assert(sizeof(ABP_Athena_Environmental_ZipLine_C) == 0x000888, "Wrong size on ABP_Athena_Environmental_ZipLine_C");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, UberGraphFrame) == 0x000768, "Member 'ABP_Athena_Environmental_ZipLine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, InteractCapsule) == 0x000770, "Member 'ABP_Athena_Environmental_ZipLine_C::InteractCapsule' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, SM_Line) == 0x000778, "Member 'ABP_Athena_Environmental_ZipLine_C::SM_Line' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, OverlapCapsule) == 0x000780, "Member 'ABP_Athena_Environmental_ZipLine_C::OverlapCapsule' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, Zipline) == 0x000788, "Member 'ABP_Athena_Environmental_ZipLine_C::Zipline' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, Scene) == 0x000790, "Member 'ABP_Athena_Environmental_ZipLine_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, StartLocation) == 0x000798, "Member 'ABP_Athena_Environmental_ZipLine_C::StartLocation' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, TargetLocation) == 0x0007A4, "Member 'ABP_Athena_Environmental_ZipLine_C::TargetLocation' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, MotorOffset) == 0x0007B0, "Member 'ABP_Athena_Environmental_ZipLine_C::MotorOffset' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, LineThickness) == 0x0007BC, "Member 'ABP_Athena_Environmental_ZipLine_C::LineThickness' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, LineCollisionThickness) == 0x0007C0, "Member 'ABP_Athena_Environmental_ZipLine_C::LineCollisionThickness' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, PlayerOffsetToLine) == 0x0007C4, "Member 'ABP_Athena_Environmental_ZipLine_C::PlayerOffsetToLine' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, PoleA) == 0x0007D0, "Member 'ABP_Athena_Environmental_ZipLine_C::PoleA' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, PoleB) == 0x0007D8, "Member 'ABP_Athena_Environmental_ZipLine_C::PoleB' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, SpeedCTHandle) == 0x0007E0, "Member 'ABP_Athena_Environmental_ZipLine_C::SpeedCTHandle' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, ZipLineEnabledCTHandle) == 0x0007F0, "Member 'ABP_Athena_Environmental_ZipLine_C::ZipLineEnabledCTHandle' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, LineCollisionRadiusCTHandle) == 0x000800, "Member 'ABP_Athena_Environmental_ZipLine_C::LineCollisionRadiusCTHandle' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, BuildingCheckBoxExtentsCTHandle) == 0x000810, "Member 'ABP_Athena_Environmental_ZipLine_C::BuildingCheckBoxExtentsCTHandle' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, BackendName) == 0x000820, "Member 'ABP_Athena_Environmental_ZipLine_C::BackendName' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, QuestItem) == 0x000828, "Member 'ABP_Athena_Environmental_ZipLine_C::QuestItem' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, ObjStat) == 0x000830, "Member 'ABP_Athena_Environmental_ZipLine_C::ObjStat' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, LineExtendBeyondPoleLength) == 0x000840, "Member 'ABP_Athena_Environmental_ZipLine_C::LineExtendBeyondPoleLength' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, PoleASocketLocation) == 0x000844, "Member 'ABP_Athena_Environmental_ZipLine_C::PoleASocketLocation' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, PoleBSocketLocation) == 0x000850, "Member 'ABP_Athena_Environmental_ZipLine_C::PoleBSocketLocation' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, PlayerPawn) == 0x000860, "Member 'ABP_Athena_Environmental_ZipLine_C::PlayerPawn' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, PlayersPendingMovementModeChange) == 0x000868, "Member 'ABP_Athena_Environmental_ZipLine_C::PlayersPendingMovementModeChange' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, CollisionHeightAboveLine) == 0x000878, "Member 'ABP_Athena_Environmental_ZipLine_C::CollisionHeightAboveLine' has a wrong offset!");
static_assert(offsetof(ABP_Athena_Environmental_ZipLine_C, PlayerOffsetToLine_Hoverboard) == 0x00087C, "Member 'ABP_Athena_Environmental_ZipLine_C::PlayerOffsetToLine_Hoverboard' has a wrong offset!");

}

