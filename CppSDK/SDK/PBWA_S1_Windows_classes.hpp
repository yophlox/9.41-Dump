#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_S1_Windows

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_S1_Windows.PBWA_S1_Windows_C
// 0x0000 (0x0C68 - 0x0C68)
class APBWA_S1_Windows_C final : public ABuildingWall
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_S1_Windows_C">();
	}
	static class APBWA_S1_Windows_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_S1_Windows_C>();
	}
};
static_assert(alignof(APBWA_S1_Windows_C) == 0x000008, "Wrong alignment on APBWA_S1_Windows_C");
static_assert(sizeof(APBWA_S1_Windows_C) == 0x000C68, "Wrong size on APBWA_S1_Windows_C");

}
