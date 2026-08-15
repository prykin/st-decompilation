#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004be1a0(int *param_1)

{
  int iVar1;

  if ((STField<byte>(param_1,0x1d1) & 2) == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*param_1 + 0xf8))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

