
void thunk_FUN_004e5b80(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    bVar1 = thunk_FUN_004e5f90(param_1,param_2);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      if ((*(char *)((int)&DAT_00798fd8 + param_2) == '\x01') || (param_3 < 2)) {
        thunk_FUN_004e5a80(param_1,param_2);
        thunk_FUN_004e5dc0(param_1,param_2);
      }
      else if (param_3 + -1 < (int)(uint)*(byte *)((int)&DAT_007f555b + param_1 * 0xa62 + param_2))
      {
        *(char *)((int)&DAT_007f555b + param_1 * 0xa62 + param_2) = (char)param_3 + -1;
        return;
      }
    }
  }
  return;
}

