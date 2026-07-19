
int FUN_006b62d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int exceptionCode;
  
  *param_1 = 0;
  puVar1 = FUN_006aac10(0xd0);
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return -2;
  }
  *puVar1 = 10;
  exceptionCode = Ordinal_2(FUN_006b6230,param_1);
  if (exceptionCode == -0x7788ffa6) {
    exceptionCode = -2;
  }
  else if (exceptionCode == 0) {
    return 0;
  }
  RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_dplay2_cpp_007edbc4,0x103);
  return exceptionCode;
}

