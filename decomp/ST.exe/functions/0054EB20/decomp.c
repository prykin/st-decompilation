#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_0054eb20(void *this,uint *param_1)

{
  int iVar1;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *local_8;

  local_8 = *(int **)((int)this + 0x65);
  iVar1 = FUN_006b98c0((int *)((int)this + 0x65),local_8);
  if (iVar1 != 0) {
    *(int *)((int)this + 0x69) = *(int *)((int)this + 0x69) + -1;
  }
  if (local_8 != (int *)0x0) {
    if (param_1 != (uint *)0x0) {
      *param_1 = local_8[1];
    }
    uVar3 = *param_1;
    piVar4 = local_8 + 2;
    piVar5 = *(int **)((int)this + 0x3d);
    memmove(piVar5, piVar4, uVar3); /* compiler REP MOVS byte copy */
    FreeAndNull(&local_8);
    return 1;
  }
  return 0;
}

