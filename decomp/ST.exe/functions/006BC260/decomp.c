
int * FUN_006bc260(LPCSTR param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  undefined4 unaff_ESI;
  DWORD DVar2;
  void *unaff_EDI;
  undefined4 local_64;
  undefined4 local_60 [16];
  short local_20 [8];
  DWORD local_10;
  int *local_c;
  HANDLE local_8;
  
  local_c = (int *)0x0;
  DVar2 = 0xffffff03;
  hFile = CreateFileA(param_1,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  local_8 = hFile;
  if (hFile != (HANDLE)0xffffffff) {
    BVar1 = ReadFile(hFile,local_20,0xe,&local_10,(LPOVERLAPPED)0x0);
    if (BVar1 != 0) {
      if ((local_10 == 0xe) && (local_20[0] == 0x4d42)) {
        local_64 = DAT_00858df8;
        DAT_00858df8 = &local_64;
        DVar2 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
        hFile = local_8;
        if (DVar2 == 0) {
          local_c = FUN_006d3ac0(local_8);
          DVar2 = 0;
          DAT_00858df8 = (undefined4 *)local_64;
        }
        else {
          DAT_00858df8 = (undefined4 *)local_64;
        }
      }
      else {
        DVar2 = 0xfffffffb;
      }
    }
  }
  if (DVar2 == 0xffffff03) {
    DVar2 = GetLastError();
  }
  CloseHandle(hFile);
  if (DVar2 != 0) {
    FUN_006a5e40(DVar2,DAT_007ed77c,0x7edc74,0x2c);
    return (int *)0x0;
  }
  return local_c;
}

