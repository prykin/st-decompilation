
undefined4 FUN_006c14b0(undefined4 param_1)

{
  int exceptionCode;
  
  exceptionCode = Ordinal_2(FUN_006c13d0,param_1);
  if (exceptionCode != 0) {
    RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_SND_C_dxsnd2_cpp_007ede14,0x40e);
    return 0xffffffff;
  }
  return 0;
}

