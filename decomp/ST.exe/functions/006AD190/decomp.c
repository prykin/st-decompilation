
undefined4 FUN_006ad190(undefined4 param_1,LPCSTR param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  
  if (DAT_00854a98 == 0) {
    Library::MSVCRT::FUN_0072ece0(0x6ad250);
    DAT_00854a98 = 1;
  }
  DAT_00854eac = param_1;
  if (DAT_00854eb4 != (int *)0x0) {
    Library::MSVCRT::FUN_0072ea90(DAT_00854eb4);
    DAT_00854eb4 = (int *)0x0;
  }
  if ((param_2 != (LPCSTR)0x0) && (*param_2 != '\0')) {
    pcVar2 = &DAT_007ed7b0;
    if (param_3 == 0) {
      pcVar2 = &DAT_007ed7ac;
    }
    iVar1 = Library::MSVCRT::FUN_0072ea70(param_2,pcVar2);
    if (iVar1 == 0) {
      return DAT_00857148;
    }
    GetLocalTime((LPSYSTEMTIME)&DAT_00854a88);
    DAT_00854eb4 = (int *)iVar1;
    DAT_007ed79c = 1;
    DAT_00854ebc = 0;
    return 0;
  }
  DAT_00854ebc = 1;
  return 0;
}

