#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: raw retained-width parameter lifetime: width=2, reads=1, sites=005F05C8 MOV CX,word ptr
   [EBP + 0x8] */

void __thiscall FUN_005f05a0(void *this,ushort param_1,word param_2)

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
    /* ST_CALLSITE[005F05C2]: CALL dword ptr [EAX + 0x144]; [STIndirectCallsiteApplier] exact slot 0x144; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4 */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    local_24.arg0.words.high = (**(code **)(*(int *)this + 0x144))();
    local_24.arg1.words.low = param_1;
    local_24.arg1.words.high = param_2;
    local_24.id = MESS_AIBOSSCLASSTY_5DD0|MESS_SYSTEMCLASSTY_000A;
    /* ST_CALLSITE[005F05EF]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/AiBossClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
    g_aiBossClass_008117BC->GetMessage(&local_24);
  }
  return;
}

