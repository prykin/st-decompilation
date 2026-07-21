
undefined4 __thiscall FUN_0061ca90(void *this,int param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  STWorldObject *this_00;
  STWorldObjectVTable *pSVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  short sVar11;
  int iVar12;
  short sVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  bool bVar20;
  int local_800 [495];
  void *local_44;
  byte local_40;
  undefined3 uStack_3f;
  int local_3c;
  undefined4 local_38;
  int local_34;
  byte local_30;
  undefined3 uStack_2f;
  int local_2c;
  int local_28;
  short local_22;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  short local_6;
  
  local_44 = this;
  local_38 = 0;
  if (param_4 == (int *)0x0) {
    return 0;
  }
  sVar15 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar16 = (short)(((short)(param_1 / 0xc9) + sVar15) -
                    (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar16 = (int)(short)(((short)(param_1 / 0xc9) + sVar15) -
                         (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar15 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar12 = (short)(((short)(param_2 / 0xc9) + sVar15) -
                    (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar12 = (int)(short)(((short)(param_2 / 0xc9) + sVar15) -
                         (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar15 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    iVar9 = (short)(((short)(param_3 / 200) + sVar15) -
                   (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar9 = (int)(short)(((short)(param_3 / 200) + sVar15) -
                        (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  if (((((-1 < iVar16) && (-1 < iVar12)) && (-1 < iVar9)) &&
      ((iVar18 = (int)g_worldGrid.sizeX, iVar16 < iVar18 &&
       (iVar14 = (int)g_worldGrid.sizeY, iVar12 < iVar14)))) && (iVar9 < 5)) {
    local_20 = iVar12 + -1;
    if (iVar12 + -1 < 0) {
      local_20 = 0;
    }
    local_18 = iVar16 + -1;
    if (iVar16 + -1 < 0) {
      local_18 = 0;
    }
    local_2c = iVar12 + 2;
    if (iVar14 < iVar12 + 2) {
      local_2c = iVar14;
    }
    local_1c = iVar16 + 2;
    if (iVar18 < iVar16 + 2) {
      local_1c = iVar18;
    }
    iVar12 = 0;
    local_c = 0;
    local_34 = 0;
    local_3c = 0x18894;
    local_14 = 0;
    iVar16 = local_18;
    iVar9 = local_2c;
    sVar15 = g_worldGrid.sizeX;
    do {
      local_10 = local_20;
      local_28 = iVar16;
      iVar18 = local_14;
      if (local_20 < iVar9) {
        do {
          iVar16 = local_28;
          if (local_28 < local_1c) {
            piVar17 = local_800 + iVar12 * 0xb;
            do {
              sVar8 = (short)local_28;
              if ((((-1 < sVar8) && (sVar8 < sVar15)) &&
                  ((sVar11 = (short)local_10, -1 < sVar11 &&
                   (((sVar11 < g_worldGrid.sizeY && (sVar13 = (short)iVar18, -1 < sVar13)) &&
                    (sVar13 < g_worldGrid.sizeZ)))))) &&
                 (((this_00 = g_worldGrid.cells
                              [(int)sVar11 * (int)sVar15 +
                               (int)sVar13 * (int)g_worldGrid.planeStride + (int)sVar8].objects[0],
                   this_00 != (STWorldObject *)0x0 &&
                   (iVar16 = (*this_00->vtable[5].slots_00_28[0])(), iVar16 != 0)) &&
                  ((this_00[1].vtable < (STWorldObjectVTable *)0x8 &&
                   ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                    ((byte)(&DAT_008087e9)[(int)this_00[1].vtable * 0x51] < 8)))))))) {
                bVar1 = *(byte *)&this_00[1].vtable;
                bVar2 = *(byte *)((int)local_44 + 0x51);
                _local_30 = CONCAT31(uStack_2f,bVar1);
                _local_40 = CONCAT31(uStack_3f,bVar2);
                if (DAT_00808a8f == '\0') {
                  if (bVar1 == bVar2) {
LAB_0061cd61:
                    iVar16 = 0;
                  }
                  else {
                    bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                    if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                      iVar16 = -2;
                    }
                    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                      iVar16 = -1;
                    }
                    else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                      iVar16 = 1;
                    }
                    else {
                      if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                      goto LAB_0061cd61;
                      iVar16 = 2;
                    }
                  }
                  bVar20 = iVar16 < 0;
                }
                else {
                  bVar20 = (&DAT_008087ea)[(uint)bVar2 * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar1 * 0x51];
                }
                if ((bVar20) && (iVar16 = (*this_00->vtable[5].slots_00_28[2])(), iVar16 != 0)) {
                  thunk_FUN_00416270(this_00,&local_6,(int *)((int)&param_3 + 2),(int *)&local_22);
                  uVar4 = *(undefined2 *)&this_00[1].field_0xe;
                  piVar19 = piVar17;
                  for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
                    *piVar19 = 0;
                    piVar19 = piVar19 + 1;
                  }
                  uVar10 = *(undefined4 *)&this_00->field_0x18;
                  *piVar17 = (int)this_00[1].vtable;
                  uVar6 = (undefined2)local_28;
                  *(undefined4 *)((int)piVar17 + 0x26) = uVar10;
                  uVar7 = (undefined2)local_10;
                  *(undefined2 *)((int)piVar17 + 0x2a) = uVar4;
                  uVar4 = (undefined2)local_14;
                  *(STWorldObject **)((int)piVar17 + 0x1a) = this_00;
                  *(undefined2 *)(piVar17 + 5) = uVar6;
                  iVar16 = (int)local_6;
                  *(undefined2 *)((int)piVar17 + 0x16) = uVar7;
                  *(undefined2 *)(piVar17 + 6) = uVar4;
                  iVar12 = (int)local_22;
                  piVar17[2] = iVar16;
                  pSVar5 = this_00->vtable;
                  piVar17[3] = (int)param_3._2_2_;
                  piVar17[4] = iVar12;
                  iVar16 = (*pSVar5->GetObjectTypeId)(this_00);
                  iVar12 = (int)local_6;
                  piVar17[1] = iVar16;
                  uVar10 = FUN_006aced8(param_1,param_2,iVar12,(int)param_3._2_2_);
                  iVar16 = local_3c;
                  *(undefined4 *)((int)piVar17 + 0x1e) = uVar10;
                  *(undefined4 *)((int)piVar17 + 0x22) = uVar10;
                  if (*(int *)((int)piVar17 + 0x1e) < iVar16) {
                    local_3c = *(int *)((int)piVar17 + 0x1e);
                    local_34 = local_c;
                  }
                  piVar17 = piVar17 + 0xb;
                  local_c = local_c + 1;
                }
              }
              local_28 = local_28 + 1;
              iVar16 = local_18;
              iVar18 = local_14;
              iVar12 = local_c;
              iVar9 = local_2c;
              sVar15 = g_worldGrid.sizeX;
            } while (local_28 < local_1c);
          }
          local_10 = local_10 + 1;
          local_28 = iVar16;
        } while (local_10 < iVar9);
      }
      local_14 = iVar18 + 1;
    } while (iVar18 + 1 < 5);
    if (0 < iVar12) {
      local_38 = 1;
      piVar17 = local_800 + local_34 * 0xb;
      for (iVar16 = 0xb; iVar16 != 0; iVar16 = iVar16 + -1) {
        *param_4 = *piVar17;
        piVar17 = piVar17 + 1;
        param_4 = param_4 + 1;
      }
    }
  }
  return local_38;
}

