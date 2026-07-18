
void FUN_004e6210(int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < param_2)) && (param_2 < 0x9b)) {
    *(int *)((int)&DAT_007f5147 + param_1 * 0xa62 + param_2 * 4) =
         *(int *)((int)&DAT_007f5147 + param_1 * 0xa62 + param_2 * 4) + -1;
  }
  return;
}

