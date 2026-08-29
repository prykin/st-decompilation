#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManBasisC.
   Evidence: this_call_owners=[STManBasisC]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STManBasisC::sub_005F2110(STManBasisC *this,undefined4 *param_1)

{
  DArrayTy *pDVar1;
  DArrayTy *pSVar2;
  DArrayTy *pDVar2;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  ushort **ppuVar7;

  puVar5 = param_1;
  ppuVar7 = &this->field_0020;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppuVar7 = (ushort *)*puVar5;
    puVar5 = puVar5 + 1;
    ppuVar7 = ppuVar7 + 1;
  }
  DAT_00811788 = this->field_0034;
  piVar6 = param_1 + 10;
  if (this->field_0038 != nullptr) {
    /* ST_CALLSITE[005F2142]: CALL 0x006b0060; direct=006B0060 FUN_006b0060; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/STManBasisC_field_0038DArray; source view only; no Ghidra override */
    pSVar2 = FUN_006b0060(nullptr,param_1 + 0xb);
    this->field_0038 = (STManBasisC_field_0038DArray *)pSVar2;
    piVar6 = (int *)((int)(param_1 + 0xb) + *piVar6);
  }
  if (this->field_003C != nullptr) {
    pDVar2 = FUN_006b0060(nullptr,(uint *)(piVar6 + 1));
    this->field_003C = pDVar2;
    uVar4 = 0;
    if (0 < (int)pDVar2->count) {
      do {
        pDVar1 = this->field_003C;
        if ((uVar4 < pDVar1->count) &&
           (pvVar2 = DArrayAt<void>(pDVar1, uVar4),
           pvVar2 != nullptr)) {
          STField<undefined4>(pvVar2,0x18) = 0xffffffff;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)this->field_003C->count);
    }
  }
  return 0x28;
}

