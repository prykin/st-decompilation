
void FUN_006ba7b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x10);
    param_4[1] = *(undefined4 *)(param_1 + 0x14);
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}

