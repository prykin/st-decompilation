
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
  short *psVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  DArrayTy *pDVar14;
  int iVar15;
  short sVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  short sVar21;
  int iVar22;
  bool bVar23;
  undefined4 local_50;
  int local_40;
  char *local_3c;
  char *local_30;
  int local_2c;
  int local_28;
  int local_1c;
  int local_18;
  int local_14;
  STFishC *local_10;
  short local_a;
  short local_8;
  short local_6;
  
  local_50 = 0;
  bVar4 = false;
  bVar5 = false;
  local_40 = -1;
  sVar6 = SHORT_007fb242;
  if (SHORT_007fb242 <= (short)_SHORT_007fb240) {
    sVar6 = (short)_SHORT_007fb240;
  }
  local_28 = 1;
  local_2c = 1;
  if (*(int *)(&DAT_00791d68 + param_2 * 4) == 1) {
    local_28 = 2;
    local_2c = 2;
  }
  psVar8 = (short *)Library::DKW::LIB::FUN_006aac70(SHORT_007fb246 * 5);
  local_14 = 0;
  do {
    iVar9 = SHORT_007fb246 * local_14;
    local_1c = 0;
    if (0 < SHORT_007fb242) {
      do {
        iVar10 = (int)SHORT_007fb240;
        iVar22 = 0;
        iVar19 = iVar10 * local_1c;
        if (0 < iVar10) {
          do {
            local_10 = (STFishC *)
                       g_worldCells[iVar10 * local_1c + iVar22 + SHORT_007fb246 * local_14].objects
                       [0];
            if (local_10 == (STFishC *)0x0) {
              sVar21 = (short)iVar22;
              if ((((sVar21 < 0) || ((short)_SHORT_007fb240 <= sVar21)) ||
                  (sVar7 = (short)local_1c, sVar7 < 0)) ||
                 (((SHORT_007fb242 <= sVar7 || (sVar16 = (short)local_14, sVar16 < 0)) ||
                  (SHORT_007fb244 <= sVar16)))) {
LAB_004af1d5:
                *(undefined1 *)(iVar22 + iVar19 + iVar9 + (int)psVar8) = 3;
              }
              else {
                sVar21 = *(short *)(DAT_007fb280 +
                                   ((int)sVar16 * (int)SHORT_007fb27e +
                                    (int)sVar7 * (int)SHORT_007fb278 + (int)sVar21) * 2);
                if (sVar21 == 0) {
                  *(undefined1 *)(iVar22 + iVar19 + iVar9 + (int)psVar8) = 0;
                }
                else {
                  if (sVar21 == -1) goto LAB_004af1d5;
                  *(undefined1 *)(iVar22 + iVar19 + iVar9 + (int)psVar8) = 1;
                }
              }
            }
            else {
              if ((*(uint *)&local_10->field_0x24 < 8) &&
                 ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                  ((byte)(&DAT_008087e9)[*(uint *)&local_10->field_0x24 * 0x51] < 8)))) {
                bVar2 = local_10->field_0x24;
                if (*(char *)((int)&g_appClass_00806728[0x5d].field_0014 + 3) == '\0') {
                  if (bVar2 == (byte)param_1) {
LAB_004af2f0:
                    iVar10 = 0;
                  }
                  else {
                    uVar20 = (uint)bVar2;
                    uVar17 = param_1 & 0xff;
                    cVar3 = *(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                     uVar17 + uVar20 * 8 + 3);
                    if ((cVar3 == '\0') &&
                       (*(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                 uVar20 + uVar17 * 8 + 3) == '\0')) {
                      iVar10 = -2;
                    }
                    else if ((cVar3 == '\x01') &&
                            (*(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                      uVar20 + uVar17 * 8 + 3) == '\0')) {
                      iVar10 = -1;
                    }
                    else if ((cVar3 == '\0') &&
                            (*(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                      uVar20 + uVar17 * 8 + 3) == '\x01')) {
                      iVar10 = 1;
                    }
                    else {
                      if ((cVar3 != '\x01') ||
                         (*(char *)((int)&g_appClass_00806728[0x5c].field_000C +
                                   uVar20 + uVar17 * 8 + 3) != '\x01')) goto LAB_004af2f0;
                      iVar10 = 2;
                    }
                  }
                  bVar23 = iVar10 < 0;
                }
                else {
                  bVar23 = *(char *)((param_1 & 0xff) * 0x51 + 0x11ca + (int)g_appClass_00806728) !=
                           *(char *)((uint)bVar2 * 0x51 + 0x11ca + (int)g_appClass_00806728);
                }
                if (bVar23) {
                  *(undefined1 *)(iVar22 + iVar19 + iVar9 + (int)psVar8) = 4;
                  goto LAB_004af325;
                }
              }
              *(undefined1 *)(iVar22 + iVar19 + iVar9 + (int)psVar8) = 5;
            }
LAB_004af325:
            iVar22 = iVar22 + 1;
            iVar10 = (int)(short)_SHORT_007fb240;
          } while (iVar22 < iVar10);
        }
        local_1c = local_1c + 1;
      } while (local_1c < SHORT_007fb242);
    }
    local_14 = local_14 + 1;
  } while (local_14 < 4);
  if (PTR_007fa150 != (DArrayTy *)0x0) {
    PTR_007fa150->iteratorIndex = 0;
    iVar9 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_10);
    while (-1 < iVar9) {
      if (local_10 != (STFishC *)0x0) {
        STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
        *(undefined1 *)
         ((int)psVar8 +
         (int)local_6 + (int)local_a * (int)SHORT_007fb246 + (int)local_8 * (int)SHORT_007fb240) = 2
        ;
      }
      iVar9 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)PTR_007fa150,&local_10);
    }
  }
  local_14 = 0;
  do {
    local_1c = 0;
    if (0 < SHORT_007fb242) {
      do {
        local_18 = 0;
        if (0 < SHORT_007fb240) {
          do {
            iVar9 = local_14;
            if (local_14 < local_14 + 1) {
              do {
                if (SHORT_007fb244 <= iVar9) goto cf_common_join_004AFC34;
                if (local_1c < local_28 + local_1c) {
                  iVar19 = SHORT_007fb240 * local_1c;
                  iVar10 = local_1c;
                  do {
                    if (SHORT_007fb242 <= iVar10) goto cf_common_join_004AFC34;
                    for (iVar22 = local_18; iVar22 < local_2c + local_18; iVar22 = iVar22 + 1) {
                      if ((SHORT_007fb240 <= iVar22) ||
                         (*(char *)(iVar19 + iVar22 + SHORT_007fb246 * iVar9 + (int)psVar8) != '\0')
                         ) goto cf_common_join_004AFC34;
                    }
                    iVar19 = iVar19 + SHORT_007fb240;
                    iVar10 = iVar10 + 1;
                  } while (iVar10 < local_28 + local_1c);
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < local_14 + 1);
            }
            if (0 < local_14) {
              if (local_1c < local_1c + local_28) {
                iVar10 = (int)SHORT_007fb240;
                local_30 = (char *)(local_18 +
                                    iVar10 * local_1c + (local_14 + -1) * (int)SHORT_007fb246 +
                                   (int)psVar8);
                iVar9 = local_1c;
                do {
                  if (iVar9 < SHORT_007fb242) {
                    pcVar13 = local_30;
                    for (iVar19 = local_18; iVar19 < local_2c + local_18; iVar19 = iVar19 + 1) {
                      if ((iVar19 < iVar10) && (*pcVar13 != '\x03')) goto cf_common_join_004AFC34;
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
                iVar10 = (int)SHORT_007fb240;
                local_3c = (char *)(iVar10 * local_1c + (int)SHORT_007fb246 * (local_14 + 1) +
                                    local_18 + (int)psVar8);
                iVar9 = local_1c;
                do {
                  if (iVar9 < SHORT_007fb242) {
                    pcVar13 = local_3c;
                    for (iVar19 = local_18; iVar19 < local_18 + local_2c; iVar19 = iVar19 + 1) {
                      if ((iVar19 < iVar10) &&
                         (((cVar3 = *pcVar13, cVar3 == '\x01' || (cVar3 == '\x03')) ||
                          (cVar3 == '\x02')))) goto cf_common_join_004AFC34;
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
                pDVar14 = g_playerRuntime[param_1].field2169_0x9e2;
                if (pDVar14 != (DArrayTy *)0x0) {
                  iVar9 = DAT_00795118 / 0xc9;
                  uVar20 = 0;
                  if (0 < (int)pDVar14->count) {
                    do {
                      FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar14,uVar20,&local_10);
                      STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
                      uVar17 = local_6 - local_18 >> 0x1f;
                      if (((int)((local_6 - local_18 ^ uVar17) - uVar17) <= iVar9) &&
                         (uVar17 = local_8 - local_1c >> 0x1f,
                         (int)((local_8 - local_1c ^ uVar17) - uVar17) <= iVar9))
                      goto cf_common_join_004AFC34;
                      uVar20 = uVar20 + 1;
                      pDVar14 = g_playerRuntime[param_1].field2169_0x9e2;
                    } while ((int)uVar20 < (int)pDVar14->count);
                  }
                }
                goto cf_common_join_004AFA95;
              }
              if (param_2 == 0x43) {
                pDVar14 = g_playerRuntime[param_1].field2172_0x9ee;
                if (pDVar14 != (DArrayTy *)0x0) {
                  iVar9 = DAT_007950f0 / 0xc9;
                  uVar20 = 0;
                  if (0 < (int)pDVar14->count) {
                    do {
                      FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar14,uVar20,&local_10);
                      STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
                      uVar17 = local_6 - local_18 >> 0x1f;
                      if (((int)((local_6 - local_18 ^ uVar17) - uVar17) <= iVar9) &&
                         (uVar17 = local_8 - local_1c >> 0x1f,
                         (int)((local_8 - local_1c ^ uVar17) - uVar17) <= iVar9))
                      goto cf_common_join_004AFC34;
                      uVar20 = uVar20 + 1;
                      pDVar14 = g_playerRuntime[param_1].field2172_0x9ee;
                    } while ((int)uVar20 < (int)pDVar14->count);
                  }
                }
                goto cf_common_join_004AFA95;
              }
              if (param_2 == 0x73) {
                pDVar14 = g_playerRuntime[param_1].field2173_0x9f2;
                if (pDVar14 != (DArrayTy *)0x0) {
                  iVar9 = DAT_007951b0 / 0xc9;
                  uVar20 = 0;
                  if (0 < (int)pDVar14->count) {
                    do {
                      FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar14,uVar20,&local_10);
                      STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
                      uVar17 = local_6 - local_18 >> 0x1f;
                      if (((int)((local_6 - local_18 ^ uVar17) - uVar17) <= iVar9) &&
                         (uVar17 = local_8 - local_1c >> 0x1f,
                         (int)((local_8 - local_1c ^ uVar17) - uVar17) <= iVar9))
                      goto cf_common_join_004AFC34;
                      uVar20 = uVar20 + 1;
                      pDVar14 = g_playerRuntime[param_1].field2173_0x9f2;
                    } while ((int)uVar20 < (int)pDVar14->count);
                  }
                }
                goto cf_common_join_004AFA95;
              }
              if (param_2 == 0x65) {
                pDVar14 = g_playerRuntime[param_1].field2170_0x9e6;
                if (pDVar14 != (DArrayTy *)0x0) {
                  iVar9 = DAT_00795178 / 0xc9;
                  uVar20 = 0;
                  if (0 < (int)pDVar14->count) {
                    do {
                      FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar14,uVar20,&local_10);
                      STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
                      uVar17 = local_6 - local_18 >> 0x1f;
                      if (((int)((local_6 - local_18 ^ uVar17) - uVar17) <= iVar9) &&
                         (uVar17 = local_8 - local_1c >> 0x1f,
                         (int)((local_8 - local_1c ^ uVar17) - uVar17) <= iVar9))
                      goto cf_common_join_004AFC34;
                      uVar20 = uVar20 + 1;
                      pDVar14 = g_playerRuntime[param_1].field2170_0x9e6;
                    } while ((int)uVar20 < (int)pDVar14->count);
                  }
                }
                goto cf_common_join_004AFA95;
              }
              if (((param_2 < 0x54) || (0x5a < param_2)) || (param_9 == 0)) {
                if (((param_2 == 0x3a) && (PTR_007fa16c != (DArrayTy *)0x0)) &&
                   (uVar20 = 0, 0 < (int)PTR_007fa16c->count)) {
                  do {
                    FUN_006acc70((AnonShape_006ACC70_C8641025 *)PTR_007fa16c,uVar20,&local_10);
                    STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
                    uVar17 = local_6 - local_18 >> 0x1f;
                    if (((int)((local_6 - local_18 ^ uVar17) - uVar17) < 0xe) &&
                       (uVar17 = local_8 - local_1c >> 0x1f,
                       (int)((local_8 - local_1c ^ uVar17) - uVar17) < 0xe))
                    goto cf_common_join_004AFC34;
                    uVar20 = uVar20 + 1;
                  } while ((int)uVar20 < (int)PTR_007fa16c->count);
                }
                goto cf_common_join_004AFA95;
              }
              iVar19 = (int)SHORT_007fb246;
              iVar9 = local_1c + -1;
              iVar22 = local_1c + local_28;
              bVar4 = false;
              iVar10 = iVar9;
              if (iVar9 < iVar22 + 1) {
                do {
                  if ((-1 < iVar10) && (iVar10 < SHORT_007fb242)) {
                    iVar1 = local_18 + -1;
                    iVar15 = local_18 + local_2c;
                    if (iVar1 < iVar15 + 1) {
                      iVar11 = iVar19 * local_14 + iVar1 + SHORT_007fb240 * iVar10;
                      iVar18 = iVar11 * 8;
                      local_3c = (char *)(iVar11 + (int)psVar8);
                      iVar11 = iVar1;
                      do {
                        if (((((-1 < iVar11) && (iVar11 < SHORT_007fb240)) &&
                             ((iVar10 != iVar9 ||
                              ((iVar11 != iVar1 && ((iVar10 != iVar9 || (iVar11 != iVar15)))))))) &&
                            ((iVar10 != iVar22 ||
                             ((iVar11 != iVar15 && ((iVar10 != iVar22 || (iVar11 != iVar1)))))))) &&
                           (((*local_3c == '\x05' &&
                             (local_10 = *(STFishC **)((int)g_worldCells->objects + iVar18),
                             local_10 != (STFishC *)0x0)) &&
                            (((iVar12 = (*local_10->vtable->vfunc_2C)(), iVar12 == 0x53 &&
                              (local_10->field_0018 == *(int *)(param_9 + 0x18))) ||
                             ((iVar12 = (*local_10->vtable->vfunc_2C)(), 0x53 < iVar12 &&
                              ((iVar12 = (*local_10->vtable->vfunc_2C)(), iVar12 < 0x5b &&
                               (*(int *)&local_10[2].field_0xfd == *(int *)(param_9 + 0x18))))))))))
                           ) {
                          iVar9 = (*local_10->vtable->vfunc_2C)();
                          if ((iVar9 == 0x53) && (local_10->field_0018 == *(int *)(param_9 + 0x18)))
                          {
                            bVar4 = true;
                          }
                          goto cf_common_join_004AFA95;
                        }
                        iVar11 = iVar11 + 1;
                        iVar18 = iVar18 + 8;
                        local_3c = local_3c + 1;
                      } while (iVar11 < iVar15 + 1);
                    }
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 < iVar22 + 1);
              }
              goto cf_common_join_004AFC34;
            }
            pDVar14 = g_playerRuntime[param_1].field2166_0x9d6;
            if ((pDVar14 != (DArrayTy *)0x0) && (uVar20 = 0, 0 < (int)pDVar14->count)) {
              do {
                FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar14,uVar20,&local_10);
                STFishC::sub_004162B0(local_10,&local_6,&local_8,&local_a);
                uVar17 = local_6 - local_18 >> 0x1f;
                if (((int)((local_6 - local_18 ^ uVar17) - uVar17) < 0x10) &&
                   (uVar17 = local_8 - local_1c >> 0x1f,
                   (int)((local_8 - local_1c ^ uVar17) - uVar17) < 0x10))
                goto cf_common_join_004AFC34;
                pDVar14 = g_playerRuntime[param_1].field2166_0x9d6;
                uVar20 = uVar20 + 1;
              } while ((int)uVar20 < (int)pDVar14->count);
            }
cf_common_join_004AFA95:
            iVar9 = local_1c + -1;
            bVar23 = true;
            if (iVar9 < local_1c + 1 + local_28) {
              do {
                if ((-1 < iVar9) && (iVar9 < SHORT_007fb242)) {
                  iVar10 = local_18 + -1;
                  iVar19 = local_18 + 1 + local_2c;
                  if (iVar10 < iVar19) {
                    pcVar13 = (char *)(iVar9 * SHORT_007fb240 + iVar10 + SHORT_007fb246 * local_14 +
                                      (int)psVar8);
                    do {
                      if (((-1 < iVar10) && (iVar10 < SHORT_007fb240)) &&
                         ((*pcVar13 == '\x05' || (*pcVar13 == '\x02')))) {
                        bVar23 = false;
                        goto LAB_004afbad;
                      }
                      iVar10 = iVar10 + 1;
                      pcVar13 = pcVar13 + 1;
                    } while (iVar10 < iVar19);
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
            else if (bVar23) {
              if (iVar9 < local_40) goto LAB_004afc0f;
            }
            else if (iVar9 / ((int)sVar6 / 3) < local_40 / ((int)sVar6 / 3)) goto LAB_004afc0f;
cf_common_join_004AFC34:
            local_18 = local_18 + 1;
          } while (local_18 < SHORT_007fb240);
        }
        local_1c = local_1c + 1;
      } while (local_1c < SHORT_007fb242);
    }
    local_14 = local_14 + 1;
    if (3 < local_14) {
      FUN_006a5e90(psVar8);
      return local_50;
    }
  } while( true );
}

