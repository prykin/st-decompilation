#include "st/generated.hpp"
// Generated translation unit: source/original/Start/wait_obj.cpp

// 005E6640 ChooseMapTy::OutListProc
#line 1 "decomp/ST.exe/functions/005E6640/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   ChooseMapTy::OutListProc */

void __thiscall
st::fn_005E6640
          (ChooseMapTy *this,int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
          DWORD param_6,DWORD param_7,int param_8)

{
  byte bVar2;
  int errorCode;
  int iVar3;
  byte bVar4;
  InternalExceptionFrame local_50;
  AnonShape_005E6640_0F1EE66B *local_c;
  uint local_8;

  local_c = (AnonShape_005E6640_0F1EE66B *)param_8;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\wait_obj.cpp",0x1c,0,errorCode,
                               "%s","ChooseMapTy::OutListProc");
    if (iVar3 == 0) {
      st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\wait_obj.cpp",0x1c);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if ((local_c != nullptr) && (local_c->field_1AEC != nullptr))
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
                (param_1,param_4,param_5,local_c->field_1AEC,nullptr,0,param_5 + -0x3f,param_6,
                 param_7,0);
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 005E6770 WaitTy::InitWait
#line 1 "decomp/ST.exe/functions/005E6770/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::InitWait */

void __thiscall st::fn_005E6770(WaitTy *this,undefined4 param_1,undefined4 param_2)

{
  RecoveredSourceFamily_dibcopy *pRVar1;
  StartSystemTy *pSVar2;
  CursorClassTy *this_00;
  WaitTy *this_01;
  int iVar4;
  DArrayTy *pDVar5;
  ushort *puVar6;
  int uVar7;
  undefined4 *puVar7;
  HoloTy *pHVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  byte bVar13;
  char cVar14;
  undefined4 local_668 [256];
  undefined4 local_268;
  undefined4 local_1a5;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_17e;
  undefined4 local_171;
  undefined4 local_16d;
  int local_169;
  undefined4 local_6c [7];
  InternalExceptionFrame local_50;
  WaitTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_01 = local_c;
  if (iVar4 == 0) {
    _DAT_0080f32e = 0;
    local_c->field_1A64 = param_1;
    local_c->field_1A68 = param_2;
    pDVar5 = st::fn_006B54F0(nullptr,10,10);
    this_01->field_1AF0 = pDVar5;
    if ((DAT_00811768 == '\x01') || (DAT_008067a0 != '\0')) {
      st::fn_00401D43(g_dDXContext_0080759C,1,0);
    }
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    puVar6 = (ushort *)st::fn_0070A9F0(g_cMf32_00806780,"LOADSINGLE",0,1);
    g_startSystem_0081176C->field_002C = puVar6;
    puVar6 = g_startSystem_0081176C->field_002C;
    this_01->field_005D = puVar6;
    st::fn_006BC360(puVar6,local_668,nullptr);
    this_01->field_1A5B->field_0140 = 0x1f;
    st::fn_00718780
              ((int)local_668,0,0x100,0x8b,0x15,(undefined4 *)&this_01->field_1A5B->field_0x144);
    puVar6 = st::fn_0070A5A0(g_cMf32_00806780,1,"MM_MAPB",0,1);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_02F0,0,0,'\x01',
           (byte *)puVar6);
    pRVar1 = (RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_0544;
    st::fn_006B4170(pRVar1,0,0,0,pRVar1->field_0004,pRVar1->field_0008,0xff);
    if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
      st::fn_006B5570((DArrayTy *)g_startSystem_0081176C->field_0548);
    }
    pDVar5 = st::fn_006B54F0(nullptr,10,10);
    g_startSystem_0081176C->field_0548 = &pDVar5->flags;
    if (g_startSystem_0081176C->field_0389 != 0) {
      this_01->field_002D = 0x28;
      *(undefined2 *)&this_01->field_0x31 = 1;
      *(short *)&this_01->field_0x33 = (short)g_startSystem_0081176C->field_0548[2];
      st::fn_006E6080(this_01,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_01->field_0x1d);
      this_01->field_002D = 0x22;
      *(undefined2 *)&this_01->field_0x33 = 0;
      *(undefined2 *)&this_01->field_0x31 = 0;
      st::fn_006E6080(this_01,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_01->field_0x1d);
    }
    st::fn_004043F4(this_01,'\x01');
    iVar4 = 1;
    puVar6 = this_01->field_005D + 0x14;
    uVar7 = st::fn_006B4FE0((int)this_01->field_005D);
    puVar6 = (ushort *)
             st::fn_006B50C0(0x1e4,399,(uint)this_01->field_005D[7],uVar7,(undefined4 *)puVar6,iVar4);
    this_01->field_1AEC = puVar6;
    uVar10 = *(uint *)(puVar6 + 10);
    if (uVar10 == 0) {
      uVar10 = ((uint)puVar6[7] * *(int *)(puVar6 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar6 + 4);
    }
    puVar7 = (undefined4 *)st::fn_006B4FA0((int *)puVar6);
    for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    uVar9 = 0x3f;
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined1 *)puVar7 = 0;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
    puVar11 = this_01->field_1A94;
    do {
      st::fn_006B2330(g_ddxContext_008075A8,puVar11,0x31,0x402211,*(uint *)(this_01->field_1AEC + 2),
                   0x13,(ushort *)this_01);
      st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar11,0xffffffff,0x114,uVar9);
      st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar11);
      uVar9 = uVar9 + 0x13;
      puVar11 = puVar11 + 1;
    } while ((int)uVar9 < 0x1e1);
    st::fn_00402941(this_01);
    st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x403099,0x204,0x19d,
                 (ushort *)&this_01->field_1A5B->field_0140);
    st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,0x112,0x38);
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
    this_01->field_1AF8 = pHVar8;
    if (pHVar8 != nullptr) {
      uVar10 = 0;
      cVar14 = '\x01';
      bVar13 = 0x10;
      iVar12 = 1;
      iVar4 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x112,0x38,0x204,0x19d);
      uVar10 = st::fn_0040459D(this_01->field_1AF8,CASE_2,0x112,0x38,iVar4,iVar12,bVar13,cVar14,uVar10);
      if (uVar10 != 0) {
        pHVar8 = this_01->field_1AF8;
        pHVar8->field_0002 = 1;
        pHVar8->field_0017 = pHVar8->field_0013;
        uVar10 = *(uint *)&this_01->field_1AF8->field_0x3;
        if (-1 < (int)uVar10) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar10);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
      local_8 = 0xffffffff;
    }
    if ((this_01->field_1A64 == 0) || (this_01->field_1A68 != 0)) {
      st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x4042d2,0xf9,0x121,
                   (ushort *)&this_01->field_1A5B->field_0140);
      st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,10,0xb4);
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
      this_01->field_1B00 = pHVar8;
      if (pHVar8 != nullptr) {
        uVar10 = 0;
        cVar14 = '\x01';
        bVar13 = 0x10;
        iVar12 = 1;
        iVar4 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
        uVar10 = st::fn_0040459D(this_01->field_1B00,CASE_4,10,0xb4,iVar4,iVar12,bVar13,cVar14,uVar10);
        if (uVar10 != 0) {
          pHVar8 = this_01->field_1B00;
          pHVar8->field_0002 = 1;
          pHVar8->field_0017 = pHVar8->field_0013;
          uVar10 = *(uint *)&this_01->field_1B00->field_0x3;
          if (-1 < (int)uVar10) {
            st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar10);
          }
          if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
            st::fn_006B3AF0((int *)g_startSystem_0081176C->field_03D5,
                         g_startSystem_0081176C->field_0391);
          }
          if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
            st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0466,
                         g_startSystem_0081176C->field_0422);
          }
          if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
            st::fn_006B3AF0((int *)g_startSystem_0081176C->field_04F7,
                         g_startSystem_0081176C->field_04B3);
          }
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
        }
      }
      if (local_8 != 0xffffffff) {
        st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391,
                   0xfffffffe,g_startSystem_0081176C->field_03A9,g_startSystem_0081176C->field_03AD);
      }
      if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422,
                   0xfffffffe,g_startSystem_0081176C->field_043A,g_startSystem_0081176C->field_043E);
      }
      if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3,
                   0xfffffffe,g_startSystem_0081176C->field_04CB,g_startSystem_0081176C->field_04CF);
      }
      st::fn_006B3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
    }
    if (this_01->field_1A64 == 0) {
      st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x403b61,400,0x62,
                   (ushort *)&this_01->field_1A5B->field_0140);
      st::fn_006B3640((int *)g_ddxContext_008075A8,local_8,0xffffffff,200,0x1f1);
      if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560,
                   0xfffffffe,g_startSystem_0081176C->field_0578,g_startSystem_0081176C->field_057C);
      }
      if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1,
                   0xfffffffe,g_startSystem_0081176C->field_0609,g_startSystem_0081176C->field_060D);
      }
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
      this_01->field_1AFC = pHVar8;
      if (pHVar8 != nullptr) {
        uVar10 = 0;
        cVar14 = '\x01';
        bVar13 = 0x10;
        iVar12 = 1;
        iVar4 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
        uVar10 = st::fn_0040459D(this_01->field_1AFC,CASE_1,200,0x1f1,iVar4,iVar12,bVar13,cVar14,uVar10
                             );
        if (uVar10 != 0) {
          pHVar8 = this_01->field_1AFC;
          pHVar8->field_0002 = 1;
          pHVar8->field_0017 = pHVar8->field_0013;
          uVar10 = *(uint *)&this_01->field_1AFC->field_0x3;
          if (-1 < (int)uVar10) {
            st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar10);
          }
          if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
            st::fn_006B3AF0((int *)g_startSystem_0081176C->field_05A4,
                         g_startSystem_0081176C->field_0560);
          }
          if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
            st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0635,
                         g_startSystem_0081176C->field_05F1);
          }
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
        }
      }
      if (local_8 != 0xffffffff) {
        st::fn_006B3BB0((int *)g_ddxContext_008075A8,local_8);
        local_8 = 0xffffffff;
      }
    }
    else {
      if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560,
                   0xfffffffe,g_startSystem_0081176C->field_0578,g_startSystem_0081176C->field_057C);
      }
      if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1,
                   0xfffffffe,g_startSystem_0081176C->field_0609,g_startSystem_0081176C->field_060D);
      }
      st::fn_006B3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
      st::fn_006B3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
    }
    if ((DAT_00811768 != '\0') || (DAT_008067a0 != '\0')) {
      st::fn_0040448A((undefined4 *)g_dDXContext_0080759C,(int *)g_ddxContext_008075A8,
                         this_01->field_005D,10,2);
    }
    pHVar8 = this_01->field_1AF8;
    if (((pHVar8 != nullptr) && (pHVar8->field_0000 != '\0')) &&
       (-1 < (int)*(uint *)&pHVar8->field_0x3)) {
      st::fn_006B3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar8->field_0x3);
    }
    pHVar8 = this_01->field_1B00;
    if (((pHVar8 != nullptr) && (pHVar8->field_0000 != '\0')) &&
       (-1 < (int)*(uint *)&pHVar8->field_0x3)) {
      st::fn_006B3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar8->field_0x3);
    }
    pHVar8 = this_01->field_1AFC;
    if (((pHVar8 != nullptr) && (pHVar8->field_0000 != '\0')) &&
       (-1 < (int)*(uint *)&pHVar8->field_0x3)) {
      st::fn_006B3430((int *)g_ddxContext_008075A8,*(uint *)&pHVar8->field_0x3);
    }
    st::fn_00401B45(this_01);
    this_00 = g_cursorClass_00802A30;
    if (g_cursorClass_00802A30 != nullptr) {
      iVar4 = g_cursorClass_00802A30->field_00C9;
      iVar12 = g_cursorClass_00802A30->field_00C5;
      g_cursorClass_00802A30->field_0493 = CASE_1;
      this_00->field_0494 = 0xffff;
      st::fn_0040507E(this_00,CASE_0,iVar12,iVar4);
      st::fn_0040241E(this_00,this_00->field_00C5,this_00->field_00C9);
      this_00->field_00D2 = 0;
      this_00->field_04DF = -1;
    }
    this_01->field_0065 = 3;
    puVar7 = &local_268;
    memset(puVar7, 0, 0x1fb); /* compiler bulk-zero initialization */
    puVar7 = (undefined4 *)((byte *)puVar7 + 0x1f8);
    iVar4 = 0;
    pSVar2 = this_01->field_1A5B;
    local_194 = 2;
    local_16d = 2;
    local_198 = this_01->field_0008;
    local_1a5 = 0x2340;
    local_169 = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
    local_190 = 0x6943;
    local_17e = 0x24bc;
    local_171 = local_198;
    if (pSVar2->field_02E6 != nullptr) {
      puVar7 = local_6c;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0xffffffff;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0xffff;
      st::fn_00405191(pSVar2->field_02E6);
      this_01->field_1A5B->field_02E6->field_1CAB = this_01->field_0008;
      st::fn_00401717(this_01->field_1A5B->field_02E6,0,(int)&local_268,0,0);
      st::fn_00404B51(this_01->field_1A5B->field_02E6,(int)local_6c);
    }
    st::fn_0040329C(&g_sound,0);
    if ((STPiece<1,1>(DAT_00807300) & 8) != 0) {
      st::fn_00402FD1(&g_sound,0x14,'\x02',0,nullptr);
    }
    st::fn_00404BF1(this_01,0xb,'\0',-1);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar12 = st::fn_006AD4D0("E:\\__titans\\Start\\wait_obj.cpp",0xa3,0,iVar4,"%s",
                              "WaitTy::InitWait");
  if (iVar12 == 0) {
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\wait_obj.cpp",0xa3);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 005E7570 WaitTy::DoneWait
#line 1 "decomp/ST.exe/functions/005E7570/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::DoneWait */

void __thiscall st::fn_005E7570(WaitTy *this)

{
  MMsgTy *this_00;
  WaitTy *pWVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  WaitTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pWVar2 = local_8;
  if (iVar3 == 0) {
    st::fn_0040458E((MMObjTy *)local_8);
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    if (pWVar2->field_004D == 0x6105) {
      if (DAT_00811768 == '\x02') {
        pWVar2->field_004D = 0x6102;
        st::fn_00401D43(g_dDXContext_0080759C,10,2);
      }
      st::fn_00404B83();
    }
    if (pWVar2->field_004D == 0x610a) {
      st::fn_00401D43(g_dDXContext_0080759C,10,2);
      st::fn_00404B83();
    }
    if (g_startSystem_0081176C->field_002C != nullptr) {
      st::fn_006F20E0(g_cMf32_00806780,(uint *)&g_startSystem_0081176C->field_002C);
    }
    if (pWVar2->field_1AF8 != nullptr) {
      st::fn_0040128A(pWVar2->field_1AF8);
      st::fn_0072E2B0(pWVar2->field_1AF8);
      pWVar2->field_1AF8 = nullptr;
    }
    puVar5 = pWVar2->field_1A94;
    iVar3 = 0x16;
    do {
      if (*puVar5 != 0xffffffff) {
        st::fn_006B3BB0((int *)g_ddxContext_008075A8,*puVar5);
        *puVar5 = 0xffffffff;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (pWVar2->field_1B00 != nullptr) {
      st::fn_0040128A(pWVar2->field_1B00);
      st::fn_0072E2B0(pWVar2->field_1B00);
      pWVar2->field_1B00 = nullptr;
    }
    if (pWVar2->field_1A64 == 0) {
      if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
        st::fn_006B3AF0((int *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391);
      }
      if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
        st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422);
      }
      if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
        st::fn_006B3AF0((int *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3);
      }
      if (-1 < (int)g_startSystem_0081176C->field_0540) {
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
      }
    }
    if (pWVar2->field_1AFC != nullptr) {
      st::fn_0040128A(pWVar2->field_1AFC);
      st::fn_0072E2B0(pWVar2->field_1AFC);
      pWVar2->field_1AFC = nullptr;
    }
    if (pWVar2->field_1A64 == 0) {
      if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
        st::fn_006B3AF0((int *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560);
      }
      if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
        st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1);
      }
      if (-1 < (int)g_startSystem_0081176C->field_0558) {
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
      }
      if (-1 < (int)g_startSystem_0081176C->field_0554) {
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
      }
    }
    if (pWVar2->field_1AF0 != nullptr) {
      st::fn_006B5570(pWVar2->field_1AF0);
    }
    pWVar2->field_1AF0 = nullptr;
    if (pWVar2->field_1AEC != nullptr) {
      st::fn_006AB060(&pWVar2->field_1AEC);
    }
    if (pWVar2->field_1A83 != nullptr) {
      st::fn_006AB060(&pWVar2->field_1A83);
    }
    if ((pWVar2->field_004D == 0x6102) &&
       (this_00 = pWVar2->field_1A5B->field_02E6, this_00 != nullptr)) {
      st::fn_0040462E(this_00);
      pWVar2->field_1A5B->field_02E6->field_1CAB = 0;
    }
    if (pWVar2->field_004D != 0) {
      st::fn_006E3B50((AppClassTy *)&DAT_00807620,(undefined4 *)&pWVar2->field_0x3d);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\wait_obj.cpp",0xd5,0,iVar3,"%s",
                             "WaitTy::DoneWait");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\wait_obj.cpp",0xd5);
  return;
}

