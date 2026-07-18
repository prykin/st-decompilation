
undefined4 __cdecl thunk_FUN_006036a0(short param_1,short param_2,short param_3,int param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  
  bVar1 = thunk_FUN_004961b0(param_1,param_2,param_3);
  if (CONCAT31(extraout_var,bVar1) != 0) {
    if (param_4 == 0) {
      return 1;
    }
    bVar1 = thunk_FUN_004961b0(param_1,param_2 + 1,param_3);
    if (CONCAT31(extraout_var_00,bVar1) != 0) {
      bVar1 = thunk_FUN_004961b0(param_1 + 1,param_2,param_3);
      if ((CONCAT31(extraout_var_01,bVar1) != 0) &&
         (bVar1 = thunk_FUN_004961b0(param_1 + 1,param_2 + 1,param_3),
         CONCAT31(extraout_var_02,bVar1) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

