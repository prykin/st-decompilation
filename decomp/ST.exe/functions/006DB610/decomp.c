#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=9, ignored=0, unknown=0 */

int FUN_006db610(int param_1,int param_2)

{
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  return (int)(CONCAT44(param_1 >> 0x10,param_1 << 0x10) / (longlong)param_2);
}

