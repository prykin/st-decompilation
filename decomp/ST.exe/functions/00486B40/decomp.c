#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00440AA0 -> 00486B40 @ 00441236 | 00440AA0 -> 00486B40 @ 0044130B | 00440AA0 ->
   00486B40 @ 0044137D | 00440AA0 -> 00486B40 @ 00441504 | 00440AA0 -> 00486B40 @ 004415C4 |
   00440AA0 -> 00486B40 @ 00441636

   [STMethodOwnerApplier] Structural method owner recovered as STGameObjC.
   Evidence: this_call_owners=[STGameObjC]; agreed_this_calls=15; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true */

int __thiscall STGameObjC::sub_00486B40(STGameObjC *this)

{
  return this->field_0712 - this->field_0716;
}

