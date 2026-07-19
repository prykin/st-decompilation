
uint __thiscall
thunk_FUN_00601500(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,
                  int param_6,int param_7,int param_8,int param_9,undefined2 param_10,int param_11,
                  int param_12,int param_13)

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
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int *piStack_10;
  uint uStack_c;
  int iStack_8;
  
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
    iStack_8 = (short)(((short)(param_3 / 200) + sVar4) -
                      (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iStack_8 = (int)(short)(((short)(param_3 / 200) + sVar4) -
                           (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  bVar10 = param_1 < 0;
  if (bVar10) {
    iVar9 = 0;
    param_1 = 0;
  }
  uStack_c = (uint)bVar10;
  if (param_2 < 0) {
    param_2 = 0;
    uStack_c = 1;
    iVar9 = 0;
  }
  if (param_3 < 0x14) {
    param_3 = 0x14;
    uStack_c = 1;
    iStack_8 = 0;
LAB_00601b38:
    *(int *)((int)this + 0x28) = param_3;
    *(int *)((int)this + 0x20) = param_1;
    *(int *)((int)this + 0x24) = param_2;
    *(int *)this = iVar9;
    *(int *)((int)this + 4) = iVar5;
    *(int *)((int)this + 8) = iStack_8;
    *(int *)((int)this + 0x14) = 0;
    return uStack_c;
  }
  if (uStack_c != 0) {
    if (uStack_c != 1) {
      return uStack_c;
    }
    goto LAB_00601b38;
  }
  piStack_10 = this;
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
    if (((iVar9 != iVar6) || (iVar5 != iVar2)) || (iStack_8 != iVar3)) {
      iVar6 = iStack_8;
      if (iVar9 < 0) goto LAB_006018c7;
      if ((((-1 < iVar5) && (iVar9 < DAT_007fb240)) &&
          ((iVar5 < DAT_007fb242 &&
           (iVar6 = DAT_007fb240 * iVar5, *(char *)(DAT_007fb26c + iVar6 + iVar9) != '\0')))) &&
         (((&DAT_007fb24c)[param_7] == 0 ||
          (*(char *)((&DAT_007fb24c)[param_7] + iVar6 + iVar9) == '\0')))) {
        if ((*(char *)((int)this + 0x2c) == '\0') && (iVar3 < 5)) {
          uVar1 = thunk_FUN_00497030(iVar9,iVar5,param_7,1,param_8);
          if (-1 < (int)uVar1) {
            uStack_c = 5;
            thunk_FUN_00497850(param_4,param_5,param_6,param_1,param_2,param_3,uVar1,&iStack_14,
                               &iStack_18,&iStack_1c);
            thunk_FUN_00637ae0(iStack_14,iStack_18,iStack_1c);
            return uStack_c;
          }
        }
        else {
          *(undefined1 *)((int)this + 0x2c) = 1;
        }
      }
    }
  }
  iVar6 = iStack_8;
  if (((((-1 < iVar9) && (iVar9 < DAT_007fb240)) && (-1 < iVar5)) &&
      ((iVar5 < DAT_007fb242 && (-1 < iStack_8)))) && (iStack_8 < DAT_007fb244)) {
    sVar4 = (short)iVar9;
    sVar8 = (short)iVar5;
    sVar12 = (short)iStack_8;
    bVar10 = thunk_FUN_004961b0(sVar4,sVar8,sVar12);
    if (CONCAT31(extraout_var,bVar10) == 0) {
      if ((((sVar4 < 0) || (DAT_007fb240 <= sVar4)) ||
          ((sVar8 < 0 || (((DAT_007fb242 <= sVar8 || (sVar12 < 0)) || (DAT_007fb244 <= sVar12))))))
         || (piVar7 = *(int **)(DAT_007fb248 +
                               ((int)DAT_007fb246 * (int)sVar12 + (int)DAT_007fb240 * (int)sVar8 +
                               (int)sVar4) * 8), piVar7 == (int *)0x0)) {
        uStack_c = 1;
        this = piStack_10;
        goto LAB_00601b38;
      }
      iVar6 = (**(code **)(*piVar7 + 0xf8))();
      if (iVar6 == 0) {
        return uStack_c;
      }
      if (piVar7[6] == param_9) {
        return uStack_c;
      }
      iVar2 = (**(code **)(*piVar7 + 0xdc))(param_1,param_2,param_3,param_4,param_5,param_6);
      iVar6 = iStack_8;
      if (0 < iVar2) {
        if ((param_13 != 0) && (piVar7[9] == param_7)) {
          return uStack_c;
        }
        *piStack_10 = iVar9;
        piStack_10[1] = iVar5;
        piStack_10[2] = iStack_8;
LAB_00601aeb:
        uStack_c = 2;
        iVar9 = piVar7[6];
        piStack_10[6] = iVar2;
        piStack_10[4] = iVar9;
        piStack_10[5] = (int)piVar7;
        piStack_10[3] = 1;
        if (param_12 != 0) {
          return 2;
        }
        thunk_FUN_00601d10(param_7,param_8,(int)piVar7,(short)param_9,param_10,param_11,0x110);
        return uStack_c;
      }
    }
  }
LAB_006018c7:
  if (param_1 % 0xc9 < 0x65) {
    iStack_14 = iVar9 + -1;
    iStack_28 = iVar9;
    if (iStack_14 < 0) {
      iStack_14 = 0;
    }
  }
  else {
    iStack_28 = iVar9 + 1;
    iStack_14 = iVar9;
    if ((int)DAT_007fb240 <= iVar9 + 1) {
      iStack_28 = DAT_007fb240 + -1;
    }
  }
  if (param_2 < 0) {
    lVar11 = Library::MSVCRT::__ftol();
    iVar2 = (short)lVar11 + -1;
  }
  else {
    lVar11 = Library::MSVCRT::__ftol();
    iVar2 = (int)(short)lVar11;
  }
  if (iVar2 < 0x65) {
    iStack_18 = iVar5 + -1;
    iStack_24 = iVar5;
    if (iStack_18 < 0) {
      iStack_18 = 0;
    }
  }
  else {
    iStack_24 = iVar5 + 1;
    iStack_18 = iVar5;
    if ((int)DAT_007fb242 <= iVar5 + 1) {
      iStack_24 = DAT_007fb242 + -1;
    }
  }
  if (param_3 % 200 < 0x65) {
    iStack_1c = iVar6 + -1;
    iStack_20 = iVar6;
    if (iStack_1c < 0) {
      iStack_1c = 0;
    }
  }
  else {
    iStack_20 = iVar6 + 1;
    iStack_1c = iVar6;
    if (4 < iVar6 + 1) {
      iStack_20 = 4;
    }
  }
  if (((*piStack_10 != iVar9) || (piStack_10[1] != iVar5)) || (piStack_10[2] != iVar6)) {
    *piStack_10 = iVar9;
    piStack_10[1] = iVar5;
    piStack_10[2] = iVar6;
    piStack_10[3] = 0;
  }
  if (piStack_10[3] != 0) {
    return uStack_c;
  }
  iVar9 = iStack_1c;
  iVar5 = iStack_18;
  iStack_8 = iStack_14;
  if (iStack_28 < iStack_14) {
    return uStack_c;
  }
  do {
    while (iVar6 = iVar9, iStack_24 < iVar5) {
      iStack_8 = iStack_8 + 1;
      iVar5 = iStack_18;
      if (iStack_28 < iStack_8) {
        return uStack_c;
      }
    }
    for (; iVar9 <= iStack_20; iVar9 = iVar9 + 1) {
      if ((((((-1 < (short)iStack_8) && ((short)iStack_8 < DAT_007fb240)) &&
            (sVar4 = (short)iVar5, -1 < sVar4)) &&
           ((sVar4 < DAT_007fb242 && (sVar8 = (short)iVar9, -1 < sVar8)))) &&
          (((sVar8 < DAT_007fb244 &&
            ((piVar7 = *(int **)(DAT_007fb248 +
                                ((int)sVar4 * (int)DAT_007fb240 + (int)sVar8 * (int)DAT_007fb246 +
                                (int)(short)iStack_8) * 8), piVar7 != (int *)0x0 &&
             (param_9 != piVar7[6])))) &&
           (iVar2 = (**(code **)(*piVar7 + 0xdc))(param_1,param_2,param_3,param_4,param_5,param_6),
           iVar6 = iStack_1c, 0 < iVar2)))) && ((param_13 == 0 || (piVar7[9] != param_7)))) {
        *piStack_10 = iStack_8;
        piStack_10[1] = iVar5;
        piStack_10[2] = iVar9;
        goto LAB_00601aeb;
      }
    }
    iVar9 = iVar6;
    iVar5 = iVar5 + 1;
  } while( true );
}

