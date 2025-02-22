#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Windowchromebuttons

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass windowchromebuttons.windowchromebuttons_C
// 0x0020 (0x0250 - 0x0230)
class UWindowchromebuttons_C final : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOut;                                           // 0x0238(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0240(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWindowTitleBarArea*                    WindowTitleBarArea_107;                            // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_windowchromebuttons(int32 EntryPoint);
	void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnMouseLeave(const struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"windowchromebuttons_C">();
	}
	static class UWindowchromebuttons_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWindowchromebuttons_C>();
	}
};
static_assert(alignof(UWindowchromebuttons_C) == 0x000008, "Wrong alignment on UWindowchromebuttons_C");
static_assert(sizeof(UWindowchromebuttons_C) == 0x000250, "Wrong size on UWindowchromebuttons_C");
static_assert(offsetof(UWindowchromebuttons_C, UberGraphFrame) == 0x000230, "Member 'UWindowchromebuttons_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWindowchromebuttons_C, FadeOut) == 0x000238, "Member 'UWindowchromebuttons_C::FadeOut' has a wrong offset!");
static_assert(offsetof(UWindowchromebuttons_C, FadeIn) == 0x000240, "Member 'UWindowchromebuttons_C::FadeIn' has a wrong offset!");
static_assert(offsetof(UWindowchromebuttons_C, WindowTitleBarArea_107) == 0x000248, "Member 'UWindowchromebuttons_C::WindowTitleBarArea_107' has a wrong offset!");

}

