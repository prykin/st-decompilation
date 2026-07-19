
DWORD FUN_006d4740(int param_1,int param_2)

{
  DWORD extraout_EAX;
  BOOL BVar1;
  LPVOID pvVar2;
  DWORD DVar3;
  HANDLE hFileMappingObject;
  
  if ((*(uint *)(param_1 + 8) & 0x100000) != 0) {
    RaiseInternalException(-0x30,DAT_007ed77c,s_E__DKW_FMM_C_fmap_c_007ee22c,0x119);
    return extraout_EAX;
  }
  hFileMappingObject = (HANDLE)0x0;
  BVar1 = UnmapViewOfFile(*(LPCVOID *)(param_1 + 0x34));
  if (BVar1 != 0) {
    DVar3 = *(int *)(param_1 + 0x38) + param_2;
    hFileMappingObject =
         CreateFileMappingA(*(HANDLE *)(param_1 + 0xc),(LPSECURITY_ATTRIBUTES)0x0,4,0,DVar3,
                            (LPCSTR)0x0);
    if (hFileMappingObject != (HANDLE)0x0) {
      pvVar2 = MapViewOfFile(hFileMappingObject,0xf001f,0,0,DVar3);
      *(LPVOID *)(param_1 + 0x34) = pvVar2;
      if (pvVar2 != (LPVOID)0x0) {
        *(DWORD *)(param_1 + 0x38) = DVar3;
        goto LAB_006d47c0;
      }
    }
    DVar3 = GetLastError();
    if (hFileMappingObject != (HANDLE)0x0) {
      CloseHandle(hFileMappingObject);
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    hFileMappingObject =
         CreateFileMappingA(*(HANDLE *)(param_1 + 0xc),(LPSECURITY_ATTRIBUTES)0x0,4,0,
                            *(DWORD *)(param_1 + 0x38),(LPCSTR)0x0);
    if (hFileMappingObject != (HANDLE)0x0) {
      pvVar2 = MapViewOfFile(hFileMappingObject,0xf001f,0,0,*(SIZE_T *)(param_1 + 0x38));
      *(LPVOID *)(param_1 + 0x34) = pvVar2;
    }
    if (DVar3 == 0) {
LAB_006d47c0:
      if (hFileMappingObject != (HANDLE)0x0) {
        CloseHandle(hFileMappingObject);
      }
      return 0;
    }
  }
  DVar3 = GetLastError();
  if (DVar3 == 0) {
    DVar3 = 0xffffff03;
  }
  if (hFileMappingObject != (HANDLE)0x0) {
    CloseHandle(hFileMappingObject);
  }
  RaiseInternalException(DVar3,DAT_007ed77c,s_E__DKW_FMM_C_fmap_c_007ee22c,0x13c);
  return DVar3;
}

