
int FUN_0040fc40(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  int local_12c;
  int local_114;
  int *local_108;
  int local_104;
  uint local_100;
  int local_fc;
  int local_f8;
  int local_ac;
  uint local_9c;
  uint local_94;
  int local_8c;
  int local_88;
  int local_84;
  uint local_78;
  int local_74;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44 [8];
  undefined4 *local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00790060;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffec8;
  local_50 = 0;
  if (param_6 == 0) {
    if (200 < DAT_007f4d20) {
      return -4;
    }
    if (param_1 < 0) {
      return -4;
    }
    if (DAT_007f4d2c <= param_1) {
      return -4;
    }
    if (param_2 < 0) {
      return -4;
    }
    if (DAT_007f4d30 <= param_2) {
      return -4;
    }
    if (param_3 < 0) {
      return -4;
    }
    if (DAT_007f4d34 <= param_3) {
      return -4;
    }
    DAT_007f4d14 = 0;
    local_44[6] = DAT_007f4d20;
  }
  else {
    local_44[6] = param_6;
  }
  local_44[0] = 0;
  local_44[1] = 0;
  local_44[2] = 0;
  local_44[3] = 0;
  local_44[4] = 0;
  local_48 = DAT_007f4d30 * DAT_007f4d2c;
  local_44[5] = (int)(0 < DAT_007f4d24);
  local_24 = (undefined4 *)0x0;
  if (0 < param_4) {
    param_1 = param_1 - (DAT_007f4d38 * param_4 >> 0x10);
    param_2 = param_2 + (DAT_007f4d28 * param_4 >> 0x10);
  }
  uVar15 = *(uint *)(&DAT_007a4b88 + param_5 * 8);
  local_20 = *(int *)(&DAT_007a4b8c + param_5 * 8);
  if ((int)(local_20 * uVar15) < DAT_007f4d20) {
    local_20 = 5;
  }
  iVar11 = local_20 * uVar15;
  iVar3 = local_20 / 2;
  if (4 < iVar3 + param_3) {
    param_3 = 4 - iVar3;
  }
  if (param_3 - iVar3 < 0) {
    param_3 = iVar3;
  }
  iVar3 = param_3 - iVar3;
  param_1 = param_1 * 4 + 2;
  param_2 = param_2 * 4 + 2;
  local_5c = (int)(uVar15 + ((int)uVar15 >> 0x1f & 7U)) >> 3;
  if (local_5c == 0) {
    local_5c = 1;
  }
  uVar9 = DAT_007f4d28 * 4;
  uVar16 = DAT_007f4d38 * 4;
  iVar8 = (uVar16 ^ (int)uVar16 >> 0x1f) - ((int)uVar16 >> 0x1f);
  iVar4 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f);
  if (iVar4 < iVar8) {
    ExceptionList = &local_14;
    local_ac = FUN_006db610(uVar9,iVar8);
    local_ac = local_ac << 2;
    local_8c = (((int)uVar16 < 1) - 1 & 0x80000) - 0x40000;
  }
  else {
    ExceptionList = &local_14;
    local_1c = &stack0xfffffec8;
    local_8c = FUN_006db610(uVar16,iVar4);
    local_8c = local_8c << 2;
    local_ac = (((int)uVar9 < 1) - 1 & 0x80000) - 0x40000;
  }
  iVar12 = -((int)uVar15 / 2) * local_ac;
  iVar8 = -((int)uVar15 / 2) * local_8c;
  iVar4 = DAT_007f4d2c;
  do {
    local_84 = 0;
    if ((local_44[6] < iVar11) && (local_44[5] != 0)) {
      if (local_24 == (undefined4 *)0x0) {
        local_8 = 0;
        Library::MSVCRT::FUN_0072da40();
        local_1c = &stack0xfffffec8;
        local_24 = (undefined4 *)&stack0xfffffec8;
        local_8 = 0xffffffff;
      }
      puVar17 = local_24;
      for (uVar9 = uVar15 * 5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *puVar17 = 0;
        puVar17 = puVar17 + 1;
      }
      for (uVar9 = uVar15 * 5 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar17 = 0;
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      }
      local_78 = 0;
      iVar4 = DAT_007f4d2c;
      if (0 < local_20) {
        do {
          local_74 = local_78 * uVar15;
          iVar18 = 0;
          if (0 < (int)uVar15) {
            iVar10 = iVar8 + 0x8000;
            iVar5 = iVar12 + 0x8000;
            do {
              local_68 = (iVar5 >> 0x10) + param_1 >> 2;
              local_6c = (iVar10 >> 0x10) + param_2 >> 2;
              if ((((-1 < local_68) && (local_68 < iVar4)) && (-1 < local_6c)) &&
                 ((local_6c < DAT_007f4d30 &&
                  (uVar9 = iVar4 * local_6c + local_68 + (local_78 + iVar3) * local_48 ^ 7,
                  iVar4 = DAT_007f4d2c,
                  (*(byte *)(DAT_007f4cfc + ((int)uVar9 >> 3)) >> (uVar9 & 7) & 1) != 0)))) {
                local_84 = local_84 + 1;
                local_44[local_78 + iVar3] = local_44[local_78 + iVar3] + 1;
                *(undefined1 *)(iVar18 + local_74 + (int)local_24) = 1;
                iVar4 = DAT_007f4d2c;
              }
              iVar5 = iVar5 + local_ac;
              iVar10 = iVar10 + local_8c;
              iVar18 = iVar18 + 1;
            } while (iVar18 < (int)uVar15);
          }
          local_78 = local_78 + 1;
        } while ((int)local_78 < local_20);
      }
    }
    local_104 = local_44[6];
    if (local_84 < iVar11) {
      if (local_84 + local_44[6] < iVar11) {
        if (local_84 < 1) {
          if ((int)uVar15 / 2 < local_44[6]) {
            if ((int)uVar15 < local_44[6]) {
              local_78 = 0;
              if (0 < local_20) {
                do {
                  local_4c = ((int)(local_20 - local_78) / 2 + local_44[6]) /
                             (int)(local_20 - local_78);
                  iVar18 = iVar8 - local_8c;
                  iVar10 = iVar12 - local_ac;
                  if ((local_78 & 1) == 0) {
                    iVar10 = (iVar12 - local_ac) - ((int)(local_ac + (local_ac >> 0x1f & 3U)) >> 2);
                    iVar18 = (iVar8 - local_8c) - ((int)(local_8c + (local_8c >> 0x1f & 3U)) >> 2);
                  }
                  local_64 = (int)((uVar15 + 1) * local_ac) / (local_4c + 1);
                  local_58 = (int)((uVar15 + 1) * local_8c) / (local_4c + 1);
                  local_12c = local_4c;
                  if (0 < local_4c) {
                    do {
                      iVar10 = iVar10 + local_64;
                      iVar18 = iVar18 + local_58;
                      local_68 = (iVar10 + 0x8000 >> 0x10) + param_1 >> 2;
                      local_6c = (iVar18 + 0x8000 >> 0x10) + param_2 >> 2;
                      *(int *)(DAT_007f4d3c + DAT_007f4d14 * 0x14) = local_68;
                      *(int *)(DAT_007f4d3c + 4 + DAT_007f4d14 * 0x14) = local_6c;
                      *(uint *)(DAT_007f4d3c + 8 + DAT_007f4d14 * 0x14) = local_78 + iVar3;
                      DAT_007f4d14 = DAT_007f4d14 + 1;
                      if (((-1 < local_68) && (local_68 < DAT_007f4d2c)) &&
                         ((-1 < local_6c && (local_6c < DAT_007f4d30)))) {
                        uVar9 = DAT_007f4d2c * local_6c + local_68 + (local_78 + iVar3) * local_48 ^
                                7;
                        pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar9 >> 3));
                        *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
                      }
                      local_12c = local_12c + -1;
                      iVar4 = DAT_007f4d2c;
                    } while (local_12c != 0);
                  }
                  local_44[6] = local_44[6] - local_4c;
                  local_78 = local_78 + 1;
                } while ((int)local_78 < local_20);
              }
            }
            else {
              iVar18 = iVar12 - local_ac;
              local_60 = iVar8 - local_8c;
              local_ac = (int)((uVar15 + 1) * local_ac) / (local_44[6] + 1);
              local_8c = (int)((uVar15 + 1) * local_8c) / (local_44[6] + 1);
              local_94 = 0;
              if (0 < local_44[6]) {
                iVar10 = local_60 + 0x8000;
                iVar18 = iVar18 + 0x8000;
                do {
                  local_78 = *(uint *)(&DAT_007a4bd8 + (local_94 & 7) * 4);
                  iVar18 = iVar18 + local_ac;
                  iVar10 = iVar10 + local_8c;
                  local_68 = (iVar18 >> 0x10) + param_1 >> 2;
                  local_6c = (iVar10 >> 0x10) + param_2 >> 2;
                  *(int *)(DAT_007f4d3c + DAT_007f4d14 * 0x14) = local_68;
                  *(int *)(DAT_007f4d3c + 4 + DAT_007f4d14 * 0x14) = local_6c;
                  *(uint *)(DAT_007f4d3c + 8 + DAT_007f4d14 * 0x14) = param_3 + local_78;
                  DAT_007f4d14 = DAT_007f4d14 + 1;
                  if ((((-1 < local_68) && (local_68 < DAT_007f4d2c)) && (-1 < local_6c)) &&
                     (local_6c < DAT_007f4d30)) {
                    uVar9 = DAT_007f4d2c * local_6c + local_68 + (local_78 + param_3) * local_48 ^ 7
                    ;
                    pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar9 >> 3));
                    *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
                  }
                  local_94 = local_94 + 1;
                  iVar4 = DAT_007f4d2c;
                } while ((int)local_94 < local_44[6]);
              }
            }
          }
          else {
            iVar18 = iVar12 - local_ac;
            local_60 = iVar8 - local_8c;
            local_ac = (int)((uVar15 + 1) * local_ac) / (local_44[6] + 1);
            local_8c = (int)((uVar15 + 1) * local_8c) / (local_44[6] + 1);
            if (0 < local_44[6]) {
              iVar10 = local_60 + 0x8000;
              iVar18 = iVar18 + 0x8000;
              local_114 = local_44[6];
              do {
                iVar18 = iVar18 + local_ac;
                iVar10 = iVar10 + local_8c;
                local_68 = (iVar18 >> 0x10) + param_1 >> 2;
                local_6c = (iVar10 >> 0x10) + param_2 >> 2;
                *(int *)(DAT_007f4d3c + DAT_007f4d14 * 0x14) = local_68;
                *(int *)(DAT_007f4d3c + 4 + DAT_007f4d14 * 0x14) = local_6c;
                *(int *)(DAT_007f4d3c + 8 + DAT_007f4d14 * 0x14) = param_3;
                DAT_007f4d14 = DAT_007f4d14 + 1;
                if (((-1 < local_68) && (local_68 < DAT_007f4d2c)) &&
                   ((-1 < local_6c && (local_6c < DAT_007f4d30)))) {
                  uVar9 = local_48 * param_3 + local_68 + DAT_007f4d2c * local_6c ^ 7;
                  pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar9 >> 3));
                  *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
                }
                local_114 = local_114 + -1;
                iVar4 = DAT_007f4d2c;
              } while (local_114 != 0);
            }
          }
        }
        else {
          local_78 = 0;
          if (0 < local_20) {
            do {
              if (local_44[local_78 + iVar3] < (int)uVar15) {
                FUN_0040f4d0((undefined4 *)(local_78 * uVar15 + (int)local_24),uVar15,local_5c,0);
                iVar4 = DAT_007f4d2c;
              }
              local_78 = local_78 + 1;
            } while ((int)local_78 < local_20);
          }
          if (0 < local_104) {
            do {
              local_88 = 30000;
              uVar9 = 0;
              local_78 = 0;
              if (0 < local_20) {
                local_108 = local_44 + iVar3;
                iVar4 = 30000;
                uVar16 = local_9c;
                do {
                  iVar18 = *local_108;
                  iVar10 = iVar18;
                  local_9c = uVar9;
                  iVar5 = iVar18;
                  if (((iVar4 <= iVar18) &&
                      (iVar10 = iVar4, local_9c = uVar16, iVar5 = local_88, iVar4 == iVar18)) &&
                     (uVar6 = local_20 / 2 - uVar9, uVar13 = (int)uVar6 >> 0x1f,
                     uVar7 = local_20 / 2 - uVar16, uVar14 = (int)uVar7 >> 0x1f, iVar10 = iVar18,
                     local_9c = uVar9, iVar5 = iVar18,
                     (int)((uVar7 ^ uVar14) - uVar14) <= (int)((uVar6 ^ uVar13) - uVar13))) {
                    iVar10 = local_88;
                    local_9c = uVar16;
                    iVar5 = local_88;
                  }
                  local_88 = iVar5;
                  uVar9 = uVar9 + 1;
                  local_108 = local_108 + 1;
                  iVar4 = iVar10;
                  uVar16 = local_9c;
                  local_78 = uVar9;
                } while ((int)uVar9 < local_20);
              }
              iVar4 = local_9c + iVar3;
              local_44[iVar4] = local_44[iVar4] + 1;
              iVar18 = FUN_0040f840((byte *)(local_9c * uVar15 + (int)local_24),uVar15,local_5c,0);
              local_68 = (iVar18 * local_ac + 0x8000 + iVar12 >> 0x10) + param_1 >> 2;
              local_6c = (iVar18 * local_8c + 0x8000 + iVar8 >> 0x10) + param_2 >> 2;
              *(int *)(DAT_007f4d3c + DAT_007f4d14 * 0x14) = local_68;
              *(int *)(DAT_007f4d3c + 4 + DAT_007f4d14 * 0x14) = local_6c;
              *(int *)(DAT_007f4d3c + 8 + DAT_007f4d14 * 0x14) = iVar4;
              DAT_007f4d14 = DAT_007f4d14 + 1;
              if ((((-1 < local_68) && (local_68 < DAT_007f4d2c)) && (-1 < local_6c)) &&
                 (local_6c < DAT_007f4d30)) {
                uVar9 = DAT_007f4d2c * local_6c + local_68 + iVar4 * local_48 ^ 7;
                pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar9 >> 3));
                *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
              }
              local_104 = local_104 + -1;
              iVar4 = DAT_007f4d2c;
            } while (local_104 != 0);
          }
        }
        local_44[6] = 0;
      }
      else {
        local_78 = 0;
        if (0 < local_20) {
          do {
            if (0 < (int)uVar15) {
              local_f8 = iVar8 + 0x8000;
              local_fc = iVar12 + 0x8000;
              local_100 = uVar15;
              do {
                local_68 = (local_fc >> 0x10) + param_1 >> 2;
                local_6c = (local_f8 >> 0x10) + param_2 >> 2;
                if (((local_68 < 0) || (iVar4 <= local_68)) ||
                   ((local_6c < 0 || (DAT_007f4d30 <= local_6c)))) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                if ((!bVar2) ||
                   (uVar9 = iVar4 * local_6c + local_68 + (local_78 + iVar3) * local_48 ^ 7,
                   (*(byte *)(DAT_007f4cfc + ((int)uVar9 >> 3)) >> (uVar9 & 7) & 1) == 0)) {
                  *(int *)(DAT_007f4d3c + DAT_007f4d14 * 0x14) = local_68;
                  *(int *)(DAT_007f4d3c + 4 + DAT_007f4d14 * 0x14) = local_6c;
                  *(uint *)(DAT_007f4d3c + 8 + DAT_007f4d14 * 0x14) = local_78 + iVar3;
                  DAT_007f4d14 = DAT_007f4d14 + 1;
                  local_44[6] = local_44[6] + -1;
                  if (bVar2) {
                    uVar9 = DAT_007f4d2c * local_6c + local_68 + (local_78 + iVar3) * local_48 ^ 7;
                    pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar9 >> 3));
                    *pbVar1 = *pbVar1 | '\x01' << (uVar9 & 7);
                  }
                }
                local_fc = local_fc + local_ac;
                local_f8 = local_f8 + local_8c;
                local_100 = local_100 - 1;
                iVar4 = DAT_007f4d2c;
              } while (local_100 != 0);
            }
            local_78 = local_78 + 1;
          } while ((int)local_78 < local_20);
        }
      }
    }
    iVar18 = 0;
    if (local_44[6] < 1) {
      iVar3 = local_50;
      if (param_6 != 0) goto LAB_0041098f;
      local_44[7] = 0;
      iVar3 = DAT_007f4d3c;
      if (0 < DAT_007f4d14) goto LAB_00410872;
      goto LAB_00410987;
    }
    param_1 = param_1 - (DAT_007f4d38 * 4 >> 0x10);
    param_2 = param_2 + ((DAT_007f4d28 << 2) >> 0x10);
    local_44[5] = 1;
  } while (((-1 < param_1) && (param_1 < iVar4)) &&
          ((-1 < param_2 &&
           (((param_2 < DAT_007f4d30 && (-1 < param_3)) && (param_3 < DAT_007f4d34))))));
