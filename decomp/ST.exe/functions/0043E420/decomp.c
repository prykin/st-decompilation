#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_eax_return.
   Evidence: every reachable RET has a full-width EAX definition established inside the callee; at
   least two direct callers consume it and no caller-use path is unresolved; machine CFG audit:
   used=6, ignored=0, unknown=0

   [STReturnSemanticsApplier] returned_pointer_parameter.
   Evidence: every reachable RET receives full EAX from the same incoming pointer parameter param_1
   (ordinal=0); no intervening full or partial accumulator definition changes that value; machine
   CFG audit: used=6, ignored=0, unknown=0 */

undefined4 * FUN_0043e420(undefined4 *param_1,char param_2)

{
  int *piVar2;
  int *piVar3;

  piVar2 = &g_packedRecords_A62x8[param_2].field18_0x2b;
  piVar3 = param_1;
  memmove(piVar3, piVar2, 0x138); /* compiler REP MOVS byte copy */
  return param_1;
}

