#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MissionRewardDeltaWidget

#include "Basic.hpp"

#include "MissionRewardDeltaWidget_classes.hpp"
#include "MissionRewardDeltaWidget_parameters.hpp"


namespace SDK
{

// Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.SetDeltaReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortItemDelta                   DeltaReward                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UMissionRewardDeltaWidget_C::SetDeltaReward(const struct FFortItemDelta& DeltaReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionRewardDeltaWidget_C", "SetDeltaReward");

	Params::MissionRewardDeltaWidget_C_SetDeltaReward Parms{};

	Parms.DeltaReward = std::move(DeltaReward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.IntroAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionRewardDeltaWidget_C::IntroAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionRewardDeltaWidget_C", "IntroAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.Reset IntroAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionRewardDeltaWidget_C::Reset_IntroAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionRewardDeltaWidget_C", "Reset IntroAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MissionRewardDeltaWidget.MissionRewardDeltaWidget_C.Rewind IntroAnim
// (Public, BlueprintCallable, BlueprintEvent)

void UMissionRewardDeltaWidget_C::Rewind_IntroAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MissionRewardDeltaWidget_C", "Rewind IntroAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}
