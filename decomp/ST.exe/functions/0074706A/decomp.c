#include "../../pseudocode_runtime.h"


int FUN_0074706a(int param_1)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_8;

  iVar2 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x2c);
  /* ST_CALLSITE[0074707C]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection(lpCriticalSection);
  local_8 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)(param_1 + -0xc);
    /* ST_CALLSITE[00747095]: CALL dword ptr [EAX + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar3 = (**(code **)(*(int *)(param_1 + -0xc) + 0x18))();
    auto param_1_after_write = 0; /* compiler stack-slot lifetime split */
    if (0 < iVar3) {
      do {
        /* ST_CALLSITE[007470A9]: CALL dword ptr [EAX + 0x1c] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        piVar4 = (int *)(**(code **)(*piVar1 + 0x1c))(param_1_after_write);
        /* ST_CALLSITE[007470B5]: CALL dword ptr [EDX + 0x18] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        if (((piVar4[6] != 0) && (iVar5 = (**(code **)(*piVar4 + 0x18))(), iVar5 < 0)) &&
           (-1 < local_8)) {
          local_8 = iVar5;
        }
        param_1_after_write = param_1_after_write + 1;
      } while (param_1_after_write < iVar3);
    }
  }
  *(undefined4 *)(iVar2 + 8) = 0;
  /* ST_CALLSITE[007470D6]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection(lpCriticalSection);
  return local_8;
}

