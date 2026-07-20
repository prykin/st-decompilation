
undefined4 __thiscall FUN_0061ca90(void *this,int param_1,int param_2,int param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined2 uVar4;
  int *this_00;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  short sVar9;
  int iVar10;
  undefined4 uVar11;
  short sVar12;
  int iVar13;
  short sVar14;
  int iVar15;
  short sVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  int *piVar20;
  bool bVar21;
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
  sVar16 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar17 = (short)(((short)(param_1 / 0xc9) + sVar16) -
                    (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar17 = (int)(short)(((short)(param_1 / 0xc9) + sVar16) -
                         (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar16 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar13 = (short)(((short)(param_2 / 0xc9) + sVar16) -
                    (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar13 = (int)(short)(((short)(param_2 / 0xc9) + sVar16) -
                         (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar16 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    iVar10 = (short)(((short)(param_3 / 200) + sVar16) -
                    (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar10 = (int)(short)(((short)(param_3 / 200) + sVar16) -
                         (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  if (((((-1 < iVar17) && (-1 < iVar13)) && (-1 < iVar10)) &&
      ((iVar19 = (int)SHORT_007fb240, iVar17 < iVar19 &&
       (iVar15 = (int)SHORT_007fb242, iVar13 < iVar15)))) && (iVar10 < 5)) {
    local_20 = iVar13 + -1;
    if (iVar13 + -1 < 0) {
      local_20 = 0;
    }
    local_18 = iVar17 + -1;
    if (iVar17 + -1 < 0) {
      local_18 = 0;
    }
    local_2c = iVar13 + 2;
    if (iVar15 < iVar13 + 2) {
      local_2c = iVar15;
    }
    local_1c = iVar17 + 2;
    if (iVar19 < iVar17 + 2) {
      local_1c = iVar19;
    }
    iVar13 = 0;
    local_c = 0;
    local_34 = 0;
    local_3c = 0x18894;
    local_14 = 0;
    iVar17 = local_18;
    iVar10 = local_2c;
    sVar16 = SHORT_007fb240;
    do {
      local_10 = local_20;
      local_28 = iVar17;
      iVar19 = local_14;
      if (local_20 < iVar10) {
        do {
          iVar17 = local_28;
          if (local_28 < local_1c) {
            piVar18 = local_800 + iVar13 * 0xb;
            do {
              sVar9 = (short)local_28;
              if ((((-1 < sVar9) && (sVar9 < sVar16)) &&
                  ((sVar12 = (short)local_10, -1 < sVar12 &&
                   (((sVar12 < SHORT_007fb242 && (sVar14 = (short)iVar19, -1 < sVar14)) &&
                    (sVar14 < SHORT_007fb244)))))) &&
                 (((this_00 = *(int **)(DAT_007fb248 +
                                       ((int)sVar12 * (int)sVar16 +
                                        (int)sVar14 * (int)SHORT_007fb246 + (int)sVar9) * 8),
                   this_00 != (int *)0x0 && (iVar17 = (**(code **)(*this_00 + 0xf0))(), iVar17 != 0)
                   ) && (((uint)this_00[9] < 8 &&
                         ((DAT_00802a38 == 0 || ((byte)(&DAT_008087e9)[this_00[9] * 0x51] < 8)))))))
                 ) {
                bVar1 = *(byte *)(this_00 + 9);
                bVar2 = *(byte *)((int)local_44 + 0x51);
                _local_30 = CONCAT31(uStack_2f,bVar1);
                _local_40 = CONCAT31(uStack_3f,bVar2);
                if (DAT_00808a8f == '\0') {
                  if (bVar1 == bVar2) {
LAB_0061cd61:
                    iVar17 = 0;
                  }
                  else {
                    uVar5 = (uint)bVar1;
                    uVar6 = (uint)bVar2;
                    cVar3 = *(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar6);
                    if ((cVar3 == '\0') &&
                       (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar5) == '\0')) {
                      iVar17 = -2;
                    }
                    else if ((cVar3 == '\x01') &&
                            (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar5) == '\0')) {
                      iVar17 = -1;
                    }
                    else if ((cVar3 == '\0') &&
                            (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar5) == '\x01')) {
                      iVar17 = 1;
                    }
                    else {
                      if ((cVar3 != '\x01') ||
                         (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar5) != '\x01'))
                      goto LAB_0061cd61;
                      iVar17 = 2;
                    }
                  }
                  bVar21 = iVar17 < 0;
                }
                else {
                  bVar21 = (&DAT_008087ea)[(uint)bVar2 * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar1 * 0x51];
                }
                if ((bVar21) && (iVar17 = (**(code **)(*this_00 + 0xf8))(), iVar17 != 0)) {
                  thunk_FUN_00416270(this_00,&local_6,(int *)((int)&param_3 + 2),(int *)&local_22);
                  uVar4 = *(undefined2 *)((int)this_00 + 0x32);
                  piVar20 = piVar18;
                  for (iVar17 = 0xb; iVar17 != 0; iVar17 = iVar17 + -1) {
                    *piVar20 = 0;
                    piVar20 = piVar20 + 1;
                  }
                  iVar17 = this_00[6];
                  *piVar18 = this_00[9];
                  uVar7 = (undefined2)local_28;
                  *(int *)((int)piVar18 + 0x26) = iVar17;
                  uVar8 = (undefined2)local_10;
                  *(undefined2 *)((int)piVar18 + 0x2a) = uVar4;
                  uVar4 = (undefined2)local_14;
                  *(int **)((int)piVar18 + 0x1a) = this_00;
                  *(undefined2 *)(piVar18 + 5) = uVar7;
                  iVar17 = (int)local_6;
                  *(undefined2 *)((int)piVar18 + 0x16) = uVar8;
                  *(undefined2 *)(piVar18 + 6) = uVar4;
                  iVar13 = (int)local_22;
                  piVar18[2] = iVar17;
                  iVar17 = *this_00;
                  piVar18[3] = (int)param_3._2_2_;
                  piVar18[4] = iVar13;
                  iVar17 = (**(code **)(iVar17 + 0x2c))();
                  iVar13 = (int)local_6;
                  piVar18[1] = iVar17;
                  uVar11 = FUN_006aced8(param_1,param_2,iVar13,(int)param_3._2_2_);
                  iVar17 = local_3c;
                  *(undefined4 *)((int)piVar18 + 0x1e) = uVar11;
                  *(undefined4 *)((int)piVar18 + 0x22) = uVar11;
                  if (*(int *)((int)piVar18 + 0x1e) < iVar17) {
                    local_3c = *(int *)((int)piVar18 + 0x1e);
                    local_34 = local_c;
                  }
                  piVar18 = piVar18 + 0xb;
                  local_c = local_c + 1;
                }
              }
              local_28 = local_28 + 1;
              iVar17 = local_18;
              iVar19 = local_14;
              iVar13 = local_c;
              iVar10 = local_2c;
              sVar16 = SHORT_007fb240;
            } while (local_28 < local_1c);
          }
          local_10 = local_10 + 1;
          local_28 = iVar17;
        } while (local_10 < iVar10);
      }
      local_14 = iVar19 + 1;
    } while (iVar19 + 1 < 5);
    if (0 < iVar13) {
      local_38 = 1;
      piVar18 = local_800 + local_34 * 0xb;
      for (iVar17 = 0xb; iVar17 != 0; iVar17 = iVar17 + -1) {
        *param_4 = *piVar18;
        piVar18 = piVar18 + 1;
        param_4 = param_4 + 1;
      }
    }
  }
  return local_38;
}

