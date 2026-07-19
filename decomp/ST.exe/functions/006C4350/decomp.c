
int FUN_006c4350(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                int param_6)

{
  int exceptionCode;
  
  if (((param_6 != 0) && ((param_5 & 0x4800) == 0)) && ((*(byte *)(param_1 + 0xc) & 8) == 0)) {
    param_5 = param_5 | 0x800;
  }
  exceptionCode = FUN_006bb6c0(param_1,param_2,param_3,param_4,-1,param_5);
  if (exceptionCode != 0) {
    RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_DDX_C_ddcreats_c_007edef4,0x10);
    return exceptionCode;
  }
  return 0;
}

