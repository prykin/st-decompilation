
/* WARNING: Type propagation algorithm not settling */

void __thiscall
thunk_FUN_00448120(void *this,uint param_1,uint param_2,int param_3,undefined2 param_4,uint param_5,
                  int param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  undefined2 *puVar11;
  short *psVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int aiStack_104 [8];
  int aiStack_e4 [7];
  undefined4 uStack_c8;
  short sStack_c6;
  int iStack_c4;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined2 uStack_b8;
  undefined2 uStack_b6;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  undefined2 uStack_b0;
  undefined2 uStack_ae;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined2 uStack_a8;
  undefined2 uStack_a6;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined2 uStack_90;
  undefined2 uStack_8e;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  undefined2 uStack_80;
  undefined2 uStack_7e;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined2 uStack_6e;
  undefined2 uStack_6c;
  short asStack_6a [33];
  void *pvStack_28;
  void *pvStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  uint uStack_8;
  
  uVar13 = param_5;
  uStack_c0 = 0;
  uStack_be = 2;
  uStack_bc = 0;
  uStack_ba = 0xffff;
  uStack_b8 = 2;
  uStack_b6 = 0;
  uStack_b4 = 1;
  uStack_b2 = 2;
  uStack_b0 = 0;
  uStack_ae = 0;
  uStack_ac = 3;
  uStack_aa = 0;
  uStack_a8 = 0;
  uStack_a6 = 1;
  uStack_a4 = 0;
  uStack_a2 = 0xffff;
  uStack_a0 = 3;
  uStack_9e = 0;
  uStack_9c = 1;
  uStack_9a = 3;
  uStack_98 = 0;
  uStack_96 = 0xffff;
  uStack_94 = 1;
  uStack_92 = 0;
  uStack_90 = 1;
  uStack_8e = 1;
  uStack_8c = 0;
  uStack_8a = 0;
  uStack_88 = 4;
  uStack_86 = 0;
  uStack_84 = 0xffff;
  uStack_82 = 4;
  uStack_80 = 0;
  uStack_7e = 1;
  uStack_7c = 4;
  uStack_7a = 0;
  uStack_78 = 0;
  uStack_76 = 0;
  uStack_74 = 0;
  uStack_72 = 0xffff;
  uStack_70 = 0;
  uStack_6e = 0;
  uStack_6c = 1;
  asStack_6a[0] = 0;
  asStack_6a[1] = 0;
  asStack_6a[3] = 0;
  asStack_6a[4] = 2;
  asStack_6a[5] = 0;
  asStack_6a[6] = 0;
  asStack_6a[7] = 2;
  asStack_6a[8] = 1;
  asStack_6a[9] = 0;
  asStack_6a[10] = 3;
  asStack_6a[0xb] = 0;
  asStack_6a[0xc] = 0;
  asStack_6a[0xd] = 1;
  asStack_6a[0xe] = 1;
  asStack_6a[0xf] = 0;
  asStack_6a[0x10] = 3;
  asStack_6a[0x11] = 1;
  asStack_6a[0x12] = 0;
  asStack_6a[0x13] = 1;
  asStack_6a[0x14] = 0;
  asStack_6a[0x15] = 0;
  asStack_6a[0x16] = 4;
  asStack_6a[0x17] = 0;
  asStack_6a[0x18] = 0;
  asStack_6a[0x19] = 0;
  asStack_6a[0x1a] = 1;
  asStack_6a[0x1b] = 0;
  asStack_6a[0x1c] = 4;
  asStack_6a[0x1d] = 1;
  asStack_6a[0x1e] = 0;
  asStack_6a[0x1f] = 0;
  asStack_6a[0x20] = 0;
  aiStack_e4[0] = 0;
  aiStack_e4[1] = 0xb4;
  aiStack_e4[2] = 0x5a;
  aiStack_e4[3] = 0x10e;
  aiStack_e4[4] = 0x2d;
  aiStack_e4[5] = 0xe1;
  aiStack_e4[6] = 0x87;
  uStack_c8 = 0x13b;
  if ((param_8 != 0) && (iVar15 = *(int *)(param_8 + 0xc), iVar15 != 0)) {
    sVar3 = (short)param_2;
    sVar2 = (short)param_3;
    pvStack_28 = this;
    if ((param_2 == param_5) && (param_3 == param_6)) {
      iVar5 = -1;
    }
    else {
      sVar4 = (short)param_6;
      iVar5 = FUN_006acf0d((int)(short)(sVar3 * 0xc9 + 100),(int)(short)(sVar2 * 0xc9 + 100),0,
                           (int)(short)((short)param_5 * 0xc9 + 100),
                           (int)(short)(sVar4 * 0xc9 + 100),0);
      iVar5 = ((short)((sVar4 - sVar2) * 0xc9 + 100) * 1000) / iVar5;
      if (iVar5 < -0x39c) {
        iVar5 = 0x5a;
      }
      else if ((iVar5 < -0x39c) || (-0x180 < iVar5)) {
        if ((iVar5 < -0x17f) || (0x17e < iVar5)) {
          if ((iVar5 < 0x17f) || (0x39b < iVar5)) {
            iVar5 = 0x10e;
          }
          else {
            iVar5 = (((int)uVar13 <= (int)param_2) - 1 & 0x5a) + 0xe1;
          }
        }
        else {
          iVar5 = (((int)uVar13 <= (int)param_2) - 1 & 0xffffff4c) + 0xb4;
        }
      }
      else {
        iVar5 = (((int)uVar13 <= (int)param_2) - 1 & 0xffffffa6) + 0x87;
      }
    }
    uStack_18 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uStack_14 = CONCAT22(sVar2,sVar3);
    uStack_10 = CONCAT22(uStack_10._2_2_,param_4);
    uStack_1c = iVar15;
    uStack_20 = iVar15;
    if (iVar5 < 0x88) {
      if (iVar5 == 0x87) {
        pvStack_24 = (void *)((iVar15 + -1) / 10);
        iVar15 = 0;
        if (-1 < (int)pvStack_24) {
          uStack_1c = 0;
          do {
            _param_4 = uStack_20;
            if (9 < (int)uStack_20) {
              _param_4 = 10;
            }
            param_6 = 0;
            if (0 < _param_4) {
              psVar12 = asStack_6a;
              uStack_8 = uStack_1c;
              do {
                psVar12 = psVar12 + 3;
                FUN_006acc70(param_8,uStack_8,&param_5);
                pvVar7 = (void *)thunk_FUN_0042b620(param_1,param_5,1);
                if (pvVar7 == (void *)0x0) {
                  iVar15 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2d64,0,0,
                                        &DAT_007a4ccc);
                  if (iVar15 == 0) {
                    return;
                  }
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                sVar4 = (short)iVar15;
                if (psVar12[2] == 0) {
                  sVar10 = (sVar3 - sVar4) + -3;
                  sVar4 = ((sVar2 - sVar4) - *psVar12) + -2;
                }
                else {
                  sVar10 = (sVar3 - sVar4) + *psVar12 + -2;
                  sVar4 = (sVar2 - sVar4) + -3;
                }
                uStack_10 = CONCAT22(sVar10,(undefined2)uStack_10);
                uStack_c = CONCAT22(psVar12[1],sVar4);
                iVar5 = thunk_FUN_0045ff10((int)pvVar7);
                if (iVar5 == 5) {
                  thunk_FUN_00490cd0(pvVar7,uStack_18,uStack_14,uStack_10,uStack_c);
                }
                else {
                  thunk_FUN_0045ef00(pvVar7,5,&uStack_18);
                }
                param_6 = param_6 + 1;
                uStack_8 = uStack_8 + 1;
              } while (param_6 < _param_4);
            }
            iVar15 = iVar15 + 1;
            uStack_1c = uStack_1c + 10;
            uStack_20 = uStack_20 + -10;
          } while (iVar15 <= (int)pvStack_24);
          return;
        }
      }
      else {
        switch(iVar5) {
        case 0:
          uStack_20 = (iVar15 + -1) / 0xf;
          pvStack_24 = (void *)0x0;
          if (-1 < (int)uStack_20) {
            uStack_8 = 0;
            do {
              _param_4 = uStack_1c;
              if (0xe < (int)uStack_1c) {
                _param_4 = 0xf;
              }
              param_6 = 0;
              if (0 < _param_4) {
                puVar11 = &uStack_be;
                uVar13 = uStack_8;
                do {
                  FUN_006acc70(param_8,uVar13,&param_5);
                  pvVar7 = (void *)thunk_FUN_0042b620(param_1,param_5,1);
                  if (pvVar7 == (void *)0x0) {
                    iVar15 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2d83,0,0,
                                          &DAT_007a4ccc);
                    if (iVar15 == 0) {
                      return;
                    }
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  uStack_10 = CONCAT22((short)pvStack_24 + 3 + sVar3,(undefined2)uStack_10);
                  uStack_c = CONCAT22(*puVar11,puVar11[-1] + sVar2);
                  iVar15 = thunk_FUN_0045ff10((int)pvVar7);
                  if (iVar15 == 5) {
                    thunk_FUN_00490cd0(pvVar7,uStack_18,uStack_14,uStack_10,uStack_c);
                  }
                  else {
                    thunk_FUN_0045ef00(pvVar7,5,&uStack_18);
                  }
                  param_6 = param_6 + 1;
                  uVar13 = uVar13 + 1;
                  puVar11 = puVar11 + 3;
                } while (param_6 < _param_4);
              }
              pvStack_24 = (void *)((int)pvStack_24 + 1);
              uStack_8 = uStack_8 + 0xf;
              uStack_1c = uStack_1c + -0xf;
            } while ((int)pvStack_24 <= (int)uStack_20);
            return;
          }
          break;
        case 0x2d:
          pvStack_24 = (void *)((iVar15 + -1) / 10);
          iVar15 = 0;
          if (-1 < (int)pvStack_24) {
            uStack_1c = 0;
            do {
              _param_4 = uStack_20;
              if (9 < (int)uStack_20) {
                _param_4 = 10;
              }
              param_6 = 0;
              if (0 < _param_4) {
                psVar12 = asStack_6a;
                uStack_8 = uStack_1c;
                do {
                  psVar12 = psVar12 + 3;
                  FUN_006acc70(param_8,uStack_8,&param_5);
                  pvVar7 = (void *)thunk_FUN_0042b620(param_1,param_5,1);
                  if (pvVar7 == (void *)0x0) {
                    iVar15 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2d45,0,0,
                                          &DAT_007a4ccc);
                    if (iVar15 == 0) {
                      return;
                    }
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  sVar4 = (short)iVar15;
                  if (psVar12[2] == 0) {
                    sVar10 = *psVar12 + sVar4 + 2;
                    sVar4 = (sVar2 - sVar4) + -3;
                  }
                  else {
                    sVar10 = sVar4 + 3;
                    sVar4 = (*psVar12 - sVar4) + -2 + sVar2;
                  }
                  uStack_10 = CONCAT22(sVar10 + sVar3,(undefined2)uStack_10);
                  uStack_c = CONCAT22(psVar12[1],sVar4);
                  iVar5 = thunk_FUN_0045ff10((int)pvVar7);
                  if (iVar5 == 5) {
                    thunk_FUN_00490cd0(pvVar7,uStack_18,uStack_14,uStack_10,uStack_c);
                  }
                  else {
                    thunk_FUN_0045ef00(pvVar7,5,&uStack_18);
                  }
                  param_6 = param_6 + 1;
                  uStack_8 = uStack_8 + 1;
                } while (param_6 < _param_4);
              }
              iVar15 = iVar15 + 1;
              uStack_1c = uStack_1c + 10;
              uStack_20 = uStack_20 + -10;
            } while (iVar15 <= (int)pvStack_24);
            return;
          }
          break;
        case 0x5a:
          uStack_20 = (iVar15 + -1) / 0xf;
          pvStack_24 = (void *)0x0;
          if (-1 < (int)uStack_20) {
            uStack_1c = 0;
            uStack_8 = iVar15;
            do {
              _param_4 = uStack_8;
              if (0xe < (int)uStack_8) {
                _param_4 = 0xf;
              }
              param_6 = 0;
              if (0 < _param_4) {
                puVar11 = &uStack_be;
                uVar13 = uStack_1c;
                do {
                  FUN_006acc70(param_8,uVar13,&param_5);
                  pvVar7 = (void *)thunk_FUN_0042b620(param_1,param_5,1);
                  if (pvVar7 == (void *)0x0) {
                    iVar15 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2d2c,0,0,
                                          &DAT_007a4ccc);
                    if (iVar15 == 0) {
                      return;
                    }
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  uStack_10 = CONCAT22(puVar11[-1] + sVar3,(undefined2)uStack_10);
                  uStack_c = CONCAT22(*puVar11,(sVar2 - (short)pvStack_24) + -3);
                  iVar15 = thunk_FUN_0045ff10((int)pvVar7);
                  if (iVar15 == 5) {
                    thunk_FUN_00490cd0(pvVar7,uStack_18,uStack_14,uStack_10,uStack_c);
                  }
                  else {
                    thunk_FUN_0045ef00(pvVar7,5,&uStack_18);
                  }
                  param_6 = param_6 + 1;
                  uVar13 = uVar13 + 1;
                  puVar11 = puVar11 + 3;
                } while (param_6 < _param_4);
              }
              pvStack_24 = (void *)((int)pvStack_24 + 1);
              uStack_1c = uStack_1c + 0xf;
              uStack_8 = uStack_8 + -0xf;
            } while ((int)pvStack_24 <= (int)uStack_20);
            return;
          }
          break;
        case -1:
          iStack_c4 = (iVar15 + -1) / 100;
          iVar5 = 0;
          uStack_20 = 0xffffffff;
          if (-1 < iStack_c4) {
            uStack_8 = 0;
            do {
              piVar14 = aiStack_104;
              uStack_1c = iVar15;
              for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
                *piVar14 = 0;
                piVar14 = piVar14 + 1;
              }
              _param_4 = iVar15;
              if (99 < iVar15) {
                _param_4 = 100;
              }
              param_6 = 0;
              uVar13 = uStack_8;
              if (0 < _param_4) {
                do {
                  FUN_006acc70(param_8,uVar13,&param_5);
                  pvStack_24 = (void *)thunk_FUN_0042b620(param_1,param_5,1);
                  if (pvStack_24 == (void *)0x0) {
                    iVar15 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2e0b,0,0,
                                          &DAT_007a4ccc);
                    if (iVar15 == 0) {
                      return;
                    }
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  do {
                    while( true ) {
                      uStack_20 = uStack_20 + 1 & 0x80000007;
                      if ((int)uStack_20 < 0) {
                        uStack_20 = (uStack_20 - 1 | 0xfffffff8) + 1;
                      }
                      iVar15 = aiStack_e4[uStack_20];
                      if (iVar15 % 0x5a != 0) break;
                      if (aiStack_104[uStack_20] != 0xf) goto LAB_00448970;
                    }
                  } while (aiStack_104[uStack_20] == 10);
LAB_00448970:
                  iVar9 = aiStack_104[uStack_20] + 1;
                  aiStack_104[uStack_20] = iVar9;
                  sVar4 = (short)iVar5;
                  if (iVar15 < 0xb5) {
                    if (iVar15 == 0xb4) {
                      sVar10 = (sVar3 - sVar4) + -3;
                      sVar4 = (&sStack_c6)[iVar9 * 3] + sVar2;
LAB_00448aaf:
                      uStack_10 = CONCAT22(sVar10,(undefined2)uStack_10);
                      uStack_c = CONCAT22(*(undefined2 *)((int)&iStack_c4 + iVar9 * 6),sVar4);
                    }
                    else {
                      switch(iVar15) {
                      case 0:
                        uStack_10 = CONCAT22(sVar4 + 3 + sVar3,(undefined2)uStack_10);
                        uStack_c = CONCAT22(*(undefined2 *)((int)&iStack_c4 + iVar9 * 6),
                                            (&sStack_c6)[iVar9 * 3] + sVar2);
                        break;
                      default:
switchD_004489a9_caseD_1:
                        iVar15 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2e63,0,0,
                                              &DAT_007a4ccc);
                        if (iVar15 != 0) {
                          pcVar1 = (code *)swi(3);
                          (*pcVar1)();
                          return;
                        }
                        break;
                      case 0x2d:
                        if (asStack_6a[iVar9 * 3 + 2] == 0) {
                          uStack_10 = CONCAT22(asStack_6a[iVar9 * 3] + sVar4 + 2 + sVar3,
                                               (undefined2)uStack_10);
                          sVar4 = (sVar2 - sVar4) + -3;
                          goto LAB_00448bc0;
                        }
                        sVar10 = (sVar2 - sVar4) + -2 + asStack_6a[iVar9 * 3];
LAB_00448b30:
                        uStack_10 = CONCAT22(sVar4 + 3 + sVar3,(undefined2)uStack_10);
                        uStack_c = CONCAT22(asStack_6a[iVar9 * 3 + 1],sVar10);
                        break;
                      case 0x5a:
                        sVar10 = (&sStack_c6)[iVar9 * 3] + sVar3;
                        sVar4 = (sVar2 - sVar4) + -3;
                        goto LAB_00448aaf;
                      case 0x87:
                        if (asStack_6a[iVar9 * 3 + 2] != 0) {
                          uStack_10 = CONCAT22(-sVar4 + -2 + sVar3 + asStack_6a[iVar9 * 3],
                                               (undefined2)uStack_10);
                          sVar4 = -sVar4 + -3 + sVar2;
                          goto LAB_00448bc0;
                        }
                        uStack_10 = CONCAT22(-sVar4 + -3 + sVar3,(undefined2)uStack_10);
                        uStack_c = CONCAT22(asStack_6a[iVar9 * 3 + 1],
                                            ((-sVar4 + sVar2) - asStack_6a[iVar9 * 3]) + -2);
                      }
                    }
                  }
                  else {
                    if (iVar15 == 0xe1) {
                      if (asStack_6a[iVar9 * 3 + 2] == 0) {
                        uStack_10 = CONCAT22(((sVar3 - sVar4) - asStack_6a[iVar9 * 3]) + -2,
                                             (undefined2)uStack_10);
                        sVar4 = sVar4 + 3 + sVar2;
                      }
                      else {
                        uStack_10 = CONCAT22((sVar3 - sVar4) + -3,(undefined2)uStack_10);
                        sVar4 = ((sVar4 + sVar2) - asStack_6a[iVar9 * 3]) + 2;
                      }
LAB_00448bc0:
                      sVar10 = asStack_6a[iVar9 * 3 + 1];
                    }
                    else {
                      if (iVar15 != 0x10e) {
                        if (iVar15 != 0x13b) goto switchD_004489a9_caseD_1;
                        if (asStack_6a[iVar9 * 3 + 2] == 0) {
                          sVar10 = asStack_6a[iVar9 * 3] + sVar4 + 2 + sVar2;
                          goto LAB_00448b30;
                        }
                        uStack_10 = CONCAT22(((sVar4 + sVar3) - asStack_6a[iVar9 * 3]) + 2,
                                             (undefined2)uStack_10);
                        sVar4 = sVar4 + 3 + sVar2;
                        goto LAB_00448bc0;
                      }
                      uStack_10 = CONCAT22((&sStack_c6)[iVar9 * 3] + sVar3,(undefined2)uStack_10);
                      sVar4 = sVar4 + 3 + sVar2;
                      sVar10 = *(short *)((int)&iStack_c4 + iVar9 * 6);
                    }
                    uStack_c = CONCAT22(sVar10,sVar4);
                  }
                  pvVar7 = pvStack_24;
                  iVar15 = thunk_FUN_0045ff10((int)pvStack_24);
                  if (((iVar15 == 5) && (uVar6 = thunk_FUN_0045f400(pvVar7,3), uVar6 == 1)) ||
                     (iVar15 = thunk_FUN_0045ff10((int)pvVar7), iVar15 != 5)) {
                    thunk_FUN_0045ef00(pvVar7,5,&uStack_18);
                  }
                  else {
                    thunk_FUN_00490cd0(pvVar7,uStack_18,uStack_14,uStack_10,uStack_c);
                  }
                  param_6 = param_6 + 1;
                  uVar13 = uVar13 + 1;
                } while (param_6 < _param_4);
              }
              uStack_8 = uStack_8 + 100;
              iVar5 = iVar5 + 1;
              iVar15 = uStack_1c + -100;
              if (iStack_c4 < iVar5) {
                return;
              }
            } while( true );
          }
        }
      }
    }
    else {
      switch(iVar5) {
      case 0xb4:
        uStack_20 = (iVar15 + -1) / 0xf;
        pvStack_24 = (void *)0x0;
        if (-1 < (int)uStack_20) {
          uStack_8 = 0;
          do {
            _param_4 = uStack_1c;
            if (0xe < (int)uStack_1c) {
              _param_4 = 0xf;
            }
            param_6 = 0;
            if (0 < _param_4) {
              puVar11 = &uStack_be;
              uVar13 = uStack_8;
              do {
                FUN_006acc70(param_8,uVar13,&param_5);
                pvVar7 = (void *)thunk_FUN_0042b620(param_1,param_5,1);
                if (pvVar7 == (void *)0x0) {
                  iVar15 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2d9b,0,0,
                                        &DAT_007a4ccc);
                  if (iVar15 == 0) {
                    return;
                  }
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                uStack_10 = CONCAT22((sVar3 - (short)pvStack_24) + -3,(undefined2)uStack_10);
                uStack_c = CONCAT22(*puVar11,puVar11[-1] + sVar2);
                iVar15 = thunk_FUN_0045ff10((int)pvVar7);
                if (iVar15 == 5) {
                  thunk_FUN_00490cd0(pvVar7,uStack_18,uStack_14,uStack_10,uStack_c);
                }
                else {
                  thunk_FUN_0045ef00(pvVar7,5,&uStack_18);
                }
                param_6 = param_6 + 1;
                uVar13 = uVar13 + 1;
                puVar11 = puVar11 + 3;
              } while (param_6 < _param_4);
            }
            pvStack_24 = (void *)((int)pvStack_24 + 1);
            uStack_8 = uStack_8 + 0xf;
            uStack_1c = uStack_1c + -0xf;
          } while ((int)pvStack_24 <= (int)uStack_20);
          return;
        }
        break;
      case 0xe1:
        pvStack_24 = (void *)((iVar15 + -1) / 0x14);
        iVar15 = 0;
        if (-1 < (int)pvStack_24) {
          uStack_1c = 0;
          do {
            _param_4 = uStack_20;
            if (0x13 < (int)uStack_20) {
              _param_4 = 0x14;
            }
            param_6 = 0;
            if (0 < _param_4) {
              psVar12 = asStack_6a;
              uStack_8 = uStack_1c;
              do {
                psVar12 = psVar12 + 3;
                FUN_006acc70(param_8,uStack_8,&param_5);
                pvVar7 = (void *)thunk_FUN_0042b620(param_1,param_5,1);
                if (pvVar7 == (void *)0x0) {
                  iVar15 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2dd2,0,0,
                                        &DAT_007a4ccc);
                  if (iVar15 == 0) {
                    return;
                  }
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                sVar4 = (short)iVar15;
                if (psVar12[2] == 0) {
                  sVar8 = sVar4 + 3 + sVar2;
                  uStack_c = CONCAT22(uStack_c._2_2_,sVar8);
                  sVar10 = ((sVar3 - sVar4) - *psVar12) + -2;
                  uStack_c = CONCAT22(psVar12[1],sVar8);
                }
                else {
                  sVar10 = (sVar3 - sVar4) + -3;
                  uStack_c = CONCAT22(psVar12[1],(sVar4 - *psVar12) + 2 + sVar2);
                }
                uStack_10 = CONCAT22(sVar10,(undefined2)uStack_10);
                iVar5 = thunk_FUN_0045ff10((int)pvVar7);
                if (iVar5 == 5) {
                  thunk_FUN_00490cd0(pvVar7,uStack_18,uStack_14,uStack_10,uStack_c);
                }
                else {
                  thunk_FUN_0045ef00(pvVar7,5,&uStack_18);
                }
                param_6 = param_6 + 1;
                uStack_8 = uStack_8 + 1;
              } while (param_6 < _param_4);
            }
            iVar15 = iVar15 + 1;
            uStack_1c = uStack_1c + 0x14;
            uStack_20 = uStack_20 + -0x14;
          } while (iVar15 <= (int)pvStack_24);
          return;
        }
        break;
      case 0x10e:
        uStack_20 = (iVar15 + -1) / 0xf;
        pvStack_24 = (void *)0x0;
        if (-1 < (int)uStack_20) {
          uStack_8 = 0;
          do {
            _param_4 = uStack_1c;
            if (0xe < (int)uStack_1c) {
              _param_4 = 0xf;
            }
            param_6 = 0;
            if (0 < _param_4) {
              puVar11 = &uStack_be;
              uVar13 = uStack_8;
              do {
                FUN_006acc70(param_8,uVar13,&param_5);
                pvVar7 = (void *)thunk_FUN_0042b620(param_1,param_5,1);
                if (pvVar7 == (void *)0x0) {
                  iVar15 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2df1,0,0,
                                        &DAT_007a4ccc);
                  if (iVar15 == 0) {
                    return;
                  }
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                uStack_10 = CONCAT22(puVar11[-1] + sVar3,(undefined2)uStack_10);
                uStack_c = CONCAT22(*puVar11,(short)pvStack_24 + 3 + sVar2);
                iVar15 = thunk_FUN_0045ff10((int)pvVar7);
                if (iVar15 == 5) {
                  thunk_FUN_00490cd0(pvVar7,uStack_18,uStack_14,uStack_10,uStack_c);
                }
                else {
                  thunk_FUN_0045ef00(pvVar7,5,&uStack_18);
                }
                param_6 = param_6 + 1;
                uVar13 = uVar13 + 1;
                puVar11 = puVar11 + 3;
              } while (param_6 < _param_4);
            }
            pvStack_24 = (void *)((int)pvStack_24 + 1);
            uStack_8 = uStack_8 + 0xf;
            uStack_1c = uStack_1c + -0xf;
          } while ((int)pvStack_24 <= (int)uStack_20);
          return;
        }
        break;
      case 0x13b:
        pvStack_24 = (void *)((iVar15 + -1) / 0x14);
        iVar15 = 0;
        if (-1 < (int)pvStack_24) {
          uStack_1c = 0;
          do {
            _param_4 = uStack_20;
            if (0x13 < (int)uStack_20) {
              _param_4 = 0x14;
            }
            param_6 = 0;
            if (0 < _param_4) {
              psVar12 = asStack_6a;
              uStack_8 = uStack_1c;
              do {
                psVar12 = psVar12 + 3;
                FUN_006acc70(param_8,uStack_8,&param_5);
                pvVar7 = (void *)thunk_FUN_0042b620(param_1,param_5,1);
                if (pvVar7 == (void *)0x0) {
                  iVar15 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2db3,0,0,
                                        &DAT_007a4ccc);
                  if (iVar15 == 0) {
                    return;
                  }
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                sVar4 = (short)iVar15;
                if (psVar12[2] == 0) {
                  sVar10 = sVar4 + 3;
                  sVar4 = sVar4 + sVar2 + *psVar12 + 2;
                }
                else {
                  sVar10 = (sVar4 - *psVar12) + 2;
                  sVar4 = sVar4 + 3 + sVar2;
                }
                uStack_10 = CONCAT22(sVar10 + sVar3,(undefined2)uStack_10);
                uStack_c = CONCAT22(psVar12[1],sVar4);
                iVar5 = thunk_FUN_0045ff10((int)pvVar7);
                if (iVar5 == 5) {
                  thunk_FUN_00490cd0(pvVar7,uStack_18,uStack_14,uStack_10,uStack_c);
                }
                else {
                  thunk_FUN_0045ef00(pvVar7,5,&uStack_18);
                }
                param_6 = param_6 + 1;
                uStack_8 = uStack_8 + 1;
              } while (param_6 < _param_4);
            }
            iVar15 = iVar15 + 1;
            uStack_1c = uStack_1c + 0x14;
            uStack_20 = uStack_20 + -0x14;
          } while (iVar15 <= (int)pvStack_24);
          return;
        }
      }
    }
  }
  return;
}

