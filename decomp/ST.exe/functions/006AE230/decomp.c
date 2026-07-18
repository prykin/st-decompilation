
undefined4 FUN_006ae230(uint *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_006acf50((undefined4 *)param_1[7],(param_1[4] + param_1[5]) * param_1[2]);
  if (uVar1 == 0) {
    return 0xfffffffe;
  }
  if ((*param_1 & 0x100) != 0) {
    (*(code *)param_1[6])(uVar1,param_1[4],param_1[5]);
  }
  param_1[7] = uVar1;
  param_1[4] = param_1[4] + param_1[5];
  return 0;
}

