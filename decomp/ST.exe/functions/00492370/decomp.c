#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0049DFA0 -> 00492370 @ 0049E11D | 0049DFA0 -> 00492370 @ 0049E318 | 004A0990 ->
   00492370 @ 004A0B1B

   [STMethodOwnerApplier] Structural method owner recovered as STGameObjC.
   Evidence: this_call_owners=[STGameObjC]; agreed_this_calls=9; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (9), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0044D320 @ 0044DA53 -> read as EAX on
   every CFG path | 0044D320 @ 0044DCA5 -> read as EAX on every CFG path | 0049DFA0 @ 0049E11D ->
   read as EAX on every CFG path | 0049DFA0 @ 0049E318 -> read as EAX on every CFG path | 0049E510 @
   0049E652 -> read as EAX on every CFG path | 004A0990 @ 004A0B1B -> read as EAX on every CFG path
   | 004A0FA0 @ 004A1E0A -> read as EAX on every CFG path | 004A0FA0 @ 004A1FF2 -> read as EAX on
   every CFG path | 004A0FA0 @ 004A2B46 -> read as EAX on every CFG path */

int __thiscall STGameObjC::sub_00492370(STGameObjC *this)

{
  return (int)this->field_07CA;
}

