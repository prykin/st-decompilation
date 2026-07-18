
undefined4 thunk_FUN_00496140(short param_1,short param_2,short param_3)

{
  int iVar1;
  
  iVar1 = (int)DAT_007fb278 * (int)param_2 + (int)DAT_007fb27e * (int)param_3 + (int)param_1;
  if (*(short *)(DAT_007fb280 + iVar1 * 2) == 0) {
    return 0xffffffff;
  }
  *(undefined2 *)(DAT_007fb280 + iVar1 * 2) = 0;
  return 0;
}

