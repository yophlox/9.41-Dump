#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DuplicateResOutMesh

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DuplicateResOutMesh.DuplicateResOutMesh_C
// 0x0160 (0x03A0 - 0x0240)
class ADuplicateResOutMesh_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0240(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0248(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1; // 0x0250(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1; // 0x0254(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1; // 0x0258(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1; // 0x025C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25D[0x3];                                      // 0x025D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     CharacterSpawnInTimeline;                          // 0x0260(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 Skeletal_Mesh_Duplicate;                           // 0x0268(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Gun_True;                                          // 0x0270(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_271[0x3];                                      // 0x0271(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         BoundsRadius;                                      // 0x0274(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NewVar_0;                                          // 0x0278(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_27C[0x4];                                      // 0x027C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInstanceDynamic*>       MIDArray;                                          // 0x0280(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                                World_location_for_the_dissolve_location;          // 0x0290(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29C[0x4];                                      // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstanceDynamic*               Current_MID;                                       // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Head_Space;                                        // 0x02A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Leg_Space;                                         // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   Spawn_Light;                                       // 0x02B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Light_intensity;                                   // 0x02B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Number_of_Base_skeletal_mesh_materials;            // 0x02BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FirstPassComplete;                                 // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C4[0x4];                                      // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class USkeletalMeshComponent*>         ExternalSkeletalMeshComponent;                     // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	uint8                                         Pad_2D8[0x8];                                      // 0x02D8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             Box_Local_Transform;                               // 0x02E0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                         Timeline_Play_Length;                              // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          TeleportOut_;                                      // 0x0314(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_315[0x3];                                      // 0x0315(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 ExternalActor;                                     // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>         InternalSkeletalMeshComponents;                    // 0x0320(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         CurrentMeshMidIndex;                               // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_334[0x4];                                      // 0x0334(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMeshComponent*                 External_Base_Mesh_Component;                      // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       ExternalMidArray;                                  // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn)
	class USkeletalMeshComponent*                 ExternalRootMeshComponent;                         // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>             ListOfMaterialsExemptFromReparenting;              // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                          MaterialParentIsValid;                             // 0x0368(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_369[0x7];                                      // 0x0369(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     CurrentParentMaterial;                             // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                     CurrentMaterial;                                   // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInstanceDynamic*>       Original_MIDs;                                     // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int32                                         Increment_End;                                     // 0x0390(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DuplicateResOutMesh(int32 EntryPoint);
	void UpdateExternalParameters(const TArray<class UMaterialInstanceDynamic*>& MID_Array, const TArray<class USkeletalMeshComponent*>& External_Mesh_Component_Array);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void CharacterSpawnInTimeline__UpdateFunc();
	void CharacterSpawnInTimeline__FinishedFunc();
	void InitializeExternalSkeletalMeshArray();
	void Find_Bounds();
	void Spawn__Light();
	void Make_and_slave_internal_meshes();
	void Make_internal_mids_and_append_external_and_intermal_mids_to_mid_array();
	void ProcessSpawnInTimeline(float ZHeight, float LightIntensity);
	void External_Mesh_Masked_Setup(TArray<class USkeletalMeshComponent*>& External_Mesh_Component_Array, TArray<class UMaterialInstanceDynamic*>* Corrected_Mid_Array);
	void Store_Original_Material_for_Teleport_In();
	void RestoreInProgressRes();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DuplicateResOutMesh_C">();
	}
	static class ADuplicateResOutMesh_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADuplicateResOutMesh_C>();
	}
};
static_assert(alignof(ADuplicateResOutMesh_C) == 0x000010, "Wrong alignment on ADuplicateResOutMesh_C");
static_assert(sizeof(ADuplicateResOutMesh_C) == 0x0003A0, "Wrong size on ADuplicateResOutMesh_C");
static_assert(offsetof(ADuplicateResOutMesh_C, UberGraphFrame) == 0x000240, "Member 'ADuplicateResOutMesh_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, DefaultSceneRoot) == 0x000248, "Member 'ADuplicateResOutMesh_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1) == 0x000250, "Member 'ADuplicateResOutMesh_C::CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1) == 0x000254, "Member 'ADuplicateResOutMesh_C::CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1) == 0x000258, "Member 'ADuplicateResOutMesh_C::CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1) == 0x00025C, "Member 'ADuplicateResOutMesh_C::CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CharacterSpawnInTimeline) == 0x000260, "Member 'ADuplicateResOutMesh_C::CharacterSpawnInTimeline' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Skeletal_Mesh_Duplicate) == 0x000268, "Member 'ADuplicateResOutMesh_C::Skeletal_Mesh_Duplicate' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Gun_True) == 0x000270, "Member 'ADuplicateResOutMesh_C::Gun_True' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, BoundsRadius) == 0x000274, "Member 'ADuplicateResOutMesh_C::BoundsRadius' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, NewVar_0) == 0x000278, "Member 'ADuplicateResOutMesh_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, MIDArray) == 0x000280, "Member 'ADuplicateResOutMesh_C::MIDArray' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, World_location_for_the_dissolve_location) == 0x000290, "Member 'ADuplicateResOutMesh_C::World_location_for_the_dissolve_location' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Current_MID) == 0x0002A0, "Member 'ADuplicateResOutMesh_C::Current_MID' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Head_Space) == 0x0002A8, "Member 'ADuplicateResOutMesh_C::Head_Space' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Leg_Space) == 0x0002AC, "Member 'ADuplicateResOutMesh_C::Leg_Space' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Spawn_Light) == 0x0002B0, "Member 'ADuplicateResOutMesh_C::Spawn_Light' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Light_intensity) == 0x0002B8, "Member 'ADuplicateResOutMesh_C::Light_intensity' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Number_of_Base_skeletal_mesh_materials) == 0x0002BC, "Member 'ADuplicateResOutMesh_C::Number_of_Base_skeletal_mesh_materials' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, FirstPassComplete) == 0x0002C0, "Member 'ADuplicateResOutMesh_C::FirstPassComplete' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, ExternalSkeletalMeshComponent) == 0x0002C8, "Member 'ADuplicateResOutMesh_C::ExternalSkeletalMeshComponent' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Box_Local_Transform) == 0x0002E0, "Member 'ADuplicateResOutMesh_C::Box_Local_Transform' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Timeline_Play_Length) == 0x000310, "Member 'ADuplicateResOutMesh_C::Timeline_Play_Length' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, TeleportOut_) == 0x000314, "Member 'ADuplicateResOutMesh_C::TeleportOut_' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, ExternalActor) == 0x000318, "Member 'ADuplicateResOutMesh_C::ExternalActor' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, InternalSkeletalMeshComponents) == 0x000320, "Member 'ADuplicateResOutMesh_C::InternalSkeletalMeshComponents' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CurrentMeshMidIndex) == 0x000330, "Member 'ADuplicateResOutMesh_C::CurrentMeshMidIndex' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, External_Base_Mesh_Component) == 0x000338, "Member 'ADuplicateResOutMesh_C::External_Base_Mesh_Component' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, ExternalMidArray) == 0x000340, "Member 'ADuplicateResOutMesh_C::ExternalMidArray' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, ExternalRootMeshComponent) == 0x000350, "Member 'ADuplicateResOutMesh_C::ExternalRootMeshComponent' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, ListOfMaterialsExemptFromReparenting) == 0x000358, "Member 'ADuplicateResOutMesh_C::ListOfMaterialsExemptFromReparenting' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, MaterialParentIsValid) == 0x000368, "Member 'ADuplicateResOutMesh_C::MaterialParentIsValid' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CurrentParentMaterial) == 0x000370, "Member 'ADuplicateResOutMesh_C::CurrentParentMaterial' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, CurrentMaterial) == 0x000378, "Member 'ADuplicateResOutMesh_C::CurrentMaterial' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Original_MIDs) == 0x000380, "Member 'ADuplicateResOutMesh_C::Original_MIDs' has a wrong offset!");
static_assert(offsetof(ADuplicateResOutMesh_C, Increment_End) == 0x000390, "Member 'ADuplicateResOutMesh_C::Increment_End' has a wrong offset!");

}
