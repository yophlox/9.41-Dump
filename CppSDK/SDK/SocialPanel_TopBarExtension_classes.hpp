#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialPanel_TopBarExtension

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonUI_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C
// 0x0028 (0x0B68 - 0x0B40)
class USocialPanel_TopBarExtension_C final : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0B40(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Hovered;                                           // 0x0B48(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Arrow;                                             // 0x0B50(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_PlatformIcon;                                // 0x0B58(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniPartyBar_C*                        MiniPartyBar;                                      // 0x0B60(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SocialPanel_TopBarExtension(int32 EntryPoint);
	void BP_OnHovered();
	void BP_OnUnhovered();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialPanel_TopBarExtension_C">();
	}
	static class USocialPanel_TopBarExtension_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialPanel_TopBarExtension_C>();
	}
};
static_assert(alignof(USocialPanel_TopBarExtension_C) == 0x000008, "Wrong alignment on USocialPanel_TopBarExtension_C");
static_assert(sizeof(USocialPanel_TopBarExtension_C) == 0x000B68, "Wrong size on USocialPanel_TopBarExtension_C");
static_assert(offsetof(USocialPanel_TopBarExtension_C, UberGraphFrame) == 0x000B40, "Member 'USocialPanel_TopBarExtension_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USocialPanel_TopBarExtension_C, Hovered) == 0x000B48, "Member 'USocialPanel_TopBarExtension_C::Hovered' has a wrong offset!");
static_assert(offsetof(USocialPanel_TopBarExtension_C, Arrow) == 0x000B50, "Member 'USocialPanel_TopBarExtension_C::Arrow' has a wrong offset!");
static_assert(offsetof(USocialPanel_TopBarExtension_C, Image_PlatformIcon) == 0x000B58, "Member 'USocialPanel_TopBarExtension_C::Image_PlatformIcon' has a wrong offset!");
static_assert(offsetof(USocialPanel_TopBarExtension_C, MiniPartyBar) == 0x000B60, "Member 'USocialPanel_TopBarExtension_C::MiniPartyBar' has a wrong offset!");

}
