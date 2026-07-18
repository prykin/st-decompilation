
void FUN_006c4a00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = param_3;
    param_1[1] = param_4;
    param_1[0xc] = param_2;
  }
  return;
}

