#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Lightbox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Lightbox.Lightbox_C
// 0x0078 (0x02A0 - 0x0228)
class ULightbox_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0228(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FadeOut;                                           // 0x0230(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       FadeIn;                                            // 0x0238(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                                Border_Darken;                                     // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             Content;                                           // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Dimmer;                                            // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                              SafeZone_0;                                        // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonVisibilityWidget*                WindowButtons;                                     // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               WindowsOverlay;                                    // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWindowchromebuttons_C*                 WindowTitleBar;                                    // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_             IntroEnded;                                        // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_             OutroEnded;                                        // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ShowWindowControlButtons;                          // 0x0298(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_299[0x3];                                      // 0x0299(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DimAmount;                                         // 0x029C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void IntroEnded__DelegateSignature();
	void OutroEnded__DelegateSignature();
	void ExecuteUbergraph_Lightbox(int32 EntryPoint);
	void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent_1();
	void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent_0();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Destruct();
	void Intro();
	void Outro();
	void AddContent(class UCommonUserWidget* Param_Content);
	void RemoveContent();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Lightbox_C">();
	}
	static class ULightbox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULightbox_C>();
	}
};
static_assert(alignof(ULightbox_C) == 0x000008, "Wrong alignment on ULightbox_C");
static_assert(sizeof(ULightbox_C) == 0x0002A0, "Wrong size on ULightbox_C");
static_assert(offsetof(ULightbox_C, UberGraphFrame) == 0x000228, "Member 'ULightbox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULightbox_C, FadeOut) == 0x000230, "Member 'ULightbox_C::FadeOut' has a wrong offset!");
static_assert(offsetof(ULightbox_C, FadeIn) == 0x000238, "Member 'ULightbox_C::FadeIn' has a wrong offset!");
static_assert(offsetof(ULightbox_C, Border_Darken) == 0x000240, "Member 'ULightbox_C::Border_Darken' has a wrong offset!");
static_assert(offsetof(ULightbox_C, Content) == 0x000248, "Member 'ULightbox_C::Content' has a wrong offset!");
static_assert(offsetof(ULightbox_C, Dimmer) == 0x000250, "Member 'ULightbox_C::Dimmer' has a wrong offset!");
static_assert(offsetof(ULightbox_C, SafeZone_0) == 0x000258, "Member 'ULightbox_C::SafeZone_0' has a wrong offset!");
static_assert(offsetof(ULightbox_C, WindowButtons) == 0x000260, "Member 'ULightbox_C::WindowButtons' has a wrong offset!");
static_assert(offsetof(ULightbox_C, WindowsOverlay) == 0x000268, "Member 'ULightbox_C::WindowsOverlay' has a wrong offset!");
static_assert(offsetof(ULightbox_C, WindowTitleBar) == 0x000270, "Member 'ULightbox_C::WindowTitleBar' has a wrong offset!");
static_assert(offsetof(ULightbox_C, IntroEnded) == 0x000278, "Member 'ULightbox_C::IntroEnded' has a wrong offset!");
static_assert(offsetof(ULightbox_C, OutroEnded) == 0x000288, "Member 'ULightbox_C::OutroEnded' has a wrong offset!");
static_assert(offsetof(ULightbox_C, ShowWindowControlButtons) == 0x000298, "Member 'ULightbox_C::ShowWindowControlButtons' has a wrong offset!");
static_assert(offsetof(ULightbox_C, DimAmount) == 0x00029C, "Member 'ULightbox_C::DimAmount' has a wrong offset!");

}
