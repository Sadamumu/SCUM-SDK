#pragma once

// SCUM (0.1.17) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "SCUM_DummyPawn_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DummyPawn.DummyPawn_C
// 0x0008 (0x0380 - 0x0378)
class ADummyPawn_C : public APawn
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0378(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindObject<UClass>("BlueprintGeneratedClass DummyPawn.DummyPawn_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
