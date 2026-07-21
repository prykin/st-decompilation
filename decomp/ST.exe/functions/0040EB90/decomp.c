
undefined4 FUN_0040eb90(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
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

  puVar11 = DAT_007f4d20;
  puStack_c = &DAT_00790040;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  iVar9 = 0;
  local_8 = 0;
  ExceptionList = &local_14;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  iVar7 = 0;
  DAT_007f4d00 = (int *)&stack0xffffff74;
  if (0 < (int)puVar11) {
    iVar6 = 0;
    iVar2 = 0;
    DAT_007f4d00 = (int *)&stack0xffffff74;
    do {
      *(int *)(iVar6 + 8 + (int)DAT_007f4d00) = DAT_007f4d48 + iVar2;
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + 0x1c;
      iVar6 = iVar6 + 0xc;
      puVar11 = DAT_007f4d20;
    } while (iVar7 < (int)DAT_007f4d20);
  }
  iVar7 = 0;
  local_74 = 0;
  if (0 < (int)puVar11) {
    piVar3 = DAT_007f4d3c + 2;
    local_80 = puVar11;
    do {
      iVar7 = iVar7 + 2 + piVar3[-2] * 4;
      iVar9 = iVar9 + 2 + piVar3[-1] * 4;
      local_74 = local_74 + 2 + *piVar3 * 4;
      piVar3 = piVar3 + 5;
      local_80 = (undefined4 *)((int)local_80 + -1);
    } while (local_80 != (undefined4 *)0x0);
  }
  iVar2 = (int)puVar11 / 2;
  iVar7 = (iVar2 + iVar7) / (int)puVar11;
  iVar9 = (iVar2 + iVar9) / (int)puVar11;
  local_30 = 30000;
  local_4c = -30000;
  local_7c = FUN_006aced8(DAT_007f4d0c,DAT_007f4d10,iVar7,iVar9);
  if (local_7c == 0) {
    local_7c = 1;
  }
  iVar6 = local_7c >> 1;
  local_54 = 0;
  if (0 < (int)DAT_007f4d20) {
    piVar3 = (int *)(DAT_007f4d48 + 4);
    piVar10 = DAT_007f4d00;
    do {
      iVar4 = FUN_006aae60(iVar7,iVar9,(iVar2 + local_74) / (int)puVar11,piVar3[-1] * 4 + 2,
                           *piVar3 * 4 + 2,piVar3[1] * 4 + 2);
      *piVar10 = iVar4;
      iVar5 = ((piVar3[-1] * 4 - DAT_007f4d0c) + 2) * (iVar9 - DAT_007f4d10) -
              ((*piVar3 * 4 - DAT_007f4d10) + 2) * (iVar7 - DAT_007f4d0c);
      iVar4 = iVar6;
      if (iVar5 < 0) {
        iVar4 = -iVar6;
      }
      iVar4 = (iVar5 + iVar4) / local_7c;
      piVar10[1] = iVar4;
      if (iVar4 < local_30) {
        local_30 = iVar4;
      }
      if (local_4c < iVar4) {
        local_4c = iVar4;
      }
      local_54 = local_54 + 1;
      piVar10 = piVar10 + 3;
      piVar3 = piVar3 + 7;
    } while (local_54 < (int)DAT_007f4d20);
  }
  local_60 = 30000;
  local_20 = -30000;
  local_54 = 0;
  iVar2 = -30000;
  iVar4 = 30000;
  if (0 < (int)DAT_007f4d20) {
    piVar3 = DAT_007f4d3c + 1;
    do {
      iVar2 = FUN_006aae60(DAT_007f4d0c,DAT_007f4d10,DAT_007f4d1c,piVar3[-1] * 4 + 2,*piVar3 * 4 + 2
                           ,piVar3[1] * 4 + 2);
      piVar3[2] = iVar2;
      iVar4 = ((piVar3[-1] * 4 - DAT_007f4d0c) + 2) * (iVar9 - DAT_007f4d10) -
              ((*piVar3 * 4 - DAT_007f4d10) + 2) * (iVar7 - DAT_007f4d0c);
      iVar2 = iVar6;
      if (iVar4 < 0) {
        iVar2 = -iVar6;
      }
      iVar2 = (iVar4 + iVar2) / local_7c;
      piVar3[3] = iVar2;
      if (iVar2 < local_60) {
        local_60 = iVar2;
      }
      if (local_20 < iVar2) {
        local_20 = iVar2;
      }
      local_54 = local_54 + 1;
      piVar3 = piVar3 + 5;
      iVar2 = local_20;
      iVar4 = local_60;
    } while (local_54 < (int)DAT_007f4d20);
  }
  if (local_4c - local_30 < iVar2 - iVar4) {
    FUN_006accd0(DAT_007f4d3c,DAT_007f4d20,0x14,FUN_0040f220);
    local_28 = 0;
    if (0 < (int)DAT_007f4d20) {
      piVar3 = DAT_007f4d3c + 1;
      do {
        iVar9 = 30000;
        local_54 = 0;
        if (0 < (int)DAT_007f4d20) {
          piVar10 = DAT_007f4d00 + 2;
          do {
            if (-1 < piVar10[-2]) {
              piVar1 = (int *)*piVar10;
              iVar7 = FUN_006aae60(*piVar1,piVar1[1],piVar1[2],piVar3[-1],*piVar3,piVar3[1]);
              uVar8 = piVar10[-1] - piVar3[3] >> 0x1f;
              iVar2 = (piVar10[-1] - piVar3[3] ^ uVar8) - uVar8;
              iVar7 = iVar7 + iVar2;
              if ((iVar7 < iVar9) || ((iVar9 == iVar7 && (iVar2 < local_40)))) {
                local_48 = local_54;
                iVar9 = iVar7;
                local_40 = iVar2;
              }
            }
            local_54 = local_54 + 1;
            piVar10 = piVar10 + 3;
          } while (local_54 < (int)DAT_007f4d20);
        }
        *(int *)(DAT_007f4d00[local_48 * 3 + 2] + 0xc) = piVar3[-1];
        *(int *)(DAT_007f4d00[local_48 * 3 + 2] + 0x10) = *piVar3;
        *(int *)(DAT_007f4d00[local_48 * 3 + 2] + 0x14) = piVar3[1];
        DAT_007f4d00[local_48 * 3] = -1;
        local_28 = local_28 + 1;
        piVar3 = piVar3 + 5;
      } while (local_28 < (int)DAT_007f4d20);
    }
  }
  else {
    FUN_006accd0(DAT_007f4d00,DAT_007f4d20,0xc,FUN_0040f1d0);
    local_54 = 0;
    if (0 < (int)DAT_007f4d20) {
      piVar3 = DAT_007f4d00 + 2;
      do {
        iVar9 = 30000;
        local_28 = 0;
        if (0 < (int)DAT_007f4d20) {
          piVar10 = DAT_007f4d3c + 1;
          do {
            if (-1 < piVar10[-1]) {
              piVar1 = (int *)*piVar3;
              iVar7 = FUN_006aae60(piVar10[-1],*piVar10,piVar10[1],*piVar1,piVar1[1],piVar1[2]);
              uVar8 = piVar10[3] - piVar3[-1] >> 0x1f;
              iVar2 = (piVar10[3] - piVar3[-1] ^ uVar8) - uVar8;
              iVar7 = iVar7 + iVar2;
              if ((iVar7 < iVar9) || ((iVar9 == iVar7 && (iVar2 < local_40)))) {
                local_48 = local_28;
                iVar9 = iVar7;
                local_40 = iVar2;
              }
            }
            local_28 = local_28 + 1;
            piVar10 = piVar10 + 5;
          } while (local_28 < (int)DAT_007f4d20);
        }
        *(undefined4 *)(*piVar3 + 0xc) = DAT_007f4d3c[local_48 * 5];
        *(undefined4 *)(*piVar3 + 0x10) = DAT_007f4d3c[local_48 * 5 + 1];
        *(undefined4 *)(*piVar3 + 0x14) = DAT_007f4d3c[local_48 * 5 + 2];
        DAT_007f4d3c[local_48 * 5] = 0xffffffff;
        local_54 = local_54 + 1;
        piVar3 = piVar3 + 3;
      } while (local_54 < (int)DAT_007f4d20);
    }
  }
  ExceptionList = local_14;
  return 0;
}

