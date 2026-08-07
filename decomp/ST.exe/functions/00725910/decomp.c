#include "../../pseudocode_runtime.h"


/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005BAE00 -> 00725910 @ 005BB365 | 005BAE00 -> 00725910 @ 005BB3D4 | 005E7FE0 ->
   00725910 @ 005E8148 | 005E84D0 -> 00725910 @ 005E8D28 | 005E84D0 -> 00725910 @ 005E8D96

   [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00725910 -> EXTERNAL:00000072 @ 00725B18 | 00725910 -> EXTERNAL:00000072 @ 00725C0F */

int __cdecl
FUN_00725910(HANDLE hFindFile,char *text,undefined4 param_3,undefined *param_4,undefined4 param_5,
            byte param_6)

{
  char cVar1;
  int iVar3;
  HANDLE pvVar4;
  BOOL BVar5;
  int iVar2;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  CHAR *pCVar9;
  char *pcVar10;
  CHAR *pCVar11;
  char *pcVar12;
  _WIN32_FIND_DATAA local_248;
  char local_108 [260];
  char *pcVar8_mg2;

  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar3 = (*(code *)param_4)(hFindFile,param_3,1,param_5);
  if (iVar3 == 0) {
    uVar6 = 0xffffffff;
    pcVar8 = hFindFile;
    do {
      pcVar12 = pcVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar12;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar12 + -uVar6;
    pcVar12 = local_108;
    memmove(pcVar12, pcVar8, uVar6); /* compiler REP MOVS byte copy */
    uVar7 = 0;
    FUN_006b8280(local_108,local_108);
    uVar6 = 0xffffffff;
    pcVar8_mg2 = text;
    do {
      pcVar8 = pcVar8_mg2;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar8 = pcVar8_mg2 + 1;
      cVar1 = *pcVar8_mg2;
      pcVar8_mg2 = pcVar8;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    iVar3 = -1;
    pcVar12 = local_108;
    do {
      pcVar10 = pcVar12;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar10 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar10;
    } while (cVar1 != '\0');
    pcVar8 = pcVar8 + -uVar6;
    pcVar12 = pcVar10 + -1;
    memmove(pcVar12, pcVar8, uVar6); /* compiler REP MOVS byte copy */
    uVar7 = 0;
    pvVar4 = FindFirstFileA(local_108,&local_248);
    if (pvVar4 != (HANDLE)0xffffffff) {
      do {
        if (((byte)local_248.dwFileAttributes & 0x10) == 0) {
          uVar6 = 0xffffffff;
          pcVar8 = hFindFile;
          do {
            pcVar12 = pcVar8;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar12 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar12;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          pcVar8 = pcVar12 + -uVar6;
          pcVar12 = local_108;
          memmove(pcVar12, pcVar8, uVar6); /* compiler REP MOVS byte copy */
          uVar7 = 0;
          FUN_006b8280(local_108,local_108);
          uVar6 = 0xffffffff;
          pCVar9 = local_248.cFileName;
          do {
            pCVar11 = pCVar9;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pCVar11 = pCVar9 + 1;
            cVar1 = *pCVar9;
            pCVar9 = pCVar11;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar3 = -1;
          pcVar8 = local_108;
          do {
            pcVar12 = pcVar8;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar12 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar12;
          } while (cVar1 != '\0');
          pCVar9 = pCVar11 + -uVar6;
          pcVar8 = pcVar12 + -1;
          memmove(pcVar8, pCVar9, uVar6); /* compiler REP MOVS byte copy */
          uVar7 = 0;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar3 = (*(code *)param_4)(local_108,&local_248,0,param_5);
          if (iVar3 != 0) {
            FindClose(pvVar4);
            return iVar3;
          }
        }
        BVar5 = FindNextFileA(pvVar4,&local_248);
      } while (BVar5 != 0);
    }
    FindClose(pvVar4);
    if ((param_6 & 1) == 0) {
      uVar6 = 0xffffffff;
      pcVar8 = hFindFile;
      do {
        pcVar12 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar8 = pcVar12 + -uVar6;
      pcVar12 = local_108;
      memmove(pcVar12, pcVar8, uVar6); /* compiler REP MOVS byte copy */
      uVar7 = 0;
      FUN_006b8280(local_108,local_108);
      uVar6 = 0xffffffff;
      pcVar8 = &CHAR___007cc8bc;
      do {
        pcVar12 = pcVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar3 = -1;
      pcVar8 = local_108;
      do {
        pcVar10 = pcVar8;
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        pcVar10 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar10;
      } while (cVar1 != '\0');
      pcVar8 = pcVar12 + -uVar6;
      pcVar12 = pcVar10 + -1;
      memmove(pcVar12, pcVar8, uVar6); /* compiler REP MOVS byte copy */
      uVar7 = 0;
      pvVar4 = FindFirstFileA(local_108,&local_248);
      if (pvVar4 == (HANDLE)0xffffffff) {
        return -0x6f;
      }
      do {
        if ((((byte)local_248.dwFileAttributes & 0x10) != 0) && (local_248.cFileName[0] != '.')) {
          uVar6 = 0xffffffff;
          pcVar8 = hFindFile;
          do {
            pcVar12 = pcVar8;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar12 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar12;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          pcVar8 = pcVar12 + -uVar6;
          pcVar12 = local_108;
          memmove(pcVar12, pcVar8, uVar6); /* compiler REP MOVS byte copy */
          uVar7 = 0;
          FUN_006b8280(local_108,local_108);
          uVar6 = 0xffffffff;
          pCVar9 = local_248.cFileName;
          do {
            pCVar11 = pCVar9;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pCVar11 = pCVar9 + 1;
            cVar1 = *pCVar9;
            pCVar9 = pCVar11;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar3 = -1;
          pcVar8 = local_108;
          do {
            pcVar12 = pcVar8;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar12 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar12;
          } while (cVar1 != '\0');
          pCVar9 = pCVar11 + -uVar6;
          pcVar8 = pcVar12 + -1;
          memmove(pcVar8, pCVar9, uVar6); /* compiler REP MOVS byte copy */
          iVar2 = FUN_00725910(local_108,text,&local_248,param_4,param_5,0);
          if (iVar2 != 0) {
            FindClose(pvVar4);
            return iVar2;
          }
        }
        BVar5 = FindNextFileA(pvVar4,&local_248);
      } while (BVar5 != 0);
      FindClose(pvVar4);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar3 = (*(code *)param_4)(hFindFile,param_3,2,param_5);
  }
  return iVar3;
}

