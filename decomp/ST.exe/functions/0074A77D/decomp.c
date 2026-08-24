#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_0074a77d(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  int iVar2;

  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x25);
  /* ST_CALLSITE[0074A788]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(lpCriticalSection);
  if (param_1[0x19] != 1) {
    param_1[0x19] = 1;
    /* ST_CALLSITE[0074A79A]: CALL dword ptr [0x0085bee8] */
    timeBeginPeriod(1);
    /* ST_CALLSITE[0074A7A4]: CALL dword ptr [EAX + 0x40] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0x40))();
    if (param_1[0x1b] == 0) {
      /* ST_CALLSITE[0074A7B2]: CALL dword ptr [EAX + 0x60] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar1 = (**(code **)(*param_1 + 0x60))();
      /* ST_CALLSITE[0074A7B8]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection(lpCriticalSection);
      return uVar1;
    }
    /* ST_CALLSITE[0074A7C7]: CALL dword ptr [EDX + 0x54] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)(*param_1 + 0x54))(param_1[0x1b]);
    if (iVar2 == 0) {
      /* ST_CALLSITE[0074A7D1]: CALL dword ptr [0x0085bb80] */
      SetEvent((HANDLE)param_1[0x15]);
    }
  }
  /* ST_CALLSITE[0074A7D8]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection(lpCriticalSection);
  return 0;
}

