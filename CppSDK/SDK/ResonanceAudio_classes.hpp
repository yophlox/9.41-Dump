#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ResonanceAudio

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "ResonanceAudio_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class ResonanceAudio.ResonanceAudioAmbisonicsSettings
// 0x0008 (0x0030 - 0x0028)
class UResonanceAudioAmbisonicsSettings final : public UAmbisonicsSubmixSettingsBase
{
public:
	EAmbisonicsOrder                              AmbisonicsOrder;                                   // 0x0028(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioAmbisonicsSettings">();
	}
	static class UResonanceAudioAmbisonicsSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResonanceAudioAmbisonicsSettings>();
	}
};
static_assert(alignof(UResonanceAudioAmbisonicsSettings) == 0x000008, "Wrong alignment on UResonanceAudioAmbisonicsSettings");
static_assert(sizeof(UResonanceAudioAmbisonicsSettings) == 0x000030, "Wrong size on UResonanceAudioAmbisonicsSettings");
static_assert(offsetof(UResonanceAudioAmbisonicsSettings, AmbisonicsOrder) == 0x000028, "Member 'UResonanceAudioAmbisonicsSettings::AmbisonicsOrder' has a wrong offset!");

// Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UResonanceAudioBlueprintFunctionLibrary final : public UBlueprintFunctionLibrary
{
public:
	static class UResonanceAudioReverbPluginPreset* GetGlobalReverbPreset();
	static void SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioBlueprintFunctionLibrary">();
	}
	static class UResonanceAudioBlueprintFunctionLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResonanceAudioBlueprintFunctionLibrary>();
	}
};
static_assert(alignof(UResonanceAudioBlueprintFunctionLibrary) == 0x000008, "Wrong alignment on UResonanceAudioBlueprintFunctionLibrary");
static_assert(sizeof(UResonanceAudioBlueprintFunctionLibrary) == 0x000028, "Wrong size on UResonanceAudioBlueprintFunctionLibrary");

// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
// 0x0080 (0x02C0 - 0x0240)
class AResonanceAudioDirectivityVisualizer final : public AActor
{
public:
	uint8                                         Pad_240[0x68];                                     // 0x0240(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	class UProceduralMeshComponent*               Mesh;                                              // 0x02A8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterial*                              Material;                                          // 0x02B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UResonanceAudioSpatializationSourceSettings* Settings;                                          // 0x02B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioDirectivityVisualizer">();
	}
	static class AResonanceAudioDirectivityVisualizer* GetDefaultObj()
	{
		return GetDefaultObjImpl<AResonanceAudioDirectivityVisualizer>();
	}
};
static_assert(alignof(AResonanceAudioDirectivityVisualizer) == 0x000008, "Wrong alignment on AResonanceAudioDirectivityVisualizer");
static_assert(sizeof(AResonanceAudioDirectivityVisualizer) == 0x0002C0, "Wrong size on AResonanceAudioDirectivityVisualizer");
static_assert(offsetof(AResonanceAudioDirectivityVisualizer, Mesh) == 0x0002A8, "Member 'AResonanceAudioDirectivityVisualizer::Mesh' has a wrong offset!");
static_assert(offsetof(AResonanceAudioDirectivityVisualizer, Material) == 0x0002B0, "Member 'AResonanceAudioDirectivityVisualizer::Material' has a wrong offset!");
static_assert(offsetof(AResonanceAudioDirectivityVisualizer, Settings) == 0x0002B8, "Member 'AResonanceAudioDirectivityVisualizer::Settings' has a wrong offset!");

// Class ResonanceAudio.ResonanceAudioReverbPluginPreset
// 0x00D0 (0x0110 - 0x0040)
class UResonanceAudioReverbPluginPreset final : public USoundEffectSubmixPreset
{
public:
	uint8                                         Pad_40[0x80];                                      // 0x0040(0x0080)(Fixing Size After Last Property [ Dumper-7 ])
	struct FResonanceAudioReverbPluginSettings    Settings;                                          // 0x00C0(0x0050)(Edit, NoDestructor, NativeAccessSpecifierPublic)

public:
	void SetEnableRoomEffects(bool bInEnableRoomEffects);
	void SetReflectionScalar(float InReflectionScalar);
	void SetReverbBrightness(float InReverbBrightness);
	void SetReverbGain(float InReverbGain);
	void SetReverbTimeModifier(float InReverbTimeModifier);
	void SetRoomDimensions(const struct FVector& InDimensions);
	void SetRoomMaterials(const TArray<ERaMaterialName>& InMaterials);
	void SetRoomPosition(const struct FVector& InPosition);
	void SetRoomRotation(const struct FQuat& InRotation);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioReverbPluginPreset">();
	}
	static class UResonanceAudioReverbPluginPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResonanceAudioReverbPluginPreset>();
	}
};
static_assert(alignof(UResonanceAudioReverbPluginPreset) == 0x000010, "Wrong alignment on UResonanceAudioReverbPluginPreset");
static_assert(sizeof(UResonanceAudioReverbPluginPreset) == 0x000110, "Wrong size on UResonanceAudioReverbPluginPreset");
static_assert(offsetof(UResonanceAudioReverbPluginPreset, Settings) == 0x0000C0, "Member 'UResonanceAudioReverbPluginPreset::Settings' has a wrong offset!");

