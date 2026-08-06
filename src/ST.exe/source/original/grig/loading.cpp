#include "st/generated.hpp"
// Generated translation unit: source/original/grig/loading.cpp

// 005540E0 cLoadingTy::new
#line 4 "decomp/ST.exe/functions/005540E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::new

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0056DB80 -> 005540E0 @ 0056DCEC */

uint * __thiscall st::fn_005540E0(cLoadingTy *this,uint param_1,char *text,uint param_3)

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
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar11 = st::fn_006AD4D0("E:\\__titans\\grig\\loading.cpp",0x3a,0,iVar3,"%s",
                                "cLoadingTy::new");
    if (iVar11 == 0) {
      if (local_8 != nullptr) {
        st::fn_006F20E0(g_cMf32_00806780,local_8);
        if ((uint *)local_8[2] != nullptr) {
          st::fn_00710560((uint *)local_8[2]);
          local_8[2] = 0;
        }
        st::fn_006AB060(&local_8);
      }
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\grig\\loading.cpp",0x41);
      return nullptr;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_8 = st::fn_006AAC10(param_1);
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
    st::fn_006F12B0(g_cMf32_00806780,FUN_006f2d10,&local_65c);
    puVar5 = st::fn_006F2790(this_00);
    uVar4 = local_c;
    while (puVar5 != nullptr) {
      local_c = uVar4 + 1;
      puVar5 = st::fn_006F2790(this_00);
      uVar4 = local_c;
    }
    local_c = uVar4;
    if (uVar4 == 0) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\grig\\loading.cpp",0x24);
    }
    iVar12 = 1;
    bVar10 = 0;
    uVar7 = st::fn_0072E6C0();
    text_00 = st::fn_006F2C00("LOADINGW",1,uVar7 % uVar4 + 1);
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
      st::fn_006F12B0(g_cMf32_00806780,FUN_006f2d10,&local_254);
      puVar5 = st::fn_006F2790(this_00);
      while (puVar5 != nullptr) {
        local_c = local_c + 1;
        puVar5 = st::fn_006F2790(this_00);
      }
      iVar12 = 1;
      bVar10 = 0;
      local_EAX_356 = st::fn_0072E6C0();
      uVar4 = local_EAX_356 % local_c;
      pcVar9 = "LOADINGB";
    }
    else {
      if (DAT_0080874e != '\x03') {
        st::fn_006A5E40
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
      st::fn_006F12B0(g_cMf32_00806780,FUN_006f2d10,&local_458);
      puVar5 = st::fn_006F2790(this_00);
      while (puVar5 != nullptr) {
        local_c = local_c + 1;
        puVar5 = st::fn_006F2790(this_00);
      }
      iVar12 = 1;
      bVar10 = 0;
      uVar5 = st::fn_0072E6C0();
      uVar4 = uVar5 % local_c;
      pcVar9 = "LOADINGS";
    }
    text_00 = st::fn_006F2C00(pcVar9,1,uVar4 + 1);
  }
  puVar3 = st::fn_0070A9F0(g_cMf32_00806780,text_00,bVar10,iVar12);
  *local_8 = (uint)puVar3;
LAB_00554324:
  uVar4 = st::fn_00404BD3(*local_8,nullptr,DAT_00807dd9);
  local_8[2] = uVar4;
  puVar5 = st::fn_00710BA0((ccFntTy *)local_8[2],*local_8,0,0,0,0,0,1);
  local_8[1] = (uint)puVar5;
  if (text != nullptr) {
    uVar4 = st::fn_00404746(text);
    local_8[0x13] = uVar4;
  }
  local_8[0x12] = param_3;
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

// 005544E0 cLoadingTy::delete
#line 4 "decomp/ST.exe/functions/005544E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::delete

   [STCallsiteConventionApplier] __cdecl inferred from all-caller stack cleanup. Evidence: all 2
   callers reclaim stack arguments [4] matching the explicit parameter width; no explicit ECX
   pointer receiver setup observed */

