#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FortUIStylesheet

#include "Basic.hpp"

#include "FortniteGame_structs.hpp"
#include "FortUITheme_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct FortUIStylesheet.FortUIStylesheet
// 0x0B20 (0x0B20 - 0x0000)
struct FFortUIStylesheet final
{
public:
	struct FFortUITheme                           ThemeMinusDefault_91_015CB18F413B4A467B38CB93E8734A68; // 0x0000(0x0060)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortUITheme                           ThemeMinusEmphasis_94_962F11A944E9DF11F547FBBDB98DD4BE; // 0x0060(0x0060)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortUITheme                           ThemeMinusCritical_97_43F63D0C4E71395016AE00B41BB7BA0C; // 0x00C0(0x0060)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortMultiSizeBrush                    StandardMinusIconMinusSize_131_774B5BB9434A3E02AEC16CA1BB6B253A; // 0x0120(0x0330)(Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                    ItemMinusSize_144_A36DAD55442FF44849D422B57DDD037A; // 0x0450(0x0330)(Edit, BlueprintVisible)
	struct FFortMultiSizeBrush                    ItemMinusIconMinusSize_134_098E0A9F46695EDB2E9166978E7B49F1; // 0x0780(0x0330)(Edit, BlueprintVisible)
	struct FLinearColor                           ColorMinusBuff_145_AC063FB242D9ECBD0B6306BBE205C7F7; // 0x0AB0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColorMinusDebuff_146_0402338944FCC3DED4C90E9A78FD8BC5; // 0x0AC0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColorMinusUnique_150_B15CF0C9436988001F70B4B8F9D32E5B; // 0x0AD0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColorMinusFireElemental_152_FBAFDA0C445A96F1B689E880A707069C; // 0x0AE0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColorMinusIceElemental_154_FDA209D8429DF768ABA53EBA24C4B505; // 0x0AF0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColorMinusBoltElemental_156_10AEFEC147C25B2DEE47619E4AB4ABC7; // 0x0B00(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           ColorMinusHarvestWeakPoint_159_AE0CF44C4731DAF69193D4B4E59B0E7E; // 0x0B10(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FFortUIStylesheet) == 0x000008, "Wrong alignment on FFortUIStylesheet");
static_assert(sizeof(FFortUIStylesheet) == 0x000B20, "Wrong size on FFortUIStylesheet");
static_assert(offsetof(FFortUIStylesheet, ThemeMinusDefault_91_015CB18F413B4A467B38CB93E8734A68) == 0x000000, "Member 'FFortUIStylesheet::ThemeMinusDefault_91_015CB18F413B4A467B38CB93E8734A68' has a wrong offset!");
static_assert(offsetof(FFortUIStylesheet, ThemeMinusEmphasis_94_962F11A944E9DF11F547FBBDB98DD4BE) == 0x000060, "Member 'FFortUIStylesheet::ThemeMinusEmphasis_94_962F11A944E9DF11F547FBBDB98DD4BE' has a wrong offset!");
static_assert(offsetof(FFortUIStylesheet, ThemeMinusCritical_97_43F63D0C4E71395016AE00B41BB7BA0C) == 0x0000C0, "Member 'FFortUIStylesheet::ThemeMinusCritical_97_43F63D0C4E71395016AE00B41BB7BA0C' has a wrong offset!");
static_assert(offsetof(FFortUIStylesheet, StandardMinusIconMinusSize_131_774B5BB9434A3E02AEC16CA1BB6B253A) == 0x000120, "Member 'FFortUIStylesheet::StandardMinusIconMinusSize_131_774B5BB9434A3E02AEC16CA1BB6B253A' has a wrong offset!");
static_assert(offsetof(FFortUIStylesheet, ItemMinusSize_144_A36DAD55442FF44849D422B57DDD037A) == 0x000450, "Member 'FFortUIStylesheet::ItemMinusSize_144_A36DAD55442FF44849D422B57DDD037A' has a wrong offset!");
static_assert(offsetof(FFortUIStylesheet, ItemMinusIconMinusSize_134_098E0A9F46695EDB2E9166978E7B49F1) == 0x000780, "Member 'FFortUIStylesheet::ItemMinusIconMinusSize_134_098E0A9F46695EDB2E9166978E7B49F1' has a wrong offset!");
static_assert(offsetof(FFortUIStylesheet, ColorMinusBuff_145_AC063FB242D9ECBD0B6306BBE205C7F7) == 0x000AB0, "Member 'FFortUIStylesheet::ColorMinusBuff_145_AC063FB242D9ECBD0B6306BBE205C7F7' has a wrong offset!");
static_assert(offsetof(FFortUIStylesheet, ColorMinusDebuff_146_0402338944FCC3DED4C90E9A78FD8BC5) == 0x000AC0, "Member 'FFortUIStylesheet::ColorMinusDebuff_146_0402338944FCC3DED4C90E9A78FD8BC5' has a wrong offset!");
static_assert(offsetof(FFortUIStylesheet, ColorMinusUnique_150_B15CF0C9436988001F70B4B8F9D32E5B) == 0x000AD0, "Member 'FFortUIStylesheet::ColorMinusUnique_150_B15CF0C9436988001F70B4B8F9D32E5B' has a wrong offset!");
static_assert(offsetof(FFortUIStylesheet, ColorMinusFireElemental_152_FBAFDA0C445A96F1B689E880A707069C) == 0x000AE0, "Member 'FFortUIStylesheet::ColorMinusFireElemental_152_FBAFDA0C445A96F1B689E880A707069C' has a wrong offset!");
static_assert(offsetof(FFortUIStylesheet, ColorMinusIceElemental_154_FDA209D8429DF768ABA53EBA24C4B505) == 0x000AF0, "Member 'FFortUIStylesheet::ColorMinusIceElemental_154_FDA209D8429DF768ABA53EBA24C4B505' has a wrong offset!");
static_assert(offsetof(FFortUIStylesheet, ColorMinusBoltElemental_156_10AEFEC147C25B2DEE47619E4AB4ABC7) == 0x000B00, "Member 'FFortUIStylesheet::ColorMinusBoltElemental_156_10AEFEC147C25B2DEE47619E4AB4ABC7' has a wrong offset!");
static_assert(offsetof(FFortUIStylesheet, ColorMinusHarvestWeakPoint_159_AE0CF44C4731DAF69193D4B4E59B0E7E) == 0x000B10, "Member 'FFortUIStylesheet::ColorMinusHarvestWeakPoint_159_AE0CF44C4731DAF69193D4B4E59B0E7E' has a wrong offset!");

}
