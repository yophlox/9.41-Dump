#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialPanel_FriendSearchButton

#include "Basic.hpp"

#include "SocialPanel_FriendSearchButton_classes.hpp"
#include "SocialPanel_FriendSearchButton_parameters.hpp"


namespace SDK
{

// Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.ExecuteUbergraph_SocialPanel_FriendSearchButton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USocialPanel_FriendSearchButton_C::ExecuteUbergraph_SocialPanel_FriendSearchButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_FriendSearchButton_C", "ExecuteUbergraph_SocialPanel_FriendSearchButton");

	Params::SocialPanel_FriendSearchButton_C_ExecuteUbergraph_SocialPanel_FriendSearchButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)

void USocialPanel_FriendSearchButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_FriendSearchButton_C", "BP_OnHovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)

void USocialPanel_FriendSearchButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_FriendSearchButton_C", "BP_OnUnhovered");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SocialPanel_FriendSearchButton.SocialPanel_FriendSearchButton_C.On_ClickCapture_MouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply USocialPanel_FriendSearchButton_C::On_ClickCapture_MouseButtonDown_0(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SocialPanel_FriendSearchButton_C", "On_ClickCapture_MouseButtonDown_0");

	Params::SocialPanel_FriendSearchButton_C_On_ClickCapture_MouseButtonDown_0 Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}
