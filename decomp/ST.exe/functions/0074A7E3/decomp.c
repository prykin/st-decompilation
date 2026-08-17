#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_0074a7e3(int *param_1)

{
  /* ST_CALLSITE[0074A7EE]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  param_1[0x1d] = 0;
  if (param_1[0x19] == 1) {
    param_1[0x19] = 0;
    /* ST_CALLSITE[0074A806]: CALL dword ptr [EAX + 0x44] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0x44))();
    /* ST_CALLSITE[0074A80B]: CALL dword ptr [0x0085beec] */
    timeEndPeriod(1);
  }
  /* ST_CALLSITE[0074A812]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  return 0;
}

