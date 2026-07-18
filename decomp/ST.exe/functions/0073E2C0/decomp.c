
undefined4 __cdecl FUN_0073e2c0(uint param_1)

{
  HANDLE hFile;
  BOOL BVar1;
  DWORD local_8;
  
  if (((param_1 < DAT_0085a2dc) &&
      ((*(byte *)((&DAT_0085a1a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) &&
     ((*(byte *)((&DAT_0085a1a0)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 8) & 1) != 0)) {
    hFile = (HANDLE)FUN_00740f30(param_1);
    BVar1 = FlushFileBuffers(hFile);
    if (BVar1 == 0) {
      local_8 = GetLastError();
    }
    else {
      local_8 = 0;
    }
    if (local_8 == 0) {
      return 0;
    }
    DAT_0085714c = local_8;
  }
  DAT_00857148 = 9;
  return 0xffffffff;
}

