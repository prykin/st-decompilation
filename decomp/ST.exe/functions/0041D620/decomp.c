
bool __thiscall FUN_0041d620(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  
  if ((g_visibleClass_00802A88 == (VisibleClassTy *)0x0) || (DAT_0080874d == -1)) {
    return false;
  }
  iVar1 = (int)*(short *)((int)this + 0x5b);
  iVar2 = (int)*(short *)((int)this + 0x5d);
  if ((((-1 < iVar1) && (iVar1 < (int)g_visibleClass_00802A88->field_0020)) && (-1 < iVar2)) &&
     (((iVar2 < (int)g_visibleClass_00802A88->field_0024 && (param_1 < 8)) &&
      (*(int *)(&g_visibleClass_00802A88->field_0xb4 + param_1 * 4) != 0)))) {
    return *(char *)(g_visibleClass_00802A88->field_0020 * iVar2 +
                     *(int *)(&g_visibleClass_00802A88->field_0xb4 + param_1 * 4) + iVar1) != '\0';
  }
  return false;
}

