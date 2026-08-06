#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManBasisC.
   Evidence: this_call_owners=[STManBasisC]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STManBasisC::sub_005F2110(STManBasisC *this,undefined4 *param_1)

{
  DArrayTy *pDVar1;
  STManBasisC_field_0038DArray *pSVar2;
  DArrayTy *pDVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  ushort **ppuVar8;

  puVar6 = param_1;
  ppuVar8 = &this->field_0020;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppuVar8 = (ushort *)*puVar6;
    puVar6 = puVar6 + 1;
    ppuVar8 = ppuVar8 + 1;
  }
  DAT_00811788 = this->field_0034;
  piVar7 = param_1 + 10;
  if (this->field_0038 != nullptr) {
    pSVar2 = (STManBasisC_field_0038DArray *)FUN_006b0060(nullptr,param_1 + 0xb);
    this->field_0038 = pSVar2;
    piVar7 = (int *)((int)(param_1 + 0xb) + *piVar7);
  }
  if (this->field_003C != nullptr) {
    pDVar2 = FUN_006b0060(nullptr,(uint *)(piVar7 + 1));
    this->field_003C = pDVar2;
    uVar5 = 0;
    if (0 < (int)pDVar2->count) {
      do {
        pDVar1 = this->field_003C;
        if ((uVar5 < pDVar1->count) &&
           (pvVar3 = DArrayAt<void>(pDVar1, uVar5),
           pvVar3 != nullptr)) {
          STField<undefined4>(pvVar3,0x18) = 0xffffffff;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)this->field_003C->count);
    }
  }
  return 0x28;
}

