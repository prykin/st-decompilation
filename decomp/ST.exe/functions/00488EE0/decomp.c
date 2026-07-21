
void __thiscall FUN_00488ee0(void *this,undefined1 *param_1)

{
  int iVar1;

  *param_1 = 1;
  param_1[1] = 1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)((int)this + 0x6f7);
  iVar1 = thunk_FUN_004e8030(*(int *)((int)this + 0x6f7));
  param_1[6] = (char)iVar1;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)((int)this + 0x18);
  return;
}

