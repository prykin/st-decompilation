
void FUN_006c3fc0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  if ((*(uint *)(param_1 + 4) & 2) == 0) {
    *(undefined4 *)(param_1 + 0x20) = param_4;
    *(undefined4 *)(param_1 + 0x24) = param_5;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x4000000;
  FUN_006c3d80(param_1);
  return;
}

