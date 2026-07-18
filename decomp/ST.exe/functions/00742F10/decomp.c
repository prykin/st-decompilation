
int __cdecl FUN_00742f10(LPSTR param_1,uint param_2)

{
  int iVar1;
  BOOL local_c [2];
  
  if (param_1 == (LPSTR)0x0) {
    iVar1 = 0;
  }
  else if (DAT_00857210 == 0) {
    if ((param_2 & 0xffff) < 0x100) {
      *param_1 = (CHAR)param_2;
      iVar1 = 1;
    }
    else {
      DAT_00857148 = 0x2a;
      iVar1 = -1;
    }
  }
  else {
    local_c[0] = 0;
    iVar1 = WideCharToMultiByte(DAT_00857220,0x220,(LPCWSTR)&param_2,1,param_1,DAT_007f148c,
                                (LPCSTR)0x0,local_c);
    if ((iVar1 == 0) || (local_c[0] != 0)) {
      DAT_00857148 = 0x2a;
      iVar1 = -1;
    }
  }
  return iVar1;
}

