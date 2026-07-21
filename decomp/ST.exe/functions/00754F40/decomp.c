
undefined4 FUN_00754f40(LPCSTR param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  undefined4 uVar2;
  int local_24;
  uint local_20;

  hFile = CreateFileA(param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  uVar2 = 0;
  BVar1 = ReadFile(hFile,&local_24,0x20,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
  if ((((BVar1 != 0) && (param_1 == (LPCSTR)0x20)) && (local_24 == DAT_007f2c38)) &&
     ((local_20 & 0xff00) == 0x100)) {
    uVar2 = 1;
  }
  CloseHandle(hFile);
  return uVar2;
}

