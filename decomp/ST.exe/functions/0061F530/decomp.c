#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STLightC::sub_0061F530(STLightC *this)

{
  STLightC_field_00A3DArray *pSVar1;
  STLightC_field_00A3Element *element_00a3;
  uint uVar2;
  bool bVar3;

  pSVar1 = this->field_00A3;
  if (pSVar1 != (STLightC_field_00A3DArray *)0x0) {
    uVar2 = 0;
    if (0 < (int)pSVar1->count) {
      bVar3 = pSVar1->count != 0;
      do {
        if (bVar3) {
          element_00a3 = DArrayAt<STLightC_field_00A3Element>(pSVar1, uVar2);
        }
        else {
          element_00a3 = (STLightC_field_00A3Element *)0x0;
        }
        if (-1 < (int)element_00a3->spriteHandle) {
          Library::Ourlib::ST3DSMAP::SprClose(g_sT3DSMAPContext_00807598,element_00a3->spriteHandle);
          element_00a3->spriteHandle = 0xffffffff;
        }
        pSVar1 = this->field_00A3;
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < pSVar1->count;
      } while ((int)uVar2 < (int)pSVar1->count);
    }
    DArrayDestroy((DArrayTy *)this->field_00A3);
    this->field_00A3 = (STLightC_field_00A3DArray *)0x0;
  }
  return;
}

