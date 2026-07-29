#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STBHEShellC::sub_005F5B80(STBHEShellC *this,undefined4 *param_1)

{
  dword dVar1;
  STBHEShellC_field_0169DArray *pSVar2;
  int iVar3;
  STBHEShellC_field_0169Element *pcVar4;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;

  puVar4 = param_1;
  puVar6 = (undefined4 *)&this->field_0x4d;
  for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar3 = 0x128;
  if (this->field_0169 != (STBHEShellC_field_0169DArray *)0x0) {
    pSVar2 = (STBHEShellC_field_0169DArray *)FUN_006b0060((uint *)0x0,param_1 + 0x4b);
    this->field_0169 = pSVar2;
    iVar3 = param_1[0x4a] + 300;
  }
  this->field_008F = -1;
  if (this->field_0169 != (STBHEShellC_field_0169DArray *)0x0) {
    dVar1 = this->field_0169->count;
    uVar5 = 0;
    if (0 < (int)dVar1) {
      do {
        pSVar2 = this->field_0169;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if ((uVar5 < pSVar2->count) &&
           (pcVar4 = (STBHEShellC_field_0169Element *)
                     (&pSVar2->data->field_0000 + pSVar2->elementSize * uVar5),
           pcVar4 != (STBHEShellC_field_0169Element *)0x0)) {
          pcVar4->spriteHandle = 0xffffffff;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)dVar1);
    }
  }
  return iVar3;
}

