
void __thiscall FUN_00580780(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(*(int *)this + 0x2c))();
  *param_1 = uVar1;
  iVar2 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
  *(char *)(param_1 + 1) = (char)iVar2;
  *(undefined1 *)((int)param_1 + 5) = 4;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 7) = 1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)this + 0x21d);
  uVar1 = (**(code **)(*(int *)this + 0x2c))();
  switch(uVar1) {
  case 0xdc:
    *(undefined1 *)(param_1 + 7) = 2;
    *(undefined4 *)((int)param_1 + 0x1d) = *(undefined4 *)((int)this + 0x259);
    return;
  case 0xdd:
    *(undefined1 *)(param_1 + 7) = 0;
    *(undefined4 *)((int)param_1 + 0x1d) = *(undefined4 *)((int)this + 0x259);
    return;
  case 0xde:
    *(undefined1 *)(param_1 + 7) = 1;
    *(undefined4 *)((int)param_1 + 0x1d) = *(undefined4 *)((int)this + 0x259);
    return;
  case 0xe0:
    *(undefined1 *)(param_1 + 7) = 4;
  }
  *(undefined4 *)((int)param_1 + 0x1d) = *(undefined4 *)((int)this + 0x259);
  return;
}

