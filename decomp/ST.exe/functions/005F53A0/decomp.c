#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STBHEShellC::sub_005F53A0(STBHEShellC *this)

{
  dword dVar1;
  STBHEShellC_field_0169DArray *pSVar2;
  STBHEShellC_field_0169Element *pcVar3;
  uint uVar3;

  if (this->field_0169 != (STBHEShellC_field_0169DArray *)0x0) {
    dVar1 = this->field_0169->count;
    uVar3 = 0;
    if (0 < (int)dVar1) {
      do {
        pSVar2 = this->field_0169;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if (((uVar3 < pSVar2->count) &&
            (pcVar3 = (STBHEShellC_field_0169Element *)
                      (&pSVar2->data->field_0000 + pSVar2->elementSize * uVar3),
            pcVar3 != (STBHEShellC_field_0169Element *)0x0)) && (-1 < (int)pcVar3->spriteHandle)) {
          Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,pcVar3->spriteHandle);
          pcVar3->spriteHandle = 0xffffffff;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)dVar1);
    }
    DArrayDestroy((DArrayTy *)this->field_0169);
    this->field_0169 = (STBHEShellC_field_0169DArray *)0x0;
  }
  return;
}

