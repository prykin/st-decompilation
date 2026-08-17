
DWORD FUN_0064a450(void)

{
  DWORD DVar1;
  DWORD local_118 [65];
  _SYSTEMTIME local_14;

  if ((HANDLE_008118f8 == (HANDLE)0x0) && (DAT_0080734a != '\0')) {
    /* ST_CALLSITE[0064A48B]: CALL ESI */
    wsprintfA((LPSTR)local_118,"%sAIScript.dbg",&CHAR_00h_00807680);
    /* ST_CALLSITE[0064A4A9]: CALL dword ptr [0x0085bc80] */
    HANDLE_008118f8 =
         CreateFileA((LPCSTR)local_118,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    if (HANDLE_008118f8 == (HANDLE)0xffffffff) {
      HANDLE_008118f8 = (HANDLE)0x0;
      /* ST_CALLSITE[0064A4C3]: CALL dword ptr [0x0085bbcc] */
      DVar1 = GetLastError();
      return DVar1;
    }
    /* ST_CALLSITE[0064A4D2]: CALL dword ptr [0x0085bbac] */
    GetLocalTime(&local_14);
    /* ST_CALLSITE[0064A51E]: CALL ESI */
    wsprintfA((LPSTR)local_118,"\r\n=========== Start in [%02d/%02d/%02d, %02d:%02d:%02d] ========",local_14.wMonth,
              local_14.wDay,local_14.wYear,local_14.wHour,local_14.wMinute,local_14.wSecond);
    thunk_FUN_0064a5b0(local_118);
  }
  return 0;
}

