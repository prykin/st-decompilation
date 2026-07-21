
/* [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004B9FA0 -> 005F23D0 @ 004BA77A | 004D32C0 -> 005F23D0 @ 004D3487 */

undefined4 __thiscall
FUN_005f23d0(void *this,int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6)

{
  VisibleClassTy *pVVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  undefined4 local_8;

  iVar4 = param_2;
  iVar5 = param_1;
  local_8 = 0;
  if ((((param_6 == 3) || (param_3 != 0)) || (param_5 == 0x39)) ||
     ((param_5 == 0x4f || (*(int *)(&DAT_007918bc + param_6 * 4 + param_5 * 0xc) != 0)))) {
    return 0;
  }
  local_c = this;
  iVar3 = thunk_FUN_005f13c0(this,param_1,param_2,0,(char)param_4);
  pVVar1 = g_visibleClass_00802A88;
  if (iVar3 == 0) {
    return local_8;
  }
  if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
cf_common_exit_005F26AF:
    iVar5 = thunk_FUN_005f15f0(local_c,(short)iVar5,(short)param_2,0,(char)param_4,0,'\0');
    if (-1 < iVar5) {
      local_8 = 1;
    }
  }
  else {
    if ((char)param_4 == '\x01') {
      if ((((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
            ((thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,
                                 iVar4,&param_6,&param_3), pVVar2 = g_visibleClass_00802A88,
             -1 < param_6 &&
             (((param_6 < (int)pVVar1->field_0030 && (iVar4 = param_3 + DAT_0079aed0, -1 < iVar4))
              && (iVar4 < (int)pVVar1->field_0034)))))) &&
           ((pVVar1->field_004C != 0 &&
            (*(char *)(iVar4 * pVVar1->field_0030 + pVVar1->field_004C + param_6) == '\0')))) &&
          (DAT_0080874d != -1)) &&
         ((((g_visibleClass_00802A88->field_00F8 != 0 &&
            (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                                iVar5 + 1,param_2,&param_5,&local_10),
            pVVar1 = g_visibleClass_00802A88, -1 < param_5)) &&
           ((param_5 < (int)pVVar2->field_0030 &&
            (((local_10 = local_10 + DAT_0079aed0, -1 < local_10 &&
              (local_10 < (int)pVVar2->field_0034)) && (pVVar2->field_004C != 0)))))) &&
          (((*(char *)(local_10 * pVVar2->field_0030 + pVVar2->field_004C + param_5) == '\0' &&
            (DAT_0080874d != -1)) && (g_visibleClass_00802A88->field_00F8 != 0)))))) {
        iVar4 = param_2 + 1;
        thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,iVar4,
                           &local_14,&local_18);
        iVar3 = param_1;
        pVVar2 = g_visibleClass_00802A88;
        if (((((-1 < local_14) && (local_14 < (int)pVVar1->field_0030)) &&
             ((local_18 = local_18 + DAT_0079aed0, iVar5 = iVar3, -1 < local_18 &&
              ((((local_18 < (int)pVVar1->field_0034 && (pVVar1->field_004C != 0)) &&
                (*(char *)(local_18 * pVVar1->field_0030 + pVVar1->field_004C + local_14) == '\0'))
               && ((DAT_0080874d != -1 && (g_visibleClass_00802A88->field_00F8 != 0)))))))) &&
            ((thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                                 param_1 + 1,iVar4,&param_1,&local_1c), -1 < param_1 &&
             ((param_1 < (int)pVVar2->field_0030 &&
              (local_1c = DAT_0079aed0 + local_1c, -1 < local_1c)))))) &&
           ((local_1c < (int)pVVar2->field_0034 &&
            ((pVVar2->field_004C != 0 &&
             (*(char *)(local_1c * pVVar2->field_0030 + pVVar2->field_004C + param_1) == '\0'))))))
        goto cf_common_exit_005F26AF;
      }
    }
    else {
      iVar4 = thunk_FUN_005f1d80(g_visibleClass_00802A88,iVar5,iVar4,0);
      if (iVar4 == 0) goto cf_common_exit_005F26AF;
    }
    iVar5 = thunk_FUN_005f14b0(local_c,(short)iVar5,(short)param_2,0,(byte)param_4,0);
    if (-1 < iVar5) {
      return 1;
    }
  }
  return local_8;
}

