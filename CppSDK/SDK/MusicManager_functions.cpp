#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MusicManager

#include "Basic.hpp"

#include "MusicManager_classes.hpp"
#include "MusicManager_parameters.hpp"


namespace SDK
{

// Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::ExecuteUbergraph_MusicManager(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "ExecuteUbergraph_MusicManager");

	Params::MusicManager_C_ExecuteUbergraph_MusicManager Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.Demeter Mission
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Is_Demeter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMusicManager_C::Demeter_Mission(bool Param_Is_Demeter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Demeter Mission");

	Params::MusicManager_C_Demeter_Mission Parms{};

	Parms.Param_Is_Demeter = Param_Is_Demeter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.Get Valid Mission Timer Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Is_Valid_Mission_Timer                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMusicManager_C::Get_Valid_Mission_Timer_Update(bool Is_Valid_Mission_Timer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Get Valid Mission Timer Update");

	Params::MusicManager_C_Get_Valid_Mission_Timer_Update Parms{};

	Parms.Is_Valid_Mission_Timer = Is_Valid_Mission_Timer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.Spawn from being down
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::Spawn_from_being_down()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Spawn from being down");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MusicManager.MusicManager_C.OnPlayerSpawned
// (Event, Public, BlueprintEvent)

void AMusicManager_C::OnPlayerSpawned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "OnPlayerSpawned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MusicManager.MusicManager_C.OnThresholdChange
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortCombatThresholds                   OldThreshold                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortCombatThresholds                   NewThreshold                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::OnThresholdChange(EFortCombatThresholds OldThreshold, EFortCombatThresholds NewThreshold)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "OnThresholdChange");

	Params::MusicManager_C_OnThresholdChange Parms{};

	Parms.OldThreshold = OldThreshold;
	Parms.NewThreshold = NewThreshold;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.Stop Mission Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*                  Param_Mission_Music                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Stop_Mission_Music(class UAudioComponent* Param_Mission_Music)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Stop Mission Music");

	Params::MusicManager_C_Stop_Mission_Music Parms{};

	Parms.Param_Mission_Music = Param_Mission_Music;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.Play Mission Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       Sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Play_Mission_Music(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Play Mission Music");

	Params::MusicManager_C_Play_Mission_Music Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.Play Countdown Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Counter                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Play_Countdown_Music(float Counter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Play Countdown Music");

	Params::MusicManager_C_Play_Countdown_Music Parms{};

	Parms.Counter = Counter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.OnPlayerDowned
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortPlayerDeathReport           DeathReport                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AMusicManager_C::OnPlayerDowned(const struct FFortPlayerDeathReport& DeathReport)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "OnPlayerDowned");

	Params::MusicManager_C_OnPlayerDowned Parms{};

	Parms.DeathReport = std::move(DeathReport);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.OnMusicBankChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortMusicManagerBank*            NewBank                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::OnMusicBankChanged(class UFortMusicManagerBank* NewBank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "OnMusicBankChanged");

	Params::MusicManager_C_OnMusicBankChanged Parms{};

	Parms.NewBank = NewBank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.Gather Combat Graph Tresholds
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::Gather_Combat_Graph_Tresholds()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Gather Combat Graph Tresholds");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MusicManager.MusicManager_C.On Stinger Completed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMusicVoice*                  Voice                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::On_Stinger_Completed(class UFortMusicVoice* Voice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "On Stinger Completed");

	Params::MusicManager_C_On_Stinger_Completed Parms{};

	Parms.Voice = Voice;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.Music Fade Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Music_Fade_Out(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Music Fade Out");

	Params::MusicManager_C_Music_Fade_Out Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.Music Fade In
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Music_Fade_In(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Music Fade In");

	Params::MusicManager_C_Music_Fade_In Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.PlayStinger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMusicAsset*                  NewMusicAsset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::PlayStinger(class UFortMusicAsset* NewMusicAsset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "PlayStinger");

	Params::MusicManager_C_PlayStinger Parms{};

	Parms.NewMusicAsset = NewMusicAsset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.On Music Tick
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::On_Music_Tick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "On Music Tick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MusicManager.MusicManager_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AMusicManager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MusicManager.MusicManager_C.PlayAmbientMusic
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::PlayAmbientMusic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "PlayAmbientMusic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MusicManager.MusicManager_C.OnUpdateMusic
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::OnUpdateMusic()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "OnUpdateMusic");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MusicManager.MusicManager_C.OnDayPhaseChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// EFortDayPhase                           Param_CurrentDayPhase                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFortDayPhase                           PreviousDayPhase                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bAtCreation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMusicManager_C::OnDayPhaseChanged(EFortDayPhase Param_CurrentDayPhase, EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "OnDayPhaseChanged");

	Params::MusicManager_C_OnDayPhaseChanged Parms{};

	Parms.Param_CurrentDayPhase = Param_CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.Stop Weakpoint Music
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::Stop_Weakpoint_Music()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Stop Weakpoint Music");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MusicManager.MusicManager_C.Start Weak Point Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       Sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Start_Weak_Point_Music(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Start Weak Point Music");

	Params::MusicManager_C_Start_Weak_Point_Music Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.Player Fighting Boss DBNO
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::Player_Fighting_Boss_DBNO()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Player Fighting Boss DBNO");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MusicManager.MusicManager_C.Stop Boss DBNO Music
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::Stop_Boss_DBNO_Music()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Stop Boss DBNO Music");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MusicManager.MusicManager_C.Start Boss DBNO Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       Sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Start_Boss_DBNO_Music(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Start Boss DBNO Music");

	Params::MusicManager_C_Start_Boss_DBNO_Music Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.Play Boss Music
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                       Sound                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMusicManager_C::Play_Boss_Music(class USoundBase* Sound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Play Boss Music");

	Params::MusicManager_C_Play_Boss_Music Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MusicManager.MusicManager_C.Stop Boss Music
// (BlueprintCallable, BlueprintEvent)

void AMusicManager_C::Stop_Boss_Music()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Stop Boss Music");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MusicManager.MusicManager_C.Gameplay Music Fader__UpdateFunc
// (BlueprintEvent)

void AMusicManager_C::Gameplay_Music_Fader__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Gameplay Music Fader__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MusicManager.MusicManager_C.Gameplay Music Fader__FinishedFunc
// (BlueprintEvent)

void AMusicManager_C::Gameplay_Music_Fader__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Gameplay Music Fader__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MusicManager.MusicManager_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMusicManager_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MusicManager.MusicManager_C.ResetMusicBools
// (Protected, BlueprintCallable, BlueprintEvent)

void AMusicManager_C::ResetMusicBools()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "ResetMusicBools");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MusicManager.MusicManager_C.Primary Music Threshold 
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFortMusicCombatIntensity               Intensity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bPlayStinger                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMusicManager_C::Primary_Music_Threshold_(EFortMusicCombatIntensity Intensity, bool bPlayStinger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MusicManager_C", "Primary Music Threshold ");

	Params::MusicManager_C_Primary_Music_Threshold_ Parms{};

	Parms.Intensity = Intensity;
	Parms.bPlayStinger = bPlayStinger;

	UObject::ProcessEvent(Func, &Parms);
}

}
