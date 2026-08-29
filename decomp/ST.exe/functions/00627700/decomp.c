#include "../../pseudocode_runtime.h"


void __fastcall FUN_00627700(RecoveredRecordView_00627700_48F6BAEF *param_1)

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
    local_24.arg0.words.low = param_1->field_0024;
    local_24.arg0.words.high = param_1->field_0032;
    local_24.arg1.words.low = param_1->field_0262;
    if (param_1->field_02A1 == 0) {
      local_24.arg1.words.high = 0xffff;
    }
    else {
      local_24.arg1.words.high = param_1->field_02A5;
    }
    local_24.id = 0x5de3;
    /* ST_CALLSITE[00627768]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_aiBossClass_008117BC->GetMessage(&local_24);
  }
  return;
}

