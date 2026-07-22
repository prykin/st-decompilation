
int __fastcall FUN_0060c320(void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  STWorldObject *pSVar17;
  short sVar18;
  bool bVar19;
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
  iVar15 = 0;
  local_74 = 0;
  local_2c = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar13 = *(int *)((int)param_1 + 0x1e9);
  sVar18 = (short)(iVar13 >> 0x1f);
  if (iVar13 < 0) {
    local_5c = (short)(((short)(iVar13 / 0xc9) + sVar18) -
                      (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_5c = (int)(short)(((short)(iVar13 / 0xc9) + sVar18) -
                           (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar13 = *(int *)((int)param_1 + 0x1ed);
  sVar18 = (short)(iVar13 >> 0x1f);
  if (iVar13 < 0) {
    local_6c = (short)(((short)(iVar13 / 0xc9) + sVar18) -
                      (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_6c = (int)(short)(((short)(iVar13 / 0xc9) + sVar18) -
                           (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar13 = *(int *)((int)param_1 + 0x24c);
  iVar16 = local_6c - iVar13;
  if (iVar16 < 0) {
    iVar15 = -iVar16;
    iVar16 = 0;
  }
  local_20 = local_5c - iVar13;
  if (local_20 < 0) {
    local_44 = -local_20;
    local_20 = 0;
  }
  else {
    local_44 = 0;
  }
  local_6c = iVar13 + 1 + local_6c;
  if (g_worldGrid.sizeY < local_6c) {
    local_6c = (int)g_worldGrid.sizeY;
  }
  local_5c = iVar13 + 1 + local_5c;
  if (g_worldGrid.sizeX < local_5c) {
    local_5c = (int)g_worldGrid.sizeX;
  }
  local_8 = 0;
  ExceptionList = &local_14;
  Library::MSVCRT::FUN_0072da40();
  local_8 = 0xffffffff;
  local_68 = &stack0xffffff60;
  puVar8 = &stack0xffffff60;
  local_64 = iVar15;
  local_40 = iVar16;
  local_1c = &stack0xffffff60;
  puVar9 = &stack0xffffff60;
  if (iVar16 < local_6c) {
    do {
      local_7c = local_20;
      local_58 = local_44;
      iVar13 = local_20;
      local_40 = iVar16;
      if (local_20 < local_5c) {
        do {
          local_3c = 0;
          local_7c = iVar13;
          do {
            iVar15 = local_3c;
            if ((&DAT_007abc64)[local_64 + local_58 * 0xf] != '\0') {
              sVar18 = (short)iVar13;
              if (((((sVar18 < 0) || (g_worldGrid.sizeX <= sVar18)) ||
                   (sVar12 = (short)iVar16, sVar12 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar12 || (sVar14 = (short)local_3c, sVar14 < 0)))) ||
                 (g_worldGrid.sizeZ <= sVar14)) {
                pSVar17 = (STWorldObject *)0x0;
              }
              else {
                pSVar17 = g_worldGrid.cells
                          [(int)g_worldGrid.planeStride * (int)sVar14 +
                           (int)g_worldGrid.sizeX * (int)sVar12 + (int)sVar18].objects[0];
              }
              if (((pSVar17 != (STWorldObject *)0x0) &&
                  (iVar10 = (*pSVar17->vtable[5].slots_00_28[0])(), iVar16 = local_40, iVar10 != 0))
                 && ((pSVar17[1].vtable < (STWorldObjectVTable *)0x8 &&
                     ((g_playSystem_00802A38 == (STPlaySystemC *)0x0 ||
                      ((byte)(&DAT_008087e9)[(int)pSVar17[1].vtable * 0x51] < 8)))))) {
                bVar3 = *(byte *)&pSVar17[1].vtable;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                bVar4 = *(byte *)((int)param_1 + 0x1d9);
                if (DAT_00808a8f == '\0') {
                  if (bVar3 == bVar4) {
LAB_0060c5f5:
                    iVar10 = 0;
                  }
                  else {
                    bVar5 = g_playerRelationMatrix[bVar3][bVar4];
                    if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                      iVar10 = -2;
                    }
                    else if ((bVar5 == 1) && (g_playerRelationMatrix[bVar4][bVar3] == 0)) {
                      iVar10 = -1;
                    }
                    else if ((bVar5 == 0) && (g_playerRelationMatrix[bVar4][bVar3] == 1)) {
                      iVar10 = 1;
                    }
                    else {
                      if ((bVar5 != 1) || (g_playerRelationMatrix[bVar4][bVar3] != 1))
                      goto LAB_0060c5f5;
                      iVar10 = 2;
                    }
                  }
                  bVar19 = iVar10 < 0;
                }
                else {
                  bVar19 = (&DAT_008087ea)[(uint)bVar4 * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar3 * 0x51];
                }
                if ((bVar19) &&
                   (iVar11 = (*pSVar17->vtable[5].slots_00_28[2])(), iVar10 = local_74,
                   iVar16 = local_40, iVar11 != 0)) {
                  puVar1 = (undefined4 *)(local_68 + local_74 * 0xc);
                  *puVar1 = pSVar17;
                  iVar11 = (*pSVar17->vtable[2].slots_00_28[6])();
                  iVar11 = iVar11 + 1;
                  iVar16 = local_40;
                  iVar15 = local_3c;
                  iVar13 = local_7c;
                  if (0 < iVar11) {
                    puVar1[1] = iVar11;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    iVar13 = *(int *)((int)param_1 + 0x1ed);
                    sVar18 = (short)(iVar13 >> 0x1f);
                    if (iVar13 < 0) {
                      iVar13 = (short)(((short)(iVar13 / 0xc9) + sVar18) -
                                      (short)((longlong)iVar13 * 0x28c1979 >> 0x3f)) + -1;
                    }
                    else {
                      iVar13 = (int)(short)(((short)(iVar13 / 0xc9) + sVar18) -
                                           (short)((longlong)iVar13 * 0x28c1979 >> 0x3f));
                    }
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    iVar15 = *(int *)((int)param_1 + 0x1e9);
                    sVar18 = (short)(iVar15 >> 0x1f);
                    if (iVar15 < 0) {
                      iVar15 = (short)(((short)(iVar15 / 0xc9) + sVar18) -
                                      (short)((longlong)iVar15 * 0x28c1979 >> 0x3f)) + -1;
                    }
                    else {
                      iVar15 = (int)(short)(((short)(iVar15 / 0xc9) + sVar18) -
                                           (short)((longlong)iVar15 * 0x28c1979 >> 0x3f));
                    }
                    iVar13 = FUN_006acf90(local_7c,local_40,iVar15,iVar13);
                    puVar1[2] = iVar13;
                    local_2c = local_2c + iVar11;
                    local_74 = iVar10 + 1;
                    iVar16 = local_40;
                    iVar15 = local_3c;
                    iVar13 = local_7c;
                  }
                }
              }
            }
            local_3c = iVar15 + 1;
          } while (local_3c < 5);
          iVar13 = iVar13 + 1;
          local_58 = local_58 + 1;
          local_7c = iVar13;
        } while (iVar13 < local_5c);
      }
      iVar16 = iVar16 + 1;
      local_64 = local_64 + 1;
      puVar8 = local_68;
      local_40 = iVar16;
      puVar9 = local_1c;
    } while (iVar16 < local_6c);
  }
  local_1c = puVar9;
  local_68 = puVar8;
  if (local_2c != 0) {
    iVar13 = 0;
    if (0 < local_74) {
      do {
        local_64 = 0;
        if (0 < iVar13) {
          do {
            puVar1 = (undefined4 *)(local_68 + iVar13 * 0xc);
            puVar2 = (undefined4 *)(local_68 + local_64 * 0xc);
            iVar15 = puVar2[2];
            if (iVar15 < (int)puVar1[2]) {
              uVar6 = puVar2[1];
              uVar7 = *puVar2;
              puVar2[2] = puVar1[2];
              puVar2[1] = puVar1[1];
              *puVar2 = *puVar1;
              puVar1[2] = iVar15;
              puVar1[1] = uVar6;
              *puVar1 = uVar7;
              local_4c = uVar6;
            }
            local_64 = local_64 + 1;
          } while (local_64 < iVar13);
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 < local_74);
    }
    local_58 = 0;
    if (0 < local_74) {
      do {
        iVar13 = *(int *)((int)(local_68 + local_58 * 0xc) + 4);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar15 = *(int *)((int)param_1 + 0x209);
        bVar19 = iVar15 <= iVar13;
        if (bVar19) {
          iVar13 = iVar13 - iVar15;
        }
        puVar1 = *(undefined4 **)(local_68 + local_58 * 0xc);
        thunk_FUN_00416270(puVar1,local_54,(int *)local_80,(int *)local_28);
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        thunk_FUN_0061f5c0(*(undefined4 *)((int)param_1 + 0x1d9),
                           (short)*(undefined4 *)((int)param_1 + 0x1e9) + 100,
                           (short)*(undefined4 *)((int)param_1 + 0x1ed) + 100,
                           (short)*(undefined4 *)((int)param_1 + 0x1f1) + 0xb4,local_54[0],
                           local_80[0],local_28[0]);
        if (bVar19) {
          thunk_FUN_0060bd30(param_1,puVar1,iVar13);
          *(undefined4 *)((int)param_1 + 0x209) = 0;
        }
        else {
          thunk_FUN_0060bd30(param_1,puVar1,iVar13 * 5);
          *(int *)((int)param_1 + 0x209) = *(int *)((int)param_1 + 0x209) - iVar13;
        }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      } while ((*(int *)((int)param_1 + 0x209) != 0) &&
              (local_58 = local_58 + 1, local_58 < local_74));
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_0060bcb0(param_1,*(int *)((int)param_1 + 0x209));
  }
  ExceptionList = local_14;
  return local_74;
}

