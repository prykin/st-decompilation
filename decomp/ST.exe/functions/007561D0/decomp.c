
void FUN_007561d0(int param_1,int param_2)

{
  if (param_2 < 1) {
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x44 + *(int *)(*(int *)(param_1 + 0xc) + 0x1c) * 8) =
         0xffffffff;
    return;
  }
  FUN_00753c80(param_1,param_2);
  return;
}

