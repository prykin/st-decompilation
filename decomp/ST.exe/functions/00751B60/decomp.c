
int FUN_00751b60(int param_1,ushort *param_2,undefined4 *param_3)

{
  int exceptionCode;
  
  exceptionCode = FUN_00754390(param_1,param_2,param_3,&param_3);
  if ((exceptionCode != -4) && (exceptionCode != 0)) {
    RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DB_C_btkget_c_007f2b18,0x11);
  }
  return exceptionCode;
}

