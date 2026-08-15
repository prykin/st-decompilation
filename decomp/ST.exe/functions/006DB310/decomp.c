#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void FUN_006db310(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;

  iVar4 = param_3 * -4;
  local_18 = -(param_7 >> 1);
  local_10 = -1;
  for (local_14 = 0; local_14 < param_3; local_14 = local_14 + 1) {
    for (; local_18 < 1; local_18 = local_18 + param_3) {
      local_10 = local_10 + 1;
    }
    local_18 = local_18 - param_7;
    *(int *)(&stack0xffffffd4 + local_14 * 4 + iVar4) = local_10;
  }
  local_c = param_4;
  local_1c = -(param_8 >> 1);
  iVar11 = param_5 - param_6;
  do {
    if (local_1c < 1) {
      do {
        iVar11 = iVar11 + param_6;
        bVar12 = SCARRY4(local_1c,param_4);
        local_1c = local_1c + param_4;
      } while (local_1c == 0 || bVar12 != local_1c < 0);
    }
    iVar5 = param_3;
    piVar10 = (int *)(&stack0xffffffd4 + iVar4);
    if (((uint)param_1 & 3) != 0) {
      iVar7 = param_3;
      uVar8 = (uint)((byte)param_1 & 3 ^ 3);
      piVar10 = (int *)(&stack0xffffffd4 + iVar4);
      do {
        iVar5 = *piVar10;
        piVar10 = piVar10 + 1;
        *(undefined1 *)param_1 = *(undefined1 *)(iVar11 + iVar5);
        param_1 = (undefined4 *)((int)param_1 + 1);
        iVar5 = iVar7 + -1;
        if (iVar5 == 0 || iVar7 < 1) goto LAB_006db41f;
        uVar9 = uVar8 - 1;
        bVar12 = 0 < (int)uVar8;
        iVar7 = iVar5;
        uVar8 = uVar9;
      } while (uVar9 != 0 && bVar12);
    }
    iVar6 = iVar5 + -4;
    iVar7 = iVar6;
    if (3 < iVar5) {
      do {
        piVar1 = piVar10 + 3;
        piVar2 = piVar10 + 2;
        piVar3 = piVar10 + 1;
        iVar5 = *piVar10;
        piVar10 = piVar10 + 4;
        *param_1 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar11 + *piVar1),
                                              *(undefined1 *)(iVar11 + *piVar2)),
                                     *(undefined1 *)(iVar11 + *piVar3)),
                            *(undefined1 *)(iVar11 + iVar5));
        param_1 = param_1 + 1;
        iVar6 = iVar7 + -4;
        bVar12 = 3 < iVar7;
        iVar7 = iVar6;
      } while (iVar6 != 0 && bVar12);
    }
    iVar5 = iVar6 + 4;
    if (iVar6 + 4 != 0) {
      do {
        iVar7 = *piVar10;
        piVar10 = piVar10 + 1;
        *(undefined1 *)param_1 = *(undefined1 *)(iVar11 + iVar7);
        param_1 = (undefined4 *)((int)param_1 + 1);
        iVar7 = iVar5 + -1;
        bVar12 = 0 < iVar5;
        iVar5 = iVar7;
      } while (iVar7 != 0 && bVar12);
    }
LAB_006db41f:
    param_1 = (undefined4 *)((int)param_1 + (param_2 - param_3));
    local_1c = local_1c - param_8;
    iVar5 = local_c + -1;
    bVar12 = local_c < 1;
    local_c = iVar5;
    if (iVar5 == 0 || bVar12) {
      return;
    }
  } while( true );
}

