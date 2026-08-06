#include "st/generated.hpp"
// Generated translation unit: source/original/Start/sid_obj.cpp

// 005D7A50 SIDTy::InitSID
#line 4 "decomp/ST.exe/functions/005D7A50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::InitSID */

void __thiscall st::fn_005D7A50(SIDTy *this)

{
  uint *puVar1;
  SIDTy *this_00;
  int iVar3;
  int local_EAX_181;
  ushort *puVar4;
  undefined4 *puVar5;
  int uVar3;
  int local_EAX_410;
  DArrayTy *pDVar6;
  int local_EAX_923;
  int iVar7;
  uint uVar8;
  uint uVar9;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    puVar5 = &local_8->field_1A60;
    st::fn_007158A0
              ((SpriteClassTy *)puVar5,(int *)g_ddxContext_008075A8,0x2f,'\a',nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*puVar5 + 4))(PTR_00806784,7,0,"MM_SID",0xffffffff);
    this_00->field_1A7C = 0x2e;
    this_00->field_1A80 = 0x193;
    this_00->field_1A68 = 0;
    if (this_00->field_1A64 != 0xffffffff) {
      st::fn_006B3730
                ((uint *)this_00->field_1AA8,this_00->field_1A64,this_00->field_1A68,
                 this_00->field_1A7C,this_00->field_1A80);
    }
    iVar3 = 1;
    puVar4 = g_startSystem_0081176C->field_002C + 0x14;
    local_EAX_181 = st::fn_006B4FE0((int)g_startSystem_0081176C->field_002C);
    puVar4 = (ushort *)
             st::fn_006B50C0(0x15e,0xa5,(uint)g_startSystem_0081176C->field_002C[7],local_EAX_181,
                          (undefined4 *)puVar4,iVar3);
    this_00->field_1CB8 = puVar4;
    uVar9 = *(uint *)(puVar4 + 10);
    if (uVar9 == 0) {
      uVar9 = ((uint)puVar4[7] * *(int *)(puVar4 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar4 + 4);
    }
    puVar5 = (undefined4 *)st::fn_006B4FA0((int *)puVar4);
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    iVar3 = 1;
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar4 = g_startSystem_0081176C->field_002C + 0x14;
    uVar3 = st::fn_006B4FE0((int)g_startSystem_0081176C->field_002C);
    puVar4 = (ushort *)
             st::fn_006B50C0(0x13e,0xe,(uint)g_startSystem_0081176C->field_002C[7],uVar3,
                          (undefined4 *)puVar4,iVar3);
    this_00->field_1CBC = puVar4;
    uVar9 = *(uint *)(puVar4 + 10);
    if (uVar9 == 0) {
      uVar9 = ((uint)puVar4[7] * *(int *)(puVar4 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar4 + 4);
    }
    puVar5 = (undefined4 *)st::fn_006B4FA0((int *)puVar4);
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    iVar3 = 1;
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    puVar4 = g_startSystem_0081176C->field_002C + 0x14;
    local_EAX_410 = st::fn_006B4FE0((int)g_startSystem_0081176C->field_002C);
    puVar4 = (ushort *)
             st::fn_006B50C0(0x104,0x28,(uint)g_startSystem_0081176C->field_002C[7],local_EAX_410,
                          (undefined4 *)puVar4,iVar3);
    this_00->field_1CC0 = puVar4;
    uVar9 = *(uint *)(puVar4 + 10);
    if (uVar9 == 0) {
      uVar9 = ((uint)puVar4[7] * *(int *)(puVar4 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar4 + 4);
    }
    puVar5 = (undefined4 *)st::fn_006B4FA0((int *)puVar4);
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    st::fn_00402D3D(this_00);
    puVar4 = this_00->field_1CB8;
    puVar1 = &this_00->field_1CB4;
    st::fn_006B2330(g_ddxContext_008075A8,puVar1,0x2e,0x4023f6,*(uint *)(puVar4 + 2),
                 *(uint *)(puVar4 + 4),puVar4);
    st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar1,0xffffffff,0xe1,0x1a9);
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar1);
    st::fn_007158A0
              ((SpriteClassTy *)&this_00->field_1B01,(int *)g_ddxContext_008075A8,0x2d,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_00->field_1B01 + 4))(PTR_00806784,7,0,"SID_SLDUP",0xffffffff);
    this_00->field_1B1D = 0x22b;
    this_00->field_1B21 = 0x1be;
    this_00->field_1B09 = 0;
    if (this_00->field_1B05 != 0xffffffff) {
      st::fn_006B3AF0((int *)this_00->field_1B49,this_00->field_1B05);
    }
    st::fn_007158A0
              ((SpriteClassTy *)&this_00->field_1B92,(int *)g_ddxContext_008075A8,0x2d,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_00->field_1B92 + 4))(PTR_00806784,7,0,"SID_SLDDN",0xffffffff);
    this_00->field_1BAE = 0x22b;
    this_00->field_1BB2 = 0x211;
    this_00->field_1B9A = 0;
    if (this_00->field_1B96 != 0xffffffff) {
      st::fn_006B3AF0((int *)this_00->field_1BDA,this_00->field_1B96);
    }
    st::fn_007158A0
              ((SpriteClassTy *)&this_00->field_1C23,(int *)g_ddxContext_008075A8,0x2d,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_00->field_1C23 + 4))(PTR_00806784,7,0,"SID_SLDT",0xffffffff);
    this_00->field_1C3F = 0x22f;
    this_00->field_1C43 = 0x1d3;
    this_00->field_1C2B = 0;
    if (this_00->field_1C27 != 0xffffffff) {
      st::fn_006B3AF0((int *)this_00->field_1C6B,this_00->field_1C27);
    }
    pDVar6 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_1CD0 = pDVar6;
    st::fn_006B6020(pDVar6,0,&DAT_008016a0);
    iVar3 = 1;
    puVar4 = this_00->field_1CB8 + 0x14;
    local_EAX_923 = st::fn_006B4FE0((int)this_00->field_1CB8);
    puVar4 = (ushort *)
             st::fn_006B50C0(0x156,0xe,(uint)this_00->field_1CB8[7],local_EAX_923,(undefined4 *)puVar4,
                          iVar3);
    this_00->field_1CC8 = puVar4;
    this_00->field_0065 = 3;
    st::fn_00404BF1(this_00,1,'\0',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar7 = st::fn_006AD4D0("E:\\__titans\\Start\\sid_obj.cpp",0x49,0,iVar3,"%s",
                             "SIDTy::InitSID");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\sid_obj.cpp",0x49);
  return;
}

