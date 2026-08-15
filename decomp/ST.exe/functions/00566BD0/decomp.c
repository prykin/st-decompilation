#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as SoundManagerTy.
   Evidence: this_call_owners=[SoundManagerTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall SoundManagerTy::sub_00566BD0(SoundManagerTy *this,int param_1)

{
  uint uVar1;

  if ((param_1 != 0) && (g_sT3DSMAPContext_00807598 != nullptr)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar1 = ST3DSMAPContext::sub_006EB310(g_sT3DSMAPContext_00807598,*(uint *)(param_1 + 0x1ed));
    if (uVar1 != 0) {
      this->field_0024 = this->field_001C;
    }
  }
  return;
}

