#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00749df1(void *this,int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  if (((*(int *)(STField<int>(this,0x78) + 0x18) != 0) && (STField<int>(this,0x70) != 1)) &&
     ((iVar1 = (**(code **)(*(int *)this + 0xa0))(), iVar1 != 1 || (param_1 == 0)))) {
    ResetEvent(STField<HANDLE>(this,0x5c));
    return 1;
  }
  SetEvent(STField<HANDLE>(this,0x5c));
  return 0;
}

