#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00423850 -> 00419C30 @ 00423915; unproven partial register write at 0042390C | 00423C70
   -> 00419C30 @ 00423CE1; literal 65535 at 00423CDA

   [STMethodOwnerApplier] Structural method owner recovered as STGameObjC.
   Evidence: this_call_owners=[STGameObjC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true */

void __thiscall STGameObjC::sub_00419C30(STGameObjC *this,ushort param_1)

{
  this->field_0030 = param_1;
  return;
}

