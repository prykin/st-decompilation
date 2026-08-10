#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=3, ignored=0, unknown=0

   [STReturnSemanticsApplier] returned_pointer_parameter.
   Evidence: every reachable RET receives full EAX from the same incoming pointer parameter param_1
   (ordinal=1); no intervening full or partial accumulator definition changes that value; machine
   CFG audit: used=3, ignored=0, unknown=0 */

undefined4 * __thiscall FUN_0048dc90(void *this,undefined4 *param_1)

{
  byte *puVar2;
  byte *puVar3;

  puVar2 = (byte *)((int)this + 0x49b);
  puVar3 = (byte *)(param_1);
  memmove(puVar3, puVar2, 0x42); /* compiler REP MOVS byte copy */
  return param_1;
}

