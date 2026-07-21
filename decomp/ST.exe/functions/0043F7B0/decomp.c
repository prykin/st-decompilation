
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0043F7B0 -> 006AE1C0 @ 0043F9F5 | 0043F7B0 -> 006AE1C0 @ 0043FB11 */

uint * FUN_0043f7b0(byte param_1,int *param_2,uint *param_3,int param_4,int param_5,int *param_6,
                   int param_7,int param_8,int param_9)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  DArrayTy *array;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_14;
  int local_c;
  int local_8;

  bVar5 = param_1;
  local_8 = (int)param_3 - (int)param_6;
  iVar6 = param_4 + param_7;
  param_4 = param_4 - param_7;
  iVar9 = param_5 - param_8;
  if (local_8 < 0) {
    local_8 = 0;
  }
  local_c = (int)param_3 + (int)param_6;
  if (g_worldGrid.sizeX + -1 < (int)param_3 + (int)param_6) {
    local_c = g_worldGrid.sizeX + -1;
  }
  if (param_4 < 0) {
    param_4 = 0;
  }
  param_7 = iVar6;
  if (g_worldGrid.sizeY + -1 < iVar6) {
    param_7 = g_worldGrid.sizeY + -1;
  }
  if (iVar9 < 0) {
    iVar9 = 0;
  }
  iVar6 = param_5 + param_8;
  if (g_worldGrid.sizeZ + -1 < param_5 + param_8) {
    iVar6 = g_worldGrid.sizeZ + -1;
  }
  array = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0xf,4,10);
  iVar8 = g_worldGrid.sizeX * param_4 + local_8 + (iVar9 + -1) * (int)g_worldGrid.planeStride;
  if (iVar9 <= iVar6) {
    local_14 = (iVar6 - iVar9) + 1;
    do {
      iVar8 = iVar8 + g_worldGrid.planeStride;
      iVar6 = iVar8 - g_worldGrid.sizeX;
      if (param_4 <= param_7) {
        iVar9 = (param_7 - param_4) + 1;
        do {
          iVar6 = iVar6 + g_worldGrid.sizeX;
          if (local_8 <= local_c) {
            _param_1 = (local_c - local_8) + 1;
            iVar10 = iVar6 * 8 + -8;
            do {
              piVar3 = *(int **)((int)g_worldGrid.cells[1].objects + iVar10);
              if ((piVar3 != (int *)0x0) &&
                 ((((iVar7 = piVar3[8], param_6 = piVar3, iVar7 == 0x14 || (iVar7 == 1000)) ||
                   (iVar7 == 0x3e9)) && (param_2 != piVar3)))) {
                if (param_9 == 0) {
                  bVar1 = *(byte *)(piVar3 + 9);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == bVar5) {
LAB_0043f9bd:
                      iVar7 = 0;
                    }
                    else {
                      uVar4 = (uint)bVar5;
                      bVar2 = g_playerRelationMatrix[bVar1][uVar4];
                      if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
                        iVar7 = -2;
                      }
                      else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
                        iVar7 = -1;
                      }
                      else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 1)) {
                        iVar7 = 1;
                      }
                      else {
                        if ((bVar2 != 1) || (g_playerRelationMatrix[uVar4][bVar1] != 1))
                        goto LAB_0043f9bd;
                        iVar7 = 2;
                      }
                    }
                    bVar11 = iVar7 < 0;
                  }
                  else {
                    bVar11 = (&DAT_008087ea)[(uint)bVar5 * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar1 * 0x51];
                  }
                  if (!bVar11) goto LAB_0043f9fa;
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar7 = (**(code **)(*piVar3 + 0xf8))();
                }
                else {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar7 = (**(code **)(*piVar3 + 0xf8))();
                }
                if (iVar7 == 1) {
                  Library::DKW::TBL::FUN_006ae1c0((uint *)array,&param_6);
                }
              }
LAB_0043f9fa:
              piVar3 = *(int **)((int)g_worldGrid.cells[1].objects + iVar10 + 4);
              if (((piVar3 != (int *)0x0) && (param_6 = piVar3, piVar3[8] == 0x1ae)) &&
                 (param_2 != piVar3)) {
                if (param_9 == 0) {
                  bVar1 = *(byte *)(piVar3 + 9);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  param_8 = CONCAT31(param_8._1_3_,bVar1);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == bVar5) {
LAB_0043fad9:
                      iVar7 = 0;
                    }
                    else {
                      uVar4 = (uint)bVar5;
                      bVar2 = g_playerRelationMatrix[bVar1][uVar4];
                      if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
                        iVar7 = -2;
                      }
                      else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar4][bVar1] == 0)) {
                        iVar7 = -1;
                      }
                      else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar4][bVar1] == 1)) {
                        iVar7 = 1;
                      }
                      else {
                        if ((bVar2 != 1) || (g_playerRelationMatrix[uVar4][bVar1] != 1))
                        goto LAB_0043fad9;
                        iVar7 = 2;
                      }
                    }
                    bVar11 = iVar7 < 0;
                  }
                  else {
                    bVar11 = (&DAT_008087ea)[(uint)bVar5 * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar1 * 0x51];
                  }
                  if (!bVar11) goto LAB_0043fb16;
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar7 = (**(code **)(*piVar3 + 0xf8))();
                }
                else {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar7 = (**(code **)(*piVar3 + 0xf8))();
                }
                if (iVar7 == 1) {
                  Library::DKW::TBL::FUN_006ae1c0((uint *)array,&param_6);
                }
              }
LAB_0043fb16:
              _param_1 = _param_1 + -1;
              iVar10 = iVar10 + 8;
            } while (_param_1 != 0);
          }
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  if (array->count == 0) {
    DArrayDestroy(array);
    array = (DArrayTy *)0x0;
  }
  return &array->flags;
}

