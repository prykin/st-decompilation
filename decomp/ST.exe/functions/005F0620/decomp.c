#include "../../pseudocode_runtime.h"


void __fastcall FUN_005f0620(AnonShape_005F0620_60AA17CE *param_1)

{
  int iVar1;
  STMessage *pSVar2;
  STMessage local_24;

  if (g_aiBossClass_008117BC != nullptr) {
    pSVar2 = &local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->unknown_00 = 0;
      pSVar2 = (STMessage *)&pSVar2->unknown_04;
    }
    switch(param_1->field_02B1) {
    case 0:
    case 1:
    case 2:
      local_24.arg0.words.high = param_1->field_0032;
      local_24.id = MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008;
      break;
    case 3:
    case 4:
    case 5:
      local_24.arg0.words.high = param_1->field_0032;
      local_24.id = MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008|MESS_SHARED_0005;
      break;
    default:
      goto switchD_005f064c_default;
    }
    local_24.arg1.words.low = param_1->field_02A3;
    local_24.arg1.words.high = param_1->field_02AB;
    /* ST_CALLSITE[005F0690]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_aiBossClass_008117BC->GetMessage(&local_24);
  }
switchD_005f064c_default:
  return;
}

