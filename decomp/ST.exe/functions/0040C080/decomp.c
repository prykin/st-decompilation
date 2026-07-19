
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 563 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __thiscall FUN_0040c080(void *this,uint param_1,int param_2)

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
  int local_b8;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_9c;
  int local_94;
  void *local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  short local_78 [2];
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 *local_54;
  int local_50;
  short local_4c [6];
  int local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  short local_24 [2];
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00790020;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff34;
  iVar9 = *(int *)(param_2 + 0xc);
  local_80 = iVar9;
  if (iVar9 == 0) {
    ExceptionList = &local_14;
    local_1c = &stack0xffffff34;
    puVar5 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(4);
    *puVar5 = 0xfffffffc;
  }
  else {
    ExceptionList = &local_14;
    puVar5 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(iVar9 * 4);
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
        local_8 = 0;
        Library::MSVCRT::FUN_0072da40();
        local_8 = 0xffffffff;
        iVar9 = (int)*(short *)(iVar6 + 0x47);
        local_a8 = (int)*(short *)(iVar6 + 0x49);
        local_20 = (int)*(short *)(iVar6 + 0x4b);
        uVar11 = 0;
        local_9c = local_a8;
        local_74 = iVar9;
        local_30 = local_20;
        local_1c = &stack0xffffff34;
        puVar3 = &stack0xffffff34;
        if (0 < local_80) {
          do {
            FUN_006acc70(param_2,uVar11,&local_90);
            thunk_FUN_004162f0(local_90,local_24,local_4c,local_78);
            iVar8 = (int)local_24[0];
            if (iVar8 < local_74) {
              local_74 = iVar8;
            }
            if (iVar9 < iVar8) {
              iVar9 = iVar8;
            }
            iVar7 = (int)local_4c[0];
            if (iVar7 < local_9c) {
              local_9c = iVar7;
            }
            if (local_a8 < iVar7) {
              local_a8 = iVar7;
            }
            iVar7 = (int)local_78[0];
            if (iVar7 < local_20) {
              local_20 = iVar7;
            }
            if (local_30 < iVar7) {
              local_30 = iVar7;
            }
            iVar7 = uVar11 * 0xc;
            *(int *)(&stack0xffffff34 + iVar7) = iVar8;
            *(int *)(&stack0xffffff38 + iVar7) = (int)local_4c[0];
            *(int *)(&stack0xffffff3c + iVar7) = (int)local_78[0];
            uVar11 = uVar11 + 1;
            puVar3 = local_1c;
          } while ((int)uVar11 < local_80);
        }
        local_1c = puVar3;
        local_74 = local_74 + -2;
        if (local_74 < 0) {
          local_74 = 0;
        }
        local_9c = local_9c + -2;
        if (local_9c < 0) {
          local_9c = 0;
        }
        local_20 = local_20 + -2;
        if (local_20 < 0) {
          local_20 = 0;
        }
        iVar8 = local_20;
        iVar9 = iVar9 + 2;
        if (DAT_007fb278 <= iVar9) {
          iVar9 = DAT_007fb278 + -1;
        }
        local_a8 = local_a8 + 2;
        if (DAT_007fb27a <= local_a8) {
          local_a8 = DAT_007fb27a + -1;
        }
        local_30 = local_30 + 2;
        if (DAT_007fb27c <= local_30) {
          local_30 = DAT_007fb27c + -1;
        }
        local_ac = *(short *)(iVar6 + 0x47) + -2;
        if (local_ac < 0) {
          local_ac = 0;
        }
        local_38 = *(short *)(iVar6 + 0x49) + -2;
        if (local_38 < 0) {
          local_38 = 0;
        }
        local_5c = *(short *)(iVar6 + 0x4b) + -2;
        if (local_5c < 0) {
          local_5c = 0;
        }
        local_b8 = *(short *)(iVar6 + 0x47) + 2;
        if (DAT_007fb278 <= local_b8) {
          local_b8 = DAT_007fb278 + -1;
        }
        local_40 = *(short *)(iVar6 + 0x49) + 2;
        if (DAT_007fb27a <= local_40) {
          local_40 = DAT_007fb27a + -1;
        }
        local_6c = *(short *)(iVar6 + 0x4b) + 2;
        if (DAT_007fb27c <= local_6c) {
          local_6c = DAT_007fb27c + -1;
        }
        local_2c = (iVar9 - local_74) + 1;
        local_70 = (local_a8 - local_9c) + 1;
        local_68 = (local_30 - local_20) + 1;
        local_64 = local_70 * local_2c;
        local_84 = iVar9;
        local_54 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(local_64 * local_68 * 2);
        for (local_8c = iVar8; local_8c < local_5c; local_8c = local_8c + 1) {
          iVar8 = DAT_007fb280 + (DAT_007fb27e * local_8c + DAT_007fb278 * local_9c) * 2;
          iVar7 = (int)local_54 + (local_8c - local_20) * local_64 * 2;
          for (local_88 = local_9c; iVar10 = local_74, local_88 <= local_a8; local_88 = local_88 + 1
              ) {
            for (; iVar10 <= iVar9; iVar10 = iVar10 + 1) {
              *(undefined2 *)(iVar7 + (iVar10 - local_74) * 2) = *(undefined2 *)(iVar8 + iVar10 * 2)
              ;
            }
            iVar8 = iVar8 + DAT_007fb278 * 2;
            iVar7 = iVar7 + local_2c * 2;
          }
        }
        if (local_8c <= local_6c) {
          do {
            iVar8 = DAT_007fb280 + (DAT_007fb27e * local_8c + DAT_007fb278 * local_9c) * 2;
            iVar7 = (int)local_54 + (local_8c - local_20) * local_64 * 2;
            for (local_88 = local_9c; iVar10 = local_74, local_88 < local_38;
                local_88 = local_88 + 1) {
              for (; iVar10 <= iVar9; iVar10 = iVar10 + 1) {
                *(undefined2 *)(iVar7 + (iVar10 - local_74) * 2) =
                     *(undefined2 *)(iVar8 + iVar10 * 2);
              }
              iVar8 = iVar8 + DAT_007fb278 * 2;
              iVar7 = iVar7 + local_2c * 2;
            }
            if (local_88 <= local_40) {
              do {
                for (; iVar10 < local_ac; iVar10 = iVar10 + 1) {
                  *(undefined2 *)(iVar7 + (iVar10 - local_74) * 2) =
                       *(undefined2 *)(iVar8 + iVar10 * 2);
                }
                for (; iVar10 <= local_b8; iVar10 = iVar10 + 1) {
                  if ((*(short *)(iVar8 + iVar10 * 2) == 0) &&
                     (bVar4 = thunk_FUN_00497920(iVar6,iVar10,local_88,local_8c),
                     CONCAT31(extraout_var,bVar4) == 0)) {
                    *(undefined2 *)(iVar7 + (iVar10 - local_74) * 2) = 0xfffd;
                  }
                  else {
                    *(undefined2 *)(iVar7 + (iVar10 - local_74) * 2) =
                         *(undefined2 *)(iVar8 + iVar10 * 2);
                  }
                }
                for (; iVar10 <= local_84; iVar10 = iVar10 + 1) {
                  *(undefined2 *)(iVar7 + (iVar10 - local_74) * 2) =
                       *(undefined2 *)(iVar8 + iVar10 * 2);
                }
                iVar8 = iVar8 + DAT_007fb278 * 2;
                iVar7 = iVar7 + local_2c * 2;
                local_88 = local_88 + 1;
                iVar10 = local_74;
                iVar9 = local_84;
              } while (local_88 <= local_40);
            }
            for (; iVar10 = local_74, local_88 <= local_a8; local_88 = local_88 + 1) {
              for (; iVar10 <= iVar9; iVar10 = iVar10 + 1) {
                *(undefined2 *)(iVar7 + (iVar10 - local_74) * 2) =
                     *(undefined2 *)(iVar8 + iVar10 * 2);
              }
              iVar8 = iVar8 + DAT_007fb278 * 2;
              iVar7 = iVar7 + local_2c * 2;
            }
            local_8c = local_8c + 1;
          } while (local_8c <= local_6c);
        }
        for (; puVar12 = local_54, local_8c <= local_30; local_8c = local_8c + 1) {
          iVar8 = DAT_007fb280 + (DAT_007fb27e * local_8c + DAT_007fb278 * local_9c) * 2;
          iVar7 = (int)local_54 + (local_8c - local_20) * local_64 * 2;
          for (local_88 = local_9c; iVar10 = local_74, local_88 <= local_a8; local_88 = local_88 + 1
              ) {
            for (; iVar10 <= iVar9; iVar10 = iVar10 + 1) {
              *(undefined2 *)(iVar7 + (iVar10 - local_74) * 2) = *(undefined2 *)(iVar8 + iVar10 * 2)
              ;
            }
            iVar8 = iVar8 + DAT_007fb278 * 2;
            iVar7 = iVar7 + local_2c * 2;
          }
        }
        iVar9 = FUN_006ab090((int)local_54,local_2c,local_70,local_68,
                             *(short *)(iVar6 + 0x47) - local_74,*(short *)(iVar6 + 0x49) - local_9c
                             ,*(short *)(iVar6 + 0x4b) - local_20,-1,-1,-1);
        if (iVar9 == 0) {
          local_34 = 0;
          if (0 < local_80) {
            do {
              iVar9 = local_34 * 0xc;
              local_8c = *(int *)(&stack0xffffff3c + iVar9) - local_20;
              local_88 = *(int *)(&stack0xffffff38 + iVar9) - local_9c;
              local_7c = *(int *)(&stack0xffffff34 + iVar9) - local_74;
              psVar1 = (short *)((int)local_54 +
                                (local_8c * local_64 + local_7c + local_88 * local_2c) * 2);
              local_94 = (int)*psVar1;
              if (local_94 < 0) {
                local_94 = 30000;
                local_a4 = 0;
                do {
                  local_50 = (short)(&DAT_007ed570)[local_a4 * 4] + local_7c;
                  if ((-1 < local_50) && (local_50 < local_2c)) {
                    iVar6 = (int)(short)(&DAT_007ed572)[local_a4 * 4];
                    iVar9 = iVar6 + local_88;
                    if ((-1 < iVar9) && (iVar9 < local_70)) {
                      local_60 = (short)(&DAT_007ed574)[local_a4 * 4] + local_8c;
                      if ((-1 < local_60) && (local_60 < local_68)) {
                        uVar2 = (&DAT_007ed576)[local_a4 * 4];
                        if ((uVar2 & 1) == 0) {
                          if (((uVar2 & 0x6000) == 0) || ((uVar2 & 0x9fff) == 0xffe)) {
LAB_0040c90d:
                            iVar9 = (int)*(short *)((int)local_54 +
                                                   (iVar9 * local_2c +
                                                   local_50 + local_60 * local_64) * 2);
                            if ((0 < iVar9) &&
                               (iVar9 = iVar9 + (&DAT_007ed640)[local_a4], iVar9 < local_94)) {
                              local_94 = iVar9;
                            }
                          }
                          else if ((psVar1[(short)(&DAT_007ed574)[local_a4 * 4] * local_64] &
                                   0xc000U) != 0xc000) {
                            if (iVar6 == 0) {
                              uVar2 = psVar1[(short)(&DAT_007ed570)[local_a4 * 4]];
                            }
                            else {
                              uVar2 = psVar1[iVar6 * local_2c];
                            }
joined_r0x0040c8f3:
                            if ((uVar2 & 0xc000) != 0xc000) goto LAB_0040c90d;
                          }
                        }
                        else {
                          iVar8 = (int)(short)(&DAT_007ed570)[local_a4 * 4];
                          if (((psVar1[iVar8] & 0xc000U) != 0xc000) &&
                             (iVar6 = iVar6 * local_2c, (psVar1[iVar6] & 0xc000U) != 0xc000)) {
                            if ((uVar2 & 0x4000) == 0) {
                              if ((uVar2 & 0x2000) == 0) goto LAB_0040c90d;
                              if (((psVar1[local_64] & 0xc000U) != 0xc000) &&
                                 (iVar7 = local_64, (psVar1[local_64 + iVar8] & 0xc000U) != 0xc000))
                              goto LAB_0040c875;
                            }
                            else if (((psVar1[-local_64] & 0xc000U) != 0xc000) &&
                                    ((psVar1[iVar8 - local_64] & 0xc000U) != 0xc000)) {
                              iVar7 = -local_64;
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
                  local_a4 = local_a4 + 1;
                } while (local_a4 < 0x1a);
              }
              if ((local_94 < 1) || (29999 < local_94)) {
                iVar9 = -4;
              }
              else {
                iVar9 = (local_94 + -1) / 3;
              }
              puVar5[local_34] = iVar9;
              local_34 = local_34 + 1;
              puVar12 = local_54;
            } while (local_34 < local_80);
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
  ExceptionList = local_14;
  return puVar5;
}

