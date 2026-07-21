
void __thiscall FUN_0062aef0(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;

  uVar1 = *(undefined4 *)((int)this + 0xce);
  puVar3 = this;
  for (iVar2 = 0x35; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = *(undefined2 *)param_1;
  *(undefined1 *)((int)puVar3 + 2) = *(undefined1 *)((int)param_1 + 2);
  *(undefined4 *)((int)this + 0xce) = uVar1;
  *(undefined4 *)((int)this + 0xca) = 0;
  *(undefined4 *)((int)this + 0xc6) = 0xffffffff;
  return;
}

