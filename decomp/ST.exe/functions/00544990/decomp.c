#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (6), none consume AL/AX, and every RET path defines full EAX; sites=005449B0 @ 00545079
   -> TEST TEST EAX,EAX | 005449B0 @ 00545337 -> TEST TEST EAX,EAX | 005449B0 @ 0054545E -> TEST
   TEST EAX,EAX | 005449B0 @ 005455EC -> TEST TEST EAX,EAX | 005449B0 @ 0054614F -> TEST TEST
   EAX,EAX | 0054AEE0 @ 0054AF24 -> TEST TEST EAX,EAX

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0054AEE0 -> 00544990 @ 0054AF24

   [STMethodOwnerApplier] Structural method owner recovered as CursorClassTy.
   Evidence: this_call_owners=[CursorClassTy]; agreed_this_calls=6; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

int __thiscall CursorClassTy::sub_00544990(CursorClassTy *this)

{
  return (uint)(this->field_0493 == 2);
}

