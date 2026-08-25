#include "../../pseudocode_runtime.h"


int FUN_0074ce2d(int param_1,undefined4 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;

  if (param_2 == nullptr) {
    iVar2 = -0x7fffbffd;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + -0x30);
    /* ST_CALLSITE[0074CE48]: CALL dword ptr [0x0085bb8c] */
    EnterCriticalSection(lpCriticalSection);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = *(int *)(*(int *)(param_1 + 0x48) + 0x90);
    if (STField<int>(iVar2,0x18) == 0) {
      /* ST_CALLSITE[0074CEA0]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection(lpCriticalSection);
      iVar2 = -0x7ffbfdf6;
    }
    else {
      piVar1 = *(int **)(iVar2 + 0x9c);
      /* ST_CALLSITE[0074CE67]: CALL dword ptr [ECX + 0xc] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
      if (iVar2 < 0) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 0x48) + 0x90) + 0x98);
        *param_2 = piVar1;
        /* ST_CALLSITE[0074CE91]: CALL dword ptr [ECX + 0x4] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*piVar1 + 4))(piVar1);
        /* ST_CALLSITE[0074CE95]: CALL dword ptr [0x0085bb90] */
        LeaveCriticalSection(lpCriticalSection);
        iVar2 = 0;
      }
      else {
        /* ST_CALLSITE[0074CE72]: CALL dword ptr [0x0085bb90] */
        LeaveCriticalSection(lpCriticalSection);
      }
    }
  }
  return iVar2;
}

