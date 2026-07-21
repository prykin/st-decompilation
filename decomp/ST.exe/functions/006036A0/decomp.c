
undefined4 __cdecl FUN_006036a0(short param_1,short param_2,short param_3,int param_4)

{
  int iVar1;

  iVar1 = thunk_FUN_004961b0(param_1,param_2,param_3);
  if (iVar1 != 0) {
    if (param_4 == 0) {
      return 1;
    }
    iVar1 = thunk_FUN_004961b0(param_1,param_2 + 1,param_3);
    if (iVar1 != 0) {
      iVar1 = thunk_FUN_004961b0(param_1 + 1,param_2,param_3);
      if ((iVar1 != 0) && (iVar1 = thunk_FUN_004961b0(param_1 + 1,param_2 + 1,param_3), iVar1 != 0))
      {
        return 1;
      }
    }
  }
  return 0;
}

