#include "../../pseudocode_runtime.h"


int FUN_006b9a40(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;

  piVar1 = FUN_006bfb70(0x170);
  *param_2 = (int)piVar1;
  if (piVar1 == nullptr) {
    return -2;
  }
  *piVar1 = 0x1e;
  *(undefined4 *)(*param_2 + 4) = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar2 = (**(code **)(**(int **)(param_1 + 0x30) + 0x20))
                    (*(int **)(param_1 + 0x30),0,0,param_2,FUN_006b9aa0);
  if (iVar2 != 0) {
    FreeAndNull(param_2);
  }
  return iVar2;
}

