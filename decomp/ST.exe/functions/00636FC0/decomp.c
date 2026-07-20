
int __fastcall FUN_00636fc0(AnonShape_00636FC0_24F8974B *param_1)

{
  int iVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  int iVar4;
  int iVar5;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar4 = param_1->field_000C;
  sVar2 = (short)(iVar4 >> 0x1f);
  if (iVar4 < 0) {
    iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar2) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar2) -
                        (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
  }
  iVar5 = param_1->field_0010;
  sVar2 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                        (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
  }
  iVar1 = param_1->field_0014;
  sVar2 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    local_c = (short)(((short)(iVar1 / 200) + sVar2) - (short)((longlong)iVar1 * 0x51eb851f >> 0x3f)
                     ) + -1;
  }
  else {
    local_c = (int)(short)(((short)(iVar1 / 200) + sVar2) -
                          (short)((longlong)iVar1 * 0x51eb851f >> 0x3f));
  }
  if ((((PTR_00807598->field_0048 <= iVar4) && (iVar4 <= PTR_00807598->field_0058)) &&
      (PTR_00807598->field_0044 <= iVar5)) && (iVar5 <= PTR_00807598->field_0054)) {
    local_8 = FUN_006ddbd0();
    pVVar3 = g_visibleClass_00802A88;
    if (local_8 == 0) {
      return 0;
    }
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      return local_8;
    }
    if (DAT_0080874d == -1) {
      return local_8;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return local_8;
    }
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5,
                       &local_10,&local_14);
    if (local_c < 0) {
      return local_8;
    }
    if (4 < local_c) {
      return local_8;
    }
    if (local_10 < 0) {
      return local_8;
    }
    if ((int)pVVar3->field_0030 <= local_10) {
      return local_8;
    }
    local_14 = (&DAT_0079aed0)[local_c] + local_14;
    if (local_14 < 0) {
      return local_8;
    }
    if ((int)pVVar3->field_0034 <= local_14) {
      return local_8;
    }
    if (pVVar3->field_004C == 0) {
      return local_8;
    }
    if (*(char *)(local_14 * pVVar3->field_0030 + pVVar3->field_004C + local_10) != '\0') {
      return local_8;
    }
  }
  return 0;
}

