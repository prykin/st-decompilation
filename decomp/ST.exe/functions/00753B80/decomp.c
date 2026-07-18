
void FUN_00753b80(int param_1,undefined4 param_2,int param_3)

{
  if (param_3 == 0) {
    param_2 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x24);
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x40 + param_3 * 8) =
       *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x34) + *(int *)(param_1 + 0x10));
  return;
}