// 005D7F80 SIDTy::DoneSID
#line 4 "decomp/ST.exe/functions/005D7F80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::DoneSID */

void __thiscall st::fn_005D7F80(SIDTy *this)

{
  SIDTy *pSVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (errorCode == 0) {
    st::fn_0040458E((MMObjTy *)local_8);
    if (pSVar2->field_1CD0 != nullptr) {
      st::fn_006B5570(pSVar2->field_1CD0);
    }
    pSVar2->field_1CD0 = nullptr;
    if (pSVar2->field_1CCC != nullptr) {
      st::fn_006B5570(pSVar2->field_1CCC);
    }
    pSVar2->field_1CCC = nullptr;
    st::fn_00715AB0((SpriteClassTy *)&pSVar2->field_1A60);
    st::fn_00715AB0((SpriteClassTy *)&pSVar2->field_1B01);
    st::fn_00715AB0((SpriteClassTy *)&pSVar2->field_1B92);
    st::fn_00715AB0((SpriteClassTy *)&pSVar2->field_1C23);
    if (pSVar2->field_1CB4 != 0xffffffff) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,pSVar2->field_1CB4);
    }
    pSVar2->field_1CB4 = 0xffffffff;
    if (pSVar2->field_1CB8 != nullptr) {
      st::fn_006AB060(&pSVar2->field_1CB8);
    }
    if (pSVar2->field_1CC8 != nullptr) {
      st::fn_006AB060(&pSVar2->field_1CC8);
    }
    if (pSVar2->field_1CBC != nullptr) {
      st::fn_006AB060(&pSVar2->field_1CBC);
    }
    if (pSVar2->field_1CC0 != nullptr) {
      st::fn_006AB060(&pSVar2->field_1CC0);
    }
    if (pSVar2->field_004D != 0) {
      st::fn_006E3B50((AppClassTy *)&DAT_00807620,(undefined4 *)&pSVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\sid_obj.cpp",0x62,0,errorCode,"%s"
                             ,"SIDTy::DoneSID");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\sid_obj.cpp",0x62);
  return;
}

// 005D8160 SIDTy::PaintSID
#line 4 "decomp/ST.exe/functions/005D8160/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PaintSID */

void __thiscall st::fn_005D8160(SIDTy *this)

{
  InternalExceptionFrame *pIVar2;
  int errorCode;
  int iVar3;
  int local_44 [16];

  pIVar2 = g_currentExceptionFrame;
  errorCode = st::fn_0072D7F0(local_44,0);
  if (errorCode == 0) {
    g_currentExceptionFrame = pIVar2;
    return;
  }
  g_currentExceptionFrame = pIVar2;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\sid_obj.cpp",0x6b,0,errorCode,"%s"
                             ,"SIDTy::PaintSID");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\sid_obj.cpp",0x6b);
  return;
}

