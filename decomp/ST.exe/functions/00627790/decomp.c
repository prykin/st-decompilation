#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006239A0 -> 00627790 @ 00623B42; STMineSetC::sub_006239A0 this; stable alias ESI */

void __fastcall FUN_00627790(STMineSetC *param_1)

{
  int iVar1_mg1;
  int iVar1;
  STMessage *pSVar2;
  STMessage local_28;
  int local_8;

  if (g_aiBossClass_008117BC != nullptr) {
    pSVar2 = &local_28;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      pSVar2->unknown_00 = 0;
      pSVar2 = (STMessage *)&pSVar2->unknown_04;
    }
    local_28.arg0.words.low = *(undefined2 *)&param_1->field_0024;
    local_28.arg0.words.high = param_1->field_0032;
    if ((((AnonShape_005EFAE0_B406B78B *)param_1->field_0241 == nullptr)
        || (iVar1_mg1 = STPlaySystemC::sub_006E62D0
                                  (g_playSystem_00802A38,
                                   (AnonShape_005EFAE0_B406B78B *)param_1->field_0241,&local_8),
           iVar1_mg1 == -4)) || (local_8 == 0)) {
      local_28.arg1.words.low = 0xff;
      local_28.arg1.words.high = 0xffff;
    }
    else {
      local_28.arg1.words.low = STField<word>(local_8,0x24);
      local_28.arg1.words.high = STField<word>(local_8,0x32);
    }
    local_28.id = 0x5de4;
    /* ST_CALLSITE[00627816]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_aiBossClass_008117BC->GetMessage(&local_28);
    return;
  }
  return;
}

