#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: B_AthenaMapMarkerBase

#include "Basic.hpp"

#include "B_AthenaMapMarkerBase_classes.hpp"
#include "B_AthenaMapMarkerBase_parameters.hpp"


namespace SDK
{

// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.ExecuteUbergraph_B_AthenaMapMarkerBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_AthenaMapMarkerBase_C::ExecuteUbergraph_B_AthenaMapMarkerBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "ExecuteUbergraph_B_AthenaMapMarkerBase");

	Params::B_AthenaMapMarkerBase_C_ExecuteUbergraph_B_AthenaMapMarkerBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerColorChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_AthenaMapMarkerBase_C::OnMarkerColorChanged(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "OnMarkerColorChanged");

	Params::B_AthenaMapMarkerBase_C_OnMarkerColorChanged Parms{};

	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerPlaced
// (Event, Protected, BlueprintEvent)

void AB_AthenaMapMarkerBase_C::OnMarkerPlaced()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "OnMarkerPlaced");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnProtoMarkerPlaced__FinishedFunc
// (BlueprintEvent)

void AB_AthenaMapMarkerBase_C::OnProtoMarkerPlaced__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "OnProtoMarkerPlaced__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnProtoMarkerPlaced__UpdateFunc
// (BlueprintEvent)

void AB_AthenaMapMarkerBase_C::OnProtoMarkerPlaced__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "OnProtoMarkerPlaced__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnSetupMarker
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortWorldMarkerData             Param_MarkerData                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void AB_AthenaMapMarkerBase_C::OnSetupMarker(const struct FFortWorldMarkerData& Param_MarkerData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "OnSetupMarker");

	Params::B_AthenaMapMarkerBase_C_OnSetupMarker Parms{};

	Parms.Param_MarkerData = std::move(Param_MarkerData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__FinishedFunc
// (BlueprintEvent)

void AB_AthenaMapMarkerBase_C::SpawnMarkerAnim__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "SpawnMarkerAnim__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.SpawnMarkerAnim__UpdateFunc
// (BlueprintEvent)

void AB_AthenaMapMarkerBase_C::SpawnMarkerAnim__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "SpawnMarkerAnim__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AB_AthenaMapMarkerBase_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("B_AthenaMapMarkerBase_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}
