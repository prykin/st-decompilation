#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=2; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall
ST3DSMAPContext::sub_006E6580(ST3DSMAPContext *this,RecoveredRecord_006E6580_EB58C315 *param_1)

{
  if (param_1->field_000D != '\0') {

    FUN_006b98c0((int *)&this->field_0446,(int *)param_1);
    FUN_006a5e90((short *)param_1);
    return;
  }

  FUN_006b98c0((int *)&this->field_044A,(int *)param_1);
  FUN_006a5e90((short *)param_1);
  return;
}