// 005E79B0 WaitTy::PaintWait
#line 1 "decomp/ST.exe/functions/005E79B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::PaintWait */

void __thiscall st::fn_005E79B0(WaitTy *this,char param_1)

{
  WaitTy *pWVar2;
  int errorCode;
  uint *resourceString;
  int iVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ChatGlassTy *extraout_ECX;
  undefined4 *this_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ChatGlassTy *extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  ChatGlassTy *extraout_ECX_01;
  ChatGlassTy *this_01;
  StartServTy *this_02;
  uint uVar4;
  uint uVar5;
  ccFntTy *pcVar6;
  uint uVar7;
  InternalExceptionFrame local_4c;
  WaitTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    st::fn_006B5F80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
    pWVar2 = local_8;
    st::fn_00403738(0,0,'\x01',(BITMAPINFO *)local_8->field_005D);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    this_01 = extraout_ECX;
    if ((pWVar2->field_1AF8 == nullptr) && (param_1 == '\0')) {
      this_00 = &pWVar2->field_1A5B->field_0140;
      st::fn_00403099
                ((MMMObjTy *)this_00,(int)g_dDXContext_0080759C,nullptr,nullptr,
                 0x112,0x38,0x204,0x19d,this_00);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_01 = extraout_ECX_00;
    }
    if (((pWVar2->field_1B00 == nullptr) && (param_1 == '\0')) ||
       ((param_1 != '\0' && ((pWVar2->field_1A64 != 0 && (pWVar2->field_1A68 == 0)))))) {
      st::fn_004042D2
                ((MMMObjTy *)g_dDXContext_0080759C,(int)g_dDXContext_0080759C,nullptr,
                 nullptr,10,0xb4,0xf9,0x121,&pWVar2->field_1A5B->field_0140);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      this_01 = extraout_ECX_01;
    }
    if (((pWVar2->field_1AFC == nullptr) && (param_1 == '\0')) ||
       ((param_1 != '\0' && (pWVar2->field_1A64 != 0)))) {
      st::fn_00403B61
                (this_01,(AnonShape_GLOBAL_0080759C_9638EF10 *)g_dDXContext_0080759C,0,0,200,0x1f1,
                 400,0x62,&pWVar2->field_1A5B->field_0140);
    }
    uVar7 = 0;
    pcVar6 = g_startSystem_0081176C->field_0030;
    uVar5 = 0xffffffff;
    uVar4 = 0xfffffffe;
    resourceString = (uint *)st::fn_006B0140(0x26ae,g_module_00807618);
    st::fn_00404C2D(this_02,0,0xe9,0x14,0x14c,0x18,resourceString,uVar4,uVar5,pcVar6,uVar7);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\wait_obj.cpp",0xeb,0,errorCode,
                             "%s","WaitTy::PaintWait");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\wait_obj.cpp",0xeb);
  return;
}

