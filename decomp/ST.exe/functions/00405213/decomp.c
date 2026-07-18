
void __fastcall thunk_FUN_0046d400(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_EDX;
  
  if (param_1[0x14a] == 4) {
    iVar1 = thunk_FUN_0048fa80((int)param_1);
    param_2 = extraout_EDX;
    if (iVar1 == 0) {
      thunk_FUN_00460360(param_1);
      return;
    }
  }
  thunk_FUN_0046cf20(param_1,param_2);
  return;
}

