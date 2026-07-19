
undefined4 * FUN_006d4380(undefined4 *param_1,LPCSTR param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  HANDLE hFile;
  DWORD DVar3;
  LPVOID pvVar4;
  uint uVar5;
  uint uVar6;
  DWORD DVar7;
  char *pcVar8;
  undefined4 *puVar9;
  LPCSTR pCVar10;
  char *pcVar11;
  HANDLE local_8;
  
  local_8 = (HANDLE)0x0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = FUN_006aac10(0x4c);
    if (param_1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    param_1[2] = 0x400000;
  }
  else {
    puVar9 = param_1;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
  }
  uVar5 = 0xffffffff;
  param_1[2] = param_1[2] | param_3 & 0x100000;
  pCVar10 = param_2;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pCVar10;
    pCVar10 = pCVar10 + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_006bfb70(~uVar5);
  param_1[1] = iVar2;
  if (iVar2 == 0) {
    DVar7 = 0xfffffffe;
  }
  else {
    uVar5 = 0xffffffff;
    pCVar10 = param_2;
    do {
      pcVar8 = pCVar10;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pCVar10 + 1;
      cVar1 = *pCVar10;
      pCVar10 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar8 + -uVar5;
    pcVar11 = (char *)param_1[1];
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar11 = pcVar11 + 1;
    }
    hFile = CreateFileA(param_2,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
    param_1[3] = hFile;
    if (((hFile != (HANDLE)0xffffffff) &&
        (DVar7 = SetFilePointer(hFile,0,(PLONG)0x0,2), DVar7 != 0xffffffff)) &&
       (DVar3 = SetFilePointer((HANDLE)param_1[3],0,(PLONG)0x0,0), DVar3 != 0xffffffff)) {
      param_1[0xe] = DVar7;
      param_1[6] = DVar7;
      if ((param_1[2] & 0x100000) != 0) {
        return param_1;
      }
      local_8 = CreateFileMappingA((HANDLE)param_1[3],(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0);
      if (local_8 != (HANDLE)0x0) {
        pvVar4 = MapViewOfFile(local_8,4,0,0,0);
        param_1[0xd] = pvVar4;
        if (pvVar4 != (LPVOID)0x0) {
          CloseHandle(local_8);
          return param_1;
        }
      }
    }
    DVar7 = GetLastError();
    if (DVar7 == 0) {
      DVar7 = 0xffffff03;
    }
  }
  FUN_006d46a0(param_1,0);
  if (local_8 != (HANDLE)0x0) {
    CloseHandle(local_8);
  }
  RaiseInternalException(DVar7,DAT_007ed77c,s_E__DKW_FMM_C_fmap_c_007ee22c,0x91);
  return (undefined4 *)0x0;
}

