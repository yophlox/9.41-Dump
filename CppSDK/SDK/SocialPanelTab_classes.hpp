#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialPanelTab

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialPanelTab.SocialPanelTab_C
// 0x0028 (0x0BC8 - 0x0BA0)
class USocialPanelTab_C final : public UFortSocialTab
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0BA0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Unselected;                                        // 0x0BA8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       OnFriendsOnlineUpdated;                            // 0x0BB0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Hovered;                                           // 0x0BB8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Selected;                                          // 0x0BC0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SocialPanelTab(int32 EntryPoint);
	void BP_OnDeselected();
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialPanelTab_C">();
	}
	static class USocialPanelTab_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPanelTab_C>();
	}
};
static_assert(alignof(USocialPanelTab_C) == 0x000008, "Wrong alignment on USocialPanelTab_C");
static_assert(sizeof(USocialPanelTab_C) == 0x000BC8, "Wrong size on USocialPanelTab_C");
static_assert(offsetof(USocialPanelTab_C, UberGraphFrame) == 0x000BA0, "Member 'USocialPanelTab_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialPanelTab_C, Unselected) == 0x000BA8, "Member 'USocialPanelTab_C::Unselected' has a wrong offset!");
static_assert(offsetof(USocialPanelTab_C, OnFriendsOnlineUpdated) == 0x000BB0, "Member 'USocialPanelTab_C::OnFriendsOnlineUpdated' has a wrong offset!");
static_assert(offsetof(USocialPanelTab_C, Hovered) == 0x000BB8, "Member 'USocialPanelTab_C::Hovered' has a wrong offset!");
static_assert(offsetof(USocialPanelTab_C, Selected) == 0x000BC0, "Member 'USocialPanelTab_C::Selected' has a wrong offset!");

}
