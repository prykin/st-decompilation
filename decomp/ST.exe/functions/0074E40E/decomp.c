#include "../../pseudocode_runtime.h"


uint FUN_0074e40e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5
                 ,undefined4 param_6)

{
  uint uVar1;

  uVar1 = FUN_0074e337(param_1,param_2,nullptr,param_5,(int *)&param_5);
  if (-1 < (int)uVar1) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar1 = (**(code **)(*param_5 + 0x28))(param_5,param_3,param_4,param_6);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*param_5 + 8))(param_5);
  }
  return uVar1;
}

