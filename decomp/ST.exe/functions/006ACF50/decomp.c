
int FUN_006acf50(undefined4 *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  iVar1 = thunk_FUN_006a4130(param_1,param_2);
  if (iVar1 == 0) {
    RaiseInternalException(-2,DAT_007ed77c,s_E__DKW_LIB_C_memreall_c_007ed780,0x16);
    iVar1 = 0;
  }
  return iVar1;
}

