
bool __fastcall FUN_0041caf0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
      iVar5 = (int)*(short *)(param_1 + 0x5d);
      iVar4 = (int)*(short *)(param_1 + 0x5b);
      if ((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) {
        if (((-1 < iVar4) &&
            (((iVar4 < (int)g_visibleClass_00802A88->field_0020 && (-1 < iVar5)) &&
             (iVar5 < (int)g_visibleClass_00802A88->field_0024)))) &&
           (g_visibleClass_00802A88->field_0038 != 0)) {
          iVar5 = g_visibleClass_00802A88->field_0020 * iVar5;
          iVar1 = g_visibleClass_00802A88->field_0038 + (iVar5 + iVar4) * 2;
          if ((iVar1 != 0) && (*(char *)(iVar1 + 1) != '\0')) {
            if (7 < *(uint *)(param_1 + 0x24)) {
              return true;
            }
            if (*(int *)(&g_visibleClass_00802A88->field_0x54 + *(uint *)(param_1 + 0x24) * 4) == 0)
            {
              return true;
            }
            if (*(char *)(*(int *)(&g_visibleClass_00802A88->field_0x54 +
                                  *(uint *)(param_1 + 0x24) * 4) + iVar5 + iVar4) == '\0') {
              return true;
            }
          }
        }
        return false;
      }
    }
  }
  else if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    iVar5 = (int)*(short *)(param_1 + 0x5d);
    iVar4 = (int)*(short *)(param_1 + 0x5b);
    if ((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) {
      if (((-1 < iVar4) &&
          (((iVar4 < (int)g_visibleClass_00802A88->field_0020 && (-1 < iVar5)) &&
           (iVar5 < (int)g_visibleClass_00802A88->field_0024)))) &&
         (g_visibleClass_00802A88->field_0038 != 0)) {
        iVar2 = g_visibleClass_00802A88->field_0020 * iVar5;
        iVar1 = g_visibleClass_00802A88->field_0038 + (iVar2 + iVar4) * 2;
        if ((iVar1 != 0) && (*(char *)(iVar1 + 1) != '\0')) {
          if (7 < *(uint *)(param_1 + 0x24)) {
            return true;
          }
          if (*(int *)(&g_visibleClass_00802A88->field_0x54 + *(uint *)(param_1 + 0x24) * 4) == 0) {
            return true;
          }
          if (*(char *)(*(int *)(&g_visibleClass_00802A88->field_0x54 +
                                *(uint *)(param_1 + 0x24) * 4) + iVar2 + iVar4) == '\0') {
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
          if (7 < *(uint *)(param_1 + 0x24)) {
            return true;
          }
          if (*(int *)(&g_visibleClass_00802A88->field_0x54 + *(uint *)(param_1 + 0x24) * 4) == 0) {
            return true;
          }
          if (*(char *)(*(int *)(&g_visibleClass_00802A88->field_0x54 +
                                *(uint *)(param_1 + 0x24) * 4) + iVar5 + iVar1) == '\0') {
            return true;
          }
        }
      }
      iVar5 = *(short *)(param_1 + 0x5d) + 1;
      if ((((-1 < iVar4) && (iVar4 < (int)g_visibleClass_00802A88->field_0020)) && (-1 < iVar5)) &&
         ((iVar5 < (int)g_visibleClass_00802A88->field_0024 &&
          (g_visibleClass_00802A88->field_0038 != 0)))) {
        iVar3 = g_visibleClass_00802A88->field_0020 * iVar5;
        iVar2 = g_visibleClass_00802A88->field_0038 + (iVar3 + iVar4) * 2;
        if ((iVar2 != 0) && (*(char *)(iVar2 + 1) != '\0')) {
          if (7 < *(uint *)(param_1 + 0x24)) {
            return true;
          }
          if (*(int *)(&g_visibleClass_00802A88->field_0x54 + *(uint *)(param_1 + 0x24) * 4) == 0) {
            return true;
          }
          if (*(char *)(*(int *)(&g_visibleClass_00802A88->field_0x54 +
                                *(uint *)(param_1 + 0x24) * 4) + iVar3 + iVar4) == '\0') {
            return true;
          }
        }
      }
      iVar5 = thunk_FUN_0041cda0(g_visibleClass_00802A88,iVar1,iVar5,(int)*(short *)(param_1 + 0x5f)
                                 ,*(uint *)(param_1 + 0x24));
      return iVar5 != 0;
    }
  }
  return true;
}

