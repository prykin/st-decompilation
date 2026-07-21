
void FUN_0055c590(undefined4 param_1,LPCVOID param_2,LPCVOID param_3)

{
  bool bVar1;
  LPCVOID pvVar2;
  HANDLE hFile;
  BOOL BVar3;

  if (g_fSGS_0081174C == (FSGSTy *)0x0) {
    return;
  }
  if (param_2 != (LPCVOID)0x0) {
    bVar1 = true;
    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,PTR_s_UPDATES__0079aef0);
    CreateDirectoryA((LPCSTR)&DAT_0080f33a,(LPSECURITY_ATTRIBUTES)0x0);
    wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s_007c6edc,&DAT_00807680,PTR_s_UPDATES__0079aef0,
              PTR_s_ST_INF_0079aef4);
    hFile = CreateFileA((LPCSTR)&DAT_0080f33a,0x40000000,1,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,
                        (HANDLE)0x0);
    pvVar2 = param_3;
    if (hFile != (HANDLE)0xffffffff) {
      BVar3 = WriteFile(hFile,param_2,(DWORD)param_3,(LPDWORD)&param_2,(LPOVERLAPPED)0x0);
      if ((BVar3 != 0) && (pvVar2 == param_2)) {
        bVar1 = false;
      }
      CloseHandle(hFile);
      if (!bVar1) {
        FSGSTy::CheckUpdate(g_fSGS_0081174C);
        return;
      }
    }
    FSGSTy::DoLogon(g_fSGS_0081174C);
    return;
  }
  FSGSTy::DoLogon(g_fSGS_0081174C);
  return;
}

