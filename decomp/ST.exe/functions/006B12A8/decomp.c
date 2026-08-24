#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_scalar_return.
   Evidence: every reachable RET carries a machine-proven scalar domain; exact negative immediate
   returns establish signed int while zero is a signedness-neutral member of that same domain;
   machine CFG audit: used=5, ignored=0, unknown=0 */

int __cdecl FUN_006b12a8(int param_1,int param_2)

{
  return (int)(((longlong)param_1 * (longlong)DAT_007eda8c) / (longlong)param_2);
}

