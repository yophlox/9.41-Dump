#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CommonInput

#include "Basic.hpp"

#include "CommonInput_classes.hpp"
#include "CommonInput_parameters.hpp"


namespace SDK
{

// DelegateFunction CommonInput.CommonInputSubsystem.InputMethodChangedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// ECommonInputType                        bNewInputType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputSubsystem::InputMethodChangedDelegate__DelegateSignature(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputSubsystem", "InputMethodChangedDelegate__DelegateSignature");

	Params::CommonInputSubsystem_InputMethodChangedDelegate__DelegateSignature Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonInput.CommonInputSubsystem.SetCurrentInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECommonInputType                        NewInputType                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputSubsystem::SetCurrentInputType(ECommonInputType NewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputSubsystem", "SetCurrentInputType");

	Params::CommonInputSubsystem_SetCurrentInputType Parms{};

	Parms.NewInputType = NewInputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CommonInput.CommonInputSubsystem.SetGamepadInputType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// ECommonGamepadType                      InGamepadInputType                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonInputSubsystem::SetGamepadInputType(ECommonGamepadType InGamepadInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputSubsystem", "SetGamepadInputType");

	Params::CommonInputSubsystem_SetGamepadInputType Parms{};

	Parms.InGamepadInputType = InGamepadInputType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function CommonInput.CommonInputSubsystem.GetCurrentGamepadType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECommonGamepadType                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ECommonGamepadType UCommonInputSubsystem::GetCurrentGamepadType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputSubsystem", "GetCurrentGamepadType");

	Params::CommonInputSubsystem_GetCurrentGamepadType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.GetCurrentInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECommonInputType                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ECommonInputType UCommonInputSubsystem::GetCurrentInputType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputSubsystem", "GetCurrentInputType");

	Params::CommonInputSubsystem_GetCurrentInputType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.GetDefaultInputType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// ECommonInputType                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

ECommonInputType UCommonInputSubsystem::GetDefaultInputType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputSubsystem", "GetDefaultInputType");

	Params::CommonInputSubsystem_GetDefaultInputType Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.IsUsingPointerInput
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputSubsystem::IsUsingPointerInput() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputSubsystem", "IsUsingPointerInput");

	Params::CommonInputSubsystem_IsUsingPointerInput Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function CommonInput.CommonInputSubsystem.ShouldShowInputKeys
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonInputSubsystem::ShouldShowInputKeys() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonInputSubsystem", "ShouldShowInputKeys");

	Params::CommonInputSubsystem_ShouldShowInputKeys Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}
