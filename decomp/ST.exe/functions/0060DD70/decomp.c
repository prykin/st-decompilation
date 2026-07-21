
int __fastcall FUN_0060dd70(AnonShape_0060DD70_701DD710 *param_1)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar5 = param_1->field_01E9;
  sVar1 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar1) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar1) -
                        (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
  }
  iVar6 = param_1->field_01ED;
  sVar1 = (short)(iVar6 >> 0x1f);
  if (iVar6 < 0) {
    iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar1) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar1) -
                        (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
  }
  iVar4 = param_1->field_01F1;
  sVar1 = (short)(iVar4 >> 0x1f);
  if (iVar4 < 0) {
    local_8 = (short)(((short)(iVar4 / 200) + sVar1) - (short)((longlong)iVar4 * 0x51eb851f >> 0x3f)
                     ) + -1;
  }
  else {
    local_8 = (int)(short)(((short)(iVar4 / 200) + sVar1) -
                          (short)((longlong)iVar4 * 0x51eb851f >> 0x3f));
  }
  iVar4 = param_1->field_024C;
  if ((((PTR_00807598->field_0048 <= iVar4 + iVar5) && (iVar5 - iVar4 <= PTR_00807598->field_0058))
      && (PTR_00807598->field_0044 <= iVar4 + iVar6)) && (iVar6 - iVar4 <= PTR_00807598->field_0054)
     ) {
    local_14 = FUN_006ddbd0();
    pVVar2 = g_visibleClass_00802A88;
    if (local_14 == 0) {
      return 0;
    }
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      return local_14;
    }
    iVar4 = param_1->field_024C;
    local_18 = iVar6 - iVar4;
    if (local_18 < 0) {
      local_18 = 0;
    }
    local_c = iVar5 - iVar4;
    if (local_c < 0) {
      local_c = 0;
    }
    local_1c = iVar4 + 1 + iVar6;
    if (g_worldGrid.sizeY < local_1c) {
      local_1c = (int)g_worldGrid.sizeY;
    }
    local_10 = iVar4 + 1 + iVar5;
    if (g_worldGrid.sizeX < local_10) {
      local_10 = (int)g_worldGrid.sizeX;
    }
    if (DAT_0080874d == -1) {
      return local_14;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return local_14;
    }
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar5,iVar6,
                       &local_20,&local_24);
    iVar6 = local_8;
    iVar5 = local_18;
    pVVar3 = g_visibleClass_00802A88;
    if (local_8 < 0) {
      return local_14;
    }
    if (4 < local_8) {
      return local_14;
    }
    if (local_20 < 0) {
      return local_14;
    }
    if (pVVar2->field_0030 <= local_20) {
      return local_14;
    }
    iVar4 = (&DAT_0079aed0)[local_8] + local_24;
    if (iVar4 < 0) {
      return local_14;
    }
    if (pVVar2->field_0034 <= iVar4) {
      return local_14;
    }
    if (pVVar2->field_004C == 0) {
      return local_14;
    }
    if (*(char *)(iVar4 * pVVar2->field_0030 + pVVar2->field_004C + local_20) != '\0') {
      return local_14;
    }
    if (DAT_0080874d == -1) {
      return local_14;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return local_14;
    }
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_c,local_18,
                       &local_24,&local_20);
    pVVar2 = g_visibleClass_00802A88;
    if (local_24 < 0) {
      return local_14;
    }
    if (pVVar3->field_0030 <= local_24) {
      return local_14;
    }
    iVar6 = (&DAT_0079aed0)[iVar6] + local_20;
    if (iVar6 < 0) {
      return local_14;
    }
    if (pVVar3->field_0034 <= iVar6) {
      return local_14;
    }
    if (pVVar3->field_004C == 0) {
      return local_14;
    }
    if (*(char *)(iVar6 * pVVar3->field_0030 + pVVar3->field_004C + local_24) != '\0') {
      return local_14;
    }
    if (DAT_0080874d == -1) {
      return local_14;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return local_14;
    }
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_10,iVar5,
                       &local_24,&local_20);
    iVar6 = local_8;
    iVar5 = local_1c;
    pVVar3 = g_visibleClass_00802A88;
    if (local_24 < 0) {
      return local_14;
    }
    if (pVVar2->field_0030 <= local_24) {
      return local_14;
    }
    iVar4 = (&DAT_0079aed0)[local_8] + local_20;
    if (iVar4 < 0) {
      return local_14;
    }
    if (pVVar2->field_0034 <= iVar4) {
      return local_14;
    }
    if (pVVar2->field_004C == 0) {
      return local_14;
    }
    if (*(char *)(iVar4 * pVVar2->field_0030 + pVVar2->field_004C + local_24) != '\0') {
      return local_14;
    }
    if (DAT_0080874d == -1) {
      return local_14;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return local_14;
    }
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_c,local_1c,
                       &local_24,&local_20);
    if (local_24 < 0) {
      return local_14;
    }
    if (pVVar3->field_0030 <= local_24) {
      return local_14;
    }
    local_20 = (&DAT_0079aed0)[iVar6] + local_20;
    if (local_20 < 0) {
      return local_14;
    }
    if (pVVar3->field_0034 <= local_20) {
      return local_14;
    }
    if (pVVar3->field_004C == 0) {
      return local_14;
    }
    if (*(char *)(local_20 * pVVar3->field_0030 + pVVar3->field_004C + local_24) != '\0') {
      return local_14;
    }
    iVar5 = thunk_FUN_005f1d80(g_visibleClass_00802A88,local_10,iVar5,local_8);
    if (iVar5 == 1) {
      return local_14;
    }
  }
  return 0;
}

