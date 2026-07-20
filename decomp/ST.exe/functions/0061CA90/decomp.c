
undefined4 __thiscall FUN_0061ca90(void *this,int param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  STWorldObject *this_00;
  STWorldObjectVTable *pSVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  short sVar10;
  int iVar11;
  undefined4 uVar12;
  short sVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  short sVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int *piVar21;
  bool bVar22;
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
  sVar17 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar18 = (short)(((short)(param_1 / 0xc9) + sVar17) -
                    (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar18 = (int)(short)(((short)(param_1 / 0xc9) + sVar17) -
                         (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar17 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar14 = (short)(((short)(param_2 / 0xc9) + sVar17) -
                    (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar14 = (int)(short)(((short)(param_2 / 0xc9) + sVar17) -
                         (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar17 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    iVar11 = (short)(((short)(param_3 / 200) + sVar17) -
                    (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar11 = (int)(short)(((short)(param_3 / 200) + sVar17) -
                         (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  if (((((-1 < iVar18) && (-1 < iVar14)) && (-1 < iVar11)) &&
      ((iVar20 = (int)SHORT_007fb240, iVar18 < iVar20 &&
       (iVar16 = (int)SHORT_007fb242, iVar14 < iVar16)))) && (iVar11 < 5)) {
    local_20 = iVar14 + -1;
    if (iVar14 + -1 < 0) {
      local_20 = 0;
    }
    local_18 = iVar18 + -1;
    if (iVar18 + -1 < 0) {
      local_18 = 0;
    }
    local_2c = iVar14 + 2;
    if (iVar16 < iVar14 + 2) {
      local_2c = iVar16;
    }
    local_1c = iVar18 + 2;
    if (iVar20 < iVar18 + 2) {
      local_1c = iVar20;
    }
    iVar14 = 0;
    local_c = 0;
    local_34 = 0;
    local_3c = 0x18894;
    local_14 = 0;
    iVar18 = local_18;
    iVar11 = local_2c;
    sVar17 = SHORT_007fb240;
    do {
      local_10 = local_20;
      local_28 = iVar18;
      iVar20 = local_14;
      if (local_20 < iVar11) {
        do {
          iVar18 = local_28;
          if (local_28 < local_1c) {
            piVar19 = local_800 + iVar14 * 0xb;
            do {
              sVar10 = (short)local_28;
              if ((((-1 < sVar10) && (sVar10 < sVar17)) &&
                  ((sVar13 = (short)local_10, -1 < sVar13 &&
                   (((sVar13 < SHORT_007fb242 && (sVar15 = (short)iVar20, -1 < sVar15)) &&
                    (sVar15 < SHORT_007fb244)))))) &&
                 (((this_00 = g_worldCells
                              [(int)sVar13 * (int)sVar17 + (int)sVar15 * (int)SHORT_007fb246 +
                               (int)sVar10].objects[0], this_00 != (STWorldObject *)0x0 &&
                   (iVar18 = (*this_00->vtable[5].slots_00_28[0])(), iVar18 != 0)) &&
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
                    iVar18 = 0;
                  }
                  else {
                    uVar6 = (uint)bVar1;
                    uVar7 = (uint)bVar2;
                    cVar3 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar7);
                    if ((cVar3 == '\0') &&
                       (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
                      iVar18 = -2;
                    }
                    else if ((cVar3 == '\x01') &&
                            (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\0')) {
                      iVar18 = -1;
                    }
                    else if ((cVar3 == '\0') &&
                            (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) == '\x01')) {
                      iVar18 = 1;
                    }
                    else {
                      if ((cVar3 != '\x01') ||
                         (*(char *)((int)&DAT_00808a4f + uVar7 * 8 + uVar6) != '\x01'))
                      goto LAB_0061cd61;
                      iVar18 = 2;
                    }
                  }
                  bVar22 = iVar18 < 0;
                }
                else {
                  bVar22 = (&DAT_008087ea)[(uint)bVar2 * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar1 * 0x51];
                }
                if ((bVar22) && (iVar18 = (*this_00->vtable[5].slots_00_28[2])(), iVar18 != 0)) {
                  thunk_FUN_00416270(this_00,&local_6,(int *)((int)&param_3 + 2),(int *)&local_22);
                  uVar4 = *(undefined2 *)&this_00[1].field_0xe;
                  piVar21 = piVar19;
                  for (iVar18 = 0xb; iVar18 != 0; iVar18 = iVar18 + -1) {
                    *piVar21 = 0;
                    piVar21 = piVar21 + 1;
                  }
                  uVar12 = *(undefined4 *)&this_00->field_0x18;
                  *piVar19 = (int)this_00[1].vtable;
                  uVar8 = (undefined2)local_28;
                  *(undefined4 *)((int)piVar19 + 0x26) = uVar12;
                  uVar9 = (undefined2)local_10;
                  *(undefined2 *)((int)piVar19 + 0x2a) = uVar4;
                  uVar4 = (undefined2)local_14;
                  *(STWorldObject **)((int)piVar19 + 0x1a) = this_00;
                  *(undefined2 *)(piVar19 + 5) = uVar8;
                  iVar18 = (int)local_6;
                  *(undefined2 *)((int)piVar19 + 0x16) = uVar9;
                  *(undefined2 *)(piVar19 + 6) = uVar4;
                  iVar14 = (int)local_22;
                  piVar19[2] = iVar18;
                  pSVar5 = this_00->vtable;
                  piVar19[3] = (int)param_3._2_2_;
                  piVar19[4] = iVar14;
                  iVar18 = (*pSVar5->GetObjectTypeId)(this_00);
                  iVar14 = (int)local_6;
                  piVar19[1] = iVar18;
                  uVar12 = FUN_006aced8(param_1,param_2,iVar14,(int)param_3._2_2_);
                  iVar18 = local_3c;
                  *(undefined4 *)((int)piVar19 + 0x1e) = uVar12;
                  *(undefined4 *)((int)piVar19 + 0x22) = uVar12;
                  if (*(int *)((int)piVar19 + 0x1e) < iVar18) {
                    local_3c = *(int *)((int)piVar19 + 0x1e);
                    local_34 = local_c;
                  }
                  piVar19 = piVar19 + 0xb;
                  local_c = local_c + 1;
                }
              }
              local_28 = local_28 + 1;
              iVar18 = local_18;
              iVar20 = local_14;
              iVar14 = local_c;
              iVar11 = local_2c;
              sVar17 = SHORT_007fb240;
            } while (local_28 < local_1c);
          }
          local_10 = local_10 + 1;
          local_28 = iVar18;
        } while (local_10 < iVar11);
      }
      local_14 = iVar20 + 1;
    } while (iVar20 + 1 < 5);
    if (0 < iVar14) {
      local_38 = 1;
      piVar19 = local_800 + local_34 * 0xb;
      for (iVar18 = 0xb; iVar18 != 0; iVar18 = iVar18 + -1) {
        *param_4 = *piVar19;
        piVar19 = piVar19 + 1;
        param_4 = param_4 + 1;
      }
    }
  }
  return local_38;
}

