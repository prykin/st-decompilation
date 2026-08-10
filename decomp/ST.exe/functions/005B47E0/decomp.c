#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as MainMenuTy.
   Evidence: this_call_owners=[MainMenuTy]; agreed_this_calls=2; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall MainMenuTy::sub_005B47E0(MainMenuTy *this)

{
  uint *puVar1;
  int local_8;

  local_8 = 0xd;
  this->field_1EDF = 1;
  puVar1 = this->field_0066;
  do {
    if (*puVar1 != 0) {
      this->field_0025 = *puVar1;
      this->field_0029 = 2;
      this->field_002D = 0x20;
      this->field_0031 = 1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this->field_000C + 0x18))(&this->field_0x1d);
    }
    puVar1 = puVar1 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

