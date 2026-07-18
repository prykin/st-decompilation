
void __thiscall FUN_005808a0(void *this,undefined1 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 4;
  param_1[1] = 0;
  uVar1 = (**(code **)(*(int *)this + 0x2c))();
  *(undefined4 *)(param_1 + 2) = uVar1;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)((int)this + 0x18);
  return;
}

