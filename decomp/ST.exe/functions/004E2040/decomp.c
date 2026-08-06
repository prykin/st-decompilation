#include "../../pseudocode_runtime.h"


undefined4 __fastcall FUN_004e2040(void *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int local_8;

  iVar3 = 0;
  local_8 = 0;
  piVar2 = (int *)((int)param_1 + 0x4e4);
  do {
    uVar1 = thunk_FUN_004e22f0(param_1,iVar3);
    if (uVar1 != 0) {
      local_8 = local_8 + ((*piVar2 - piVar2[-1]) * *(int *)(&DAT_007e085c + piVar2[-3] * 4)) /
                          *piVar2;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 10;
  } while (iVar3 < 2);
  thunk_FUN_004d76e0(STField<char>(param_1,0x24),4,STField<int *>(param_1,0x18),0,0,local_8,0);
  return 0;
}

