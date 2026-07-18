
void __thiscall FUN_00639bf0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)((int)this + 0x23d) = 2;
  if (this != (void *)0x0) {
    puVar2 = (undefined4 *)((int)this + 0x231);
    for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_1 = *puVar2;
      puVar2 = puVar2 + 1;
      param_1 = param_1 + 1;
    }
    *(undefined2 *)param_1 = *(undefined2 *)puVar2;
    return;
  }
  puVar2 = (undefined4 *)0x0;
  for (iVar1 = 0x1e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  *(undefined2 *)param_1 = *(undefined2 *)puVar2;
  return;
}

