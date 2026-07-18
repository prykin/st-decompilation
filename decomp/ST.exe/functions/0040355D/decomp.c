
void __fastcall thunk_FUN_005f19a0(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  void *pvStack_14;
  int iStack_10;
  uint uStack_c;
  short *psStack_8;
  
  if (*(int *)((int)param_1 + 0x3c) == 0) {
    return;
  }
  uStack_c = *(uint *)(*(int *)((int)param_1 + 0x3c) + 0xc);
  pvStack_14 = param_1;
  pvVar3 = DAT_00802a88;
joined_r0x005f19be:
  do {
    pvVar1 = pvVar3;
    uStack_c = uStack_c - 1;
    if ((int)uStack_c < 0) {
      return;
    }
    iVar6 = *(int *)((int)pvStack_14 + 0x3c);
    if (uStack_c < *(uint *)(iVar6 + 0xc)) {
      psVar5 = (short *)(*(int *)(iVar6 + 8) * uStack_c + *(int *)(iVar6 + 0x1c));
    }
    else {
      psVar5 = (short *)0x0;
    }
    iVar6 = (int)psVar5[2];
    iStack_18 = (int)psVar5[1];
    iStack_1c = (int)*psVar5;
    pvVar3 = (void *)0x0;
  } while (pvVar1 == (void *)0x0);
  iStack_10 = iVar6;
  psStack_8 = psVar5;
  if ((char)psVar5[3] != '\x01') goto LAB_005f1c99;
  if (((((DAT_0080874d != -1) && (*(int *)((int)pvVar1 + 0xf8) != 0)) &&
       (thunk_FUN_00558c00(pvVar1,*(undefined4 *)((int)pvVar1 + 0x10c),iStack_1c,iStack_18,
                           &iStack_20,&iStack_24), pvVar3 = DAT_00802a88, -1 < iVar6)) &&
      (((iVar6 < 5 && (-1 < iStack_20)) &&
       ((iStack_20 < *(int *)((int)pvVar1 + 0x30) &&
        ((iVar6 = (&DAT_0079aed0)[iVar6] + iStack_24, -1 < iVar6 &&
         (iVar6 < *(int *)((int)pvVar1 + 0x34))))))))) &&
     ((*(int *)((int)pvVar1 + 0x4c) != 0 &&
      (((*(char *)(iVar6 * *(int *)((int)pvVar1 + 0x30) + *(int *)((int)pvVar1 + 0x4c) + iStack_20)
         == '\0' && (DAT_0080874d != -1)) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)))))) {
    iStack_38 = iStack_1c + 1;
    thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iStack_38,iStack_18,
                       &iStack_28,&iStack_2c);
    pvVar1 = DAT_00802a88;
    if ((((-1 < iStack_28) && (iStack_28 < *(int *)((int)pvVar3 + 0x30))) &&
        (((iVar6 = (&DAT_0079aed0)[iStack_10] + iStack_2c, -1 < iVar6 &&
          ((iVar6 < *(int *)((int)pvVar3 + 0x34) && (*(int *)((int)pvVar3 + 0x4c) != 0)))) &&
         (*(char *)(iVar6 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) + iStack_28)
          == '\0')))) && ((DAT_0080874d != -1 && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)))) {
      iVar6 = iStack_18 + 1;
      thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iStack_1c,iVar6,
                         &iStack_30,&iStack_34);
      pvVar2 = DAT_00802a88;
      if (((iStack_30 < 0) ||
          ((((*(int *)((int)pvVar1 + 0x30) <= iStack_30 ||
             (iVar4 = (&DAT_0079aed0)[iStack_10] + iStack_34, psVar5 = psStack_8, iVar4 < 0)) ||
            (*(int *)((int)pvVar1 + 0x34) <= iVar4)) ||
           ((*(int *)((int)pvVar1 + 0x4c) == 0 ||
            (*(char *)(iVar4 * *(int *)((int)pvVar1 + 0x30) + *(int *)((int)pvVar1 + 0x4c) +
                      iStack_30) != '\0')))))) ||
         ((DAT_0080874d == -1 ||
          ((((*(int *)((int)DAT_00802a88 + 0xf8) == 0 ||
             (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iStack_38,
                                 iVar6,&iStack_3c,&iStack_40), psVar5 = psStack_8, iStack_3c < 0))
            || ((*(int *)((int)pvVar2 + 0x30) <= iStack_3c ||
                (((iVar6 = (&DAT_0079aed0)[iStack_10] + iStack_40, iVar6 < 0 ||
                  (*(int *)((int)pvVar2 + 0x34) <= iVar6)) || (*(int *)((int)pvVar2 + 0x4c) == 0))))
               )) || (pvVar3 = DAT_00802a88,
                     *(char *)(iVar6 * *(int *)((int)pvVar2 + 0x30) + *(int *)((int)pvVar2 + 0x4c) +
                              iStack_3c) != '\0')))))) goto LAB_005f1c4c;
      goto joined_r0x005f19be;
    }
  }
LAB_005f1c4c:
  iVar6 = thunk_FUN_005f14b0(pvStack_14,*psVar5,psVar5[1],psVar5[2],*(byte *)(psVar5 + 3),
                             *(short *)((int)psVar5 + 7));
  pvVar3 = DAT_00802a88;
  if (-1 < iVar6) {
    FUN_006b0c70(*(int *)((int)pvStack_14 + 0x3c),uStack_c);
    pvVar3 = DAT_00802a88;
  }
  goto joined_r0x005f19be;
LAB_005f1c99:
  iVar6 = thunk_FUN_005f1d80(pvVar1,iStack_1c,iStack_18,iVar6);
  pvVar3 = DAT_00802a88;
  if (iVar6 == 0) goto joined_r0x005f19be;
  goto LAB_005f1c4c;
}

