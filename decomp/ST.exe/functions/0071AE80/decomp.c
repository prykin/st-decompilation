
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\Ourlib\mfany.cpp
   Diagnostic line evidence: 72 | 73 | 74 | 78 | 79 | 85 | 90 (metadata/report site, not the
   function definition)
   [STSourceProvenanceApplier end] */

undefined4 * __cdecl ReadAllFile(LPCSTR param_1,DWORD *param_2)

{
  code *pcVar1;
  int errorCode;
  HANDLE hFile;
  DWORD nNumberOfBytesToRead;
  BOOL BVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  HANDLE local_10;
  DWORD local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_10 = (HANDLE)0xffffffff;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    hFile = CreateFileA(param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    local_10 = hFile;
    if (hFile == (HANDLE)0xffffffff) {
      RaiseInternalException(-10,DAT_007ed77c,s_E__Ourlib_mfany_cpp_007f08c8,0x48);
    }
    local_c = SetFilePointer(hFile,0,(PLONG)0x0,0);
    if (local_c == 0xffffffff) {
      RaiseInternalException(-9,DAT_007ed77c,s_E__Ourlib_mfany_cpp_007f08c8,0x49);
    }
    nNumberOfBytesToRead = GetFileSize(hFile,(LPDWORD)0x0);
    if (nNumberOfBytesToRead == 0xffffffff) {
      RaiseInternalException(-9,DAT_007ed77c,s_E__Ourlib_mfany_cpp_007f08c8,0x4a);
    }
    local_8 = Library::DKW::LIB::FUN_006aac10(nNumberOfBytesToRead);
    BVar2 = ReadFile(hFile,local_8,nNumberOfBytesToRead,&local_c,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      RaiseInternalException(-0xc,DAT_007ed77c,s_E__Ourlib_mfany_cpp_007f08c8,0x4e);
    }
    if (local_c != nNumberOfBytesToRead) {
      RaiseInternalException(-0xc,DAT_007ed77c,s_E__Ourlib_mfany_cpp_007f08c8,0x4f);
    }
    CloseHandle(hFile);
    g_currentExceptionFrame = local_54.previous;
    if (param_2 != (DWORD *)0x0) {
      *param_2 = nNumberOfBytesToRead;
    }
    return local_8;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar3 = ReportDebugMessage(s_E__Ourlib_mfany_cpp_007f08c8,0x55,0,errorCode,&DAT_007a4ccc,
                             s_ReadAllFile_007f08f4);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (undefined4 *)(*pcVar1)();
    return puVar4;
  }
  if (local_10 != (HANDLE)0xffffffff) {
    CloseHandle(local_10);
  }
  if (local_8 != (undefined4 *)0x0) {
    FUN_006ab060(&local_8);
  }
  RaiseInternalException(errorCode,0,s_E__Ourlib_mfany_cpp_007f08c8,0x5a);
  return (undefined4 *)0x0;
}

