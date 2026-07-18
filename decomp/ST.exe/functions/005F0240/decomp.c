
void __thiscall FUN_005f0240(void *this,undefined1 *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  *param_1 = 4;
  param_1[1] = 1;
  uVar2 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 2) = uVar2;
  uVar1 = (**(code **)(*(int *)this + 0xc))();
  param_1[6] = uVar1;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)((int)this + 0x18);
  return;
}

