#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as SoundManagerTy.
   Evidence: this_call_owners=[SoundManagerTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall
SoundManagerTy::sub_00566BD0(SoundManagerTy *this,RecoveredRecord_00566BD0_FD8EB056 *param_1)

{
  uint uVar1;

  if ((param_1 != nullptr) &&
     (g_sT3DSMAPContext_00807598 != nullptr)) {

    uVar1 = ST3DSMAPContext::sub_006EB310(g_sT3DSMAPContext_00807598,param_1->field_01ED);
    if (uVar1 != 0) {
      this->field_0024 = this->field_001C;
    }
  }
  return;
}

