
int * FUN_006bc260(LPCSTR param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  undefined4 unaff_ESI;
  DWORD exceptionCode;
  void *unaff_EDI;
  InternalExceptionFrame local_64;
  short local_20 [8];
  DWORD local_10;
  int *local_c;
  HANDLE local_8;
  
  local_c = (int *)0x0;
  exceptionCode = 0xffffff03;
  hFile = CreateFileA(param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  local_8 = hFile;
  if (hFile != (HANDLE)0xffffffff) {
    BVar1 = ReadFile(hFile,local_20,0xe,&local_10,(LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      if ((local_10 == 0xe) && (local_20[0] == 0x4d42)) {
        local_64.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_64;
        exceptionCode = __setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
        hFile = local_8;
        if (exceptionCode == 0) {
          local_c = FUN_006d3ac0(local_8);
          exceptionCode = 0;
          g_currentExceptionFrame = local_64.previous;
        }
        else {
          g_currentExceptionFrame = local_64.previous;
        }
      }
      else {
        exceptionCode = 0xfffffffb;
      }
    }
  }
  if (exceptionCode == 0xffffff03) {
    exceptionCode = GetLastError();
  }
  CloseHandle(hFile);
  if (exceptionCode != 0) {
    RaiseInternalException(exceptionCode,DAT_007ed77c,s_E__DKW_WGR_C_dibload_c_007edc74,0x2c);
    return (int *)0x0;
  }
  return local_c;
}

