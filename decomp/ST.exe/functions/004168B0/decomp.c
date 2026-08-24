#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] repair_false_machine_eax_return.
   Evidence: the earlier machine return was admitted only because a self-zeroing XOR/SUB was
   misclassified as reading the call result; every resolved caller now proves an exact EAX kill;
   machine CFG audit: used=0, ignored=6, unknown=0 */

void __fastcall FUN_004168b0(int param_1)

{
  ((undefined1 *)param_1)[0xe3] = 1;
  *(undefined4 *)(param_1 + 0x7e) = 1;
  return;
}

