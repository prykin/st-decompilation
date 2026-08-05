#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STManBasisC.
   Evidence: this_call_owners=[STManBasisC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STManBasisC::sub_005F21D0(STManBasisC *this)

{
  dword dVar1;
  STManBasisC_field_0038DArray *pSVar2;
  DArrayTy *pDVar3;
  undefined4 *puVar4;
  short *psVar5;
  uint uVar6;

  if (this->field_0038 != nullptr) {
    dVar1 = this->field_0038->count;
    uVar6 = 0;
    if (0 < (int)dVar1) {
      do {
        pSVar2 = this->field_0038;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if ((uVar6 < pSVar2->count) &&
           (psVar5 = (short *)((int)&pSVar2->data->field_0000 + pSVar2->elementSize * uVar6),
           psVar5 != nullptr)) {
          puVar4 = thunk_FUN_005f1e40((uint)*(byte *)(psVar5 + 3),(int)*(short *)((int)psVar5 + 7),
                                      (int)(short)(*psVar5 * 0xc9 + 100),
                                      (int)(short)(psVar5[1] * 0xc9 + 100),
                                      (int)(short)(psVar5[2] * 200 + 100));
          *(undefined4 **)((int)psVar5 + 0xd) = puVar4;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)dVar1);
    }
  }
  if (this->field_003C != nullptr) {
    dVar1 = this->field_003C->count;
    uVar6 = 0;
    if (0 < (int)dVar1) {
      do {
        pDVar3 = this->field_003C;
        if (((uVar6 < pDVar3->count) &&
            (psVar5 = DArrayAt<short>(pDVar3, uVar6),
            psVar5 != nullptr)) && (*(int *)(psVar5 + 0xc) != -1)) {
          thunk_FUN_005f1700((uint)*(byte *)(psVar5 + 3),(int)*(short *)((int)psVar5 + 7),0,
                             (int)(short)(*psVar5 * 0xc9 + 100),(int)(short)(psVar5[1] * 0xc9 + 100)
                             ,(int)(short)(psVar5[2] * 200 + 100),uVar6);
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)dVar1);
    }
    return dVar1;
  }
  return 0;
}

