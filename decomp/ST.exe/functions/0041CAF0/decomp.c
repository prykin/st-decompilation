
bool __fastcall FUN_0041caf0(AnonShape_0041CAF0_1630B9E0 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1->field_002C == 0) {
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      iVar5 = (int)param_1->field_005D;
      iVar4 = (int)param_1->field_005B;
      if ((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) {
        if (((-1 < iVar4) &&
            (((iVar4 < (int)g_visibleClass_00802A88->field_0020 && (-1 < iVar5)) &&
             (iVar5 < (int)g_visibleClass_00802A88->field_0024)))) &&
           (g_visibleClass_00802A88->field_0038 != 0)) {
          iVar5 = g_visibleClass_00802A88->field_0020 * iVar5;
          iVar1 = g_visibleClass_00802A88->field_0038 + (iVar5 + iVar4) * 2;
          if ((iVar1 != 0) && (*(char *)(iVar1 + 1) != '\0')) {
            if (7 < param_1->field_0024) {
              return true;
            }
            if (*(int *)(&g_visibleClass_00802A88->field_0x54 + param_1->field_0024 * 4) == 0) {
              return true;
            }
            if (*(char *)(*(int *)(&g_visibleClass_00802A88->field_0x54 + param_1->field_0024 * 4) +
                          iVar5 + iVar4) == '\0') {
              return true;
            }
          }
        }
        return false;
      }
    }
  }
  else if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    iVar5 = (int)param_1->field_005D;
    iVar4 = (int)param_1->field_005B;
    if ((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) {
      if (((-1 < iVar4) &&
          (((iVar4 < (int)g_visibleClass_00802A88->field_0020 && (-1 < iVar5)) &&
           (iVar5 < (int)g_visibleClass_00802A88->field_0024)))) &&
         (g_visibleClass_00802A88->field_0038 != 0)) {
        iVar2 = g_visibleClass_00802A88->field_0020 * iVar5;
        iVar1 = g_visibleClass_00802A88->field_0038 + (iVar2 + iVar4) * 2;
        if ((iVar1 != 0) && (*(char *)(iVar1 + 1) != '\0')) {
          if (7 < param_1->field_0024) {
            return true;
          }
          if (*(int *)(&g_visibleClass_00802A88->field_0x54 + param_1->field_0024 * 4) == 0) {
            return true;
          }
          if (*(char *)(*(int *)(&g_visibleClass_00802A88->field_0x54 + param_1->field_0024 * 4) +
                        iVar2 + iVar4) == '\0') {
            return true;
          }
        }
      }
      iVar1 = iVar4 + 1;
      if (((-1 < iVar1) && (iVar1 < (int)g_visibleClass_00802A88->field_0020)) &&
         ((-1 < iVar5 &&
          ((iVar5 < (int)g_visibleClass_00802A88->field_0024 &&
           (g_visibleClass_00802A88->field_0038 != 0)))))) {
        iVar5 = g_visibleClass_00802A88->field_0020 * iVar5;
        iVar2 = g_visibleClass_00802A88->field_0038 + (iVar5 + iVar1) * 2;
        if ((iVar2 != 0) && (*(char *)(iVar2 + 1) != '\0')) {
          if (7 < param_1->field_0024) {
            return true;
          }
          if (*(int *)(&g_visibleClass_00802A88->field_0x54 + param_1->field_0024 * 4) == 0) {
            return true;
          }
          if (*(char *)(*(int *)(&g_visibleClass_00802A88->field_0x54 + param_1->field_0024 * 4) +
                        iVar5 + iVar1) == '\0') {
            return true;
          }
        }
      }
      iVar5 = param_1->field_005D + 1;
      if ((((-1 < iVar4) && (iVar4 < (int)g_visibleClass_00802A88->field_0020)) && (-1 < iVar5)) &&
         ((iVar5 < (int)g_visibleClass_00802A88->field_0024 &&
          (g_visibleClass_00802A88->field_0038 != 0)))) {
        iVar3 = g_visibleClass_00802A88->field_0020 * iVar5;
        iVar2 = g_visibleClass_00802A88->field_0038 + (iVar3 + iVar4) * 2;
        if ((iVar2 != 0) && (*(char *)(iVar2 + 1) != '\0')) {
          if (7 < param_1->field_0024) {
            return true;
          }
          if (*(int *)(&g_visibleClass_00802A88->field_0x54 + param_1->field_0024 * 4) == 0) {
            return true;
          }
          if (*(char *)(*(int *)(&g_visibleClass_00802A88->field_0x54 + param_1->field_0024 * 4) +
                        iVar3 + iVar4) == '\0') {
            return true;
          }
        }
      }
      iVar5 = thunk_FUN_0041cda0(g_visibleClass_00802A88,iVar1,iVar5,(int)param_1->field_005F,
                                 param_1->field_0024);
      return iVar5 != 0;
    }
  }
  return true;
}

