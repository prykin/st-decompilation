#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] typed_machine_return.
   Evidence: every reachable RET carries one identical concrete 32-bit type from an exact typed
   global load or trusted call return; stores and tests preserve that EAX value; machine CFG audit:
   used=1, ignored=0, unknown=0 */

int __thiscall FUN_006e5380(void *this,int param_1,undefined4 *param_2)

{
  int iVar1;

  iVar1 = FUN_006e3450(STField<DArrayTy *>(this,0x10),param_1,nullptr,param_2);
  return iVar1;
}

