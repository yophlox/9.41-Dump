#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: V3_PlayerCameraModeBase

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass v3_PlayerCameraModeBase.v3_PlayerCameraModeBase_C
// 0x0000 (0x0CF0 - 0x0CF0)
class UV3_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"v3_PlayerCameraModeBase_C">();
	}
	static class UV3_PlayerCameraModeBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UV3_PlayerCameraModeBase_C>();
	}
};
static_assert(alignof(UV3_PlayerCameraModeBase_C) == 0x000010, "Wrong alignment on UV3_PlayerCameraModeBase_C");
static_assert(sizeof(UV3_PlayerCameraModeBase_C) == 0x000CF0, "Wrong size on UV3_PlayerCameraModeBase_C");

}
