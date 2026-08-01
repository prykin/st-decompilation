#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STBHEShellC::sub_005F53A0(STBHEShellC *this)

{
  dword dVar1;
  STBHEShellC_field_0169DArray *pSVar2;
  char *pcVar3;
  uint uVar4;

  if (this->field_0169 != (STBHEShellC_field_0169DArray *)0x0) {
    dVar1 = this->field_0169->count;
    uVar4 = 0;
    if (0 < (int)dVar1) {
      do {
        pSVar2 = this->field_0169;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if (((uVar4 < pSVar2->count) &&
            (pcVar3 = &pSVar2->data->field_0000 + pSVar2->elementSize * uVar4, pcVar3 != (char *)0x0
            )) && (-1 < (int)*(uint *)(pcVar3 + 0x1f))) {
          Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,*(uint *)(pcVar3 + 0x1f));
          *(uint *)(pcVar3 + 0x1f) = 0xffffffff;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)dVar1);
    }
    DArrayDestroy((DArrayTy *)this->field_0169);
    this->field_0169 = (STBHEShellC_field_0169DArray *)0x0;
  }
  return;
}

