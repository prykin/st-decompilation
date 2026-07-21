
void __thiscall FUN_0056a840(void *this,byte param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int local_8;

  puVar1 = (undefined *)0x0;
  puVar2 = (undefined1 *)((int)this + (uint)param_1 * 8 + 0x142f);
  puVar3 = (undefined1 *)(param_1 + 0x142f + (int)this);
  local_8 = 8;
  do {
    *puVar2 = 0;
    *puVar3 = 0;
    if ((g_visibleClass_00802A88 != (VisibleClassTy *)0x0) &&
       (param_1 == *(byte *)((int)this + 0x112d))) {
      thunk_FUN_0055b7f0(g_visibleClass_00802A88,0,puVar1);
    }
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 8;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

