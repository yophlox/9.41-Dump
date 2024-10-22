#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Athena_SCMachine_Passive

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.ExecuteUbergraph_GA_Athena_SCMachine_Passive
// 0x00F0 (0x00F0 - 0x0000)
struct GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateZone*                     K2Node_DynamicCast_AsFort_Game_State_Zone;         // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_GetActorTeam_ReturnValue;                 // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetTransform_ReturnValue;                 // 0x0020(0x0030)(IsPlainOldData, NoDestructor)
	class AFortPlayerController*                  CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0058(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0064(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0070(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7D[0x3];                                       // 0x007D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0080(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8C[0x4];                                       // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0090(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerState*                       K2Node_DynamicCast_AsFort_Player_State;            // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsRespawningAllowed_ReturnValue;          // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_D2[0x6];                                       // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABGA_Athena_SCMachine_Pickup_C*         CallFunc_FinishSpawningActor_ReturnValue;          // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Check_Resurrection_Active_bEnabled;       // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortPlayerPawnAthena*                  K2Node_CustomEvent_FortPlayerPawnAthena;           // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive) == 0x000010, "Wrong alignment on GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive");
static_assert(sizeof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive) == 0x0000F0, "Wrong size on GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, EntryPoint) == 0x000000, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_GetGameState_ReturnValue) == 0x000008, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, K2Node_DynamicCast_AsFort_Game_State_Zone) == 0x000010, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::K2Node_DynamicCast_AsFort_Game_State_Zone' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_GetActorTeam_ReturnValue) == 0x000019, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_GetActorTeam_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_GetTransform_ReturnValue) == 0x000020, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_GetTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_GetFortPlayerControllerFromActor_ReturnValue) == 0x000050, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_GetFortPlayerControllerFromActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_BreakTransform_Location) == 0x000058, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_BreakTransform_Rotation) == 0x000064, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_BreakTransform_Scale) == 0x000070, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_IsValid_ReturnValue) == 0x00007C, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_Add_VectorVector_ReturnValue) == 0x000080, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_MakeTransform_ReturnValue) == 0x000090, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000C0, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, K2Node_DynamicCast_AsFort_Player_State) == 0x0000C8, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::K2Node_DynamicCast_AsFort_Player_State' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, K2Node_DynamicCast_bSuccess_1) == 0x0000D0, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_IsRespawningAllowed_ReturnValue) == 0x0000D1, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_IsRespawningAllowed_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000D8, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, CallFunc_Check_Resurrection_Active_bEnabled) == 0x0000E0, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::CallFunc_Check_Resurrection_Active_bEnabled' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive, K2Node_CustomEvent_FortPlayerPawnAthena) == 0x0000E8, "Member 'GA_Athena_SCMachine_Passive_C_ExecuteUbergraph_GA_Athena_SCMachine_Passive::K2Node_CustomEvent_FortPlayerPawnAthena' has a wrong offset!");

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.HandleOnFortPlayerDied
// 0x0008 (0x0008 - 0x0000)
struct GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied final
{
public:
	class AFortPlayerPawnAthena*                  FortPlayerPawnAthena;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied) == 0x000008, "Wrong alignment on GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied");
static_assert(sizeof(GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied) == 0x000008, "Wrong size on GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied, FortPlayerPawnAthena) == 0x000000, "Member 'GA_Athena_SCMachine_Passive_C_HandleOnFortPlayerDied::FortPlayerPawnAthena' has a wrong offset!");

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.SaveOutPlayer
// 0x0018 (0x0018 - 0x0000)
struct GA_Athena_SCMachine_Passive_C_SaveOutPlayer final
{
public:
	class AActor*                                 CallFunc_GetAvatarActorFromActorInfo_ReturnValue;  // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawnAthena*                  K2Node_DynamicCast_AsFort_Player_Pawn_Athena;      // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_SCMachine_Passive_C_SaveOutPlayer) == 0x000008, "Wrong alignment on GA_Athena_SCMachine_Passive_C_SaveOutPlayer");
static_assert(sizeof(GA_Athena_SCMachine_Passive_C_SaveOutPlayer) == 0x000018, "Wrong size on GA_Athena_SCMachine_Passive_C_SaveOutPlayer");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_SaveOutPlayer, CallFunc_GetAvatarActorFromActorInfo_ReturnValue) == 0x000000, "Member 'GA_Athena_SCMachine_Passive_C_SaveOutPlayer::CallFunc_GetAvatarActorFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_SaveOutPlayer, K2Node_DynamicCast_AsFort_Player_Pawn_Athena) == 0x000008, "Member 'GA_Athena_SCMachine_Passive_C_SaveOutPlayer::K2Node_DynamicCast_AsFort_Player_Pawn_Athena' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_SaveOutPlayer, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'GA_Athena_SCMachine_Passive_C_SaveOutPlayer::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C.Check Resurrection Active
// 0x0028 (0x0028 - 0x0000)
struct GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active final
{
public:
	bool                                          bEnabled;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          PlaylistValid;                                     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   TestPlaylist;                                      // 0x0004(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateAthena*                   K2Node_DynamicCast_AsFort_Game_State_Athena;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsResurrectionEnabled_ReturnValue;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active) == 0x000008, "Wrong alignment on GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active");
static_assert(sizeof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active) == 0x000028, "Wrong size on GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active, bEnabled) == 0x000000, "Member 'GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active::bEnabled' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active, PlaylistValid) == 0x000001, "Member 'GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active::PlaylistValid' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active, TestPlaylist) == 0x000004, "Member 'GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active::TestPlaylist' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active, CallFunc_GetGameState_ReturnValue) == 0x000010, "Member 'GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active, K2Node_DynamicCast_AsFort_Game_State_Athena) == 0x000018, "Member 'GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active::K2Node_DynamicCast_AsFort_Game_State_Athena' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active, CallFunc_IsResurrectionEnabled_ReturnValue) == 0x000021, "Member 'GA_Athena_SCMachine_Passive_C_Check_Resurrection_Active::CallFunc_IsResurrectionEnabled_ReturnValue' has a wrong offset!");

}

