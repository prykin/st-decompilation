
int FUN_00753ea0(uint param_1,ushort *param_2,undefined4 *param_3)

{
  int exceptionCode;
  
  exceptionCode = FUN_00754390(param_1,param_2,param_3,&param_3);
  if (exceptionCode == 0) {
    exceptionCode = FUN_00755bc0(param_1,(int)param_3);
    if (exceptionCode == 0) {
      FUN_00755970(param_1,param_2,0);
      return 0;
    }
  }
  if ((exceptionCode != -4) && (exceptionCode != 0)) {
    RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DB_C_btkdel_c_007f2ca0,0x1a);
  }
  return exceptionCode;
}

