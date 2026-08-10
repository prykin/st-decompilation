#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=3, ignored=0, unknown=0 */

undefined4 FUN_006c38d0(undefined4 *param_1,int param_2)

{
  for (; (param_1 != nullptr && (param_1[0x1e] != param_2));
      param_1 = (undefined4 *)*param_1) {
  }
  return param_1;
}

