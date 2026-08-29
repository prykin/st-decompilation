#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0049D750 -> 0045FF10 @ 0049D988

   [STMethodOwnerApplier] Structural method owner recovered as STGameObjC.
   Evidence: this_call_owners=[STGameObjC]; agreed_this_calls=34; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=22; owner_evidence_coverage=adequate;
   unique_primary_physical_vtable=true
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (38), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00422E20 @ 00422E38 -> read as EAX on
   every CFG path | 00422FF0 @ 00423008 -> read as EAX on every CFG path | 00436F20 @ 00437B65 ->
   read as EAX on every CFG path | 00440AA0 @ 00440D5A -> read as EAX on every CFG path | 00442E50 @
   00443306 -> read as EAX on every CFG path | 00448120 @ 00448525 -> read as EAX on every CFG path
   | 00448120 @ 0044869A -> read as EAX on every CFG path | 00448120 @ 004487EE -> read as EAX on
   every CFG path | 00448120 @ 00448BD2 -> read as EAX on every CFG path | 00448120 @ 00448BF2 ->
   read as EAX on every CFG path | 00448120 @ 00448D61 -> read as EAX on every CFG path | 00448120 @
   00448ED5 -> read as EAX on every CFG path | 00448120 @ 00449048 -> read as EAX on every CFG path
   | 00448120 @ 004491C7 -> read as EAX on every CFG path | 00448120 @ 0044931B -> read as EAX on
   every CFG path | 00491980 @ 00491983 -> read as EAX on every CFG path | 0049A620 @ 0049A7F9 ->
   read as EAX on every CFG path | 0049A620 @ 0049A805 -> read as EAX on every CFG path | 0049B4C0 @
   0049B688 -> read as EAX on every CFG path | 0049B4C0 @ 0049B694 -> read as EAX on every CFG path
   | 0049C210 @ 0049C886 -> read as EAX on every CFG path | 0049CD30 @ 0049D080 -> read as EAX on
   every CFG path | 0049D230 @ 0049D57D -> read as EAX on every CFG path | 0049D750 @ 0049D988 ->
   read as EAX on every CFG path */

int __thiscall STGameObjC::sub_0045FF10(STGameObjC *this)

{
  return this->field_045D;
}

