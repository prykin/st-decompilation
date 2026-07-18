
undefined4 __thiscall FUN_005ed1c0(void *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int local_8;
  
  iVar7 = *(int *)((int)this + 0x2ba);
  *param_4 = iVar7;
  if (*(char *)((int)this + 0x25a) != '\0') {
    if (*(int *)((int)this + 0x287) == 0) {
      iVar10 = *(int *)((int)this + 0x293);
    }
    else {
      iVar10 = (*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 0x28f)) *
               *(int *)((int)this + 0x287);
      iVar10 = (int)(iVar10 + (iVar10 >> 0x1f & 0xfU)) >> 4;
    }
    if (*(int *)((int)this + 0x28b) != 0) {
      iVar7 = *(int *)((int)this + 0x28b) + iVar7;
      *param_4 = iVar7;
      if (iVar7 < 0) {
        *param_4 = iVar7 + 0x18;
      }
      if (0x17 < *param_4) {
        *param_4 = *param_4 + -0x18;
      }
      if (*param_4 == *(int *)((int)this + 0x273) / 0xf) {
        *(undefined4 *)((int)this + 0x28b) = 0;
      }
    }
    if (*(int *)((int)this + 0x293) <= iVar10) {
      if (*(int *)((int)this + 0x28b) != 0) {
        *(undefined4 *)((int)this + 0x287) = 0;
        return 1;
      }
      *param_1 = *(int *)((int)this + 0x267);
      *param_2 = *(int *)((int)this + 0x26b);
      *param_3 = *(int *)((int)this + 0x26f);
      *(undefined4 *)((int)this + 0x283) = 0;
      return 1;
    }
    iVar7 = *(int *)((int)this + 0x29b);
    iVar6 = *(int *)((int)this + 0x29f);
    iVar2 = *(int *)((int)this + 0x25f);
    iVar3 = *(int *)((int)this + 0x263);
    *param_1 = (*(int *)((int)this + 0x297) * iVar10) / 10000 + *(int *)((int)this + 0x25b);
    *param_2 = (iVar7 * iVar10) / 10000 + iVar2;
    *param_3 = (iVar6 * iVar10) / 10000 + iVar3;
    goto LAB_005ed874;
  }
  iVar10 = *(int *)((int)this + 0x263);
  if (*(int *)((int)this + 0x26f) - iVar10 < 1) {
    local_8 = -(uint)(*(int *)((int)this + 0x26f) != iVar10);
  }
  else {
    local_8 = 1;
  }
  if (*(int *)((int)this + 0x287) == 0) {
    iVar10 = *(int *)((int)this + 0x2c6);
  }
  else {
    iVar6 = (*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)this + 0x28f)) *
            *(int *)((int)this + 0x287) * local_8;
    iVar10 = ((int)(iVar6 + (iVar6 >> 0x1f & 7U)) >> 3) + iVar10;
  }
  if (*(int *)((int)this + 0x28b) != 0) {
    iVar7 = *(int *)((int)this + 0x28b) + iVar7;
    *param_4 = iVar7;
    if (iVar7 < 0) {
      *param_4 = iVar7 + 0x18;
    }
    if (0x17 < *param_4) {
      *param_4 = *param_4 + -0x18;
    }
    if (*param_4 == *(int *)((int)this + 0x273) / 0xf) {
      *(undefined4 *)((int)this + 0x28b) = 0;
    }
  }
  sVar1 = (short)(iVar10 >> 0x1f);
  if (iVar10 < 0) {
    iVar7 = (short)(((short)(iVar10 / 200) + sVar1) - (short)((longlong)iVar10 * 0x51eb851f >> 0x3f)
                   ) + -1;
  }
  else {
    iVar7 = (int)(short)(((short)(iVar10 / 200) + sVar1) -
                        (short)((longlong)iVar10 * 0x51eb851f >> 0x3f));
  }
  sVar1 = *(short *)((int)this + 0x246);
  if (iVar7 != sVar1) {
    if ((1 < *(byte *)((int)this + 0x252)) && (*(short *)((int)this + 600) == iVar7)) {
      iVar6 = thunk_FUN_00495ff0(*(short *)((int)this + 0x242),*(short *)((int)this + 0x244),sVar1,0
                                 ,(int)this);
      if (iVar6 == 0) {
        *(char *)((int)this + 0x252) = *(char *)((int)this + 0x252) + -1;
      }
      *(short *)((int)this + 0x246) = (short)iVar7;
      *(undefined1 *)((int)this + 0x253) = 0xff;
      *param_1 = *(int *)((int)this + 0x277);
      *param_2 = *(int *)((int)this + 0x27b);
      *param_3 = iVar10;
      return 1;
    }
    *param_1 = *(int *)((int)this + 0x277);
    *param_2 = *(int *)((int)this + 0x27b);
    *param_3 = iVar10;
    *(undefined4 *)((int)this + 0x283) = 1;
    if (*param_1 != *(int *)((int)this + 0x267)) {
      return 1;
    }
    if (*param_2 != *(int *)((int)this + 0x26b)) {
      return 1;
    }
    if (*param_3 != *(int *)((int)this + 0x26f)) {
      return 1;
    }
    *(undefined4 *)((int)this + 0x287) = 0;
    if (*(int *)((int)this + 0x273) != *(int *)((int)this + 0x2ba) * 0xf) {
      return 1;
    }
    *(undefined4 *)((int)this + 0x28b) = 0;
    *(undefined4 *)((int)this + 0x283) = 0;
    return 1;
  }
  iVar7 = (int)(short)(sVar1 * 200 + 100);
  if (1 < *(byte *)((int)this + 0x252)) {
    *param_1 = *(int *)((int)this + 0x277);
    *param_2 = *(int *)((int)this + 0x27b);
    *param_3 = iVar10;
    goto LAB_005ed874;
  }
  if (local_8 == 0) {
LAB_005ed68c:
    *param_1 = *(int *)((int)this + 0x277);
    *param_2 = *(int *)((int)this + 0x27b);
    *param_3 = iVar10;
    *(undefined4 *)((int)this + 0x283) = 1;
    if (*param_1 != *(int *)((int)this + 0x267)) {
      return 1;
    }
    if (*param_2 != *(int *)((int)this + 0x26b)) {
      return 1;
    }
    if (*param_3 != *(int *)((int)this + 0x26f)) {
      return 1;
    }
    *(undefined4 *)((int)this + 0x287) = 0;
    if (*(int *)((int)this + 0x273) != *(int *)((int)this + 0x2ba) * 0xf) {
      return 1;
    }
    *(undefined4 *)((int)this + 0x28b) = 0;
    *(undefined4 *)((int)this + 0x283) = 0;
    return 1;
  }
  sVar4 = (short)local_8;
  if ((iVar7 + 0x1e < iVar10) && (0 < local_8)) {
    sVar9 = *(short *)((int)this + 0x244);
    sVar8 = sVar1 + sVar4;
    sVar5 = *(short *)((int)this + 0x242);
    if (((-1 < sVar5) && (sVar5 < DAT_007fb240)) &&
       ((-1 < sVar9 && (((sVar9 < DAT_007fb242 && (-1 < sVar8)) && (sVar8 < DAT_007fb244)))))) {
      iVar7 = *(int *)(DAT_007fb248 +
                      ((int)DAT_007fb246 * (int)sVar8 + (int)DAT_007fb240 * (int)sVar9 + (int)sVar5)
                      * 8);
joined_r0x005ed4b7:
      if (iVar7 != 0) goto LAB_005ed643;
    }
  }
  else {
    if ((iVar7 + -0x1e <= iVar10) || (-1 < local_8)) {
      if (((0 < local_8) && (*(int *)((int)this + 0x26f) <= iVar10)) ||
         ((local_8 < 0 && (iVar10 <= *(int *)((int)this + 0x26f))))) {
        *(undefined4 *)((int)this + 0x287) = 0;
        *param_1 = *(int *)((int)this + 0x277);
        *param_2 = *(int *)((int)this + 0x27b);
        *param_3 = *(int *)((int)this + 0x26f);
        iVar10 = *(int *)((int)this + 0x26f);
        if (*(int *)((int)this + 0x273) == *(int *)((int)this + 0x2ba)) {
          *(undefined4 *)((int)this + 0x28b) = 0;
          *(undefined4 *)((int)this + 0x283) = 0;
          return 1;
        }
      }
      goto LAB_005ed68c;
    }
    sVar9 = *(short *)((int)this + 0x244);
    sVar8 = sVar1 + sVar4;
    sVar5 = *(short *)((int)this + 0x242);
    if ((((-1 < sVar5) && (sVar5 < DAT_007fb240)) && (-1 < sVar9)) &&
       (((sVar9 < DAT_007fb242 && (-1 < sVar8)) && (sVar8 < DAT_007fb244)))) {
      iVar7 = *(int *)(DAT_007fb248 +
                      ((int)sVar8 * (int)DAT_007fb246 + (int)sVar9 * (int)DAT_007fb240 + (int)sVar5)
                      * 8);
      goto joined_r0x005ed4b7;
    }
  }
  iVar7 = thunk_FUN_00495ec0(sVar5,sVar9,sVar1 + sVar4,0,(int)this);
  if (iVar7 == 0) {
    *(char *)((int)this + 0x252) = *(char *)((int)this + 0x252) + '\x01';
    *(undefined2 *)((int)this + 0x254) = *(undefined2 *)((int)this + 0x242);
    *(undefined2 *)((int)this + 0x256) = *(undefined2 *)((int)this + 0x244);
    *(short *)((int)this + 600) = *(short *)((int)this + 0x246) + sVar4;
    *param_1 = *(int *)((int)this + 0x277);
    *param_2 = *(int *)((int)this + 0x27b);
    *param_3 = iVar10;
LAB_005ed874:
    *(undefined4 *)((int)this + 0x283) = 1;
    return 1;
  }
LAB_005ed643:
  thunk_FUN_005ef4b0(this,*(int *)((int)this + 0x273));
  *param_1 = *(int *)((int)this + 0x277);
  *param_2 = *(int *)((int)this + 0x27b);
  *param_3 = *(int *)((int)this + 0x27f);
  *(undefined4 *)((int)this + 0x283) = 0xffffffff;
  return 1;
}

