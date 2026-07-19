
undefined4 FUN_006d4b30(int param_1,int param_2)

{
  undefined4 extraout_EAX;
  int exceptionCode;
  
  if ((*(uint *)(param_1 + 8) & 0x100000) != 0) {
    RaiseInternalException(-0x30,DAT_007ed77c,s_E__DKW_FMM_C_fmap_c_007ee22c,0x1d0);
    return extraout_EAX;
  }
  exceptionCode = -0x51;
  if (*(int *)(param_1 + 0x34) != 0) {
    if (param_2 + 4U <= *(uint *)(param_1 + 0x38)) {
      return *(undefined4 *)(*(int *)(param_1 + 0x34) + param_2);
    }
    exceptionCode = -0xe;
  }
  RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_FMM_C_fmap_c_007ee22c,0x1e1);
  return 0;
}

