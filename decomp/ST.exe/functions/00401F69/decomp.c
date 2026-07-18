
DWORD thunk_FUN_0064a450(void)

{
  DWORD DVar1;
  CHAR aCStack_118 [260];
  _SYSTEMTIME _Stack_14;
  
  if ((DAT_008118f8 == (HANDLE)0x0) && (DAT_0080734a != '\0')) {
    wsprintfA(aCStack_118,s__sAIScript_dbg_007d29ec,&DAT_00807680);
    DAT_008118f8 = CreateFileA(aCStack_118,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                               (HANDLE)0x0);
    if (DAT_008118f8 == (HANDLE)0xffffffff) {
      DAT_008118f8 = (HANDLE)0x0;
      DVar1 = GetLastError();
      return DVar1;
    }
    GetLocalTime(&_Stack_14);
    wsprintfA(aCStack_118,s_____________Start_in___02d__02d__007d299c,_Stack_14.wMonth,
              _Stack_14.wDay,_Stack_14.wYear,_Stack_14.wHour,_Stack_14.wMinute,_Stack_14.wSecond);
    thunk_FUN_0064a5b0(aCStack_118);
  }
  return 0;
}