void __cdecl st::fn_005544E0(uint *param_1)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    if (param_1 != nullptr) {
      st::fn_006F20E0(g_cMf32_00806780,param_1);
      if ((uint *)param_1[2] != nullptr) {
        st::fn_00710560((uint *)param_1[2]);
      }
      st::fn_00402487((int)param_1);
      st::fn_006A5E90((short *)param_1);
    }
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\grig\\loading.cpp",0x52,0,errorCode,"%s",
                             "cLoadingTy::delete");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\grig\\loading.cpp",0x53);
  return;
}

// 00554660 cLoadingTy::ShowScr
#line 4 "decomp/ST.exe/functions/00554660/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::ShowScr */

void __thiscall st::fn_00554660(cLoadingTy *this,int param_1,int param_2)

{
  cLoadingTy *pcVar2;
  int iVar4;
  int iVar3;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_44c [256];
  InternalExceptionFrame local_4c;
  cLoadingTy *local_8;

  puVar6 = local_44c;
  local_8 = this;
  for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar4 == 0) {
    st::fn_006B0A20((AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,(int)local_44c,0,0x100,
                 0);
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    pcVar2 = local_8;
    st::fn_006B4640(g_dDXContext_0080759C,0,0,local_8->field_0000,nullptr);
    st::fn_006BB370(g_dDXContext_0080759C,0,0);
    st::fn_0040448A((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                       (ushort *)pcVar2->field_0000,param_1,param_2);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\grig\\loading.cpp",0x7b,0,iVar4,"%s",
                             "cLoadingTy::ShowScr");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\grig\\loading.cpp",0x7c);
  return;
}

// 00554800 cLoadingTy::InitParam
#line 4 "decomp/ST.exe/functions/00554800/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::InitParam */

void __thiscall
st::fn_00554800
          (cLoadingTy *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          int param_6,int param_7,int param_8,int param_9)

{
  ushort *puVar1;
  ccFntTy *pcVar2;
  undefined4 uVar3;
  cLoadingTy *pcVar5;
  int local_EAX_36;
  byte *puVar6;
  char *resourceString;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  InternalExceptionFrame local_4c;
  cLoadingTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  local_EAX_36 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pcVar5 = local_8;
  if (local_EAX_36 == 0) {
    local_8->field_0014 = param_1;
    local_8->field_0018 = param_2;
    if (param_3 < 1) {
      param_3 = (local_8->field_0000->bmiHeader).biWidth;
    }
    local_8->field_001C = param_3;
    if (param_4 < 1) {
      param_4 = (local_8->field_0000->bmiHeader).biHeight;
    }
    local_8->field_0020 = param_4;
    puVar1 = local_8->field_0004;
    local_8->field_000C = 0;
    local_8->field_0010 = 0;
    local_8->field_0038 = 0;
    uVar10 = *(uint *)(puVar1 + 10);
    if (uVar10 == 0) {
      uVar10 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar1 + 4);
    }
    puVar6 = (byte *)st::fn_006B4FA0((int *)puVar1);
    memset(puVar6, 0, uVar10); /* compiler bulk-zero initialization */
    pcVar2 = pcVar5->field_0008;
    iVar7 = pcVar5->field_0020;
    uVar3 = pcVar5->field_001C;
    iVar9 = pcVar5->field_0014;
    pcVar2->field_0064 = pcVar5->field_0018;
    pcVar2->field_0060 = iVar9;
    pcVar2->field_0068 = uVar3;
    pcVar2->field_006C = iVar7;
    pcVar2->field_0050 = 0;
    pcVar2->field_0054 = 0;
    pcVar2 = pcVar5->field_0008;
    pcVar5->field_0028 = param_6;
    pcVar5->field_002C = param_7;
    pcVar2->field_0058 = param_6;
    pcVar2->field_005C = param_7;
    resourceString = st::fn_006B0140(0x267a,g_hINSTANCE_00807618);
    iVar6 = st::fn_007111C0(pcVar5->field_0008,resourceString);
    iVar9 = pcVar5->field_002C + iVar6;
    iVar7 = pcVar5->field_0020 / iVar9;
    pcVar5->field_0034 = iVar9;
    pcVar5->field_0030 = iVar7;
    if (iVar7 < 1) {
      st::fn_006A5E40
                (-6,g_overwriteContext_007ED77C,"E:\\__titans\\grig\\loading.cpp",0xa3);
    }
    pcVar5->field_0058 = param_8;
    pcVar5->field_0054 = param_9;
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    st::fn_006B4640(g_dDXContext_0080759C,0,0,pcVar5->field_0000,nullptr);
    st::fn_006BB370(g_dDXContext_0080759C,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar8 = st::fn_006AD4D0("E:\\__titans\\grig\\loading.cpp",0xac,0,local_EAX_36,
                             "%s","cLoadingTy::InitParam");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(local_EAX_36,0,"E:\\__titans\\grig\\loading.cpp",0xad);
  return;
}

// 00554AD0 cLoadingTy::DrawLine
#line 4 "decomp/ST.exe/functions/00554AD0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::DrawLine */

void __thiscall st::fn_00554AD0(cLoadingTy *this,uint *param_1)

{
  cLoadingTy *pcVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  cLoadingTy *local_8;

  local_8 = this;
  st::fn_0040249B(this);
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pcVar2 = local_8;
  if (iVar3 == 0) {
    st::fn_006B4170((RecoveredSourceFamily_dibcopy *)local_8->field_0004,0,
                 local_8->field_0014 + local_8->field_000C,local_8->field_0010 + local_8->field_0018
                 ,local_8->field_001C,local_8->field_0034,0);
    st::fn_007119C0(pcVar2->field_0008,(char *)param_1,pcVar2->field_000C,pcVar2->field_0010,
                   pcVar2->field_0024);
    iVar3 = pcVar2->field_0010 + pcVar2->field_0018;
    iVar4 = pcVar2->field_000C + pcVar2->field_0014;
    st::fn_006B42D0
              (g_dDXContext_0080759C,iVar4,iVar3,pcVar2->field_0000,nullptr,iVar4,iVar3,
               pcVar2->field_001C,pcVar2->field_0034);
    iVar3 = pcVar2->field_0010 + pcVar2->field_0018;
    iVar4 = pcVar2->field_0014 + pcVar2->field_000C;
    st::fn_006B4680
              ((int *)g_dDXContext_0080759C,iVar4,iVar3,(BITMAPINFO *)pcVar2->field_0004,nullptr
               ,iVar4,iVar3,pcVar2->field_001C,pcVar2->field_0034,0);
    st::fn_006BB370(g_dDXContext_0080759C,0,0);
    if ((code *)pcVar2->field_0058 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pcVar2->field_0058)(pcVar2->field_0054);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\grig\\loading.cpp",0xcc,0,iVar3,"%s",
                             "cLoadingTy::DrawLine");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\grig\\loading.cpp",0xcd);
  return;
}

// 00554C80 cLoadingTy::DrawLineCR
#line 4 "decomp/ST.exe/functions/00554C80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::DrawLineCR

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00554C80 -> 00555680 @ 00554CC3 | 0056DB80 -> 00554C80 @ 0056E4C4 */

void __thiscall st::fn_00554C80(cLoadingTy *this,char *resourceString)

{
  cLoadingTy *pcVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  cLoadingTy *local_8;

  local_8 = this;
  st::fn_0040249B(this);
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pcVar2 = local_8;
  if (iVar3 == 0) {
    st::fn_00404638(local_8,resourceString);
    st::fn_006B4170((RecoveredSourceFamily_dibcopy *)pcVar2->field_0004,0,
                 pcVar2->field_0014 + pcVar2->field_000C,pcVar2->field_0010 + pcVar2->field_0018,
                 pcVar2->field_001C,pcVar2->field_0034,0);
    st::fn_007119C0(pcVar2->field_0008,resourceString,pcVar2->field_000C,pcVar2->field_0010,
                   pcVar2->field_0024);
    iVar3 = pcVar2->field_0018 + pcVar2->field_0010;
    iVar4 = pcVar2->field_0014 + pcVar2->field_000C;
    st::fn_006B42D0
              (g_dDXContext_0080759C,iVar4,iVar3,pcVar2->field_0000,nullptr,iVar4,iVar3,
               pcVar2->field_001C,pcVar2->field_0034);
    iVar3 = pcVar2->field_0010 + pcVar2->field_0018;
    iVar4 = pcVar2->field_0014 + pcVar2->field_000C;
    st::fn_006B4680
              ((int *)g_dDXContext_0080759C,iVar4,iVar3,(BITMAPINFO *)pcVar2->field_0004,nullptr
               ,iVar4,iVar3,pcVar2->field_001C,pcVar2->field_0034,0);
    iVar3 = pcVar2->field_0038 + 1;
    pcVar2->field_0038 = iVar3;
    if (iVar3 < pcVar2->field_0030) {
      pcVar2->field_0010 = pcVar2->field_0010 + pcVar2->field_0034;
    }
    else {
      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)pcVar2->field_0004,0,pcVar2->field_0014,
                 pcVar2->field_0018,(byte *)pcVar2->field_0004,0,pcVar2->field_0014,
                 pcVar2->field_0034 + pcVar2->field_0018,pcVar2->field_001C,
                 pcVar2->field_0020 - pcVar2->field_0034);
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)pcVar2->field_0004,0,
                   pcVar2->field_0014 + pcVar2->field_000C,pcVar2->field_0010 + pcVar2->field_0018,
                   pcVar2->field_001C,pcVar2->field_0034,0);
      st::fn_006B42D0
                (g_dDXContext_0080759C,pcVar2->field_0014,pcVar2->field_0018,pcVar2->field_0000,
                 nullptr,pcVar2->field_0014,pcVar2->field_0018,pcVar2->field_001C,
                 pcVar2->field_0020);
      st::fn_006B4680
                ((int *)g_dDXContext_0080759C,pcVar2->field_0014,pcVar2->field_0018,
                 (BITMAPINFO *)pcVar2->field_0004,nullptr,pcVar2->field_0014,pcVar2->field_0018,
                 pcVar2->field_001C,pcVar2->field_0020,0);
    }
    st::fn_006BB370(g_dDXContext_0080759C,0,0);
    if ((code *)pcVar2->field_0058 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pcVar2->field_0058)(pcVar2->field_0054);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\grig\\loading.cpp",0xf2,0,iVar3,"%s",
                             "cLoadingTy::DrawLineCR");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\grig\\loading.cpp",0xf3);
  return;
}

