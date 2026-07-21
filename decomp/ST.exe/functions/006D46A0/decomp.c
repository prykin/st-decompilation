
void FUN_006d46a0(undefined4 *param_1,DWORD param_2)

{
  DWORD dwErrCode;
  DWORD DVar1;

  if (param_1 != (undefined4 *)0x0) {
    dwErrCode = GetLastError();
    if ((param_1[2] & 0x100000) == 0) {
      if ((LPCVOID)param_1[0xd] != (LPCVOID)0x0) {
        UnmapViewOfFile((LPCVOID)param_1[0xd]);
      }
      if ((param_1[2] & 0x800000) != 0) {
        if (param_2 == 0) {
          param_2 = param_1[6];
        }
        DVar1 = SetFilePointer((HANDLE)param_1[3],param_2,(PLONG)0x0,0);
        if (DVar1 == param_2) {
          SetEndOfFile((HANDLE)param_1[3]);
        }
      }
    }
    if ((HANDLE)param_1[3] != (HANDLE)0xffffffff) {
      CloseHandle((HANDLE)param_1[3]);
    }
    FUN_006a5e90((short *)param_1[1]);
    if ((param_1[2] & 0x400000) != 0) {
      FUN_006a5e90((short *)param_1);
    }
    SetLastError(dwErrCode);
  }
  return;
}

