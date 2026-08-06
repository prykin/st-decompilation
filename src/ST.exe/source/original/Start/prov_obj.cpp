#include "st/generated.hpp"
// Generated translation unit: source/original/Start/prov_obj.cpp

// 005B9730 PrividerTy::OutListProc
#line 4 "decomp/ST.exe/functions/005B9730/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::OutListProc */

void __thiscall
st::fn_005B9730
          (PrividerTy *this,int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
          DWORD param_6,DWORD param_7,int param_8)

{
  byte bVar2;
  int errorCode;
  int iVar3;
  byte bVar4;
  InternalExceptionFrame local_50;
  AnonShape_005B9730_A5560D7D *local_c;
  uint local_8;

  local_c = (AnonShape_005B9730_A5560D7D *)param_8;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\prov_obj.cpp",0x2c,0,errorCode,
                               "%s","PrividerTy::OutListProc");
    if (iVar3 == 0) {
      st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\prov_obj.cpp",0x2c);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((local_c != nullptr) && (local_c->field_1C82 != nullptr))
  {
    bVar2 = 0;
    local_8 = local_8 & 0xffffff00;
    do {
      bVar4 = bVar2;
      if (local_c->entries[local_8 & 0xff] == param_2) break;
      bVar2 = bVar2 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar2));
      bVar4 = 0xff;
    } while (bVar2 < 0x16);
    if (bVar4 != 0xff) {
      st::fn_006B4680
                (param_1,param_4,param_5,local_c->field_1C82,nullptr,0,param_5 + -0x67,param_6,
                 param_7,0);
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 005B9860 MMMObjTy::OutLstProc
#line 4 "decomp/ST.exe/functions/005B9860/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   MMMObjTy::OutLstProc

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 005B9860 parameter used as this of MMMObjTy::OutBSlProc @ 005B98CD

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005B9860 -> 005B68B0 @ 005B98CD

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005B9860 -> 005B68B0 @ 005B98CD | 005BA8B0 -> 005B9860 @ 005BA942; data at 0080759C */

void __thiscall
st::fn_005B9860
          (MMMObjTy *this,DDXContext *param_1,MMMObjTy *param_2,MMMObjTy *param_3,int param_4,
          int param_5,int param_6,int param_7,int param_8)

{
  int errorCode;
  uint *resourceString;
  int iVar2;
  StartServTy *this_00;
  uint uVar3;
  uint uVar4;
  ccFntTy *pcVar5;
  uint uVar6;
  InternalExceptionFrame local_4c;
  int local_8;

  if (param_8 != 0) {
    local_8 = param_8;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      st::fn_004042D2(param_2,(int)param_1,param_2,param_3,param_4,param_5 + 0x16,param_6,param_7 + -0x16
                 ,&g_startSystem_0081176C->field_0140);
      st::fn_006C68F0
                ((AnonShape_GLOBAL_0080759C_9638EF10 *)param_1,param_4,param_5,param_6,0x15,
                 (int)&g_startSystem_0081176C->field_0x144);
      st::fn_006C6850((int)param_1,param_4,param_5,param_6,0x15,g_startSystem_0081176C->field_0140);
      uVar6 = 0;
      pcVar5 = g_startSystem_0081176C->field_0034;
      uVar4 = 0xffffffff;
      uVar3 = 0xfffffffe;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      resourceString =
           (uint *)st::fn_006B0140(0x26b4 - (*(char *)(local_8 + 0x1a5f) != '\x01'),
                                      g_hINSTANCE_00807618);
      st::fn_00404C2D
                (this_00,0,param_4,param_5,param_6,0x15,resourceString,uVar3,uVar4,pcVar5,uVar6);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar2 = st::fn_006AD4D0("E:\\__titans\\Start\\prov_obj.cpp",0x3b,0,errorCode,
                               "%s","MMMObjTy::OutLstProc");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\prov_obj.cpp",0x3b);
  }
  return;
}

// 005B99F0 MMMObjTy::OutEdProc
#line 4 "decomp/ST.exe/functions/005B99F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   MMMObjTy::OutEdProc

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005BA8B0 -> 005B99F0 @ 005BA9F1 */

void __thiscall
st::fn_005B99F0(MMMObjTy *this,AnonShape_GLOBAL_0080759C_9638EF10 *param_1,undefined4 param_2,
                   undefined4 param_3,int param_4,int param_5,int param_6,int param_7,
                   undefined4 *param_8)

{
  undefined4 *puVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  undefined4 *local_8;

  if (param_8 != nullptr) {
    local_8 = param_8;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    puVar2 = local_8;
    if (errorCode == 0) {
      st::fn_006C68F0(param_1,param_4,param_5,param_6,param_7,(int)(local_8 + 1));
      st::fn_006C6850((int)param_1,param_4,param_5,param_6,param_7,*puVar2);
      st::fn_006C53B0
                ((int)param_1,param_4,param_5 + 0x16,param_4 + -1 + param_6,param_5 + 0x16,*puVar2);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\prov_obj.cpp",0x47,0,errorCode,
                               "%s","MMMObjTy::OutEdProc");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\prov_obj.cpp",0x47);
  }
  return;
}

// 005B9B10 PrividerTy::InitPrivider
#line 4 "decomp/ST.exe/functions/005B9B10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::InitPrivider */

void __thiscall st::fn_005B9B10(PrividerTy *this,char param_1,char param_2)

{
  MMsgTy *this_00;
  CursorClassTy *this_01;
  PrividerTy *this_02;
  int iVar2;
  DArrayTy *pDVar3;
  ushort *puVar4;
  int local_EAX_689;
  undefined4 *puVar5;
  int uVar5;
  AnonPointee_PrividerTy_1C8E *pAVar6;
  uint *puVar7;
  HoloTy *pHVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  undefined4 local_454 [256];
  InternalExceptionFrame local_54;
  PrividerTy *local_10;
  int local_c;
  uint local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar2 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (iVar2 == 0) {
    if (DAT_008067a0 != '\0') {
      st::external_0000010B((CFsgsConnection *)&DAT_00802a90);
      st::external_000000ED((CFsgsConnection *)&DAT_00802a90);
      DAT_00802a99 = 0;
      DAT_008067a0 = '\0';
    }
    pDVar3 = st::fn_006B54F0(nullptr,1,10);
    this_02 = local_10;
    local_10->field_1C92 = pDVar3;
    st::fn_006B5AA0(&pDVar3->flags,(char *)&DAT_00807ddd);
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    puVar4 = (ushort *)st::fn_0070A9F0(g_cMf32_00806780,"LOADSINGLE",0,1);
    g_startSystem_0081176C->field_002C = puVar4;
    puVar4 = g_startSystem_0081176C->field_002C;
    this_02->field_005D = puVar4;
    st::fn_006BC360(puVar4,local_454,nullptr);
    this_02->field_1A5B->field_0140 = 0x1f;
    st::fn_00718780
              ((int)local_454,0,0x100,0x8b,0x15,(undefined4 *)&this_02->field_1A5B->field_0x144);
    if (param_2 != '\0') {
      st::fn_00401D43(g_dDXContext_0080759C,1,0);
    }
    this_02->field_1A71 = 0;
    st::fn_00404B83();
    if ((param_1 == '\x01') && (iVar2 = st::fn_0040583A(), iVar2 != 0)) {
      param_1 = '\0';
    }
    st::fn_00403BC5(this_02,param_1,'\x01');
    this_02->field_1A60 = this_02->field_1A5F;
    this_00 = this_02->field_1A5B->field_02E6;
    if (this_00 != nullptr) {
      st::fn_00405191(this_00);
      this_02->field_1A5B->field_02E6->field_1CAB = this_02->field_0008;
    }
    st::fn_007158A0
              ((SpriteClassTy *)&this_02->field_1A77,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_02->field_1A77 + 4))(PTR_00806784,7,0,"MM_SLDUP",0xffffffff);
    this_02->field_1A93 = 0x289;
    this_02->field_1A97 = 0x6a;
    this_02->field_1A7F = 0;
    st::fn_007158A0
              ((SpriteClassTy *)&this_02->field_1B08,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_02->field_1B08 + 4))(PTR_00806784,7,0,"MM_SLDDN",0xffffffff);
    this_02->field_1B24 = 0x289;
    this_02->field_1B28 = 0x176;
    this_02->field_1B10 = 0;
    st::fn_007158A0
              ((SpriteClassTy *)&this_02->field_1B99,(int *)g_ddxContext_008075A8,0x31,'\a',
               nullptr,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(this_02->field_1B99 + 4))(PTR_00806784,7,0,"MM_SLDT",0xffffffff);
    iVar2 = 1;
    this_02->field_1BB5 = 0x28e;
    this_02->field_1BB9 = 0x8a;
    puVar4 = this_02->field_005D + 0x14;
    this_02->field_1BA1 = 0;
    local_EAX_689 = st::fn_006B4FE0((int)this_02->field_005D);
    puVar4 = (ushort *)
             st::fn_006B50C0(0x208,0x143,(uint)this_02->field_005D[7],local_EAX_689,
                          (undefined4 *)puVar4,iVar2);
    this_02->field_1C82 = puVar4;
    uVar10 = *(uint *)(puVar4 + 10);
    if (uVar10 == 0) {
      uVar10 = ((uint)puVar4[7] * *(int *)(puVar4 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar4 + 4);
    }
    puVar5 = (undefined4 *)st::fn_006B4FA0((int *)puVar4);
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar7 = this_02->field_1C2A;
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar5 = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    uVar10 = 0x67;
    do {
      st::fn_006B2330(g_ddxContext_008075A8,puVar7,0x31,0x40597f,*(uint *)(this_02->field_1C82 + 2),
                   0x13,(ushort *)this_02);
      st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar7,0xffffffff,0x7a,uVar10);
      uVar10 = uVar10 + 0x13;
      puVar7 = puVar7 + 1;
    } while ((int)uVar10 < 0x209);
    iVar2 = 1;
    puVar4 = this_02->field_005D + 0x14;
    uVar5 = st::fn_006B4FE0((int)this_02->field_005D);
    pAVar6 = (AnonPointee_PrividerTy_1C8E *)
             st::fn_006B50C0(0x22e,0x2e,(uint)this_02->field_005D[7],uVar5,(undefined4 *)puVar4,iVar2);
    this_02->field_1C8E = pAVar6;
    uVar10 = pAVar6[1].field_0008;
    if (uVar10 == 0) {
      uVar10 = ((uint)*(ushort *)&pAVar6[1].field_0x2 * pAVar6->field_0004 + 0x1f >> 3 & 0x1ffffffc)
               * pAVar6->field_0008;
    }
    puVar5 = (undefined4 *)st::fn_006B4FA0((int *)pAVar6);
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar5 = 0xffffffff;
      puVar5 = puVar5 + 1;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar5 = 0xff;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
    st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_02->field_1C8E,0,3,1,0x22c,0x14);
    uVar10 = 2;
    iVar14 = -1;
    iVar2 = -2;
    puVar7 = (uint *)st::fn_006B0140(0x26b5,g_hINSTANCE_00807618);
    st::fn_007119C0(g_startSystem_0081176C->field_0034,puVar7,iVar2,iVar14,uVar10);
    pAVar6 = this_02->field_1C8E;
    puVar7 = &this_02->field_1C8A;
    st::fn_006B2330(g_ddxContext_008075A8,puVar7,0x31,0x4023f6,pAVar6->field_0004,pAVar6->field_0008,
                 (ushort *)pAVar6);
    st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar7,0xffffffff,0x79,0x197);
    st::fn_0040362F(this_02,'\x01');
    st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x403c74,0x22e,0x145,(ushort *)this_02);
    st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x79,0x51);
    pHVar8 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar8 == nullptr) {
      pHVar8 = nullptr;
    }
    else {
      pHVar8->field_0002 = 1;
      pHVar8->field_0000 = 0;
      *(undefined4 *)&pHVar8->field_0x3 = 0xffffffff;
      pHVar8->field_0001 = CASE_2;
      pHVar8->field_0007 = nullptr;
      pHVar8->field_000B = nullptr;
      pHVar8->field_000F = 0;
      *(undefined4 *)&pHVar8->field_0x1b = 1;
      pHVar8->field_0013 = 1;
      pHVar8->field_0017 = -1;
      pHVar8->field_0027 = 0;
      pHVar8->field_0023 = 0;
      pHVar8->field_002F = 1;
      pHVar8->field_002B = 1;
    }
    this_02->field_1C96 = pHVar8;
    if (pHVar8 != nullptr) {
      uVar10 = 0;
      cVar13 = '\x01';
      bVar12 = 0x10;
      iVar14 = 1;
      iVar2 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x79,0x51,0x22e,0x145);
      uVar10 = st::fn_0040459D(this_02->field_1C96,CASE_2,0x79,0x51,iVar2,iVar14,bVar12,cVar13,uVar10);
      if (uVar10 != 0) {
        pHVar8 = this_02->field_1C96;
        pHVar8->field_0002 = 1;
        pHVar8->field_0017 = pHVar8->field_0013;
        uVar10 = *(uint *)&this_02->field_1C96->field_0x3;
        if (-1 < (int)uVar10) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar10);
        }
        if (this_02->field_1A7B != 0xffffffff) {
          st::fn_006B3AF0((int *)this_02->field_1ABF,this_02->field_1A7B);
        }
        if (this_02->field_1B0C != 0xffffffff) {
          st::fn_006B3AF0((int *)this_02->field_1B50,this_02->field_1B0C);
        }
        if (this_02->field_1B9D != 0xffffffff) {
          st::fn_006B3AF0((int *)this_02->field_1BE1,this_02->field_1B9D);
        }
        puVar11 = this_02->field_1C2A;
        local_c = 0x16;
        do {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar11);
          puVar11 = puVar11 + 1;
          local_c = local_c + -1;
        } while (local_c != 0);
        local_c = 0;
      }
    }
    if (local_8 != 0xffffffff) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
    if (this_02->field_1A5F == '\0') {
      st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x402f13,0x22e,0x2e,
                   (ushort *)&this_02->field_1A5B->field_0140);
      st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x79,0x197);
      pHVar8 = (HoloTy *)st::fn_0072E530(0x33);
      if (pHVar8 == nullptr) {
        pHVar8 = nullptr;
      }
      else {
        pHVar8->field_0002 = 1;
        pHVar8->field_0000 = 0;
        *(undefined4 *)&pHVar8->field_0x3 = 0xffffffff;
        pHVar8->field_0001 = CASE_2;
        pHVar8->field_0007 = nullptr;
        pHVar8->field_000B = nullptr;
        pHVar8->field_000F = 0;
        *(undefined4 *)&pHVar8->field_0x1b = 1;
        pHVar8->field_0013 = 1;
        pHVar8->field_0017 = -1;
        pHVar8->field_0027 = 0;
        pHVar8->field_0023 = 0;
        pHVar8->field_002F = 1;
        pHVar8->field_002B = 1;
      }
      this_02->field_1C9A = pHVar8;
      if (pHVar8 != nullptr) {
        uVar10 = 0;
        cVar13 = '\x01';
        bVar12 = 0x10;
        iVar14 = 1;
        iVar2 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x79,0x197,0x22e,0x2e);
        uVar10 = st::fn_0040459D(this_02->field_1C9A,CASE_1,0x79,0x197,iVar2,iVar14,bVar12,cVar13,
                              uVar10);
        if (uVar10 != 0) {
          pHVar8 = this_02->field_1C9A;
          pHVar8->field_0002 = 1;
          pHVar8->field_0017 = pHVar8->field_0013;
          uVar10 = *(uint *)&this_02->field_1C9A->field_0x3;
          if (-1 < (int)uVar10) {
            st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar10);
          }
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar7);
        }
      }
      if (local_8 != 0xffffffff) {
        st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar7);
    }
    this_01 = g_cursorClass_00802A30;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar2 = g_cursorClass_00802A30->field_00C9;
      iVar14 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      this_01->field_0494 = 0xffff;
      st::fn_0040507E(this_01,CASE_0,iVar14,iVar2);
      st::fn_0040241E(this_01,this_01->field_00C5,this_01->field_00C9);
      this_01->field_00D2 = 0;
      this_01->field_04DF = -1;
    }
    if (param_2 != '\0') {
      st::fn_0040448A((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                         this_02->field_005D,10,2);
    }
    pHVar8 = this_02->field_1C96;
    if (((pHVar8 != nullptr) && (pHVar8->field_0000 != '\0')) &&
       (-1 < (int)*(uint *)&pHVar8->field_0x3)) {
      st::fn_006B3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar8->field_0x3);
    }
    pHVar8 = this_02->field_1C9A;
    if (((pHVar8 != nullptr) && (pHVar8->field_0000 != '\0')) &&
       (-1 < (int)*(uint *)&pHVar8->field_0x3)) {
      st::fn_006B3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar8->field_0x3);
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar14 = st::fn_006AD4D0("E:\\__titans\\Start\\prov_obj.cpp",0xac,0,iVar2,"%s",
                              "PrividerTy::InitPrivider");
  if (iVar14 == 0) {
    st::fn_006A5E40(iVar2,0,"E:\\__titans\\Start\\prov_obj.cpp",0xac);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 005BA560 PrividerTy::DonePrivider
#line 4 "decomp/ST.exe/functions/005BA560/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::DonePrivider */

void __thiscall st::fn_005BA560(PrividerTy *this)

{
  MMsgTy *this_00;
  CursorClassTy *this_01;
  PrividerTy *pPVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  PrividerTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pPVar2 = local_8;
  if (iVar3 == 0) {
    st::fn_0040458E((MMObjTy *)local_8);
    this_01 = g_cursorClass_00802A30;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar3 = g_cursorClass_00802A30->field_00C9;
      iVar4 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      this_01->field_0494 = 0xffff;
      st::fn_0040507E(this_01,CASE_0,iVar4,iVar3);
      st::fn_0040241E(this_01,this_01->field_00C5,this_01->field_00C9);
      this_01->field_00D2 = 0;
      this_01->field_04DF = -1;
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    if (pPVar2->field_004D == 0x6102) {
      st::fn_00401D43(g_dDXContext_0080759C,10,2);
    }
    if (g_startSystem_0081176C->field_002C != nullptr) {
      st::fn_006F20E0(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    st::fn_00715AB0((SpriteClassTy *)&pPVar2->field_1A77);
    st::fn_00715AB0((SpriteClassTy *)&pPVar2->field_1B08);
    st::fn_00715AB0((SpriteClassTy *)&pPVar2->field_1B99);
    puVar5 = pPVar2->field_1C2A;
    iVar3 = 0x16;
    do {
      if (*puVar5 != 0xffffffff) {
        st::fn_006B3BB0((int *)g_ddxContext_008075A8,*puVar5);
        *puVar5 = 0xffffffff;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (pPVar2->field_1C8A != 0xffffffff) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,pPVar2->field_1C8A);
    }
    pPVar2->field_1C8A = 0xffffffff;
    if (pPVar2->field_1C82 != nullptr) {
      st::fn_006AB060(&pPVar2->field_1C82);
    }
    if (pPVar2->field_1C8E != nullptr) {
      st::fn_006AB060(&pPVar2->field_1C8E);
    }
    if (pPVar2->field_1C96 != nullptr) {
      st::fn_0040128A(pPVar2->field_1C96);
      st::fn_0072E2B0(pPVar2->field_1C96);
      pPVar2->field_1C96 = nullptr;
    }
    if (pPVar2->field_1C9A != nullptr) {
      st::fn_0040128A(pPVar2->field_1C9A);
      st::fn_0072E2B0(pPVar2->field_1C9A);
      pPVar2->field_1C9A = nullptr;
    }
    if ((pPVar2->field_004D == 0x6102) &&
       (this_00 = pPVar2->field_1A5B->field_02E6, this_00 != nullptr)) {
      st::fn_0040462E(this_00);
      pPVar2->field_1A5B->field_02E6->field_1CAB = 0;
    }
    if (pPVar2->field_004D != 0) {
      st::fn_006E3B50((AppClassTy *)&DAT_00807620,(undefined4 *)&pPVar2->field_0x3d);
    }
    st::fn_00402B30(g_startSystem_0081176C);
    if (pPVar2->field_1C92 != nullptr) {
      st::fn_006B5570(pPVar2->field_1C92);
    }
    pPVar2->field_1C92 = nullptr;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\prov_obj.cpp",0xd3,0,iVar3,"%s",
                             "PrividerTy::DonePrivider");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\prov_obj.cpp",0xd3);
  return;
}

// 005BA8B0 PrividerTy::PaintPrivider
#line 4 "decomp/ST.exe/functions/005BA8B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::PaintPrivider */

void __thiscall st::fn_005BA8B0(PrividerTy *this,char param_1)

{
  PrividerTy *pPVar2;
  int errorCode;
  uint *puVar3;
  int iVar4;
  MMMObjTy *this_00;
  StartServTy *this_01;
  StartServTy *this_02;
  uint uVar5;
  uint uVar6;
  ccFntTy *pcVar7;
  uint uVar8;
  InternalExceptionFrame local_4c;
  PrividerTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\prov_obj.cpp",0xec,0,errorCode,
                               "%s","PrividerTy::PaintPrivider");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\prov_obj.cpp",0xec);
    return;
  }
  st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  st::fn_00403738(0,0,'\x01',(BITMAPINFO *)g_startSystem_0081176C->field_002C);
  pPVar2 = local_8;
  if ((local_8->field_1C96 == nullptr) && (param_1 == '\0')) {
    st::fn_00403C74
              (this_00,g_dDXContext_0080759C,nullptr,nullptr,0x79,0x51,0x22e,0x145,
               (int)local_8);
  }
  uVar8 = 0;
  pcVar7 = g_startSystem_0081176C->field_0030;
  uVar6 = 0xffffffff;
  uVar5 = 0xfffffffe;
  if (pPVar2->field_1A5F == '\x01') {
    puVar3 = (uint *)st::fn_006B0140(0x26b4,g_hINSTANCE_00807618);
    st::fn_00404C2D(this_01,0,0xe9,0x14,0x14c,0x18,puVar3,uVar5,uVar6,pcVar7,uVar8);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  puVar3 = (uint *)st::fn_006B0140(0x26b3,g_hINSTANCE_00807618);
  st::fn_00404C2D(this_02,0,0xe9,0x14,0x14c,0x18,puVar3,uVar5,uVar6,pcVar7,uVar8);
  if ((pPVar2->field_1C9A == nullptr) && (param_1 == '\0')) {
    st::fn_00402F13((MMMObjTy *)g_dDXContext_0080759C,
                        (AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,0,0,0x79,0x197,
                        0x22e,0x2e,&pPVar2->field_1A5B->field_0140);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 005BAAC0 PrividerTy::SetMode
#line 4 "decomp/ST.exe/functions/005BAAC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::SetMode */

void __thiscall st::fn_005BAAC0(PrividerTy *this,char param_1,char param_2)

{
  StartSystemTy *pSVar1;
  PrividerTy *this_00;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_264;
  undefined4 local_257;
  undefined4 local_253;
  undefined4 local_24f;
  undefined4 local_23d;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_216;
  undefined4 local_209;
  undefined4 local_205;
  undefined4 local_201;
  undefined4 local_1a1;
  undefined1 local_19d;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_17a;
  undefined1 local_176;
  undefined4 local_16d;
  undefined4 local_169;
  undefined4 local_165;
  undefined4 local_153;
  undefined4 local_146;
  undefined4 local_142;
  undefined4 local_13e;
  undefined4 local_68 [7];
  InternalExceptionFrame local_4c;
  PrividerTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar3 == 0) {
    puVar5 = &local_264;
    for (iVar3 = 0x7e; this_00 = local_8, iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    this_00->field_1A5F = param_1;
    STField<undefined1>(puVar5,2) = 0;
    if (param_1 == '\x01') {
      local_1a1 = 0x2340;
      if ((this_00->field_0065 != CASE_5) || (local_19d = 0, this_00->field_1A72 != '\0')) {
        local_19d = 1;
      }
      local_194 = this_00->field_0008;
      local_190 = 2;
      local_18c = 0x6943;
    }
    local_17a = 0x24bc;
    if ((this_00->field_0065 != CASE_5) || (local_176 = 0, this_00->field_1A72 != '\0')) {
      local_176 = 1;
    }
    local_230 = this_00->field_0008;
    local_169 = 2;
    local_165 = 0x6952;
    if (param_1 == '\x01') {
      local_23d = 0x2357;
      local_228 = 0x694e;
      local_216 = 0x2616;
      local_201 = 0x64ff;
    }
    else {
      local_264 = 0x2617;
      local_253 = 2;
      local_24f = 0x6501;
      local_23d = 0x2618;
      local_228 = 0x6502;
      local_216 = 0x233e;
      local_201 = 0x6949;
      local_153 = 0x2619;
      local_142 = 2;
      local_13e = 0x6951;
      local_257 = local_230;
      local_146 = local_230;
    }
    local_205 = 2;
    local_22c = 2;
    pSVar1 = this_00->field_1A5B;
    local_209 = local_230;
    local_16d = local_230;
    if (pSVar1->field_02E6 != nullptr) {
      puVar5 = local_68;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0xffffffff;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = 0xffff;
      st::fn_00401717(pSVar1->field_02E6,0,(int)&local_264,0,0);
      st::fn_00404B51(this_00->field_1A5B->field_02E6,(int)local_68);
    }
    st::fn_00405E52(this_00,param_2);
    this_00->field_0065 = CASE_3;
    st::fn_0040329C(&g_sound,0);
    if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
      st::fn_00402FD1(&g_sound,0x14,'\x02',0,nullptr);
    }
    st::fn_00404BF1(this_00,0xb,'\0',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\prov_obj.cpp",0x11e,0,iVar3,"%s",
                             "PrividerTy::SetMode");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\prov_obj.cpp",0x11e);
  return;
}

// 005BAE00 PrividerTy::NonePrivider
#line 4 "decomp/ST.exe/functions/005BAE00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::NonePrivider

   [STSwitchEnumApplier] Switch target field_0065 uses
   /SubmarineTitans/Recovered/Enums/PrividerTy_field_0065State. Cases:
   CASE_1=1;CASE_3=3;CASE_4=4;CASE_5=5
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NonePrivider(PrividerTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005BAF4D RET | 005BB0C1 RET | 005BB17F RET | 005BB561 RET | 005BB641 RET |
   005BB65E RET | 005BB6A5 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_005BAE00(PrividerTy *this)

{
  byte bVar1;
  uint uVar2;
  MMsgTy *this_00;
  StartSystemTy *pSVar3;
  CursorClassTy *pCVar5;
  PrividerTy *this_01;
  short *psVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  char *pcVar11;
  UINT UVar13;
  char local_c8 [2];
  undefined1 local_c6;
  InternalExceptionFrame local_a0;
  undefined4 local_5c [8];
  int local_3c;
  char local_38;
  undefined4 local_37;
  undefined4 local_33;
  char local_2c;
  undefined4 local_2b;
  undefined4 local_27;
  PrividerTy *local_20;
  uint local_1c;
  short *local_18;
  uint local_14;
  short *local_10;
  uint local_c;
  int local_8;

  local_8 = 1;
  local_20 = this;
  DVar7 = st::external_000000DA();
  this->field_0061 = DVar7;
  local_a0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a0;
  iVar8 = st::fn_0072D7F0(local_a0.jumpBuffer,0);
  this_01 = local_20;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_a0.previous;
    iVar9 = st::fn_006AD4D0("E:\\__titans\\Start\\prov_obj.cpp",0x1bc,0,iVar8,"%s"
                               ,"PrividerTy::NonePrivider");
    if (iVar9 == 0) {
      st::fn_006A5E40(iVar8,0,"E:\\__titans\\Start\\prov_obj.cpp",0x1bc);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  switch(local_20->field_0065) {
  case CASE_1:
    if (local_20->field_1A71 == '\0') {
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    local_10 = nullptr;
    if (local_20->field_1A6D == 0) {
      pcVar11 = local_c8;
      for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
        pcVar11[0] = '\0';
        pcVar11[1] = '\0';
        pcVar11[2] = '\0';
        pcVar11[3] = '\0';
        pcVar11 = pcVar11 + 4;
      }
      pcVar11[0] = '\0';
      pcVar11[1] = '\0';
      local_c6 = 4;
      st::fn_00715360(g_int_00811764,1,'\x1a',local_c8,0x26,1,0xffffffff);
    }
    iVar8 = this_01->field_1A6D + 1;
    this_01->field_1A6D = iVar8;
    if (iVar8 == 0xf) {
      this_01->field_1A6D = 0;
    }
    iVar8 = st::fn_00715630
                      (g_int_00811764,-1,&local_1c,&local_3c,&local_10,nullptr,-1,0);
    psVar6 = local_10;
    pCVar5 = g_cursorClass_00802A30;
    if (iVar8 != -0x4d) {
      if (iVar8 != 0) {
        if (iVar8 != 1) {
          g_currentExceptionFrame = local_a0.previous;
          return;
        }
        if (local_1c == 0x1a) {
          uVar2 = local_c >> 8;
          local_c = local_c & 0xffffff00;
          if (*local_10 == (short)((uint)DAT_00807dd5 >> 0x10)) {
            local_18 = local_10 + 1;
            if ((char)*local_18 == '\x01') {
              pcVar11 = (char *)((int)local_10 + 0xb);
              switch(*pcVar11) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              case '\x01':
                local_c = CONCAT31((int3)uVar2,1);
                local_14 = 0xe;
                break;
              case '\x02':
              case '\x03':
                st::external_00000080((LPSTR)&DAT_0080f33a,"%s%s",&DAT_00807680,PTR_s_CUSTOM__0079c0bc);
                local_2c = *pcVar11;
                local_2b = STField<undefined4>(psVar6,3);
                local_27 = 0;
                iVar8 = st::fn_00725910(&DAT_0080f33a,"*.DKD",0,thunk_FUN_005db030,&local_2c,0
                                    );
                local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((iVar8 != -0x70) + '\x01'));
                local_14 = (-(uint)(*pcVar11 != '\x02') & 2) + 0xd;
                break;
              case '\x05':
                st::external_00000080((LPSTR)&DAT_0080f33a,"%s%s%s\\",&DAT_00807680,
                          PTR_s_SAVEGAME__0079c0b8,&DAT_00807ddd);
                local_38 = *pcVar11;
                local_37 = STField<undefined4>(psVar6,3);
                local_33 = STField<undefined4>(psVar6,7);
                iVar8 = st::fn_00725910(&DAT_0080f33a,"*.DKD",0,thunk_FUN_005db030,&local_38,0
                                    );
                local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(iVar8 == -0x70));
                local_14 = 0x10;
              }
            }
            else if ((char)*local_18 != '\x03') goto LAB_005bb532;
            pCVar5 = g_cursorClass_00802A30;
            if ((char)*local_18 == '\x03') {
              local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(2));
            }
            while ((local_c & 0xff) != 1) {
              if ((local_c & 0xff) == 2) {
                st::fn_004036C0(this_01,0x6109,0,1);
                DAT_0080877e = 0;
                DAT_008087be = 0;
                st::fn_00404C8C(this_01,'\x01');
                this_00 = this_01->field_1A5B->field_02E6;
                goto joined_r0x005bb4e0;
              }
              if ((STField<char>(psVar6,0xd) == '\0') ||
                 (((char)*local_18 == '\x01' && (STField<char>(psVar6,0xb) == '\x05')))) {
                if (g_cursorClass_00802A30 != nullptr) {
                  iVar8 = g_cursorClass_00802A30->field_00C9;
                  iVar9 = g_cursorClass_00802A30->field_00C5;
                  g_cursorClass_00802A30->field_0493 = CASE_1;
                  pCVar5->field_0494 = 0xffff;
                  st::fn_0040507E(pCVar5,CASE_0,iVar9,iVar8);
                  st::fn_0040241E(pCVar5,pCVar5->field_00C5,pCVar5->field_00C9);
                  pCVar5->field_00D2 = 0;
                  pCVar5->field_04DF = -1;
                }
                this_01->field_1A71 = 0;
                st::fn_00404B83();
                UVar13 = 0x2523;
                goto LAB_005bb2c6;
              }
              local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(2));
            }
            st::fn_004036C0(this_01,0x6121,local_14,0x11);
            DAT_0080877e = 0;
            if (STField<char>(psVar6,0xb) == '\x01') {
              DAT_008087be = 0;
            }
            st::fn_00404C8C(this_01,'\x01');
            this_00 = this_01->field_1A5B->field_02E6;
joined_r0x005bb4e0:
            if (this_00 != nullptr) {
              st::fn_00401FA5(this_00,1,0,1);
            }
          }
          else {
            if (g_cursorClass_00802A30 != nullptr) {
              iVar8 = g_cursorClass_00802A30->field_00C9;
              iVar9 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_1;
              pCVar5->field_0494 = 0xffff;
              st::fn_0040507E(pCVar5,CASE_0,iVar9,iVar8);
              st::fn_0040241E(pCVar5,pCVar5->field_00C5,pCVar5->field_00C9);
              pCVar5->field_00D2 = 0;
              pCVar5->field_04DF = -1;
            }
            this_01->field_1A71 = 0;
            st::fn_00404B83();
            UVar13 = 0x2526;
LAB_005bb2c6:
            st::fn_00403FA8(this_01->field_1A5B->field_02E6,UVar13,'\0',nullptr,
                               nullptr,nullptr,0,0);
          }
        }
LAB_005bb532:
        this_01->field_1A69 = this_01->field_0061;
        if (local_10 != nullptr) {
          st::fn_006AB060(&local_10);
          g_currentExceptionFrame = local_a0.previous;
          return;
        }
        g_currentExceptionFrame = local_a0.previous;
        return;
      }
      if (this_01->field_0061 - this_01->field_1A69 < 0x7531) {
        g_currentExceptionFrame = local_a0.previous;
        return;
      }
    }
    pSVar3 = this_01->field_1A5B;
    memset(local_5c, 0, 0x20); /* compiler bulk-zero initialization */
    this_01->field_1A71 = 0;
    this_01->field_1A72 = 1;
    pCVar5 = g_cursorClass_00802A30;
    local_5c[4] = 0x6952;
    if (pSVar3->field_02E6 != nullptr) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar8 = g_cursorClass_00802A30->field_00C9;
        iVar9 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar5->field_0494 = 0xffff;
        st::fn_0040507E(pCVar5,CASE_0,iVar9,iVar8);
        st::fn_0040241E(pCVar5,pCVar5->field_00C5,pCVar5->field_00C9);
        pCVar5->field_00D2 = 0;
        pCVar5->field_04DF = -1;
      }
      local_5c[2] = this_01->field_0008;
      local_5c[3] = 2;
      st::fn_00403FA8(this_01->field_1A5B->field_02E6,0x2525,'\0',local_5c,nullptr,
                         nullptr,0,0);
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    this_01->GetMessage((int)local_5c);
    break;
  case CASE_3:
    if ((local_20->field_1C96 != nullptr) &&
       (iVar8 = st::fn_004055F1(local_20->field_1C96), iVar8 != 0)) {
      local_8 = 0;
    }
    if ((this_01->field_1C9A != nullptr) &&
       (iVar8 = st::fn_004055F1(this_01->field_1C9A), iVar8 != 0)) {
      local_8 = 0;
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (this_01->field_1C96 != nullptr) {
        st::fn_0040128A(this_01->field_1C96);
        st::fn_0072E2B0(this_01->field_1C96);
        this_01->field_1C96 = nullptr;
      }
      if (this_01->field_1C9A != nullptr) {
        st::fn_0040128A(this_01->field_1C9A);
        st::fn_0072E2B0(this_01->field_1C9A);
        this_01->field_1C9A = nullptr;
      }
      if (this_01->field_1A7B != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)this_01->field_1ABF,this_01->field_1A7B,0xfffffffe,this_01->field_1A93,
                   this_01->field_1A97);
      }
      if (this_01->field_1B0C != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)this_01->field_1B50,this_01->field_1B0C,0xfffffffe,this_01->field_1B24,
                   this_01->field_1B28);
      }
      if (this_01->field_1B9D != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)this_01->field_1BE1,this_01->field_1B9D,0xfffffffe,this_01->field_1BB5,
                   this_01->field_1BB9);
      }
      puVar10 = this_01->field_1C2A;
      iVar8 = 0x16;
      do {
        st::fn_006B3430((int *)g_ddxContext_008075A8,*puVar10);
        puVar10 = puVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      if (this_01->field_1A5F == '\0') {
        st::fn_006B3430((int *)g_ddxContext_008075A8,this_01->field_1C8A);
      }
      this_01->field_0065 = CASE_1;
      st::fn_0040362F(this_01,'\0');
      st::fn_00405E52(this_01,'\0');
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    break;
  case CASE_4:
    if (local_20->field_1C96 != nullptr) {
      iVar8 = st::fn_004055F1(local_20->field_1C96);
      if (iVar8 == 0) {
        uVar2 = *(uint *)&this_01->field_1C96->field_0x3;
        if (-1 < (int)uVar2) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar2);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_01->field_1C9A != nullptr) {
      iVar8 = st::fn_004055F1(this_01->field_1C9A);
      if (iVar8 == 0) {
        uVar2 = *(uint *)&this_01->field_1C9A->field_0x3;
        if (-1 < (int)uVar2) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar2);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      bVar1 = this_01->field_1A5A;
      this_01->field_0065 = 2;
      if ((bVar1 != 0xff) && (*(int *)(&this_01->field_0xd1 + (uint)bVar1 * 0x1fb) != 0)) {
        st::fn_006E3B50
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_01->field_0xc1 + (uint)bVar1 * 0x1fb));
        g_currentExceptionFrame = local_a0.previous;
        return;
      }
    }
    break;
  case CASE_5:
    if (local_20->field_1C9A != nullptr) {
      iVar8 = st::fn_004055F1(local_20->field_1C9A);
      if (iVar8 == 0) {
        if ((this_01->field_1A60 == '\x01') &&
           (uVar2 = *(uint *)&this_01->field_1C9A->field_0x3, -1 < (int)uVar2)) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar2);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (this_01->field_1C9A != nullptr) {
        st::fn_0040128A(this_01->field_1C9A);
        st::fn_0072E2B0(this_01->field_1C9A);
        this_01->field_1C9A = nullptr;
      }
      if (this_01->field_1A60 == '\0') {
        st::fn_006B3430((int *)g_ddxContext_008075A8,this_01->field_1C8A);
      }
      st::fn_00403BC5(this_01,this_01->field_1A60,'\0');
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_a0.previous;
  return;
}