// Class ResonanceAudio.ResonanceAudioSettings
// 0x0038 (0x0060 - 0x0028)
class UResonanceAudioSettings final : public UObject
{
public:
	ERaQualityMode                                QualityMode;                                       // 0x0028(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        GlobalReverbPreset;                                // 0x0030(0x0018)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                        GlobalSourcePreset;                                // 0x0048(0x0018)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioSettings">();
	}
	static class UResonanceAudioSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResonanceAudioSettings>();
	}
};
static_assert(alignof(UResonanceAudioSettings) == 0x000008, "Wrong alignment on UResonanceAudioSettings");
static_assert(sizeof(UResonanceAudioSettings) == 0x000060, "Wrong size on UResonanceAudioSettings");
static_assert(offsetof(UResonanceAudioSettings, QualityMode) == 0x000028, "Member 'UResonanceAudioSettings::QualityMode' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSettings, GlobalReverbPreset) == 0x000030, "Member 'UResonanceAudioSettings::GlobalReverbPreset' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSettings, GlobalSourcePreset) == 0x000048, "Member 'UResonanceAudioSettings::GlobalSourcePreset' has a wrong offset!");

// Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
// 0x0028 (0x0050 - 0x0028)
class UResonanceAudioSpatializationSourceSettings final : public USpatializationPluginSourceSettingsBase
{
public:
	ERaSpatializationMethod                       SpatializationMethod;                              // 0x0028(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Pattern;                                           // 0x002C(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Sharpness;                                         // 0x0030(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bToggleVisualization;                              // 0x0034(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Scale;                                             // 0x0038(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         Spread;                                            // 0x003C(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ERaDistanceRolloffModel                       Rolloff;                                           // 0x0040(0x0001)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         MinDistance;                                       // 0x0044(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaxDistance;                                       // 0x0048(0x0004)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetSoundSourceDirectivity(float InPattern, float InSharpness);
	void SetSoundSourceSpread(float InSpread);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ResonanceAudioSpatializationSourceSettings">();
	}
	static class UResonanceAudioSpatializationSourceSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResonanceAudioSpatializationSourceSettings>();
	}
};
static_assert(alignof(UResonanceAudioSpatializationSourceSettings) == 0x000008, "Wrong alignment on UResonanceAudioSpatializationSourceSettings");
static_assert(sizeof(UResonanceAudioSpatializationSourceSettings) == 0x000050, "Wrong size on UResonanceAudioSpatializationSourceSettings");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, SpatializationMethod) == 0x000028, "Member 'UResonanceAudioSpatializationSourceSettings::SpatializationMethod' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Pattern) == 0x00002C, "Member 'UResonanceAudioSpatializationSourceSettings::Pattern' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Sharpness) == 0x000030, "Member 'UResonanceAudioSpatializationSourceSettings::Sharpness' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, bToggleVisualization) == 0x000034, "Member 'UResonanceAudioSpatializationSourceSettings::bToggleVisualization' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Scale) == 0x000038, "Member 'UResonanceAudioSpatializationSourceSettings::Scale' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Spread) == 0x00003C, "Member 'UResonanceAudioSpatializationSourceSettings::Spread' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, Rolloff) == 0x000040, "Member 'UResonanceAudioSpatializationSourceSettings::Rolloff' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, MinDistance) == 0x000044, "Member 'UResonanceAudioSpatializationSourceSettings::MinDistance' has a wrong offset!");
static_assert(offsetof(UResonanceAudioSpatializationSourceSettings, MaxDistance) == 0x000048, "Member 'UResonanceAudioSpatializationSourceSettings::MaxDistance' has a wrong offset!");

}
