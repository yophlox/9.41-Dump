#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialPanelView_UserLists

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "FortniteUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialPanelView_UserLists.SocialPanelView_UserLists_C
// 0x0078 (0x03B8 - 0x0340)
class USocialPanelView_UserLists_C final : public UFortSocialPanelView_UserLists
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0340(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       WeGameButtonHovered;                               // 0x0348(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       SwitcherTransition;                                // 0x0350(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       NoFriendsArrowBounce;                              // 0x0358(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       MenuAnchorItemOpen;                                // 0x0360(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Open_0;                                            // 0x0368(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Open;                                              // 0x0370(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   CommonRichTextBlock_97;                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_MicIcon;                                     // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_MicIcon_1;                                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_MicIcon_2;                                   // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                   RichText_LeavePlatformPartyTitle;                  // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichTextBlock_0;                                   // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USocialPanel_FriendLinkButton_C*        SocialPanel_FriendLinkButton;                      // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                       TextLowPowerMode;                                  // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SocialPanelView_UserLists(int32 EntryPoint);
	void BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void OnSetVoiceChannelButtonText(const class FText& ButtonText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialPanelView_UserLists_C">();
	}
	static class USocialPanelView_UserLists_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPanelView_UserLists_C>();
	}
};
static_assert(alignof(USocialPanelView_UserLists_C) == 0x000008, "Wrong alignment on USocialPanelView_UserLists_C");
static_assert(sizeof(USocialPanelView_UserLists_C) == 0x0003B8, "Wrong size on USocialPanelView_UserLists_C");
static_assert(offsetof(USocialPanelView_UserLists_C, UberGraphFrame) == 0x000340, "Member 'USocialPanelView_UserLists_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, WeGameButtonHovered) == 0x000348, "Member 'USocialPanelView_UserLists_C::WeGameButtonHovered' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, SwitcherTransition) == 0x000350, "Member 'USocialPanelView_UserLists_C::SwitcherTransition' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, NoFriendsArrowBounce) == 0x000358, "Member 'USocialPanelView_UserLists_C::NoFriendsArrowBounce' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, MenuAnchorItemOpen) == 0x000360, "Member 'USocialPanelView_UserLists_C::MenuAnchorItemOpen' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, Open_0) == 0x000368, "Member 'USocialPanelView_UserLists_C::Open_0' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, Open) == 0x000370, "Member 'USocialPanelView_UserLists_C::Open' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, CommonRichTextBlock_97) == 0x000378, "Member 'USocialPanelView_UserLists_C::CommonRichTextBlock_97' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, Image_MicIcon) == 0x000380, "Member 'USocialPanelView_UserLists_C::Image_MicIcon' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, Image_MicIcon_1) == 0x000388, "Member 'USocialPanelView_UserLists_C::Image_MicIcon_1' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, Image_MicIcon_2) == 0x000390, "Member 'USocialPanelView_UserLists_C::Image_MicIcon_2' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, RichText_LeavePlatformPartyTitle) == 0x000398, "Member 'USocialPanelView_UserLists_C::RichText_LeavePlatformPartyTitle' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, RichTextBlock_0) == 0x0003A0, "Member 'USocialPanelView_UserLists_C::RichTextBlock_0' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, SocialPanel_FriendLinkButton) == 0x0003A8, "Member 'USocialPanelView_UserLists_C::SocialPanel_FriendLinkButton' has a wrong offset!");
static_assert(offsetof(USocialPanelView_UserLists_C, TextLowPowerMode) == 0x0003B0, "Member 'USocialPanelView_UserLists_C::TextLowPowerMode' has a wrong offset!");

}