// 005BB910 PrividerTy::CloseButtons
#line 4 "decomp/ST.exe/functions/005BB910/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::CloseButtons

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005BB910(PrividerTy *this,char param_1)

{
  PrividerTy *this_00;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  PrividerTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    st::fn_00403459((MMObjTy *)local_8);
    st::fn_004031F7(this_00,param_1);
    this_00->field_0065 = CASE_4;
    st::fn_00404BF1(this_00,0xc,'\x01',-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\Start\\prov_obj.cpp",0x1c7,0,errorCode,
                             "%s","PrividerTy::CloseButtons");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\prov_obj.cpp",0x1c7);
  return;
}

// 005BBA90 PrividerTy::CreateCtrls
#line 4 "decomp/ST.exe/functions/005BBA90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::CreateCtrls

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005BBA90(PrividerTy *this,char param_1)

{
  undefined1 *puVar1;
  PrividerTy *this_00;
  int iVar3;
  int iVar4;
  uint *puVar5;
  ccFntTy **ppcVar6;
  ccFntTy *local_dd0 [8];
  DArrayTy *local_db0;
  undefined4 local_d84;
  undefined4 local_d80;
  undefined4 local_d7c;
  uint local_544 [7];
  undefined4 local_528;
  undefined4 local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_4b4;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_74;
  InternalExceptionFrame local_70;
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  PrividerTy *local_10;
  uint local_c;
  char local_5;

  puVar5 = local_544;
  local_10 = this;
  for (iVar4 = 0x135; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  ppcVar6 = local_dd0;
  for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar6 = nullptr;
    ppcVar6 = ppcVar6 + 1;
  }
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  iVar4 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\prov_obj.cpp",0x24d,0,iVar4,"%s"
                               ,"PrividerTy::CreateCtrls");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\prov_obj.cpp",0x24d);
    return;
  }
  local_5 = local_10->field_1A5F;
  if (local_5 == '\0') {
    if (g_startSystem_0081176C->field_068A != 0) {
      local_c = *(uint *)(g_startSystem_0081176C->field_068A + 4);
      goto LAB_005bbb22;
    }
  }
  else if (g_startSystem_0081176C->field_068E != 0) {
    local_c = *(uint *)(g_startSystem_0081176C->field_068E + 4);
    goto LAB_005bbb22;
  }
  local_c = 0;
