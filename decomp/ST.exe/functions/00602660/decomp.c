
undefined4 __thiscall FUN_00602660(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = (undefined4 *)((int)this + 0x231);
  for (iVar1 = 0x5f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = *(undefined2 *)param_1;
  *(undefined4 *)((int)this + 0x39b) = 0xffffffff;
  if (*(int *)((int)this + 0x241) == 1) {
    *(undefined2 *)((int)this + 0x47) = *(undefined2 *)((int)this + 0x255);
    *(undefined2 *)((int)this + 0x49) = *(undefined2 *)((int)this + 599);
    *(undefined2 *)((int)this + 0x4b) = *(undefined2 *)((int)this + 0x259);
  }
  *(undefined2 *)((int)this + 0x41) = *(undefined2 *)((int)this + 0x37b);
  *(undefined2 *)((int)this + 0x43) = *(undefined2 *)((int)this + 0x37f);
  *(undefined2 *)((int)this + 0x45) = *(undefined2 *)((int)this + 899);
  return 0x17e;
}

