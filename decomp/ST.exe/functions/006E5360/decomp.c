#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as StartSystemTy.
   Evidence: this_call_owners=[StartSystemTy]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3

   [STReturnSemanticsApplier] forwarded_call_return.
   Evidence: every reachable RET receives full EAX from a trusted concrete callee with return type
   /undefined4; every later accumulator definition is an exact full-width integer transform of that
   value; machine CFG audit: used=3, ignored=0, unknown=0

   [STReturnSemanticsApplier] typed_machine_return.
   Evidence: every reachable RET carries one identical concrete 32-bit type from an exact typed
   global load or trusted call return; stores and tests preserve that EAX value; machine CFG audit:
   used=3, ignored=0, unknown=0 */

int __thiscall
StartSystemTy::sub_006E5360(StartSystemTy *this,int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;

  iVar1 = FUN_006e3450(this->field_0010,param_1,param_2,param_3);
  return iVar1;
}

