#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_0074a8eb(int *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;

  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x25);
  /* ST_CALLSITE[0074A8F6]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(lpCriticalSection);
  iVar1 = param_1[0x1e];
  if (*(int *)(iVar1 + 0x18) == 0) {
    /* ST_CALLSITE[0074A906]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(lpCriticalSection);
    uVar2 = 0;
  }
  else {
    if (iVar1 == 0) {
      piVar3 = nullptr;
    }
    else {
      piVar3 = (int *)(iVar1 + 0xc);
    }
    /* ST_CALLSITE[0074A923]: CALL dword ptr [ECX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)(iVar1 + 0xc) + 4))(iVar1 + 0xc);
    FUN_00747406(param_1,0x16,piVar3,0);
    uVar2 = 1;
    param_1[0x18] = 1;
    /* ST_CALLSITE[0074A93C]: CALL dword ptr [EAX + 0x70] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 0x70))();
    /* ST_CALLSITE[0074A949]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)(param_1[0x1e] + 0xc) + 8))(param_1[0x1e] + 0xc);
    /* ST_CALLSITE[0074A94D]: CALL dword ptr [0x0085bb90] */
    LeaveCriticalSection(lpCriticalSection);
  }
  return uVar2;
}