LAB_004109fd:
  iVar3 = -4;
  goto LAB_0041098f;
LAB_00410872:
  do {
    local_68 = *(int *)(iVar18 + iVar3);
    local_6c = *(int *)(iVar18 + 4 + iVar3);
    local_78 = *(uint *)(iVar18 + 8 + iVar3);
    if ((((local_68 < 0) || (iVar4 <= local_68)) || (local_6c < 0)) ||
       ((DAT_007f4d30 <= local_6c ||
        (*(short *)(DAT_007f4cf0 + (local_78 * local_48 + local_68 + iVar4 * local_6c) * 2) != 0))))
    {
      iVar3 = FUN_0040f270(&local_68,&local_6c,(int *)&local_78,DAT_007f4d0c >> 2,DAT_007f4d10 >> 2,
                           DAT_007f4d1c >> 2,param_1 >> 2,param_2 >> 2,param_3 >> 2);
      if (iVar3 != 0) goto LAB_004109fd;
      uVar15 = local_78 * local_48 + local_68 + DAT_007f4d2c * local_6c ^ 7;
      pbVar1 = (byte *)(DAT_007f4cfc + ((int)uVar15 >> 3));
      *pbVar1 = *pbVar1 | '\x01' << (uVar15 & 7);
      *(int *)(iVar18 + DAT_007f4d3c) = local_68;
      *(int *)(iVar18 + 4 + DAT_007f4d3c) = local_6c;
      *(uint *)(iVar18 + 8 + DAT_007f4d3c) = local_78;
      iVar3 = DAT_007f4d3c;
      iVar4 = DAT_007f4d2c;
    }
    local_44[7] = local_44[7] + 1;
    iVar18 = iVar18 + 0x14;
  } while (local_44[7] < DAT_007f4d14);
LAB_00410987:
  FUN_0040eb90();
  iVar3 = local_50;
LAB_0041098f:
  if (iVar3 == 0) {
    ExceptionList = local_14;
    return 0;
  }
  if (iVar3 == -4) {
    ExceptionList = local_14;
    return -4;
  }
  RaiseInternalException(iVar3,DAT_007ed77c,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0xa4b);
  ExceptionList = local_14;
  return iVar3;
}

