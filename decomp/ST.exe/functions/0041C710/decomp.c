
undefined4 __fastcall FUN_0041c710(int param_1)

{
  char cVar1;
  VisibleClassTy *pVVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int local_c;
  int local_8;

  pVVar2 = g_visibleClass_00802A88;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      return 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = (int)*(short *)(param_1 + 0x5f);
    if (DAT_0080874d == -1) {
      return 1;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                       (int)*(short *)(param_1 + 0x5b),(int)*(short *)(param_1 + 0x5d),&local_8,
                       &local_c);
    if (iVar4 < 0) {
      return 1;
    }
    if (4 < iVar4) {
      return 1;
    }
    if (local_8 < 0) {
      return 1;
    }
    if ((int)pVVar2->field_0030 <= local_8) {
      return 1;
    }
    local_c = (&DAT_0079aed0)[iVar4] + local_c;
    if (local_c < 0) {
      return 1;
    }
    if ((int)pVVar2->field_0034 <= local_c) {
      return 1;
    }
    if (pVVar2->field_004C == 0) {
      return 1;
    }
    cVar1 = *(char *)(local_c * pVVar2->field_0030 + pVVar2->field_004C + local_8);
  }
  else {
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      return 0;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = (int)*(short *)(param_1 + 0x5f);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                              (int)*(short *)(param_1 + 0x5b),(int)*(short *)(param_1 + 0x5d),
                              &local_c,&local_8), pVVar3 = g_visibleClass_00802A88, iVar4 < 0)) ||
         ((4 < iVar4 || (local_c < 0)))) || ((int)pVVar2->field_0030 <= local_c)) ||
       (((iVar4 = (&DAT_0079aed0)[iVar4] + local_8, iVar4 < 0 || ((int)pVVar2->field_0034 <= iVar4))
        || ((pVVar2->field_004C == 0 ||
            (*(char *)(iVar4 * pVVar2->field_0030 + pVVar2->field_004C + local_c) != '\0')))))) {
      return 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = (int)*(short *)(param_1 + 0x5f);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
        (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                            *(short *)(param_1 + 0x5b) + 1,(int)*(short *)(param_1 + 0x5d),&local_c,
                            &local_8), pVVar2 = g_visibleClass_00802A88, iVar4 < 0)) ||
       (((4 < iVar4 || (local_c < 0)) ||
        (((((int)pVVar3->field_0030 <= local_c ||
           ((iVar4 = (&DAT_0079aed0)[iVar4] + local_8, iVar4 < 0 ||
            ((int)pVVar3->field_0034 <= iVar4)))) || (pVVar3->field_004C == 0)) ||
         (*(char *)(iVar4 * pVVar3->field_0030 + pVVar3->field_004C + local_c) != '\0')))))) {
      return 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = (int)*(short *)(param_1 + 0x5f);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
         (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                             (int)*(short *)(param_1 + 0x5b),*(short *)(param_1 + 0x5d) + 1,&local_c
                             ,&local_8), pVVar3 = g_visibleClass_00802A88, iVar4 < 0)) ||
        (((4 < iVar4 || (local_c < 0)) ||
         (((int)pVVar2->field_0030 <= local_c ||
          ((iVar4 = (&DAT_0079aed0)[iVar4] + local_8, iVar4 < 0 ||
           ((int)pVVar2->field_0034 <= iVar4)))))))) ||
       ((pVVar2->field_004C == 0 ||
        (*(char *)(iVar4 * pVVar2->field_0030 + pVVar2->field_004C + local_c) != '\0')))) {
      return 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = (int)*(short *)(param_1 + 0x5f);
    if (DAT_0080874d == -1) {
      return 1;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return 1;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                       *(short *)(param_1 + 0x5b) + 1,*(short *)(param_1 + 0x5d) + 1,&local_c,
                       &local_8);
    if (iVar4 < 0) {
      return 1;
    }
    if (4 < iVar4) {
      return 1;
    }
    if (local_c < 0) {
      return 1;
    }
    if ((int)pVVar3->field_0030 <= local_c) {
      return 1;
    }
    local_8 = (&DAT_0079aed0)[iVar4] + local_8;
    if (local_8 < 0) {
      return 1;
    }
    if ((int)pVVar3->field_0034 <= local_8) {
      return 1;
    }
    if (pVVar3->field_004C == 0) {
      return 1;
    }
    cVar1 = *(char *)(local_8 * pVVar3->field_0030 + pVVar3->field_004C + local_c);
  }
  if (cVar1 == '\0') {
    return 0;
  }
  return 1;
}

