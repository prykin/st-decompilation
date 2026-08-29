#include "../../pseudocode_runtime.h"


void __fastcall FUN_005f06e0(RecoveredRecordView_005F0620_3EDDC37E *param_1)

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
      local_24.id = MESS_AIBOSSCLASSTY_5DD0|MESS_CURSORCLASSTY_0009;
      break;
    case 3:
    case 4:
    case 5:
      local_24.arg0.words.high = param_1->field_0032;
      local_24.id = 0x5dde;
      break;
    default:
      goto switchD_005f070c_default;
    }
    local_24.arg1.words.high = param_1->field_02AB;
    local_24.arg1.words.low = param_1->field_02A3;
    /* ST_CALLSITE[005F0750]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_aiBossClass_008117BC->GetMessage(&local_24);
  }
switchD_005f070c_default:
  return;
}