LAB_005bbb22:
  local_544[6] = ((int)local_c < 0) - 1 & local_c;
  if (param_1 == '\0') {
    if (local_5 == '\0') {
      local_d84 = local_10->field_0008;
      local_dd0[0] = nullptr;
      local_dd0[1] = (ccFntTy *)0x9;
      local_dd0[2] = g_startSystem_0081176C->field_0030;
      local_db0 = local_10->field_1C92;
      local_dd0[3] = (ccFntTy *)0x7d;
      local_dd0[4] = (ccFntTy *)0x1af;
      local_dd0[5] = (ccFntTy *)0x226;
      local_dd0[6] = (ccFntTy *)0x14;
      local_dd0[7] = (ccFntTy *)0x104;
      local_d80 = 2;
      local_d7c = 0x631f;
      (*local_10->field_000C->vtable->CreateObject)
                ((SystemClassTy *)local_10->field_000C,6,&local_10->field_1C86,nullptr,local_dd0,
                 0);
      this_00->field_002D = 0x20;
      this_00->field_0031 = 1;
      st::fn_006E6080(this_00,2,this_00->field_1A73,(undefined4 *)&this_00->field_0x1d);
    }
    if (this_00->field_1A5B->field_02E6 != nullptr) {
      memset(&local_2c, 0, 0x1a); /* compiler bulk-zero initialization */
      STPiece<2,2>(local_2c) = (-(ushort)(local_544[6] != 0) & 2) - 1;
      local_1e = 1;
      local_20 = 1;
      local_22 = 1;
      local_28 = 1;
      STPiece<0,2>(local_2c) = 1;
      st::fn_00404B51(this_00->field_1A5B->field_02E6,(int)&local_2c);
    }
  }
  else {
    local_51c = local_10->field_0008;
    local_544[0] = 0;
    local_544[2] = 0x7a;
    local_544[3] = 0x67;
    local_544[4] = 0x208;
    local_544[5] = 0x143;
    local_528 = 0;
    local_518 = 2;
    local_514 = 0x8160;
    local_4f8 = 2;
    local_4f4 = 0x8161;
    local_4d8 = 2;
    local_4d4 = 0x8162;
    local_4b8 = 2;
    local_4b4 = 0x8163;
    if (DAT_0080734c != '\0') {
      local_74 = 1;
    }
    local_408 = local_10->field_1A97;
    local_40c = local_10->field_1A93;
    local_400 = local_10->field_1A9F;
    local_28c = local_10->field_1B24;
    local_288 = local_10->field_1B28;
    local_284 = local_10->field_1B2C;
    local_404 = local_10->field_1A9B;
    local_280 = local_10->field_1B30;
    local_100 = local_10->field_1BBD;
    local_300 = 0x32;
    local_180 = 0x32;
    local_108 = local_10->field_1BB5;
    local_418 = 2;
    local_414 = 0;
    local_410 = 2;
    local_304 = 500;
    local_3b0 = 2;
    local_3ac = 0x8164;
    local_298 = 2;
    local_294 = 0;
    local_290 = 2;
    local_184 = 500;
    local_230 = 2;
    local_22c = 0x8165;
    local_118 = 3;
    local_114 = 1;
    local_10c = 0;
    local_104 = 0x8a;
    local_fc = 0xe6;
    local_f8 = 0xe;
    local_c0 = 2;
    local_bc = 0x8166;
    local_4fc = local_51c;
    local_4dc = local_51c;
    local_4bc = local_51c;
    local_3b4 = local_51c;
    local_234 = local_51c;
    local_c4 = local_51c;
    (*local_10->field_000C->vtable->CreateObject)
              ((SystemClassTy *)local_10->field_000C,7,&local_10->field_1A73,nullptr,local_544,0);
  }
  this_00->field_0031 = 0;
  puVar1 = &this_00->field_0x1d;
  this_00->field_002D = 0x20;
  st::fn_006E6080(this_00,2,this_00->field_1A73,(undefined4 *)puVar1);
  this_00->field_0031 = ((int)local_c < 1) - 1 & local_c;
  this_00->field_002D = 0x28;
  st::fn_006E6080(this_00,2,this_00->field_1A73,(undefined4 *)puVar1);
  if (0 < (int)local_c) {
    this_00->field_002D = 0x20;
    this_00->field_0031 = 1;
    st::fn_006E6080(this_00,2,this_00->field_1A73,(undefined4 *)puVar1);
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

// 005BC050 PrividerTy::DeleteCtrls
#line 4 "decomp/ST.exe/functions/005BC050/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::DeleteCtrls */

void __thiscall st::fn_005BC050(PrividerTy *this,char param_1)

{
  ushort *puVar1;
  PrividerTy *pPVar3;
  int iVar4;
  HoloTy *pHVar5;
  byte *puVar6;
  uint *puVar7;
  int iVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  InternalExceptionFrame local_50;
  PrividerTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = st::fn_006AD4D0("E:\\__titans\\Start\\prov_obj.cpp",0x279,0,iVar4,"%s"
                               ,"PrividerTy::DeleteCtrls");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\prov_obj.cpp",0x279);
    return;
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
    }
  }
  pPVar3 = local_c;
  if (param_1 != '\0') {
    if (local_c->field_1A73 != 0) {
      st::fn_006E56B0(local_c->field_000C,local_c->field_1A73);
    }
    pPVar3->field_1A73 = 0;
    pPVar3->field_1A61 = 0;
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0x79,0x51,0x22e,0x145);
    if (pPVar3->field_1C96 != nullptr) {
      st::fn_0040128A(pPVar3->field_1C96);
      st::fn_0072E2B0(pPVar3->field_1C96);
      pPVar3->field_1C96 = nullptr;
    }
    pHVar5 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar5 == nullptr) {
      pHVar5 = nullptr;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
      pHVar5->field_0001 = CASE_2;
      pHVar5->field_0007 = nullptr;
      pHVar5->field_000B = nullptr;
      pHVar5->field_000F = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = -1;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    pPVar3->field_1C96 = pHVar5;
    if (pHVar5 != nullptr) {
      uVar11 = 0;
      cVar10 = '\x01';
      bVar9 = 0x10;
      iVar8 = 1;
      iVar4 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x79,0x51,0x22e,0x145);
      uVar11 = st::fn_0040459D(pPVar3->field_1C96,CASE_2,0x79,0x51,iVar4,iVar8,bVar9,cVar10,uVar11);
      if (uVar11 != 0) {
        pHVar5 = pPVar3->field_1C96;
        pHVar5->field_0002 = 0;
        pHVar5->field_0017 = -1;
        uVar11 = *(uint *)&pPVar3->field_1C96->field_0x3;
        if (-1 < (int)uVar11) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar11);
        }
        st::fn_004055F1(pPVar3->field_1C96);
      }
      st::fn_00402298(0x79,0x51,0x79,0x51,0x22e,(byte *)0x145,'\x01',
                 (BITMAPINFO *)g_startSystem_0081176C->field_002C);
    }
    if (pPVar3->field_1A7B != 0xffffffff) {
      st::fn_006B3AF0((int *)pPVar3->field_1ABF,pPVar3->field_1A7B);
    }
    if (pPVar3->field_1B0C != 0xffffffff) {
      st::fn_006B3AF0((int *)pPVar3->field_1B50,pPVar3->field_1B0C);
    }
    if (pPVar3->field_1B9D != 0xffffffff) {
      st::fn_006B3AF0((int *)pPVar3->field_1BE1,pPVar3->field_1B9D);
    }
    puVar7 = pPVar3->field_1C2A;
    local_8 = 0x16;
    do {
      st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar7);
      puVar7 = puVar7 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  puVar1 = pPVar3->field_1C82;
  local_8 = *(uint *)(puVar1 + 10);
  if (local_8 == 0) {
    local_8 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(puVar1 + 4);
  }
  puVar6 = (byte *)st::fn_006B4FA0((int *)puVar1);
  memset(puVar6, 0, local_8); /* compiler bulk-zero initialization */
  if (pPVar3->field_1C86 != 0) {
    st::fn_006E56B0(pPVar3->field_000C,pPVar3->field_1C86);
    pPVar3->field_1C86 = 0;
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0x79,0x197,0x22e,0x2e);
    if (pPVar3->field_1C9A != nullptr) {
      st::fn_0040128A(pPVar3->field_1C9A);
      st::fn_0072E2B0(pPVar3->field_1C9A);
      pPVar3->field_1C9A = nullptr;
    }
    pHVar5 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar5 == nullptr) {
      pHVar5 = nullptr;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      *(undefined4 *)&pHVar5->field_0x3 = 0xffffffff;
      pHVar5->field_0001 = CASE_2;
      pHVar5->field_0007 = nullptr;
      pHVar5->field_000B = nullptr;
      pHVar5->field_000F = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = -1;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    pPVar3->field_1C9A = pHVar5;
    if (pHVar5 != nullptr) {
      uVar11 = 0;
      cVar10 = '\x01';
      bVar9 = 0x10;
      iVar8 = 1;
      iVar4 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x79,0x197,0x22e,0x2e);
      uVar11 = st::fn_0040459D(pPVar3->field_1C9A,CASE_1,0x79,0x197,iVar4,iVar8,bVar9,cVar10,uVar11);
      if (uVar11 != 0) {
        pHVar5 = pPVar3->field_1C9A;
        pHVar5->field_0002 = 0;
        pHVar5->field_0017 = -1;
        uVar11 = *(uint *)&pPVar3->field_1C9A->field_0x3;
        if (-1 < (int)uVar11) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar11);
        }
        st::fn_004055F1(pPVar3->field_1C9A);
      }
    }
    st::fn_00402298(0x79,0x197,0x79,0x197,0x22e,(byte *)0x2e,'\x01',
               (BITMAPINFO *)g_startSystem_0081176C->field_002C);
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,pPVar3->field_1C8A);
  }
  if (g_cursorClass_00802A30 != nullptr) {
    if (g_cursorClass_00802A30->field_00A9 == 0) {
      st::fn_006B8A60((byte *)g_cursorClass_00802A30->field_00AD);
    }
    else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
      st::fn_006B34D0
                ((uint *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C,
                 0xfffffffe,g_cursorClass_00802A30->field_0034,g_cursorClass_00802A30->field_0038);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 005BC5E0 PrividerTy::GetMessage
#line 4 "decomp/ST.exe/functions/005BC5E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401CC6|005BC5E0; family_names=PrividerTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:10,18:5,1c:0} */

int __thiscall st::fn_005BC5E0(PrividerTy *this,STMessage *message)

{
  undefined1 *puVar1;
  ushort uVar2;
  STMessageId SVar3;
  StartSystemTy *pSVar4;
  STMessageArg SVar5;
  CursorClassTy *pCVar7;
  PrividerTy *this_00;
  undefined1 uVar8;
  DWORD DVar9;
  int iVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  HoloTy *pHVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  undefined4 uVar12;
  int iVar13;
  MMsgTy *pMVar14;
  byte bVar16;
  char cVar17;
  uint uVar18;
  InternalExceptionFrame local_8c;
  undefined4 local_48;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  PrividerTy *local_c;
  uint local_8;

  local_c = this;
  DVar9 = st::fn_006E51B0(this->field_0010);
  this->field_0061 = DVar9;
  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  iVar10 = st::fn_0072D7F0(local_8c.jumpBuffer,0);
  this_00 = local_c;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar13 = st::fn_006AD4D0("E:\\__titans\\Start\\prov_obj.cpp",0x34c,0,iVar10,
                                "%s","PrividerTy::GetMessage");
    if (iVar13 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar10,0,"E:\\__titans\\Start\\prov_obj.cpp",0x34c);
    return 0xffff;
  }
  st::fn_00402563(local_c,message);
  SVar3 = message->id;
  if (SVar3 < MESS_FSGSTY_6941) {
    if (SVar3 == MESS_SHARED_6940) {
      st::fn_00401B63((AnonShape_005BB9F0_E38C41BB *)this_00);
      goto cf_common_exit_005BCF7F;
    }
    if (SVar3 < MESS_SHARED_6120) {
      if (SVar3 != MESS_SHARED_611F) {
        if (SVar3 < 6) {
          if (SVar3 == MESS_SHARED_0005) {
            st::fn_00405E52(this_00,'\0');
          }
          else if (SVar3 == MESS_ID_NONE) {
            st::fn_0040429B(this_00);
          }
          else if (SVar3 == MESS_ID_CREATE) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            st::fn_00403B8E(this_00,*(char *)((message->arg0).u32 + 0x14),
                         *(char *)((message->arg0).u32 + 0x18));
          }
          else if (SVar3 == MESS_SHARED_0003) {
            st::fn_004022F7(this_00);
          }
          goto cf_common_exit_005BCF7F;
        }
        if (SVar3 != MESS_SHARED_6109) {
          if (SVar3 == MESS_SHARED_610A) {
            this_00->field_0045 = 0x200;
            this_00->field_0049 = 0;
            this_00->field_004D = 0x610a;
            st::fn_00404DB8((MTaskTy *)this_00);
          }
          goto cf_common_exit_005BCF7F;
        }
      }
    }
    else {
      if (MESS_SHARED_6501 < SVar3) {
        if (SVar3 != MESS_PRIVIDERTY_6502) {
          if (SVar3 == MESS_PRIVIDERTY_693F) {
            st::fn_0040585D(this_00);
          }
          goto cf_common_exit_005BCF7F;
        }
        uVar8 = st::fn_00404FCA(g_startSystem_0081176C,this_00->field_1A61);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (CONCAT31(extraout_var,uVar8) == 0) {
          this_00->field_1A71 = uVar8;
          iVar10 = st::fn_00402360(this_00->field_1A61);
          if ((iVar10 == 0) && (iVar10 = st::fn_0040583A(), iVar10 == 0)) {
            DAT_0080877e = 0;
            st::fn_00404C8C(this_00,'\0');
            if (this_00->field_1A5B->field_02E6 != nullptr) {
              local_18 = 0x1000000;
              local_14 = 0;
              local_10 = 0;
              local_1c = 0x10101;
              st::fn_00401A9B(this_00->field_1A5B->field_02E6,&local_1c);
            }
            this_00->field_0065 = CASE_5;
            this_00->field_1A60 = 1;
          }
          goto cf_common_exit_005BCF7F;
        }
LAB_005bccb9:
        this_00->field_004D = 0x6951;
        this_00->st::fn_00401280((int)&this_00->field_0x3d);
        goto cf_common_exit_005BCF7F;
      }
      if (SVar3 == MESS_SHARED_6501) goto switchD_005bc9da_caseD_6949;
      if (SVar3 != MESS_SHARED_6121) {
        if (SVar3 == MESS_PRIVIDERTY_631F) {
          st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1C8E,0,3,0x16,0x22c,0x16,0xff
                      );
          st::fn_00710A90(g_startSystem_0081176C->field_0030,(int)this_00->field_1C8E,0,5,0x16,
                           0x226,0x16);
          st::fn_007119C0(g_startSystem_0081176C->field_0030,*(uint **)(message->arg0).ptr,0,-1,3);
          uVar2 = (message->arg1).words.low;
          if ((uVar2 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
            uVar18 = (uint)(message->arg1).words.high;
            iVar10 = uVar2 + 5;
            st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_1C8E,0,iVar10,uVar18 + 0x19,
                         iVar10,uVar18 + 0x28,9,0xd);
          }
          st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1C8A);
        }
        else if (SVar3 == MESS_SHARED_64FF) {
          this_00->field_1A71 = 0;
          iVar10 = st::fn_0040583A();
          if (iVar10 == 0) {
            this_00->field_0031 = 0;
            puVar1 = &this_00->field_0x1d;
            this_00->field_002D = 0x20;
            st::fn_006E6080(this_00,2,this_00->field_1A73,(undefined4 *)puVar1);
            this_00->field_002D = 0x28;
            uVar18 = *(uint *)(g_startSystem_0081176C->field_068E + 4);
            this_00->field_0031 = uVar18 & ((int)uVar18 < 0) - 1;
            st::fn_006E6080(this_00,2,this_00->field_1A73,(undefined4 *)puVar1);
            if (0 < *(int *)(g_startSystem_0081176C->field_068E + 4)) {
              this_00->field_002D = 0x20;
              this_00->field_0031 = 1;
              st::fn_006E6080(this_00,2,this_00->field_1A73,(undefined4 *)puVar1);
            }
            pSVar4 = this_00->field_1A5B;
            if (pSVar4->field_02E6 != nullptr) {
              memset(&local_48, 0, 0x1a); /* compiler bulk-zero initialization */
              STPiece<2,2>(local_48) = ((*(int *)(g_startSystem_0081176C->field_068E + 4) < 1) - 1 & 2) - 1;
              st::fn_00404B51(pSVar4->field_02E6,(int)&local_48);
            }
          }
        }
        goto cf_common_exit_005BCF7F;
      }
    }
    st::fn_00405510(this_00->field_1A5B);
    this_00->field_0045 = 0x200;
    this_00->field_0049 = 0;
    this_00->field_004D = message->id;
    this_00->field_0051 = message->arg0;
    this_00->field_0055 = message->arg1;
    st::fn_00404DB8((MTaskTy *)this_00);
    goto cf_common_exit_005BCF7F;
  }
  if (MESS_SHARED_8160 < SVar3) {
    switch(SVar3) {
    case MESS_SIDTY_8161:
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_1C82,0,0,
                   (uint)(message->arg1).words.high,
                   ((RecoveredSourceFamily_dibcopy *)this_00->field_1C82)->field_0004,0x13,0);
      st::fn_00710A90(g_startSystem_0081176C->field_0030,(int)this_00->field_1C82,0,4,
                       (uint)(message->arg1).words.high,*(int *)(this_00->field_1C82 + 2) + -4,0x13);
      if (this_00->field_1A5F == '\0') {
        iVar10 = g_startSystem_0081176C->field_068A;
      }
      else {
        iVar10 = g_startSystem_0081176C->field_068E;
      }
      if (iVar10 != 0) {
        st::fn_007119C0(g_startSystem_0081176C->field_0030,
                       *(uint **)(iVar10 + 8 + (uint)(message->arg0).words.low * 0x14),2,-1,
                       (-(uint)((message->arg0).words.high != 0) & 2) + 1);
      }
      uVar18 = (uint)(message->arg1).words.high;
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,this_00->field_1C2A[uVar18 / 0x13],0xfffffffe,0x7a,
                 uVar18 + 0x67);
      break;
    case MESS_SIDTY_8163:
      SVar5 = message->arg0;
      this_00->field_1A71 = 0;
      this_00->field_1A61 = SVar5;
      break;
    case MESS_OPTPANELTY_8164:
      st::fn_004031D4
                ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1A77,
                 (int)message,0);
      break;
    case MESS_OPTPANELTY_8165:
      st::fn_004031D4
                ((MMMObjTy *)this_00,(RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1B08,
                 (int)message,0);
      break;
    case MESS_SHARED_8166:
      uVar18 = *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
      this_00->field_1BB9 = uVar18;
      if (this_00->field_1B9D != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)this_00->field_1BE1,this_00->field_1B9D,this_00->field_1BA1,
                   this_00->field_1BB5,uVar18);
      }
    }
    goto cf_common_exit_005BCF7F;
  }
  if (SVar3 == MESS_SHARED_8160) {
    (message->arg1).u32 = 0x13;
    goto cf_common_exit_005BCF7F;
  }
  switch(SVar3) {
  case MESS_CHOOSEMAPTY_6942:
    this_00->field_0045 = 0x200;
    this_00->field_0049 = 0;
    this_00->field_004D = 0x6102;
    this_00->field_0051 = message->arg0;
    st::fn_00404DB8((MTaskTy *)this_00);
    break;
  case MESS_WAITTY_6943:
    DAT_0080877e = 1;
    st::fn_004036C0(this_00,0x6942,(message->arg0).u32,0);
    st::fn_00404C8C(this_00,'\x01');
    pMVar14 = this_00->field_1A5B->field_02E6;
    goto cf_common_exit_005BCD75;
  case MESS_FSGSTY_6949:
switchD_005bc9da_caseD_6949:
    uVar8 = st::fn_00404FCA(g_startSystem_0081176C,this_00->field_1A61);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (CONCAT31(extraout_var_00,uVar8) != 0) goto LAB_005bccb9;
    iVar10 = st::fn_00402360(this_00->field_1A61);
    if (iVar10 != 0) break;
    if ((int)this_00->field_1C92->elementSize < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)this_00->field_1C92->growCapacity;
    }
    iVar10 = st::fn_00404A2A(0,uVar12);
    if (iVar10 != 0) {
      pMVar14 = this_00->field_1A5B->field_02E6;
      if (pMVar14 != nullptr) {
        st::fn_00403FA8(pMVar14,0x2134,'\0',nullptr,nullptr,nullptr
                           ,0,0);
      }
      break;
    }
    DAT_0080877e = 1;
    st::fn_004036C0(this_00,0x611f,(-(uint)(message->id != MESS_SHARED_6501) & 8) + 4,0x11);
    st::fn_00404C8C(this_00,'\x01');
    pMVar14 = this_00->field_1A5B->field_02E6;
    goto cf_common_exit_005BCD75;
  case 0x694e:
    iVar10 = st::fn_00404A2A(this_00->field_1A61,&DAT_008016a0);
    if (iVar10 == 0) {
      this_00->field_1A71 = 1;
      this_00->field_1A69 = this_00->field_0061;
      this_00->field_1A6D = 0;
      pCVar7 = g_cursorClass_00802A30;
      if (g_cursorClass_00802A30 != nullptr) {
        iVar10 = g_cursorClass_00802A30->field_00C9;
        iVar13 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_5;
        pCVar7->field_0494 = 0xffff;
        st::fn_0040507E(pCVar7,CASE_0,iVar13,iVar10);
        st::fn_0040241E(pCVar7,pCVar7->field_00C5,pCVar7->field_00C9);
        pCVar7->field_00D2 = 0;
        pCVar7->field_04DF = -1;
      }
    }
    break;
  case MESS_SHARED_6951:
    DAT_0080877e = 1;
    st::fn_004036C0(this_00,0x610a,0,0);
    st::fn_00404C8C(this_00,'\x01');
    pMVar14 = this_00->field_1A5B->field_02E6;
