#include "../../pseudocode_runtime.h"


int FUN_0074ee89(int *param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0074e88e(param_1 + -1,(int *)&param_1);
  if (-1 < iVar1) {
    /* ST_CALLSITE[0074EEA9]: CALL dword ptr [ECX + 0x40] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
    /* ST_CALLSITE[0074EEB4]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_1 + 8))(param_1);
  }
  return iVar1;
}

