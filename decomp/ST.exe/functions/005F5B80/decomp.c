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
  char *pcVar4;
  byte *puVar5;
  uint uVar6;
  byte *puVar7;

  puVar5 = (byte *)(param_1);
  puVar7 = (byte *)&this->field_0x4d;
  memmove(puVar7, puVar5, 0x128); /* compiler REP MOVS byte copy */
  iVar3 = 0x128;
  if (this->field_0169 != nullptr) {
    pSVar2 = (STBHEShellC_field_0169DArray *)FUN_006b0060(nullptr,param_1 + 0x4b);
    this->field_0169 = pSVar2;
    iVar3 = param_1[0x4a] + 300;
  }
  this->field_008F = 0xffffffff;
  if (this->field_0169 != nullptr) {
    dVar1 = this->field_0169->count;
    uVar6 = 0;
    if (0 < (int)dVar1) {
      do {
        pSVar2 = this->field_0169;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if ((uVar6 < pSVar2->count) &&
           (pcVar4 = &pSVar2->data->field_0000 + pSVar2->elementSize * uVar6, pcVar4 != nullptr)
           ) {
          *(uint *)(pcVar4 + 0x1f) = 0xffffffff;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)dVar1);
    }
  }
  return iVar3;
}

