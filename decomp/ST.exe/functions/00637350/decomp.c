
int __cdecl
FUN_00637350(int param_1,int param_2,int param_3,int param_4,uint param_5,undefined2 param_6,
            undefined2 param_7,undefined4 param_8,uint param_9)

{
  byte bVar1;
  byte bVar2;
  STWorldObject *this;
  short sVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  short sVar9;
  int iVar10;
  short sVar11;
  uint *puVar12;
  int *piVar13;
  int iVar14;
  bool bVar15;
  int local_58 [5];
  uint *local_44;
  uint local_38 [3];
  undefined2 local_2c;
  undefined2 local_2a;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_8 = 0;
  sVar9 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar10 = (short)(((short)(param_1 / 0xc9) + sVar9) -
                    (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar10 = (int)(short)(((short)(param_1 / 0xc9) + sVar9) -
                         (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar9 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar4 = (short)(((short)(param_2 / 0xc9) + sVar9) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(param_2 / 0xc9) + sVar9) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar9 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    local_c = (short)(((short)(param_3 / 200) + sVar9) -
                     (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    local_c = (int)(short)(((short)(param_3 / 200) + sVar9) -
                          (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  uVar7 = iVar4 - param_4;
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  local_1c = iVar10 - param_4;
  if (local_1c < 0) {
    local_1c = 0;
  }
  local_18 = iVar4 + 1 + param_4;
  if (g_worldGrid.sizeY < local_18) {
    local_18 = (int)g_worldGrid.sizeY;
  }
  local_14 = iVar10 + 1 + param_4;
  if (g_worldGrid.sizeX < local_14) {
    local_14 = (int)g_worldGrid.sizeX;
  }
  local_10 = local_c + -1;
  if (local_10 < 0) {
    local_10 = 0;
  }
  local_c = local_c + 2;
  if (5 < local_c) {
    local_c = 5;
  }
  puVar12 = local_38;
  for (iVar10 = 7; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
  local_38[2] = param_5;
  local_2a = param_6;
  local_2c = param_7;
  local_38[0] = param_9;
  local_38[1] = param_8;
  iVar10 = local_c;
  iVar4 = local_10;
  sVar9 = g_worldGrid.sizeX;
  if ((int)uVar7 < local_18) {
    do {
      iVar8 = iVar4;
      iVar14 = local_1c;
      param_9 = uVar7;
      if (local_1c < local_14) {
        do {
          iVar4 = iVar8;
          _param_6 = iVar14;
          if (iVar8 < iVar10) {
            do {
              sVar11 = (short)iVar14;
              if (((((((-1 < sVar11) && (sVar11 < sVar9)) && (sVar3 = (short)uVar7, -1 < sVar3)) &&
                    ((sVar3 < g_worldGrid.sizeY && (sVar6 = (short)iVar8, -1 < sVar6)))) &&
                   ((sVar6 < g_worldGrid.sizeZ &&
                    ((this = g_worldGrid.cells
                             [(int)sVar3 * (int)sVar9 + (int)sVar6 * (int)g_worldGrid.planeStride +
                              (int)sVar11].objects[0], this != (STWorldObject *)0x0 &&
                     (iVar10 = (*this->vtable[5].slots_00_28[0])(), uVar7 = param_9, iVar10 != 0))))
                   )) && (this[1].vtable < (STWorldObjectVTable *)0x8)) &&
                 ((PTR_00802a38 == (STPlaySystemC *)0x0 ||
                  ((byte)(&DAT_008087e9)[(int)this[1].vtable * 0x51] < 8)))) {
                bVar1 = *(byte *)&this[1].vtable;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                param_8 = CONCAT31(param_8._1_3_,bVar1);
                if (DAT_00808a8f == '\0') {
                  if (bVar1 == (byte)param_5) {
LAB_006375fd:
                    iVar10 = 0;
                  }
                  else {
                    uVar5 = param_5 & 0xff;
                    bVar2 = g_playerRelationMatrix[bVar1][uVar5];
                    if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
                      iVar10 = -2;
                    }
                    else if ((bVar2 == 1) && (g_playerRelationMatrix[uVar5][bVar1] == 0)) {
                      iVar10 = -1;
                    }
                    else if ((bVar2 == 0) && (g_playerRelationMatrix[uVar5][bVar1] == 1)) {
                      iVar10 = 1;
                    }
                    else {
                      if ((bVar2 != 1) || (g_playerRelationMatrix[uVar5][bVar1] != 1))
                      goto LAB_006375fd;
                      iVar10 = 2;
                    }
                  }
                  bVar15 = iVar10 < 0;
                }
                else {
                  bVar15 = (&DAT_008087ea)[(param_5 & 0xff) * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar1 * 0x51];
                  iVar14 = _param_6;
                }
                if ((bVar15) &&
                   (iVar10 = (*this->vtable[5].slots_00_28[2])(), uVar7 = param_9, iVar10 != 0)) {
                  thunk_FUN_00416270(this,(undefined2 *)((int)&param_4 + 2),
                                     (int *)((int)&param_3 + 2),(int *)&stack0x0000001e);
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  iVar10 = FUN_006aced8((int)param_4._2_2_,(int)param_3._2_2_,param_1,param_2);
                  uVar7 = param_9;
                  if (iVar10 < 0x28b) {
                    piVar13 = local_58;
                    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
                      *piVar13 = 0;
                      piVar13 = piVar13 + 1;
                    }
                    local_58[2] = *(int *)&this->field_0x18;
                    local_58[3] = 4;
                    local_58[4] = 0x110;
                    local_44 = local_38;
                    (*this->vtable->slots_00_28[0])(local_58);
                    local_8 = local_8 + 1;
                    uVar7 = param_9;
                    iVar14 = _param_6;
                  }
                }
              }
              iVar8 = iVar8 + 1;
              iVar10 = local_c;
              iVar4 = local_10;
              sVar9 = g_worldGrid.sizeX;
            } while (iVar8 < local_c);
          }
          iVar14 = iVar14 + 1;
          iVar8 = iVar4;
        } while (iVar14 < local_14);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < local_18);
  }
  return local_8;
}

