#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PBWA_M1_StairR

#include "Basic.hpp"

#include "FortniteGame_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PBWA_M1_StairR.PBWA_M1_StairR_C
// 0x0000 (0x0B08 - 0x0B08)
class APBWA_M1_StairR_C final : public ABuildingStairs
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PBWA_M1_StairR_C">();
	}
	static class APBWA_M1_StairR_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APBWA_M1_StairR_C>();
	}
};
static_assert(alignof(APBWA_M1_StairR_C) == 0x000008, "Wrong alignment on APBWA_M1_StairR_C");
static_assert(sizeof(APBWA_M1_StairR_C) == 0x000B08, "Wrong size on APBWA_M1_StairR_C");

}
