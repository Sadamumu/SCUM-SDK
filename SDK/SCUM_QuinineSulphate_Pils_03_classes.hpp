#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_QuinineSulphate_Pils_03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass QuinineSulphate_Pils_03.QuinineSulphate_Pils_03_C
// 0x0000 (0x07A0 - 0x07A0)
class AQuinineSulphate_Pils_03_C : public AMedicationItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass QuinineSulphate_Pils_03.QuinineSulphate_Pils_03_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