// 005D81F0 SIDTy::NoneSID
#line 4 "decomp/ST.exe/functions/005D81F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::NoneSID
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NoneSID(SIDTy * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005D831F RET | 005D8387 RET | 005D83CB RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_005D81F0(SIDTy *this)

{
  SIDTy *this_00;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_50;
  SIDTy *local_c;
  int local_8;

  local_8 = 1;
  local_c = this;
  DVar2 = st::external_000000DA();
  this->field_0061 = DVar2;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\sid_obj.cpp",0x98,0,iVar3,"%s",
                               "SIDTy::NoneSID");
    if (iVar4 == 0) {
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\sid_obj.cpp",0x98);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (((local_c->field_0065 == '\x01') && (local_c->field_1CC4 != (HANDLE)0x0)) &&
     (DVar2 = st::external_0000006D(local_c->field_1CC4,0), DVar2 == 0)) {
    st::external_0000006E(this_00->field_1CC4);
    st::fn_0040392C(this_00);
    this_00->field_002D = 5;
    puVar5 = this_00->field_1AF1;
    iVar3 = 2;
    do {
      if (*puVar5 != 0) {
        st::fn_006E6080(this_00,2,*puVar5,(undefined4 *)&this_00->field_0x1d);
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (this_00->field_0065 == '\x03') {
    if (this_00->field_1A68 < this_00->field_1A6C + -1) {
      this_00->field_1A68 = this_00->field_1A68 + 1;
      if (this_00->field_1A64 != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)this_00->field_1AA8,this_00->field_1A64,this_00->field_1A68,
                   this_00->field_1A7C,this_00->field_1A80);
      }
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0065 = 1;
      st::fn_004030F8(this_00);
    }
  }
  else if (this_00->field_0065 == '\x04') {
    if (0 < this_00->field_1A68) {
      this_00->field_1A68 = this_00->field_1A68 + -1;
      if (this_00->field_1A64 != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)this_00->field_1AA8,this_00->field_1A64,this_00->field_1A68,
                   this_00->field_1A7C,this_00->field_1A80);
      }
      local_8 = 0;
    }
    if (local_8 != 0) {
      this_00->field_0065 = 2;
      this_00->field_0045 = 0x200;
      this_00->field_0049 = 0;
      this_00->field_004D = 0x693f;
      st::fn_00404DB8((MTaskTy *)this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 005D8450 SIDTy::CreateCtrls
#line 4 "decomp/ST.exe/functions/005D8450/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::CreateCtrls */

void __thiscall st::fn_005D8450(SIDTy *this)

{
  undefined1 *lpPathName;
  char cVar1;
  SIDTy *this_00;
  int iVar3;
  HANDLE pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  ccFntTy **ppcVar12;
  ccFntTy *local_db0 [8];
  DArrayTy *local_d90;
  undefined4 local_d64;
  undefined4 local_d60;
  undefined4 local_d5c;
  undefined4 local_d24;
  undefined4 local_d20;
  undefined4 local_d1c;
  undefined4 local_554;
  undefined4 local_550;
  undefined4 local_524 [10];
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_49c;
  undefined4 local_498;
  undefined4 local_494;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_214;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_54;
  InternalExceptionFrame local_50;
  SIDTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\sid_obj.cpp",0x104,0,iVar3,"%s",
                               "SIDTy::CreateCtrls");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\sid_obj.cpp",0x104);
    return;
  }
  if (local_8->field_1CC4 != (HANDLE)0x0) {
    st::external_00000060(local_8->field_1CC4);
    this_00->field_1CC4 = (HANDLE)0x0;
  }
  uVar6 = 0xffffffff;
  pcVar8 = &DAT_00807680;
  do {
    pcVar10 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  pcVar8 = pcVar10 + -uVar6;
  pcVar10 = &this_00->field_1CD4;
  memmove(pcVar10, pcVar8, uVar6); /* compiler REP MOVS byte copy */
  uVar7 = 0;
  uVar6 = 0xffffffff;
  pcVar8 = PTR_s_SAVEGAME__0079c19c;
  do {
    pcVar10 = pcVar8;
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    pcVar10 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar10;
  } while (cVar1 != '\0');
  uVar6 = ~uVar6;
  iVar3 = -1;
  pcVar8 = &this_00->field_1CD4;
  do {
    pcVar9 = pcVar8;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar9 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar9;
  } while (cVar1 != '\0');
  pcVar8 = pcVar10 + -uVar6;
  pcVar10 = pcVar9 + -1;
  memmove(pcVar10, pcVar8, uVar6); /* compiler REP MOVS byte copy */
  lpPathName = &this_00->field_1CD4;
  st::fn_006B78C0(lpPathName,lpPathName);
  pvVar4 = st::external_00000074(lpPathName,0,2);
  this_00->field_1CC4 = pvVar4;
  if (pvVar4 == (HANDLE)0xffffffff) {
    this_00->field_1CC4 = (HANDLE)0x0;
  }
  memset(local_524, 0, 0x4d4); /* compiler bulk-zero initialization */
  iVar3 = 0;
  local_524[0] = 0;
  local_524[2] = 0xe4;
  local_524[3] = 0x1be;
  local_524[4] = 0x145;
  local_524[5] = 100;
  local_524[6] = 0;
  local_524[7] = 0;
  if (DAT_0080734c != '\0') {
    local_54 = 1;
  }
  local_3ec = this_00->field_1B1D;
  local_2ec = 1;
  local_3e8 = this_00->field_1B21;
  local_3e4 = this_00->field_1B25;
  local_3e0 = this_00->field_1B29;
  local_26c = this_00->field_1BAE;
  local_268 = this_00->field_1BB2;
  local_2e8 = 1;
  local_16c = 1;
  local_168 = 1;
  local_264 = this_00->field_1BB6;
  local_f4 = 1;
  local_e8 = this_00->field_1C3F;
  local_4fc = this_00->field_0008;
  local_260 = this_00->field_1BBA;
  local_e4 = this_00->field_1C43;
  local_e0 = this_00->field_1C47;
  local_3f4 = 0;
  local_274 = 0;
  local_ec = 0;
  local_4f8 = 2;
  local_4f4 = 0x8160;
  local_4d8 = 2;
  local_4d4 = 0x8161;
  local_4b8 = 2;
  local_4b4 = 0x8162;
  local_498 = 2;
  local_494 = 0x8163;
  local_3f8 = 2;
  local_3f0 = 2;
  local_2e4 = 500;
  local_2e0 = 0x32;
  local_390 = 2;
  local_38c = 0x8164;
  local_278 = 2;
  local_270 = 2;
  local_164 = 500;
  local_160 = 0x32;
  local_210 = 2;
  local_20c = 0x8165;
  local_f8 = 3;
  local_dc = 0x3a;
  local_d8 = 8;
  local_a0 = 2;
  local_9c = 0x8166;
  local_4dc = local_4fc;
  local_4bc = local_4fc;
  local_49c = local_4fc;
  local_394 = local_4fc;
  local_214 = local_4fc;
  local_a4 = local_4fc;
  (*this_00->field_000C->vtable->CreateObject)
            ((SystemClassTy *)this_00->field_000C,7,this_00->field_1AF1,nullptr,local_524,0);
  ppcVar12 = local_db0;
  for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar12 = nullptr;
    ppcVar12 = ppcVar12 + 1;
  }
  local_db0[0] = nullptr;
  local_db0[1] = (ccFntTy *)0x9;
  local_db0[2] = g_startSystem_0081176C->field_0034;
  local_d90 = this_00->field_1CD0;
  local_d64 = this_00->field_0008;
  local_db0[3] = (ccFntTy *)0xe4;
  local_db0[4] = (ccFntTy *)0x1aa;
  local_db0[5] = (ccFntTy *)0x156;
  local_db0[6] = (ccFntTy *)0x10;
  local_550 = 1;
  local_554 = 1;
  local_db0[7] = (ccFntTy *)0x104;
  local_d60 = 2;
  local_d5c = 0x697f;
  local_d20 = 2;
  local_d1c = 0x68ff;
  local_d24 = local_d64;
  (*this_00->field_000C->vtable->CreateObject)
            ((SystemClassTy *)this_00->field_000C,6,this_00->field_1AF1 + 1,nullptr,local_db0,1);
  uVar6 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x1e8,0x228,0x55,0x12,0x6900,0x6980);
  this_00->field_1AF9[0] = uVar6;
  uVar6 = st::fn_0040361B((MMObjTy *)this_00,1,1,0x1e8,0x23b,0x55,0x12,0x6901,0x6981);
  this_00->field_1AF9[1] = uVar6;
  st::fn_0040392C(this_00);
  st::fn_006B3430((int *)g_ddxContext_008075A8,this_00->field_1CB4);
  if (this_00->field_1B05 != 0xffffffff) {
    st::fn_006B34D0
              ((uint *)this_00->field_1B49,this_00->field_1B05,0xfffffffe,this_00->field_1B1D,
               this_00->field_1B21);
  }
  if (this_00->field_1B96 != 0xffffffff) {
    st::fn_006B34D0
              ((uint *)this_00->field_1BDA,this_00->field_1B96,0xfffffffe,this_00->field_1BAE,
               this_00->field_1BB2);
  }
  if (this_00->field_1C27 != 0xffffffff) {
    st::fn_006B34D0
              ((uint *)this_00->field_1C6B,this_00->field_1C27,0xfffffffe,this_00->field_1C3F,
               this_00->field_1C43);
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 005D8A90 SIDTy::DeleteCtrls
#line 4 "decomp/ST.exe/functions/005D8A90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::DeleteCtrls */

void __thiscall st::fn_005D8A90(SIDTy *this)

{
  SIDTy *pSVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    iVar3 = 4;
    puVar5 = local_8->field_1AF1;
    do {
      if (*puVar5 != 0) {
        st::fn_006E56B0(pSVar2->field_000C,*puVar5);
      }
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,pSVar2->field_1CB4);
    if (pSVar2->field_1B05 != 0xffffffff) {
      st::fn_006B3AF0((int *)pSVar2->field_1B49,pSVar2->field_1B05);
    }
    if (pSVar2->field_1B96 != 0xffffffff) {
      st::fn_006B3AF0((int *)pSVar2->field_1BDA,pSVar2->field_1B96);
    }
    if (pSVar2->field_1C27 != 0xffffffff) {
      st::fn_006B3AF0((int *)pSVar2->field_1C6B,pSVar2->field_1C27);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\sid_obj.cpp",0x110,0,iVar3,"%s",
                             "SIDTy::DeleteCtrls");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\sid_obj.cpp",0x110);
  return;
}

// 005D8BF0 SIDTy::PrepFiles
#line 4 "decomp/ST.exe/functions/005D8BF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PrepFiles

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005D8BF0(SIDTy *this)

{
  char cVar1;
  byte bVar2;
  int iVar4;
  DArrayTy *pDVar5;
  HANDLE hFindFile;
  cMf32 *this_00;
  BOOL BVar6;
  dword dVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  SIDTy *this_01;
  CHAR *pCVar14;
  char *pcVar15;
  byte *pbVar16;
  byte *pbVar17;
  bool bVar18;
  _WIN32_FIND_DATAA local_21c;
  byte local_dc [64];
  InternalExceptionFrame local_9c;
  InternalExceptionFrame local_58;
  HANDLE local_14;
  int local_10;
  SIDTy *local_c;
  dword local_8;

  local_10 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_c = this;
  iVar4 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_01 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar12 = st::fn_006AD4D0("E:\\__titans\\Start\\sid_obj.cpp",0x167,0,iVar4,"%s"
                                ,"SIDTy::PrepFiles");
    if (iVar12 == 0) {
      st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\sid_obj.cpp",0x167);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_c->field_1CCC != nullptr) {
    st::fn_006B5570(local_c->field_1CCC);
    this_01->field_1CCC = nullptr;
  }
  pDVar5 = st::fn_006B54F0(nullptr,10,10);
  this_01->field_1CCC = pDVar5;
  this_01->field_002D = 0x20;
  this_01->field_0031 = 0;
  st::fn_006E6080(this_01,2,this_01->field_1AF1[0],(undefined4 *)&this_01->field_0x1d);
  uVar10 = this_01->field_1AF1[1];
  this_01->field_002D = 0x29;
  this_01->field_0031 = 0x19;
  st::fn_006E6080(this_01,2,uVar10,(undefined4 *)&this_01->field_0x1d);
  st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_01->field_1CB8,0,3,0x15,0x142,0x62,0xff);
  st::fn_006B35D0((int *)g_ddxContext_008075A8,this_01->field_1CB4);
  st::external_00000080(&this_01->field_1CD4,"%s%s",&DAT_00807680,PTR_s_SAVEGAME__0079c19c);
  uVar10 = 0xffffffff;
  pcVar13 = &DAT_007cc8bc;
  do {
    pcVar8 = pcVar13;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar8 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar8;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  iVar4 = -1;
  pcVar13 = &this_01->field_1CD4;
  do {
    pcVar15 = pcVar13;
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    pcVar15 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar15;
  } while (cVar1 != '\0');
  pcVar13 = pcVar8 + -uVar10;
  pcVar8 = pcVar15 + -1;
  memmove(pcVar8, pcVar13, uVar10); /* compiler REP MOVS byte copy */
  uVar11 = 0;
  hFindFile = st::external_00000070(&this_01->field_1CD4,&local_21c);
  local_14 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if (((byte)local_21c.dwFileAttributes & 0x10) != 0) {
        pbVar16 = &DAT_007cc8b8;
        pCVar14 = local_21c.cFileName;
        do {
          bVar2 = *pCVar14;
          bVar18 = bVar2 < *pbVar16;
          if (bVar2 != *pbVar16) {
LAB_005d8d7a:
            iVar4 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
            goto LAB_005d8d7f;
          }
          if (bVar2 == 0) break;
          bVar2 = pCVar14[1];
          bVar18 = bVar2 < pbVar16[1];
          if (bVar2 != pbVar16[1]) goto LAB_005d8d7a;
          pCVar14 = pCVar14 + 2;
          pbVar16 = pbVar16 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_005d8d7f:
        if (iVar4 != 0) {
          pbVar16 = &DAT_007cc8b4;
          pCVar14 = local_21c.cFileName;
          do {
            bVar2 = *pCVar14;
            bVar18 = bVar2 < *pbVar16;
            if (bVar2 != *pbVar16) {
LAB_005d8dba:
              iVar4 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
              goto LAB_005d8dbf;
            }
            if (bVar2 == 0) break;
            bVar2 = pCVar14[1];
            bVar18 = bVar2 < pbVar16[1];
            if (bVar2 != pbVar16[1]) goto LAB_005d8dba;
            pCVar14 = pCVar14 + 2;
            pbVar16 = pbVar16 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
LAB_005d8dbf:
          if (iVar4 != 0) {
            uVar10 = 0xffffffff;
            pCVar14 = local_21c.cFileName;
            do {
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              cVar1 = *pCVar14;
              pCVar14 = pCVar14 + 1;
            } while (cVar1 != '\0');
            if (~uVar10 - 1 < 0x40) {
              st::external_00000080(&this_01->field_1CD4,"%s%s%s\\%s",&DAT_00807680,
                        PTR_s_SAVEGAME__0079c19c,local_21c.cFileName,PTR_s_PL_LOG_0079c1a0);
              local_9c.previous = g_currentExceptionFrame;
              g_currentExceptionFrame = &local_9c;
              iVar4 = st::fn_0072D7F0(local_9c.jumpBuffer,0);
              this_01 = local_c;
              if (iVar4 == 0) {
                this_00 = (cMf32 *)st::fn_006F0EC0
                                             (0x345,&local_c->field_1CD4,0,0,0);
                if (this_00 != nullptr) {
                  iVar4 = st::fn_006F21C0(this_00,0xc,PTR_s_OPTIONS_PLAYER_0079c1a4);
                  if (iVar4 == 0) {
                    st::fn_006B5AA0(&this_01->field_1CCC->flags,local_21c.cFileName);
                  }
                  st::fn_006F1170(this_00);
                }
                g_currentExceptionFrame = local_9c.previous;
              }
              else {
                g_currentExceptionFrame = local_9c.previous;
              }
            }
          }
        }
      }
      hFindFile = local_14;
      BVar6 = st::external_00000071(local_14,&local_21c);
    } while (BVar6 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    st::external_00000072(hFindFile);
  }
  uVar10 = 0xffffffff;
  pcVar13 = (char *)&DAT_00807ddd;
  do {
    pcVar8 = pcVar13;
    if (uVar10 == 0) break;
    uVar10 = uVar10 - 1;
    pcVar8 = pcVar13 + 1;
    cVar1 = *pcVar13;
    pcVar13 = pcVar8;
  } while (cVar1 != '\0');
  uVar10 = ~uVar10;
  pbVar16 = (byte *)(pcVar8 + -uVar10);
  pbVar17 = local_dc;
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *(undefined4 *)pbVar17 = *(undefined4 *)pbVar16;
    pbVar16 = pbVar16 + 4;
    pbVar17 = pbVar17 + 4;
  }
  uVar11 = this_01->field_1AF1[0];
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *pbVar17 = *pbVar16;
    pbVar16 = pbVar16 + 1;
    pbVar17 = pbVar17 + 1;
  }
  this_01->field_002D = 0x28;
  this_01->field_0031 = this_01->field_1CCC->elementSize;
  st::fn_006E6080(this_01,2,uVar11,(undefined4 *)&this_01->field_0x1d);
  pDVar5 = this_01->field_1CCC;
  dVar7 = pDVar5->elementSize;
  if ((int)dVar7 < 1) {
    this_01->field_002D = 0x22;
    this_01->field_0031 = 0;
    st::fn_006E6080(this_01,2,this_01->field_1AF1[0],(undefined4 *)&this_01->field_0x1d);
    uVar10 = this_01->field_1AF1[0];
    this_01->field_002D = 5;
  }
  else {
    if (1 < (int)dVar7) {
      do {
        local_8 = 0;
        uVar10 = 0;
        if (0 < (int)(dVar7 - 1)) {
          do {
            uVar11 = uVar10 + 1;
            if ((int)uVar11 < (int)dVar7) {
              pcVar13 = *(char **)(pDVar5->growCapacity + 4 + uVar10 * 4);
            }
            else {
              pcVar13 = nullptr;
            }
            if ((int)uVar10 < (int)dVar7) {
              pcVar8 = *(char **)(pDVar5->growCapacity + uVar10 * 4);
            }
            else {
              pcVar8 = nullptr;
            }
            iVar4 = st::fn_0072E620(pcVar8,pcVar13);
            if (0 < iVar4) {
              st::fn_006B8200((AnonShape_006B8200_800652FF *)this_01->field_1CCC,uVar10,uVar11);
              local_8 = 1;
            }
            pDVar5 = this_01->field_1CCC;
            dVar7 = pDVar5->elementSize;
            uVar10 = uVar11;
          } while ((int)uVar11 < (int)(dVar7 - 1));
        }
      } while (local_8 != 0);
    }
    this_01->field_002D = 0x20;
    this_01->field_0031 = 1;
    st::fn_006E6080(this_01,2,this_01->field_1AF1[0],(undefined4 *)&this_01->field_0x1d);
    iVar12 = 0;
    local_8 = this_01->field_1CCC->elementSize;
    iVar4 = local_10;
    if (0 < (int)local_8) {
      if ((int)local_8 < 1) {
        pbVar16 = nullptr;
        goto LAB_005d8fe2;
      }
      do {
        pbVar16 = *(byte **)(this_01->field_1CCC->growCapacity + iVar12 * 4);
LAB_005d8fe2:
        pbVar17 = local_dc;
        do {
          bVar2 = *pbVar16;
          bVar18 = bVar2 < *pbVar17;
          if (bVar2 != *pbVar17) {
LAB_005d900c:
            iVar9 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
            goto LAB_005d9011;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar16[1];
          bVar18 = bVar2 < pbVar17[1];
          if (bVar2 != pbVar17[1]) goto LAB_005d900c;
          pbVar16 = pbVar16 + 2;
          pbVar17 = pbVar17 + 2;
        } while (bVar2 != 0);
        iVar9 = 0;
LAB_005d9011:
        iVar4 = iVar12;
      } while ((iVar9 != 0) && (iVar12 = iVar12 + 1, iVar4 = local_10, iVar12 < (int)local_8));
    }
    local_10 = iVar4;
    uVar10 = this_01->field_1AF1[0];
    this_01->field_002D = 0x22;
    this_01->field_0031 = local_10;
  }
  st::fn_006E6080(this_01,2,uVar10,(undefined4 *)&this_01->field_0x1d);
  uVar10 = this_01->field_1AF1[1];
  this_01->field_002D = 0x29;
  this_01->field_0031 = 9;
  st::fn_006E6080(this_01,2,uVar10,(undefined4 *)&this_01->field_0x1d);
  st::fn_006B35D0((int *)g_ddxContext_008075A8,this_01->field_1CB4);
  g_currentExceptionFrame = local_58.previous;
  return;
}

// 005D9250 SIDTy::PaintExplanation
#line 4 "decomp/ST.exe/functions/005D9250/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::PaintExplanation

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005D9250(SIDTy *this)

{
  ushort *puVar1;
  SIDTy *pSVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  uint *resourceString;
  uint uVar7;
  ccFntTy *this_00;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  InternalExceptionFrame local_4c;
  SIDTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    st::fn_006B4170((RecoveredSourceFamily_dibcopy *)local_8->field_1CB8,0,0,0x7d,
                 *(int *)(local_8->field_1CC0 + 2),*(int *)(local_8->field_1CC0 + 4),0xff);
    puVar1 = pSVar3->field_1CC0;
    uVar8 = *(uint *)(puVar1 + 10);
    if (uVar8 == 0) {
      uVar8 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar1 + 4);
    }
    puVar5 = (undefined4 *)st::fn_006B4FA0((int *)puVar1);
    for (uVar7 = uVar8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)pSVar3->field_1CC0,0,0,0,0,0);
    if (pSVar3->field_1A5F == '\0') {
      iVar11 = -1;
      iVar10 = -1;
      uVar8 = 0;
      iVar9 = -1;
      iVar4 = -2;
      resourceString = (uint *)st::fn_006B0140(0x2521,g_hINSTANCE_00807618);
      this_00 = g_startSystem_0081176C->field_0034;
    }
    else {
      puVar5 = &DAT_00807ddd;
      resourceString = (uint *)&pSVar3->field_1CD4;
      pcVar6 = st::fn_006B0140(0x2520,g_hINSTANCE_00807618);
      st::external_00000080((LPSTR)resourceString,"&0%s\n&5%s&0?",pcVar6,puVar5);
      this_00 = g_startSystem_0081176C->field_0034;
      iVar11 = -1;
      iVar10 = -1;
      uVar8 = 0;
      iVar9 = -1;
      iVar4 = -2;
    }
    st::fn_00711B70(this_00,resourceString,iVar4,iVar9,uVar8,iVar10,iVar11);
    st::fn_006B5440(pSVar3->field_1CB8,0,0,0x7d,(uint)pSVar3->field_1CC0,0,0xff);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = st::fn_006AD4D0("E:\\__titans\\Start\\sid_obj.cpp",0x17b,0,iVar4,"%s",
                             "SIDTy::PaintExplanation");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\sid_obj.cpp",0x17b);
  return;
}

