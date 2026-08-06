#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::new

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0056DB80 -> 005540E0 @ 0056DCEC */

uint * __thiscall cLoadingTy::new(cLoadingTy *this,uint param_1,char *text,uint param_3)

{
  char cVar1;
  cMf32 *this_00;
  int iVar3;
  uint uVar5;
  uint local_EAX_356;
  LPSTR text_00;
  ushort *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar11;
  uint *puVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  byte bVar10;
  int iVar12;
  undefined1 local_65c;
  char local_65b [515];
  undefined1 local_458;
  char local_457 [515];
  undefined1 local_254;
  char local_253 [515];
  InternalExceptionFrame local_50;
  uint local_c;
  uint *local_8;

  local_8 = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\grig\\loading.cpp",0x3a,0,iVar3,"%s",
                                "cLoadingTy::new");
    if (iVar11 == 0) {
      if (local_8 != nullptr) {
        cMf32::RecMemFree(g_cMf32_00806780,local_8);
        if ((uint *)local_8[2] != nullptr) {
          ccFntTy::operator_delete((uint *)local_8[2]);
          local_8[2] = 0;
        }
        FreeAndNull(&local_8);
      }
      RaiseInternalException(iVar3,0,"E:\\__titans\\grig\\loading.cpp",0x41);
      return nullptr;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_8 = Library::DKW::LIB::MemAllocClear(param_1);
  this_00 = g_cMf32_00806780;
  if (DAT_0080874e == '\x01') {
    local_c = 0;
    uVar4 = 0xffffffff;
    pcVar9 = "LOADINGW";
    do {
      pcVar8 = pcVar9;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    local_65c = 1;
    pcVar9 = pcVar8 + -uVar4;
    pcVar8 = local_65b;
    memmove(pcVar8, pcVar9, uVar4); /* compiler REP MOVS byte copy */
    cMf32::ToBeg(g_cMf32_00806780,FUN_006f2d10,&local_65c);
    puVar5 = cMf32::RecNameGetNext(this_00);
    uVar4 = local_c;
    while (puVar5 != nullptr) {
      local_c = uVar4 + 1;
      puVar5 = cMf32::RecNameGetNext(this_00);
      uVar4 = local_c;
    }
    local_c = uVar4;
    if (uVar4 == 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\grig\\loading.cpp",0x24);
    }
    iVar12 = 1;
    bVar10 = 0;
    uVar7 = Library::MSVCRT::FUN_0072e6c0();
    text_00 = FUN_006f2c00("LOADINGW",1,uVar7 % uVar4 + 1);
  }
  else {
    if (DAT_0080874e == '\x02') {
      local_c = 0;
      uVar4 = 0xffffffff;
      pcVar9 = "LOADINGB";
      do {
        pcVar8 = pcVar9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      local_254 = 1;
      pcVar9 = pcVar8 + -uVar4;
      pcVar8 = local_253;
      memmove(pcVar8, pcVar9, uVar4); /* compiler REP MOVS byte copy */
      uVar7 = 0;
      cMf32::ToBeg(g_cMf32_00806780,FUN_006f2d10,&local_254);
      puVar5 = cMf32::RecNameGetNext(this_00);
      while (puVar5 != nullptr) {
        local_c = local_c + 1;
        puVar5 = cMf32::RecNameGetNext(this_00);
      }
      iVar12 = 1;
      bVar10 = 0;
      local_EAX_356 = Library::MSVCRT::FUN_0072e6c0();
      uVar4 = local_EAX_356 % local_c;
      pcVar9 = "LOADINGB";
    }
    else {
      if (DAT_0080874e != '\x03') {
        RaiseInternalException
                  (-1,g_overwriteContext_007ED77C,"E:\\__titans\\grig\\loading.cpp",0x2f);
        goto LAB_00554324;
      }
      local_c = 0;
      uVar4 = 0xffffffff;
      pcVar9 = "LOADINGS";
      do {
        pcVar8 = pcVar9;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar8 = pcVar9 + 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar8;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      local_458 = 1;
      pcVar9 = pcVar8 + -uVar4;
      pcVar8 = local_457;
      memmove(pcVar8, pcVar9, uVar4); /* compiler REP MOVS byte copy */
      cMf32::ToBeg(g_cMf32_00806780,FUN_006f2d10,&local_458);
      puVar5 = cMf32::RecNameGetNext(this_00);
      while (puVar5 != nullptr) {
        local_c = local_c + 1;
        puVar5 = cMf32::RecNameGetNext(this_00);
      }
      iVar12 = 1;
      bVar10 = 0;
      uVar5 = Library::MSVCRT::FUN_0072e6c0();
      uVar4 = uVar5 % local_c;
      pcVar9 = "LOADINGS";
    }
    text_00 = FUN_006f2c00(pcVar9,1,uVar4 + 1);
  }
  puVar3 = FUN_0070a9f0(g_cMf32_00806780,text_00,bVar10,iVar12);
  *local_8 = (uint)puVar3;
LAB_00554324:
  uVar4 = thunk_FUN_00553e20(*local_8,nullptr,DAT_00807dd9);
  local_8[2] = uVar4;
  puVar5 = ccFntTy::CreateSurf((ccFntTy *)local_8[2],*local_8,0,0,0,0,0,1);
  local_8[1] = (uint)puVar5;
  if (text != nullptr) {
    uVar4 = thunk_FUN_00555600(text);
    local_8[0x13] = uVar4;
  }
  local_8[0x12] = param_3;
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

