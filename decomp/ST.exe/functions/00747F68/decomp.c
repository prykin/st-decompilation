#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00747f68(void *this,int *param_1)

{
  undefined4 uVar1;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (**(code **)(*param_1 + 0x24))(param_1,&param_1);
  if (param_1 == STField<int *>(this,100)) {
    uVar1 = 0x80040208;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