// 005E7C00 WaitTy::AddStr
#line 1 "decomp/ST.exe/functions/005E7C00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::AddStr

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005E7C00(WaitTy *this,uint *param_1,int param_2)

{
  dword dVar1;
  ushort *puVar2;
  RecoveredSourceFamily_dibcopy *pRVar3;
  WaitTy *pWVar5;
  int iVar6;
  DArrayTy *pDVar7;
  DArrayTy *pDVar8;
  char *text;
  undefined4 *puVar9;
  uint *resourceString;
  int iVar10;
  uint uVar11;
  InternalExceptionFrame local_54;
  DArrayTy *local_10;
  WaitTy *local_c;
  uint *local_8;

  if (param_1 != nullptr) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_c = this;
    iVar6 = st::fn_0072D7F0(local_54.jumpBuffer,0);
    pWVar5 = local_c;
    if (iVar6 == 0) {
      if (param_2 != 0) {
        pDVar8 = local_c->field_1AF0;
        uVar11 = local_c->field_1AF4;
        if ((int)uVar11 < (int)pDVar8->elementSize) {
          do {
            st::fn_006B7830((AnonShape_006B7830_769CA2DF *)pDVar8,uVar11);
            pDVar8 = pWVar5->field_1AF0;
            uVar11 = pWVar5->field_1AF4;
          } while ((int)uVar11 < (int)pDVar8->elementSize);
        }
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)pWVar5->field_1AEC,0,0,
                     pWVar5->field_1AF4 * 0x13,
                     ((RecoveredSourceFamily_dibcopy *)pWVar5->field_1AEC)->field_0004,
                     (0x16 - pWVar5->field_1AF4) * 0x13,0);
      }
      pDVar7 = (DArrayTy *)st::fn_00712F80(g_startSystem_0081176C->field_0030,param_1);
      pDVar8 = local_10;
      if (pDVar7 != nullptr) {
        pDVar8 = (DArrayTy *)
                 st::fn_007121F0(g_startSystem_0081176C->field_0030,(uint *)pDVar7,
                                   " ,.;:!?/\\()[]{}",0x1e4,0,0xffffffff,1);
        local_10 = pDVar8;
        st::fn_006B5570(pDVar7);
      }
      pWVar5->field_1AF4 = pWVar5->field_1AF0->elementSize;
      if (pDVar8 != nullptr) {
        iVar6 = 0;
        if (0 < (int)pDVar8->elementSize) {
          if ((int)pDVar8->elementSize < 1) {
            text = nullptr;
            goto LAB_005e7d14;
          }
          do {
            text = *(char **)(pDVar8->growCapacity + iVar6 * 4);
LAB_005e7d14:
            st::fn_006B5AA0(&pWVar5->field_1AF0->flags,text);
            iVar6 = iVar6 + 1;
          } while (iVar6 < (int)pDVar8->elementSize);
        }
        st::fn_006B5570(pDVar8);
      }
      dVar1 = pWVar5->field_1AF0->elementSize;
      if ((int)dVar1 < 0x16) {
        iVar6 = dVar1 - 1;
      }
      else if ((int)dVar1 < 0x2c) {
        pRVar3 = (RecoveredSourceFamily_dibcopy *)pWVar5->field_1AEC;
        iVar6 = 0x2c - dVar1;
        st::fn_006B55F0
                  (pRVar3,0,0,0,(byte *)pRVar3,0,0,dVar1 * 0x13 + -0x1a2,pRVar3->field_0004,
                   iVar6 * 0x13);
      }
      else {
        puVar2 = pWVar5->field_1AEC;
        iVar6 = 0;
        local_8 = *(uint **)(puVar2 + 10);
        if (local_8 == nullptr) {
          local_8 = (uint *)(((uint)puVar2[7] * *(int *)(puVar2 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                            *(int *)(puVar2 + 4));
        }
        puVar9 = (undefined4 *)st::fn_006B4FA0((int *)puVar2);
        for (uVar11 = (uint)local_8 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
        }
        for (uVar11 = (uint)local_8 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined1 *)puVar9 = 0;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
      }
      dVar1 = pWVar5->field_1AF0->elementSize;
      while (0x15 < (int)dVar1) {
        st::fn_006B7830((AnonShape_006B7830_769CA2DF *)pWVar5->field_1AF0,0);
        pDVar8 = pWVar5->field_1AF0;
        pWVar5->field_1AF0 = (DArrayTy *)&pDVar8[-1].elementSize;
        dVar1 = pDVar8[-1].capacity;
      }
      if (iVar6 <= (int)(pWVar5->field_1AF0->elementSize - 1)) {
        local_8 = pWVar5->field_1A94 + iVar6;
        uVar11 = iVar6 * 0x13;
        do {
          st::fn_006B4170((RecoveredSourceFamily_dibcopy *)pWVar5->field_1AEC,0,0,uVar11,
                       ((RecoveredSourceFamily_dibcopy *)pWVar5->field_1AEC)->field_0004,0x13,0);
          st::fn_00710A90(g_startSystem_0081176C->field_0030,(int)pWVar5->field_1AEC,0,2,uVar11,
                           *(int *)(pWVar5->field_1AEC + 2) + -4,0x13);
          if (iVar6 < (int)pWVar5->field_1AF0->elementSize) {
            resourceString = *(uint **)(pWVar5->field_1AF0->growCapacity + iVar6 * 4);
          }
          else {
            resourceString = nullptr;
          }
          st::fn_007119C0(g_startSystem_0081176C->field_0030,resourceString,0,-1,1);
          st::fn_006B35D0((int *)g_ddxContext_008075A8,*local_8);
          iVar6 = iVar6 + 1;
          local_8 = local_8 + 1;
          uVar11 = uVar11 + 0x13;
        } while (iVar6 <= (int)(pWVar5->field_1AF0->elementSize - 1));
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar10 = st::fn_006AD4D0("E:\\__titans\\Start\\wait_obj.cpp",0x120,0,iVar6,
                                "%s","WaitTy::AddStr");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,"E:\\__titans\\Start\\wait_obj.cpp",0x120);
  }
  return;
}

// 005E7FE0 WaitTy::ShowDescription
#line 1 "decomp/ST.exe/functions/005E7FE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::ShowDescription */

void __thiscall st::fn_005E7FE0(WaitTy *this)

