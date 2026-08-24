#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=1, ignored=0, unknown=0 */

int FUN_006d5df0(int param_1,AnonShape_006D5DF0_C24DE923 *param_2)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x58) == 0) {
    return -0x7ffbfdf7;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 0x44);
  if ((param_2->field_0004 != 0) && ((uint)param_2->field_0004 < *(uint *)(iVar1 + 0x44))) {
    return -0x7ff8ffa9;
  }
  if (0 < param_2->field_000C) {
    return -0x7ff8ffa9;
  }
  param_2->field_0004 = *(undefined4 *)(iVar1 + 0x44);
  return 0;
}