cf_common_exit_005BCD75:
    if (pMVar14 != nullptr) {
      st::fn_00401FA5(pMVar14,1,0,1);
    }
    break;
  case MESS_PRIVIDERTY_6952:
    this_00->field_1A71 = 0;
    pCVar7 = g_cursorClass_00802A30;
    DAT_0080877e = 1;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar10 = g_cursorClass_00802A30->field_00C9;
      iVar13 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      pCVar7->field_0494 = 0xffff;
      st::fn_0040507E(pCVar7,CASE_0,iVar13,iVar10);
      st::fn_0040241E(pCVar7,pCVar7->field_00C5,pCVar7->field_00C9);
      pCVar7->field_00D2 = 0;
      pCVar7->field_04DF = -1;
    }
    if (this_00->field_1A5F == '\0') {
      st::fn_004036C0(this_00,0x6942,(message->arg0).u32,0);
      st::fn_00404C8C(this_00,'\x01');
      pMVar14 = this_00->field_1A5B->field_02E6;
      if (pMVar14 != nullptr) {
        st::fn_00401FA5(pMVar14,1,0,1);
      }
    }
    else {
      st::fn_00404C8C(this_00,'\0');
      if (this_00->field_1A5B->field_02E6 != nullptr) {
        local_2c = 0x10100;
        local_24 = 0;
        local_28 = 0x100;
        local_20 = 0;
        st::fn_00401A9B(this_00->field_1A5B->field_02E6,&local_2c);
      }
      this_00->field_0065 = CASE_5;
      this_00->field_1A60 = 0;
      local_8 = 0xffffffff;
      st::fn_006B3430((int *)g_ddxContext_008075A8,this_00->field_1C8A);
      st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x402f13,0x22e,0x2e,
                   (ushort *)&this_00->field_1A5B->field_0140);
      st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x79,0x197);
      pHVar11 = (HoloTy *)st::fn_0072E530(0x33);
      if (pHVar11 == nullptr) {
        pHVar11 = nullptr;
      }
      else {
        pHVar11->field_0002 = 1;
        pHVar11->field_0000 = 0;
        *(undefined4 *)&pHVar11->field_0x3 = 0xffffffff;
        pHVar11->field_0001 = CASE_2;
        pHVar11->field_0007 = nullptr;
        pHVar11->field_000B = nullptr;
        pHVar11->field_000F = 0;
        *(undefined4 *)&pHVar11->field_0x1b = 1;
        pHVar11->field_0013 = 1;
        pHVar11->field_0017 = -1;
        pHVar11->field_0027 = 0;
        pHVar11->field_0023 = 0;
        pHVar11->field_002F = 1;
        pHVar11->field_002B = 1;
      }
      this_00->field_1C9A = pHVar11;
      if (pHVar11 != nullptr) {
        uVar18 = 0;
        cVar17 = '\x01';
        bVar16 = 0x10;
        iVar13 = 1;
        iVar10 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x79,0x197,0x22e,0x2e);
        uVar18 = st::fn_0040459D(this_00->field_1C9A,CASE_1,0x79,0x197,iVar10,iVar13,bVar16,cVar17,
                              uVar18);
        if (uVar18 != 0) {
          pHVar11 = this_00->field_1C9A;
          pHVar11->field_0002 = 1;
          pHVar11->field_0017 = pHVar11->field_0013;
          uVar18 = *(uint *)&this_00->field_1C9A->field_0x3;
          if (-1 < (int)uVar18) {
            st::fn_006B3430((int *)g_ddxContext_008075A8,uVar18);
          }
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,this_00->field_1C8A);
        }
      }
      if (local_8 != 0xffffffff) {
        st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
      }
    }
  }
cf_common_exit_005BCF7F:
  g_currentExceptionFrame = local_8c.previous;
  iVar10 = st::fn_00401280((MMObjTy *)this_00,message);
  return iVar10;
}

