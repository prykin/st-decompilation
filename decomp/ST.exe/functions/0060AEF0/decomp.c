
int __fastcall FUN_0060aef0(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int *piVar6;
  undefined4 uVar7;
  void *this;
  VisibleClassTy *pVVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  short sVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  short sVar15;
  short sVar16;
  int iVar17;
  STFishC *pSVar18;
  int iVar19;
  bool bVar20;
  uint uVar21;
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
  int local_94 [2];
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
  int local_20;
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
  puVar9 = &stack0xfffffef8;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)param_1 + 0x1f5) == 0x42) {
    ExceptionList = &local_14;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar12 = thunk_FUN_004e60d0(*(int *)((int)param_1 + 0x1d9),0x1c);
    if (iVar12 == 0) {
      iVar12 = DAT_007950ec / 0xc9;
    }
    else {
      iVar12 = DAT_007950ec / 0xc9 + 2;
    }
    *(int *)((int)param_1 + 0x24c) = iVar12;
    puVar9 = local_1c;
  }
  local_1c = puVar9;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar12 = *(int *)((int)param_1 + 0x1e9);
  sVar16 = (short)(iVar12 >> 0x1f);
  if (iVar12 < 0) {
    local_7c = (short)(((short)(iVar12 / 0xc9) + sVar16) -
                      (short)((longlong)iVar12 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_7c = (int)(short)(((short)(iVar12 / 0xc9) + sVar16) -
                           (short)((longlong)iVar12 * 0x28c1979 >> 0x3f));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar12 = *(int *)((int)param_1 + 0x1ed);
  sVar16 = (short)(iVar12 >> 0x1f);
  if (iVar12 < 0) {
    local_8c = (short)(((short)(iVar12 / 0xc9) + sVar16) -
                      (short)((longlong)iVar12 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_8c = (int)(short)(((short)(iVar12 / 0xc9) + sVar16) -
                           (short)((longlong)iVar12 * 0x28c1979 >> 0x3f));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar12 = *(int *)((int)param_1 + 0x24c);
  iVar17 = local_8c - iVar12;
  if (iVar17 < 0) {
    iVar17 = 0;
  }
  local_24 = local_7c - iVar12;
  if (local_24 < 0) {
    local_24 = 0;
  }
  iVar19 = iVar12 + 1 + local_8c;
  if (g_worldGrid.sizeY < iVar19) {
    iVar19 = (int)g_worldGrid.sizeY;
  }
  local_68 = iVar12 + 1 + local_7c;
  if (g_worldGrid.sizeX < local_68) {
    local_68 = (int)g_worldGrid.sizeX;
  }
  local_8 = 0;
  local_78 = iVar19;
  Library::MSVCRT::FUN_0072da40();
  local_a8 = &stack0xfffffef8;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)param_1 + 0x1f5) == 0x43) {
    local_8 = 1;
    local_a8 = &stack0xfffffef8;
    local_1c = &stack0xfffffef8;
    Library::MSVCRT::FUN_0072da40();
    local_74 = &stack0xfffffef8;
  }
  local_1c = &stack0xfffffef8;
  local_8 = 0xffffffff;
  local_a4 = 0;
  local_40 = iVar17;
  if (iVar17 < iVar19) {
    do {
      local_98 = local_24;
      if (local_24 < local_68) {
        do {
          local_3c = 0;
          do {
            sVar16 = (short)local_98;
            if (((((sVar16 < 0) || (g_worldGrid.sizeX <= sVar16)) ||
                 (sVar15 = (short)local_40, sVar15 < 0)) ||
                ((g_worldGrid.sizeY <= sVar15 || (sVar11 = (short)local_3c, sVar11 < 0)))) ||
               (g_worldGrid.sizeZ <= sVar11)) {
              pSVar18 = (STFishC *)0x0;
            }
            else {
              pSVar18 = (STFishC *)
                        g_worldGrid.cells
                        [(int)g_worldGrid.planeStride * (int)sVar11 +
                         (int)g_worldGrid.sizeX * (int)sVar15 + (int)sVar16].objects[0];
            }
            if ((pSVar18 != (STFishC *)0x0) &&
               (iVar12 = (*pSVar18->vtable->vfunc_F0)(), iVar12 != 0)) {
              if ((*(int *)&pSVar18->field_0x20 == 1000) &&
                 (iVar12 = (*pSVar18->vtable->vfunc_2C)(), *(int *)(&DAT_00791d68 + iVar12 * 4) == 1
                 )) {
                bVar20 = false;
                iVar12 = 0;
                if (0 < local_a4) {
                  do {
                    if (*(int *)(local_a8 + iVar12 * 4) == pSVar18->field_0018) {
                      bVar20 = true;
                      break;
                    }
                    iVar12 = iVar12 + 1;
                  } while (iVar12 < local_a4);
                }
                if (bVar20) goto cf_continue_loop_0060B649;
                *(undefined4 *)(local_a8 + local_a4 * 4) = pSVar18->field_0018;
                local_a4 = local_a4 + 1;
              }
              uVar14 = *(uint *)&pSVar18->field_0x24;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if (*(int *)((int)param_1 + 0x1f5) == 0x43) {
                if ((uVar14 < 8) &&
                   ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                    ((byte)(&DAT_008087e9)[uVar14 * 0x51] < 8)))) {
                  bVar3 = pSVar18->field_0x24;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_b8 = CONCAT31(uStack_b7,bVar3);
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  bVar4 = *(byte *)((int)param_1 + 0x1d9);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_b4 = CONCAT31(uStack_b3,bVar4);
                  if (DAT_00808a8f == '\0') {
                    if (bVar3 == bVar4) {
LAB_0060b2ce:
                      iVar12 = 0;
                    }
                    else {
                      bVar5 = g_playerRelationMatrix[bVar3][bVar4];
                      if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                        iVar12 = -2;
                      }
                      else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                        iVar12 = -1;
                      }
                      else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
                        iVar12 = 1;
                      }
                      else {
                        if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1))
                        goto LAB_0060b2ce;
                        iVar12 = 2;
                      }
                    }
                    bVar20 = iVar12 < 0;
                  }
                  else {
                    bVar20 = (&DAT_008087ea)[(uint)bVar4 * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar3 * 0x51];
                  }
                  if ((bVar20) && (iVar12 = (*pSVar18->vtable->vfunc_F8)(), iVar12 != 0)) {
                    puVar1 = (undefined4 *)(local_74 + local_88 * 0xc);
                    *puVar1 = pSVar18;
                    uVar13 = (*pSVar18->vtable->vfunc_78)();
                    puVar1[1] = uVar13;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    iVar12 = *(int *)((int)param_1 + 0x1ed);
                    sVar16 = (short)(iVar12 >> 0x1f);
                    if (iVar12 < 0) {
                      iVar12 = (short)(((short)(iVar12 / 0xc9) + sVar16) -
                                      (short)((longlong)iVar12 * 0x28c1979 >> 0x3f)) + -1;
                    }
                    else {
                      iVar12 = (int)(short)(((short)(iVar12 / 0xc9) + sVar16) -
                                           (short)((longlong)iVar12 * 0x28c1979 >> 0x3f));
                    }
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    iVar17 = *(int *)((int)param_1 + 0x1e9);
                    sVar16 = (short)(iVar17 >> 0x1f);
                    if (iVar17 < 0) {
                      iVar17 = (short)(((short)(iVar17 / 0xc9) + sVar16) -
                                      (short)((longlong)iVar17 * 0x28c1979 >> 0x3f)) + -1;
                    }
                    else {
                      iVar17 = (int)(short)(((short)(iVar17 / 0xc9) + sVar16) -
                                           (short)((longlong)iVar17 * 0x28c1979 >> 0x3f));
                    }
                    iVar12 = FUN_006acf90(local_98,local_40,iVar17,iVar12);
                    puVar1[2] = iVar12;
                    iVar12 = (*pSVar18->vtable->vfunc_2C)();
                    if (iVar12 == 0x23) {
                      local_4c = local_4c + 1;
                    }
                    goto LAB_0060b643;
                  }
                }
              }
              else {
                if ((uVar14 < 8) &&
                   ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                    ((byte)(&DAT_008087e9)[uVar14 * 0x51] < 8)))) {
                  bVar3 = pSVar18->field_0x24;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_c8 = CONCAT31(uStack_c7,bVar3);
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  bVar4 = *(byte *)((int)param_1 + 0x1d9);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  _local_c4 = CONCAT31(uStack_c3,bVar4);
                  if (DAT_00808a8f == '\0') {
                    if (bVar3 == bVar4) {
LAB_0060b48b:
                      iVar12 = 0;
                    }
                    else {
                      bVar5 = g_playerRelationMatrix[bVar3][bVar4];
                      if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                        iVar12 = -2;
                      }
                      else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                        iVar12 = -1;
                      }
                      else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
                        iVar12 = 1;
                      }
                      else {
                        if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1))
                        goto LAB_0060b48b;
                        iVar12 = 2;
                      }
                    }
                    bVar20 = iVar12 < 0;
                  }
                  else {
                    bVar20 = (&DAT_008087ea)[(uint)bVar4 * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar3 * 0x51];
                  }
                  if (bVar20) {
                    iVar12 = (*pSVar18->vtable->vfunc_F8)();
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    if ((iVar12 != 0) && (*(int *)((int)param_1 + 0x1f5) != 0x4c)) {
                      thunk_FUN_0060bdd0(param_1,&pSVar18->vtable);
                      goto LAB_0060b643;
                    }
                    goto cf_continue_loop_0060B649;
                  }
                }
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (*(int *)((int)param_1 + 0x1f5) == 0x4c) {
                  thunk_FUN_0060bdd0(param_1,&pSVar18->vtable);
                  iVar12 = FUN_006acf90(local_7c,local_8c,local_98,local_40);
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  uVar14 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
                  *(uint *)((int)param_1 + 0x1c) = uVar14;
                  iVar12 = iVar12 + (uVar14 >> 0x10) % (iVar12 * 3 + 1U);
                  STFishC::sub_004162B0(pSVar18,local_70,local_a0,local_34);
                  pVVar8 = g_visibleClass_00802A88;
                  if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
                    iVar17 = (int)local_34[0];
                    if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
                        (thunk_FUN_00558c00(g_visibleClass_00802A88,
                                            g_visibleClass_00802A88->field_010C,(int)local_70[0],
                                            (int)local_a0[0],local_d4,&local_d8), iVar17 < 0)) ||
                       (4 < iVar17)) {
                      bVar20 = true;
                    }
                    else {
                      if (((local_d4[0] < 0) || ((int)pVVar8->field_0030 <= local_d4[0])) ||
                         ((local_d8 + (&DAT_0079aed0)[iVar17] < 0 ||
                          ((int)pVVar8->field_0034 <= local_d8 + (&DAT_0079aed0)[iVar17])))) {
                        bVar20 = false;
                      }
                      else {
                        bVar20 = true;
                      }
                      if ((bVar20) && (pVVar8->field_004C != 0)) {
                        bVar20 = *(char *)(((&DAT_0079aed0)[iVar17] + local_d8) * pVVar8->field_0030
                                           + pVVar8->field_004C + local_d4[0]) != '\0';
                      }
                      else {
                        bVar20 = true;
                      }
                    }
                    if (bVar20) {
                      iVar17 = (*pSVar18->vtable->vfunc_2C)();
                      uVar21 = (uint)(*(int *)(&DAT_00791d68 + iVar17 * 4) == 1);
                      uVar14 = thunk_FUN_004ad650((int)&pSVar18->field_01D5);
                      thunk_FUN_00637f40(uVar14,uVar21,iVar12);
                    }
                  }
