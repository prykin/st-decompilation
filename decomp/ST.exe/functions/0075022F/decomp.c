#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0075022f(void *this,int *param_1)

{
  int *piVar1;

  /* ST_CALLSITE[00750238]: CALL dword ptr [0x0085bb8c] */
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  if (param_1 != nullptr) {
    /* ST_CALLSITE[00750249]: CALL dword ptr [EAX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 4))(param_1);
  }
  piVar1 = STField<int *>(this,0x60);
  if (piVar1 != nullptr) {
    if (STField<int>(this,0x54) != 0) {
      /* ST_CALLSITE[0075025E]: CALL dword ptr [EDX + 0x18] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 0x18))(piVar1,STField<int>(this,0x54));
      STField<undefined4>(this,0x54) = 0;
    }
    /* ST_CALLSITE[0075026B]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*STField<int *>(this,0x60) + 8))(STField<int *>(this,0x60));
  }
  STField<int *>(this,0x60) = param_1;
  FUN_00750287(this);
  /* ST_CALLSITE[00750279]: CALL dword ptr [0x0085bb90] */
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

