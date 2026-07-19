
undefined4 * FUN_006d4220(undefined4 *param_1,LPCSTR param_2,DWORD param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  HANDLE hFile;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  LPCSTR pCVar8;
  char *pcVar9;
  HANDLE local_c;
  DWORD local_8;
  
  local_8 = 0xfffffffe;
  local_c = (HANDLE)0x0;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = FUN_006aac10(0x4c);
    if (param_1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    param_1[2] = 0x400000;
  }
  else {
    puVar7 = param_1;
    for (iVar2 = 0x13; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  uVar4 = 0xffffffff;
  pCVar8 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pCVar8;
    pCVar8 = pCVar8 + 1;
  } while (cVar1 != '\0');
  iVar2 = FUN_006bfb70(~uVar4);
  param_1[1] = iVar2;
  if (iVar2 != 0) {
    uVar4 = 0xffffffff;
    pCVar8 = param_2;
    do {
      pcVar6 = pCVar8;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar6 = pCVar8 + 1;
      cVar1 = *pCVar8;
      pCVar8 = pcVar6;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    pcVar6 = pcVar6 + -uVar4;
    pcVar9 = (char *)param_1[1];
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar9 = pcVar9 + 1;
    }
    param_1[2] = param_1[2] | 0x800000;
    hFile = CreateFileA(param_2,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0x80,(HANDLE)0x0);
    param_1[3] = hFile;
    if ((hFile != (HANDLE)0xffffffff) &&
       (local_c = CreateFileMappingA(hFile,(LPSECURITY_ATTRIBUTES)0x0,4,0,param_3,(LPCSTR)0x0),
       local_c != (HANDLE)0x0)) {
      pvVar3 = MapViewOfFile(local_c,0xf001f,0,0,param_3);
      param_1[0xd] = pvVar3;
      if (pvVar3 != (LPVOID)0x0) {
        param_1[0xf] = param_4;
        param_1[0xe] = param_3;
        CloseHandle(local_c);
        return param_1;
      }
    }
    local_8 = GetLastError();
    if (local_8 == 0) {
      local_8 = 0xffffff03;
    }
  }
  FUN_006d46a0(param_1,0);
  if (local_c != (HANDLE)0x0) {
    CloseHandle(local_c);
  }
  RaiseInternalException(local_8,DAT_007ed77c,s_E__DKW_FMM_C_fmap_c_007ee22c,0x4b);
  return (undefined4 *)0x0;
}

