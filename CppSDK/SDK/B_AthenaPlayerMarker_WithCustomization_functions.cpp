#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_AthenaPlayerMarker_WithCustomization

#include "Basic.hpp"

#include "B_AthenaPlayerMarker_WithCustomization_classes.hpp"
#include "B_AthenaPlayerMarker_WithCustomization_parameters.hpp"


namespace SDK
{

// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_AthenaPlayerMarker_WithCustomization_C::ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaPlayerMarker_WithCustomization_C", "ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization");

	Params::B_AthenaPlayerMarker_WithCustomization_C_ExecuteUbergraph_B_AthenaPlayerMarker_WithCustomization Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.UpdateTopper
// (BlueprintCallable, BlueprintEvent)

void AB_AthenaPlayerMarker_WithCustomization_C::UpdateTopper()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaPlayerMarker_WithCustomization_C", "UpdateTopper");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnMarkerHidden
// (Event, Protected, BlueprintEvent)

void AB_AthenaPlayerMarker_WithCustomization_C::OnMarkerHidden()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaPlayerMarker_WithCustomization_C", "OnMarkerHidden");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                           Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_AthenaPlayerMarker_WithCustomization_C::OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaPlayerMarker_WithCustomization_C", "OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37");

	Params::B_AthenaPlayerMarker_WithCustomization_C_OnLoaded_8A042AD24DC8A8C0E9D8E0B4BF3B6C37 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnMarkerPlaced
// (Event, Protected, BlueprintEvent)

void AB_AthenaPlayerMarker_WithCustomization_C::OnMarkerPlaced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaPlayerMarker_WithCustomization_C", "OnMarkerPlaced");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AthenaPlayerMarker_WithCustomization.B_AthenaPlayerMarker_WithCustomization_C.OnSetupMarker
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortWorldMarkerData             Param_MarkerData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_AthenaPlayerMarker_WithCustomization_C::OnSetupMarker(const struct FFortWorldMarkerData& Param_MarkerData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaPlayerMarker_WithCustomization_C", "OnSetupMarker");

	Params::B_AthenaPlayerMarker_WithCustomization_C_OnSetupMarker Parms{};

	Parms.Param_MarkerData = std::move(Param_MarkerData);

	UObject::ProcessEvent(Func, &Parms);
}

}
