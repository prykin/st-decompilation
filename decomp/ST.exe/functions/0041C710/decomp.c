
undefined4 __fastcall FUN_0041c710(AnonShape_0041C710_C4D46939 *param_1)

{
  byte bVar1;
  VisibleClassTy *pVVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int local_c;
  int local_8;

  pVVar2 = g_visibleClass_00802A88;
  if (param_1->field_002C == 0) {
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      return 1;
    }
    iVar4 = (int)param_1->field_005F;
    if (DAT_0080874d == -1) {
      return 1;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return 1;
    }
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                       (int)param_1->field_005B,(int)param_1->field_005D,&local_8,&local_c);
    if (iVar4 < 0) {
      return 1;
    }
    if (4 < iVar4) {
      return 1;
    }
    if (local_8 < 0) {
      return 1;
    }
    if (pVVar2->field_0030 <= local_8) {
      return 1;
    }
    local_c = g_centeredOffsets5[iVar4] + local_c;
    if (local_c < 0) {
      return 1;
    }
    if (pVVar2->field_0034 <= local_c) {
      return 1;
    }
    if (pVVar2->field_004C == (byte *)0x0) {
      return 1;
    }
    bVar1 = pVVar2->field_004C[local_8 + local_c * pVVar2->field_0030];
  }
  else {
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      return 0;
    }
    iVar4 = (int)param_1->field_005F;
    if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                              (int)param_1->field_005B,(int)param_1->field_005D,&local_c,&local_8),
          pVVar3 = g_visibleClass_00802A88, iVar4 < 0)) || ((4 < iVar4 || (local_c < 0)))) ||
        (pVVar2->field_0030 <= local_c)) ||
       (((iVar4 = g_centeredOffsets5[iVar4] + local_8, iVar4 < 0 || (pVVar2->field_0034 <= iVar4))
        || ((pVVar2->field_004C == (byte *)0x0 ||
            (pVVar2->field_004C[local_c + iVar4 * pVVar2->field_0030] != 0)))))) {
      return 1;
    }
    iVar4 = (int)param_1->field_005F;
    if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
        (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                            param_1->field_005B + 1,(int)param_1->field_005D,&local_c,&local_8),
        pVVar2 = g_visibleClass_00802A88, iVar4 < 0)) ||
       (((4 < iVar4 || (local_c < 0)) ||
        ((((pVVar3->field_0030 <= local_c ||
           ((iVar4 = g_centeredOffsets5[iVar4] + local_8, iVar4 < 0 || (pVVar3->field_0034 <= iVar4)
            ))) || (pVVar3->field_004C == (byte *)0x0)) ||
         (pVVar3->field_004C[local_c + iVar4 * pVVar3->field_0030] != 0)))))) {
      return 1;
    }
    iVar4 = (int)param_1->field_005F;
    if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
         (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                             (int)param_1->field_005B,param_1->field_005D + 1,&local_c,&local_8),
         pVVar3 = g_visibleClass_00802A88, iVar4 < 0)) ||
        (((4 < iVar4 || (local_c < 0)) ||
         ((pVVar2->field_0030 <= local_c ||
          ((iVar4 = g_centeredOffsets5[iVar4] + local_8, iVar4 < 0 || (pVVar2->field_0034 <= iVar4))
          )))))) ||
       ((pVVar2->field_004C == (byte *)0x0 ||
        (pVVar2->field_004C[local_c + iVar4 * pVVar2->field_0030] != 0)))) {
      return 1;
    }
    iVar4 = (int)param_1->field_005F;
    if (DAT_0080874d == -1) {
      return 1;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return 1;
    }
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                       param_1->field_005B + 1,param_1->field_005D + 1,&local_c,&local_8);
    if (iVar4 < 0) {
      return 1;
    }
    if (4 < iVar4) {
      return 1;
    }
    if (local_c < 0) {
      return 1;
    }
    if (pVVar3->field_0030 <= local_c) {
      return 1;
    }
    local_8 = g_centeredOffsets5[iVar4] + local_8;
    if (local_8 < 0) {
      return 1;
    }
    if (pVVar3->field_0034 <= local_8) {
      return 1;
    }
    if (pVVar3->field_004C == (byte *)0x0) {
      return 1;
    }
    bVar1 = pVVar3->field_004C[local_c + local_8 * pVVar3->field_0030];
  }
  if (bVar1 == 0) {
    return 0;
  }
  return 1;
}

