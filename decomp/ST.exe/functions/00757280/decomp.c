
void FUN_00757280(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1[4] == 0) {
    uVar1 = (**(code **)*param_1)(param_1,1,0x1c);
    param_1[4] = uVar1;
  }
  *(undefined **)(param_1[4] + 8) = &DAT_007572f0;
  *(code **)(param_1[4] + 0xc) = FUN_00757300;
  *(code **)(param_1[4] + 0x10) = FUN_00757330;
  *(code **)(param_1[4] + 0x14) = FUN_00757cd0;
  *(undefined **)(param_1[4] + 0x18) = &DAT_00757350;
  *(undefined4 *)(param_1[4] + 4) = 0x7fffffff;
  *(undefined4 *)param_1[4] = param_2;
  return;
}

