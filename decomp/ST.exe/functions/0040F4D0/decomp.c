#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void FUN_0040f4d0(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char cVar7;
  byte *puVar8;
  byte *puVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  int local_24;

  iVar1 = -(param_2 + 3 & 0xfffffffc);
  pcVar11 = &stack0xffffffbc + iVar1;
  pcVar12 = &stack0xffffffbc + iVar1;
  puVar8 = (byte *)(param_1);
  puVar9 = (byte *)(&stack0xffffffbc + iVar1);
  memmove(puVar9, puVar8, param_2); /* compiler REP MOVS byte copy */
  cVar2 = (char)param_2;
  if (param_4 == 0) {
    local_24 = param_3 / 2;
    iVar3 = 0;
    if (0 < param_3) {
      do {
        if ((&stack0xffffffbc)[iVar3 + iVar1] != '\0') {
          local_24 = local_24 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3);
    }
    uVar5 = 0;
    if (0 < param_3) {
      do {
        if (pcVar12[param_3] != '\0') {
          local_24 = local_24 + 1;
        }
        cVar7 = (char)local_24;
        if (*pcVar12 != '\0') {
          cVar7 = cVar7 + cVar2;
        }
        pcVar12[(int)param_1 - (int)(&stack0xffffffbc + iVar1)] = cVar7;
        if ((uVar5 & 1) != 0) {
          local_24 = local_24 + -1;
        }
        uVar5 = uVar5 + 1;
        pcVar12 = pcVar12 + 1;
      } while ((int)uVar5 < param_3);
    }
    if ((int)uVar5 < (int)(param_2 - param_3)) {
      pcVar12 = &stack0xffffffbc + uVar5 + iVar1;
      do {
        if (pcVar12[param_3] != '\0') {
          local_24 = local_24 + 1;
        }
        cVar7 = (char)local_24;
        if (*pcVar12 != '\0') {
          cVar7 = cVar7 + cVar2;
        }
        pcVar12[(int)param_1 - (int)(&stack0xffffffbc + iVar1)] = cVar7;
        if ((&stack0xffffffbc)[(uVar5 - param_3) + iVar1] != '\0') {
          local_24 = local_24 + -1;
        }
        uVar5 = uVar5 + 1;
        pcVar12 = pcVar12 + 1;
      } while ((int)uVar5 < (int)(param_2 - param_3));
    }
    if ((int)uVar5 < (int)param_2) {
      pcVar12 = (char *)(uVar5 + (int)param_1);
      uVar4 = param_2 - uVar5;
      do {
        if ((uVar4 & 1) == 0) {
          local_24 = local_24 + 1;
        }
        cVar7 = (char)local_24;
        if (pcVar12[(int)(&stack0xffffffbc + (iVar1 - (int)param_1))] != '\0') {
          cVar7 = cVar2 + cVar7;
        }
        *pcVar12 = cVar7;
        if ((&stack0xffffffbc)[(uVar5 - param_3) + iVar1] != '\0') {
          local_24 = local_24 + -1;
        }
        uVar5 = uVar5 + 1;
        uVar4 = uVar4 - 1;
        pcVar12 = pcVar12 + 1;
      } while ((int)uVar5 < (int)param_2);
    }
  }
  else {
    cVar7 = '\0';
    iVar10 = param_2 - param_3;
    for (iVar3 = iVar10; iVar3 < (int)param_2; iVar3 = iVar3 + 1) {
      if ((&stack0xffffffbc)[iVar3 + iVar1] != '\0') {
        cVar7 = cVar7 + '\x01';
      }
    }
    iVar3 = 0;
    if (0 < param_3) {
      do {
        if ((&stack0xffffffbc)[iVar3 + iVar1] != '\0') {
          cVar7 = cVar7 + '\x01';
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3);
    }
    iVar3 = 0;
    if (0 < param_3) {
      do {
        if (pcVar11[param_3] != '\0') {
          cVar7 = cVar7 + '\x01';
        }
        cVar6 = cVar7;
        if (*pcVar11 != '\0') {
          cVar6 = cVar2 + cVar7;
        }
        pcVar11[(int)param_1 - (int)(&stack0xffffffbc + iVar1)] = cVar6;
        if ((&stack0xffffffbc)[param_2 + (iVar3 - param_3) + iVar1] != '\0') {
          cVar7 = cVar7 + -1;
        }
        iVar3 = iVar3 + 1;
        pcVar11 = pcVar11 + 1;
      } while (iVar3 < param_3);
    }
    if (iVar3 < iVar10) {
      pcVar12 = &stack0xffffffbc + iVar3 + iVar1;
      do {
        if (pcVar12[param_3] != '\0') {
          cVar7 = cVar7 + '\x01';
        }
        cVar6 = cVar7;
        if (*pcVar12 != '\0') {
          cVar6 = cVar2 + cVar7;
        }
        pcVar12[(int)param_1 - (int)(&stack0xffffffbc + iVar1)] = cVar6;
        if ((&stack0xffffffbc)[(iVar3 - param_3) + iVar1] != '\0') {
          cVar7 = cVar7 + -1;
        }
        iVar3 = iVar3 + 1;
        pcVar12 = pcVar12 + 1;
      } while (iVar3 < iVar10);
    }
    if (iVar3 < (int)param_2) {
      pcVar12 = (char *)(iVar3 + (int)param_1);
      do {
        if ((&stack0xffffffbc)[param_3 + (iVar3 - param_2) + iVar1] != '\0') {
          cVar7 = cVar7 + '\x01';
        }
        cVar6 = cVar7;
        if (pcVar12[(int)(&stack0xffffffbc + (iVar1 - (int)param_1))] != '\0') {
          cVar6 = cVar7 + cVar2;
        }
        *pcVar12 = cVar6;
        if ((&stack0xffffffbc)[(iVar3 - param_3) + iVar1] != '\0') {
          cVar7 = cVar7 + -1;
        }
        iVar3 = iVar3 + 1;
        pcVar12 = pcVar12 + 1;
      } while (iVar3 < (int)param_2);
    }
  }
  return;
}

