
bool thunk_FUN_004e5f90(int param_1,uint param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    return (*(byte *)((int)&DAT_007f5133 + ((int)(param_2 ^ 7) >> 3) + param_1 * 0xa62) >>
            ((param_2 ^ 7) & 7) & 1) != 0;
  }
  return false;
}

