
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=006226C0 @ 00622710
   -> TEST TEST EAX,EAX | 00627AA0 @ 00627CB5 -> MOV MOV dword ptr [EBP + -0x4],EAX */

int __thiscall FUN_0041d620(void *this,uint param_1)

{
  int iVar1;
  int iVar2;

  if ((g_visibleClass_00802A88 == (VisibleClassTy *)0x0) || (DAT_0080874d == -1)) {
    return 0;
  }
  iVar1 = (int)*(short *)((int)this + 0x5b);
  iVar2 = (int)*(short *)((int)this + 0x5d);
  if ((((-1 < iVar1) && (iVar1 < (int)g_visibleClass_00802A88->field_0020)) && (-1 < iVar2)) &&
     (((iVar2 < (int)g_visibleClass_00802A88->field_0024 && (param_1 < 8)) &&
      (*(int *)(&g_visibleClass_00802A88->field_0xb4 + param_1 * 4) != 0)))) {
    return (uint)(*(char *)(g_visibleClass_00802A88->field_0020 * iVar2 +
                            *(int *)(&g_visibleClass_00802A88->field_0xb4 + param_1 * 4) + iVar1) !=
                 '\0');
  }
  return 0;
}

