
void FUN_007576c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,0,0x1c);
  *(undefined4 **)((int)param_1 + 0x1a2) = puVar1;
  *puVar1 = FUN_007579c0;
  puVar1[1] = FUN_00757c90;
  puVar1[2] = FUN_00757710;
  puVar1[3] = FUN_007579a0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 1;
  return;
}

