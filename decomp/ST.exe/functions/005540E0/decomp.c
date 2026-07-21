
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::new
   
   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0056DB80 -> 005540E0 @ 0056DCEC */

uint * __thiscall cLoadingTy::new(cLoadingTy *this,uint param_1,char *text,uint param_3)

{
  char cVar1;
  code *pcVar2;
  cMf32 *this_00;
  int iVar3;
  LPSTR text_00;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  ccFntTy *this_01;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  undefined1 local_65c;
  char local_65b [515];
  undefined1 local_458;
  char local_457 [515];
  undefined1 local_254;
  char local_253 [515];
  InternalExceptionFrame local_50;
  uint local_c;
  uint *local_8;
  
  local_8 = (uint *)0x0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage(s_E____titans_grig_loading_cpp_007c8f0c,0x3a,0,iVar3,&DAT_007a4ccc,
                               s_cLoadingTy__new_007c8ed4);
    if (iVar6 == 0) {
      if (local_8 != (uint *)0x0) {
        cMf32::RecMemFree(g_cMf32_00806780,local_8);
        if ((uint *)local_8[2] != (uint *)0x0) {
          ccFntTy::operator(this_01,(uint *)local_8[2]);
          local_8[2] = 0;
        }
        FreeAndNull(&local_8);
      }
      RaiseInternalException(iVar3,0,s_E____titans_grig_loading_cpp_007c8f0c,0x41);
      return (uint *)0x0;
    }
    pcVar2 = (code *)swi(3);
    puVar7 = (uint *)(*pcVar2)();
    return puVar7;
  }
  local_8 = Library::DKW::LIB::FUN_006aac10(param_1);
  this_00 = g_cMf32_00806780;
  if (DAT_0080874e == '\x01') {
    local_c = 0;
    uVar4 = 0xffffffff;
    pcVar10 = s_LOADINGW_007c8ee8;
    do {
      pcVar9 = pcVar10;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar9 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar9;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    local_65c = 1;
    pcVar10 = pcVar9 + -uVar4;
    pcVar9 = local_65b;
    for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar9 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar9 = pcVar9 + 1;
    }
    cMf32::ToBeg(g_cMf32_00806780,FUN_006f2d10,&local_65c);
    puVar5 = cMf32::RecNameGetNext(this_00);
    uVar4 = local_c;
    while (puVar5 != (undefined4 *)0x0) {
      local_c = uVar4 + 1;
      puVar5 = cMf32::RecNameGetNext(this_00);
      uVar4 = local_c;
    }
    local_c = uVar4;
    if (uVar4 == 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,s_E____titans_grig_loading_cpp_007c8f0c,0x24);
    }
    iVar3 = 1;
    bVar11 = 0;
    uVar8 = Library::MSVCRT::FUN_0072e6c0();
    text_00 = FUN_006f2c00(s_LOADINGW_007c8ee8,1,uVar8 % uVar4 + 1);
  }
  else {
    if (DAT_0080874e == '\x02') {
      local_c = 0;
      uVar4 = 0xffffffff;
      pcVar10 = s_LOADINGB_007c8ef4;
      do {
        pcVar9 = pcVar10;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      local_254 = 1;
      pcVar10 = pcVar9 + -uVar4;
      pcVar9 = local_253;
      for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar9 = pcVar9 + 1;
      }
      cMf32::ToBeg(g_cMf32_00806780,FUN_006f2d10,&local_254);
      puVar5 = cMf32::RecNameGetNext(this_00);
      while (puVar5 != (undefined4 *)0x0) {
        local_c = local_c + 1;
        puVar5 = cMf32::RecNameGetNext(this_00);
      }
      iVar3 = 1;
      bVar11 = 0;
      uVar4 = Library::MSVCRT::FUN_0072e6c0();
      uVar4 = uVar4 % local_c;
      pcVar10 = s_LOADINGB_007c8ef4;
    }
    else {
      if (DAT_0080874e != '\x03') {
        RaiseInternalException
                  (-1,g_overwriteContext_007ED77C,s_E____titans_grig_loading_cpp_007c8f0c,0x2f);
        goto LAB_00554324;
      }
      local_c = 0;
      uVar4 = 0xffffffff;
      pcVar10 = s_LOADINGS_007c8f00;
      do {
        pcVar9 = pcVar10;
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        pcVar9 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar9;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      local_458 = 1;
      pcVar10 = pcVar9 + -uVar4;
      pcVar9 = local_457;
      for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *pcVar9 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar9 = pcVar9 + 1;
      }
      cMf32::ToBeg(g_cMf32_00806780,FUN_006f2d10,&local_458);
      puVar5 = cMf32::RecNameGetNext(this_00);
      while (puVar5 != (undefined4 *)0x0) {
        local_c = local_c + 1;
        puVar5 = cMf32::RecNameGetNext(this_00);
      }
      iVar3 = 1;
      bVar11 = 0;
      uVar4 = Library::MSVCRT::FUN_0072e6c0();
      uVar4 = uVar4 % local_c;
      pcVar10 = s_LOADINGS_007c8f00;
    }
    text_00 = FUN_006f2c00(pcVar10,1,uVar4 + 1);
  }
  uVar4 = FUN_0070a9f0(g_cMf32_00806780,text_00,bVar11,iVar3);
  *local_8 = uVar4;
LAB_00554324:
  uVar4 = thunk_FUN_00553e20(*local_8,(undefined *)0x0,DAT_00807dd9);
  local_8[2] = uVar4;
  puVar5 = ccFntTy::CreateSurf((ccFntTy *)local_8[2],*local_8,0,0,0,0,0,1);
  local_8[1] = (uint)puVar5;
  if (text != (char *)0x0) {
    uVar4 = thunk_FUN_00555600(text);
    local_8[0x13] = uVar4;
  }
  local_8[0x12] = param_3;
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

