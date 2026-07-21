
int FUN_005f3940(int param_1,int param_2,int param_3)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;

  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    iVar4 = (short)(((short)(param_1 / 0xc9) + sVar1) -
                   (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar4 = (int)(short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    iVar5 = (short)(((short)(param_2 / 0xc9) + sVar1) -
                   (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_3 >> 0x1f);
  if (param_3 < 0) {
    param_2 = (short)(((short)(param_3 / 200) + sVar1) -
                     (short)((longlong)param_3 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    param_2 = (int)(short)(((short)(param_3 / 200) + sVar1) -
                          (short)((longlong)param_3 * 0x51eb851f >> 0x3f));
  }
  if ((((PTR_00807598->field_0048 <= iVar4) && (iVar4 <= PTR_00807598->field_0058)) &&
      (PTR_00807598->field_0044 <= iVar5)) && (iVar5 <= PTR_00807598->field_0054)) {
    iVar3 = FUN_006ddbd0();
    pVVar2 = g_visibleClass_00802A88;
    if (iVar3 == 0) {
      return 0;
    }
    if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
      return iVar3;
    }
    if (DAT_0080874d == -1) {
      return iVar3;
    }
    if (g_visibleClass_00802A88->field_00F8 == 0) {
      return iVar3;
    }
    thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar4,iVar5,
                       &param_3,&local_8);
    if (param_2 < 0) {
      return iVar3;
    }
    if (4 < param_2) {
      return iVar3;
    }
    if (param_3 < 0) {
      return iVar3;
    }
    if ((int)pVVar2->field_0030 <= param_3) {
      return iVar3;
    }
    local_8 = (&DAT_0079aed0)[param_2] + local_8;
    if (local_8 < 0) {
      return iVar3;
    }
    if ((int)pVVar2->field_0034 <= local_8) {
      return iVar3;
    }
    if (pVVar2->field_004C == 0) {
      return iVar3;
    }
    if (*(char *)(local_8 * pVVar2->field_0030 + pVVar2->field_004C + param_3) != '\0') {
      return iVar3;
    }
  }
  return 0;
}

