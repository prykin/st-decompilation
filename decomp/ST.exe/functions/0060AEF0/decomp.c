
int __fastcall FUN_0060aef0(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  short sVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  short sVar14;
  short sVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  bool bVar19;
  uint uVar20;
  int local_d8;
  int local_d4 [3];
  byte local_c8;
  undefined3 uStack_c7;
  byte local_c4;
  undefined3 uStack_c3;
  byte local_b8;
  undefined3 uStack_b7;
  byte local_b4;
  undefined3 uStack_b3;
  undefined1 *local_ac;
  undefined1 *local_a8;
  int local_a4;
  short local_a0 [2];
  short local_9c [2];
  int local_98;
  short local_94 [4];
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined1 *local_74;
  short local_70 [2];
  int local_6c;
  int local_68;
  short local_60 [4];
  undefined4 local_58;
  short local_50 [2];
  int local_4c;
  int local_48;
  int local_40;
  int local_3c;
  short local_34 [6];
  short local_28 [2];
  int local_24;
  short local_20 [2];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079cd38;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xfffffef8;
  local_88 = 0;
  local_4c = 0;
  local_74 = (undefined1 *)0x0;
  local_ac = (undefined1 *)0x0;
  ExceptionList = &local_14;
  puVar8 = &stack0xfffffef8;
  if (*(int *)((int)param_1 + 0x1f5) == 0x42) {
    ExceptionList = &local_14;
    iVar11 = thunk_FUN_004e60d0(*(int *)((int)param_1 + 0x1d9),0x1c);
    if (iVar11 == 0) {
      iVar11 = DAT_007950ec / 0xc9;
    }
    else {
      iVar11 = DAT_007950ec / 0xc9 + 2;
    }
    *(int *)((int)param_1 + 0x24c) = iVar11;
    puVar8 = local_1c;
  }
  local_1c = puVar8;
  iVar11 = *(int *)((int)param_1 + 0x1e9);
  sVar15 = (short)(iVar11 >> 0x1f);
  if (iVar11 < 0) {
    local_7c = (short)(((short)(iVar11 / 0xc9) + sVar15) -
                      (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_7c = (int)(short)(((short)(iVar11 / 0xc9) + sVar15) -
                           (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
  }
  iVar11 = *(int *)((int)param_1 + 0x1ed);
  sVar15 = (short)(iVar11 >> 0x1f);
  if (iVar11 < 0) {
    local_8c = (short)(((short)(iVar11 / 0xc9) + sVar15) -
                      (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_8c = (int)(short)(((short)(iVar11 / 0xc9) + sVar15) -
                           (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
  }
  iVar11 = *(int *)((int)param_1 + 0x24c);
  iVar16 = local_8c - iVar11;
  if (iVar16 < 0) {
    iVar16 = 0;
  }
  local_24 = local_7c - iVar11;
  if (local_24 < 0) {
    local_24 = 0;
  }
  iVar18 = iVar11 + 1 + local_8c;
  if (DAT_007fb242 < iVar18) {
    iVar18 = (int)DAT_007fb242;
  }
  local_68 = iVar11 + 1 + local_7c;
  if (DAT_007fb240 < local_68) {
    local_68 = (int)DAT_007fb240;
  }
  local_8 = 0;
  local_78 = iVar18;
  FUN_0072da40();
  local_a8 = &stack0xfffffef8;
  if (*(int *)((int)param_1 + 0x1f5) == 0x43) {
    local_8 = 1;
    local_a8 = &stack0xfffffef8;
    local_1c = &stack0xfffffef8;
    FUN_0072da40();
    local_74 = &stack0xfffffef8;
  }
  local_1c = &stack0xfffffef8;
  local_8 = 0xffffffff;
  local_a4 = 0;
  local_40 = iVar16;
  if (iVar16 < iVar18) {
    do {
      local_98 = local_24;
      if (local_24 < local_68) {
        do {
          local_3c = 0;
          do {
            sVar15 = (short)local_98;
            if (((((sVar15 < 0) || (DAT_007fb240 <= sVar15)) ||
                 (sVar14 = (short)local_40, sVar14 < 0)) ||
                ((DAT_007fb242 <= sVar14 || (sVar10 = (short)local_3c, sVar10 < 0)))) ||
               (DAT_007fb244 <= sVar10)) {
              piVar17 = (int *)0x0;
            }
            else {
              piVar17 = *(int **)(DAT_007fb248 +
                                 ((int)DAT_007fb246 * (int)sVar10 + (int)DAT_007fb240 * (int)sVar14
                                 + (int)sVar15) * 8);
            }
            if ((piVar17 != (int *)0x0) && (iVar11 = (**(code **)(*piVar17 + 0xf0))(), iVar11 != 0))
            {
              if ((piVar17[8] == 1000) &&
                 (iVar11 = (**(code **)(*piVar17 + 0x2c))(),
                 *(int *)(&DAT_00791d68 + iVar11 * 4) == 1)) {
                bVar19 = false;
                iVar11 = 0;
                if (0 < local_a4) {
                  do {
                    if (*(int *)(local_a8 + iVar11 * 4) == piVar17[6]) {
                      bVar19 = true;
                      break;
                    }
                    iVar11 = iVar11 + 1;
                  } while (iVar11 < local_a4);
                }
                if (bVar19) goto LAB_0060b649;
                *(int *)(local_a8 + local_a4 * 4) = piVar17[6];
                local_a4 = local_a4 + 1;
              }
              uVar13 = piVar17[9];
              if (*(int *)((int)param_1 + 0x1f5) == 0x43) {
                if ((uVar13 < 8) &&
                   ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[uVar13 * 0x51] < 8)))) {
                  bVar3 = *(byte *)(piVar17 + 9);
                  _local_b8 = CONCAT31(uStack_b7,bVar3);
                  bVar4 = *(byte *)((int)param_1 + 0x1d9);
                  _local_b4 = CONCAT31(uStack_b3,bVar4);
                  if (DAT_00808a8f == '\0') {
                    if (bVar3 == bVar4) {
LAB_0060b2ce:
                      iVar11 = 0;
                    }
                    else {
                      uVar13 = (uint)bVar3;
                      uVar20 = (uint)bVar4;
                      cVar5 = *(char *)((int)&DAT_00808a4f + uVar13 * 8 + uVar20);
                      if ((cVar5 == '\0') &&
                         (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar13) == '\0')) {
                        iVar11 = -2;
                      }
                      else if ((cVar5 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar13) == '\0')) {
                        iVar11 = -1;
                      }
                      else if ((cVar5 == '\0') &&
                              (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar13) == '\x01')) {
                        iVar11 = 1;
                      }
                      else {
                        if ((cVar5 != '\x01') ||
                           (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar13) != '\x01'))
                        goto LAB_0060b2ce;
                        iVar11 = 2;
                      }
                    }
                    bVar19 = iVar11 < 0;
                  }
                  else {
                    bVar19 = (&DAT_008087ea)[(uint)bVar4 * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar3 * 0x51];
                  }
                  if ((bVar19) && (iVar11 = (**(code **)(*piVar17 + 0xf8))(), iVar11 != 0)) {
                    puVar1 = (undefined4 *)(local_74 + local_88 * 0xc);
                    *puVar1 = piVar17;
                    uVar12 = (**(code **)(*piVar17 + 0x78))();
                    puVar1[1] = uVar12;
                    iVar11 = *(int *)((int)param_1 + 0x1ed);
                    sVar15 = (short)(iVar11 >> 0x1f);
                    if (iVar11 < 0) {
                      iVar11 = (short)(((short)(iVar11 / 0xc9) + sVar15) -
                                      (short)((longlong)iVar11 * 0x28c1979 >> 0x3f)) + -1;
                    }
                    else {
                      iVar11 = (int)(short)(((short)(iVar11 / 0xc9) + sVar15) -
                                           (short)((longlong)iVar11 * 0x28c1979 >> 0x3f));
                    }
                    iVar16 = *(int *)((int)param_1 + 0x1e9);
                    sVar15 = (short)(iVar16 >> 0x1f);
                    if (iVar16 < 0) {
                      iVar16 = (short)(((short)(iVar16 / 0xc9) + sVar15) -
                                      (short)((longlong)iVar16 * 0x28c1979 >> 0x3f)) + -1;
                    }
                    else {
                      iVar16 = (int)(short)(((short)(iVar16 / 0xc9) + sVar15) -
                                           (short)((longlong)iVar16 * 0x28c1979 >> 0x3f));
                    }
                    iVar11 = FUN_006acf90(local_98,local_40,iVar16,iVar11);
                    puVar1[2] = iVar11;
                    iVar11 = (**(code **)(*piVar17 + 0x2c))();
                    if (iVar11 == 0x23) {
                      local_4c = local_4c + 1;
                    }
                    goto LAB_0060b643;
                  }
                }
              }
              else {
                if ((uVar13 < 8) &&
                   ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[uVar13 * 0x51] < 8)))) {
                  bVar3 = *(byte *)(piVar17 + 9);
                  _local_c8 = CONCAT31(uStack_c7,bVar3);
                  bVar4 = *(byte *)((int)param_1 + 0x1d9);
                  _local_c4 = CONCAT31(uStack_c3,bVar4);
                  if (DAT_00808a8f == '\0') {
                    if (bVar3 == bVar4) {
LAB_0060b48b:
                      iVar11 = 0;
                    }
                    else {
                      uVar13 = (uint)bVar3;
                      uVar20 = (uint)bVar4;
                      cVar5 = *(char *)((int)&DAT_00808a4f + uVar13 * 8 + uVar20);
                      if ((cVar5 == '\0') &&
                         (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar13) == '\0')) {
                        iVar11 = -2;
                      }
                      else if ((cVar5 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar13) == '\0')) {
                        iVar11 = -1;
                      }
                      else if ((cVar5 == '\0') &&
                              (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar13) == '\x01')) {
                        iVar11 = 1;
                      }
                      else {
                        if ((cVar5 != '\x01') ||
                           (*(char *)((int)&DAT_00808a4f + uVar20 * 8 + uVar13) != '\x01'))
                        goto LAB_0060b48b;
                        iVar11 = 2;
                      }
                    }
                    bVar19 = iVar11 < 0;
                  }
                  else {
                    bVar19 = (&DAT_008087ea)[(uint)bVar4 * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar3 * 0x51];
                  }
                  if (bVar19) {
                    iVar11 = (**(code **)(*piVar17 + 0xf8))();
                    if ((iVar11 != 0) && (*(int *)((int)param_1 + 0x1f5) != 0x4c)) {
                      thunk_FUN_0060bdd0(param_1,piVar17);
                      goto LAB_0060b643;
                    }
                    goto LAB_0060b649;
                  }
                }
                if (*(int *)((int)param_1 + 0x1f5) == 0x4c) {
                  thunk_FUN_0060bdd0(param_1,piVar17);
                  iVar11 = FUN_006acf90(local_7c,local_8c,local_98,local_40);
                  uVar13 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
                  *(uint *)((int)param_1 + 0x1c) = uVar13;
                  iVar11 = iVar11 + (uVar13 >> 0x10) % (iVar11 * 3 + 1U);
                  thunk_FUN_004162b0(piVar17,local_70,local_a0,local_34);
                  pvVar7 = DAT_00802a88;
                  if (DAT_00802a88 != (void *)0x0) {
                    iVar16 = (int)local_34[0];
                    if ((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
                        (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                                            (int)local_70[0],(int)local_a0[0],local_d4,&local_d8),
                        iVar16 < 0)) || (4 < iVar16)) {
                      bVar19 = true;
                    }
                    else {
                      if (((local_d4[0] < 0) || (*(int *)((int)pvVar7 + 0x30) <= local_d4[0])) ||
                         ((local_d8 + (&DAT_0079aed0)[iVar16] < 0 ||
                          (*(int *)((int)pvVar7 + 0x34) <= local_d8 + (&DAT_0079aed0)[iVar16])))) {
                        bVar19 = false;
                      }
                      else {
                        bVar19 = true;
                      }
                      if ((bVar19) && (*(int *)((int)pvVar7 + 0x4c) != 0)) {
                        bVar19 = *(char *)(((&DAT_0079aed0)[iVar16] + local_d8) *
                                           *(int *)((int)pvVar7 + 0x30) +
                                           *(int *)((int)pvVar7 + 0x4c) + local_d4[0]) != '\0';
                      }
                      else {
                        bVar19 = true;
                      }
                    }
                    if (bVar19) {
                      iVar16 = (**(code **)(*piVar17 + 0x2c))();
                      uVar20 = (uint)(*(int *)(&DAT_00791d68 + iVar16 * 4) == 1);
                      uVar13 = thunk_FUN_004ad650((int)piVar17 + 0x1d5);
                      thunk_FUN_00637f40(uVar13,uVar20,iVar11);
                    }
                  }
LAB_0060b643:
                  local_88 = local_88 + 1;
                }
              }
            }
