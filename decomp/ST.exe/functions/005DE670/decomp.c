#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Start\startsys.cpp
   Diagnostic line evidence: 1043 | 1045 | 1050 | 1052 | 1054 | 1057 | 1058 | 1061 | 1062
   (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __fastcall FUN_005de670(RecoveredRecordView_005DE670_1BE39CFA *param_1)

{
  byte bVar1;
  AnonShape_005DE670_7D81EFA7 *pAVar2;
  int iVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  HANDLE hFile;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  LPVOID lpBuffer;
  byte local_478 [260];
  byte local_374 [260];
  char local_270 [260];
  byte local_16c [260];
  InternalExceptionFrame local_68;
  byte *local_24;
  void *local_20;
  AnonShape_005DE670_7D81EFA7 *local_1c;
  uint local_18;
  HANDLE local_14;
  HANDLE local_10;
  void *local_c;
  DWORD local_8;

  param_1->field_06B2 = 0;
  param_1->field_06AE = 0;
  param_1->field_069E = 0;
  local_8 = 0;
  local_c = nullptr;
  local_14 = (HANDLE)0xffffffff;
  local_10 = (HANDLE)0xffffffff;
  local_1c = (AnonShape_005DE670_7D81EFA7 *)param_1;
  if (param_1->field_069A != (LPVOID)0x0) {
    FreeAndNull(&param_1->field_069A);
  }
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;

  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (local_14 != (HANDLE)0xffffffff) {
      /* ST_CALLSITE[005DEA3E]: CALL EDI */
      CloseHandle(local_14);
    }
    if (local_10 != (HANDLE)0xffffffff) {
      /* ST_CALLSITE[005DEA48]: CALL EDI */
      CloseHandle(local_10);
    }
    if (local_c != nullptr) {
      FreeAndNull(&local_c);
    }
    local_1c->field_06B2 = 0;
    local_1c->field_06AE = 0;
    local_1c->field_069E = 0;
    return;
  }
  Library::MSVCRT::FUN_0072e730
            ((byte *)&CHAR_00h_0080ed16,local_478,local_374,local_16c,nullptr);
  local_18 = 0xffffffff;
  pbVar9 = local_16c;
  do {
    if (local_18 == 0) break;
    local_18 = local_18 - 1;
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while (bVar1 != 0);
  local_18 = ~local_18;
  Library::MSVCRT::__makepath
            (local_270,(char *)local_478,(char *)local_374,(char *)local_16c,PTR_CHAR___0079c1c0);
  /* ST_CALLSITE[005DE752]: CALL EDI */
  pvVar4 = CreateFileA(local_270,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  local_14 = pvVar4;
  if (pvVar4 == (HANDLE)0xffffffff) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x413);
  }
  /* ST_CALLSITE[005DE779]: CALL dword ptr [0x0085bc74] */
  DVar5 = SetFilePointer(pvVar4,0,(PLONG)0x0,2);
  pAVar2 = local_1c;
  local_1c->field_06AE = DVar5;
  if (DVar5 == 0xffffffff) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x415);
  }
  Library::MSVCRT::__makepath
            (local_270,(char *)local_478,(char *)local_374,(char *)local_16c,PTR_CHAR___0079c1c4);
  /* ST_CALLSITE[005DE7E8]: CALL EDI */
  hFile = CreateFileA(local_270,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  local_10 = hFile;
  if (hFile == (HANDLE)0xffffffff) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x41a);
  }
  /* ST_CALLSITE[005DE812]: CALL dword ptr [0x0085bc74] */
  DVar5 = SetFilePointer(hFile,0,(PLONG)0x0,2);
  pAVar2->field_06B2 = DVar5;
  if (DVar5 == 0xffffffff) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x41c);
  }

  local_c = Library::DKW::LIB::MemAlloc(pAVar2->field_06AE + local_18 + pAVar2->field_06B2);
  if (local_c == nullptr) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x41e);
  }
  lpBuffer = (LPVOID)(pAVar2->field_06AE + (int)local_c);
  local_24 = (byte *)((int)lpBuffer + pAVar2->field_06B2);
  local_20 = local_c;
  /* ST_CALLSITE[005DE894]: CALL dword ptr [0x0085bc74] */
  local_8 = SetFilePointer(pvVar4,0,(PLONG)0x0,0);
  if (local_8 == 0xffffffff) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x421);
  }
  /* ST_CALLSITE[005DE8CB]: CALL dword ptr [0x0085bc68] */
  BVar6 = ReadFile(pvVar4,local_20,pAVar2->field_06AE,&local_8,(LPOVERLAPPED)0x0);
  if ((BVar6 == 0) || (pAVar2->field_06AE != local_8)) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x422);
  }
  /* ST_CALLSITE[005DE8FB]: CALL dword ptr [0x0085bbc8] */
  CloseHandle(pvVar4);
  pvVar4 = local_10;
  /* ST_CALLSITE[005DE90B]: CALL dword ptr [0x0085bc74] */
  local_8 = SetFilePointer(local_10,0,(PLONG)0x0,0);
  if (local_8 == 0xffffffff) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x425);
  }
  /* ST_CALLSITE[005DE93F]: CALL dword ptr [0x0085bc68] */
  BVar6 = ReadFile(pvVar4,lpBuffer,pAVar2->field_06B2,&local_8,(LPOVERLAPPED)0x0);
  if ((BVar6 == 0) || (pAVar2->field_06B2 != local_8)) {
    RaiseInternalException
              (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Start\\startsys.cpp",0x426);
  }
  /* ST_CALLSITE[005DE96F]: CALL dword ptr [0x0085bbc8] */
  CloseHandle(pvVar4);
  uVar7 = 0xffffffff;
  pbVar9 = local_16c;
  do {
    if (uVar7 == 0) break;
    uVar7 = uVar7 - 1;
    bVar1 = *pbVar9;
    pbVar9 = pbVar9 + 1;
  } while (bVar1 != 0);
  pbVar9 = local_16c;
  for (uVar8 = ~uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)local_24 = *(undefined4 *)pbVar9;
    pbVar9 = pbVar9 + 4;
    local_24 = local_24 + 4;
  }
  for (uVar7 = ~uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *local_24 = *pbVar9;
    pbVar9 = pbVar9 + 1;
    local_24 = local_24 + 1;
  }
  *(void **)&pAVar2->field_0x69a = local_c;
  uVar7 = pAVar2->field_06B2 + pAVar2->field_06AE + local_18;
  pAVar2->field_069E = uVar7;
  if ((g_int_00811764 == nullptr) || (g_int_00811764[10] != 1)) {
    *(undefined4 *)&pAVar2->field_0x6a2 = 0x400;
    *(undefined4 *)&pAVar2->field_0x6aa = 5;
  }
  else {
    *(undefined4 *)&pAVar2->field_0x6a2 = 0x1000;
    *(undefined4 *)&pAVar2->field_0x6aa = 0;
  }
  *(uint *)&pAVar2->field_0x6a6 =
       (uint)(uVar7 % *(uint *)&pAVar2->field_0x6a2 != 0) + uVar7 / *(uint *)&pAVar2->field_0x6a2;
  g_currentExceptionFrame = local_68.previous;
  return;
}

