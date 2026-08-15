#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_0074a7e3(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  param_1[0x1d] = 0;
  if (param_1[0x19] == 1) {
    param_1[0x19] = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0x44))();
    timeEndPeriod(1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  return 0;
}

