
uint FUN_00753d90(uint param_1,ushort *param_2,undefined4 param_3)

{
  int iVar1;
  uint exceptionCode;
  
  iVar1 = FUN_00755970(param_1,param_2,0);
  if ((iVar1 == 0) || (*(short *)(*(int *)(param_1 + 0xc) + 0x2e) != 0)) {
    exceptionCode = FUN_00755560(param_1,param_2,param_3,0xffffffff);
    if (exceptionCode == 0) {
      return 0;
    }
  }
  else {
    exceptionCode = 0xffffffc3;
  }
  RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DB_C_btkput_c_007f2c70,0x1a);
  return exceptionCode;
}

