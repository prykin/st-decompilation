
void FUN_006b23e0(int param_1,uint *param_2)

{
  if (((byte)*param_2 & 0x21) == 0x21) {
    *param_2 = *param_2 | 6;
    *(undefined4 *)(param_1 + 0x1b4) = 1;
  }
  return;
}