LAB_0060b643:
                  local_88 = local_88 + 1;
                }
              }
            }
cf_continue_loop_0060B649:
            local_3c = local_3c + 1;
          } while (local_3c < 5);
          local_98 = local_98 + 1;
          iVar19 = local_78;
        } while (local_98 < local_68);
      }
      local_40 = local_40 + 1;
    } while (local_40 < iVar19);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)((int)param_1 + 0x1f5) == 0x43) {
    if (local_4c != 0) {
      local_8 = 2;
      Library::MSVCRT::FUN_0072da40();
      local_8 = 0xffffffff;
      iVar12 = 0;
      local_4c = 0;
      local_6c = 0;
      local_ac = &stack0xfffffef8;
      puVar9 = &stack0xfffffef8;
      local_1c = &stack0xfffffef8;
      puVar10 = &stack0xfffffef8;
      if (0 < local_88) {
        do {
          local_1c = puVar10;
          local_ac = puVar9;
          puVar1 = (undefined4 *)(local_74 + local_6c * 0xc);
          piVar6 = (int *)*puVar1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar17 = (**(code **)(*piVar6 + 0x2c))();
          if (iVar17 == 0x23) {
            puVar1[2] = 0;
            thunk_FUN_0060bdd0(param_1,piVar6);
            puVar2 = (undefined4 *)(local_ac + iVar12 * 0xc);
            *puVar2 = *puVar1;
            puVar2[1] = puVar1[1];
            puVar2[2] = puVar1[2];
            iVar12 = iVar12 + 1;
            local_4c = iVar12;
          }
          local_6c = local_6c + 1;
          puVar9 = local_ac;
          puVar10 = local_1c;
        } while (local_6c < local_88);
      }
    }
    iVar12 = 0;
    if (0 < local_88) {
      do {
        local_80 = 0;
        if (0 < iVar12) {
          do {
            puVar1 = (undefined4 *)(local_74 + iVar12 * 0xc);
            puVar2 = (undefined4 *)(local_74 + local_80 * 0xc);
            iVar17 = puVar2[2];
            if ((int)puVar1[2] < iVar17) {
              uVar13 = puVar2[1];
              uVar7 = *puVar2;
              puVar2[2] = puVar1[2];
              puVar2[1] = puVar1[1];
              *puVar2 = *puVar1;
              puVar1[2] = iVar17;
              puVar1[1] = uVar13;
              *puVar1 = uVar7;
              local_58 = uVar13;
            }
            local_80 = local_80 + 1;
          } while (local_80 < iVar12);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < local_88);
    }
    local_84 = 0;
    local_6c = 0;
    if (0 < local_88) {
      do {
        pSVar18 = *(STFishC **)(local_74 + local_6c * 0xc);
        local_48 = 1;
        iVar12 = (*pSVar18->vtable->vfunc_2C)();
        if (((iVar12 != 0x23) && (local_4c != 0)) && (iVar12 = 0, 0 < local_4c)) {
          do {
            this = *(void **)(local_ac + iVar12 * 0xc);
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((*(int *)((int)this + 0x24) == *(int *)&pSVar18->field_0x24) &&
               (*(int *)((int)this + 0x72e) != 0)) {
              thunk_FUN_00416270(pSVar18,local_50,local_94,&local_20);
              thunk_FUN_00416270(this,local_60,(int *)local_9c,(int *)local_28);
              iVar17 = FUN_006acf0d((int)local_50[0],(int)(short)local_94[0],(int)(short)local_20,
                                    (int)local_60[0],(int)local_9c[0],(int)local_28[0]);
              if (iVar17 < 0x3ee) {
                local_48 = 0;
                break;
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < local_4c);
        }
        if ((local_48 != 0) && (*(int *)(local_74 + local_6c * 0xc + 8) != 0)) {
          STFishC::sub_004162B0(pSVar18,local_50,(undefined2 *)local_94,(undefined2 *)&local_20);
          iVar12 = FUN_006acf90(local_7c,local_8c,(int)local_50[0],(int)(short)local_94[0]);
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          uVar14 = *(int *)((int)param_1 + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)((int)param_1 + 0x1c) = uVar14;
          iVar12 = iVar12 + (uVar14 >> 0x10) % (iVar12 * 3 + 1U);
          uVar14 = thunk_FUN_004ad650((int)&pSVar18->field_01D5);
          thunk_FUN_00637d80(uVar14,iVar12);
          thunk_FUN_0060bdd0(param_1,&pSVar18->vtable);
          if (DAT_00811798 != (void *)0x0) {
            (*pSVar18->vtable->vfunc_2C)();
            thunk_FUN_006211e0(DAT_00811798,local_7c,local_8c,*(uint *)&pSVar18->field_0x24);
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

