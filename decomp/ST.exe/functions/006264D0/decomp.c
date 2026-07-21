
undefined4 __thiscall FUN_006264d0(void *this,int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  STWorldObject *pSVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_EBX;
  int *piVar8;
  int *piVar9;
  short sVar10;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 unaff_ESI;
  int iVar11;
  short sVar12;
  undefined4 *puVar13;
  int iVar14;
  bool bVar15;
  undefined4 local_bc [6];
  undefined2 local_a2;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined2 local_9c;
  undefined2 local_9a;
  undefined2 local_98;
  undefined2 local_96;
  undefined4 local_94;
  int local_8f;
  undefined2 local_8b;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  byte local_50;
  undefined3 uStack_4f;
  int local_4c;
  int local_48;
  byte local_44;
  undefined3 uStack_43;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  puVar13 = local_bc;
  local_18 = this;
  for (iVar5 = 0x16; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + 1;
  }
  iVar5 = param_2 * 6;
  sVar7 = *(short *)(&DAT_007d046c + iVar5) + *(short *)((int)this + 0x2c2);
  /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
  local_20 = CONCAT22((short)((uint)unaff_EBX >> 0x10),sVar7);
  sVar12 = *(short *)(&DAT_007d046e + iVar5) + *(short *)((int)this + 0x2c6);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_54 = CONCAT22((short)((uint)puVar13 >> 0x10),sVar12);
  sVar10 = *(short *)(&DAT_007d0470 + iVar5) + *(short *)((int)this + 0x2ca);
  /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
  local_40 = CONCAT22((short)((uint)unaff_ESI >> 0x10),sVar10);
  if (param_1 == (int *)0x0) {
    return 0;
  }
  thunk_FUN_00416270(param_1,(undefined2 *)&local_28,&local_24,&local_38);
  iVar11 = (int)sVar10;
  iVar14 = (int)sVar12;
  iVar5 = FUN_006acf0d((int)sVar7,iVar14,iVar11,(int)(short)local_28,(int)(short)local_24,
                       (int)(short)local_38);
  bVar4 = thunk_FUN_00430750(CASE_9B);
  local_10 = iVar5 / (int)(uint)bVar4;
  if (local_10 < 1) {
    local_10 = 1;
  }
  param_2 = 1;
  piVar8 = local_18;
  local_1c = (int)(short)local_20;
  local_14 = iVar14;
  local_8 = iVar11;
  if (0 < local_10) {
    do {
      iVar5 = (((int)(short)local_28 - (int)(short)local_20) * param_2) / local_10 +
              (int)(short)local_20;
      local_34 = (((int)(short)local_24 - (int)(short)local_54) * param_2) / local_10 +
                 (int)(short)local_54;
      local_4c = (((int)(short)local_38 - (int)(short)local_40) * param_2) / local_10 +
                 (int)(short)local_40;
      local_60 = iVar5;
      local_c = FUN_006acf0d(local_1c,local_14,local_8,iVar5,local_34,local_4c);
      local_c = local_c / 0x32;
      if (local_c < 1) {
        local_c = 1;
      }
      local_48 = 1;
      if (0 < local_c) {
        local_5c = local_4c - local_8;
        local_64 = local_34 - local_14;
        local_58 = iVar5 - local_1c;
        piVar9 = piVar8;
        iVar11 = local_c;
        local_3c = local_5c;
        local_30 = local_58;
        local_2c = local_64;
        do {
          piVar8 = local_18;
          iVar5 = local_1c + local_30 / iVar11;
          sVar7 = (short)(iVar5 >> 0x1f);
          if (iVar5 < 0) {
            iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar7) -
                           (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar7) -
                                (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
          }
          iVar14 = local_14 + local_2c / iVar11;
          sVar7 = (short)(iVar14 >> 0x1f);
          if (iVar14 < 0) {
            iVar14 = (short)(((short)(iVar14 / 0xc9) + sVar7) -
                            (short)((longlong)iVar14 * 0x28c1979 >> 0x3f)) + -1;
          }
          else {
            iVar14 = (int)(short)(((short)(iVar14 / 0xc9) + sVar7) -
                                 (short)((longlong)iVar14 * 0x28c1979 >> 0x3f));
          }
          iVar6 = local_8 + local_3c / iVar11;
          sVar7 = (short)(iVar6 >> 0x1f);
          if (iVar6 < 0) {
            iVar6 = (short)(((short)(iVar6 / 200) + sVar7) -
                           (short)((longlong)iVar6 * 0x51eb851f >> 0x3f)) + -1;
          }
          else {
            iVar6 = (int)(short)(((short)(iVar6 / 200) + sVar7) -
                                (short)((longlong)iVar6 * 0x51eb851f >> 0x3f));
          }
          sVar7 = (short)iVar5;
          if (((((sVar7 < 0) || (g_worldGrid.sizeX <= sVar7)) ||
               (sVar10 = (short)iVar14, sVar10 < 0)) ||
              ((g_worldGrid.sizeY <= sVar10 || (sVar12 = (short)iVar6, sVar12 < 0)))) ||
             ((g_worldGrid.sizeZ <= sVar12 ||
              (pSVar3 = g_worldGrid.cells
                        [(int)g_worldGrid.planeStride * (int)sVar12 +
                         (int)g_worldGrid.sizeX * (int)sVar10 + (int)sVar7].objects[0],
              piVar9 = local_18, iVar11 = local_c, pSVar3 == (STWorldObject *)0x0)))) {
            piVar8 = piVar9;
            if (g_pathingGrid.cells
                [g_pathingGrid.sizeX * iVar14 + iVar5 + g_pathingGrid.planeStride * iVar6] < 0) {
              return 0;
            }
          }
          else if (local_18[6] != *(int *)&pSVar3->field_0x18) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            iVar5 = (**(code **)(*param_1 + 0xf0))();
            if (iVar5 == 0) {
              return 0;
            }
            if (((uint)param_1[9] < 8) &&
               ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                ((byte)(&DAT_008087e9)[param_1[9] * 0x51] < 8)))) {
              bVar4 = *(byte *)&pSVar3[1].vtable;
              bVar1 = *(byte *)(piVar8 + 9);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _local_50 = CONCAT31(uStack_4f,bVar4);
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _local_44 = CONCAT31(uStack_43,bVar1);
              if (DAT_00808a8f == '\0') {
                if (bVar4 == bVar1) {
LAB_0062687f:
                  iVar5 = 0;
                }
                else {
                  bVar2 = g_playerRelationMatrix[bVar4][bVar1];
                  if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar4] == 0)) {
                    iVar5 = -2;
                  }
                  else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar1][bVar4] == 0)) {
                    iVar5 = -1;
                  }
                  else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar1][bVar4] == 1)) {
                    iVar5 = 1;
                  }
                  else {
                    if ((bVar2 != 1) || (g_playerRelationMatrix[bVar1][bVar4] != 1))
                    goto LAB_0062687f;
                    iVar5 = 2;
                  }
                }
                bVar15 = iVar5 < 0;
              }
              else {
                bVar15 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uint)bVar4 * 0x51];
              }
              if (!bVar15) {
                return 0;
              }
            }
            iVar5 = (*pSVar3->vtable[5].slots_00_28[2])();
            iVar11 = local_c;
            if (iVar5 == 0) {
              return 0;
            }
          }
          local_30 = local_30 + local_58;
          local_2c = local_2c + local_64;
          local_48 = local_48 + 1;
          local_3c = local_3c + local_5c;
          piVar9 = piVar8;
          iVar5 = local_60;
        } while (local_48 <= iVar11);
      }
      local_14 = local_34;
      local_8 = local_4c;
      param_2 = param_2 + 1;
      local_1c = iVar5;
    } while (param_2 <= local_10);
  }
  local_bc[3] = 1;
  local_bc[2] = 1;
  local_bc[1] = *(undefined4 *)((int)piVar8 + 0x262);
  local_9e = (short)local_40;
  local_a2 = (short)local_20;
  local_98 = (undefined2)local_38;
  local_9c = (undefined2)local_28;
  local_9a = (undefined2)local_24;
  local_bc[0] = 0x28;
  local_a0 = (undefined2)local_54;
  local_94 = 0x9b;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  local_96 = (**(code **)(*piVar8 + 0x10))(local_20,local_54,local_40,local_28,local_24,local_38);
  local_8f = piVar8[6];
  local_8b = 0xffff;
  STPlaySystemC::CreateGameObject(PTR_00802a38,0x28,0,0,local_bc,0);
  return 1;
}