LAB_0060b649:
            local_3c = local_3c + 1;
          } while (local_3c < 5);
          local_98 = local_98 + 1;
          iVar18 = local_78;
        } while (local_98 < local_68);
      }
      local_40 = local_40 + 1;
    } while (local_40 < iVar18);
  }
  if (*(int *)((int)param_1 + 0x1f5) == 0x43) {
    if (local_4c != 0) {
      local_8 = 2;
      FUN_0072da40();
      local_8 = 0xffffffff;
      iVar11 = 0;
      local_4c = 0;
      local_6c = 0;
      local_ac = &stack0xfffffef8;
      puVar8 = &stack0xfffffef8;
      local_1c = &stack0xfffffef8;
      puVar9 = &stack0xfffffef8;
      if (0 < local_88) {
        do {
          local_1c = puVar9;
          local_ac = puVar8;
          puVar1 = (undefined4 *)(local_74 + local_6c * 0xc);
          piVar17 = (int *)*puVar1;
          iVar16 = (**(code **)(*piVar17 + 0x2c))();
          if (iVar16 == 0x23) {
            puVar1[2] = 0;
            thunk_FUN_0060bdd0(param_1,piVar17);
            puVar2 = (undefined4 *)(local_ac + iVar11 * 0xc);
            *puVar2 = *puVar1;
            puVar2[1] = puVar1[1];
            puVar2[2] = puVar1[2];
            iVar11 = iVar11 + 1;
            local_4c = iVar11;
          }
          local_6c = local_6c + 1;
          puVar8 = local_ac;
          puVar9 = local_1c;
        } while (local_6c < local_88);
      }
    }
    iVar11 = 0;
    if (0 < local_88) {
      do {
        local_80 = 0;
        if (0 < iVar11) {
          do {
            puVar1 = (undefined4 *)(local_74 + iVar11 * 0xc);
            puVar2 = (undefined4 *)(local_74 + local_80 * 0xc);
            iVar16 = puVar2[2];
            if ((int)puVar1[2] < iVar16) {
              uVar12 = puVar2[1];
              uVar6 = *puVar2;
              puVar2[2] = puVar1[2];
              puVar2[1] = puVar1[1];
              *puVar2 = *puVar1;
              puVar1[2] = iVar16;
              puVar1[1] = uVar12;
              *puVar1 = uVar6;
              local_58 = uVar12;
            }
            local_80 = local_80 + 1;
          } while (local_80 < iVar11);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < local_88);
    }
    local_84 = 0;
    local_6c = 0;
    if (0 < local_88) {
      do {
        piVar17 = *(int **)(local_74 + local_6c * 0xc);
        local_48 = 1;
        iVar11 = (**(code **)(*piVar17 + 0x2c))();
        if (((iVar11 != 0x23) && (local_4c != 0)) && (iVar11 = 0, 0 < local_4c)) {
          do {
            pvVar7 = *(void **)(local_ac + iVar11 * 0xc);
            if ((*(int *)((int)pvVar7 + 0x24) == piVar17[9]) && (*(int *)((int)pvVar7 + 0x72e) != 0)
               ) {
              thunk_FUN_00416270(piVar17,local_50,local_94,local_20);
              thunk_FUN_00416270(pvVar7,local_60,local_9c,local_28);
              iVar16 = FUN_006acf0d((int)local_50[0],(int)local_94[0],(int)local_20[0],
                                    (int)local_60[0],(int)local_9c[0],(int)local_28[0]);
              if (iVar16 < 0x3ee) {
                local_48 = 0;
                break;
              }
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 < local_4c);
        }
        if ((local_48 != 0) && (*(int *)(local_74 + local_6c * 0xc + 8) != 0)) {
          thunk_FUN_004162b0(piVar17,local_50,local_94,local_20);
          iVar11 = FUN_006acf90(local_7c,local_8c,(int)local_50[0],(int)local_94[0]);
          uVar13 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)param_1 + 0x1c) = uVar13;
          iVar11 = iVar11 + (uVar13 >> 0x10) % (iVar11 * 3 + 1U);
          uVar13 = thunk_FUN_004ad650((int)piVar17 + 0x1d5);
          thunk_FUN_00637d80(uVar13,iVar11);
          thunk_FUN_0060bdd0(param_1,piVar17);
          if (DAT_00811798 != (void *)0x0) {
            (**(code **)(*piVar17 + 0x2c))();
            thunk_FUN_006211e0(DAT_00811798,local_7c,local_8c,piVar17[9]);
          }
          local_84 = local_84 + 1;
          if (9 < local_84) {
            ExceptionList = local_14;
            return local_88;
          }
        }
        local_6c = local_6c + 1;
      } while (local_6c < local_88);
    }
  }
  ExceptionList = local_14;
  return local_88;
}

