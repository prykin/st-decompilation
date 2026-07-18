
void FUN_0075f740(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x58);
  *(undefined4 **)((int)param_1 + 0x1ba) = puVar1;
  *puVar1 = FUN_0075fba0;
  puVar1[2] = &DAT_007602b0;
  puVar1[3] = &LAB_007602c0;
  puVar1[0x11] = 0;
  puVar1[0xd] = 0;
  if (4 < param_1[0x1c]) {
    FUN_006a5e40(0x36,DAT_007ed77c,0x7f2ea0,0x34a);
  }
  if (0x100 < param_1[0x16]) {
    FUN_006a5e40(0x38,DAT_007ed77c,0x7f2ea0,0x34d);
  }
  FUN_0075f7d0(param_1);
  FUN_0075fa00(param_1);
  if (param_1[0x14] == 2) {
    FUN_0075fb50(param_1);
  }
  return;
}

