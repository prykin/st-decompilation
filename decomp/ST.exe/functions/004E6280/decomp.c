
undefined4 FUN_004e6280(int param_1,uint param_2)

{
  int iVar1;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    iVar1 = thunk_FUN_004e5910(param_1,param_2);
    if (iVar1 != 0) {
      thunk_FUN_004e5d50(param_1,param_2);
      return 1;
    }
    return 0;
  }
  return 0;
}

