
undefined4 * __thiscall thunk_FUN_0040c080(void *this,uint param_1,int param_2)

{
  short *psVar1;
  ushort uVar2;
  undefined1 *puVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined3 extraout_var;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iStack_b8;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_9c;
  int iStack_94;
  void *pvStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  short asStack_78 [2];
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 *puStack_54;
  int iStack_50;
  short asStack_4c [6];
  int iStack_40;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  short asStack_24 [2];
  int iStack_20;
  undefined1 *puStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &DAT_00790020;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  puStack_1c = &stack0xffffff34;
  iVar9 = *(int *)(param_2 + 0xc);
  iStack_80 = iVar9;
  if (iVar9 == 0) {
    ExceptionList = &pvStack_14;
    puStack_1c = &stack0xffffff34;
    puVar5 = (undefined4 *)FUN_006aac70(4);
    *puVar5 = 0xfffffffc;
  }
  else {
    ExceptionList = &pvStack_14;
    puVar5 = (undefined4 *)FUN_006aac70(iVar9 * 4);
    if (puVar5 != (undefined4 *)0x0) {
      iVar6 = thunk_FUN_00423e70(this,param_1);
      if (iVar6 == 0) {
        puVar12 = puVar5;
        if (0 < iVar9) {
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar12 = 0xfffffffc;
            puVar12 = puVar12 + 1;
          }
        }
      }
      else {
        uStack_8 = 0;
        FUN_0072da40();
        uStack_8 = 0xffffffff;
        iVar9 = (int)*(short *)(iVar6 + 0x47);
        iStack_a8 = (int)*(short *)(iVar6 + 0x49);
        iStack_20 = (int)*(short *)(iVar6 + 0x4b);
        uVar11 = 0;
        iStack_9c = iStack_a8;
        iStack_74 = iVar9;
        iStack_30 = iStack_20;
        puStack_1c = &stack0xffffff34;
        puVar3 = &stack0xffffff34;
        if (0 < iStack_80) {
          do {
            FUN_006acc70(param_2,uVar11,&pvStack_90);
            thunk_FUN_004162f0(pvStack_90,asStack_24,asStack_4c,asStack_78);
            iVar8 = (int)asStack_24[0];
            if (iVar8 < iStack_74) {
              iStack_74 = iVar8;
            }
            if (iVar9 < iVar8) {
              iVar9 = iVar8;
            }
            iVar7 = (int)asStack_4c[0];
            if (iVar7 < iStack_9c) {
              iStack_9c = iVar7;
            }
            if (iStack_a8 < iVar7) {
              iStack_a8 = iVar7;
            }
            iVar7 = (int)asStack_78[0];
            if (iVar7 < iStack_20) {
              iStack_20 = iVar7;
            }
            if (iStack_30 < iVar7) {
              iStack_30 = iVar7;
            }
            iVar7 = uVar11 * 0xc;
            *(int *)(&stack0xffffff34 + iVar7) = iVar8;
            *(int *)(&stack0xffffff38 + iVar7) = (int)asStack_4c[0];
            *(int *)(&stack0xffffff3c + iVar7) = (int)asStack_78[0];
            uVar11 = uVar11 + 1;
            puVar3 = puStack_1c;
          } while ((int)uVar11 < iStack_80);
        }
        puStack_1c = puVar3;
        iStack_74 = iStack_74 + -2;
        if (iStack_74 < 0) {
          iStack_74 = 0;
        }
        iStack_9c = iStack_9c + -2;
        if (iStack_9c < 0) {
          iStack_9c = 0;
        }
        iStack_20 = iStack_20 + -2;
        if (iStack_20 < 0) {
          iStack_20 = 0;
        }
        iVar8 = iStack_20;
        iVar9 = iVar9 + 2;
        if (DAT_007fb278 <= iVar9) {
          iVar9 = DAT_007fb278 + -1;
        }
        iStack_a8 = iStack_a8 + 2;
        if (DAT_007fb27a <= iStack_a8) {
          iStack_a8 = DAT_007fb27a + -1;
        }
        iStack_30 = iStack_30 + 2;
        if (DAT_007fb27c <= iStack_30) {
          iStack_30 = DAT_007fb27c + -1;
        }
        iStack_ac = *(short *)(iVar6 + 0x47) + -2;
        if (iStack_ac < 0) {
          iStack_ac = 0;
        }
        iStack_38 = *(short *)(iVar6 + 0x49) + -2;
        if (iStack_38 < 0) {
          iStack_38 = 0;
        }
        iStack_5c = *(short *)(iVar6 + 0x4b) + -2;
        if (iStack_5c < 0) {
          iStack_5c = 0;
        }
        iStack_b8 = *(short *)(iVar6 + 0x47) + 2;
        if (DAT_007fb278 <= iStack_b8) {
          iStack_b8 = DAT_007fb278 + -1;
        }
        iStack_40 = *(short *)(iVar6 + 0x49) + 2;
        if (DAT_007fb27a <= iStack_40) {
          iStack_40 = DAT_007fb27a + -1;
        }
        iStack_6c = *(short *)(iVar6 + 0x4b) + 2;
        if (DAT_007fb27c <= iStack_6c) {
          iStack_6c = DAT_007fb27c + -1;
        }
        iStack_2c = (iVar9 - iStack_74) + 1;
        iStack_70 = (iStack_a8 - iStack_9c) + 1;
        iStack_68 = (iStack_30 - iStack_20) + 1;
        iStack_64 = iStack_70 * iStack_2c;
        iStack_84 = iVar9;
        puStack_54 = (undefined4 *)FUN_006aac70(iStack_64 * iStack_68 * 2);
        for (iStack_8c = iVar8; iStack_8c < iStack_5c; iStack_8c = iStack_8c + 1) {
          iVar8 = DAT_007fb280 + (DAT_007fb27e * iStack_8c + DAT_007fb278 * iStack_9c) * 2;
          iVar7 = (int)puStack_54 + (iStack_8c - iStack_20) * iStack_64 * 2;
          for (iStack_88 = iStack_9c; iVar10 = iStack_74, iStack_88 <= iStack_a8;
              iStack_88 = iStack_88 + 1) {
            for (; iVar10 <= iVar9; iVar10 = iVar10 + 1) {
              *(undefined2 *)(iVar7 + (iVar10 - iStack_74) * 2) =
                   *(undefined2 *)(iVar8 + iVar10 * 2);
            }
            iVar8 = iVar8 + DAT_007fb278 * 2;
            iVar7 = iVar7 + iStack_2c * 2;
          }
        }
        if (iStack_8c <= iStack_6c) {
          do {
            iVar8 = DAT_007fb280 + (DAT_007fb27e * iStack_8c + DAT_007fb278 * iStack_9c) * 2;
            iVar7 = (int)puStack_54 + (iStack_8c - iStack_20) * iStack_64 * 2;
            for (iStack_88 = iStack_9c; iVar10 = iStack_74, iStack_88 < iStack_38;
                iStack_88 = iStack_88 + 1) {
              for (; iVar10 <= iVar9; iVar10 = iVar10 + 1) {
                *(undefined2 *)(iVar7 + (iVar10 - iStack_74) * 2) =
                     *(undefined2 *)(iVar8 + iVar10 * 2);
              }
              iVar8 = iVar8 + DAT_007fb278 * 2;
              iVar7 = iVar7 + iStack_2c * 2;
            }
            if (iStack_88 <= iStack_40) {
              do {
                for (; iVar10 < iStack_ac; iVar10 = iVar10 + 1) {
                  *(undefined2 *)(iVar7 + (iVar10 - iStack_74) * 2) =
                       *(undefined2 *)(iVar8 + iVar10 * 2);
                }
                for (; iVar10 <= iStack_b8; iVar10 = iVar10 + 1) {
                  if ((*(short *)(iVar8 + iVar10 * 2) == 0) &&
                     (bVar4 = thunk_FUN_00497920(iVar6,iVar10,iStack_88,iStack_8c),
                     CONCAT31(extraout_var,bVar4) == 0)) {
                    *(undefined2 *)(iVar7 + (iVar10 - iStack_74) * 2) = 0xfffd;
                  }
                  else {
                    *(undefined2 *)(iVar7 + (iVar10 - iStack_74) * 2) =
                         *(undefined2 *)(iVar8 + iVar10 * 2);
                  }
                }
                for (; iVar10 <= iStack_84; iVar10 = iVar10 + 1) {
                  *(undefined2 *)(iVar7 + (iVar10 - iStack_74) * 2) =
                       *(undefined2 *)(iVar8 + iVar10 * 2);
                }
                iVar8 = iVar8 + DAT_007fb278 * 2;
                iVar7 = iVar7 + iStack_2c * 2;
                iStack_88 = iStack_88 + 1;
                iVar10 = iStack_74;
                iVar9 = iStack_84;
              } while (iStack_88 <= iStack_40);
            }
            for (; iVar10 = iStack_74, iStack_88 <= iStack_a8; iStack_88 = iStack_88 + 1) {
              for (; iVar10 <= iVar9; iVar10 = iVar10 + 1) {
                *(undefined2 *)(iVar7 + (iVar10 - iStack_74) * 2) =
                     *(undefined2 *)(iVar8 + iVar10 * 2);
              }
              iVar8 = iVar8 + DAT_007fb278 * 2;
              iVar7 = iVar7 + iStack_2c * 2;
            }
            iStack_8c = iStack_8c + 1;
          } while (iStack_8c <= iStack_6c);
        }
        for (; puVar12 = puStack_54, iStack_8c <= iStack_30; iStack_8c = iStack_8c + 1) {
          iVar8 = DAT_007fb280 + (DAT_007fb27e * iStack_8c + DAT_007fb278 * iStack_9c) * 2;
          iVar7 = (int)puStack_54 + (iStack_8c - iStack_20) * iStack_64 * 2;
          for (iStack_88 = iStack_9c; iVar10 = iStack_74, iStack_88 <= iStack_a8;
              iStack_88 = iStack_88 + 1) {
            for (; iVar10 <= iVar9; iVar10 = iVar10 + 1) {
              *(undefined2 *)(iVar7 + (iVar10 - iStack_74) * 2) =
                   *(undefined2 *)(iVar8 + iVar10 * 2);
            }
            iVar8 = iVar8 + DAT_007fb278 * 2;
            iVar7 = iVar7 + iStack_2c * 2;
          }
        }
        iVar9 = FUN_006ab090((int)puStack_54,iStack_2c,iStack_70,iStack_68,
                             *(short *)(iVar6 + 0x47) - iStack_74,
                             *(short *)(iVar6 + 0x49) - iStack_9c,
                             *(short *)(iVar6 + 0x4b) - iStack_20,-1,-1,-1);
        if (iVar9 == 0) {
          iStack_34 = 0;
          if (0 < iStack_80) {
            do {
              iVar9 = iStack_34 * 0xc;
              iStack_8c = *(int *)(&stack0xffffff3c + iVar9) - iStack_20;
              iStack_88 = *(int *)(&stack0xffffff38 + iVar9) - iStack_9c;
              iStack_7c = *(int *)(&stack0xffffff34 + iVar9) - iStack_74;
              psVar1 = (short *)((int)puStack_54 +
                                (iStack_8c * iStack_64 + iStack_7c + iStack_88 * iStack_2c) * 2);
              iStack_94 = (int)*psVar1;
              if (iStack_94 < 0) {
                iStack_94 = 30000;
                iStack_a4 = 0;
                do {
                  iStack_50 = (short)(&DAT_007ed570)[iStack_a4 * 4] + iStack_7c;
                  if ((-1 < iStack_50) && (iStack_50 < iStack_2c)) {
                    iVar6 = (int)(short)(&DAT_007ed572)[iStack_a4 * 4];
                    iVar9 = iVar6 + iStack_88;
                    if ((-1 < iVar9) && (iVar9 < iStack_70)) {
                      iStack_60 = (short)(&DAT_007ed574)[iStack_a4 * 4] + iStack_8c;
                      if ((-1 < iStack_60) && (iStack_60 < iStack_68)) {
                        uVar2 = (&DAT_007ed576)[iStack_a4 * 4];
                        if ((uVar2 & 1) == 0) {
                          if (((uVar2 & 0x6000) == 0) || ((uVar2 & 0x9fff) == 0xffe)) {
LAB_0040c90d:
                            iVar9 = (int)*(short *)((int)puStack_54 +
                                                   (iVar9 * iStack_2c +
                                                   iStack_50 + iStack_60 * iStack_64) * 2);
                            if ((0 < iVar9) &&
                               (iVar9 = iVar9 + (&DAT_007ed640)[iStack_a4], iVar9 < iStack_94)) {
                              iStack_94 = iVar9;
                            }
                          }
                          else if ((psVar1[(short)(&DAT_007ed574)[iStack_a4 * 4] * iStack_64] &
                                   0xc000U) != 0xc000) {
                            if (iVar6 == 0) {
                              uVar2 = psVar1[(short)(&DAT_007ed570)[iStack_a4 * 4]];
                            }
                            else {
                              uVar2 = psVar1[iVar6 * iStack_2c];
                            }
joined_r0x0040c8f3:
                            if ((uVar2 & 0xc000) != 0xc000) goto LAB_0040c90d;
                          }
                        }
                        else {
                          iVar8 = (int)(short)(&DAT_007ed570)[iStack_a4 * 4];
                          if (((psVar1[iVar8] & 0xc000U) != 0xc000) &&
                             (iVar6 = iVar6 * iStack_2c, (psVar1[iVar6] & 0xc000U) != 0xc000)) {
                            if ((uVar2 & 0x4000) == 0) {
                              if ((uVar2 & 0x2000) == 0) goto LAB_0040c90d;
                              if (((psVar1[iStack_64] & 0xc000U) != 0xc000) &&
                                 (iVar7 = iStack_64, (psVar1[iStack_64 + iVar8] & 0xc000U) != 0xc000
                                 )) goto LAB_0040c875;
                            }
                            else if (((psVar1[-iStack_64] & 0xc000U) != 0xc000) &&
                                    ((psVar1[iVar8 - iStack_64] & 0xc000U) != 0xc000)) {
                              iVar7 = -iStack_64;
LAB_0040c875:
                              if ((psVar1[iVar6 + iVar7] & 0xc000U) != 0xc000) {
                                uVar2 = psVar1[iVar8 + iVar6];
                                goto joined_r0x0040c8f3;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  iStack_a4 = iStack_a4 + 1;
                } while (iStack_a4 < 0x1a);
              }
              if ((iStack_94 < 1) || (29999 < iStack_94)) {
                iVar9 = -4;
              }
              else {
                iVar9 = (iStack_94 + -1) / 3;
              }
              puVar5[iStack_34] = iVar9;
              iStack_34 = iStack_34 + 1;
              puVar12 = puStack_54;
            } while (iStack_34 < iStack_80);
          }
          FUN_006a5e90(puVar12);
        }
        else {
          FUN_006a5e90(puVar12);
          FUN_006a5e90(puVar5);
          RaiseInternalException(-2,DAT_007ed77c,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0x233);
          puVar5 = (undefined4 *)0x0;
        }
      }
    }
  }
  ExceptionList = pvStack_14;
  return puVar5;
}

