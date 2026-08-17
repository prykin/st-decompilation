#include "../../pseudocode_runtime.h"


int __fastcall FUN_0074f107(int *param_1)

{
  int iVar1;
  int *local_c;
  int *local_8;

  if (param_1[0x12] == 1) {
    iVar1 = -0x7fffbffb;
  }
  else {
    local_c = param_1;
    local_8 = param_1;
    /* ST_CALLSITE[0074F125]: CALL dword ptr [EAX + 0x2c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,&local_c);
    if (-1 < iVar1) {
      /* ST_CALLSITE[0074F132]: CALL dword ptr [0x0085bb8c] */
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
      param_1[0x10] = (int)local_c;
      param_1[0xe] = (int)local_c;
      param_1[0x11] = (int)local_8;
      param_1[0xf] = (int)local_8;
      /* ST_CALLSITE[0074F14B]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
    }
  }
  return iVar1;
}