// 005D9470 SIDTy::GetMessage
#line 4 "decomp/ST.exe/functions/005D9470/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sid_obj.cpp
   SIDTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=005D9470; family_names=SIDTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:14,18:7,1c:0} */

int __thiscall st::fn_005D9470(SIDTy *this,STMessage *message)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar4;
  STMessageId SVar5;
  ushort *puVar6;
  int *piVar7;
  dword dVar8;
  SIDTy *this_00;
  DWORD DVar10;
  int iVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined4 *puVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar18;
  UINT resourceId;
  byte *pbVar19;
  char *pcVar20;
  byte *pbVar21;
  bool bVar22;
  DArrayTy *pDVar23;
  RecoveredRecord_MMMObjTy_005B6560 *pRVar24;
  int iVar25;
  InternalExceptionFrame local_64;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  SIDTy *local_10;
  dword local_c;
  uint *local_8;

  local_10 = this;
  DVar10 = st::fn_006E51B0(this->field_0010);
  this->field_0061 = DVar10;
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  iVar11 = st::fn_0072D7F0(local_64.jumpBuffer,0);
  this_00 = local_10;
  if (iVar11 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar25 = st::fn_006AD4D0("E:\\__titans\\Start\\sid_obj.cpp",0x212,0,iVar11,
                                "%s","SIDTy::GetMessage");
    if (iVar25 == 0) {
      st::fn_006A5E40(iVar11,0,"E:\\__titans\\Start\\sid_obj.cpp",0x212);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00402563(local_10,message);
  SVar5 = message->id;
  if (SVar5 < MESS_SHARED_6980) {
    if (SVar5 != MESS_SHARED_697F) {
      if (SVar5 < 6) {
        if (SVar5 == MESS_SHARED_0005) {
          st::fn_004029CD(this_00);
        }
        else if (SVar5 == MESS_ID_NONE) {
          st::fn_00403D64(this_00);
        }
        else if (SVar5 == MESS_ID_CREATE) {
          st::fn_004029AF(this_00);
        }
        else if (SVar5 == MESS_SHARED_0003) {
          st::fn_00405B78(this_00);
        }
      }
      else if (SVar5 == MESS_MMSGTY_68FF) {
        this_00->field_1A5F = 0;
        this_00->field_002D = message->id + 1;
        this_00->st::fn_00401280((STMessage *)&this_00->field_0x1d);
      }
      else if (SVar5 == MESS_SHARED_6900) {
        st::fn_00404BF1(this_00,10,'\x01',-1);
        uVar16 = this_00->field_1AF1[1];
        this_00->field_002D = 0x32;
        st::fn_006E6080(this_00,2,uVar16,(undefined4 *)&this_00->field_0x1d);
        if ((int)this_00->field_1CD0->elementSize < 1) {
          pcVar13 = nullptr;
        }
        else {
          pcVar13 = *(char **)this_00->field_1CD0->growCapacity;
        }
        uVar16 = 0xffffffff;
        do {
          pcVar20 = pcVar13;
          if (uVar16 == 0) break;
          uVar16 = uVar16 - 1;
          pcVar20 = pcVar13 + 1;
          cVar2 = *pcVar13;
          pcVar13 = pcVar20;
        } while (cVar2 != '\0');
        uVar16 = ~uVar16;
        puVar1 = &this_00->field_1CD4;
        pcVar13 = pcVar20 + -uVar16;
        pcVar20 = puVar1;
        memmove(pcVar20, pcVar13, uVar16); /* compiler REP MOVS byte copy */
        st::fn_006B7780(puVar1,puVar1);
        if (this_00->field_1CD4 != '\0') {
          if (this_00->field_1A5F == '\0') {
            local_8 = (uint *)0xffffffff;
            if ((int)this_00->field_1CD0->elementSize < 1) {
              pcVar13 = nullptr;
            }
            else {
              pcVar13 = *(char **)this_00->field_1CD0->growCapacity;
            }
            st::fn_0072E340((char *)&DAT_00807ddd,pcVar13,0x3f);
            puVar18 = nullptr;
            local_c = this_00->field_1CCC->elementSize;
            puVar15 = local_8;
            if (0 < (int)local_c) {
              if ((int)local_c < 1) {
                pbVar19 = nullptr;
                goto LAB_005d979c;
              }
              do {
                pbVar19 = *(byte **)(this_00->field_1CCC->growCapacity + (int)puVar18 * 4);
LAB_005d979c:
                pbVar21 = (byte *)&DAT_00807ddd;
                do {
                  bVar3 = *pbVar19;
                  bVar22 = bVar3 < *pbVar21;
                  if (bVar3 != *pbVar21) {
LAB_005d97c5:
                    iVar11 = (1 - (uint)bVar22) - (uint)(bVar22 != 0);
                    goto LAB_005d97ca;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar19[1];
                  bVar22 = bVar3 < pbVar21[1];
                  if (bVar3 != pbVar21[1]) goto LAB_005d97c5;
                  pbVar19 = pbVar19 + 2;
                  pbVar21 = pbVar21 + 2;
                } while (bVar3 != 0);
                iVar11 = 0;
LAB_005d97ca:
                puVar15 = puVar18;
              } while ((iVar11 != 0) &&
                      (puVar18 = (uint *)((int)puVar18 + 1), puVar15 = local_8,
                      (int)puVar18 < (int)local_c));
            }
            local_8 = puVar15;
            DAT_00807340 = 1;
            if ((int)local_8 < 0) {
              st::fn_00403D1E((AnonShape_005738D0_F693E267 *)&g_sound);
            }
            else {
              st::fn_004048B3((AnonShape_00572510_F06DC155 *)&g_sound);
            }
            if (DAT_00808446 != '\0') {
              st::fn_00403A8F(this_00);
              this_00->field_0065 = 4;
              st::fn_00404BF1(this_00,2,'\x01',-1);
              st::fn_006C18B0((uint)DAT_00807363);
            }
          }
          else {
            if ((int)this_00->field_1CD0->elementSize < 1) {
              uVar12 = 0;
            }
            else {
              uVar12 = *(undefined4 *)this_00->field_1CD0->growCapacity;
            }
            st::external_00000080(&this_00->field_1CD4,"%s%s%s",&DAT_00807680,PTR_s_SAVEGAME__0079c19c,
                      uVar12);
            st::fn_00725910(&this_00->field_1CD4,&DAT_007cc8bc,0,FUN_00725c20,0,0);
            st::fn_0040392C(this_00);
            this_00->field_1A5F = 0;
            st::fn_00402D3D(this_00);
            this_00->field_002D = 5;
            puVar15 = this_00->field_1AF9;
            iVar11 = 2;
            do {
              if (*puVar15 != 0) {
                st::fn_006E6080(this_00,2,*puVar15,(undefined4 *)&this_00->field_0x1d);
              }
              puVar15 = puVar15 + 1;
              iVar11 = iVar11 + -1;
            } while (iVar11 != 0);
          }
        }
      }
      else if (SVar5 == MESS_FSGSTY_6901) {
        st::fn_00404BF1(this_00,10,'\x01',-1);
        if (this_00->field_1A5F == '\0') {
          if (((char)DAT_00807ddd != '\0') && (this_00->field_1CCC->elementSize != 0)) {
            puVar1 = &this_00->field_0x1d;
            this_00->field_1A5F = 1;
            this_00->field_002D = 0x20;
            this_00->field_0031 = 0;
            st::fn_006E6080(this_00,2,this_00->field_1AF1[0],(undefined4 *)puVar1);
            uVar16 = this_00->field_1AF1[1];
            this_00->field_002D = 0x29;
            this_00->field_0031 = 0x19;
            st::fn_006E6080(this_00,2,uVar16,(undefined4 *)puVar1);
            this_00->field_002D = 5;
            puVar15 = this_00->field_1AF9;
            local_8 = (uint *)0x2;
            do {
              if (*puVar15 != 0) {
                st::fn_006E6080(this_00,2,*puVar15,(undefined4 *)puVar1);
              }
              puVar15 = puVar15 + 1;
              local_8 = (uint *)((int)local_8 - 1);
            } while (local_8 != nullptr);
            st::fn_00402D3D(this_00);
          }
        }
        else {
          this_00->field_1A5F = 0;
          st::fn_00402D3D(this_00);
          this_00->field_002D = 5;
          puVar15 = this_00->field_1AF9;
          iVar11 = 2;
          do {
            if (*puVar15 != 0) {
              st::fn_006E6080(this_00,2,*puVar15,(undefined4 *)&this_00->field_0x1d);
            }
            puVar15 = puVar15 + 1;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
          st::fn_0040392C(this_00);
        }
      }
      goto cf_common_exit_005D9CCB;
    }
    puVar6 = this_00->field_1CC8;
    local_8 = *(uint **)(puVar6 + 10);
    if (local_8 == nullptr) {
      local_8 = (uint *)(((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                        *(int *)(puVar6 + 4));
    }
    puVar14 = (undefined4 *)st::fn_006B4FA0((int *)puVar6);
    for (uVar16 = (uint)local_8 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
      *puVar14 = 0xffffffff;
      puVar14 = puVar14 + 1;
    }
    for (uVar16 = (uint)local_8 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
      *(undefined1 *)puVar14 = 0xff;
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    }
    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_00->field_1CC8,0,0,0,0,0);
    st::fn_007119C0(g_startSystem_0081176C->field_0034,*(uint **)(message->arg0).ptr,0,-1,2);
    uVar4 = (message->arg1).words.low;
    if ((uVar4 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
      uVar16 = (uint)(message->arg1).words.high;
      st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1CC8,0,(uint)uVar4,uVar16,
                   (uint)uVar4,uVar16 + 0xe,7,0xd);
    }
    puVar6 = this_00->field_1CC8;
    st::fn_006B55F0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_1CB8,0,4,1,(byte *)puVar6,0,0,0,
               *(int *)(puVar6 + 2),*(int *)(puVar6 + 4));
  }
  else {
    if (MESS_SIDTY_8163 < SVar5) {
      if (SVar5 == MESS_OPTPANELTY_8164) {
        pRVar24 = (RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1B01;
      }
      else {
        if (SVar5 != MESS_OPTPANELTY_8165) {
          if (SVar5 == MESS_SHARED_8166) {
            uVar16 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
            this_00->field_1C43 = uVar16;
            if (this_00->field_1C27 != 0xffffffff) {
              st::fn_006B3730
                        ((uint *)this_00->field_1C6B,this_00->field_1C27,this_00->field_1C2B,
                         this_00->field_1C3F,uVar16);
            }
          }
          goto cf_common_exit_005D9CCB;
        }
        pRVar24 = (RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1B92;
      }
      st::fn_004031D4((MMMObjTy *)this_00,pRVar24,(int)message,0);
      goto cf_common_exit_005D9CCB;
    }
    if (SVar5 == MESS_SIDTY_8163) {
      dVar8 = this_00->field_1CCC->elementSize;
      if (dVar8 == 0) {
        pDVar23 = this_00->field_1CD0;
        pcVar13 = (char *)&DAT_00807ddd;
      }
      else {
        if ((message->arg0).i32 < (int)dVar8) {
          pcVar13 = *(char **)(this_00->field_1CCC->growCapacity + (message->arg0).i32 * 4);
        }
        else {
          pcVar13 = nullptr;
        }
        st::fn_0072E340((char *)&DAT_00807ddd,pcVar13,0x3f);
        if ((message->arg0).i32 < (int)this_00->field_1CCC->elementSize) {
          pDVar23 = this_00->field_1CD0;
          pcVar13 = *(char **)(this_00->field_1CCC->growCapacity + (message->arg0).i32 * 4);
        }
        else {
          pDVar23 = this_00->field_1CD0;
          pcVar13 = nullptr;
        }
      }
      st::fn_006B6020(pDVar23,0,pcVar13);
      uVar16 = this_00->field_1AF1[1];
      this_00->field_002D = 0x33;
      this_00->field_0031 = this_00->field_1CD0;
      st::fn_006E6080(this_00,2,uVar16,(undefined4 *)&this_00->field_0x1d);
      goto cf_common_exit_005D9CCB;
    }
    if (MESS_SHARED_8160 < SVar5) {
      if (SVar5 == MESS_SIDTY_8161) {
        uVar16 = (uint)(message->arg0).words.low;
        if ((int)uVar16 < (int)this_00->field_1CCC->elementSize) {
          local_8 = *(uint **)(this_00->field_1CCC->growCapacity + uVar16 * 4);
        }
        else {
          local_8 = nullptr;
        }
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1CB8,0,
                     (message->arg1).words.low + 3,(message->arg1).words.high + 0x15,0x142,0xe,0xff);
        puVar6 = this_00->field_1CBC;
        local_c = *(dword *)(puVar6 + 10);
        if (local_c == 0) {
          local_c = ((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                    *(int *)(puVar6 + 4);
        }
        puVar14 = (undefined4 *)st::fn_006B4FA0((int *)puVar6);
        for (uVar16 = local_c >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
          *puVar14 = 0xffffffff;
          puVar14 = puVar14 + 1;
        }
        for (uVar16 = local_c & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
          *(undefined1 *)puVar14 = 0xff;
          puVar14 = (undefined4 *)((int)puVar14 + 1);
        }
        if (((message->arg0).words.high == 1) && (local_8 != nullptr)) {
          st::fn_006B5EE0((RecoveredSourceFamily_dibcopy *)this_00->field_1CB8,0,
                       (message->arg1).words.low + 3,(message->arg1).words.high + 0x15,0x142,0xe,
                       0x87,0xd);
        }
        st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_00->field_1CBC,0,0,0,0,0);
        st::fn_007119C0(g_startSystem_0081176C->field_0034,local_8,0,-1,2);
        st::fn_006B5440(this_00->field_1CB8,0,(message->arg1).words.low + 6,
                     (message->arg1).words.high + 0x15,(uint)this_00->field_1CBC,0,0xff);
        st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1CB4);
      }
      goto cf_common_exit_005D9CCB;
    }
    if (SVar5 == MESS_SHARED_8160) {
      (message->arg1).u32 = 0xe;
      goto cf_common_exit_005D9CCB;
    }
    if ((SVar5 < MESS_SHARED_6980) || (MESS_SIDTY_6981 < SVar5)) goto cf_common_exit_005D9CCB;
    piVar7 = (message->arg1).ptr;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)message->id + 0x81));
    local_20 = *piVar7 + -0xe1;
    local_18 = piVar7[2];
    local_1c = piVar7[1] - 0x1a9;
    local_14 = piVar7[3];
    st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1CB8,0,local_20,local_1c,local_18,
                 local_14,0xff);
    st::fn_00404C5F((MMObjTy *)this_00,(int)this_00->field_1CB8,&local_20,2,0x87,0xffffffff);
    if ((local_c & 0xff) == 1) {
      resourceId = (this_00->field_1A5F != '\0') + 0x24b8;
    }
    else {
      resourceId = (-(uint)(this_00->field_1A5F != '\0') & 0xfffffffd) + 0x24bd;
    }
    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_00->field_1CB8,0,local_20,local_1c
                     ,local_18,local_14);
    uVar16 = ((message->arg0).words.low != 1) + 2;
    iVar25 = -1;
    iVar11 = -1;
    puVar15 = (uint *)st::fn_006B0140(resourceId,g_hINSTANCE_00807618);
    st::fn_007119C0(g_startSystem_0081176C->field_0034,puVar15,iVar11,iVar25,uVar16);
  }
  st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1CB4);
cf_common_exit_005D9CCB:
  g_currentExceptionFrame = local_64.previous;
  iVar11 = st::fn_00401280((MMObjTy *)this_00,message);
  return iVar11;
}

