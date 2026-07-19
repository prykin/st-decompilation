
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_004af080(uint param_1,int param_2,int *param_3,int *param_4,int *param_5,int param_6,int param_7
            ,undefined4 param_8,int param_9)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  short sVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  short sVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  short sVar20;
  int iVar21;
  bool bVar22;
  undefined4 local_50;
  int local_40;
  char *local_3c;
  char *local_30;
  int local_2c;
  int local_28;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  short local_a;
  short local_8;
  short local_6;
  
  local_50 = 0;
  bVar4 = false;
  bVar5 = false;
  local_40 = -1;
  sVar6 = DAT_007fb242;
  if (DAT_007fb242 <= (short)_DAT_007fb240) {
    sVar6 = (short)_DAT_007fb240;
  }
  local_28 = 1;
  local_2c = 1;
  if (*(int *)(&DAT_00791d68 + param_2 * 4) == 1) {
    local_28 = 2;
    local_2c = 2;
  }
  puVar8 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(DAT_007fb246 * 5);
  local_14 = 0;
  do {
    iVar9 = DAT_007fb246 * local_14;
    local_1c = 0;
    if (0 < DAT_007fb242) {
      do {
        iVar10 = (int)DAT_007fb240;
        iVar21 = 0;
        iVar18 = iVar10 * local_1c;
        if (0 < iVar10) {
          do {
            local_10 = *(int **)(DAT_007fb248 +
                                (iVar10 * local_1c + iVar21 + DAT_007fb246 * local_14) * 8);
            if (local_10 == (int *)0x0) {
              sVar20 = (short)iVar21;
              if ((((sVar20 < 0) || ((short)_DAT_007fb240 <= sVar20)) ||
                  (sVar7 = (short)local_1c, sVar7 < 0)) ||
                 (((DAT_007fb242 <= sVar7 || (sVar15 = (short)local_14, sVar15 < 0)) ||
                  (DAT_007fb244 <= sVar15)))) {
LAB_004af1d5:
                *(undefined1 *)(iVar21 + iVar18 + iVar9 + (int)puVar8) = 3;
              }
              else {
                sVar20 = *(short *)(DAT_007fb280 +
                                   ((int)sVar15 * (int)DAT_007fb27e + (int)sVar7 * (int)DAT_007fb278
                                   + (int)sVar20) * 2);
                if (sVar20 == 0) {
                  *(undefined1 *)(iVar21 + iVar18 + iVar9 + (int)puVar8) = 0;
                }
                else {
                  if (sVar20 == -1) goto LAB_004af1d5;
                  *(undefined1 *)(iVar21 + iVar18 + iVar9 + (int)puVar8) = 1;
                }
              }
            }
            else {
              if (((uint)local_10[9] < 8) &&
                 ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[local_10[9] * 0x51] < 8)))) {
                bVar2 = *(byte *)(local_10 + 9);
                if (*(char *)(DAT_00806728 + 0x146f) == '\0') {
                  if (bVar2 == (byte)param_1) {
LAB_004af2f0:
                    iVar10 = 0;
                  }
                  else {
                    uVar19 = (uint)bVar2;
                    uVar16 = param_1 & 0xff;
                    cVar3 = *(char *)(uVar16 + uVar19 * 8 + 0x142f + DAT_00806728);
                    if ((cVar3 == '\0') &&
                       (*(char *)(uVar19 + uVar16 * 8 + 0x142f + DAT_00806728) == '\0')) {
                      iVar10 = -2;
                    }
                    else if ((cVar3 == '\x01') &&
                            (*(char *)(uVar19 + uVar16 * 8 + 0x142f + DAT_00806728) == '\0')) {
                      iVar10 = -1;
                    }
                    else if ((cVar3 == '\0') &&
                            (*(char *)(uVar19 + uVar16 * 8 + 0x142f + DAT_00806728) == '\x01')) {
                      iVar10 = 1;
                    }
                    else {
                      if ((cVar3 != '\x01') ||
                         (*(char *)(uVar19 + uVar16 * 8 + 0x142f + DAT_00806728) != '\x01'))
                      goto LAB_004af2f0;
                      iVar10 = 2;
                    }
                  }
                  bVar22 = iVar10 < 0;
                }
                else {
                  bVar22 = *(char *)((param_1 & 0xff) * 0x51 + 0x11ca + DAT_00806728) !=
                           *(char *)((uint)bVar2 * 0x51 + 0x11ca + DAT_00806728);
                }
                if (bVar22) {
                  *(undefined1 *)(iVar21 + iVar18 + iVar9 + (int)puVar8) = 4;
                  goto LAB_004af325;
                }
              }
              *(undefined1 *)(iVar21 + iVar18 + iVar9 + (int)puVar8) = 5;
            }
LAB_004af325:
            iVar21 = iVar21 + 1;
            iVar10 = (int)(short)_DAT_007fb240;
          } while (iVar21 < iVar10);
        }
        local_1c = local_1c + 1;
      } while (local_1c < DAT_007fb242);
    }
    local_14 = local_14 + 1;
  } while (local_14 < 4);
  if (DAT_007fa150 != 0) {
    *(undefined4 *)(DAT_007fa150 + 4) = 0;
    iVar9 = FUN_006b1190(DAT_007fa150,&local_10);
    while (-1 < iVar9) {
      if (local_10 != (int *)0x0) {
        thunk_FUN_004162b0(local_10,&local_6,&local_8,&local_a);
        *(undefined1 *)
         ((int)puVar8 +
         (int)local_6 + (int)local_a * (int)DAT_007fb246 + (int)local_8 * (int)DAT_007fb240) = 2;
      }
      iVar9 = FUN_006b1190(DAT_007fa150,&local_10);
    }
  }
  local_14 = 0;
  do {
    local_1c = 0;
    if (0 < DAT_007fb242) {
      do {
        local_18 = 0;
        if (0 < DAT_007fb240) {
          do {
            iVar9 = local_14;
            if (local_14 < local_14 + 1) {
              do {
                if (DAT_007fb244 <= iVar9) goto LAB_004afc34;
                if (local_1c < local_28 + local_1c) {
                  iVar18 = DAT_007fb240 * local_1c;
                  iVar10 = local_1c;
                  do {
                    if (DAT_007fb242 <= iVar10) goto LAB_004afc34;
                    for (iVar21 = local_18; iVar21 < local_2c + local_18; iVar21 = iVar21 + 1) {
                      if ((DAT_007fb240 <= iVar21) ||
                         (*(char *)(iVar18 + iVar21 + DAT_007fb246 * iVar9 + (int)puVar8) != '\0'))
                      goto LAB_004afc34;
                    }
                    iVar18 = iVar18 + DAT_007fb240;
                    iVar10 = iVar10 + 1;
                  } while (iVar10 < local_28 + local_1c);
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < local_14 + 1);
            }
            if (0 < local_14) {
              if (local_1c < local_1c + local_28) {
                iVar10 = (int)DAT_007fb240;
                local_30 = (char *)(local_18 +
                                    iVar10 * local_1c + (local_14 + -1) * (int)DAT_007fb246 +
                                   (int)puVar8);
                iVar9 = local_1c;
                do {
                  if (iVar9 < DAT_007fb242) {
                    pcVar13 = local_30;
                    for (iVar18 = local_18; iVar18 < local_2c + local_18; iVar18 = iVar18 + 1) {
                      if ((iVar18 < iVar10) && (*pcVar13 != '\x03')) goto LAB_004afc34;
                      pcVar13 = pcVar13 + 1;
                    }
                  }
                  iVar9 = iVar9 + 1;
                  local_30 = local_30 + iVar10;
                } while (iVar9 < local_1c + local_28);
              }
            }
            if (local_14 < 4) {
              if (local_1c < local_28 + local_1c) {
                iVar10 = (int)DAT_007fb240;
                local_3c = (char *)(iVar10 * local_1c + (int)DAT_007fb246 * (local_14 + 1) +
                                    local_18 + (int)puVar8);
                iVar9 = local_1c;
                do {
                  if (iVar9 < DAT_007fb242) {
                    pcVar13 = local_3c;
                    for (iVar18 = local_18; iVar18 < local_18 + local_2c; iVar18 = iVar18 + 1) {
                      if ((iVar18 < iVar10) &&
                         (((cVar3 = *pcVar13, cVar3 == '\x01' || (cVar3 == '\x03')) ||
                          (cVar3 == '\x02')))) goto LAB_004afc34;
                      pcVar13 = pcVar13 + 1;
                    }
                  }
                  iVar9 = iVar9 + 1;
                  local_3c = local_3c + iVar10;
                } while (iVar9 < local_28 + local_1c);
              }
            }
            if (param_2 != 100) {
              if (param_2 == 0x4d) {
                iVar9 = *(int *)(&DAT_007f5802 + param_1 * 0xa62);
                if (iVar9 != 0) {
                  iVar10 = DAT_00795118 / 0xc9;
                  uVar19 = 0;
                  if (0 < *(int *)(iVar9 + 0xc)) {
                    do {
                      FUN_006acc70(iVar9,uVar19,&local_10);
                      thunk_FUN_004162b0(local_10,&local_6,&local_8,&local_a);
                      uVar16 = local_6 - local_18 >> 0x1f;
                      if (((int)((local_6 - local_18 ^ uVar16) - uVar16) <= iVar10) &&
                         (uVar16 = local_8 - local_1c >> 0x1f,
                         (int)((local_8 - local_1c ^ uVar16) - uVar16) <= iVar10))
                      goto LAB_004afc34;
                      uVar19 = uVar19 + 1;
                      iVar9 = *(int *)(&DAT_007f5802 + param_1 * 0xa62);
                    } while ((int)uVar19 < *(int *)(iVar9 + 0xc));
                  }
                }
                goto LAB_004afa95;
              }
              if (param_2 == 0x43) {
                iVar9 = *(int *)(&DAT_007f580e + param_1 * 0xa62);
                if (iVar9 != 0) {
                  iVar10 = DAT_007950f0 / 0xc9;
                  uVar19 = 0;
                  if (0 < *(int *)(iVar9 + 0xc)) {
                    do {
                      FUN_006acc70(iVar9,uVar19,&local_10);
                      thunk_FUN_004162b0(local_10,&local_6,&local_8,&local_a);
                      uVar16 = local_6 - local_18 >> 0x1f;
                      if (((int)((local_6 - local_18 ^ uVar16) - uVar16) <= iVar10) &&
                         (uVar16 = local_8 - local_1c >> 0x1f,
                         (int)((local_8 - local_1c ^ uVar16) - uVar16) <= iVar10))
                      goto LAB_004afc34;
                      uVar19 = uVar19 + 1;
                      iVar9 = *(int *)(&DAT_007f580e + param_1 * 0xa62);
                    } while ((int)uVar19 < *(int *)(iVar9 + 0xc));
                  }
                }
                goto LAB_004afa95;
              }
              if (param_2 == 0x73) {
                iVar9 = *(int *)(&DAT_007f5812 + param_1 * 0xa62);
                if (iVar9 != 0) {
                  iVar10 = DAT_007951b0 / 0xc9;
                  uVar19 = 0;
                  if (0 < *(int *)(iVar9 + 0xc)) {
                    do {
                      FUN_006acc70(iVar9,uVar19,&local_10);
                      thunk_FUN_004162b0(local_10,&local_6,&local_8,&local_a);
                      uVar16 = local_6 - local_18 >> 0x1f;
                      if (((int)((local_6 - local_18 ^ uVar16) - uVar16) <= iVar10) &&
                         (uVar16 = local_8 - local_1c >> 0x1f,
                         (int)((local_8 - local_1c ^ uVar16) - uVar16) <= iVar10))
                      goto LAB_004afc34;
                      uVar19 = uVar19 + 1;
                      iVar9 = *(int *)(&DAT_007f5812 + param_1 * 0xa62);
                    } while ((int)uVar19 < *(int *)(iVar9 + 0xc));
                  }
                }
                goto LAB_004afa95;
              }
              if (param_2 == 0x65) {
                iVar9 = *(int *)(&DAT_007f5806 + param_1 * 0xa62);
                if (iVar9 != 0) {
                  iVar10 = DAT_00795178 / 0xc9;
                  uVar19 = 0;
                  if (0 < *(int *)(iVar9 + 0xc)) {
                    do {
                      FUN_006acc70(iVar9,uVar19,&local_10);
                      thunk_FUN_004162b0(local_10,&local_6,&local_8,&local_a);
                      uVar16 = local_6 - local_18 >> 0x1f;
                      if (((int)((local_6 - local_18 ^ uVar16) - uVar16) <= iVar10) &&
                         (uVar16 = local_8 - local_1c >> 0x1f,
                         (int)((local_8 - local_1c ^ uVar16) - uVar16) <= iVar10))
                      goto LAB_004afc34;
                      uVar19 = uVar19 + 1;
                      iVar9 = *(int *)(&DAT_007f5806 + param_1 * 0xa62);
                    } while ((int)uVar19 < *(int *)(iVar9 + 0xc));
                  }
                }
                goto LAB_004afa95;
              }
              if (((param_2 < 0x54) || (0x5a < param_2)) || (param_9 == 0)) {
                if (((param_2 == 0x3a) && (DAT_007fa16c != 0)) &&
                   (uVar19 = 0, 0 < *(int *)(DAT_007fa16c + 0xc))) {
                  do {
                    FUN_006acc70(DAT_007fa16c,uVar19,&local_10);
                    thunk_FUN_004162b0(local_10,&local_6,&local_8,&local_a);
                    uVar16 = local_6 - local_18 >> 0x1f;
                    if (((int)((local_6 - local_18 ^ uVar16) - uVar16) < 0xe) &&
                       (uVar16 = local_8 - local_1c >> 0x1f,
                       (int)((local_8 - local_1c ^ uVar16) - uVar16) < 0xe)) goto LAB_004afc34;
                    uVar19 = uVar19 + 1;
                  } while ((int)uVar19 < *(int *)(DAT_007fa16c + 0xc));
                }
                goto LAB_004afa95;
              }
              iVar18 = (int)DAT_007fb246;
              iVar9 = local_1c + -1;
              iVar21 = local_1c + local_28;
              bVar4 = false;
              iVar10 = iVar9;
              if (iVar9 < iVar21 + 1) {
                do {
                  if ((-1 < iVar10) && (iVar10 < DAT_007fb242)) {
                    iVar1 = local_18 + -1;
                    iVar14 = local_18 + local_2c;
                    if (iVar1 < iVar14 + 1) {
                      iVar11 = iVar18 * local_14 + iVar1 + DAT_007fb240 * iVar10;
                      iVar17 = iVar11 * 8;
                      local_3c = (char *)(iVar11 + (int)puVar8);
                      iVar11 = iVar1;
                      do {
                        if (((((-1 < iVar11) && (iVar11 < DAT_007fb240)) &&
                             ((iVar10 != iVar9 ||
                              ((iVar11 != iVar1 && ((iVar10 != iVar9 || (iVar11 != iVar14)))))))) &&
                            ((iVar10 != iVar21 ||
                             ((iVar11 != iVar14 && ((iVar10 != iVar21 || (iVar11 != iVar1)))))))) &&
                           (((*local_3c == '\x05' &&
                             (local_10 = *(int **)(iVar17 + DAT_007fb248), local_10 != (int *)0x0))
                            && (((iVar12 = (**(code **)(*local_10 + 0x2c))(), iVar12 == 0x53 &&
                                 (local_10[6] == *(int *)(param_9 + 0x18))) ||
                                ((iVar12 = (**(code **)(*local_10 + 0x2c))(), 0x53 < iVar12 &&
                                 ((iVar12 = (**(code **)(*local_10 + 0x2c))(), iVar12 < 0x5b &&
                                  (*(int *)((int)local_10 + 0x5d3) == *(int *)(param_9 + 0x18)))))))
                               )))) {
                          iVar9 = (**(code **)(*local_10 + 0x2c))();
                          if ((iVar9 == 0x53) && (local_10[6] == *(int *)(param_9 + 0x18))) {
                            bVar4 = true;
                          }
                          goto LAB_004afa95;
                        }
                        iVar11 = iVar11 + 1;
                        iVar17 = iVar17 + 8;
                        local_3c = local_3c + 1;
                      } while (iVar11 < iVar14 + 1);
                    }
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 < iVar21 + 1);
              }
              goto LAB_004afc34;
            }
            iVar9 = *(int *)(&DAT_007f57f6 + param_1 * 0xa62);
            if ((iVar9 != 0) && (uVar19 = 0, 0 < *(int *)(iVar9 + 0xc))) {
              do {
                FUN_006acc70(iVar9,uVar19,&local_10);
                thunk_FUN_004162b0(local_10,&local_6,&local_8,&local_a);
                uVar16 = local_6 - local_18 >> 0x1f;
                if (((int)((local_6 - local_18 ^ uVar16) - uVar16) < 0x10) &&
                   (uVar16 = local_8 - local_1c >> 0x1f,
                   (int)((local_8 - local_1c ^ uVar16) - uVar16) < 0x10)) goto LAB_004afc34;
                iVar9 = *(int *)(&DAT_007f57f6 + param_1 * 0xa62);
                uVar19 = uVar19 + 1;
              } while ((int)uVar19 < *(int *)(iVar9 + 0xc));
            }
LAB_004afa95:
            iVar9 = local_1c + -1;
            bVar22 = true;
            if (iVar9 < local_1c + 1 + local_28) {
              do {
                if ((-1 < iVar9) && (iVar9 < DAT_007fb242)) {
                  iVar10 = local_18 + -1;
                  iVar18 = local_18 + 1 + local_2c;
                  if (iVar10 < iVar18) {
                    pcVar13 = (char *)(iVar9 * DAT_007fb240 + iVar10 + DAT_007fb246 * local_14 +
                                      (int)puVar8);
                    do {
                      if (((-1 < iVar10) && (iVar10 < DAT_007fb240)) &&
                         ((*pcVar13 == '\x05' || (*pcVar13 == '\x02')))) {
                        bVar22 = false;
                        goto LAB_004afbad;
                      }
                      iVar10 = iVar10 + 1;
                      pcVar13 = pcVar13 + 1;
                    } while (iVar10 < iVar18);
                  }
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < local_1c + 1 + local_28);
            }
LAB_004afbad:
            iVar9 = FUN_006aced8(local_18,local_1c,param_6,param_7);
            if ((local_40 < 0) || ((((0x53 < param_2 && (param_2 < 0x5b)) && (bVar4)) && (!bVar5))))
            {
LAB_004afc0f:
              *param_3 = local_18;
              *param_4 = local_1c;
              *param_5 = local_14;
              local_50 = 1;
              local_40 = iVar9;
              bVar5 = bVar4;
            }
            else if (bVar22) {
              if (iVar9 < local_40) goto LAB_004afc0f;
            }
            else if (iVar9 / ((int)sVar6 / 3) < local_40 / ((int)sVar6 / 3)) goto LAB_004afc0f;
LAB_004afc34:
            local_18 = local_18 + 1;
          } while (local_18 < DAT_007fb240);
        }
        local_1c = local_1c + 1;
      } while (local_1c < DAT_007fb242);
    }
    local_14 = local_14 + 1;
    if (3 < local_14) {
      FUN_006a5e90(puVar8);
      return local_50;
    }
  } while( true );
}

