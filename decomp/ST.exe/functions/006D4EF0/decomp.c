#include "../../pseudocode_runtime.h"


int FUN_006d4ef0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  void *this;
  undefined4 *puVar1;
  int iVar2;
  int local_8;

  local_8 = 0;
  this = (void *)Library::MSVCRT::FUN_0072e530(0x318);
  if (this == nullptr) {
    puVar1 = nullptr;
  }
  else {
    puVar1 = FUN_006d4ff0(this,0,0,&local_8,param_3);
  }
  *param_1 = puVar1;
  if (local_8 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (**(code **)*puVar1)(puVar1,&DAT_007a1368,param_2);
    return iVar2;
  }
  return local_8;
}

