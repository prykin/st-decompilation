
void __thiscall FUN_004898c0(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *param_1 = *(undefined4 *)((int)this + 0x18);
  param_1[1] = *(undefined4 *)((int)this + 0x6f7);
  iVar1 = thunk_FUN_004e8030(*(int *)((int)this + 0x6f7));
  *(char *)(param_1 + 2) = (char)iVar1;
  *(undefined4 *)((int)param_1 + 9) = *(undefined4 *)((int)this + 0x6fb);
  *(undefined4 *)((int)param_1 + 0xd) = *(undefined4 *)((int)this + 0x6ff);
  *(undefined4 *)((int)param_1 + 0x11) = *(undefined4 *)((int)this + 0x703);
  *(undefined2 *)((int)param_1 + 0x15) = *(undefined2 *)((int)this + 0x707);
  *(undefined1 *)((int)param_1 + 0x17) = *(undefined1 *)((int)this + 0x709);
  return;
}

