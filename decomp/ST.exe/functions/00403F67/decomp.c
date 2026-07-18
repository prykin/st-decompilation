
void __thiscall thunk_FUN_0056a840(void *this,byte param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iStack_8;
  
  puVar1 = (undefined *)0x0;
  puVar2 = (undefined1 *)((int)this + (uint)param_1 * 8 + 0x142f);
  puVar3 = (undefined1 *)(param_1 + 0x142f + (int)this);
  iStack_8 = 8;
  do {
    *puVar2 = 0;
    *puVar3 = 0;
    if ((DAT_00802a88 != (void *)0x0) && (param_1 == *(byte *)((int)this + 0x112d))) {
      thunk_FUN_0055b7f0(DAT_00802a88,0,puVar1);
    }
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 8;
    iStack_8 = iStack_8 + -1;
  } while (iStack_8 != 0);
  return;
}

