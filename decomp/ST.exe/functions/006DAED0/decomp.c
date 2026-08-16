#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_006daed0(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  int local_8;

  iVar1 = param_3 * -4;
  piVar4 = (int *)(&stack0xffffffe8 + iVar1);
  iVar2 = -(param_7 >> 1);
  iVar3 = -2;
  iVar5 = param_3;
  if (0 < param_3) {
    do {
      for (; iVar2 < 1; iVar2 = iVar2 + param_3) {
        iVar3 = iVar3 + 2;
      }
      *piVar4 = iVar3;
      iVar2 = iVar2 - param_7;
      piVar4 = piVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_8 = param_4;
  auto param_7_after_write = -(param_8 >> 1); /* compiler stack-slot lifetime split */
  iVar2 = param_5 - param_6;
  do {
    if (param_7_after_write < 1) {
      do {
        iVar2 = iVar2 + param_6;
        bVar6 = SCARRY4(param_7_after_write,param_4);
        param_7_after_write = param_7_after_write + param_4;
      } while (param_7_after_write == 0 || bVar6 != param_7_after_write < 0);
    }
    piVar4 = (int *)(&stack0xffffffe8 + iVar1);
    iVar3 = param_3;
    if (((uint)param_1 & 2) == 0) {
joined_r0x006daf6b:
      while (1 < iVar3) {
        *param_1 = CONCAT22(*(undefined2 *)(iVar2 + piVar4[1]),*(undefined2 *)(iVar2 + *piVar4));
        param_1 = param_1 + 1;
        piVar4 = piVar4 + 2;
        iVar3 = iVar3 + -2;
      }
      if (iVar3 + -2 != -2) {
        *(undefined2 *)param_1 = *(undefined2 *)(iVar2 + *piVar4);
        param_1 = (undefined4 *)((int)param_1 + 2);
      }
    }
    else {
      piVar4 = (int *)(&stack0xffffffec + iVar1);
      *(undefined2 *)param_1 = *(undefined2 *)(iVar2 + *(int *)(&stack0xffffffe8 + iVar1));
      param_1 = (undefined4 *)((int)param_1 + 2);
      iVar3 = param_3 + -1;
      if (iVar3 != 0 && 0 < param_3) goto joined_r0x006daf6b;
    }
    param_1 = (undefined4 *)((int)param_1 + param_2 + param_3 * -2);
    param_7_after_write = param_7_after_write - param_8;
    iVar3 = local_8 + -1;
    bVar6 = local_8 < 1;
    local_8 = iVar3;
    if (iVar3 == 0 || bVar6) {
      return;
    }
  } while( true );
}

