
DWORD FUN_006d4740(int param_1,int param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  LPVOID pvVar3;
  HANDLE hFileMappingObject;
  
  if ((*(uint *)(param_1 + 8) & 0x100000) != 0) {
    DVar1 = FUN_006a5e40(-0x30,DAT_007ed77c,0x7ee22c,0x119);
    return DVar1;
  }
  hFileMappingObject = (HANDLE)0x0;
  BVar2 = UnmapViewOfFile(*(LPCVOID *)(param_1 + 0x34));
  if (BVar2 != 0) {
    DVar1 = *(int *)(param_1 + 0x38) + param_2;
    hFileMappingObject =
         CreateFileMappingA(*(HANDLE *)(param_1 + 0xc),(LPSECURITY_ATTRIBUTES)0x0,4,0,DVar1,
                            (LPCSTR)0x0);
    if (hFileMappingObject != (HANDLE)0x0) {
      pvVar3 = MapViewOfFile(hFileMappingObject,0xf001f,0,0,DVar1);
      *(LPVOID *)(param_1 + 0x34) = pvVar3;
      if (pvVar3 != (LPVOID)0x0) {
        *(DWORD *)(param_1 + 0x38) = DVar1;
        goto LAB_006d47c0;
      }
    }
    DVar1 = GetLastError();
    if (hFileMappingObject != (HANDLE)0x0) {
      CloseHandle(hFileMappingObject);
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    hFileMappingObject =
         CreateFileMappingA(*(HANDLE *)(param_1 + 0xc),(LPSECURITY_ATTRIBUTES)0x0,4,0,
                            *(DWORD *)(param_1 + 0x38),(LPCSTR)0x0);
    if (hFileMappingObject != (HANDLE)0x0) {
      pvVar3 = MapViewOfFile(hFileMappingObject,0xf001f,0,0,*(SIZE_T *)(param_1 + 0x38));
      *(LPVOID *)(param_1 + 0x34) = pvVar3;
    }
    if (DVar1 == 0) {
LAB_006d47c0:
      if (hFileMappingObject != (HANDLE)0x0) {
        CloseHandle(hFileMappingObject);
      }
      return 0;
    }
  }
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    DVar1 = 0xffffff03;
  }
  if (hFileMappingObject != (HANDLE)0x0) {
    CloseHandle(hFileMappingObject);
  }
  FUN_006a5e40(DVar1,DAT_007ed77c,0x7ee22c,0x13c);
  return DVar1;
}

