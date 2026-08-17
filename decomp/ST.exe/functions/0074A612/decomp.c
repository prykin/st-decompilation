#include "../../pseudocode_runtime.h"


void __fastcall FUN_0074a612(int *param_1)

{
  /* ST_CALLSITE[0074A61D]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  if (param_1[0x30] != 0) {
    param_1[0x30] = 0;
    /* ST_CALLSITE[0074A639]: CALL dword ptr [EAX + 0x60] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0x60))();
  }
  /* ST_CALLSITE[0074A63D]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x25));
  return;
}

