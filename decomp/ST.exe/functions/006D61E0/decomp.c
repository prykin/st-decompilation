#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006d61e0(int *param_1)

{
  int iVar1;
  int iVar2;

  iVar1 = param_1[6];
  iVar2 = STField<int>(iVar1,0x68) + -1;
  STField<int>(iVar1,0x68) = iVar2;
  if ((iVar2 < 1) && (STField<int>(iVar1,0x6C) != 0)) {
    /* ST_CALLSITE[006D6207]: CALL dword ptr [ECX + 0x80] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(**(int **)(iVar1 + 100) + 0x80))(*(int **)(iVar1 + 100),0);
    if ((*(int *)(STField<int>(iVar1,0x5C) + 0x310) != 0) &&
       (iVar2 = *(int *)(*(int *)(STField<int>(iVar1,0x5C) + 0x288) + 0x28),
       (STField<uint>(iVar2,0x8) & 0x4000000) != 0)) {
      /* ST_CALLSITE[006D6232]: CALL dword ptr [0x0085bb90] */
      LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x4f0));
    }
    STField<undefined4>(iVar1,0x6C) = 0;
  }
  _DAT_008568fc = Library::Win32::COMSupport::FUN_00748b48(param_1);
  return;
}

