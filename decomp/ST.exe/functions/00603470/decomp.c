
void __thiscall FUN_00603470(void *this,undefined4 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  *param_1 = uVar2;
  iVar3 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
  *(char *)(param_1 + 1) = (char)iVar3;
  *(undefined1 *)((int)param_1 + 5) = 4;
  uVar1 = *(undefined1 *)((int)this + 0x21d);
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 2) = uVar1;
  if (*(int *)((int)this + 0x36e) != 0) {
    *(undefined1 *)((int)param_1 + 7) = 1;
  }
  return;
}

