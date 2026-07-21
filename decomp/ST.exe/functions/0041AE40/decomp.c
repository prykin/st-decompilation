
void __thiscall FUN_0041ae40(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  puVar2 = param_1;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = *(undefined4 *)((int)this + 0x18);
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}

