#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00533D10 -> 006E8640 @ 00534E78 | 005776D0 -> 006E8640 @ 00577B98

   [STMethodOwnerApplier] Structural method owner recovered as ST3DSMAPContext.
   Evidence: this_call_owners=[ST3DSMAPContext]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=3;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=2, ignored=1, unknown=0

   [STReturnSemanticsApplier] returned_pointer_parameter.
   Evidence: every reachable RET receives full EAX from the same incoming pointer parameter text
   (ordinal=1); no intervening full or partial accumulator definition changes that value; machine
   CFG audit: used=2, ignored=1, unknown=0 */

char * __thiscall ST3DSMAPContext::sub_006E8640(ST3DSMAPContext *this,char *text,char *param_2)

{
  this->field_02A0 = text;
  this->field_02A4 = param_2;
  return text;
}

