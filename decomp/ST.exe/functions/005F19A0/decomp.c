
void __fastcall FUN_005f19a0(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_14;
  int local_10;
  uint local_c;
  short *local_8;
  
  if (*(int *)((int)param_1 + 0x3c) == 0) {
    return;
  }
  local_c = *(uint *)(*(int *)((int)param_1 + 0x3c) + 0xc);
  local_14 = param_1;
  pvVar3 = DAT_00802a88;
joined_r0x005f19be:
  do {
    pvVar1 = pvVar3;
    local_c = local_c - 1;
    if ((int)local_c < 0) {
      return;
    }
    iVar6 = *(int *)((int)local_14 + 0x3c);
    if (local_c < *(uint *)(iVar6 + 0xc)) {
      psVar5 = (short *)(*(int *)(iVar6 + 8) * local_c + *(int *)(iVar6 + 0x1c));
    }
    else {
      psVar5 = (short *)0x0;
    }
    iVar6 = (int)psVar5[2];
    local_18 = (int)psVar5[1];
    local_1c = (int)*psVar5;
    pvVar3 = (void *)0x0;
  } while (pvVar1 == (void *)0x0);
  local_10 = iVar6;
  local_8 = psVar5;
  if ((char)psVar5[3] != '\x01') goto LAB_005f1c99;
  if (((((DAT_0080874d != -1) && (*(int *)((int)pvVar1 + 0xf8) != 0)) &&
       (thunk_FUN_00558c00(pvVar1,*(undefined4 *)((int)pvVar1 + 0x10c),local_1c,local_18,&local_20,
                           &local_24), pvVar3 = DAT_00802a88, -1 < iVar6)) &&
      (((iVar6 < 5 && (-1 < local_20)) &&
       ((local_20 < *(int *)((int)pvVar1 + 0x30) &&
        ((iVar6 = (&DAT_0079aed0)[iVar6] + local_24, -1 < iVar6 &&
         (iVar6 < *(int *)((int)pvVar1 + 0x34))))))))) &&
     ((*(int *)((int)pvVar1 + 0x4c) != 0 &&
      (((*(char *)(iVar6 * *(int *)((int)pvVar1 + 0x30) + *(int *)((int)pvVar1 + 0x4c) + local_20)
         == '\0' && (DAT_0080874d != -1)) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)))))) {
    local_38 = local_1c + 1;
    thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),local_38,local_18,
                       &local_28,&local_2c);
    pvVar1 = DAT_00802a88;
    if ((((-1 < local_28) && (local_28 < *(int *)((int)pvVar3 + 0x30))) &&
        (((iVar6 = (&DAT_0079aed0)[local_10] + local_2c, -1 < iVar6 &&
          ((iVar6 < *(int *)((int)pvVar3 + 0x34) && (*(int *)((int)pvVar3 + 0x4c) != 0)))) &&
         (*(char *)(iVar6 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) + local_28)
          == '\0')))) && ((DAT_0080874d != -1 && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)))) {
      iVar6 = local_18 + 1;
      thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),local_1c,iVar6,
                         &local_30,&local_34);
      pvVar2 = DAT_00802a88;
      if (((local_30 < 0) ||
          ((((*(int *)((int)pvVar1 + 0x30) <= local_30 ||
             (iVar4 = (&DAT_0079aed0)[local_10] + local_34, psVar5 = local_8, iVar4 < 0)) ||
            (*(int *)((int)pvVar1 + 0x34) <= iVar4)) ||
           ((*(int *)((int)pvVar1 + 0x4c) == 0 ||
            (*(char *)(iVar4 * *(int *)((int)pvVar1 + 0x30) + *(int *)((int)pvVar1 + 0x4c) +
                      local_30) != '\0')))))) ||
         ((DAT_0080874d == -1 ||
          ((((*(int *)((int)DAT_00802a88 + 0xf8) == 0 ||
             (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),local_38,
                                 iVar6,&local_3c,&local_40), psVar5 = local_8, local_3c < 0)) ||
            ((*(int *)((int)pvVar2 + 0x30) <= local_3c ||
             (((iVar6 = (&DAT_0079aed0)[local_10] + local_40, iVar6 < 0 ||
               (*(int *)((int)pvVar2 + 0x34) <= iVar6)) || (*(int *)((int)pvVar2 + 0x4c) == 0))))))
           || (pvVar3 = DAT_00802a88,
              *(char *)(iVar6 * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) +
                       local_3c) != '\0')))))) goto LAB_005f1c4c;
      goto joined_r0x005f19be;
    }
  }
LAB_005f1c4c:
  iVar6 = thunk_FUN_005f14b0(local_14,*psVar5,psVar5[1],psVar5[2],*(byte *)(psVar5 + 3),
                             *(short *)((int)psVar5 + 7));
  pvVar3 = DAT_00802a88;
  if (-1 < iVar6) {
    FUN_006b0c70(*(int *)((int)local_14 + 0x3c),local_c);
    pvVar3 = DAT_00802a88;
  }
  goto joined_r0x005f19be;
LAB_005f1c99:
  iVar6 = thunk_FUN_005f1d80(pvVar1,local_1c,local_18,iVar6);
  pvVar3 = DAT_00802a88;
  if (iVar6 == 0) goto joined_r0x005f19be;
  goto LAB_005f1c4c;
}