{
  undefined1 *puVar1;
  RecoveredSourceFamily_dibcopy *pRVar2;
  cMf32 *pcVar4;
  int iVar5;
  ushort *puVar6;
  DArrayTy *pDVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  WaitTy *this_00;
  uint *puVar11;
  byte *pbVar12;
  byte local_1a8 [260];
  InternalExceptionFrame local_a4;
  InternalExceptionFrame local_60;
  undefined1 local_1c;
  undefined4 local_1b;
  cMf32 *local_10;
  int local_c;
  WaitTy *local_8;

  local_c = 0;
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_8 = this;
  iVar5 = st::fn_0072D7F0(local_60.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar10 = st::fn_006AD4D0("E:\\__titans\\Start\\wait_obj.cpp",0x15e,0,iVar5,
                                "%s","WaitTy::ShowDescription");
    if (iVar10 == 0) {
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\Start\\wait_obj.cpp",0x15e);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  puVar6 = st::fn_0070A5A0(g_cMf32_00806780,1,"MM_MAPB",0,1);
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_02F0,0,0,'\x01',
         (byte *)puVar6);
  pRVar2 = (RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_0544;
  st::fn_006B4170(pRVar2,0,0,0,pRVar2->field_0004,pRVar2->field_0008,0xff);
  if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
    st::fn_006B5570((DArrayTy *)g_startSystem_0081176C->field_0548);
  }
  pDVar7 = st::fn_006B54F0(nullptr,10,10);
  this_00 = local_8;
  g_startSystem_0081176C->field_0548 = &pDVar7->flags;
  if (local_8->field_1A8F == -1) {
    pcVar8 = st::fn_006B0140(0x252c,g_module_00807618);
    pcVar9 = st::fn_006B0140(0x252a,g_module_00807618);
    st::external_00000080((LPSTR)&DAT_0080f33a,"%s (%s)",pcVar9,pcVar8);
    iVar5 = 0;
    puVar11 = &DAT_0080f33a;
  }
  else {
    if (((byte)local_8->field_1A93 < 2) || (3 < (byte)local_8->field_1A93)) goto LAB_005e829d;
    st::external_00000080((LPSTR)&DAT_0080f33a,"%s%s",&DAT_00807680,PTR_s_CUSTOM__0079c244);
    local_1c = this_00->field_1A93;
    local_1b = this_00->field_1A8F;
    iVar5 = st::fn_00725910(&DAT_0080f33a,"*.DKD",0,thunk_FUN_005db030,&local_1c,0);
    if (iVar5 == -0x70) {
      local_a4.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_a4;
      iVar5 = st::fn_0072D7F0(local_a4.jumpBuffer,0);
      if (iVar5 == 0) {
        local_10 = (cMf32 *)st::fn_006F0EC0(0x345,&DAT_0080ed16,0,0,0);
      }
      this_00 = local_8;
      pcVar4 = local_10;
      g_currentExceptionFrame = local_a4.previous;
      if (local_10 != nullptr) {
        st::fn_00402716
                  (g_startSystem_0081176C,local_10,(local_8->field_1A93 != '\x02') + '\x04');
        local_c = 1;
        st::fn_0072E730(&DAT_0080ed16,nullptr,nullptr,local_1a8,nullptr);
        pbVar12 = local_1a8;
        pcVar8 = st::fn_006B0140(0x252a,g_module_00807618);
        st::external_00000080((LPSTR)&DAT_0080f33a,"%s (%s)",pcVar8,pbVar12);
        st::fn_0040245A(this_00,&DAT_0080f33a,0);
        st::fn_006F1170(pcVar4);
      }
      goto LAB_005e829d;
    }
    pcVar8 = st::fn_006B0140(0x252b,g_module_00807618);
    pcVar9 = st::fn_006B0140(0x252a,g_module_00807618);
    st::external_00000080((LPSTR)&DAT_0080f33a,"%s (%s)",pcVar9,pcVar8);
    st::fn_0040245A(this_00,&DAT_0080f33a,0);
    iVar5 = 0;
    puVar11 = (uint *)st::fn_006B0140(0x252d,g_module_00807618);
  }
  st::fn_0040245A(this_00,puVar11,iVar5);
LAB_005e829d:
  DAT_008087be = this_00->field_1A8F;
  if (local_c == 0) {
    this_00->field_002D = 0x28;
    *(undefined2 *)&this_00->field_0x31 = 1;
    puVar1 = &this_00->field_0x1d;
    *(short *)&this_00->field_0x33 = (short)g_startSystem_0081176C->field_0548[2];
    st::fn_006E6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar1);
    this_00->field_002D = 0x22;
    *(undefined2 *)&this_00->field_0x33 = 0;
    *(undefined2 *)&this_00->field_0x31 = 0;
    st::fn_006E6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar1);
    this_00->field_002D = 0x20;
    *(undefined4 *)&this_00->field_0x31 = 0;
    st::fn_006E6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)puVar1);
  }
  if (-1 < (int)g_startSystem_0081176C->field_02EC) {
    st::fn_006B35D0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
  }
  if (-1 < (int)g_startSystem_0081176C->field_0540) {
    st::fn_006B35D0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
  }
  g_currentExceptionFrame = local_60.previous;
  return;
}

