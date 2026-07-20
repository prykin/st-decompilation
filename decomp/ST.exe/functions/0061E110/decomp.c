
undefined4 __fastcall FUN_0061e110(int param_1)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  int local_8;
  
  sVar1 = *(short *)(param_1 + 0x30);
  local_c = 0;
  if (sVar1 < 0) {
    local_8 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                     (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_8 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                          (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = *(short *)(param_1 + 0x32);
  if (sVar1 < 0) {
    iVar5 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                   (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar5 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                        (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = *(short *)(param_1 + 0x34);
  if (sVar1 < 0) {
    local_10 = (short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                      (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    local_10 = (int)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                           (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
  }
  sVar1 = *(short *)(param_1 + 0x36);
  if (sVar1 < 0) {
    iVar6 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                   (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar6 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                        (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = *(short *)(param_1 + 0x38);
  if (sVar1 < 0) {
    iVar7 = (short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                   (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar7 = (int)(short)((sVar1 / 0xc9 + (sVar1 >> 0xf)) -
                        (short)((longlong)(int)sVar1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = *(short *)(param_1 + 0x3a);
  if (sVar1 < 0) {
    local_18 = (short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                      (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    local_18 = (int)(short)((sVar1 / 200 + (sVar1 >> 0xf)) -
                           (short)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f));
  }
  local_14 = iVar6;
  if (((((((*(int *)(DAT_00807598 + 0x48) <= local_8 + 1) &&
          (local_8 + -1 <= *(int *)(DAT_00807598 + 0x58))) &&
         (*(int *)(DAT_00807598 + 0x44) <= iVar5 + 1)) &&
        ((iVar5 + -1 <= *(int *)(DAT_00807598 + 0x54) && (iVar4 = FUN_006ddbd0(), iVar4 != 0)))) ||
       (((*(int *)(DAT_00807598 + 0x48) <= iVar6 + 1 &&
         ((iVar6 + -1 <= *(int *)(DAT_00807598 + 0x58) &&
          (*(int *)(DAT_00807598 + 0x44) <= iVar7 + 1)))) &&
        ((iVar7 + -1 <= *(int *)(DAT_00807598 + 0x54) && (iVar6 = FUN_006ddbd0(), iVar6 != 0))))))
      && (((((pVVar2 = g_visibleClass_00802A88, local_c = 1,
             g_visibleClass_00802A88 != (VisibleClassTy *)0x0 && (DAT_0080874d != -1)) &&
            (g_visibleClass_00802A88->field_00F8 != 0)) &&
           (((thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_8
                                 ,iVar5,&local_8,&local_1c), pVVar3 = g_visibleClass_00802A88,
             -1 < local_10 && (local_10 < 5)) &&
            ((-1 < local_8 &&
             ((local_8 < (int)pVVar2->field_0030 &&
              (iVar5 = (&DAT_0079aed0)[local_10] + local_1c, -1 < iVar5)))))))) &&
          (iVar5 < (int)pVVar2->field_0034)))) &&
     (((((((pVVar2->field_004C != 0 &&
           (*(char *)(iVar5 * pVVar2->field_0030 + pVVar2->field_004C + local_8) == '\0')) &&
          (DAT_0080874d != -1)) &&
         ((g_visibleClass_00802A88->field_00F8 != 0 &&
          (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_14,
                              iVar7,&local_1c,&local_14), -1 < local_18)))) &&
        ((local_18 < 5 && ((-1 < local_1c && (local_1c < (int)pVVar3->field_0030)))))) &&
       (local_14 = (&DAT_0079aed0)[local_18] + local_14, -1 < local_14)) &&
      (((local_14 < (int)pVVar3->field_0034 && (pVVar3->field_004C != 0)) &&
       (*(char *)(local_14 * pVVar3->field_0030 + pVVar3->field_004C + local_1c) == '\0')))))) {
    local_c = 0;
  }
  return local_c;
}

