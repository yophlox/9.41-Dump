#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InScreenWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InScreenWidget.InScreenWidget_C
// 0x0008 (0x0230 - 0x0228)
class UInScreenWidget_C final : public UUserWidget
{
public:
	class UImage*                                 InScreenMedia;                                     // 0x0228(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InScreenWidget_C">();
	}
	static class UInScreenWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInScreenWidget_C>();
	}
};
static_assert(alignof(UInScreenWidget_C) == 0x000008, "Wrong alignment on UInScreenWidget_C");
static_assert(sizeof(UInScreenWidget_C) == 0x000230, "Wrong size on UInScreenWidget_C");
static_assert(offsetof(UInScreenWidget_C, InScreenMedia) == 0x000228, "Member 'UInScreenWidget_C::InScreenMedia' has a wrong offset!");

}