// 005E84D0 WaitTy::NoneWait
#line 1 "decomp/ST.exe/functions/005E84D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::NoneWait
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NoneWait(WaitTy * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005E86EA RET | 005E8A4B RET | 005E93A5 RET | 005E93EC RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_005E84D0(WaitTy *this)

{
  undefined1 *puVar1;
  byte **value;
  char cVar2;
  byte bVar3;
  StartSystemTy *pSVar4;
  MMsgTy *this_00;
  WaitTy *this_01;
  AnonShape_005E84D0_1273B60D *pAVar6;
  DWORD DVar7;
  int iVar8;
  void **ppvVar9;
  void *pvVar10;
  byte *pbVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  AnonShape_005E84D0_1273B60D *pAVar18;
  undefined4 *puVar19;
  STMessage *pSVar20;
  undefined4 *puVar21;
  UINT UVar22;
  int *piVar23;
  undefined4 uVar24;
  char local_114 [2];
  undefined1 local_112;
  InternalExceptionFrame local_ec;
  undefined4 local_a8 [2];
  undefined2 local_9e;
  undefined2 local_9c;
  int local_8c [8];
  int local_6c;
  char local_68;
  int local_67;
  undefined4 local_63;
  char local_5c;
  int local_5b;
  undefined4 local_57;
  WaitTy *local_50;
  STMessage local_4c;
  uint local_2c;
  uint local_28;
  int local_24;
  uint *local_20;
  int local_1c;
  byte *local_18;
  AnonShape_005E84D0_1273B60D *local_14;
  AnonShape_005E84D0_1273B60D *local_10;
  int local_c;
  char local_5;

  local_c = 1;
  local_50 = this;
  DVar7 = st::external_000000DA();
  this->field_0061 = DVar7;
  local_ec.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ec;
  iVar8 = st::fn_0072D7F0(local_ec.jumpBuffer,0);
  this_01 = local_50;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_ec.previous;
    iVar14 = st::fn_006AD4D0("E:\\__titans\\Start\\wait_obj.cpp",0x2a6,0,iVar8,
                                "%s","WaitTy::NoneWait");
    if (iVar14 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar8,0,"E:\\__titans\\Start\\wait_obj.cpp",0x2a6);
    return;
  }
  if ((local_50->field_1A87 != 0) && (0xf9 < local_50->field_0061 - local_50->field_1A8B)) {
    st::fn_004059FC(local_50);
    this_01->field_1A87 = 0;
  }
  cVar2 = this_01->field_0065;
  if (cVar2 == '\x01') {
    if (this_01->field_1A75 == '\0') {
      local_14 = nullptr;
      pSVar20 = &local_4c;
      for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
        pSVar20->unknown_00 = 0;
        pSVar20 = (STMessage *)&pSVar20->unknown_04;
      }
      if (this_01->field_1A70 == 0) {
        pcVar12 = local_114;
        for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
          pcVar12[0] = '\0';
          pcVar12[1] = '\0';
          pcVar12[2] = '\0';
          pcVar12[3] = '\0';
          pcVar12 = pcVar12 + 4;
        }
        pcVar12[0] = '\0';
        pcVar12[1] = '\0';
        local_112 = 4;
        st::fn_00715360(g_int_00811764,1,'\x1a',local_114,0x26,1,0xffffffff);
      }
      iVar8 = this_01->field_1A70 + 1;
      this_01->field_1A70 = iVar8;
      if (iVar8 == 10) {
        this_01->field_1A70 = 0;
      }
      if (DAT_008067a0 != '\0') {
        st::external_00000105((CFsgsConnection *)&DAT_00802a90);
      }
      st::fn_006B7510(g_int_00811764,-1,&local_24,-1,0);
      local_1c = 0;
      if (0 < local_24) {
        do {
          iVar8 = st::fn_00715630
                            (g_int_00811764,-1,&local_2c,&local_6c,&local_14,&local_28,-1,0);
          pAVar6 = local_14;
          if (iVar8 == -0x4d) {
LAB_005e9233:
            this_01->field_1A74 = 0;
            this_01->field_1A75 = 1;
            local_4c.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
            if (this_01->field_1A5B->field_02E6 == nullptr) {
              this_01->GetMessage(&local_4c);
            }
            else {
              local_4c.unknown_08 = this_01->field_0008;
              local_4c.unknown_0c = 2;
              st::fn_00403FA8(this_01->field_1A5B->field_02E6,0x2525,'\0',&local_4c.unknown_00,
                                 nullptr,nullptr,0,0);
            }
          }
          else if (iVar8 == 0) {
            if (30000 < this_01->field_0061 - this_01->field_1A6C) goto LAB_005e9233;
          }
          else if (iVar8 == 1) {
            switch(local_2c) {
            case 0x10:
              if (this_01->field_0065 == '\x01') {
                local_4c.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
                if (this_01->field_1A5B->field_02E6 == nullptr) goto LAB_005e91f7;
                local_4c.unknown_08 = this_01->field_0008;
                local_4c.unknown_0c = 2;
                st::fn_00403FA8(this_01->field_1A5B->field_02E6,0x2524,'\0',&local_4c.unknown_00,
                                   nullptr,nullptr,0,0);
              }
              break;
            case 0x1a:
              local_5 = '\0';
              if (*(short *)local_14 == (short)((uint)DAT_00807dd5 >> 0x10)) {
                local_10 = (AnonShape_005E84D0_1273B60D *)&local_14->field_0x2;
                if (*(char *)local_10 == '\x01') {
                  puVar1 = &local_14->field_000B;
                  switch(*puVar1) {
                  case 1:
                    if (this_01->field_1A76 != '\0') {
                      ppvVar9 = &this_01->field_1A5B->field_069A;
                      if (*ppvVar9 != nullptr) {
                        st::fn_006AB060(ppvVar9);
                      }
                      this_01->field_1A76 = 0;
                    }
                    local_5 = '\x01';
                    this_01->field_1A5F = 0xe;
                    break;
                  case 2:
                  case 3:
                  case 4:
                    if (this_01->field_1A76 != '\0') {
                      if (this_01->field_1A77 != local_14->field_0003) {
                        ppvVar9 = &this_01->field_1A5B->field_069A;
                        if (*ppvVar9 != nullptr) {
                          st::fn_006AB060(ppvVar9);
                        }
                        this_01->field_1A76 = 0;
                      }
                      if (this_01->field_1A76 != '\0') break;
                    }
                    st::external_00000080((LPSTR)&DAT_0080f33a,"%s%s",&DAT_00807680,
                              PTR_s_CUSTOM__0079c244);
                    local_5c = *puVar1;
                    local_5b = pAVar6->field_0003;
                    local_57 = 0;
                    iVar8 = st::fn_00725910(&DAT_0080f33a,"*.DKD",0,thunk_FUN_005db030,
                                         &local_5c,0);
                    if (iVar8 == -0x70) {
                      local_5 = '\x01';
                    }
                    this_01->field_1A5F = ((*puVar1 == '\x03') - 1U & 0xfe) + 0xf;
                    break;
                  case 5:
                    st::external_00000080((LPSTR)&DAT_0080f33a,"%s%s%s\\",&DAT_00807680,
                              PTR_s_SAVEGAME__0079c240,&DAT_00807ddd);
                    local_68 = *puVar1;
                    local_67 = pAVar6->field_0003;
                    local_63 = *(undefined4 *)&pAVar6->field_0x7;
                    iVar8 = st::fn_00725910(&DAT_0080f33a,"*.DKD",0,thunk_FUN_005db030,
                                         &local_68,0);
                    if (iVar8 == -0x70) {
                      local_5 = '\x01';
                    }
                    this_01->field_1A5F = 0x10;
                  }
                  if (local_5 == '\0') {
                    if (this_01->field_1A76 == '\0') {
                      if ((pAVar6[1].field_0x1 == '\0') ||
                         ((*(char *)local_10 == '\x01' && (*puVar1 == '\x05')))) {
                        this_01->field_1A74 = 0;
                        st::fn_00404B83();
                        piVar23 = nullptr;
                        this_01->field_1A75 = 1;
                        UVar22 = 0x2523;
                        goto LAB_005e8ee0;
                      }
                      this_01->field_1A76 = 1;
                      iVar8 = pAVar6->field_0003;
                      this_01->field_1A7B = this_01->field_0061;
                      this_01->field_1A77 = iVar8;
                      ppvVar9 = &this_01->field_1A5B->field_069A;
                      if (*ppvVar9 != nullptr) {
                        st::fn_006AB060(ppvVar9);
                      }
                      local_18 = (byte *)0xffffffff;
                      st::fn_006B6500(g_int_00811764,1);
                      st::fn_00715360(g_int_00811764,1,'%',(char *)&local_18,4,0,0xffffffff);
                      st::fn_006B6500(g_int_00811764,DAT_0080733c);
                    }
                  }
                  else {
                    st::fn_004036C0(this_01,0x6121,(uint)(byte)this_01->field_1A5F,0x12);
                    DAT_0080877e = 0;
                    if (*puVar1 == '\x01') {
                      DAT_008087be = 0;
                    }
                    this_01->field_1A64 = 1;
                    this_01->CloseButtons();
                    this_00 = this_01->field_1A5B->field_02E6;
                    if (this_00 != nullptr) {
                      st::fn_00401FA5(this_00,1,0,1);
                    }
                  }
                }
                else if (*(char *)local_10 == '\x03') {
                  if (this_01->field_1A76 == '\0') {
                    if (local_14->field_0003 != DAT_008087be) {
                      this_01->field_1A8F = local_14->field_0003;
                      this_01->field_1A93 = local_14->field_000B;
                      this_01->field_1A87 = 1;
                      DVar7 = st::external_000000DA();
                      this_01->field_1A8B = DVar7;
                    }
                  }
                  else if (5000 < this_01->field_0061 - this_01->field_1A7B) {
                    this_01->field_1A76 = 0;
                  }
                }
              }
              else {
                this_01->field_1A74 = 0;
                memset(local_8c, 0, 0x20); /* compiler bulk-zero initialization */
                this_01->field_1A75 = 1;
                local_8c[2] = this_01->field_0008;
                piVar23 = local_8c;
                local_8c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                local_8c[3] = 2;
                UVar22 = 0x2526;
LAB_005e8ee0:
                st::fn_00403FA8(this_01->field_1A5B->field_02E6,UVar22,'\0',piVar23,
                                   nullptr,nullptr,0,0);
              }
              break;
            case 0x1b:
              st::fn_00402BBC(this_01->field_1A5B,(int)local_14);
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0x26:
              if ((((this_01->field_1A76 != '\0') &&
                   (local_14 != nullptr)) &&
                  (*(int *)local_14 == this_01->field_1A77)) &&
                 ((local_10 = local_14 + 2, (int)local_28 <= *(int *)(local_14 + 2) + 0x1c &&
                  (0x1c < (int)local_28)))) {
                if (this_01->field_1A5B->field_069A == nullptr) {
                  pAVar18 = local_14 + 1;
                  pvVar10 = st::fn_006AAC70(*(uint *)(local_14 + 1));
                  this_01->field_1A5B->field_069A = pvVar10;
                  value = &this_01->field_1A83;
                  this_01->field_1A5B->field_069E = *(uint *)pAVar18;
                  this_01->field_1A5B->field_06AE = *(undefined4 *)((int)&pAVar6[1].field_0003 + 1);
                  this_01->field_1A5B->field_06B2 = *(undefined4 *)&pAVar6[1].field_0x8;
                  this_01->field_1A5B->field_06A2 = *(uint *)local_10;
                  this_01->field_1A5B->field_06A6 = *(uint *)&pAVar6->field_0x8;
                  if (*value != nullptr) {
                    st::fn_006AB060(value);
                  }
                  uVar15 = this_01->field_1A5B->field_06A6;
                  this_01->field_1A7F = uVar15;
                  pbVar11 = st::fn_006AAC10(uVar15);
                  *value = pbVar11;
                  uVar24 = 0;
                  pcVar12 = st::fn_006B0140(0x252f,g_module_00807618);
                  st::external_00000080((LPSTR)&DAT_0080f33a,pcVar12,uVar24);
                  st::fn_0040245A(this_01,&DAT_0080f33a,0);
                }
                iVar8 = *(int *)((int)&pAVar6->field_0003 + 1);
                if (iVar8 * *(uint *)local_10 < *(uint *)(pAVar6 + 1) ||
                    iVar8 * *(uint *)local_10 - *(uint *)(pAVar6 + 1) == 0) {
                  local_10 = (AnonShape_005E84D0_1273B60D *)(this_01->field_1A83 + iVar8);
                  if (*(char *)local_10 == '\0') {
                    puVar19 = (undefined4 *)((int)&pAVar6[2].field_0003 + 1);
                    puVar21 = (undefined4 *)
                              (this_01->field_1A5B->field_06A2 * iVar8 +
                              (int)this_01->field_1A5B->field_069A);
                    for (uVar15 = local_28 - 0x1c >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                      *puVar21 = *puVar19;
                      puVar19 = puVar19 + 1;
                      puVar21 = puVar21 + 1;
                    }
                    for (uVar15 = local_28 - 0x1c & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                      *(undefined1 *)puVar21 = *(undefined1 *)puVar19;
                      puVar19 = (undefined4 *)((int)puVar19 + 1);
                      puVar21 = (undefined4 *)((int)puVar21 + 1);
                    }
                    *(char *)local_10 = '\x01';
                    this_01->field_1A7B = this_01->field_0061;
                    this_01->field_1A7F = this_01->field_1A7F - 1;
                    uVar15 = this_01->field_1A5B->field_06A6;
                    uVar15 = (uVar15 * 100 + this_01->field_1A7F * -100) / uVar15;
                    pcVar12 = st::fn_006B0140(0x252f,g_module_00807618);
                    st::external_00000080((LPSTR)&DAT_0080f33a,pcVar12,uVar15);
                    st::fn_0040245A(this_01,&DAT_0080f33a,1);
                  }
                  if (this_01->field_1A7F == 0) {
                    iVar8 = st::fn_00401E38((AnonShape_005DEB90_CA287120 *)this_01->field_1A5B);
                    if (iVar8 == 0) {
                      this_01->field_1A74 = 0;
                      st::fn_00404B83();
                      this_01->field_1A75 = 1;
                      st::fn_00403FA8(this_01->field_1A5B->field_02E6,0x252e,'\0',
                                         nullptr,nullptr,nullptr,0,0);
                    }
                    this_01->field_1A76 = 0;
                  }
                }
              }
              break;
            case 0x31:
            case 0x33:
            case 0x35:
              this_01->field_1A75 = 1;
              local_4c.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
              if (this_01->field_1A5B->field_02E6 == nullptr) {
LAB_005e91f7:
                this_01->GetMessage(&local_4c);
              }
              else {
                local_4c.unknown_08 = this_01->field_0008;
                local_4c.unknown_0c = 2;
                st::fn_00403FA8(this_01->field_1A5B->field_02E6,0x2522,'\0',&local_4c.unknown_00,
                                   nullptr,nullptr,0,0);
              }
            }
            this_01->field_1A6C = this_01->field_0061;
            if (local_14 != nullptr) {
              st::fn_006AB060(&local_14);
            }
          }
          local_1c = local_1c + 1;
        } while (local_1c < local_24);
      }
      if ((((this_01->field_1A76 != '\0') && (3000 < this_01->field_0061 - this_01->field_1A7B)) &&
          (this_01->field_1A7F != 0)) && (this_01->field_1A83 != nullptr)) {
        uVar15 = this_01->field_1A7F * 4 + 4;
        local_20 = st::fn_006AAC70(uVar15);
        local_18 = this_01->field_1A83;
        *local_20 = this_01->field_1A7F;
        puVar16 = local_20 + 1;
        uVar13 = 0;
        uVar17 = 0;
        if (this_01->field_1A5B->field_06A6 != 0) {
          do {
            if (local_18[uVar13] == 0) {
              *puVar16 = uVar13;
              puVar16 = puVar16 + 1;
              uVar17 = uVar17 + 1;
              if (this_01->field_1A7F <= uVar17) break;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < this_01->field_1A5B->field_06A6);
        }
        st::fn_006B6500(g_int_00811764,1);
        st::fn_00715360(g_int_00811764,1,'%',(char *)local_20,uVar15,1,0xffffffff);
        st::fn_006B6500(g_int_00811764,DAT_0080733c);
        st::fn_006AB060(&local_20);
        this_01->field_1A7B = this_01->field_0061;
      }
    }
  }
  else if (cVar2 == '\x03') {
    if ((this_01->field_1A64 == 0) &&
       (g_startSystem_0081176C->field_0300 < g_startSystem_0081176C->field_0304 + -1)) {
      g_startSystem_0081176C->field_0300 = g_startSystem_0081176C->field_0300 + 1;
      if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC,
                   g_startSystem_0081176C->field_0300,g_startSystem_0081176C->field_0314,
                   g_startSystem_0081176C->field_0318);
      }
      local_c = 0;
    }
    if ((this_01->field_1AF8 != nullptr) &&
       (iVar8 = st::fn_004055F1(this_01->field_1AF8), iVar8 != 0)) {
      local_c = 0;
    }
    if ((((this_01->field_1A64 == 0) || (this_01->field_1A68 != 0)) &&
        (this_01->field_1B00 != nullptr)) &&
       (iVar8 = st::fn_004055F1(this_01->field_1B00), iVar8 != 0)) {
      local_c = 0;
    }
    if (((this_01->field_1A64 == 0) && (this_01->field_1AFC != nullptr)) &&
       (iVar8 = st::fn_004055F1(this_01->field_1AFC), iVar8 != 0)) {
      local_c = 0;
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_c = 0;
    }
    if (local_c != 0) {
      if (this_01->field_1AF8 != nullptr) {
        st::fn_0040128A(this_01->field_1AF8);
        st::fn_0072E2B0(this_01->field_1AF8);
        this_01->field_1AF8 = nullptr;
      }
      if (this_01->field_1B00 != nullptr) {
        st::fn_0040128A(this_01->field_1B00);
        st::fn_0072E2B0(this_01->field_1B00);
        this_01->field_1B00 = nullptr;
      }
      if (this_01->field_1AFC != nullptr) {
        st::fn_0040128A(this_01->field_1AFC);
        st::fn_0072E2B0(this_01->field_1AFC);
        this_01->field_1AFC = nullptr;
      }
      this_01->field_0065 = 1;
      this_01->field_1A6C = this_01->field_0061;
      if (this_01->field_1A64 == 0) {
        st::fn_006B3430
                  ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
        if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
          st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC);
        }
      }
      st::fn_00402DBF(1,this_01->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
      pSVar4 = this_01->field_1A5B;
      if (pSVar4->field_02E6 != nullptr) {
        memset(local_a8, 0, 0x1a); /* compiler bulk-zero initialization */
        local_9c = 1;
        local_9e = 1;
        st::fn_00404B51(pSVar4->field_02E6,(int)local_a8);
      }
      st::fn_004036B1(this_01);
      puVar16 = this_01->field_1A94;
      iVar8 = 0x16;
      do {
        st::fn_006B3430((int *)g_ddxContext_008075A8,*puVar16);
        puVar16 = puVar16 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391,
                   0xfffffffe,g_startSystem_0081176C->field_03A9,g_startSystem_0081176C->field_03AD);
      }
      if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422,
                   0xfffffffe,g_startSystem_0081176C->field_043A,g_startSystem_0081176C->field_043E);
      }
      if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3,
                   0xfffffffe,g_startSystem_0081176C->field_04CB,g_startSystem_0081176C->field_04CF);
      }
      st::fn_006B3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
      if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560,
                   0xfffffffe,g_startSystem_0081176C->field_0578,g_startSystem_0081176C->field_057C);
      }
      if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1,
                   0xfffffffe,g_startSystem_0081176C->field_0609,g_startSystem_0081176C->field_060D);
      }
      st::fn_006B3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
      st::fn_006B3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
      st::fn_004043F4(this_01,'\0');
      g_currentExceptionFrame = local_ec.previous;
      return;
    }
  }
  else if (cVar2 == '\x04') {
    if ((this_01->field_1A64 == 0) && (0 < g_startSystem_0081176C->field_0300)) {
      g_startSystem_0081176C->field_0300 = g_startSystem_0081176C->field_0300 + -1;
      if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC,
                   g_startSystem_0081176C->field_0300,g_startSystem_0081176C->field_0314,
                   g_startSystem_0081176C->field_0318);
      }
      local_c = 0;
    }
    if (this_01->field_1AF8 != nullptr) {
      iVar8 = st::fn_004055F1(this_01->field_1AF8);
      if (iVar8 == 0) {
        uVar15 = *(uint *)&this_01->field_1AF8->field_0x3;
        if (-1 < (int)uVar15) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar15);
        }
      }
      else {
        local_c = 0;
      }
    }
    if (((this_01->field_1A64 == 0) || (this_01->field_1A5F == '\x0e')) &&
       (this_01->field_1B00 != nullptr)) {
      iVar8 = st::fn_004055F1(this_01->field_1B00);
      if (iVar8 == 0) {
        uVar15 = *(uint *)&this_01->field_1B00->field_0x3;
        if (-1 < (int)uVar15) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar15);
        }
      }
      else {
        local_c = 0;
      }
    }
    if ((this_01->field_1A64 == 0) && (this_01->field_1AFC != nullptr)) {
      iVar8 = st::fn_004055F1(this_01->field_1AFC);
      if (iVar8 == 0) {
        uVar15 = *(uint *)&this_01->field_1AFC->field_0x3;
        if (-1 < (int)uVar15) {
          st::fn_006B3AF0((int *)g_ddxContext_008075A8,uVar15);
        }
      }
      else {
        local_c = 0;
      }
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_c = 0;
    }
    if (local_c != 0) {
      bVar3 = this_01->field_1A5A;
      this_01->field_0065 = 2;
      if ((bVar3 != 0xff) && (*(int *)(&this_01->field_0xd1 + (uint)bVar3 * 0x1fb) != 0)) {
        st::fn_006E3B50
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_01->field_0xc1 + (uint)bVar3 * 0x1fb));
        g_currentExceptionFrame = local_ec.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_ec.previous;
  return;
}

