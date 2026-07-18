
UINT FUN_00752030(int param_1,LPVOID param_2,UINT param_3)

{
  UINT UVar1;
  
  UVar1 = _lread(*(HFILE *)(param_1 + 0x32),param_2,param_3);
  if (UVar1 == 0xffffffff) {
    UVar1 = 0xfffffff4;
  }
  return UVar1;
}

