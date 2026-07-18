
void __thiscall FUN_005f0150(void *this,undefined4 *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  
  uVar3 = (**(code **)(*(int *)this + 0x2c))();
  *param_1 = uVar3;
  uVar2 = (**(code **)(*(int *)this + 0xc))();
  *(undefined1 *)(param_1 + 1) = uVar2;
  *(undefined1 *)((int)param_1 + 5) = 4;
  *(undefined1 *)((int)param_1 + 6) = 1;
  iVar1 = *(int *)((int)this + 0x23a);
  if (((iVar1 != 5) && (iVar1 != 6)) && (iVar1 != 7)) {
    *(undefined1 *)((int)param_1 + 7) = 1;
  }
  iVar1 = *(int *)((int)this + 0x2b1);
  if (((iVar1 != 0) && (iVar1 != 1)) && (iVar1 != 2)) {
    uVar2 = (**(code **)(*(int *)this + 0x134))();
    *(undefined1 *)(param_1 + 7) = uVar2;
    uVar3 = (**(code **)(*(int *)this + 0x13c))();
    *(undefined4 *)((int)param_1 + 0x21) = uVar3;
    return;
  }
  uVar2 = (**(code **)(*(int *)this + 0x134))();
  *(undefined1 *)(param_1 + 7) = uVar2;
  uVar3 = (**(code **)(*(int *)this + 0x138))();
  *(undefined4 *)((int)param_1 + 0x1d) = uVar3;
  uVar3 = (**(code **)(*(int *)this + 0x13c))();
  *(undefined4 *)((int)param_1 + 0x21) = uVar3;
  return;
}

