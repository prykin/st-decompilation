#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as GameSystemC.
   Evidence: this_call_owners=[GameSystemC]; agreed_this_calls=2; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /int; every later accumulator definition is an exact full-width integer transform of that value;
   at least two resolved callers confirm that the entry is an externally observed ABI boundary;
   machine CFG audit: used=1, ignored=1, unknown=0 */

int __thiscall GameSystemC::sub_00577690(GameSystemC *this)

{
  DWORD DVar1;
  int iVar2;

  this->field_0430 = 1;
  DVar1 = STAppC::sub_006E51B0(this->field_0018);
  this->field_0020 = DVar1;
  this->field_0024 = 0;
  iVar2 = FUN_006bc360(PTR_0080679c,(undefined4 *)&this->field_0x28,nullptr);
  return iVar2;
}

