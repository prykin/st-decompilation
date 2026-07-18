
undefined4 __thiscall FUN_00646db0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (this == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)((int)this + 0x1c);
  }
  for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = *(undefined1 *)param_1;
  *(undefined4 *)((int)this + 0x61) = 0;
  *(undefined4 *)((int)this + 0x5d) = 0xffffffff;
  *(undefined4 *)((int)this + 0x7a) = 0xffffffff;
  *(undefined4 *)((int)this + 0x86) = 0xffffffff;
  return 0x95;
}

