#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=2, ignored=0,
   unknown=0 */

int __cdecl FUN_00719900(MCIDEVICEID *param_1)

{
  MCIERROR mcierr;
  uint local_10;
  uint local_c;
  uint local_8;
  if (*param_1 == 0) {
    return 1;
  }
  local_10 = 0;
  local_8 = 0;
  local_c = 10;
  /* ST_CALLSITE[0071993B]: CALL dword ptr [0x0085bec0] */
  mcierr = mciSendCommandA(*param_1,0x80d,0x400,(DWORD_PTR)&local_10);
  if (mcierr != 0) {
    FUN_00719c90(mcierr,param_1);
    return 1;
  }
  return 0;
}

