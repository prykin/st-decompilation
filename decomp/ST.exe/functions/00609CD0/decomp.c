#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STFieldC.
   Evidence: this_call_owners=[STFieldC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STFieldC::sub_00609CD0(STFieldC *this)

{
  dword dVar1;
  STFieldC_field_0234DArray *pSVar2;
  uint *puVar3;
  uint uVar4;

  if (this->field_0234 != (STFieldC_field_0234DArray *)0x0) {
    dVar1 = this->field_0234->count;
    uVar4 = 0;
    if (0 < (int)dVar1) {
      do {
        pSVar2 = this->field_0234;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if (((uVar4 < pSVar2->count) &&
            (puVar3 = (uint *)((int)&pSVar2->data->field_0000 + pSVar2->elementSize * uVar4),
            puVar3 != (uint *)0x0)) && (LoadImagSpr(this,uVar4), this->field_020D == 6)) {
          Library::Ourlib::ST3DSMAP::SprHide(g_sT3DSMAPContext_00807598,puVar3[0xf]);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)dVar1);
    }
  }
  return;
}

