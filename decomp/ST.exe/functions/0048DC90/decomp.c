#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=3, ignored=0, unknown=0

   [STReturnSemanticsApplier] returned_pointer_parameter.
   Evidence: the complete machine CFG returns incoming pointer parameter param_1 (ordinal=1);
   restore its exact formal pointer type after the obsolete void-pointer normalization

   [STMethodOwnerApplier] Structural method owner recovered as STGameObjC.
   Evidence: this_call_owners=[STGameObjC]; agreed_this_calls=3; incoming_this_accesses=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true */

uint * __thiscall STGameObjC::sub_0048DC90(STGameObjC *this,undefined4 *param_1)

{
  byte *puVar2;
  byte *puVar3;

  puVar2 = (byte *)&this->field_0x49b;
  puVar3 = (byte *)(param_1);
  memmove(puVar3, puVar2, 0x42); /* compiler REP MOVS byte copy */
  return param_1;
}

