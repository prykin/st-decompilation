#include "../../pseudocode_runtime.h"


undefined4 FUN_0040eb90(void)

{
  int *piVar1;
  int iVar3;
  int *piVar4;
  int iVar4;
  int iVar5;
  int iVar2;
  int local_EAX_807;
  int iVar7;
  int iVar6;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *local_80;
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
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  int *piVar10;

  puVar13 = DAT_007f4d20;
  puStack_c = &DAT_00790040;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  iVar11 = 0;
  local_8 = 0;
  ExceptionList = &local_14;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  iVar9 = 0;
  DAT_007f4d00 = (int *)&stack0xffffff74;
  if (0 < (int)puVar13) {
    iVar6 = 0;
    iVar3 = 0;
    DAT_007f4d00 = (int *)&stack0xffffff74;
    do {
      *(int *)(iVar6 + 8 + (int)DAT_007f4d00) = DAT_007f4d48 + iVar3;
      iVar9 = iVar9 + 1;
      iVar3 = iVar3 + 0x1c;
      iVar6 = iVar6 + 0xc;
      puVar13 = DAT_007f4d20;
    } while (iVar9 < (int)DAT_007f4d20);
  }
  iVar9 = 0;
  local_74 = 0;
  if (0 < (int)puVar13) {
    piVar4 = DAT_007f4d3c + 2;
    local_80 = puVar13;
    do {
      iVar9 = iVar9 + 2 + piVar4[-2] * 4;
      iVar11 = iVar11 + 2 + piVar4[-1] * 4;
      local_74 = local_74 + 2 + *piVar4 * 4;
      piVar4 = piVar4 + 5;
      local_80 = (undefined4 *)((int)local_80 + -1);
    } while (local_80 != nullptr);
  }
  iVar3 = (int)puVar13 / 2;
  iVar9 = (iVar3 + iVar9) / (int)puVar13;
  iVar11 = (iVar3 + iVar11) / (int)puVar13;
  local_30 = 30000;
  local_4c = -30000;
  local_7c = FUN_006aced8(DAT_007f4d0c,DAT_007f4d10,iVar9,iVar11);
  if (local_7c == 0) {
    local_7c = 1;
  }
  iVar6 = local_7c >> 1;
  local_54 = 0;
  if (0 < (int)DAT_007f4d20) {
    piVar4 = (int *)(DAT_007f4d48 + 4);
    piVar10 = DAT_007f4d00;
    do {
      iVar4 = FUN_006aae60(iVar9,iVar11,(iVar3 + local_74) / (int)puVar13,piVar4[-1] * 4 + 2,
                           *piVar4 * 4 + 2,piVar4[1] * 4 + 2);
      *piVar10 = iVar4;
      iVar5 = ((piVar4[-1] * 4 - DAT_007f4d0c) + 2) * (iVar11 - DAT_007f4d10) -
              ((*piVar4 * 4 - DAT_007f4d10) + 2) * (iVar9 - DAT_007f4d0c);
      iVar8 = iVar6;
      if (iVar5 < 0) {
        iVar8 = -iVar6;
      }
      iVar8 = (iVar5 + iVar8) / local_7c;
      piVar10[1] = iVar8;
      if (iVar8 < local_30) {
        local_30 = iVar8;
      }
      if (local_4c < iVar8) {
        local_4c = iVar8;
      }
      local_54 = local_54 + 1;
      piVar10 = piVar10 + 3;
      piVar4 = piVar4 + 7;
    } while (local_54 < (int)DAT_007f4d20);
  }
  local_60 = 30000;
  local_20 = -30000;
  local_54 = 0;
  iVar3 = -30000;
  iVar8 = 30000;
  if (0 < (int)DAT_007f4d20) {
    piVar4 = DAT_007f4d3c + 1;
    do {
      iVar2 = FUN_006aae60(DAT_007f4d0c,DAT_007f4d10,DAT_007f4d1c,piVar4[-1] * 4 + 2,*piVar4 * 4 + 2
                           ,piVar4[1] * 4 + 2);
      piVar4[2] = iVar2;
      iVar8 = ((piVar4[-1] * 4 - DAT_007f4d0c) + 2) * (iVar11 - DAT_007f4d10) -
              ((*piVar4 * 4 - DAT_007f4d10) + 2) * (iVar9 - DAT_007f4d0c);
      iVar3 = iVar6;
      if (iVar8 < 0) {
        iVar3 = -iVar6;
      }
      iVar3 = (iVar8 + iVar3) / local_7c;
      piVar4[3] = iVar3;
      if (iVar3 < local_60) {
        local_60 = iVar3;
      }
      if (local_20 < iVar3) {
        local_20 = iVar3;
      }
      local_54 = local_54 + 1;
      piVar4 = piVar4 + 5;
      iVar3 = local_20;
      iVar8 = local_60;
    } while (local_54 < (int)DAT_007f4d20);
  }
  if (local_4c - local_30 < iVar3 - iVar8) {
    FUN_006accd0(DAT_007f4d3c,DAT_007f4d20,0x14,FUN_0040f220);
    local_28 = 0;
    if (0 < (int)DAT_007f4d20) {
      piVar4 = DAT_007f4d3c + 1;
      do {
        iVar11 = 30000;
        local_54 = 0;
        if (0 < (int)DAT_007f4d20) {
          piVar12 = DAT_007f4d00 + 2;
          do {
            if (-1 < piVar12[-2]) {
              piVar1 = (int *)*piVar12;
              iVar7 = FUN_006aae60(*piVar1,piVar1[1],piVar1[2],piVar4[-1],*piVar4,piVar4[1]);
              uVar10 = piVar12[-1] - piVar4[3] >> 0x1f;
              iVar9 = (piVar12[-1] - piVar4[3] ^ uVar10) - uVar10;
              iVar3 = iVar7 + iVar9;
              if ((iVar3 < iVar11) || ((iVar11 == iVar3 && (iVar9 < local_40)))) {
                local_48 = local_54;
                iVar11 = iVar3;
                local_40 = iVar9;
              }
            }
            local_54 = local_54 + 1;
            piVar12 = piVar12 + 3;
          } while (local_54 < (int)DAT_007f4d20);
        }
        *(int *)(DAT_007f4d00[local_48 * 3 + 2] + 0xc) = piVar4[-1];
        *(int *)(DAT_007f4d00[local_48 * 3 + 2] + 0x10) = *piVar4;
        *(int *)(DAT_007f4d00[local_48 * 3 + 2] + 0x14) = piVar4[1];
        DAT_007f4d00[local_48 * 3] = -1;
        local_28 = local_28 + 1;
        piVar4 = piVar4 + 5;
      } while (local_28 < (int)DAT_007f4d20);
    }
  }
  else {
    FUN_006accd0(DAT_007f4d00,DAT_007f4d20,0xc,FUN_0040f1d0);
    local_54 = 0;
    if (0 < (int)DAT_007f4d20) {
      piVar4 = DAT_007f4d00 + 2;
      do {
        iVar11 = 30000;
        local_28 = 0;
        if (0 < (int)DAT_007f4d20) {
          piVar12 = DAT_007f4d3c + 1;
          do {
            if (-1 < piVar12[-1]) {
              piVar1 = (int *)*piVar4;
              local_EAX_807 =
                   FUN_006aae60(piVar12[-1],*piVar12,piVar12[1],*piVar1,piVar1[1],piVar1[2]);
              uVar10 = piVar12[3] - piVar4[-1] >> 0x1f;
              iVar9 = (piVar12[3] - piVar4[-1] ^ uVar10) - uVar10;
              iVar3 = local_EAX_807 + iVar9;
              if ((iVar3 < iVar11) || ((iVar11 == iVar3 && (iVar9 < local_40)))) {
                local_48 = local_28;
                iVar11 = iVar3;
                local_40 = iVar9;
              }
            }
            local_28 = local_28 + 1;
            piVar12 = piVar12 + 5;
          } while (local_28 < (int)DAT_007f4d20);
        }
        *(undefined4 *)(*piVar4 + 0xc) = DAT_007f4d3c[local_48 * 5];
        *(undefined4 *)(*piVar4 + 0x10) = DAT_007f4d3c[local_48 * 5 + 1];
        *(undefined4 *)(*piVar4 + 0x14) = DAT_007f4d3c[local_48 * 5 + 2];
        DAT_007f4d3c[local_48 * 5] = 0xffffffff;
        local_54 = local_54 + 1;
        piVar4 = piVar4 + 3;
      } while (local_54 < (int)DAT_007f4d20);
    }
  }
  ExceptionList = local_14;
  return 0;
}