// 00554F20 cLoadingTy::SetProcess
#line 4 "decomp/ST.exe/functions/00554F20/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::SetProcess

   [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 0052AB40 -> 00554F20 @ 0052ABA6

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00554F20(cLoadingTy *this,int param_1,char *text,int param_3)

{
  cLoadingTy *this_00;
  int errorCode;
  DWORD DVar2;
  int iVar3;
  InternalExceptionFrame local_4c;
  cLoadingTy *local_8;

  local_8 = this;
  st::fn_0040249B(this);
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    if (-1 < local_8->field_003C) {
      st::fn_00403472(local_8,CASE_2,0,nullptr);
    }
    this_00->field_003C = param_1;
    DVar2 = st::external_000000DA();
    this_00->field_0044 = DVar2;
    this_00->field_0040 = param_3;
    if (param_3 == 0) {
      this_00->field_0040 = 1;
    }
    this_00->field_0050 = 0xffffffff;
    st::fn_00401230(this_00,text);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\grig\\loading.cpp",0x109,0,errorCode,"%s"
                             ,"cLoadingTy::SetProcess");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\grig\\loading.cpp",0x10a);
  return;
}

// 00555040 cLoadingTy::SetState
#line 4 "decomp/ST.exe/functions/00555040/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\grig\loading.cpp
   cLoadingTy::SetState

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/cLoadingTy_SetState_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

