#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLink

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"
#include "LiveLinkInterface_structs.hpp"


namespace SDK
{

// ScriptStruct LiveLink.SubjectFrameHandle
// 0x0018 (0x0018 - 0x0000)
struct alignas(0x08) FSubjectFrameHandle final
{
public:
	uint8                                         Pad_0[0x18];                                       // 0x0000(0x0018)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSubjectFrameHandle) == 0x000008, "Wrong alignment on FSubjectFrameHandle");
static_assert(sizeof(FSubjectFrameHandle) == 0x000018, "Wrong size on FSubjectFrameHandle");

// ScriptStruct LiveLink.AnimNode_LiveLinkPose
// 0x0038 (0x0048 - 0x0010)
struct FAnimNode_LiveLinkPose final : public FAnimNode_Base
{
public:
	struct FPoseLink                              InputPose;                                         // 0x0010(0x0010)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                   SubjectName;                                       // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRetargetAsset>     RetargetAsset;                                     // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkRetargetAsset*                 CurrentRetargetAsset;                              // 0x0030(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_38[0x10];                                      // 0x0038(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FAnimNode_LiveLinkPose) == 0x000008, "Wrong alignment on FAnimNode_LiveLinkPose");
static_assert(sizeof(FAnimNode_LiveLinkPose) == 0x000048, "Wrong size on FAnimNode_LiveLinkPose");
static_assert(offsetof(FAnimNode_LiveLinkPose, InputPose) == 0x000010, "Member 'FAnimNode_LiveLinkPose::InputPose' has a wrong offset!");
static_assert(offsetof(FAnimNode_LiveLinkPose, SubjectName) == 0x000020, "Member 'FAnimNode_LiveLinkPose::SubjectName' has a wrong offset!");
static_assert(offsetof(FAnimNode_LiveLinkPose, RetargetAsset) == 0x000028, "Member 'FAnimNode_LiveLinkPose::RetargetAsset' has a wrong offset!");
static_assert(offsetof(FAnimNode_LiveLinkPose, CurrentRetargetAsset) == 0x000030, "Member 'FAnimNode_LiveLinkPose::CurrentRetargetAsset' has a wrong offset!");

// ScriptStruct LiveLink.LiveLinkTransform
// 0x0020 (0x0020 - 0x0000)
struct alignas(0x08) FLiveLinkTransform final
{
public:
	uint8                                         Pad_0[0x20];                                       // 0x0000(0x0020)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLiveLinkTransform) == 0x000008, "Wrong alignment on FLiveLinkTransform");
static_assert(sizeof(FLiveLinkTransform) == 0x000020, "Wrong size on FLiveLinkTransform");

// ScriptStruct LiveLink.LiveLinkInstanceProxy
// 0x0050 (0x0720 - 0x06D0)
struct FLiveLinkInstanceProxy final : public FAnimInstanceProxy
{
public:
	uint8                                         Pad_6D0[0x50];                                     // 0x06D0(0x0050)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLiveLinkInstanceProxy) == 0x000010, "Wrong alignment on FLiveLinkInstanceProxy");
static_assert(sizeof(FLiveLinkInstanceProxy) == 0x000720, "Wrong size on FLiveLinkInstanceProxy");

// ScriptStruct LiveLink.CachedSubjectFrame
// 0x0140 (0x0140 - 0x0000)
struct alignas(0x08) FCachedSubjectFrame final
{
public:
	uint8                                         Pad_0[0x140];                                      // 0x0000(0x0140)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FCachedSubjectFrame) == 0x000008, "Wrong alignment on FCachedSubjectFrame");
static_assert(sizeof(FCachedSubjectFrame) == 0x000140, "Wrong size on FCachedSubjectFrame");

// ScriptStruct LiveLink.ProviderPollResult
// 0x0030 (0x0030 - 0x0000)
struct FProviderPollResult final
{
public:
	uint8                                         Pad_0[0x10];                                       // 0x0000(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Name;                                              // 0x0010(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 MachineName;                                       // 0x0020(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FProviderPollResult) == 0x000008, "Wrong alignment on FProviderPollResult");
static_assert(sizeof(FProviderPollResult) == 0x000030, "Wrong size on FProviderPollResult");
static_assert(offsetof(FProviderPollResult, Name) == 0x000010, "Member 'FProviderPollResult::Name' has a wrong offset!");
static_assert(offsetof(FProviderPollResult, MachineName) == 0x000020, "Member 'FProviderPollResult::MachineName' has a wrong offset!");

// ScriptStruct LiveLink.SubjectMetadata
// 0x0070 (0x0070 - 0x0000)
struct FSubjectMetadata final
{
public:
	TMap<class FName, class FString>              StringMetadata;                                    // 0x0000(0x0050)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTimecode                              SceneTimecode;                                     // 0x0050(0x0014)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                             SceneFramerate;                                    // 0x0064(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FSubjectMetadata) == 0x000008, "Wrong alignment on FSubjectMetadata");
static_assert(sizeof(FSubjectMetadata) == 0x000070, "Wrong size on FSubjectMetadata");
static_assert(offsetof(FSubjectMetadata, StringMetadata) == 0x000000, "Member 'FSubjectMetadata::StringMetadata' has a wrong offset!");
static_assert(offsetof(FSubjectMetadata, SceneTimecode) == 0x000050, "Member 'FSubjectMetadata::SceneTimecode' has a wrong offset!");
static_assert(offsetof(FSubjectMetadata, SceneFramerate) == 0x000064, "Member 'FSubjectMetadata::SceneFramerate' has a wrong offset!");

// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
// 0x0008 (0x0008 - 0x0000)
struct FLiveLinkRetargetAssetReference final
{
public:
	class ULiveLinkRetargetAsset*                 CurrentRetargetAsset;                              // 0x0000(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};
static_assert(alignof(FLiveLinkRetargetAssetReference) == 0x000008, "Wrong alignment on FLiveLinkRetargetAssetReference");
static_assert(sizeof(FLiveLinkRetargetAssetReference) == 0x000008, "Wrong size on FLiveLinkRetargetAssetReference");
static_assert(offsetof(FLiveLinkRetargetAssetReference, CurrentRetargetAsset) == 0x000000, "Member 'FLiveLinkRetargetAssetReference::CurrentRetargetAsset' has a wrong offset!");

// ScriptStruct LiveLink.LiveLinkVirtualSubject
// 0x0060 (0x0060 - 0x0000)
struct FLiveLinkVirtualSubject final
{
public:
	TArray<class FName>                           Subjects;                                          // 0x0000(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_10[0x10];                                      // 0x0010(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  Source;                                            // 0x0020(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_30[0x30];                                      // 0x0030(0x0030)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FLiveLinkVirtualSubject) == 0x000008, "Wrong alignment on FLiveLinkVirtualSubject");
static_assert(sizeof(FLiveLinkVirtualSubject) == 0x000060, "Wrong size on FLiveLinkVirtualSubject");
static_assert(offsetof(FLiveLinkVirtualSubject, Subjects) == 0x000000, "Member 'FLiveLinkVirtualSubject::Subjects' has a wrong offset!");
static_assert(offsetof(FLiveLinkVirtualSubject, Source) == 0x000020, "Member 'FLiveLinkVirtualSubject::Source' has a wrong offset!");

// ScriptStruct LiveLink.MovieSceneLiveLinkTemplateData
// 0x00D8 (0x00D8 - 0x0000)
struct FMovieSceneLiveLinkTemplateData final
{
public:
	TArray<struct FMovieSceneFloatChannel>        FloatChannels;                                     // 0x0000(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLiveLinkFrameData                     TemplateToPush;                                    // 0x0010(0x0090)(NativeAccessSpecifierPublic)
	struct FLiveLinkRefSkeleton                   RefSkeleton;                                       // 0x00A0(0x0020)(NativeAccessSpecifierPublic)
	class FName                                   SubjectName;                                       // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                  ChannelMask;                                       // 0x00C8(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneLiveLinkTemplateData) == 0x000008, "Wrong alignment on FMovieSceneLiveLinkTemplateData");
static_assert(sizeof(FMovieSceneLiveLinkTemplateData) == 0x0000D8, "Wrong size on FMovieSceneLiveLinkTemplateData");
static_assert(offsetof(FMovieSceneLiveLinkTemplateData, FloatChannels) == 0x000000, "Member 'FMovieSceneLiveLinkTemplateData::FloatChannels' has a wrong offset!");
static_assert(offsetof(FMovieSceneLiveLinkTemplateData, TemplateToPush) == 0x000010, "Member 'FMovieSceneLiveLinkTemplateData::TemplateToPush' has a wrong offset!");
static_assert(offsetof(FMovieSceneLiveLinkTemplateData, RefSkeleton) == 0x0000A0, "Member 'FMovieSceneLiveLinkTemplateData::RefSkeleton' has a wrong offset!");
static_assert(offsetof(FMovieSceneLiveLinkTemplateData, SubjectName) == 0x0000C0, "Member 'FMovieSceneLiveLinkTemplateData::SubjectName' has a wrong offset!");
static_assert(offsetof(FMovieSceneLiveLinkTemplateData, ChannelMask) == 0x0000C8, "Member 'FMovieSceneLiveLinkTemplateData::ChannelMask' has a wrong offset!");

// ScriptStruct LiveLink.MovieSceneLiveLinkSectionTemplate
// 0x00D8 (0x0120 - 0x0048)
struct FMovieSceneLiveLinkSectionTemplate final : public FMovieScenePropertySectionTemplate
{
public:
	struct FMovieSceneLiveLinkTemplateData        TemplateData;                                      // 0x0048(0x00D8)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneLiveLinkSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneLiveLinkSectionTemplate");
static_assert(sizeof(FMovieSceneLiveLinkSectionTemplate) == 0x000120, "Wrong size on FMovieSceneLiveLinkSectionTemplate");
static_assert(offsetof(FMovieSceneLiveLinkSectionTemplate, TemplateData) == 0x000048, "Member 'FMovieSceneLiveLinkSectionTemplate::TemplateData' has a wrong offset!");

}
