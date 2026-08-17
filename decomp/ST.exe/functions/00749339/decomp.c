#include "../../pseudocode_runtime.h"


int FUN_00749339(int *param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;

  lpCriticalSection =
       (LPCRITICAL_SECTION)(-(uint)(param_1 + -3 != nullptr) & (uint)(param_1 + 1));
  /* ST_CALLSITE[0074934F]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(lpCriticalSection);
  if (param_1[0x11] == 0) {
    param_1[0x11] = 1;
    if (param_1[0x12] == 0) {
      /* ST_CALLSITE[00749372]: CALL dword ptr [EAX + 0x14] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar1 = (**(code **)(param_1[-3] + 0x14))();
      if (iVar1 < 0) {
        param_1[0x11] = 0;
        /* ST_CALLSITE[00749380]: CALL dword ptr [0x0085bb90] */
        LeaveCriticalSection(lpCriticalSection);
        return iVar1;
      }
      /* ST_CALLSITE[0074938D]: CALL dword ptr [EAX + 0x4] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*param_1 + 4))(param_1);
    }
    else {
      param_1[0x12] = 0;
    }
  }
  /* ST_CALLSITE[00749391]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