void __thiscall
st::fn_00555040
          (cLoadingTy *this,cLoadingTy_SetState_param_1Enum param_1,uint param_2,char *param_3)

{
  char cVar1;
  int iVar3;
  char *pcVar4_mgD;
  char *pcVar4_mgE;
  char *pcVar4_mg8;
  char *pcVar4_mg9;
  DWORD DVar3;
  char *pcVar4_mg3;
  char *pcVar4_mg4;
  char *pcVar4_mg0;
  char *pcVar4_mg1;
  int iVar5;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  char *pcVar8;
  cLoadingTy *pcVar9;
  uint *puVar10;
  uint *puVar11;
  char *pcVar12;
  uint local_450 [256];
  InternalExceptionFrame local_50;
  uint local_c;
  cLoadingTy *local_8;
  char *pcVar4_mg6;

  local_8 = this;
  st::fn_0040249B(this);
  if (this->field_003C < -1) {
    return;
  }
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pcVar9 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\grig\\loading.cpp",0x14a,0,iVar3,"%s",
                               "cLoadingTy::SetState");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\grig\\loading.cpp",0x14b);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  switch(param_1) {
  case CASE_0:
    pcVar4_mgD = st::fn_006B0140(0x267a,g_hINSTANCE_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar4_mgD;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4_mgD + 1;
      cVar1 = *pcVar4_mgD;
      pcVar4_mgD = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    puVar10 = (uint *)(pcVar8 + -uVar5);
    puVar11 = local_450;
    memmove(puVar11, puVar10, uVar5); /* compiler REP MOVS byte copy */
    pcVar4_mgE = st::fn_006B0140(0x267e,g_hINSTANCE_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar4_mgE;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4_mgE + 1;
      cVar1 = *pcVar4_mgE;
      pcVar4_mgE = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    puVar10 = local_450;
    do {
      puVar11 = puVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      puVar11 = (uint *)((int)puVar10 + 1);
      uVar6 = *puVar10;
      puVar10 = puVar11;
    } while ((char)uVar6 != '\0');
    pcVar8 = pcVar8 + -uVar5;
    pcVar12 = (char *)((int)puVar11 + -1);
    memmove(pcVar12, pcVar8, uVar5); /* compiler REP MOVS byte copy */
    st::fn_00404381(local_8,local_450);
    g_currentExceptionFrame = local_50.previous;
    return;
  case CASE_1:
    pcVar4_mg8 = st::fn_006B0140(0x267a,g_hINSTANCE_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar4_mg8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4_mg8 + 1;
      cVar1 = *pcVar4_mg8;
      pcVar4_mg8 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    puVar10 = (uint *)(pcVar8 + -uVar5);
    puVar11 = local_450;
    memmove(puVar11, puVar10, uVar5); /* compiler REP MOVS byte copy */
    pcVar4_mg9 = st::fn_006B0140(0x267b,g_hINSTANCE_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar4_mg9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4_mg9 + 1;
      cVar1 = *pcVar4_mg9;
      pcVar4_mg9 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    puVar10 = local_450;
    do {
      puVar11 = puVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      puVar11 = (uint *)((int)puVar10 + 1);
      uVar6 = *puVar10;
      puVar10 = puVar11;
    } while ((char)uVar6 != '\0');
    pcVar8 = pcVar8 + -uVar5;
    pcVar12 = (char *)((int)puVar11 + -1);
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar5 = uVar5 & 3; pcVar9 = local_8, uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar12 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar12 = pcVar12 + 1;
    }
    if (local_8->field_003C == 0) {
      uVar5 = local_8->field_0040;
      if (uVar5 < param_2) {
        param_2 = uVar5;
      }
    }
    else {
      DVar3 = st::external_000000DA();
      uVar5 = pcVar9->field_0040;
      param_2 = DVar3 - pcVar9->field_0044;
      if (uVar5 < param_2) {
        param_2 = uVar5;
      }
    }
    if (param_2 == 0) {
      param_2 = 1;
    }
    uVar5 = (param_2 * 100) / uVar5;
    if (uVar5 != pcVar9->field_0050) {
      if (0 < (int)uVar5) {
        local_c = uVar5;
        do {
          uVar6 = 0xffffffff;
          pcVar8 = &DAT_007c8fec;
          do {
            pcVar12 = pcVar8;
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            pcVar12 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar12;
          } while (cVar1 != '\0');
          uVar6 = ~uVar6;
          iVar7 = -1;
          puVar10 = local_450;
          do {
            puVar11 = puVar10;
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            puVar11 = (uint *)((int)puVar10 + 1);
            uVar4 = *puVar10;
            puVar10 = puVar11;
          } while ((char)uVar4 != '\0');
          pcVar8 = pcVar12 + -uVar6;
          pcVar12 = (char *)((int)puVar11 + -1);
          for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar12 = pcVar12 + 4;
          }
          uVar4 = local_c - 1;
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pcVar12 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar12 = pcVar12 + 1;
          }
          local_c = uVar4;
          pcVar9 = local_8;
        } while (uVar4 != 0);
      }
      st::fn_00404381(pcVar9,local_450);
      pcVar9->field_0050 = uVar5;
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if ((code *)pcVar9->field_0058 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)pcVar9->field_0058)(pcVar9->field_0054);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    break;
  case CASE_2:
    local_8->field_003C = -1;
    pcVar4_mg3 = st::fn_006B0140(0x267a,g_hINSTANCE_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar4_mg3;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4_mg3 + 1;
      cVar1 = *pcVar4_mg3;
      pcVar4_mg3 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    puVar10 = (uint *)(pcVar8 + -uVar5);
    puVar11 = local_450;
    memmove(puVar11, puVar10, uVar5); /* compiler REP MOVS byte copy */
    pcVar4_mg4 = st::fn_006B0140(0x267c,g_hINSTANCE_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar4_mg4;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4_mg4 + 1;
      cVar1 = *pcVar4_mg4;
      pcVar4_mg4 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    puVar10 = local_450;
    do {
      puVar11 = puVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      puVar11 = (uint *)((int)puVar10 + 1);
      uVar6 = *puVar10;
      puVar10 = puVar11;
    } while ((char)uVar6 != '\0');
    pcVar8 = pcVar8 + -uVar5;
    pcVar12 = (char *)((int)puVar11 + -1);
    memmove(pcVar12, pcVar8, uVar5); /* compiler REP MOVS byte copy */
    uVar6 = 0;
    goto joined_r0x00555393;
  case CASE_3:
    local_8->field_003C = -1;
    pcVar4_mg0 = st::fn_006B0140(0x267a,g_hINSTANCE_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar4_mg0;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4_mg0 + 1;
      cVar1 = *pcVar4_mg0;
      pcVar4_mg0 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    puVar10 = (uint *)(pcVar8 + -uVar5);
    puVar11 = local_450;
    memmove(puVar11, puVar10, uVar5); /* compiler REP MOVS byte copy */
    pcVar4_mg1 = st::fn_006B0140(0x267d,g_hINSTANCE_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar8 = pcVar4_mg1;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar8 = pcVar4_mg1 + 1;
      cVar1 = *pcVar4_mg1;
      pcVar4_mg1 = pcVar8;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    iVar7 = -1;
    puVar10 = local_450;
    do {
      puVar11 = puVar10;
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      puVar11 = (uint *)((int)puVar10 + 1);
      uVar6 = *puVar10;
      puVar10 = puVar11;
    } while ((char)uVar6 != '\0');
    pcVar8 = pcVar8 + -uVar5;
    pcVar12 = (char *)((int)puVar11 + -1);
    memmove(pcVar12, pcVar8, uVar5); /* compiler REP MOVS byte copy */
joined_r0x00555393:
    if (param_3 != nullptr) {
      uVar5 = 0xffffffff;
      do {
        pcVar4_mg6 = param_3;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar4_mg6 = param_3 + 1;
        cVar1 = *param_3;
        param_3 = pcVar4_mg6;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar7 = -1;
      puVar10 = local_450;
      do {
        puVar11 = puVar10;
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        puVar11 = (uint *)((int)puVar10 + 1);
        uVar6 = *puVar10;
        puVar10 = puVar11;
      } while ((char)uVar6 != '\0');
      pcVar8 = pcVar4_mg6 + -uVar5;
      pcVar12 = (char *)((int)puVar11 + -1);
      memmove(pcVar12, pcVar8, uVar5); /* compiler REP MOVS byte copy */
    }
    st::fn_00401230(pcVar9,(char *)local_450);
    g_currentExceptionFrame = local_50.previous;
    return;
  default:
    if ((code *)local_8->field_0058 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (*(code *)local_8->field_0058)(local_8->field_0054);
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

