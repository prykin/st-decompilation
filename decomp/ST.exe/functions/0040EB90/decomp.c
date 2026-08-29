#include "../../pseudocode_runtime.h"


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Unable to use type for symbol piVar10 */

undefined4 FUN_0040eb90(void)

{
  uint *puVar1;
  int iVar3;
  int iVar5;
  int *piVar6;
  int iVar4;
  int iVar8;
  int iVar2;
  int local_EAX_807;
  int iVar7;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int aiStack_a8 [6];
  uint uStack_90;
  int local_80;
  int local_7c;
  int local_74;
  int local_60;
  int local_54;
  int local_4c;
  int local_48;
  int local_40;
  int local_30;
  int local_28;
  int local_20;
  void *local_14;
  byte *puStack_10;
  undefined *puStack_c;
  uint local_8;
  undefined4 *piVar10;

  iVar3 = DAT_007f4d20;
  puStack_c = &DAT_00790040;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  iVar13 = 0;
  uStack_90 = 0x40ebd1;
  PTR_007f4d00 = (undefined4 *)(&stack0xffffff74 + DAT_007f4d20 * -0xc);
  local_8 = 0xffffffff;
  iVar11 = 0;
  ExceptionList = &local_14;
  if (0 < DAT_007f4d20) {
    iVar9 = 0;
    iVar5 = 0;
    PTR_007f4d00 = (undefined4 *)(&stack0xffffff74 + DAT_007f4d20 * -0xc);
    ExceptionList = &local_14;
    do {
      *(int *)(iVar9 + 8 + (int)PTR_007f4d00) = DAT_007f4d48 + iVar5;
      iVar11 = iVar11 + 1;
      iVar5 = iVar5 + 0x1c;
      iVar9 = iVar9 + 0xc;
    } while (iVar11 < DAT_007f4d20);
  }
  iVar11 = 0;
  local_74 = 0;
  if (0 < DAT_007f4d20) {
    piVar6 = &g_runtimeRecords_007F4D3C->field_0008;
    local_80 = DAT_007f4d20;
    do {
      iVar11 = iVar11 + 2 + ((RuntimeRecord_007F4D3C_0014 *)(piVar6 + -2))->field_0000 * 4;
      iVar13 = iVar13 + 2 + piVar6[-1] * 4;
      local_74 = local_74 + 2 + *piVar6 * 4;
      piVar6 = piVar6 + 5;
      local_80 = local_80 + -1;
    } while (local_80 != 0);
  }
  iVar5 = DAT_007f4d20 / 2;
  iVar11 = (iVar5 + iVar11) / DAT_007f4d20;
  iVar13 = (iVar5 + iVar13) / DAT_007f4d20;
  iVar5 = (iVar5 + local_74) / DAT_007f4d20;
  local_30 = 30000;
  local_4c = -30000;
  aiStack_a8[iVar3 * -3 + 6] = iVar13;
  aiStack_a8[iVar3 * -3 + 5] = iVar11;
  aiStack_a8[iVar3 * -3 + 4] = DAT_007f4d10;
  aiStack_a8[iVar3 * -3 + 3] = DAT_007f4d0c;
  aiStack_a8[iVar3 * -3 + 2] = 0x40ec90;
  local_7c = FUN_006aced8(aiStack_a8[iVar3 * -3 + 3],aiStack_a8[iVar3 * -3 + 4],
                          aiStack_a8[iVar3 * -3 + 5],aiStack_a8[iVar3 * -3 + 6]);
  if (local_7c == 0) {
    local_7c = 1;
  }
  iVar9 = local_7c >> 1;
  local_54 = 0;
  if (0 < DAT_007f4d20) {
    piVar6 = (int *)(DAT_007f4d48 + 4);
    piVar10 = PTR_007f4d00;
    do {
      aiStack_a8[iVar3 * -3 + 6] = piVar6[1] * 4 + 2;
      aiStack_a8[iVar3 * -3 + 5] = *piVar6 * 4 + 2;
      aiStack_a8[iVar3 * -3 + 4] = piVar6[-1] * 4 + 2;
      aiStack_a8[iVar3 * -3 + 3] = iVar5;
      aiStack_a8[iVar3 * -3 + 2] = iVar13;
      aiStack_a8[iVar3 * -3 + 1] = iVar11;
      aiStack_a8[iVar3 * -3] = 0x40ecfa;
      iVar4 = FUN_006aae60(aiStack_a8[iVar3 * -3 + 1],aiStack_a8[iVar3 * -3 + 2],
                           aiStack_a8[iVar3 * -3 + 3],aiStack_a8[iVar3 * -3 + 4],
                           aiStack_a8[iVar3 * -3 + 5],aiStack_a8[iVar3 * -3 + 6]);
      *piVar10 = iVar4;
      iVar8 = ((piVar6[-1] * 4 - DAT_007f4d0c) + 2) * (iVar13 - DAT_007f4d10) -
              ((*piVar6 * 4 - DAT_007f4d10) + 2) * (iVar11 - DAT_007f4d0c);
      iVar10 = iVar9;
      if (iVar8 < 0) {
        iVar10 = -iVar9;
      }
      iVar10 = (iVar8 + iVar10) / local_7c;
      piVar10[1] = iVar10;
      if (iVar10 < local_30) {
        local_30 = iVar10;
      }
      if (local_4c < iVar10) {
        local_4c = iVar10;
      }
      local_54 = local_54 + 1;
      piVar10 = piVar10 + 3;
      piVar6 = piVar6 + 7;
    } while (local_54 < DAT_007f4d20);
  }
  local_60 = 30000;
  local_20 = -30000;
  local_54 = 0;
  iVar5 = -30000;
  iVar10 = 30000;
  if (0 < DAT_007f4d20) {
    piVar6 = &g_runtimeRecords_007F4D3C->field_0004;
    do {
      aiStack_a8[iVar3 * -3 + 6] = piVar6[1] * 4 + 2;
      aiStack_a8[iVar3 * -3 + 5] = *piVar6 * 4 + 2;
      aiStack_a8[iVar3 * -3 + 4] =
           ((RuntimeRecord_007F4D3C_0014 *)(piVar6 + -1))->field_0000 * 4 + 2;
      aiStack_a8[iVar3 * -3 + 3] = DAT_007f4d1c;
      aiStack_a8[iVar3 * -3 + 2] = DAT_007f4d10;
      aiStack_a8[iVar3 * -3 + 1] = DAT_007f4d0c;
      aiStack_a8[iVar3 * -3] = 0x40edce;
      iVar2 = FUN_006aae60(aiStack_a8[iVar3 * -3 + 1],aiStack_a8[iVar3 * -3 + 2],
                           aiStack_a8[iVar3 * -3 + 3],aiStack_a8[iVar3 * -3 + 4],
                           aiStack_a8[iVar3 * -3 + 5],aiStack_a8[iVar3 * -3 + 6]);
      piVar6[2] = iVar2;
      iVar10 = ((((RuntimeRecord_007F4D3C_0014 *)(piVar6 + -1))->field_0000 * 4 - DAT_007f4d0c) + 2)
               * (iVar13 - DAT_007f4d10) -
               ((*piVar6 * 4 - DAT_007f4d10) + 2) * (iVar11 - DAT_007f4d0c);
      iVar5 = iVar9;
      if (iVar10 < 0) {
        iVar5 = -iVar9;
      }
      iVar5 = (iVar10 + iVar5) / local_7c;
      piVar6[3] = iVar5;
      if (iVar5 < local_60) {
        local_60 = iVar5;
      }
      if (local_20 < iVar5) {
        local_20 = iVar5;
      }
      local_54 = local_54 + 1;
      piVar6 = piVar6 + 5;
      iVar5 = local_20;
      iVar10 = local_60;
    } while (local_54 < DAT_007f4d20);
  }
  if (local_4c - local_30 < iVar5 - iVar10) {
    aiStack_a8[iVar3 * -3 + 6] = (int)FUN_0040f220;
    aiStack_a8[iVar3 * -3 + 5] = 0x14;
    aiStack_a8[iVar3 * -3 + 4] = DAT_007f4d20;
    aiStack_a8[iVar3 * -3 + 3] = (int)g_runtimeRecords_007F4D3C;
    aiStack_a8[iVar3 * -3 + 2] = 0x40ef66;
    FUN_006accd0((RuntimeRecord_007F4D3C_0014 *)aiStack_a8[iVar3 * -3 + 3],
                 (undefined4 *)aiStack_a8[iVar3 * -3 + 4],aiStack_a8[iVar3 * -3 + 5],
                 (callback_006ACCD0_p3 *)aiStack_a8[iVar3 * -3 + 6]);
    local_28 = 0;
    if (0 < DAT_007f4d20) {
      piVar6 = &g_runtimeRecords_007F4D3C->field_0004;
      do {
        iVar13 = 30000;
        local_54 = 0;
        if (0 < DAT_007f4d20) {
          piVar14 = PTR_007f4d00 + 2;
          do {
            if (-1 < piVar14[-2]) {
              puVar1 = (undefined4 *)*piVar14;
              aiStack_a8[iVar3 * -3 + 6] = piVar6[1];
              aiStack_a8[iVar3 * -3 + 5] = *piVar6;
              aiStack_a8[iVar3 * -3 + 4] =
                   ((RuntimeRecord_007F4D3C_0014 *)(piVar6 + -1))->field_0000;
              aiStack_a8[iVar3 * -3 + 3] = puVar1[2];
              aiStack_a8[iVar3 * -3 + 2] = puVar1[1];
              aiStack_a8[iVar3 * -3 + 1] = *puVar1;
              aiStack_a8[iVar3 * -3] = 0x40efc0;
              iVar7 = FUN_006aae60(aiStack_a8[iVar3 * -3 + 1],aiStack_a8[iVar3 * -3 + 2],
                                   aiStack_a8[iVar3 * -3 + 3],aiStack_a8[iVar3 * -3 + 4],
                                   aiStack_a8[iVar3 * -3 + 5],aiStack_a8[iVar3 * -3 + 6]);
              uVar12 = piVar14[-1] - piVar6[3] >> 0x1f;
              iVar11 = (piVar14[-1] - piVar6[3] ^ uVar12) - uVar12;
              iVar5 = iVar7 + iVar11;
              if ((iVar5 < iVar13) || ((iVar13 == iVar5 && (iVar11 < local_40)))) {
                local_48 = local_54;
                iVar13 = iVar5;
                local_40 = iVar11;
              }
            }
            local_54 = local_54 + 1;
            piVar14 = piVar14 + 3;
          } while (local_54 < DAT_007f4d20);
        }
        *(int *)(PTR_007f4d00[local_48 * 3 + 2] + 0xc) =
             ((RuntimeRecord_007F4D3C_0014 *)(piVar6 + -1))->field_0000;
        *(int *)(PTR_007f4d00[local_48 * 3 + 2] + 0x10) = *piVar6;
        *(int *)(PTR_007f4d00[local_48 * 3 + 2] + 0x14) = piVar6[1];
        PTR_007f4d00[local_48 * 3] = 0xffffffff;
        local_28 = local_28 + 1;
        piVar6 = piVar6 + 5;
      } while (local_28 < DAT_007f4d20);
    }
  }
  else {
    aiStack_a8[iVar3 * -3 + 6] = (int)FUN_0040f1d0;
    aiStack_a8[iVar3 * -3 + 5] = 0xc;
    aiStack_a8[iVar3 * -3 + 4] = DAT_007f4d20;
    aiStack_a8[iVar3 * -3 + 3] = (int)PTR_007f4d00;
    aiStack_a8[iVar3 * -3 + 2] = 0x40ee65;
    FUN_006accd0((RuntimeRecord_007F4D3C_0014 *)aiStack_a8[iVar3 * -3 + 3],
                 (undefined4 *)aiStack_a8[iVar3 * -3 + 4],aiStack_a8[iVar3 * -3 + 5],
                 (callback_006ACCD0_p3 *)aiStack_a8[iVar3 * -3 + 6]);
    local_54 = 0;
    if (0 < DAT_007f4d20) {
      piVar6 = PTR_007f4d00 + 2;
      do {
        iVar13 = 30000;
        local_28 = 0;
        if (0 < DAT_007f4d20) {
          piVar14 = &g_runtimeRecords_007F4D3C->field_0004;
          do {
            iVar11 = ((RuntimeRecord_007F4D3C_0014 *)(piVar14 + -1))->field_0000;
            if (-1 < iVar11) {
              puVar1 = (undefined4 *)*piVar6;
              aiStack_a8[iVar3 * -3 + 6] = puVar1[2];
              aiStack_a8[iVar3 * -3 + 5] = puVar1[1];
              aiStack_a8[iVar3 * -3 + 4] = *puVar1;
              aiStack_a8[iVar3 * -3 + 3] = piVar14[1];
              aiStack_a8[iVar3 * -3 + 2] = *piVar14;
              aiStack_a8[iVar3 * -3 + 1] = iVar11;
              aiStack_a8[iVar3 * -3] = 0x40eebc;
              local_EAX_807 =
                   FUN_006aae60(aiStack_a8[iVar3 * -3 + 1],aiStack_a8[iVar3 * -3 + 2],
                                aiStack_a8[iVar3 * -3 + 3],aiStack_a8[iVar3 * -3 + 4],
                                aiStack_a8[iVar3 * -3 + 5],aiStack_a8[iVar3 * -3 + 6]);
              uVar12 = piVar14[3] - piVar6[-1] >> 0x1f;
              iVar11 = (piVar14[3] - piVar6[-1] ^ uVar12) - uVar12;
              iVar5 = local_EAX_807 + iVar11;
              if ((iVar5 < iVar13) || ((iVar13 == iVar5 && (iVar11 < local_40)))) {
                local_48 = local_28;
                iVar13 = iVar5;
                local_40 = iVar11;
              }
            }
            local_28 = local_28 + 1;
            piVar14 = piVar14 + 5;
          } while (local_28 < DAT_007f4d20);
        }
        *(int *)(*piVar6 + 0xc) = g_runtimeRecords_007F4D3C[local_48].field_0000;
        *(int *)(*piVar6 + 0x10) = g_runtimeRecords_007F4D3C[local_48].field_0004;
        *(int *)(*piVar6 + 0x14) = g_runtimeRecords_007F4D3C[local_48].field_0008;
        g_runtimeRecords_007F4D3C[local_48].field_0000 = -1;
        local_54 = local_54 + 1;
        piVar6 = piVar6 + 3;
      } while (local_54 < DAT_007f4d20);
    }
  }
  ExceptionList = local_14;
  return 0;
}

