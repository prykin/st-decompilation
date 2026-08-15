#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0055DEE0 -> 0055EE70 @ 0055DF1B */

int FUN_0055ee70(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  byte *pbVar12;
  byte *pbVar13;
  int local_34;
  int local_28;

  iVar5 = param_2 * -4;
  pbVar9 = &stack0xffffffb0 + iVar5;
  pcVar10 = &stack0xffffffb0 + iVar5;
  pcVar11 = &stack0xffffffb0 + iVar5;
  pbVar12 = &stack0xffffffb0 + iVar5;
  puVar7 = &stack0xffffffb0 + iVar5;
  iVar6 = 0;
  iVar3 = param_2 * -2 + 3;
  local_28 = 0;
  do {
    iVar8 = local_28;
    iVar1 = param_2;
    *puVar7 = (char)iVar1;
    puVar7[1] = -(char)iVar6;
    local_28 = iVar8 + 1;
    puVar7 = puVar7 + 2;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 6 + iVar6 * 4;
      param_2 = iVar1;
    }
    else {
      iVar3 = iVar3 + 10 + (iVar6 - iVar1) * 4;
      param_2 = iVar1 + -1;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < param_2);
  if ((iVar6 == param_2) && (param_2 != iVar1)) {
    (&stack0xffffffb0)[local_28 * 2 + iVar5] = (char)param_2;
    (&stack0xffffffb1)[local_28 * 2 + iVar5] = -(char)iVar6;
    local_28 = iVar8 + 2;
  }
  if (0 < iVar8) {
    pcVar2 = &stack0xffffffb0 + local_28 * 2 + iVar5;
    pcVar4 = &stack0xffffffb0 + iVar8 * 2 + iVar5;
    local_28 = local_28 + iVar8;
    do {
      *pcVar2 = -pcVar4[1];
      pcVar2[1] = -*pcVar4;
      pcVar2 = pcVar2 + 2;
      pcVar4 = pcVar4 + -2;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  iVar3 = 0;
  iVar5 = 0;
  local_34 = 0;
  pbVar13 = param_1;
  do {
    if (iVar5 < 1) {
      *pbVar13 = *pbVar9;
      pbVar13[1] = pbVar9[1];
      iVar5 = iVar5 + param_3;
      iVar3 = iVar3 + 1;
      pbVar13 = pbVar13 + 2;
    }
    iVar5 = iVar5 + -1;
    local_34 = local_34 + 1;
    pbVar9 = pbVar9 + 2;
  } while (local_34 < local_28);
  iVar6 = 0;
  pbVar9 = param_1 + iVar3 * 2;
  do {
    if (iVar5 < 1) {
      *pbVar9 = pcVar10[1];
      pbVar9[1] = -*pcVar10;
      iVar5 = iVar5 + param_3;
      iVar3 = iVar3 + 1;
      pbVar9 = pbVar9 + 2;
    }
    iVar5 = iVar5 + -1;
    iVar6 = iVar6 + 1;
    pcVar10 = pcVar10 + 2;
  } while (iVar6 < local_28);
  iVar6 = 0;
  pbVar9 = param_1 + iVar3 * 2;
  do {
    if (iVar5 < 1) {
      *pbVar9 = -*pcVar11;
      pbVar9[1] = -pcVar11[1];
      iVar5 = iVar5 + param_3;
      iVar3 = iVar3 + 1;
      pbVar9 = pbVar9 + 2;
    }
    iVar5 = iVar5 + -1;
    iVar6 = iVar6 + 1;
    pcVar11 = pcVar11 + 2;
  } while (iVar6 < local_28);
  iVar6 = 0;
  pbVar9 = param_1 + iVar3 * 2;
  do {
    if (iVar5 < 1) {
      *pbVar9 = -pbVar12[1];
      pbVar9[1] = *pbVar12;
      iVar5 = iVar5 + param_3;
      iVar3 = iVar3 + 1;
      pbVar9 = pbVar9 + 2;
    }
    iVar5 = iVar5 + -1;
    iVar6 = iVar6 + 1;
    pbVar12 = pbVar12 + 2;
  } while (iVar6 < local_28);
  return iVar3;
}

