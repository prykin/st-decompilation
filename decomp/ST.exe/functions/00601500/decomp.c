
uint __thiscall
FUN_00601500(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,undefined2 param_10,int param_11,int param_12,
            int param_13)

{
  uint uVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  short sVar8;
  int iVar9;
  bool bVar10;
  longlong lVar11;
  short sVar12;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  uint local_c;
  int local_8;
  
  sVar4 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar9 = (short)(((short)(param_1 / 0xc9) + sVar4) -
                   (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar9 = (int)(short)(((short)(param_1 / 0xc9) + sVar4) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar4 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar5 = (short)(((short)(param_2 / 0xc9) + sVar4) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(param_2 / 0xc9) + sVar4) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar4 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    local_8 = (short)(((short)(param_3 / 200) + sVar4) -
                     (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    local_8 = (int)(short)(((short)(param_3 / 200) + sVar4) -
                          (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  bVar10 = param_1 < 0;
  if (bVar10) {
    iVar9 = 0;
    param_1 = 0;
  }
  local_c = (uint)bVar10;
  if (param_2 < 0) {
    param_2 = 0;
    local_c = 1;
    iVar9 = 0;
  }
  if (param_3 < 0x14) {
    param_3 = 0x14;
    local_c = 1;
    local_8 = 0;
LAB_00601b38:
    *(int *)((int)this + 0x28) = param_3;
    *(int *)((int)this + 0x20) = param_1;
    *(int *)((int)this + 0x24) = param_2;
    *(int *)this = iVar9;
    *(int *)((int)this + 4) = iVar5;
    *(int *)((int)this + 8) = local_8;
    *(int *)((int)this + 0x14) = 0;
    return local_c;
  }
  if (local_c != 0) {
    if (local_c != 1) {
      return local_c;
    }
    goto LAB_00601b38;
  }
  local_10 = this;
  if (((param_11 != 0xa8) && (param_11 != 0xb1)) && (param_11 != 0x14e)) {
    sVar4 = (short)(param_4 >> 0x1f);
    if (param_4 < 0) {
      iVar6 = (short)(((short)(param_4 / 0xc9) + sVar4) -
                     (short)((longlong)param_4 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar6 = (int)(short)(((short)(param_4 / 0xc9) + sVar4) -
                          (short)((longlong)param_4 * 0x28c1979 >> 0x3f));
    }
    sVar4 = (short)(param_5 >> 0x1f);
    if (param_5 < 0) {
      iVar2 = (short)(((short)(param_5 / 0xc9) + sVar4) -
                     (short)((longlong)param_5 * 0x28c1979 >> 0x3f)) + -1;
    }
    else {
      iVar2 = (int)(short)(((short)(param_5 / 0xc9) + sVar4) -
                          (short)((longlong)param_5 * 0x28c1979 >> 0x3f));
    }
    sVar4 = (short)(param_6 >> 0x1f);
    if (param_6 < 0) {
      iVar3 = (short)(((short)(param_6 / 200) + sVar4) -
                     (short)((longlong)param_6 * 0x51eb851f >> 0x3f)) + -1;
    }
    else {
      iVar3 = (int)(short)(((short)(param_6 / 200) + sVar4) -
                          (short)((longlong)param_6 * 0x51eb851f >> 0x3f));
    }
    if (((iVar9 != iVar6) || (iVar5 != iVar2)) || (local_8 != iVar3)) {
      iVar6 = local_8;
      if (iVar9 < 0) goto LAB_006018c7;
      if ((((-1 < iVar5) && (iVar9 < DAT_007fb240)) &&
          ((iVar5 < DAT_007fb242 &&
           (iVar6 = DAT_007fb240 * iVar5, *(char *)(DAT_007fb26c + iVar6 + iVar9) != '\0')))) &&
         (((&DAT_007fb24c)[param_7] == 0 ||
          (*(char *)((&DAT_007fb24c)[param_7] + iVar6 + iVar9) == '\0')))) {
        if ((*(char *)((int)this + 0x2c) == '\0') && (iVar3 < 5)) {
          uVar1 = thunk_FUN_00497030(iVar9,iVar5,param_7,1,param_8);
          if (-1 < (int)uVar1) {
            local_c = 5;
            thunk_FUN_00497850(param_4,param_5,param_6,param_1,param_2,param_3,uVar1,&local_14,
                               &local_18,&local_1c);
            thunk_FUN_00637ae0(local_14,local_18,local_1c);
            return local_c;
          }
        }
        else {
          *(undefined1 *)((int)this + 0x2c) = 1;
        }
      }
    }
  }
  iVar6 = local_8;
  if (((((-1 < iVar9) && (iVar9 < DAT_007fb240)) && (-1 < iVar5)) &&
      ((iVar5 < DAT_007fb242 && (-1 < local_8)))) && (local_8 < DAT_007fb244)) {
    sVar4 = (short)iVar9;
    sVar8 = (short)iVar5;
    sVar12 = (short)local_8;
    bVar10 = thunk_FUN_004961b0(sVar4,sVar8,sVar12);
    if (CONCAT31(extraout_var,bVar10) == 0) {
      if ((((sVar4 < 0) || (DAT_007fb240 <= sVar4)) ||
          ((sVar8 < 0 || (((DAT_007fb242 <= sVar8 || (sVar12 < 0)) || (DAT_007fb244 <= sVar12))))))
         || (piVar7 = *(int **)(DAT_007fb248 +
                               ((int)DAT_007fb246 * (int)sVar12 + (int)DAT_007fb240 * (int)sVar8 +
                               (int)sVar4) * 8), piVar7 == (int *)0x0)) {
        local_c = 1;
        this = local_10;
        goto LAB_00601b38;
      }
      iVar6 = (**(code **)(*piVar7 + 0xf8))();
      if (iVar6 == 0) {
        return local_c;
      }
      if (piVar7[6] == param_9) {
        return local_c;
      }
      iVar2 = (**(code **)(*piVar7 + 0xdc))(param_1,param_2,param_3,param_4,param_5,param_6);
      iVar6 = local_8;
      if (0 < iVar2) {
        if ((param_13 != 0) && (piVar7[9] == param_7)) {
          return local_c;
        }
        *local_10 = iVar9;
        local_10[1] = iVar5;
        local_10[2] = local_8;
LAB_00601aeb:
        local_c = 2;
        iVar9 = piVar7[6];
        local_10[6] = iVar2;
        local_10[4] = iVar9;
        local_10[5] = (int)piVar7;
        local_10[3] = 1;
        if (param_12 != 0) {
          return 2;
        }
        thunk_FUN_00601d10(param_7,param_8,(int)piVar7,(short)param_9,param_10,param_11,0x110);
        return local_c;
      }
    }
  }
LAB_006018c7:
  if (param_1 % 0xc9 < 0x65) {
    local_14 = iVar9 + -1;
    local_28 = iVar9;
    if (local_14 < 0) {
      local_14 = 0;
    }
  }
  else {
    local_28 = iVar9 + 1;
    local_14 = iVar9;
    if ((int)DAT_007fb240 <= iVar9 + 1) {
      local_28 = DAT_007fb240 + -1;
    }
  }
  if (param_2 < 0) {
    lVar11 = __ftol();
    iVar2 = (short)lVar11 + -1;
  }
  else {
    lVar11 = __ftol();
    iVar2 = (int)(short)lVar11;
  }
  if (iVar2 < 0x65) {
    local_18 = iVar5 + -1;
    local_24 = iVar5;
    if (local_18 < 0) {
      local_18 = 0;
    }
  }
  else {
    local_24 = iVar5 + 1;
    local_18 = iVar5;
    if ((int)DAT_007fb242 <= iVar5 + 1) {
      local_24 = DAT_007fb242 + -1;
    }
  }
  if (param_3 % 200 < 0x65) {
    local_1c = iVar6 + -1;
    local_20 = iVar6;
    if (local_1c < 0) {
      local_1c = 0;
    }
  }
  else {
    local_20 = iVar6 + 1;
    local_1c = iVar6;
    if (4 < iVar6 + 1) {
      local_20 = 4;
    }
  }
  if (((*local_10 != iVar9) || (local_10[1] != iVar5)) || (local_10[2] != iVar6)) {
    *local_10 = iVar9;
    local_10[1] = iVar5;
    local_10[2] = iVar6;
    local_10[3] = 0;
  }
  if (local_10[3] != 0) {
    return local_c;
  }
  iVar9 = local_1c;
  iVar5 = local_18;
  local_8 = local_14;
  if (local_28 < local_14) {
    return local_c;
  }
  do {
    while (iVar6 = iVar9, local_24 < iVar5) {
      local_8 = local_8 + 1;
      iVar5 = local_18;
      if (local_28 < local_8) {
        return local_c;
      }
    }
    for (; iVar9 <= local_20; iVar9 = iVar9 + 1) {
      if ((((((-1 < (short)local_8) && ((short)local_8 < DAT_007fb240)) &&
            (sVar4 = (short)iVar5, -1 < sVar4)) &&
           ((sVar4 < DAT_007fb242 && (sVar8 = (short)iVar9, -1 < sVar8)))) &&
          (((sVar8 < DAT_007fb244 &&
            ((piVar7 = *(int **)(DAT_007fb248 +
                                ((int)sVar4 * (int)DAT_007fb240 + (int)sVar8 * (int)DAT_007fb246 +
                                (int)(short)local_8) * 8), piVar7 != (int *)0x0 &&
             (param_9 != piVar7[6])))) &&
           (iVar2 = (**(code **)(*piVar7 + 0xdc))(param_1,param_2,param_3,param_4,param_5,param_6),
           iVar6 = local_1c, 0 < iVar2)))) && ((param_13 == 0 || (piVar7[9] != param_7)))) {
        *local_10 = local_8;
        local_10[1] = iVar5;
        local_10[2] = iVar9;
        goto LAB_00601aeb;
      }
    }
    iVar9 = iVar6;
    iVar5 = iVar5 + 1;
  } while( true );
}

