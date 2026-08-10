#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3

   [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /undefined4; every later accumulator definition is an exact full-width integer transform of that
   value; machine CFG audit: used=3, ignored=0, unknown=0 */

undefined4 __thiscall
StartSystemTy::sub_006E5360(StartSystemTy *this,int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 uVar1;

  uVar1 = FUN_006e3450(this->field_0010,param_1,param_2,param_3);
  return uVar1;
}

