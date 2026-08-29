#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STBoatC.
   Evidence: this_call_owners=[STBoatC]; agreed_this_calls=9; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

int __thiscall STBoatC::sub_004601F0(STBoatC *this,int param_1)

{
  int iVar1;

  if (param_1 == 0) {
    this->field_00F4 = 0;
  }
  /* ST_CALLSITE[00460206]: CALL 0x00403b34; direct=00403B34 STBoatC::sub_0045FF50 */
  iVar1 = sub_0045FF50(this,param_1);
  if ((iVar1 == 2) && (this->field_00F4 == 1)) {
    /* ST_CALLSITE[0046021D]: CALL dword ptr [EAX + 0x20] */
    this->StopMove();
    this->field_00F4 = 0;
    iVar1 = 0;
  }
  return iVar1;
}