// 005E9830 WaitTy::CloseButtons
#line 1 "decomp/ST.exe/functions/005E9830/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::CloseButtons */

void __thiscall st::fn_005E9830(WaitTy *this)

{
  WaitTy *this_00;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  WaitTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    st::fn_00403459((MMObjTy *)local_8);
    if (this_00->field_1A64 == 0) {
      if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
        st::fn_006B34D0
                  ((uint *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC,
                   0xfffffffe,g_startSystem_0081176C->field_0314,g_startSystem_0081176C->field_0318);
      }
      st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
    }
    this_00->field_0065 = 4;
    st::fn_00404BF1(this_00,0xc,'\x01',-1);
    st::fn_004014CE(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\Start\\wait_obj.cpp",0x2b3,0,errorCode,
                             "%s","WaitTy::CloseButtons");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\wait_obj.cpp",0x2b3);
  return;
}

// 005E9B50 WaitTy::CreateCtrls
#line 1 "decomp/ST.exe/functions/005E9B50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::CreateCtrls */

void __thiscall st::fn_005E9B50(WaitTy *this)

{
  StartSystemTy *this_00;
  WaitTy *pWVar2;
  int iVar3;
  int iVar4;
  ccFntTy **ppcVar5;
  ccFntTy *local_8d8 [6];
  undefined4 local_8c0;
  undefined4 local_8bc;
  DArrayTy *local_8b8;
  int local_88c;
  undefined4 local_888;
  undefined4 local_884;
  int local_84c;
  undefined4 local_848;
  undefined4 local_844;
  undefined4 local_74;
  InternalExceptionFrame local_4c;
  WaitTy *local_8;

  ppcVar5 = local_8d8;
  local_8 = this;
  for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
    *ppcVar5 = nullptr;
    ppcVar5 = ppcVar5 + 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pWVar2 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_1A64 == 0) {
      st::fn_00402A4A(g_startSystem_0081176C);
      st::fn_004028B5(g_startSystem_0081176C);
      ppcVar5 = local_8d8;
      for (iVar4 = 0x223; iVar4 != 0; iVar4 = iVar4 + -1) {
        *ppcVar5 = nullptr;
        ppcVar5 = ppcVar5 + 1;
      }
      local_8d8[0] = (ccFntTy *)0x1;
      local_8d8[1] = (ccFntTy *)0x9;
      local_8d8[2] = g_startSystem_0081176C->field_0034;
      local_8d8[3] = (ccFntTy *)0xcb;
      local_8d8[4] = (ccFntTy *)0x23f;
      local_8d8[5] = *(ccFntTy **)(g_startSystem_0081176C->field_0682 + 2);
      local_8c0 = *(undefined4 *)(g_startSystem_0081176C->field_0682 + 4);
      local_8bc = 0x104;
      local_8b8 = g_startSystem_0081176C->field_0686;
      this_00 = pWVar2->field_000C;
      local_74 = 0x100;
      local_88c = this_00->field_0014;
      local_888 = 0;
      local_884 = 0xc0a0;
      local_84c = this_00->field_0014;
      local_848 = 0;
      local_844 = 0xc0a2;
      (*this_00->vtable->CreateObject)
                ((SystemClassTy *)this_00,6,&g_startSystem_0081176C->field_054C,nullptr,local_8d8
                 ,0);
      st::fn_006B3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\wait_obj.cpp",0x303,0,iVar4,"%s",
                             "WaitTy::CreateCtrls");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\wait_obj.cpp",0x303);
  return;
}

