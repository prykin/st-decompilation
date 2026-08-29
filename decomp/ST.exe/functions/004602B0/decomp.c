#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=3; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=59, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall STBoatC::sub_004602B0(STBoatC *this)

{
  /* ST_CALLSITE[004602B5]: CALL dword ptr [EAX + 0x20] */
  this->StopMove();
  this->field_00F4 = 0;
  return;
}

