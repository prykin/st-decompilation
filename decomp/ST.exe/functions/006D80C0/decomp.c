
uint FUN_006d80c0(int param_1)

{
  uint exceptionCode;
  
  if (*(char *)(param_1 + 0x17) != '\0') {
    return 0;
  }
  exceptionCode = FUN_006c6be0(param_1);
  if (exceptionCode != 0xffffffff) {
    if ((exceptionCode == 0) && (exceptionCode = FUN_006c6e30(param_1), exceptionCode == 0)) {
      *(undefined1 *)(param_1 + 0x17) = 1;
      return 0;
    }
    RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_GPC_C_gifimhdg_c_007ee2d0,0x20);
    return exceptionCode;
  }
  return 0xffffffff;
}

