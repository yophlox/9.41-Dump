#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DriftKairosJSBridge

#include "Basic.hpp"


namespace SDK
{

// ScriptStruct DriftKairosJSBridge.GetDanceChallengesResult
// 0x0030 (0x0030 - 0x0000)
struct FGetDanceChallengesResult final
{
public:
	class FString                                 ChallengeName;                                     // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Created;                                           // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Expires;                                           // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FGetDanceChallengesResult) == 0x000008, "Wrong alignment on FGetDanceChallengesResult");
static_assert(sizeof(FGetDanceChallengesResult) == 0x000030, "Wrong size on FGetDanceChallengesResult");
static_assert(offsetof(FGetDanceChallengesResult, ChallengeName) == 0x000000, "Member 'FGetDanceChallengesResult::ChallengeName' has a wrong offset!");
static_assert(offsetof(FGetDanceChallengesResult, Created) == 0x000010, "Member 'FGetDanceChallengesResult::Created' has a wrong offset!");
static_assert(offsetof(FGetDanceChallengesResult, Expires) == 0x000020, "Member 'FGetDanceChallengesResult::Expires' has a wrong offset!");

}
