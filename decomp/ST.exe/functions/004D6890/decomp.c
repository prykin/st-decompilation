
void __thiscall FUN_004d6890(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_1;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  iVar2 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
  *(char *)((int)param_1 + 7) = (char)iVar2;
  *(undefined1 *)param_1 = 1;
  uVar1 = *(undefined1 *)((int)this + 0x21d);
  *(undefined1 *)((int)param_1 + 2) = 2;
  *(undefined1 *)((int)param_1 + 1) = uVar1;
  uVar1 = (**(code **)(*(int *)this + 0x7c))();
  *(undefined1 *)((int)param_1 + 0x1b) = uVar1;
  *(undefined4 *)((int)param_1 + 3) = *(undefined4 *)((int)this + 0x259);
  param_1[2] = *(undefined4 *)((int)this + 0x18);
  *(undefined2 *)((int)param_1 + 0x1e) = 0;
  *(undefined2 *)((int)param_1 + 0x26) = 0xffff;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0xffff;
  *(undefined1 *)((int)param_1 + (0x2e - *(int *)((int)this + 0x265))) = 1;
  return;
}

