
void __fastcall FUN_005f19a0(void *param_1)

{
  VisibleClassTy *pVVar1;
  VisibleClassTy *pVVar2;
  VisibleClassTy *pVVar3;
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
  pVVar3 = g_visibleClass_00802A88;
joined_r0x005f19be:
  do {
    pVVar1 = pVVar3;
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
    pVVar3 = (VisibleClassTy *)0x0;
  } while (pVVar1 == (VisibleClassTy *)0x0);
  local_10 = iVar6;
  local_8 = psVar5;
  if ((char)psVar5[3] != '\x01') goto LAB_005f1c99;
  if (((((DAT_0080874d != -1) && (pVVar1->field_00F8 != 0)) &&
       (thunk_FUN_00558c00(pVVar1,pVVar1->field_010C,local_1c,local_18,&local_20,&local_24),
       pVVar3 = g_visibleClass_00802A88, -1 < iVar6)) &&
      (((iVar6 < 5 && (-1 < local_20)) &&
       ((local_20 < (int)pVVar1->field_0030 &&
        ((iVar6 = (&DAT_0079aed0)[iVar6] + local_24, -1 < iVar6 && (iVar6 < (int)pVVar1->field_0034)
         ))))))) &&
     ((pVVar1->field_004C != 0 &&
      (((*(char *)(iVar6 * pVVar1->field_0030 + pVVar1->field_004C + local_20) == '\0' &&
        (DAT_0080874d != -1)) && (g_visibleClass_00802A88->field_00F8 != 0)))))) {
    local_38 = local_1c + 1;
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_38,local_18
                       ,&local_28,&local_2c);
    pVVar1 = g_visibleClass_00802A88;
    if ((((-1 < local_28) && (local_28 < (int)pVVar3->field_0030)) &&
        (((iVar6 = (&DAT_0079aed0)[local_10] + local_2c, -1 < iVar6 &&
          ((iVar6 < (int)pVVar3->field_0034 && (pVVar3->field_004C != 0)))) &&
         (*(char *)(iVar6 * pVVar3->field_0030 + pVVar3->field_004C + local_28) == '\0')))) &&
       ((DAT_0080874d != -1 && (g_visibleClass_00802A88->field_00F8 != 0)))) {
      iVar6 = local_18 + 1;
      thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_1c,iVar6,
                         &local_30,&local_34);
      pVVar2 = g_visibleClass_00802A88;
      if (((local_30 < 0) ||
          (((((int)pVVar1->field_0030 <= local_30 ||
             (iVar4 = (&DAT_0079aed0)[local_10] + local_34, psVar5 = local_8, iVar4 < 0)) ||
            ((int)pVVar1->field_0034 <= iVar4)) ||
           ((pVVar1->field_004C == 0 ||
            (*(char *)(iVar4 * pVVar1->field_0030 + pVVar1->field_004C + local_30) != '\0')))))) ||
         ((DAT_0080874d == -1 ||
          ((((g_visibleClass_00802A88->field_00F8 == 0 ||
             (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                                 local_38,iVar6,&local_3c,&local_40), psVar5 = local_8, local_3c < 0
             )) || (((int)pVVar2->field_0030 <= local_3c ||
                    (((iVar6 = (&DAT_0079aed0)[local_10] + local_40, iVar6 < 0 ||
                      ((int)pVVar2->field_0034 <= iVar6)) || (pVVar2->field_004C == 0)))))) ||
           (pVVar3 = g_visibleClass_00802A88,
           *(char *)(iVar6 * pVVar2->field_0030 + pVVar2->field_004C + local_3c) != '\0'))))))
      goto LAB_005f1c4c;
      goto joined_r0x005f19be;
    }
  }
LAB_005f1c4c:
  iVar6 = thunk_FUN_005f14b0(local_14,*psVar5,psVar5[1],psVar5[2],*(byte *)(psVar5 + 3),
                             *(short *)((int)psVar5 + 7));
  pVVar3 = g_visibleClass_00802A88;
  if (-1 < iVar6) {
    FUN_006b0c70(*(int *)((int)local_14 + 0x3c),local_c);
    pVVar3 = g_visibleClass_00802A88;
  }
  goto joined_r0x005f19be;
LAB_005f1c99:
  iVar6 = thunk_FUN_005f1d80(pVVar1,local_1c,local_18,iVar6);
  pVVar3 = g_visibleClass_00802A88;
  if (iVar6 == 0) goto joined_r0x005f19be;
  goto LAB_005f1c4c;
}

