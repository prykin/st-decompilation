
DWORD FUN_006c4230(LPCSTR param_1,LPCVOID param_2,LPCVOID param_3)

{
  HANDLE hFile;
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined2 local_18;
  int local_16;
  undefined2 local_12;
  undefined2 local_10;
  int local_e;
  DWORD local_8;
  
  if (param_3 == (LPCVOID)0x0) {
    param_3 = (LPCVOID)FUN_006b4fa0((int)param_2);
  }
  hFile = CreateFileA(param_1,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    iVar1 = FUN_006b5010((int)param_2);
    DVar3 = *(DWORD *)((int)param_2 + 0x14);
    if (DVar3 == 0) {
      DVar3 = ((uint)*(ushort *)((int)param_2 + 0xe) * *(int *)((int)param_2 + 4) + 0x1f >> 3 &
              0x1ffffffc) * *(int *)((int)param_2 + 8);
    }
    local_18 = 0x4d42;
    local_16 = FUN_006b5050((int)param_2);
    local_16 = local_16 + 0xe;
    local_e = iVar1 + 0x36;
    local_12 = 0;
    local_10 = 0;
    BVar2 = WriteFile(hFile,&local_18,0xe,&local_8,(LPOVERLAPPED)0x0);
    if (BVar2 != 0) {
      BVar2 = WriteFile(hFile,param_2,iVar1 + 0x28,&local_8,(LPOVERLAPPED)0x0);
      if (BVar2 != 0) {
        BVar2 = WriteFile(hFile,param_3,DVar3,&local_8,(LPOVERLAPPED)0x0);
        if (BVar2 != 0) {
          DVar3 = 0;
          goto LAB_006c4312;
        }
      }
    }
  }
  DVar3 = GetLastError();
LAB_006c4312:
  CloseHandle(hFile);
  if (DVar3 != 0) {
    FUN_006a5e40(DVar3,DAT_007ed77c,0x7ededc,0x2e);
    return DVar3;
  }
  return 0;
}

