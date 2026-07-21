
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\wlad\Grpway3d.cpp
   Diagnostic line evidence: 563 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]
   
   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004899A0 -> 0040C080 @ 00489B1F */

undefined4 * __thiscall FUN_0040c080(void *this,uint param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined1 *puVar3;
  bool bVar4;
  short *psVar5;
  AnonShape_00497920_894F87D6 *pAVar6;
  int iVar7;
  undefined3 extraout_var;
  int iVar8;
  int iVar9;
  uint uVar10;
  short *psVar11;
  short *psVar12;
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
  uint local_80;
  int local_7c;
  short local_78 [2];
  int local_74;
  Global_sub_006C8EC0_param_3Enum local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  short *local_54;
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
  uVar10 = param_2[3];
  local_80 = uVar10;
  if (uVar10 == 0) {
    ExceptionList = &local_14;
    local_1c = &stack0xffffff34;
    psVar5 = (short *)Library::DKW::LIB::FUN_006aac70(4);
    psVar5[0] = -4;
    psVar5[1] = -1;
  }
  else {
    ExceptionList = &local_14;
    psVar5 = (short *)Library::DKW::LIB::FUN_006aac70(uVar10 * 4);
    if (psVar5 != (short *)0x0) {
      pAVar6 = (AnonShape_00497920_894F87D6 *)thunk_FUN_00423e70(this,param_1);
      if (pAVar6 == (AnonShape_00497920_894F87D6 *)0x0) {
        psVar12 = psVar5;
        if (0 < (int)uVar10) {
          for (; uVar10 != 0; uVar10 = uVar10 - 1) {
            psVar12[0] = -4;
            psVar12[1] = -1;
            psVar12 = psVar12 + 2;
          }
        }
      }
      else {
        local_8 = 0;
        Library::MSVCRT::FUN_0072da40();
        local_8 = 0xffffffff;
        iVar9 = (int)pAVar6->field_0047;
        local_a8 = (int)pAVar6->field_0049;
        local_20 = (int)pAVar6->field_004B;
        uVar10 = 0;
        local_9c = local_a8;
        local_74 = iVar9;
        local_30 = local_20;
        local_1c = &stack0xffffff34;
        puVar3 = &stack0xffffff34;
        if (0 < (int)local_80) {
          do {
            DArrayGetElement((DArrayTy *)param_2,uVar10,&local_90);
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
            iVar7 = uVar10 * 0xc;
            *(int *)(&stack0xffffff34 + iVar7) = iVar8;
            *(int *)(&stack0xffffff38 + iVar7) = (int)local_4c[0];
            *(int *)(&stack0xffffff3c + iVar7) = (int)local_78[0];
            uVar10 = uVar10 + 1;
            puVar3 = local_1c;
          } while ((int)uVar10 < (int)local_80);
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
        if (g_pathingGrid.sizeX <= iVar9) {
          iVar9 = g_pathingGrid.sizeX + -1;
        }
        local_a8 = local_a8 + 2;
        if (g_pathingGrid.sizeY <= local_a8) {
          local_a8 = g_pathingGrid.sizeY + -1;
        }
        local_30 = local_30 + 2;
        if (g_pathingGrid.sizeZ <= local_30) {
          local_30 = g_pathingGrid.sizeZ + -1;
        }
        local_ac = pAVar6->field_0047 + -2;
        if (local_ac < 0) {
          local_ac = 0;
        }
        local_38 = pAVar6->field_0049 + -2;
        if (local_38 < 0) {
          local_38 = 0;
        }
        local_5c = pAVar6->field_004B + -2;
        if (local_5c < 0) {
          local_5c = 0;
        }
        local_b8 = pAVar6->field_0047 + 2;
        if (g_pathingGrid.sizeX <= local_b8) {
          local_b8 = g_pathingGrid.sizeX + -1;
        }
        local_40 = pAVar6->field_0049 + 2;
        if (g_pathingGrid.sizeY <= local_40) {
          local_40 = g_pathingGrid.sizeY + -1;
        }
        local_6c = pAVar6->field_004B + 2;
        if (g_pathingGrid.sizeZ <= local_6c) {
          local_6c = g_pathingGrid.sizeZ + -1;
        }
        local_2c = (iVar9 - local_74) + 1;
        local_70 = (local_a8 - local_9c) + CASE_1;
        local_68 = (local_30 - local_20) + 1;
        local_64 = local_70 * local_2c;
        local_84 = iVar9;
        local_54 = (short *)Library::DKW::LIB::FUN_006aac70(local_64 * local_68 * 2);
        for (local_8c = iVar8; local_8c < local_5c; local_8c = local_8c + 1) {
          psVar12 = g_pathingGrid.cells +
                    g_pathingGrid.planeStride * local_8c + g_pathingGrid.sizeX * local_9c;
          psVar11 = local_54 + (local_8c - local_20) * local_64;
          for (local_88 = local_9c; iVar8 = local_74, local_88 <= local_a8; local_88 = local_88 + 1)
          {
            for (; iVar8 <= iVar9; iVar8 = iVar8 + 1) {
              psVar11[iVar8 - local_74] = psVar12[iVar8];
            }
            psVar12 = psVar12 + g_pathingGrid.sizeX;
            psVar11 = psVar11 + local_2c;
          }
        }
        if (local_8c <= local_6c) {
          do {
            psVar12 = g_pathingGrid.cells +
                      g_pathingGrid.planeStride * local_8c + g_pathingGrid.sizeX * local_9c;
            psVar11 = local_54 + (local_8c - local_20) * local_64;
            for (local_88 = local_9c; iVar8 = local_74, local_88 < local_38; local_88 = local_88 + 1
                ) {
              for (; iVar8 <= iVar9; iVar8 = iVar8 + 1) {
                psVar11[iVar8 - local_74] = psVar12[iVar8];
              }
              psVar12 = psVar12 + g_pathingGrid.sizeX;
              psVar11 = psVar11 + local_2c;
            }
            if (local_88 <= local_40) {
              do {
                for (; iVar8 < local_ac; iVar8 = iVar8 + 1) {
                  psVar11[iVar8 - local_74] = psVar12[iVar8];
                }
                for (; iVar8 <= local_b8; iVar8 = iVar8 + 1) {
                  if ((psVar12[iVar8] == 0) &&
                     (bVar4 = thunk_FUN_00497920(pAVar6,iVar8,local_88,local_8c),
                     CONCAT31(extraout_var,bVar4) == 0)) {
                    psVar11[iVar8 - local_74] = -3;
                  }
                  else {
                    psVar11[iVar8 - local_74] = psVar12[iVar8];
                  }
                }
                for (; iVar8 <= local_84; iVar8 = iVar8 + 1) {
                  psVar11[iVar8 - local_74] = psVar12[iVar8];
                }
                psVar12 = psVar12 + g_pathingGrid.sizeX;
                psVar11 = psVar11 + local_2c;
                local_88 = local_88 + 1;
                iVar8 = local_74;
                iVar9 = local_84;
              } while (local_88 <= local_40);
            }
            for (; iVar8 = local_74, local_88 <= local_a8; local_88 = local_88 + 1) {
              for (; iVar8 <= iVar9; iVar8 = iVar8 + 1) {
                psVar11[iVar8 - local_74] = psVar12[iVar8];
              }
              psVar12 = psVar12 + g_pathingGrid.sizeX;
              psVar11 = psVar11 + local_2c;
            }
            local_8c = local_8c + 1;
          } while (local_8c <= local_6c);
        }
        for (; psVar12 = local_54, local_8c <= local_30; local_8c = local_8c + 1) {
          psVar12 = g_pathingGrid.cells +
                    g_pathingGrid.planeStride * local_8c + g_pathingGrid.sizeX * local_9c;
          psVar11 = local_54 + (local_8c - local_20) * local_64;
          for (local_88 = local_9c; iVar8 = local_74, local_88 <= local_a8; local_88 = local_88 + 1)
          {
            for (; iVar8 <= iVar9; iVar8 = iVar8 + 1) {
              psVar11[iVar8 - local_74] = psVar12[iVar8];
            }
            psVar12 = psVar12 + g_pathingGrid.sizeX;
            psVar11 = psVar11 + local_2c;
          }
        }
        iVar9 = FUN_006ab090((int)local_54,local_2c,local_70,local_68,pAVar6->field_0047 - local_74,
                             pAVar6->field_0049 - local_9c,pAVar6->field_004B - local_20,-1,-1,-1);
        if (iVar9 == 0) {
          local_34 = 0;
          if (0 < (int)local_80) {
            do {
              iVar9 = local_34 * 0xc;
              local_8c = *(int *)(&stack0xffffff3c + iVar9) - local_20;
              local_88 = *(int *)(&stack0xffffff38 + iVar9) - local_9c;
              local_7c = *(int *)(&stack0xffffff34 + iVar9) - local_74;
              psVar12 = local_54 + local_8c * local_64 + local_7c + local_88 * local_2c;
              local_94 = (int)*psVar12;
              if (local_94 < 0) {
                local_94 = 30000;
                local_a4 = 0;
                do {
                  local_50 = (&SHORT_007ed570)[local_a4 * 4] + local_7c;
                  if ((-1 < local_50) && (local_50 < local_2c)) {
                    iVar8 = (int)(&SHORT_007ed572)[local_a4 * 4];
                    iVar9 = iVar8 + local_88;
                    if ((-1 < iVar9) && (iVar9 < (int)local_70)) {
                      local_60 = (&SHORT_007ed574)[local_a4 * 4] + local_8c;
                      if ((-1 < local_60) && (local_60 < local_68)) {
                        uVar1 = (&SHORT_007ed576)[local_a4 * 4];
                        if ((uVar1 & 1) == 0) {
                          if (((uVar1 & 0x6000) == 0) || ((uVar1 & 0x9fff) == 0xffe)) {
LAB_0040c90d:
                            if ((0 < local_54[iVar9 * local_2c + local_50 + local_60 * local_64]) &&
                               (iVar9 = (int)local_54[iVar9 * local_2c +
                                                      local_50 + local_60 * local_64] +
                                        (&DAT_007ed640)[local_a4], iVar9 < local_94)) {
                              local_94 = iVar9;
                            }
                          }
                          else if ((psVar12[(&SHORT_007ed574)[local_a4 * 4] * local_64] & 0xc000U)
                                   != 0xc000) {
                            if (iVar8 == 0) {
                              uVar1 = psVar12[(&SHORT_007ed570)[local_a4 * 4]];
                            }
                            else {
                              uVar1 = psVar12[iVar8 * local_2c];
                            }
joined_r0x0040c8f3:
                            if ((uVar1 & 0xc000) != 0xc000) goto LAB_0040c90d;
                          }
                        }
                        else {
                          iVar7 = (int)(&SHORT_007ed570)[local_a4 * 4];
                          if (((psVar12[iVar7] & 0xc000U) != 0xc000) &&
                             (iVar8 = iVar8 * local_2c, (psVar12[iVar8] & 0xc000U) != 0xc000)) {
                            if ((uVar1 & 0x4000) == 0) {
                              if ((uVar1 & 0x2000) == 0) goto LAB_0040c90d;
                              if (((psVar12[local_64] & 0xc000U) != 0xc000) &&
                                 (iVar2 = local_64, (psVar12[local_64 + iVar7] & 0xc000U) != 0xc000)
                                 ) goto LAB_0040c875;
                            }
                            else if (((psVar12[-local_64] & 0xc000U) != 0xc000) &&
                                    ((psVar12[iVar7 - local_64] & 0xc000U) != 0xc000)) {
                              iVar2 = -local_64;
LAB_0040c875:
                              if ((psVar12[iVar8 + iVar2] & 0xc000U) != 0xc000) {
                                uVar1 = psVar12[iVar7 + iVar8];
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
              *(int *)(psVar5 + local_34 * 2) = iVar9;
              local_34 = local_34 + 1;
              psVar12 = local_54;
            } while (local_34 < (int)local_80);
          }
          FUN_006a5e90(psVar12);
        }
        else {
          FUN_006a5e90(psVar12);
          FUN_006a5e90(psVar5);
          RaiseInternalException
                    (-2,g_overwriteContext_007ED77C,s_E____titans_wlad_Grpway3d_cpp_007a4ca8,0x233);
          psVar5 = (short *)0x0;
        }
      }
    }
  }
  ExceptionList = local_14;
  return (undefined4 *)psVar5;
}

