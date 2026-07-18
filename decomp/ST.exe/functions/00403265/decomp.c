
undefined4 __thiscall
thunk_FUN_005f23d0(void *this,int param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                  int param_6)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  undefined4 uStack_8;
  
  iVar4 = param_2;
  iVar5 = param_1;
  uStack_8 = 0;
  if ((((param_6 == 3) || (param_3 != 0)) || (param_5 == 0x39)) ||
     ((param_5 == 0x4f || (*(int *)(&DAT_007918bc + param_6 * 4 + param_5 * 0xc) != 0)))) {
    return 0;
  }
  pvStack_c = this;
  iVar3 = thunk_FUN_005f13c0(this,param_1,param_2,0,(char)param_4);
  pvVar1 = DAT_00802a88;
  if (iVar3 == 0) {
    return uStack_8;
  }
  if (DAT_00802a88 == (void *)0x0) {
LAB_005f26af:
    iVar5 = thunk_FUN_005f15f0(pvStack_c,(short)iVar5,(short)param_2,0,(char)param_4,0,'\0');
    if (-1 < iVar5) {
      uStack_8 = 1;
    }
  }
  else {
    if ((char)param_4 == '\x01') {
      if ((((((DAT_0080874d != -1) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) &&
            ((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar5,iVar4
                                 ,&param_6,&param_3), pvVar2 = DAT_00802a88, -1 < param_6 &&
             (((param_6 < *(int *)((int)pvVar1 + 0x30) &&
               (iVar4 = param_3 + DAT_0079aed0, -1 < iVar4)) &&
              (iVar4 < *(int *)((int)pvVar1 + 0x34))))))) &&
           ((*(int *)((int)pvVar1 + 0x4c) != 0 &&
            (*(char *)(iVar4 * *(int *)((int)pvVar1 + 0x30) + *(int *)((int)pvVar1 + 0x4c) + param_6
                      ) == '\0')))) && (DAT_0080874d != -1)) &&
         ((((*(int *)((int)DAT_00802a88 + 0xf8) != 0 &&
            (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar5 + 1,
                                param_2,&param_5,&iStack_10), pvVar1 = DAT_00802a88, -1 < param_5))
           && ((param_5 < *(int *)((int)pvVar2 + 0x30) &&
               (((iStack_10 = iStack_10 + DAT_0079aed0, -1 < iStack_10 &&
                 (iStack_10 < *(int *)((int)pvVar2 + 0x34))) && (*(int *)((int)pvVar2 + 0x4c) != 0))
               )))) &&
          (((*(char *)(iStack_10 * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) +
                      param_5) == '\0' && (DAT_0080874d != -1)) &&
           (*(int *)((int)DAT_00802a88 + 0xf8) != 0)))))) {
        iVar4 = param_2 + 1;
        thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar5,iVar4,
                           &iStack_14,&iStack_18);
        iVar3 = param_1;
        pvVar2 = DAT_00802a88;
        if (((((-1 < iStack_14) && (iStack_14 < *(int *)((int)pvVar1 + 0x30))) &&
             ((iStack_18 = iStack_18 + DAT_0079aed0, iVar5 = iVar3, -1 < iStack_18 &&
              ((((iStack_18 < *(int *)((int)pvVar1 + 0x34) && (*(int *)((int)pvVar1 + 0x4c) != 0))
                && (*(char *)(iStack_18 * *(int *)((int)pvVar1 + 0x30) +
                              *(int *)((int)pvVar1 + 0x4c) + iStack_14) == '\0')) &&
               ((DAT_0080874d != -1 && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)))))))) &&
            ((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),param_1 + 1
                                 ,iVar4,&param_1,&iStack_1c), -1 < param_1 &&
             ((param_1 < *(int *)((int)pvVar2 + 0x30) &&
              (iStack_1c = DAT_0079aed0 + iStack_1c, -1 < iStack_1c)))))) &&
           ((iStack_1c < *(int *)((int)pvVar2 + 0x34) &&
            ((*(int *)((int)pvVar2 + 0x4c) != 0 &&
             (*(char *)(iStack_1c * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) +
                       param_1) == '\0')))))) goto LAB_005f26af;
      }
    }
    else {
      iVar4 = thunk_FUN_005f1d80(DAT_00802a88,iVar5,iVar4,0);
      if (iVar4 == 0) goto LAB_005f26af;
    }
    iVar5 = thunk_FUN_005f14b0(pvStack_c,(short)iVar5,(short)param_2,0,(byte)param_4,0);
    if (-1 < iVar5) {
      return 1;
    }
  }
  return uStack_8;
}

