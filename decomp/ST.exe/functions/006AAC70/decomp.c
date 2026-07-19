
int FUN_006aac70(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  iVar1 = thunk_FUN_006a3be0(param_1);
  if (iVar1 == 0) {
    RaiseInternalException(-2,DAT_007ed77c,s_E__DKW_LIB_C_memalloc_c_007ed764,0x16);
    iVar1 = 0;
  }
  return iVar1;
}

