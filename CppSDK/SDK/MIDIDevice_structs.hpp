#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MIDIDevice

#include "Basic.hpp"


namespace SDK
{

// Enum MIDIDevice.EMIDIEventType
// NumValues: 0x0009
enum class EMIDIEventType : uint8
{
	Unknown                                  = 0,
	NoteOff                                  = 8,
	NoteOn                                   = 9,
	NoteAfterTouch                           = 10,
	ControlChange                            = 11,
	ProgramChange                            = 12,
	ChannelAfterTouch                        = 13,
	PitchBend                                = 14,
	EMIDIEventType_MAX                       = 15,
};

// ScriptStruct MIDIDevice.MIDIDeviceInfo
// 0x0020 (0x0020 - 0x0000)
struct FMIDIDeviceInfo final
{
public:
	int32                                         DeviceID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DeviceName;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsAlreadyInUse;                                   // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsDefaultDevice;                                  // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMIDIDeviceInfo) == 0x000008, "Wrong alignment on FMIDIDeviceInfo");
static_assert(sizeof(FMIDIDeviceInfo) == 0x000020, "Wrong size on FMIDIDeviceInfo");
static_assert(offsetof(FMIDIDeviceInfo, DeviceID) == 0x000000, "Member 'FMIDIDeviceInfo::DeviceID' has a wrong offset!");
static_assert(offsetof(FMIDIDeviceInfo, DeviceName) == 0x000008, "Member 'FMIDIDeviceInfo::DeviceName' has a wrong offset!");
static_assert(offsetof(FMIDIDeviceInfo, bIsAlreadyInUse) == 0x000018, "Member 'FMIDIDeviceInfo::bIsAlreadyInUse' has a wrong offset!");
static_assert(offsetof(FMIDIDeviceInfo, bIsDefaultDevice) == 0x000019, "Member 'FMIDIDeviceInfo::bIsDefaultDevice' has a wrong offset!");

// ScriptStruct MIDIDevice.FoundMIDIDevice
// 0x0020 (0x0020 - 0x0000)
struct FFoundMIDIDevice final
{
public:
	int32                                         DeviceID;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 DeviceName;                                        // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanReceiveFrom;                                   // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bCanSendTo;                                        // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsAlreadyInUse;                                   // 0x001A(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsDefaultInputDevice;                             // 0x001B(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsDefaultOutputDevice;                            // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FFoundMIDIDevice) == 0x000008, "Wrong alignment on FFoundMIDIDevice");
static_assert(sizeof(FFoundMIDIDevice) == 0x000020, "Wrong size on FFoundMIDIDevice");
static_assert(offsetof(FFoundMIDIDevice, DeviceID) == 0x000000, "Member 'FFoundMIDIDevice::DeviceID' has a wrong offset!");
static_assert(offsetof(FFoundMIDIDevice, DeviceName) == 0x000008, "Member 'FFoundMIDIDevice::DeviceName' has a wrong offset!");
static_assert(offsetof(FFoundMIDIDevice, bCanReceiveFrom) == 0x000018, "Member 'FFoundMIDIDevice::bCanReceiveFrom' has a wrong offset!");
static_assert(offsetof(FFoundMIDIDevice, bCanSendTo) == 0x000019, "Member 'FFoundMIDIDevice::bCanSendTo' has a wrong offset!");
static_assert(offsetof(FFoundMIDIDevice, bIsAlreadyInUse) == 0x00001A, "Member 'FFoundMIDIDevice::bIsAlreadyInUse' has a wrong offset!");
static_assert(offsetof(FFoundMIDIDevice, bIsDefaultInputDevice) == 0x00001B, "Member 'FFoundMIDIDevice::bIsDefaultInputDevice' has a wrong offset!");
static_assert(offsetof(FFoundMIDIDevice, bIsDefaultOutputDevice) == 0x00001C, "Member 'FFoundMIDIDevice::bIsDefaultOutputDevice' has a wrong offset!");

}
