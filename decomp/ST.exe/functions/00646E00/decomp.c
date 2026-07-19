
int FUN_00646e00(int param_1,int param_2,int param_3)

{
  short sVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = param_2;
  iVar5 = param_1;
  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar7 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
    local_8 = iVar7 + -1;
  }
  else {
    iVar7 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
    local_8 = iVar7;
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar6 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
    param_2 = iVar6 + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
    param_2 = iVar6;
  }
  sVar1 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    param_1 = (short)(((short)(param_3 / 200) + sVar1) -
                     (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    param_1 = (int)(short)(((short)(param_3 / 200) + sVar1) -
                          (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  if (iVar4 < 0) {
    iVar6 = iVar6 + -1;
  }
  if (iVar5 < 0) {
    iVar7 = iVar7 + -1;
  }
  if ((((iVar7 + 3 < *(int *)(DAT_00807598 + 0x48)) || (*(int *)(DAT_00807598 + 0x58) < iVar7 + -3))
      || (iVar6 + 3 < *(int *)(DAT_00807598 + 0x44))) ||
     (*(int *)(DAT_00807598 + 0x54) < iVar6 + -3)) {
    return 0;
  }
  iVar7 = FUN_006ddbd0();
  iVar4 = local_8;
  iVar5 = param_2;
  pvVar2 = DAT_00802a88;
  if ((iVar7 != 0) && (DAT_00802a88 != (void *)0x0)) {
    iVar6 = param_2 + -3;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    param_2 = local_8 + -3;
    if (param_2 < 0) {
      param_2 = 0;
    }
    local_8 = iVar5 + 4;
    if (DAT_007fb242 < local_8) {
      local_8 = (int)DAT_007fb242;
    }
    param_3 = iVar4 + 4;
    if (DAT_007fb240 < param_3) {
      param_3 = (int)DAT_007fb240;
    }
    if ((((((DAT_0080874d != -1) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) &&
          ((thunk_FUN_00558c00(DAT_00802a88,
                               *(Global_sub_00558C00_param_1Enum *)((int)DAT_00802a88 + 0x10c),iVar4
                               ,iVar5,&local_c,&local_10), pvVar3 = DAT_00802a88, -1 < param_1 &&
           ((((param_1 < 5 && (-1 < local_c)) && (local_c < *(int *)((int)pvVar2 + 0x30))) &&
            ((iVar5 = (&DAT_0079aed0)[param_1] + local_10, -1 < iVar5 &&
             (iVar5 < *(int *)((int)pvVar2 + 0x34))))))))) && (*(int *)((int)pvVar2 + 0x4c) != 0))
        && ((*(char *)(iVar5 * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) + local_c
                      ) == '\0' && (DAT_0080874d != -1)))) &&
       (((((*(int *)((int)DAT_00802a88 + 0xf8) != 0 &&
           (((thunk_FUN_00558c00(DAT_00802a88,
                                 *(Global_sub_00558C00_param_1Enum *)((int)DAT_00802a88 + 0x10c),
                                 param_2,iVar6,&local_10,&local_c), pvVar2 = DAT_00802a88,
             -1 < local_10 && (local_10 < *(int *)((int)pvVar3 + 0x30))) &&
            (iVar5 = (&DAT_0079aed0)[param_1] + local_c, -1 < iVar5)))) &&
          (((iVar5 < *(int *)((int)pvVar3 + 0x34) && (*(int *)((int)pvVar3 + 0x4c) != 0)) &&
           (*(char *)(iVar5 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) + local_10
                     ) == '\0')))) &&
         ((((DAT_0080874d != -1 && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) &&
           ((thunk_FUN_00558c00(DAT_00802a88,
                                *(Global_sub_00558C00_param_1Enum *)((int)DAT_00802a88 + 0x10c),
                                param_3,iVar6,&local_10,&local_c), iVar5 = local_8,
            pvVar3 = DAT_00802a88, -1 < local_10 &&
            (((local_10 < *(int *)((int)pvVar2 + 0x30) &&
              (local_c = (&DAT_0079aed0)[param_1] + local_c, -1 < local_c)) &&
             (local_c < *(int *)((int)pvVar2 + 0x34))))))) &&
          ((*(int *)((int)pvVar2 + 0x4c) != 0 &&
           (*(char *)(local_c * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) +
                     local_10) == '\0')))))) &&
        ((DAT_0080874d != -1 &&
         (((*(int *)((int)DAT_00802a88 + 0xf8) != 0 &&
           (thunk_FUN_00558c00(DAT_00802a88,
                               *(Global_sub_00558C00_param_1Enum *)((int)DAT_00802a88 + 0x10c),
                               param_2,local_8,&param_2,&local_10), -1 < param_2)) &&
          ((param_2 < *(int *)((int)pvVar3 + 0x30) &&
           ((((local_10 = (&DAT_0079aed0)[param_1] + local_10, -1 < local_10 &&
              (local_10 < *(int *)((int)pvVar3 + 0x34))) && (*(int *)((int)pvVar3 + 0x4c) != 0)) &&
            ((*(char *)(local_10 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) +
                       param_2) == '\0' &&
             (iVar5 = thunk_FUN_005f1d80(DAT_00802a88,param_3,iVar5,param_1), iVar5 != 1))))))))))))
       )) {
      return 0;
    }
  }
  return iVar7;
}

