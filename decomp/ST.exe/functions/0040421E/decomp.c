
void thunk_FUN_004e5af0(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    bVar1 = thunk_FUN_004e5f90(param_1,param_2);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      thunk_FUN_004e5a10(param_1,param_2);
      uVar2 = thunk_FUN_004e6140(param_1,param_2);
      if (CONCAT31(extraout_var_00,uVar2) < param_3) {
        *(char *)((int)&DAT_007f555b + param_1 * 0xa62 + param_2) = (char)param_3;
      }
    }
  }
  return;
}

