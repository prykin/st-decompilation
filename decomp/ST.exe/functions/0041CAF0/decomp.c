
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (11), none consume AL/AX, and every RET path defines full EAX; sites=00480600 @ 00480689
   -> PUSH PUSH EAX | 004CBAD0 @ 004CBBA4 -> TEST TEST EAX,EAX | 004D5470 @ 004D553E -> TEST TEST
   EAX,EAX | 00579350 @ 00579440 -> CMP CMP EAX,0x1 | 0057CD70 @ 0057CDB8 -> CMP CMP EAX,0x1 |
   005825C0 @ 0058260A -> CMP CMP EAX,0x1 | 00585020 @ 00585116 -> CMP CMP EAX,0x1 | 00586AF0 @
   00586BED -> CMP CMP EAX,0x1 | 0058A9E0 @ 0058AAD6 -> CMP CMP EAX,0x1 | 0058BD90 @ 0058BE98 -> CMP
   CMP EAX,0x1 | 0058E570 @ 0058E5D0 -> CMP CMP EAX,0x1 */

int __fastcall FUN_0041caf0(AnonShape_0041CAF0_1630B9E0 *param_1)

{
  void *pvVar1;
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
            (((iVar4 < g_visibleClass_00802A88->field_0020 && (-1 < iVar5)) &&
             (iVar5 < g_visibleClass_00802A88->field_0024)))) &&
           (g_visibleClass_00802A88->field_0038 != (void *)0x0)) {
          iVar5 = g_visibleClass_00802A88->field_0020 * iVar5;
          pvVar1 = (void *)((int)g_visibleClass_00802A88->field_0038 + (iVar5 + iVar4) * 2);
          if ((pvVar1 != (void *)0x0) && (*(char *)((int)pvVar1 + 1) != '\0')) {
            if (7 < param_1->field_0024) {
              return 1;
            }
            if ((&g_visibleClass_00802A88->field_0054)[param_1->field_0024] == 0) {
              return 1;
            }
            if (*(char *)((&g_visibleClass_00802A88->field_0054)[param_1->field_0024] + iVar5 +
                         iVar4) == '\0') {
              return 1;
            }
          }
        }
        return 0;
      }
    }
  }
  else if (g_visibleClass_00802A88 != (VisibleClassTy *)0x0) {
    iVar5 = (int)param_1->field_005D;
    iVar4 = (int)param_1->field_005B;
    if ((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) {
      if (((-1 < iVar4) &&
          (((iVar4 < g_visibleClass_00802A88->field_0020 && (-1 < iVar5)) &&
           (iVar5 < g_visibleClass_00802A88->field_0024)))) &&
         (g_visibleClass_00802A88->field_0038 != (void *)0x0)) {
        iVar2 = g_visibleClass_00802A88->field_0020 * iVar5;
        pvVar1 = (void *)((int)g_visibleClass_00802A88->field_0038 + (iVar2 + iVar4) * 2);
        if ((pvVar1 != (void *)0x0) && (*(char *)((int)pvVar1 + 1) != '\0')) {
          if (7 < param_1->field_0024) {
            return 1;
          }
          if ((&g_visibleClass_00802A88->field_0054)[param_1->field_0024] == 0) {
            return 1;
          }
          if (*(char *)((&g_visibleClass_00802A88->field_0054)[param_1->field_0024] + iVar2 + iVar4)
              == '\0') {
            return 1;
          }
        }
      }
      iVar2 = iVar4 + 1;
      if (((-1 < iVar2) && (iVar2 < g_visibleClass_00802A88->field_0020)) &&
         ((-1 < iVar5 &&
          ((iVar5 < g_visibleClass_00802A88->field_0024 &&
           (g_visibleClass_00802A88->field_0038 != (void *)0x0)))))) {
        iVar5 = g_visibleClass_00802A88->field_0020 * iVar5;
        pvVar1 = (void *)((int)g_visibleClass_00802A88->field_0038 + (iVar5 + iVar2) * 2);
        if ((pvVar1 != (void *)0x0) && (*(char *)((int)pvVar1 + 1) != '\0')) {
          if (7 < param_1->field_0024) {
            return 1;
          }
          if ((&g_visibleClass_00802A88->field_0054)[param_1->field_0024] == 0) {
            return 1;
          }
          if (*(char *)((&g_visibleClass_00802A88->field_0054)[param_1->field_0024] + iVar5 + iVar2)
              == '\0') {
            return 1;
          }
        }
      }
      iVar5 = param_1->field_005D + 1;
      if ((((-1 < iVar4) && (iVar4 < g_visibleClass_00802A88->field_0020)) && (-1 < iVar5)) &&
         ((iVar5 < g_visibleClass_00802A88->field_0024 &&
          (g_visibleClass_00802A88->field_0038 != (void *)0x0)))) {
        iVar3 = g_visibleClass_00802A88->field_0020 * iVar5;
        pvVar1 = (void *)((int)g_visibleClass_00802A88->field_0038 + (iVar3 + iVar4) * 2);
        if ((pvVar1 != (void *)0x0) && (*(char *)((int)pvVar1 + 1) != '\0')) {
          if (7 < param_1->field_0024) {
            return 1;
          }
          if ((&g_visibleClass_00802A88->field_0054)[param_1->field_0024] == 0) {
            return 1;
          }
          if (*(char *)((&g_visibleClass_00802A88->field_0054)[param_1->field_0024] + iVar3 + iVar4)
              == '\0') {
            return 1;
          }
        }
      }
      iVar5 = thunk_FUN_0041cda0(g_visibleClass_00802A88,iVar2,iVar5,(int)param_1->field_005F,
                                 param_1->field_0024);
      return (uint)(iVar5 != 0);
    }
  }
  return 1;
}

