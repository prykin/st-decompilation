#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall AiFltClassTy::sub_0065D6A0(AiFltClassTy *this)

{
  STGroupBoatC *this_00;

  if ((this->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    this_00 = thunk_FUN_0042b760((char)this->field_0024,this->field_007D);
    if (this_00 != nullptr) {
      /* ST_CALLSITE[0065D6C8]: CALL 0x00402770; direct=00402770 STGroupBoatC::sub_004232E0 */
      STGroupBoatC::sub_004232E0(this_00,this);
    }
  }
  return;
}

