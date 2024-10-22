#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Rift_Athena_Skydive

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GameplayAbilities_structs.hpp"


namespace SDK::Params
{

// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.ExecuteUbergraph_GA_Rift_Athena_Skydive
// 0x0220 (0x0220 - 0x0000)
struct GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_15[0x3];                                       // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	class UAbilityTask_PlayMontageAndWait*        CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityActorInfo              CallFunc_GetActorInfo_ReturnValue;                 // 0x0030(0x0040)(ContainsInstancedReference)
	class AFortPlayerPawn*                        K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;            // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsSkydiving_ReturnValue;                  // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_92[0x6];                                       // 0x0092(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue;         // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_VehicleIsInAir_ReturnValue;               // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInVehicle_ReturnValue;                  // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_1;              // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller_1;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPawnMovementComponent*                 CallFunc_GetMovementComponent_ReturnValue;         // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterMovementComponent*            K2Node_DynamicCast_AsCharacter_Movement_Component; // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_DB[0x1];                                       // 0x00DB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValueAtLevel_ReturnValue;              // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x00E0(0x0010)(ZeroConstructor, NoDestructor)
	float                                         CallFunc_GetValueAtLevel_ReturnValue_1;            // 0x00F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x00F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_F5[0x3];                                       // 0x00F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue; // 0x00F8(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle            CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1; // 0x0100(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetValueAtLevel_ReturnValue_2;            // 0x0108(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AActor* DestroyedActor)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x010C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_11C[0x4];                                      // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityTask_WaitMovementModeChange*    CallFunc_CreateWaitMovementModeChange_ReturnValue; // 0x0120(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_129[0x3];                                      // 0x0129(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetValueAtLevel_ReturnValue_3;            // 0x012C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x0130(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMovementMode                                 Temp_byte_Variable;                                // 0x0134(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_135[0x3];                                      // 0x0135(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue_1;       // 0x0138(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortCharacterVehicle_Ostrich*          K2Node_DynamicCast_AsFort_Character_Vehicle_Ostrich; // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_159[0x7];                                      // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AJackalVehicle_Athena_C*                K2Node_DynamicCast_AsJackal_Vehicle_Athena;        // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_5;                     // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_169[0x7];                                      // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AFortAthenaFerretVehicle*               K2Node_DynamicCast_AsFort_Athena_Ferret_Vehicle;   // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_6;                     // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0179(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_17A[0x6];                                      // 0x017A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_2;              // 0x0180(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller_2;          // 0x0188(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_7;                     // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_191[0x7];                                      // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IFortVehicleInterface> CallFunc_GetVehicleUInterface_ReturnValue_2;       // 0x0198(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsInVehicle_ReturnValue_1;                // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A9[0x7];                                      // 0x01A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalViewingPlayerController_ReturnValue; // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_6;                    // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue_3;              // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller_3;          // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_8;                     // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EMovementMode                                 K2Node_CustomEvent_NewMovementMode;                // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D2[0x2];                                      // 0x01D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EMovementMode NewMovementMode)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x01D4(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1E4[0x4];                                      // 0x01E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x01E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x01F0(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0200(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_7;                    // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_209[0x3];                                      // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x020C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x021C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive) == 0x000008, "Wrong alignment on GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive");
static_assert(sizeof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive) == 0x000220, "Wrong size on GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, EntryPoint) == 0x000000, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::EntryPoint' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, Temp_bool_IsClosed_Variable) == 0x000014, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue) == 0x000028, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetActorInfo_ReturnValue) == 0x000030, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_AsFort_Player_Pawn) == 0x000070, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_AsFort_Player_Pawn' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_bSuccess) == 0x000078, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsValid_ReturnValue) == 0x000079, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetController_ReturnValue) == 0x000080, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_AsPlayer_Controller) == 0x000088, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_bSuccess_1) == 0x000090, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsSkydiving_ReturnValue) == 0x000091, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsSkydiving_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetVehicleUInterface_ReturnValue) == 0x000098, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetVehicleUInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_VehicleIsInAir_ReturnValue) == 0x0000A8, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_VehicleIsInAir_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsValid_ReturnValue_1) == 0x0000A9, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsInVehicle_ReturnValue) == 0x0000AA, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsInVehicle_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsValid_ReturnValue_2) == 0x0000AB, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetController_ReturnValue_1) == 0x0000B0, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_AsPlayer_Controller_1) == 0x0000B8, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_AsPlayer_Controller_1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_bSuccess_2) == 0x0000C0, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetMovementComponent_ReturnValue) == 0x0000C8, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetMovementComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_AsCharacter_Movement_Component) == 0x0000D0, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_AsCharacter_Movement_Component' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_bSuccess_3) == 0x0000D8, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsValid_ReturnValue_3) == 0x0000D9, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000DA, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetValueAtLevel_ReturnValue) == 0x0000DC, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetValueAtLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000E0, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetValueAtLevel_ReturnValue_1) == 0x0000F0, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetValueAtLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0000F4, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue) == 0x0000F8, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1) == 0x000100, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetValueAtLevel_ReturnValue_2) == 0x000108, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetValueAtLevel_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_CreateDelegate_OutputDelegate_3) == 0x00010C, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_CreateWaitMovementModeChange_ReturnValue) == 0x000120, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_CreateWaitMovementModeChange_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsValid_ReturnValue_4) == 0x000128, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetValueAtLevel_ReturnValue_3) == 0x00012C, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetValueAtLevel_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_Add_FloatFloat_ReturnValue) == 0x000130, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, Temp_byte_Variable) == 0x000134, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetVehicleUInterface_ReturnValue_1) == 0x000138, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetVehicleUInterface_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_Conv_InterfaceToObject_ReturnValue) == 0x000148, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_Conv_InterfaceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_AsFort_Character_Vehicle_Ostrich) == 0x000150, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_AsFort_Character_Vehicle_Ostrich' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_bSuccess_4) == 0x000158, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_AsJackal_Vehicle_Athena) == 0x000160, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_AsJackal_Vehicle_Athena' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_bSuccess_5) == 0x000168, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_bSuccess_5' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_AsFort_Athena_Ferret_Vehicle) == 0x000170, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_AsFort_Athena_Ferret_Vehicle' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_bSuccess_6) == 0x000178, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_bSuccess_6' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsValid_ReturnValue_5) == 0x000179, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetController_ReturnValue_2) == 0x000180, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetController_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_AsPlayer_Controller_2) == 0x000188, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_AsPlayer_Controller_2' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_bSuccess_7) == 0x000190, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_bSuccess_7' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetVehicleUInterface_ReturnValue_2) == 0x000198, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetVehicleUInterface_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsInVehicle_ReturnValue_1) == 0x0001A8, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsInVehicle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetLocalViewingPlayerController_ReturnValue) == 0x0001B0, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetLocalViewingPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsValid_ReturnValue_6) == 0x0001B8, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsValid_ReturnValue_6' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_GetController_ReturnValue_3) == 0x0001C0, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_GetController_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_AsPlayer_Controller_3) == 0x0001C8, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_AsPlayer_Controller_3' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_DynamicCast_bSuccess_8) == 0x0001D0, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_DynamicCast_bSuccess_8' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_CustomEvent_NewMovementMode) == 0x0001D1, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_CustomEvent_NewMovementMode' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_CreateDelegate_OutputDelegate_4) == 0x0001D4, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_CustomEvent_DestroyedActor) == 0x0001E8, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_CreateDelegate_OutputDelegate_5) == 0x0001F0, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000200, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, CallFunc_IsValid_ReturnValue_7) == 0x000208, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::CallFunc_IsValid_ReturnValue_7' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, K2Node_CreateDelegate_OutputDelegate_6) == 0x00020C, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive, Temp_bool_Has_Been_Initd_Variable) == 0x00021C, "Member 'GA_Rift_Athena_Skydive_C_ExecuteUbergraph_GA_Rift_Athena_Skydive::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");

// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnDestroyed_Event_0
// 0x0008 (0x0008 - 0x0000)
struct GA_Rift_Athena_Skydive_C_OnDestroyed_Event_0 final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Rift_Athena_Skydive_C_OnDestroyed_Event_0) == 0x000008, "Wrong alignment on GA_Rift_Athena_Skydive_C_OnDestroyed_Event_0");
static_assert(sizeof(GA_Rift_Athena_Skydive_C_OnDestroyed_Event_0) == 0x000008, "Wrong size on GA_Rift_Athena_Skydive_C_OnDestroyed_Event_0");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_OnDestroyed_Event_0, DestroyedActor) == 0x000000, "Member 'GA_Rift_Athena_Skydive_C_OnDestroyed_Event_0::DestroyedActor' has a wrong offset!");

// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5
// 0x0001 (0x0001 - 0x0000)
struct GA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5 final
{
public:
	EMovementMode                                 NewMovementMode;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(GA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5) == 0x000001, "Wrong alignment on GA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5");
static_assert(sizeof(GA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5) == 0x000001, "Wrong size on GA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5, NewMovementMode) == 0x000000, "Member 'GA_Rift_Athena_Skydive_C_OnChange_16E0EB444DDAC48E8E9CC99B762C0DC5::NewMovementMode' has a wrong offset!");

// Function GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.K2_OnEndAbility
// 0x0028 (0x0028 - 0x0000)
struct GA_Rift_Athena_Skydive_C_K2_OnEndAbility final
{
public:
	bool                                          bWasCancelled;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      K2Node_DynamicCast_AsPlayer_Controller;            // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(GA_Rift_Athena_Skydive_C_K2_OnEndAbility) == 0x000008, "Wrong alignment on GA_Rift_Athena_Skydive_C_K2_OnEndAbility");
static_assert(sizeof(GA_Rift_Athena_Skydive_C_K2_OnEndAbility) == 0x000028, "Wrong size on GA_Rift_Athena_Skydive_C_K2_OnEndAbility");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_K2_OnEndAbility, bWasCancelled) == 0x000000, "Member 'GA_Rift_Athena_Skydive_C_K2_OnEndAbility::bWasCancelled' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_K2_OnEndAbility, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'GA_Rift_Athena_Skydive_C_K2_OnEndAbility::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_K2_OnEndAbility, CallFunc_GetController_ReturnValue) == 0x000008, "Member 'GA_Rift_Athena_Skydive_C_K2_OnEndAbility::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_K2_OnEndAbility, CallFunc_BooleanAND_ReturnValue) == 0x000010, "Member 'GA_Rift_Athena_Skydive_C_K2_OnEndAbility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_K2_OnEndAbility, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'GA_Rift_Athena_Skydive_C_K2_OnEndAbility::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_K2_OnEndAbility, K2Node_DynamicCast_AsPlayer_Controller) == 0x000018, "Member 'GA_Rift_Athena_Skydive_C_K2_OnEndAbility::K2Node_DynamicCast_AsPlayer_Controller' has a wrong offset!");
static_assert(offsetof(GA_Rift_Athena_Skydive_C_K2_OnEndAbility, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'GA_Rift_Athena_Skydive_C_K2_OnEndAbility::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

