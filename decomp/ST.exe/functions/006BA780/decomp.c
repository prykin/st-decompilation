
void FUN_006ba780(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x1000;
    return;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffefff;
  return;
}

