
DWORD __cdecl FUN_00742d50(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  HANDLE hFile;
  int iVar2;
  ulong local_8;
  
  if ((param_1 < DAT_0085a2dc) &&
     (iVar2 = (int)param_1 >> 5,
     (*(byte *)((&DAT_0085a1a0)[iVar2] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    hFile = (HANDLE)FUN_00740f30(param_1);
    if (hFile == (HANDLE)0xffffffff) {
      DAT_00857148 = 9;
      DVar1 = 0xffffffff;
    }
    else {
      DVar1 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
      if (DVar1 == 0xffffffff) {
        local_8 = GetLastError();
      }
      else {
        local_8 = 0;
      }
      if (local_8 == 0) {
        *(byte *)((&DAT_0085a1a0)[iVar2] + 4 + (param_1 & 0x1f) * 8) =
             *(byte *)((&DAT_0085a1a0)[iVar2] + 4 + (param_1 & 0x1f) * 8) & 0xfd;
      }
      else {
        __dosmaperr(local_8);
        DVar1 = 0xffffffff;
      }
    }
  }
  else {
    DAT_00857148 = 9;
    DAT_0085714c = 0;
    DVar1 = 0xffffffff;
  }
  return DVar1;
}

