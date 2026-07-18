
void FUN_006c3f80(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if ((*(uint *)(param_1 + 4) & 2) == 0) {
    *(undefined4 *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_1 + 0xc) = param_3;
    *(undefined4 *)(param_1 + 0x10) = param_4;
    *(undefined4 *)(param_1 + 0x14) = param_5;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x8000000;
    FUN_006c3d80(param_1);
  }
  return;
}

