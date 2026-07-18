
void __thiscall FUN_0056a8d0(void *this,uint param_1,byte param_2,char param_3)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)(param_1 & 0xff);
  *(char *)((int)this + (int)puVar1 * 8 + param_2 + 0x142f) = param_3;
  if ((DAT_00802a88 != (void *)0x0) && (param_2 == *(byte *)((int)this + 0x112d))) {
    if (param_3 == '\0') {
      thunk_FUN_0055b7f0(DAT_00802a88,0,puVar1);
      return;
    }
    if (*(char *)((int)this + 0x1474) != '\0') {
      thunk_FUN_0055b7f0(DAT_00802a88,1,puVar1);
    }
  }
  return;
}

