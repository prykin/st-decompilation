
void __thiscall FUN_0056a960(void *this,uint param_1,byte param_2)

{
  char cVar1;
  undefined *puVar2;
  
  puVar2 = (undefined *)(param_1 & 0xff);
  cVar1 = '\x01' - *(char *)((int)this + (int)puVar2 * 8 + param_2 + 0x142f);
  *(char *)((int)this + (int)puVar2 * 8 + param_2 + 0x142f) = cVar1;
  if ((g_visibleClass_00802A88 != (VisibleClassTy *)0x0) &&
     (param_2 == *(byte *)((int)this + 0x112d))) {
    if (cVar1 == '\0') {
      thunk_FUN_0055b7f0(g_visibleClass_00802A88,0,puVar2);
      return;
    }
    if (*(char *)((int)this + 0x1474) != '\0') {
      thunk_FUN_0055b7f0(g_visibleClass_00802A88,1,puVar2);
    }
  }
  return;
}

