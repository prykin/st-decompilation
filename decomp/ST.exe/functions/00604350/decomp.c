
int __fastcall FUN_00604350(int param_1)

{
  int iVar1;
  short sVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = *(int *)(param_1 + 0x1f1);
  sVar2 = (short)(local_14 >> 0x1f);
  if (local_14 < 0) {
    iVar5 = (int)(short)(((short)(local_14 / 0xc9) + sVar2) -
                        (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    local_c = iVar5 + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(local_14 / 0xc9) + sVar2) -
                        (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    local_c = iVar5;
  }
  iVar1 = *(int *)(param_1 + 0x1f5);
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    iVar6 = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
    local_10 = iVar6 + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(iVar1 / 0xc9) + sVar2) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
    local_10 = iVar6;
  }
  iVar7 = *(int *)(param_1 + 0x1f9);
  sVar2 = (short)(iVar7 >> 0x1f);
  if (iVar7 < 0) {
    local_8 = (short)(((short)(iVar7 / 200) + sVar2) - (short)((longlong)iVar7 * 0x51eb851f >> 0x3f)
                     ) + -1;
  }
  else {
    local_8 = (int)(short)(((short)(iVar7 / 200) + sVar2) -
                          (short)((longlong)iVar7 * 0x51eb851f >> 0x3f));
  }
  if (iVar1 < 0) {
    iVar6 = iVar6 + -1;
  }
  if (local_14 < 0) {
    iVar5 = iVar5 + -1;
  }
  if ((((*(int *)(DAT_00807598 + 0x48) <= iVar5 + 3) &&
       (iVar5 + -3 <= *(int *)(DAT_00807598 + 0x58))) &&
      (*(int *)(DAT_00807598 + 0x44) <= iVar6 + 3)) && (iVar6 + -3 <= *(int *)(DAT_00807598 + 0x54))
     ) {
    iVar6 = FUN_006ddbd0();
    iVar1 = local_c;
    iVar5 = local_10;
    pvVar3 = DAT_00802a88;
    if ((iVar6 != 0) && (DAT_00802a88 != (void *)0x0)) {
      iVar7 = local_10 + -3;
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      local_c = local_c + -3;
      if (local_c < 0) {
        local_c = 0;
      }
      local_14 = local_10 + 4;
      if ((int)DAT_007fb242 < local_10 + 4) {
        local_14 = (int)DAT_007fb242;
      }
      local_10 = iVar1 + 4;
      if (DAT_007fb240 < local_10) {
        local_10 = (int)DAT_007fb240;
      }
      if ((((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
            ((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar1,iVar5
                                 ,&local_18,&local_1c), pvVar4 = DAT_00802a88, local_8 < 0 ||
             ((((4 < local_8 || (local_18 < 0)) || (*(int *)((int)pvVar3 + 0x30) <= local_18)) ||
              ((iVar5 = (&DAT_0079aed0)[local_8] + local_1c, iVar5 < 0 ||
               (*(int *)((int)pvVar3 + 0x34) <= iVar5)))))))) || (*(int *)((int)pvVar3 + 0x4c) == 0)
           ) || ((*(char *)(iVar5 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) +
                           local_18) != '\0' || (DAT_0080874d == -1)))) ||
         (((((*(int *)((int)DAT_00802a88 + 0xf8) == 0 ||
             (((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),local_c,
                                   iVar7,&local_1c,&local_18), pvVar3 = DAT_00802a88, local_1c < 0
               || (*(int *)((int)pvVar4 + 0x30) <= local_1c)) ||
              (iVar5 = (&DAT_0079aed0)[local_8] + local_18, iVar5 < 0)))) ||
            (((*(int *)((int)pvVar4 + 0x34) <= iVar5 || (*(int *)((int)pvVar4 + 0x4c) == 0)) ||
             (*(char *)(iVar5 * *(int *)((int)pvVar4 + 0x30) + *(int *)((int)pvVar4 + 0x4c) +
                       local_1c) != '\0')))) ||
           ((((DAT_0080874d == -1 || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
             ((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),local_10,
                                  iVar7,&local_1c,&local_18), iVar1 = local_8, iVar5 = local_14,
              pvVar4 = DAT_00802a88, local_1c < 0 ||
              (((*(int *)((int)pvVar3 + 0x30) <= local_1c ||
                (iVar7 = (&DAT_0079aed0)[local_8] + local_18, iVar7 < 0)) ||
               (*(int *)((int)pvVar3 + 0x34) <= iVar7)))))) ||
            ((*(int *)((int)pvVar3 + 0x4c) == 0 ||
             (*(char *)(iVar7 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) +
                       local_1c) != '\0')))))) ||
          ((DAT_0080874d == -1 ||
           (((*(int *)((int)DAT_00802a88 + 0xf8) == 0 ||
             (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),local_c,
                                 local_14,&local_1c,&local_18), local_1c < 0)) ||
            ((*(int *)((int)pvVar4 + 0x30) <= local_1c ||
             ((((local_18 = (&DAT_0079aed0)[iVar1] + local_18, local_18 < 0 ||
                (*(int *)((int)pvVar4 + 0x34) <= local_18)) || (*(int *)((int)pvVar4 + 0x4c) == 0))
              || ((*(char *)(local_18 * *(int *)((int)pvVar4 + 0x30) + *(int *)((int)pvVar4 + 0x4c)
                            + local_1c) != '\0' ||
                  (iVar5 = thunk_FUN_005f1d80(DAT_00802a88,local_10,iVar5,local_8), iVar5 == 1))))))
            )))))))) {
        return 1;
      }
    }
    return iVar6;
  }
  return 0;
}