// 005E9D70 WaitTy::DeleteCtrls
#line 1 "decomp/ST.exe/functions/005E9D70/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::DeleteCtrls */

void __thiscall st::fn_005E9D70(WaitTy *this)

{
  RecoveredSourceFamily_dibcopy *pRVar1;
  WaitTy *this_00;
  int iVar3;
  HoloTy *pHVar4;
  DArrayTy *pDVar5;
  undefined4 *this_01;
  uint *puVar6;
  int iVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  InternalExceptionFrame local_50;
  WaitTy *local_c;
  int local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = st::fn_006AD4D0("E:\\__titans\\Start\\wait_obj.cpp",0x34c,0,iVar3,"%s"
                               ,"WaitTy::DeleteCtrls");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\wait_obj.cpp",0x34c);
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
  this_00 = local_c;
  st::fn_00402DBF(0,local_c->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
  st::fn_006B5F80((int *)g_ddxContext_008075A8,0x112,0x38,0x204,0x19d);
  this_01 = &this_00->field_1A5B->field_0140;
  st::fn_00403099
            ((MMMObjTy *)this_01,(int)g_dDXContext_0080759C,nullptr,nullptr,0x112,
             0x38,0x204,0x19d,this_01);
  if (this_00->field_1AF8 != nullptr) {
    st::fn_0040128A(this_00->field_1AF8);
    st::fn_0072E2B0(this_00->field_1AF8);
    this_00->field_1AF8 = nullptr;
  }
  pHVar4 = (HoloTy *)st::fn_0072E530(0x33);
  if (pHVar4 == nullptr) {
    pHVar4 = nullptr;
  }
  else {
    pHVar4->field_0002 = 1;
    pHVar4->field_0000 = 0;
    *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
    pHVar4->field_0001 = CASE_2;
    pHVar4->field_0007 = nullptr;
    pHVar4->field_000B = nullptr;
    pHVar4->field_000F = 0;
    *(undefined4 *)&pHVar4->field_0x1b = 1;
    pHVar4->field_0013 = 1;
    pHVar4->field_0017 = -1;
    pHVar4->field_0027 = 0;
    pHVar4->field_0023 = 0;
    pHVar4->field_002F = 1;
    pHVar4->field_002B = 1;
  }
  this_00->field_1AF8 = pHVar4;
  if (pHVar4 != nullptr) {
    uVar10 = 0;
    cVar9 = '\x01';
    bVar8 = 0x10;
    iVar7 = 1;
    iVar3 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,0x112,0x38,0x204,0x19d);
    uVar10 = st::fn_0040459D(this_00->field_1AF8,CASE_2,0x112,0x38,iVar3,iVar7,bVar8,cVar9,uVar10);
    if (uVar10 != 0) {
      pHVar4 = this_00->field_1AF8;
      pHVar4->field_0002 = 0;
      pHVar4->field_0017 = -1;
      uVar10 = *(uint *)&this_00->field_1AF8->field_0x3;
      if (-1 < (int)uVar10) {
        st::fn_006B3430((int *)g_ddxContext_008075A8,uVar10);
      }
      st::fn_004055F1(this_00->field_1AF8);
    }
    st::fn_00402298(0x112,0x38,0x112,0x38,0x204,(byte *)0x19d,'\x01',
               (BITMAPINFO *)g_startSystem_0081176C->field_002C);
  }
  puVar6 = this_00->field_1A94;
  local_8 = 0x16;
  do {
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar6);
    puVar6 = puVar6 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if ((this_00->field_1A64 == 0) || (this_00->field_1A5F == '\x0e')) {
    if (g_startSystem_0081176C->field_0389 != 0) {
      st::fn_006E56B0(this_00->field_000C,g_startSystem_0081176C->field_0389);
    }
    g_startSystem_0081176C->field_0389 = 0;
    pRVar1 = (RecoveredSourceFamily_dibcopy *)g_startSystem_0081176C->field_0544;
    st::fn_006B4170(pRVar1,0,0,0,pRVar1->field_0004,pRVar1->field_0008,0xff);
    if ((DArrayTy *)g_startSystem_0081176C->field_0548 != nullptr) {
      st::fn_006B5570((DArrayTy *)g_startSystem_0081176C->field_0548);
    }
    pDVar5 = st::fn_006B54F0(nullptr,10,10);
    g_startSystem_0081176C->field_0548 = &pDVar5->flags;
    if (this_00->field_1B00 != nullptr) {
      st::fn_0040128A(this_00->field_1B00);
      st::fn_0072E2B0(this_00->field_1B00);
      this_00->field_1B00 = nullptr;
    }
    pHVar4 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    this_00->field_1B00 = pHVar4;
    if (pHVar4 != nullptr) {
      uVar10 = 0;
      cVar9 = '\x01';
      bVar8 = 0x10;
      iVar7 = 1;
      iVar3 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
      uVar10 = st::fn_0040459D(this_00->field_1B00,CASE_4,10,0xb4,iVar3,iVar7,bVar8,cVar9,uVar10);
      if (uVar10 != 0) {
        pHVar4 = this_00->field_1B00;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar10 = *(uint *)&this_00->field_1B00->field_0x3;
        if (-1 < (int)uVar10) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar10);
        }
        st::fn_004055F1(this_00->field_1B00);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,10,0xb4,0xf9,0x121);
      st::fn_00402298(10,0xb4,10,0xb4,0xf9,(byte *)0x121,'\x01',
                 (BITMAPINFO *)g_startSystem_0081176C->field_002C);
    }
    if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
      st::fn_006B3AF0((int *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391);
    }
    if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
      st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422);
    }
    if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
      st::fn_006B3AF0((int *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3);
    }
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
  }
  else {
    this_00->field_002D = 0x20;
    *(undefined4 *)&this_00->field_0x31 = 0;
    st::fn_006E6080(this_00,2,g_startSystem_0081176C->field_0389,(undefined4 *)&this_00->field_0x1d);
  }
  if (this_00->field_1A64 == 0) {
    if (g_startSystem_0081176C->field_054C != 0) {
      st::fn_006E56B0(this_00->field_000C,g_startSystem_0081176C->field_054C);
      g_startSystem_0081176C->field_054C = 0;
    }
    if (g_startSystem_0081176C->field_0550 != 0) {
      st::fn_006E56B0(this_00->field_000C,g_startSystem_0081176C->field_0550);
      g_startSystem_0081176C->field_0550 = 0;
    }
    if (this_00->field_1AFC != nullptr) {
      st::fn_0040128A(this_00->field_1AFC);
      st::fn_0072E2B0(this_00->field_1AFC);
      this_00->field_1AFC = nullptr;
    }
    pHVar4 = (HoloTy *)st::fn_0072E530(0x33);
    if (pHVar4 == nullptr) {
      pHVar4 = nullptr;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      *(undefined4 *)&pHVar4->field_0x3 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = nullptr;
      pHVar4->field_000B = nullptr;
      pHVar4->field_000F = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = -1;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    this_00->field_1AFC = pHVar4;
    if (pHVar4 != nullptr) {
      uVar10 = 0;
      cVar9 = '\x01';
      bVar8 = 0x10;
      iVar7 = 1;
      iVar3 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
      uVar10 = st::fn_0040459D(this_00->field_1AFC,CASE_1,200,0x1f1,iVar3,iVar7,bVar8,cVar9,uVar10);
      if (uVar10 != 0) {
        pHVar4 = this_00->field_1AFC;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = -1;
        uVar10 = *(uint *)&this_00->field_1AFC->field_0x3;
        if (-1 < (int)uVar10) {
          st::fn_006B3430((int *)g_ddxContext_008075A8,uVar10);
        }
        st::fn_004055F1(this_00->field_1AFC);
      }
      st::fn_006B5F80((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
      st::fn_00402298(200,0x1f1,200,0x1f1,400,(byte *)0x62,'\x01',
                 (BITMAPINFO *)g_startSystem_0081176C->field_002C);
    }
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
    if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
      st::fn_006B3AF0((int *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560);
    }
    if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
      st::fn_006B3AF0((int *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1);
    }
  }
  else {
    this_00->field_002D = 0x20;
    *(undefined4 *)&this_00->field_0x31 = 0;
    if (g_startSystem_0081176C->field_054C != 0) {
      st::fn_006E6080(this_00,2,g_startSystem_0081176C->field_054C,(undefined4 *)&this_00->field_0x1d);
    }
    *(undefined4 *)&this_00->field_0x31 = 0;
    if (g_startSystem_0081176C->field_0550 != 0) {
      st::fn_006E6080(this_00,2,g_startSystem_0081176C->field_0550,(undefined4 *)&this_00->field_0x1d);
    }
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

// 005EA680 WaitTy::GetMessage
#line 1 "decomp/ST.exe/functions/005EA680/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004038D7|005EA680; family_names=WaitTy::GetMessage; ret4=2;
   direct_offsets={10:5,14:9,18:3,1c:0} */

int __thiscall st::fn_005EA680(WaitTy *this,STMessage *message)

{
  char cVar1;
  STMessageId SVar2;
  MMsgTy *this_00;
  DArrayTy *pDVar3;
  StartSystemTy *this_01;
  WaitTy *this_02;
  bool bVar5;
  DWORD DVar6;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  char local_4a4 [64];
  char local_464 [1044];
  InternalExceptionFrame local_50;
  WaitTy *local_c;
  char *local_8;

  local_c = this;
  DVar6 = st::fn_006E51B0(this->field_0010);
  this->field_0061 = DVar6;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar7 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_02 = local_c;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = st::fn_006AD4D0("E:\\__titans\\Start\\wait_obj.cpp",0x3bb,0,iVar7,"%s"
                               ,"WaitTy::GetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar7,0,"E:\\__titans\\Start\\wait_obj.cpp",0x3bb);
    return 0xffff;
  }
  st::fn_00402563(local_c,message);
  st::fn_00402937(g_startSystem_0081176C,message);
  SVar2 = message->id;
  if (SVar2 < (MESS_SHARED_6334|MESS_ID_CREATE)) {
    if (SVar2 == MESS_WAITTY_6335) {
      g_startSystem_0081176C->field_04CF =
           *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
      if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
        st::fn_006B3730
                  ((uint *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3,
                   g_startSystem_0081176C->field_04B7,g_startSystem_0081176C->field_04CB,
                   g_startSystem_0081176C->field_04CF);
      }
    }
    else if (SVar2 < 0x610b) {
      if (SVar2 == MESS_SHARED_610A) {
        this_02->field_0045 = 0x200;
        this_02->field_0049 = 0;
        this_02->field_004D = message->id;
        this_02->field_0051 = 8;
        st::fn_00404DB8((MTaskTy *)this_02);
      }
      else if (SVar2 < 4) {
        if (SVar2 == MESS_SHARED_0003) {
          st::fn_00405E89(this_02);
        }
        else if (SVar2 == MESS_ID_NONE) {
          st::fn_004044D0(this_02);
        }
        else if (SVar2 == MESS_ID_CREATE) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          st::fn_00404188(this_02,*(undefined4 *)((message->arg0).u32 + 0x14),
                   *(undefined4 *)((message->arg0).u32 + 0x18));
        }
      }
      else if (SVar2 == MESS_SHARED_0005) {
        st::fn_004043F4(this_02,'\0');
      }
      else if (SVar2 == MESS_SHARED_6105) {
        this_02->field_0045 = 0x200;
        this_02->field_0049 = 0;
        this_02->field_004D = message->id;
        this_02->field_0051 = message->arg0;
        this_02->field_0055 = 0;
        st::fn_00404DB8((MTaskTy *)this_02);
      }
    }
    else if (SVar2 < MESS_SHARED_6334) {
      if (SVar2 == MESS_WAITTY_6333) {
        st::fn_004031D4
                  ((MMMObjTy *)this_02,
                   (RecoveredRecord_MMMObjTy_005B6560 *)&g_startSystem_0081176C->field_038D,
                   (int)message,0);
      }
      else if (SVar2 == MESS_SHARED_6121) {
        this_02->field_0045 = 0x200;
        this_02->field_0049 = 0;
        this_02->field_004D = message->id;
        this_02->field_0051 = message->arg0;
        this_02->field_0055 = message->arg1;
        st::fn_00404DB8((MTaskTy *)this_02);
      }
      else if (SVar2 == MESS_SHARED_6332) {
        st::fn_00404D72(g_startSystem_0081176C,(AnonShape_005DE050_5BD86458 *)message);
      }
    }
    else if (SVar2 == MESS_SHARED_6334) {
      st::fn_004031D4
                ((MMMObjTy *)this_02,
                 (RecoveredRecord_MMMObjTy_005B6560 *)&g_startSystem_0081176C->field_041E,
                 (int)message,0);
    }
    goto cf_common_exit_005EAB6A;
  }
  if (SVar2 < MESS_WAITTY_6943) {
    if (SVar2 == MESS_CHOOSEMAPTY_6942) {
      this_02->field_0045 = 0x200;
      this_02->field_0049 = 0;
      this_02->field_004D = 0x6102;
      this_02->field_0051 = message->arg0;
      st::fn_00404DB8((MTaskTy *)this_02);
    }
    else if (SVar2 < MESS_SHARED_6940) {
      if (SVar2 == MESS_PRIVIDERTY_693F) {
        st::fn_004036B1(this_02);
      }
      else if (SVar2 == MESS_SETTMAPMTY_6340) {
        st::fn_004031D4
                  ((MMMObjTy *)this_02,
                   (RecoveredRecord_MMMObjTy_005B6560 *)&this_02->field_1A5B->field_055C,
                   (int)message,0);
      }
      else if (SVar2 == MESS_SHARED_6341) {
        st::fn_004031D4
                  ((MMMObjTy *)this_02,
                   (RecoveredRecord_MMMObjTy_005B6560 *)&this_02->field_1A5B->field_05ED,
                   (int)message,0);
      }
    }
    else if (SVar2 == MESS_SHARED_6940) {
      st::fn_00401B45(this_02);
    }
    goto cf_common_exit_005EAB6A;
  }
  if (SVar2 < MESS_PRIVIDERTY_6952) {
    if (SVar2 == MESS_SHARED_6951) {
      st::fn_004036C0(this_02,0x610a,0,0);
      this_02->field_1A64 = 0;
    }
    else if (SVar2 == MESS_WAITTY_6943) {
      st::fn_004036C0(this_02,0x6942,(message->arg0).u32,0);
      this_02->field_1A64 = 0;
      if (DAT_00811768 == '\x01') {
        DAT_00811768 = '\x02';
      }
    }
    else {
      if (SVar2 != MESS_WAITTY_694D) goto cf_common_exit_005EAB6A;
      st::fn_004036C0(this_02,0x6105,1,0);
      this_02->field_1A64 = 0;
      if (DAT_00811768 == '\x01') {
        DAT_00811768 = '\x02';
      }
    }
    this_02->CloseButtons();
    this_00 = this_02->field_1A5B->field_02E6;
    if (this_00 != nullptr) {
      st::fn_00401FA5(this_00,1,0,1);
    }
    goto cf_common_exit_005EAB6A;
  }
  if (SVar2 != MESS_SHARED_C0A2) goto cf_common_exit_005EAB6A;
  iVar7 = st::fn_004025F4((int)this_02->field_1A5B);
  if (iVar7 == 0) {
    if (DAT_008067a0 != '\0') {
      pDVar3 = this_02->field_1A5B->field_0686;
      if ((int)pDVar3->elementSize < 1) {
        pcVar11 = nullptr;
      }
      else {
        pcVar11 = *(char **)pDVar3->growCapacity;
      }
      bVar5 = st::fn_00401B1D(pcVar11);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT31(extraout_var,bVar5) != 0) {
        pDVar3 = this_02->field_1A5B->field_0686;
        if ((int)pDVar3->elementSize < 1) {
          st::external_00000107((CFsgsConnection *)&DAT_00802a90,nullptr);
        }
        else {
          st::external_00000107
                    ((CFsgsConnection *)&DAT_00802a90,*(char **)pDVar3->growCapacity);
        }
        goto LAB_005eab28;
      }
    }
    pcVar11 = local_4a4;
    for (iVar7 = 0x114; iVar7 != 0; iVar7 = iVar7 + -1) {
      pcVar11[0] = '\0';
      pcVar11[1] = '\0';
      pcVar11[2] = '\0';
      pcVar11[3] = '\0';
      pcVar11 = pcVar11 + 4;
    }
    *pcVar11 = '\0';
    pcVar11 = &DAT_00807e1d;
    if (DAT_008067a0 == '\0') {
      pcVar11 = (char *)&DAT_00807ddd;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar12 = pcVar11;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    this_01 = this_02->field_1A5B;
    pcVar11 = pcVar12 + -uVar9;
    pcVar12 = local_4a4;
    memmove(pcVar12, pcVar11, uVar9); /* compiler REP MOVS byte copy */
    uVar10 = 0;
    pDVar3 = this_01->field_0686;
    if ((int)pDVar3->elementSize < 1) {
      pcVar11 = nullptr;
    }
    else {
      pcVar11 = *(char **)pDVar3->growCapacity;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar12 = pcVar11;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar11 = pcVar12 + -uVar9;
    pcVar12 = local_464;
    memmove(pcVar12, pcVar11, uVar9); /* compiler REP MOVS byte copy */
    local_8 = local_464;
    st::fn_00402BBC(this_01,(int)local_4a4);
    st::fn_00715360(g_int_00811764,0,'\x1b',local_4a4,0x451,1,0xffffffff);
  }
LAB_005eab28:
  st::fn_006B6020(&this_02->field_1A5B->field_0686->flags,0,&DAT_008016a0);
  this_02->field_002D = 0x33;
  *(DArrayTy **)&this_02->field_0x31 = this_02->field_1A5B->field_0686;
  st::fn_006E6080(this_02,2,this_02->field_1A5B->field_054C,(undefined4 *)&this_02->field_0x1d);
cf_common_exit_005EAB6A:
  g_currentExceptionFrame = local_50.previous;
  iVar7 = st::fn_00401280((MMObjTy *)this_02,message);
  return iVar7;
}

