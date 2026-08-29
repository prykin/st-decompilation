#include "../../pseudocode_runtime.h"


/* [STReturnSemanticsApplier] machine_word_predicate.
   Evidence: every reachable RET is immediately dominated by an exact full-EAX definition of 0 or 1,
   and at least two resolved callers consume the machine word; machine CFG audit: used=2, ignored=0,
   unknown=0 */

int __cdecl FUN_00719bb0(MCIDEVICEID *param_1)

{
  MCIDEVICEID MVar1;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  if (*param_1 != 0) {
    local_14 = 0;
    local_10 = 0;
    local_8 = 0;
    local_c = 4;
    /* ST_CALLSITE[00719BEF]: CALL EDI */
    mciSendCommandA(*param_1,0x814,0x102,(DWORD_PTR)&local_14);
    if ((local_10 == 0x20c) || (local_10 == 0x212)) {
      MVar1 = *param_1;
    }
    else {
      local_c = 5;
      /* ST_CALLSITE[00719C1A]: CALL EDI */
      mciSendCommandA(*param_1,0x814,0x102,(DWORD_PTR)&local_14);
      if (local_10 != 0) {
        return 1;
      }
      MVar1 = *param_1;
      local_10 = 0;
    }
    if (MVar1 != 0) {
      FUN_00719560((DWORD_PTR)param_1);
      FUN_00719c60((DWORD_PTR)param_1);
    }
  }
  return 0;
}

