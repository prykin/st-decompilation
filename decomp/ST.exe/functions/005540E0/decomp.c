
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::new */

uint * __thiscall cLoadingTy::new(cLoadingTy *this,uint param_1,int param_2,uint param_3)

{
  char cVar1;
  code *pcVar2;
  cMf32 *this_00;
  int iVar3;
  LPSTR pCVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  ccFntTy *this_01;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
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
    iVar7 = ReportDebugMessage(s_E____titans_grig_loading_cpp_007c8f0c,0x3a,0,iVar3,&DAT_007a4ccc,
                               s_cLoadingTy__new_007c8ed4);
    if (iVar7 == 0) {
      if (local_8 != (uint *)0x0) {
        cMf32::RecMemFree(DAT_00806780,local_8);
        if ((uint *)local_8[2] != (uint *)0x0) {
          ccFntTy::operator(this_01,(uint *)local_8[2]);
          local_8[2] = 0;
        }
        FUN_006ab060(&local_8);
      }
      RaiseInternalException(iVar3,0,s_E____titans_grig_loading_cpp_007c8f0c,0x41);
      return (uint *)0x0;
    }
    pcVar2 = (code *)swi(3);
    puVar8 = (uint *)(*pcVar2)();
    return puVar8;
  }
  local_8 = Library::DKW::LIB::FUN_006aac10(param_1);
  this_00 = DAT_00806780;
  if (DAT_0080874e == '\x01') {
    local_c = 0;
    uVar5 = 0xffffffff;
    pcVar11 = s_LOADINGW_007c8ee8;
    do {
      pcVar10 = pcVar11;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar10 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    local_65c = 1;
    pcVar11 = pcVar10 + -uVar5;
    pcVar10 = local_65b;
    for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar10 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar10 = pcVar10 + 1;
    }
    cMf32::ToBeg(DAT_00806780,FUN_006f2d10,&local_65c);
    puVar6 = cMf32::RecNameGetNext(this_00);
    uVar5 = local_c;
    while (puVar6 != (undefined4 *)0x0) {
      local_c = uVar5 + 1;
      puVar6 = cMf32::RecNameGetNext(this_00);
      uVar5 = local_c;
    }
    local_c = uVar5;
    if (uVar5 == 0) {
      RaiseInternalException(-1,DAT_007ed77c,s_E____titans_grig_loading_cpp_007c8f0c,0x24);
    }
    iVar3 = 1;
    bVar12 = 0;
    uVar9 = Library::MSVCRT::FUN_0072e6c0();
    pCVar4 = FUN_006f2c00(s_LOADINGW_007c8ee8,1,uVar9 % uVar5 + 1);
  }
  else {
    if (DAT_0080874e == '\x02') {
      local_c = 0;
      uVar5 = 0xffffffff;
      pcVar11 = s_LOADINGB_007c8ef4;
      do {
        pcVar10 = pcVar11;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar10;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      local_254 = 1;
      pcVar11 = pcVar10 + -uVar5;
      pcVar10 = local_253;
      for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar10 = pcVar10 + 1;
      }
      cMf32::ToBeg(DAT_00806780,FUN_006f2d10,&local_254);
      puVar6 = cMf32::RecNameGetNext(this_00);
      while (puVar6 != (undefined4 *)0x0) {
        local_c = local_c + 1;
        puVar6 = cMf32::RecNameGetNext(this_00);
      }
      iVar3 = 1;
      bVar12 = 0;
      uVar5 = Library::MSVCRT::FUN_0072e6c0();
      uVar5 = uVar5 % local_c;
      pcVar11 = s_LOADINGB_007c8ef4;
    }
    else {
      if (DAT_0080874e != '\x03') {
        RaiseInternalException(-1,DAT_007ed77c,s_E____titans_grig_loading_cpp_007c8f0c,0x2f);
        goto LAB_00554324;
      }
      local_c = 0;
      uVar5 = 0xffffffff;
      pcVar11 = s_LOADINGS_007c8f00;
      do {
        pcVar10 = pcVar11;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar10;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      local_458 = 1;
      pcVar11 = pcVar10 + -uVar5;
      pcVar10 = local_457;
      for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar10 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar10 = pcVar10 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar10 = pcVar10 + 1;
      }
      cMf32::ToBeg(DAT_00806780,FUN_006f2d10,&local_458);
      puVar6 = cMf32::RecNameGetNext(this_00);
      while (puVar6 != (undefined4 *)0x0) {
        local_c = local_c + 1;
        puVar6 = cMf32::RecNameGetNext(this_00);
      }
      iVar3 = 1;
      bVar12 = 0;
      uVar5 = Library::MSVCRT::FUN_0072e6c0();
      uVar5 = uVar5 % local_c;
      pcVar11 = s_LOADINGS_007c8f00;
    }
    pCVar4 = FUN_006f2c00(pcVar11,1,uVar5 + 1);
  }
  uVar5 = FUN_0070a9f0(DAT_00806780,pCVar4,bVar12,iVar3);
  *local_8 = uVar5;
LAB_00554324:
  uVar5 = thunk_FUN_00553e20(*local_8,(undefined *)0x0,DAT_00807dd9);
  local_8[2] = uVar5;
  puVar6 = ccFntTy::CreateSurf((ccFntTy *)local_8[2],*local_8,0,0,0,0,0,1);
  local_8[1] = (uint)puVar6;
  if (param_2 != 0) {
    uVar5 = thunk_FUN_00555600(param_2);
    local_8[0x13] = uVar5;
  }
  local_8[0x12] = param_3;
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

