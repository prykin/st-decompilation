
DWORD FUN_0064a450(void)

{
  DWORD DVar1;
  CHAR local_118 [260];
  _SYSTEMTIME local_14;
  
  if ((DAT_008118f8 == (HANDLE)0x0) && (DAT_0080734a != '\0')) {
    wsprintfA(local_118,s__sAIScript_dbg_007d29ec,&DAT_00807680);
    DAT_008118f8 = CreateFileA(local_118,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0)
    ;
    if (DAT_008118f8 == (HANDLE)0xffffffff) {
      DAT_008118f8 = (HANDLE)0x0;
      DVar1 = GetLastError();
      return DVar1;
    }
    GetLocalTime(&local_14);
    wsprintfA(local_118,s_____________Start_in___02d__02d__007d299c,local_14.wMonth,local_14.wDay,
              local_14.wYear,local_14.wHour,local_14.wMinute,local_14.wSecond);
    thunk_FUN_0064a5b0(local_118);
  }
  return 0;
}

