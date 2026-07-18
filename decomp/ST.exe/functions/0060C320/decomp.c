
int __fastcall FUN_0060c320(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  short sVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  short sVar20;
  bool bVar21;
  undefined2 local_80 [2];
  int local_7c;
  int local_74;
  int local_6c;
  undefined1 *local_68;
  int local_64;
  int local_5c;
  int local_58;
  undefined2 local_54 [4];
  undefined4 local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int local_2c;
  undefined2 local_28 [4];
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_0079cd68;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff60;
  iVar17 = 0;
  local_74 = 0;
  local_2c = 0;
  iVar15 = *(int *)((int)param_1 + 0x1e9);
  sVar20 = (short)(iVar15 >> 0x1f);
  if (iVar15 < 0) {
    local_5c = (short)(((short)(iVar15 / 0xc9) + sVar20) -
                      (short)((longlong)iVar15 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_5c = (int)(short)(((short)(iVar15 / 0xc9) + sVar20) -
                           (short)((longlong)iVar15 * 0x28c1979 >> 0x3f));
  }
  iVar15 = *(int *)((int)param_1 + 0x1ed);
  sVar20 = (short)(iVar15 >> 0x1f);
  if (iVar15 < 0) {
    local_6c = (short)(((short)(iVar15 / 0xc9) + sVar20) -
                      (short)((longlong)iVar15 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_6c = (int)(short)(((short)(iVar15 / 0xc9) + sVar20) -
                           (short)((longlong)iVar15 * 0x28c1979 >> 0x3f));
  }
  iVar15 = *(int *)((int)param_1 + 0x24c);
  iVar18 = local_6c - iVar15;
  if (iVar18 < 0) {
    iVar17 = -iVar18;
    iVar18 = 0;
  }
  local_20 = local_5c - iVar15;
  if (local_20 < 0) {
    local_44 = -local_20;
    local_20 = 0;
  }
  else {
    local_44 = 0;
  }
  local_6c = iVar15 + 1 + local_6c;
  if (DAT_007fb242 < local_6c) {
    local_6c = (int)DAT_007fb242;
  }
  local_5c = iVar15 + 1 + local_5c;
  if (DAT_007fb240 < local_5c) {
    local_5c = (int)DAT_007fb240;
  }
  local_8 = 0;
  ExceptionList = &local_14;
  FUN_0072da40();
  local_8 = 0xffffffff;
  local_68 = &stack0xffffff60;
  puVar10 = &stack0xffffff60;
  local_64 = iVar17;
  local_40 = iVar18;
  local_1c = &stack0xffffff60;
  puVar11 = &stack0xffffff60;
  if (iVar18 < local_6c) {
    do {
      local_7c = local_20;
      local_58 = local_44;
      iVar15 = local_20;
      local_40 = iVar18;
      if (local_20 < local_5c) {
        do {
          local_3c = 0;
          local_7c = iVar15;
          do {
            iVar17 = local_3c;
            if ((&DAT_007abc64)[local_64 + local_58 * 0xf] != '\0') {
              sVar20 = (short)iVar15;
              if (((((sVar20 < 0) || (DAT_007fb240 <= sVar20)) ||
                   (sVar14 = (short)iVar18, sVar14 < 0)) ||
                  ((DAT_007fb242 <= sVar14 || (sVar16 = (short)local_3c, sVar16 < 0)))) ||
                 (DAT_007fb244 <= sVar16)) {
                piVar19 = (int *)0x0;
              }
              else {
                piVar19 = *(int **)(DAT_007fb248 +
                                   ((int)DAT_007fb246 * (int)sVar16 +
                                    (int)DAT_007fb240 * (int)sVar14 + (int)sVar20) * 8);
              }
              if (((piVar19 != (int *)0x0) &&
                  (iVar12 = (**(code **)(*piVar19 + 0xf0))(), iVar18 = local_40, iVar12 != 0)) &&
                 (((uint)piVar19[9] < 8 &&
                  ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[piVar19[9] * 0x51] < 8)))))) {
                bVar3 = *(byte *)(piVar19 + 9);
                bVar4 = *(byte *)((int)param_1 + 0x1d9);
                if (DAT_00808a8f == '\0') {
                  if (bVar3 == bVar4) {
LAB_0060c5f5:
                    iVar12 = 0;
                  }
                  else {
                    uVar8 = (uint)bVar3;
                    uVar9 = (uint)bVar4;
                    cVar5 = *(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar9);
                    if ((cVar5 == '\0') &&
                       (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8) == '\0')) {
                      iVar12 = -2;
                    }
                    else if ((cVar5 == '\x01') &&
                            (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8) == '\0')) {
                      iVar12 = -1;
                    }
                    else if ((cVar5 == '\0') &&
                            (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8) == '\x01')) {
                      iVar12 = 1;
                    }
                    else {
                      if ((cVar5 != '\x01') ||
                         (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8) != '\x01'))
                      goto LAB_0060c5f5;
                      iVar12 = 2;
                    }
                  }
                  bVar21 = iVar12 < 0;
                }
                else {
                  bVar21 = (&DAT_008087ea)[(uint)bVar4 * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar3 * 0x51];
                }
                if ((bVar21) &&
                   (iVar13 = (**(code **)(*piVar19 + 0xf8))(), iVar12 = local_74, iVar18 = local_40,
                   iVar13 != 0)) {
                  puVar1 = (undefined4 *)(local_68 + local_74 * 0xc);
                  *puVar1 = piVar19;
                  iVar13 = (**(code **)(*piVar19 + 0x78))();
                  iVar13 = iVar13 + 1;
                  iVar18 = local_40;
                  iVar17 = local_3c;
                  iVar15 = local_7c;
                  if (0 < iVar13) {
                    puVar1[1] = iVar13;
                    iVar15 = *(int *)((int)param_1 + 0x1ed);
                    sVar20 = (short)(iVar15 >> 0x1f);
                    if (iVar15 < 0) {
                      iVar15 = (short)(((short)(iVar15 / 0xc9) + sVar20) -
                                      (short)((longlong)iVar15 * 0x28c1979 >> 0x3f)) + -1;
                    }
                    else {
                      iVar15 = (int)(short)(((short)(iVar15 / 0xc9) + sVar20) -
                                           (short)((longlong)iVar15 * 0x28c1979 >> 0x3f));
                    }
                    iVar17 = *(int *)((int)param_1 + 0x1e9);
                    sVar20 = (short)(iVar17 >> 0x1f);
                    if (iVar17 < 0) {
                      iVar17 = (short)(((short)(iVar17 / 0xc9) + sVar20) -
                                      (short)((longlong)iVar17 * 0x28c1979 >> 0x3f)) + -1;
                    }
                    else {
                      iVar17 = (int)(short)(((short)(iVar17 / 0xc9) + sVar20) -
                                           (short)((longlong)iVar17 * 0x28c1979 >> 0x3f));
                    }
                    iVar15 = FUN_006acf90(local_7c,local_40,iVar17,iVar15);
                    puVar1[2] = iVar15;
                    local_2c = local_2c + iVar13;
                    local_74 = iVar12 + 1;
                    iVar18 = local_40;
                    iVar17 = local_3c;
                    iVar15 = local_7c;
                  }
                }
              }
            }
            local_3c = iVar17 + 1;
          } while (local_3c < 5);
          iVar15 = iVar15 + 1;
          local_58 = local_58 + 1;
          local_7c = iVar15;
        } while (iVar15 < local_5c);
      }
      iVar18 = iVar18 + 1;
      local_64 = local_64 + 1;
      puVar10 = local_68;
      local_40 = iVar18;
      puVar11 = local_1c;
    } while (iVar18 < local_6c);
  }
  local_1c = puVar11;
  local_68 = puVar10;
  if (local_2c != 0) {
    iVar15 = 0;
    if (0 < local_74) {
      do {
        local_64 = 0;
        if (0 < iVar15) {
          do {
            puVar1 = (undefined4 *)(local_68 + iVar15 * 0xc);
            puVar2 = (undefined4 *)(local_68 + local_64 * 0xc);
            iVar17 = puVar2[2];
            if (iVar17 < (int)puVar1[2]) {
              uVar6 = puVar2[1];
              uVar7 = *puVar2;
              puVar2[2] = puVar1[2];
              puVar2[1] = puVar1[1];
              *puVar2 = *puVar1;
              puVar1[2] = iVar17;
              puVar1[1] = uVar6;
              *puVar1 = uVar7;
              local_4c = uVar6;
            }
            local_64 = local_64 + 1;
          } while (local_64 < iVar15);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 < local_74);
    }
    local_58 = 0;
    if (0 < local_74) {
      do {
        iVar15 = *(int *)((int)(local_68 + local_58 * 0xc) + 4);
        iVar17 = *(int *)((int)param_1 + 0x209);
        bVar21 = iVar17 <= iVar15;
        if (bVar21) {
          iVar15 = iVar15 - iVar17;
        }
        puVar1 = *(undefined4 **)(local_68 + local_58 * 0xc);
        thunk_FUN_00416270(puVar1,local_54,local_80,local_28);
        thunk_FUN_0061f5c0(*(undefined4 *)((int)param_1 + 0x1d9),
                           (short)*(undefined4 *)((int)param_1 + 0x1e9) + 100,
                           (short)*(undefined4 *)((int)param_1 + 0x1ed) + 100,
                           (short)*(undefined4 *)((int)param_1 + 0x1f1) + 0xb4,local_54[0],
                           local_80[0],local_28[0]);
        if (bVar21) {
          thunk_FUN_0060bd30(param_1,puVar1,iVar15);
          *(undefined4 *)((int)param_1 + 0x209) = 0;
        }
        else {
          thunk_FUN_0060bd30(param_1,puVar1,iVar15 * 5);
          *(int *)((int)param_1 + 0x209) = *(int *)((int)param_1 + 0x209) - iVar15;
        }
      } while ((*(int *)((int)param_1 + 0x209) != 0) &&
              (local_58 = local_58 + 1, local_58 < local_74));
    }
    thunk_FUN_0060bcb0(param_1,*(int *)((int)param_1 + 0x209));
  }
  ExceptionList = local_14;
  return local_74;
}

