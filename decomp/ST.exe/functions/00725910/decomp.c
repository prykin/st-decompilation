
int __cdecl
FUN_00725910(char *param_1,char *param_2,undefined4 param_3,undefined *param_4,undefined4 param_5,
            byte param_6)

{
  char cVar1;
  int iVar2;
  HANDLE pvVar3;
  BOOL BVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  CHAR *pCVar8;
  char *pcVar9;
  CHAR *pCVar10;
  char *pcVar11;
  _WIN32_FIND_DATAA local_248;
  char local_108 [260];
  
  iVar2 = (*(code *)param_4)(param_1,param_3,1,param_5);
  if (iVar2 == 0) {
    uVar5 = 0xffffffff;
    pcVar7 = param_1;
    do {
      pcVar11 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar11 + -uVar5;
    pcVar11 = local_108;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar11 = pcVar11 + 1;
    }
    FUN_006b8280(local_108,local_108);
    uVar5 = 0xffffffff;
    pcVar7 = param_2;
    do {
      pcVar11 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar2 = -1;
    pcVar7 = local_108;
    do {
      pcVar9 = pcVar7;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar9 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar9;
    } while (cVar1 != '\0');
    pcVar7 = pcVar11 + -uVar5;
    pcVar11 = pcVar9 + -1;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar11 = pcVar11 + 1;
    }
    pvVar3 = FindFirstFileA(local_108,&local_248);
    if (pvVar3 != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_248.dwFileAttributes & 0x10) == 0) {
          uVar5 = 0xffffffff;
          pcVar7 = param_1;
          do {
            pcVar11 = pcVar7;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar11 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar11;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar7 = pcVar11 + -uVar5;
          pcVar11 = local_108;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar11 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar11 = pcVar11 + 1;
          }
          FUN_006b8280(local_108,local_108);
          uVar5 = 0xffffffff;
          pCVar8 = local_248.cFileName;
          do {
            pCVar10 = pCVar8;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pCVar10 = pCVar8 + 1;
            cVar1 = *pCVar8;
            pCVar8 = pCVar10;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          iVar2 = -1;
          pcVar7 = local_108;
          do {
            pcVar11 = pcVar7;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar11 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar11;
          } while (cVar1 != '\0');
          pCVar8 = pCVar10 + -uVar5;
          pcVar7 = pcVar11 + -1;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pCVar8;
            pCVar8 = pCVar8 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar7 = *pCVar8;
            pCVar8 = pCVar8 + 1;
            pcVar7 = pcVar7 + 1;
          }
          iVar2 = (*(code *)param_4)(local_108,&local_248,0,param_5);
          if (iVar2 != 0) {
            FindClose(pvVar3);
            return iVar2;
          }
        }
        BVar4 = FindNextFileA(pvVar3,&local_248);
      } while (BVar4 != 0);
    }
    FindClose(pvVar3);
    if ((param_6 & 1) == 0) {
      uVar5 = 0xffffffff;
      pcVar7 = param_1;
      do {
        pcVar11 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar11 + -uVar5;
      pcVar11 = local_108;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar11 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar11 = pcVar11 + 1;
      }
      FUN_006b8280(local_108,local_108);
      uVar5 = 0xffffffff;
      pcVar7 = &DAT_007cc8bc;
      do {
        pcVar11 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar2 = -1;
      pcVar7 = local_108;
      do {
        pcVar9 = pcVar7;
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      pcVar7 = pcVar11 + -uVar5;
      pcVar11 = pcVar9 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar11 = pcVar11 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar11 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar11 = pcVar11 + 1;
      }
      pvVar3 = FindFirstFileA(local_108,&local_248);
      if (pvVar3 == (HANDLE)0xffffffff) {
        return -0x6f;
      }
      do {
        if ((((byte)local_248.dwFileAttributes & 0x10) != 0) && (local_248.cFileName[0] != '.')) {
          uVar5 = 0xffffffff;
          pcVar7 = param_1;
          do {
            pcVar11 = pcVar7;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pcVar11 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar11;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          pcVar7 = pcVar11 + -uVar5;
          pcVar11 = local_108;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar11 = pcVar11 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar11 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar11 = pcVar11 + 1;
          }
          FUN_006b8280(local_108,local_108);
          uVar5 = 0xffffffff;
          pCVar8 = local_248.cFileName;
          do {
            pCVar10 = pCVar8;
            if (uVar5 == 0) break;
            uVar5 = uVar5 - 1;
            pCVar10 = pCVar8 + 1;
            cVar1 = *pCVar8;
            pCVar8 = pCVar10;
          } while (cVar1 != '\0');
          uVar5 = ~uVar5;
          iVar2 = -1;
          pcVar7 = local_108;
          do {
            pcVar11 = pcVar7;
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            pcVar11 = pcVar7 + 1;
            cVar1 = *pcVar7;
            pcVar7 = pcVar11;
          } while (cVar1 != '\0');
          pCVar8 = pCVar10 + -uVar5;
          pcVar7 = pcVar11 + -1;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pCVar8;
            pCVar8 = pCVar8 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
            *pcVar7 = *pCVar8;
            pCVar8 = pCVar8 + 1;
            pcVar7 = pcVar7 + 1;
          }
          iVar2 = FUN_00725910(local_108,param_2,&local_248,param_4,param_5,0);
          if (iVar2 != 0) {
            FindClose(pvVar3);
            return iVar2;
          }
        }
        BVar4 = FindNextFileA(pvVar3,&local_248);
      } while (BVar4 != 0);
      FindClose(pvVar3);
    }
    iVar2 = (*(code *)param_4)(param_1,param_3,2,param_5);
  }
  return iVar2;
}

