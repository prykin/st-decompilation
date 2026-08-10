#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=6, ignored=0, unknown=0 */

undefined4 __fastcall FUN_004168b0(int param_1)

{
  *(undefined1 *)(param_1 + 0xe3) = 1;
  *(undefined4 *)(param_1 + 0x7e) = 1;
  return 1;
}

