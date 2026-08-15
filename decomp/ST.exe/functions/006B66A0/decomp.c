#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

int FUN_006b66a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                char *param_5)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined4 auStack_2c [2];
  undefined1 auStack_24 [4];
  int iStack_20;
  int *piStack_1c;
  undefined4 uStack_18;
  undefined4 **ppuStack_14;

  puVar4 = param_1;
  ppuStack_14 = &param_1;
  piStack_1c = (int *)*param_1;
  uStack_18 = 0;
  iStack_20 = 0x6b66b7;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar5 = (**(code **)(*piStack_1c + 0x58))();
  if (iVar5 == -0x7788ffe2) {
    puVar6 = (undefined1 *)((int)param_1 + 3U & 0xfffffffc);
    iStack_20 = 0x6b66de;
    iVar3 = -(int)puVar6;
    if (&piStack_1c == (int **)puVar6) {
      return -2;
    }
    piVar1 = (int *)*puVar4;
    *(undefined4 ***)((int)&iStack_20 + iVar3) = &param_1;
    *(int *)(auStack_24 + iVar3) = (int)&piStack_1c + iVar3;
    iVar5 = *piVar1;
    *(int **)((int)auStack_2c + iVar3 + 4) = piVar1;
    pcVar2 = *(code **)(iVar5 + 0x58);
    puVar8 = (undefined1 *)((int)auStack_2c + iVar3);
    *(undefined4 *)((int)auStack_2c + iVar3) = 0x6b6700;
    iVar5 = (*pcVar2)();
    if (iVar5 == 0) {
      puVar4[0xf] = *(undefined4 *)((int)&param_3 + iVar3);
      puVar4[6] = *(undefined4 *)((int)&ppuStack_14 + iVar3);
      puVar4[7] = *(undefined4 *)(&stack0xfffffff0 + iVar3);
      puVar4[8] = *(undefined4 *)(&stack0xfffffff4 + iVar3);
      puVar4[9] = *(undefined4 *)(&stack0xfffffff8 + iVar3);
      *(undefined4 *)(puVar8 + -4) = puVar4[0xc];
      *(undefined4 *)(puVar8 + -8) = 0x6b6731;
      FUN_006a5e90(*(short **)(puVar8 + -4));
      *(undefined4 *)(puVar8 + -4) = *(undefined4 *)((int)&param_5 + iVar3);
      *(undefined4 *)(puVar8 + -8) = 0x6b673a;
      pcVar7 = FUN_006c49b0(*(char **)(puVar8 + -4));
      puVar4[0xc] = pcVar7;
    }
  }
  else if (iVar5 == 0) {
    return -0xfd;
  }
  return iVar5;
}

