#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 006736F0 -> 006B9910 @ 00673830 | 006B7190 -> 006B9910 @ 006B723F

   [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=2, ignored=19, unknown=0 */

undefined4 * FUN_006b9910(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;

  *(undefined4 *)param_2 = 0;
  piVar1 = (int *)*param_1;
  if (piVar1 != nullptr) {
    for (piVar2 = (int *)*piVar1; piVar2 != nullptr; piVar2 = (int *)*piVar2) {
      piVar1 = piVar2;
    }
    *piVar1 = param_2;
    return (undefined4 *)0;
  }
  *param_1 = param_2;
  return param_1;
}

