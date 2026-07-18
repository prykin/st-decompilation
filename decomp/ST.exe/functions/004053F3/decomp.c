
void thunk_FUN_004e4270(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_004e4180(param_1);
  iVar2 = thunk_FUN_004e41c0(param_1);
  if (iVar1 < iVar2 + param_2) {
    iVar2 = thunk_FUN_004e41c0(param_1);
    param_2 = iVar1 - iVar2;
  }
  if (0 < param_2) {
    thunk_FUN_004e4230(param_1,param_2);
  }
  thunk_FUN_004e41c0(param_1);
  return;
}

