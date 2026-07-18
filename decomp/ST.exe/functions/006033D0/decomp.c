
void __thiscall FUN_006033d0(void *this,undefined1 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)((int)this + 0x36e) != 0) {
    *param_1 = 4;
    param_1[1] = *(undefined1 *)((int)this + 0x21d);
    param_1[2] = 1;
    uVar1 = (**(code **)(*(int *)this + 0x2c))();
    *(undefined4 *)(param_1 + 3) = uVar1;
    iVar2 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
    param_1[7] = (char)iVar2;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 0x18);
  }
  _strncpy(param_1 + 0xc,(char *)((int)this + 0x25b),0xe);
  param_1[0x1b] = 100;
  if (*(int *)((int)this + 0x36e) != 0) {
    param_1[0x1d] = 1;
  }
  return;
}

