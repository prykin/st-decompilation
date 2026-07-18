
undefined4 __fastcall FUN_006372e0(int *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_006367d0(param_1);
  if (iVar1 != 0) {
    return 1;
  }
  if (param_1[10] == 0) {
    iVar1 = thunk_FUN_00636fc0((int)param_1);
    param_1[10] = iVar1;
    if (iVar1 != 0) {
      thunk_FUN_00636750((int)param_1);
    }
    if (param_1[10] == 0) {
      return 0;
    }
  }
  thunk_FUN_00637180((int)param_1);
  return 0;
}

