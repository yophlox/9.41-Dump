#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SprayDecal

#include "Basic.hpp"

#include "BP_SprayDecal_classes.hpp"
#include "BP_SprayDecal_parameters.hpp"


namespace SDK
{

// Function BP_SprayDecal.BP_SprayDecal_C.ExecuteUbergraph_BP_SprayDecal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SprayDecal_C::ExecuteUbergraph_BP_SprayDecal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "ExecuteUbergraph_BP_SprayDecal");

	Params::BP_SprayDecal_C_ExecuteUbergraph_BP_SprayDecal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SprayDecal.BP_SprayDecal_C.OnWallDestoryed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SprayDecal_C::OnWallDestoryed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnWallDestoryed");

	Params::BP_SprayDecal_C_OnWallDestoryed Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SprayDecal.BP_SprayDecal_C.PostLevelSaveSpawnCleanup
// (Event, Public, BlueprintEvent)

void ABP_SprayDecal_C::PostLevelSaveSpawnCleanup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "PostLevelSaveSpawnCleanup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SprayDecal.BP_SprayDecal_C.OnNearbyTrapPlaced
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingTrap*                    Trap                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bDetatched                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SprayDecal_C::OnNearbyTrapPlaced(class ABuildingTrap* Trap, bool bDetatched)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnNearbyTrapPlaced");

	Params::BP_SprayDecal_C_OnNearbyTrapPlaced Parms{};

	Parms.Trap = Trap;
	Parms.bDetatched = bDetatched;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SprayDecal.BP_SprayDecal_C.OnBounceOccurs
// (Event, Public, BlueprintEvent)

void ABP_SprayDecal_C::OnBounceOccurs()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnBounceOccurs");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SprayDecal.BP_SprayDecal_C.OnNearbyWallDamaged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              FHitComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SprayDecal_C::OnNearbyWallDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnNearbyWallDamaged");

	Params::BP_SprayDecal_C_OnNearbyWallDamaged Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SprayDecal.BP_SprayDecal_C.OnNearbyWallDied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                      InstigatedBy                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              FHitComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             BoneName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Momentum                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SprayDecal_C::OnNearbyWallDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnNearbyWallDied");

	Params::BP_SprayDecal_C_OnNearbyWallDied Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = std::move(HitLocation);
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = std::move(Momentum);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SprayDecal.BP_SprayDecal_C.StartSprayFadeOutDueToNewPlacement
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SprayDecal_C::StartSprayFadeOutDueToNewPlacement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "StartSprayFadeOutDueToNewPlacement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SprayDecal.BP_SprayDecal_C.OnSprayInfoReady
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ABP_SprayDecal_C::OnSprayInfoReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnSprayInfoReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SprayDecal.BP_SprayDecal_C.OnSprayAssetReplicatedDown
// (BlueprintCallable, BlueprintEvent)

void ABP_SprayDecal_C::OnSprayAssetReplicatedDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnSprayAssetReplicatedDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SprayDecal.BP_SprayDecal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SprayDecal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SprayDecal.BP_SprayDecal_C.OnReady_B252FED346EAB98D54D786BD15C1CC7B
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortGameStateAthena*             GameState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*                    Playlist                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer            PlaylistContextTags                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_SprayDecal_C::OnReady_B252FED346EAB98D54D786BD15C1CC7B(class AFortGameStateAthena* GameState, const class UFortPlaylist* Playlist, const struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnReady_B252FED346EAB98D54D786BD15C1CC7B");

	Params::BP_SprayDecal_C_OnReady_B252FED346EAB98D54D786BD15C1CC7B Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = std::move(PlaylistContextTags);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SprayDecal.BP_SprayDecal_C.OnLoaded_F925FF00475A018319C73E9FB1540BC6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SprayDecal_C::OnLoaded_F925FF00475A018319C73E9FB1540BC6(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnLoaded_F925FF00475A018319C73E9FB1540BC6");

	Params::BP_SprayDecal_C_OnLoaded_F925FF00475A018319C73E9FB1540BC6 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SprayDecal.BP_SprayDecal_C.OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SprayDecal_C::OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA");

	Params::BP_SprayDecal_C_OnLoaded_F8AB699B4D8DD22B5A0409B608B7D6FA Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SprayDecal.BP_SprayDecal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SprayDecal_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SprayDecal.BP_SprayDecal_C.CreateDecalComponents
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SprayDecal_C::CreateDecalComponents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "CreateDecalComponents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SprayDecal.BP_SprayDecal_C.GetInstigatorPlayerId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FUniqueNetIdRepl                 ReturnValue                                            (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

struct FUniqueNetIdRepl ABP_SprayDecal_C::GetInstigatorPlayerId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "GetInstigatorPlayerId");

	Params::BP_SprayDecal_C_GetInstigatorPlayerId Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SprayDecal.BP_SprayDecal_C.OnRep_DecalFadeoutTime
// (BlueprintCallable, BlueprintEvent)

void ABP_SprayDecal_C::OnRep_DecalFadeoutTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "OnRep_DecalFadeoutTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SprayDecal.BP_SprayDecal_C.UnbindAndClearNearbyBuildingActors
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SprayDecal_C::UnbindAndClearNearbyBuildingActors()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "UnbindAndClearNearbyBuildingActors");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SprayDecal.BP_SprayDecal_C.FindNearbyBuildingActorsAndBindDelegates
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SprayDecal_C::FindNearbyBuildingActorsAndBindDelegates()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "FindNearbyBuildingActorsAndBindDelegates");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SprayDecal.BP_SprayDecal_C.AddBoxCollisionForCreative
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SprayDecal_C::AddBoxCollisionForCreative()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SprayDecal_C", "AddBoxCollisionForCreative");

	UObject::ProcessEvent(Func, nullptr);
}

}
