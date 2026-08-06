#include "st/generated.hpp"
// Generated translation unit: source/original/Start/settmobj.cpp

// 005CBD00 SettMapMTy::InitSettMap
#line 4 "decomp/ST.exe/functions/005CBD00/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::InitSettMap */

void __thiscall st::fn_005CBD00(SettMapMTy *this,char param_1)

{
  ushort *puVar1;
  SettMapMTy *this_00;
  int iVar3;
  void **value;
  SettMapMTy_field_2237DArray *pSVar4;
  int uVar6;
  AnonPointee_SettMapMTy_2204 *pAVar5;
  undefined4 *puVar6;
  HoloTy *pHVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  char cVar12;
  ushort *puVar13;
  InternalExceptionFrame local_50;
  SettMapMTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar3 == 0) {
    DAT_00808783 = 3;
    DAT_00808754 = st::fn_006E51B0((STAppC *)&DAT_00807620);
    this_00 = local_c;
    if (DAT_0080877e == '\0') {
      DAT_00809958 = 0xffffffff;
      local_c->field_2121 = 0xffffffff;
    }
    else {
      DAT_00809958 = 0;
      local_c->field_2121 = 0;
      DAT_00808aa8 = DAT_0080734b;
    }
    value = &local_c->field_1A5B->field_069A;
    DAT_00808aab = DAT_00809958;
    if (*value != nullptr) {
      st::fn_006AB060(value);
    }
    pSVar4 = (SettMapMTy_field_2237DArray *)
             st::fn_006AE290(nullptr,0x20,0xc,10);
    this_00->field_2237 = pSVar4;
    iVar3 = 1;
    puVar1 = g_startSystem_0081176C->field_02F0;
    this_00->field_005D = puVar1;
    puVar13 = puVar1 + 0x14;
    uVar6 = st::fn_006B4FE0((int)puVar1);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pAVar5 = (AnonPointee_SettMapMTy_2204 *)
             st::fn_006B50C0(0xfa,0x16,(uint)*(ushort *)(this_00->field_005D + 0xe),uVar6,
                          (undefined4 *)puVar13,iVar3);
    this_00->field_2204 = pAVar5;
    uVar9 = pAVar5[1].field_0008;
    if (uVar9 == 0) {
      uVar9 = ((uint)*(ushort *)&pAVar5[1].field_0x2 * pAVar5->field_0004 + 0x1f >> 3 & 0x1ffffffc)
              * pAVar5->field_0008;
    }
    puVar6 = (undefined4 *)st::fn_006B4FA0((int *)pAVar5);
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar6 = 0xffffffff;
      puVar6 = puVar6 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar6 = 0xff;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    pAVar5 = this_00->field_2204;
    puVar6 = &this_00->field_2200;
    st::fn_006B2330(g_ddxContext_008075A8,puVar6,0x31,0x404acf,pAVar5->field_0004,pAVar5->field_0008,
                 (ushort *)pAVar5);
    st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar6,0xffffffff,200,0x1dc);
    st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar6);
    st::fn_004023A6(this_00,param_1);
    if (((((param_1 == '\r') || (param_1 == '\x0e')) || (param_1 == '\x0f')) || (param_1 == '\x10'))
       && (this_00->field_1E27 == 0x11)) {
      st::fn_006B2330(g_ddxContext_008075A8,&local_8,0x32,0x403b61,400,0x62,
                   (ushort *)&this_00->field_1A5B->field_0140);
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
      pHVar7 = (HoloTy *)st::fn_0072E530(0x33);
      if (pHVar7 == nullptr) {
        pHVar7 = nullptr;
      }
      else {
        pHVar7->field_0002 = 1;
        pHVar7->field_0000 = 0;
        *(undefined4 *)&pHVar7->field_0x3 = 0xffffffff;
        pHVar7->field_0001 = CASE_2;
        pHVar7->field_0007 = nullptr;
        pHVar7->field_000B = nullptr;
        pHVar7->field_000F = 0;
        *(undefined4 *)&pHVar7->field_0x1b = 1;
        pHVar7->field_0013 = 1;
        pHVar7->field_0017 = -1;
        pHVar7->field_0027 = 0;
        pHVar7->field_0023 = 0;
        pHVar7->field_002F = 1;
        pHVar7->field_002B = 1;
      }
      this_00->field_21F8 = pHVar7;
      if (pHVar7 != nullptr) {
        uVar9 = 0;
        cVar12 = '\x01';
        bVar11 = 0x10;
        iVar10 = 1;
        iVar3 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
        uVar9 = st::fn_0040459D(this_00->field_21F8,CASE_1,200,0x1f1,iVar3,iVar10,bVar11,cVar12,uVar9);
        if (uVar9 != 0) {
          pHVar7 = this_00->field_21F8;
          pHVar7->field_0002 = 1;
          pHVar7->field_0017 = pHVar7->field_0013;
          uVar9 = *(uint *)&this_00->field_21F8->field_0x3;
          if (-1 < (int)uVar9) {
            st::fn_006B3430((int *)g_ddxContext_008075A8,uVar9);
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
    st::fn_006B6500(g_int_00811764,DAT_0080733c);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar10 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x4f,0,iVar3,"%s",
                              "SettMapMTy::InitSettMap");
  if (iVar10 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\settmobj.cpp",0x4f);
  return;
}

// 005CC2D0 SettMapMTy::DoneSettMap
#line 4 "decomp/ST.exe/functions/005CC2D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::DoneSettMap */

void __thiscall st::fn_005CC2D0(SettMapMTy *this)

{
  SettMapMTy *this_00;
  int errorCode;
  int *piVar2;
  int iVar3;
  SettMapMTy_field_2237DArray *pSVar4;
  uint uVar5;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x65,0,errorCode,
                               "%s","SettMapMTy::DoneSettMap");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x65);
    return;
  }
  if (local_8->field_2204 != nullptr) {
    st::fn_006AB060(&local_8->field_2204);
  }
  st::fn_006B3BB0((int *)g_ddxContext_008075A8,this_00->field_2200);
  pSVar4 = this_00->field_2237;
  this_00->field_2200 = 0xffffffff;
  if (pSVar4 != nullptr) {
    uVar5 = 0;
    if (pSVar4->count != 0) {
      if (pSVar4->count == 0) {
        piVar2 = nullptr;
        goto LAB_005cc360;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        piVar2 = (int *)((int)&pSVar4->data->field_0000 + pSVar4->elementSize * uVar5);
LAB_005cc360:
        if ((piVar2 != nullptr) && (piVar2[2] != 0)) {
          st::fn_006AB060((void **)(piVar2 + 2));
        }
        pSVar4 = this_00->field_2237;
        uVar5 = uVar5 + 1;
      } while (uVar5 < pSVar4->count);
    }
    st::fn_006AE110((DArrayTy *)this_00->field_2237);
    this_00->field_2237 = nullptr;
  }
  st::fn_00403FB7((SettMapTy *)this_00);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 005CC440 SettMapMTy::CreateCtrls
#line 4 "decomp/ST.exe/functions/005CC440/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::CreateCtrls */

void __thiscall st::fn_005CC440(SettMapMTy *this,char param_1)

{
  StartSystemTy *this_00;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  SettMapMTy *this_01;
  ccFntTy **ppcVar6;
  ccFntTy *local_a80 [6];
  undefined4 local_a68;
  undefined4 local_a64;
  DArrayTy *local_a60;
  int local_a34;
  undefined4 local_a30;
  undefined4 local_a2c;
  int local_9f4;
  undefined4 local_9f0;
  undefined4 local_9ec;
  undefined4 local_21c;
  undefined4 local_1f4 [84];
  InternalExceptionFrame local_a4;
  undefined4 local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 *local_18;
  undefined4 local_14;
  SettMapMTy *local_8;

  ppcVar6 = local_a80;
  local_8 = this;
  for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
    *ppcVar6 = nullptr;
    ppcVar6 = ppcVar6 + 1;
  }
  memset(local_60, 0, 0x58); /* compiler bulk-zero initialization */
  iVar3 = 0;
  memset(local_1f4, 0, 0x150); /* compiler bulk-zero initialization */
  local_a4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a4;
  iVar3 = st::fn_0072D7F0(local_a4.jumpBuffer,0);
  this_01 = local_8;
  if (iVar3 == 0) {
    if (param_1 == '\0') {
      iVar3 = 1;
      iVar4 = 200;
      puVar2 = local_1f4 + 1;
      iVar5 = 2;
      do {
        puVar2[-1] = iVar3;
        *puVar2 = 0;
        puVar2[4] = 0x7d;
        puVar2[5] = 0x16;
        puVar2[2] = iVar4;
        puVar2[3] = 0x1db;
        this_01 = local_8;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x7d;
        puVar2 = puVar2 + 0x1c;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      local_60[0] = 1;
      local_18 = local_1f4;
      local_14 = 1;
      local_50 = local_8->field_0008;
      local_4c = 2;
      local_2c = 2;
      local_48 = 0x6326;
      local_28 = 0x6327;
      local_30 = local_50;
      (*local_8->field_000C->vtable->CreateObject)
                ((SystemClassTy *)local_8->field_000C,5,&local_8->field_21FC,nullptr,local_60,0);
      st::fn_006B3430((int *)g_ddxContext_008075A8,this_01->field_2200);
    }
    else {
      if (local_8->field_0x21e6 != '\0') {
        st::fn_004028B5(g_startSystem_0081176C);
        ppcVar6 = local_a80;
        for (iVar3 = 0x223; iVar3 != 0; iVar3 = iVar3 + -1) {
          *ppcVar6 = nullptr;
          ppcVar6 = ppcVar6 + 1;
        }
        local_a80[0] = (ccFntTy *)0x1;
        local_a80[1] = (ccFntTy *)0x9;
        local_a80[2] = g_startSystem_0081176C->field_0034;
        local_a80[3] = (ccFntTy *)0xcb;
        local_a80[4] = (ccFntTy *)0x23f;
        local_a80[5] = *(ccFntTy **)(g_startSystem_0081176C->field_0682 + 2);
        local_a68 = *(undefined4 *)(g_startSystem_0081176C->field_0682 + 4);
        local_a64 = 0x104;
        local_a60 = g_startSystem_0081176C->field_0686;
        this_00 = this_01->field_000C;
        local_21c = 0x100;
        local_a34 = this_00->field_0014;
        local_a2c = 0xc0a0;
        local_a30 = 0;
        local_9f4 = this_00->field_0014;
        local_9f0 = 0;
        local_9ec = 0xc0a2;
        (*this_00->vtable->CreateObject)
                  ((SystemClassTy *)this_00,6,&g_startSystem_0081176C->field_054C,nullptr,
                   local_a80,0);
      }
      st::fn_006B3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
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
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
    }
    st::fn_004055B5((SettMapTy *)this_01,param_1);
    if (param_1 == '\0') {
      st::fn_00402DBF(1,this_01->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
    }
    g_currentExceptionFrame = local_a4.previous;
    return;
  }
  g_currentExceptionFrame = local_a4.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x9d,0,iVar3,"%s",
                             "SettMapMTy::CreateCtrls");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Start\\settmobj.cpp",0x9d);
  return;
}

// 005CC840 SettMapMTy::DeleteCtrls
#line 4 "decomp/ST.exe/functions/005CC840/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::DeleteCtrls */

void __thiscall st::fn_005CC840(SettMapMTy *this)

{
  SettMapMTy *this_00;
  int iVar2;
  HoloTy *pHVar3;
  int iVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (g_cursorClass_00802A30 != nullptr) {
      if (g_cursorClass_00802A30->field_00A9 == 0) {
        st::fn_006B8B10((int *)g_cursorClass_00802A30->field_00AD);
      }
      else if (g_cursorClass_00802A30->field_001C != 0xffffffff) {
        st::fn_006B3AF0((int *)g_cursorClass_00802A30->field_0060,g_cursorClass_00802A30->field_001C);
      }
    }
    this_00 = local_8;
    st::fn_00402DBF(0,local_8->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
    if (this_00->field_21FC != 0) {
      st::fn_006E56B0(this_00->field_000C,this_00->field_21FC);
      this_00->field_21FC = 0;
    }
    if (-1 < (int)this_00->field_2200) {
      st::fn_006B3AF0((int *)g_ddxContext_008075A8,this_00->field_2200);
    }
    if (this_00->field_0x21e6 != '\0') {
      if (g_startSystem_0081176C->field_054C != 0) {
        st::fn_006E56B0(this_00->field_000C,g_startSystem_0081176C->field_054C);
        g_startSystem_0081176C->field_054C = 0;
      }
      if (g_startSystem_0081176C->field_0550 != 0) {
        st::fn_006E56B0(this_00->field_000C,g_startSystem_0081176C->field_0550);
        g_startSystem_0081176C->field_0550 = 0;
      }
      if (this_00->field_21F8 != nullptr) {
        st::fn_0040128A(this_00->field_21F8);
        st::fn_0072E2B0(this_00->field_21F8);
        this_00->field_21F8 = nullptr;
      }
      pHVar3 = (HoloTy *)st::fn_0072E530(0x33);
      if (pHVar3 == nullptr) {
        pHVar3 = nullptr;
      }
      else {
        pHVar3->field_0002 = 1;
        pHVar3->field_0000 = 0;
        *(undefined4 *)&pHVar3->field_0x3 = 0xffffffff;
        pHVar3->field_0001 = CASE_2;
        pHVar3->field_0007 = nullptr;
        pHVar3->field_000B = nullptr;
        pHVar3->field_000F = 0;
        *(undefined4 *)&pHVar3->field_0x1b = 1;
        pHVar3->field_0013 = 1;
        pHVar3->field_0017 = -1;
        pHVar3->field_0027 = 0;
        pHVar3->field_0023 = 0;
        pHVar3->field_002F = 1;
        pHVar3->field_002B = 1;
      }
      this_00->field_21F8 = pHVar3;
      if (pHVar3 != nullptr) {
        uVar7 = 0;
        cVar6 = '\x01';
        bVar5 = 0x10;
        iVar4 = 1;
        iVar2 = st::fn_006BF9F0((int *)g_ddxContext_008075A8,200,0x1f1,400,0x62);
        uVar7 = st::fn_0040459D(this_00->field_21F8,CASE_1,200,0x1f1,iVar2,iVar4,bVar5,cVar6,uVar7);
        if (uVar7 != 0) {
          pHVar3 = this_00->field_21F8;
          pHVar3->field_0002 = 0;
          pHVar3->field_0017 = -1;
          uVar7 = *(uint *)&this_00->field_21F8->field_0x3;
          if (-1 < (int)uVar7) {
            st::fn_006B3430((int *)g_ddxContext_008075A8,uVar7);
          }
          st::fn_004055F1(this_00->field_21F8);
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
    st::fn_00404E94((SettMapTy *)this_00);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0xc0,0,iVar2,"%s",
                             "SettMapMTy::DeleteCtrls");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\Start\\settmobj.cpp",0xc0);
  return;
}

// 005CCE10 SettMapMTy::SetListCtrls
#line 4 "decomp/ST.exe/functions/005CCE10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::SetListCtrls

   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapMTy_field_1E26State. Cases:
   CASE_4=4;CASE_5=5;CASE_7=7;CASE_C=12;CASE_F=15;CASE_10=16;CASE_13=19 */

void __thiscall st::fn_005CCE10(SettMapMTy *this)

{
  SettMapMTy_field_1E26State SVar1;
  char cVar2;
  SettMapMTy_field_1F84DArray *pSVar3;
  SettMapMTy *pSVar5;
  int iVar6;
  DArrayTy *pDVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  bool bVar13;
  InternalExceptionFrame local_14c;
  InternalExceptionFrame local_108;
  InternalExceptionFrame local_c4;
  InternalExceptionFrame local_80;
  undefined4 local_3c [4];
  undefined4 local_2c;
  uint local_28;
  uint local_1c;
  int local_18;
  SettMapMTy *local_14;
  int local_10;
  cMf32 *local_c;
  uint local_8;

  local_1c = 0;
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_14 = this;
  iVar6 = st::fn_0072D7F0(local_80.jumpBuffer,0);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar8 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x164,0,iVar6,"%s"
                               ,"SettMapMTy::SetListCtrls");
    if (iVar8 == 0) {
      st::fn_006A5E40(iVar6,0,"E:\\__titans\\Start\\settmobj.cpp",0x164);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  memset(local_3c, 0, 0x20); /* compiler bulk-zero initialization */
  local_2c = 0x26;
  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  iVar6 = st::fn_0072D7F0(local_c4.jumpBuffer,0);
  pSVar5 = local_14;
  if (iVar6 == 0) {
    st::fn_006E6080(local_14,2,local_14->field_211D,local_3c);
    local_1c = local_28;
  }
  if ((pSVar5->field_1E26 == CASE_5) || (pSVar5->field_1E26 == CASE_F)) {
    local_c = pSVar5->field_1F3F;
  }
  else {
    local_c = pSVar5->field_1F43;
  }
  g_currentExceptionFrame = local_c4.previous;
  pSVar5->field_0029 = 2;
  pSVar5->field_002D = 0x20;
  local_10 = 0;
  local_8 = 0x7e3;
  do {
    local_18 = 0;
    uVar10 = local_8;
    do {
      if ((&pSVar5->vtable)[uVar10 + local_18] != nullptr) {
        pSVar3 = pSVar5->field_1F84;
        if ((pSVar3 == nullptr) ||
           (uVar9 = pSVar5->field_1F88 + local_10, pSVar3->count <= uVar9)) {
          pcVar11 = nullptr;
        }
        else {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pcVar11 = &pSVar3->data->field_0000 + pSVar3->elementSize * uVar9;
        }
        SVar1 = pSVar5->field_1E26;
        pSVar5->field_0025 = (&pSVar5->vtable)[uVar10 + local_18];
        pSVar5->field_0031 = 0;
        if (((SVar1 != CASE_C) && (SVar1 != CASE_10)) && (pcVar11 != nullptr)) {
          switch(local_18) {
          case 0:
            if (*(DArrayTy **)(pcVar11 + 0x50) != nullptr) {
              st::fn_006AE110(*(DArrayTy **)(pcVar11 + 0x50));
            }
            *(DArrayTy **)(pcVar11 + 0x50) = nullptr;
            switch(pSVar5->field_1E26) {
            case CASE_5:
            case CASE_F:
              pDVar7 = (DArrayTy *)st::fn_0040466A((int)local_c,(uint)(byte)pcVar11[2],0xffffffff);
              break;
            default:
              pDVar7 = (DArrayTy *)st::fn_00403F44(local_c,(uint)(byte)pcVar11[3],DAT_0080995c);
              break;
            case CASE_C:
            case CASE_10:
              pDVar7 = (DArrayTy *)
                       st::fn_00401DBB((int)local_c,(uint)(byte)pcVar11[2],0xffffffff);
            }
            *(DArrayTy **)(pcVar11 + 0x50) = pDVar7;
            if (pDVar7->count <= (uint)(byte)pcVar11[5]) {
              pcVar11[5] = (char)pDVar7->count;
            }
            if (((*(DArrayTy **)(pcVar11 + 0x50))->count == 0) && (pcVar11[4] == '\x04')) {
              pcVar11[4] = '\x01';
            }
            if (((*pcVar11 != '\0') && (pSVar5->field_1E26 != CASE_5)) &&
               ((pSVar5->field_1E26 != CASE_F && (pcVar11[4] == '\x02')))) {
              bVar13 = *(int *)(pcVar11 + 6) == DAT_0080877f;
LAB_005cd119:
              if (bVar13) goto cf_common_join_005CD142;
            }
            break;
          case 1:
          case 2:
            if (((SVar1 != CASE_5) && (SVar1 != CASE_F)) && (*pcVar11 != '\0')) {
              if (DAT_0080877e != '\0') {
                if (pcVar11[4] == '\x02') {
LAB_005cd10f:
                  bVar13 = *(int *)(pcVar11 + 6) == DAT_0080877f;
                  goto LAB_005cd119;
                }
                goto cf_common_join_005CD142;
              }
              if (pcVar11[4] == '\x02') {
                iVar6 = *(int *)(pcVar11 + 6);
                goto joined_r0x005cd0bb;
              }
            }
            break;
          case 3:
            if (((DAT_0080877e != '\0') || (cVar2 = pcVar11[4], cVar2 == '\x01')) ||
               ((cVar2 == '\x02' && (*(int *)(pcVar11 + 6) == DAT_0080877f))))
            goto cf_common_join_005CD142;
            if (cVar2 == '\x03') {
              iVar6 = *(int *)(pcVar11 + 6);
              goto joined_r0x005cd0bb;
            }
            break;
          case 5:
            if (((((DAT_0080874d != -1) && (SVar1 != CASE_5)) &&
                 ((SVar1 != CASE_F && ((*pcVar11 != '\0' && (cVar2 = pcVar11[4], cVar2 != '\0'))))))
                && (cVar2 != '\x01')) && (pcVar11[2] != -1)) {
              if (DAT_00808a8f == '\0') {
                if ((cVar2 != '\x02') || (*(int *)(pcVar11 + 6) != DAT_0080877f))
                goto cf_common_join_005CD142;
              }
              else if (DAT_0080877e == '\0') {
                if (cVar2 == '\x02') goto LAB_005cd10f;
              }
              else {
                if (cVar2 == '\x02') {
                  iVar6 = *(int *)(pcVar11 + 6);
                  goto joined_r0x005cd0bb;
                }
cf_common_join_005CD142:
                pSVar5->field_0031 = 1;
              }
            }
            break;
          case 7:
            if (pcVar11[4] == '\x02') {
              iVar6 = *(int *)(pcVar11 + 6);
joined_r0x005cd0bb:
              if (iVar6 == DAT_0080877f) goto cf_common_join_005CD142;
            }
          }
        }
        (*pSVar5->field_000C->vtable->vfunc_18)((short)&pSVar5->field_0x1d);
        uVar10 = local_8;
      }
      local_18 = local_18 + 1;
    } while (local_18 < 8);
    local_8 = uVar10 + 8;
    local_10 = local_10 + 1;
    if (0x832 < (int)local_8) {
      local_8 = pSVar5->field_1F84->count;
      local_2c = 0x28;
      if ((pSVar5->field_1F84 == nullptr) || (local_8 < 0xb)) {
        local_28 = 1;
      }
      else {
        local_28 = local_8 - 9;
      }
      local_108.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_108;
      iVar6 = st::fn_0072D7F0(local_108.jumpBuffer,0);
      if (iVar6 == 0) {
        st::fn_006E6080(local_14,2,local_14->field_211D,local_3c);
      }
      local_2c = 0x22;
      if (local_8 < 0xb) {
        local_28 = 0;
      }
      else {
        local_28 = local_1c & 0xffff;
        if (local_8 < local_28 + 10) {
          local_28 = local_8 - 10;
        }
      }
      g_currentExceptionFrame = &local_14c;
      local_14c.previous = local_108.previous;
      iVar6 = st::fn_0072D7F0(local_14c.jumpBuffer,0);
      if (iVar6 == 0) {
        st::fn_006E6080(local_14,2,local_14->field_211D,local_3c);
      }
      g_currentExceptionFrame = local_80.previous;
      return;
    }
  } while( true );
}

// 005CD430 SettMapMTy::PrepPlList
#line 4 "decomp/ST.exe/functions/005CD430/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::PrepPlList

   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapMTy_field_1E26State. Cases:
   CASE_4=4;CASE_5=5;CASE_7=7;CASE_C=12;CASE_F=15;CASE_10=16;CASE_13=19

   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapMTy_field_1E26State. Cases:
   CASE_5=5;CASE_C=12;CASE_F=15;CASE_10=16
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall PrepPlList(SettMapMTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005CD811 RET | 005CD85A RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_005CD430(SettMapMTy *this)

{
  char cVar1;
  SettMapMTy_field_1E26State SVar2;
  byte bVar3;
  int iVar5;
  SettMapMTy_field_1F84DArray *pSVar6;
  char *pcVar7;
  SettMapMTy_field_1F84Element *element_1f84;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  SettMapMTy *pSVar11;
  uint uVar12;
  byte *pbVar13;
  char *pcVar15;
  char *pcVar16;
  bool bVar17;
  InternalExceptionFrame local_b8;
  undefined4 local_74;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  int local_6e;
  byte local_2a;
  undefined4 local_29;
  undefined1 local_25;
  uint *local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  byte *local_14;
  SettMapMTy *local_10;
  byte *local_c;
  cMf32 *local_8;

  this->field_211C = DAT_008087c6;
  local_b8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b8;
  local_10 = this;
  iVar5 = st::fn_0072D7F0(local_b8.jumpBuffer,0);
  pSVar11 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_b8.previous;
    iVar8 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x1cb,0,iVar5,"%s"
                               ,"SettMapMTy::PrepPlList");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,"E:\\__titans\\Start\\settmobj.cpp",0x1cb);
    return;
  }
  SVar2 = local_10->field_1E26;
  if ((((SVar2 == CASE_5) || (SVar2 == CASE_F)) || (SVar2 == CASE_C)) || (SVar2 == CASE_10)) {
    local_8 = local_10->field_1F3F;
  }
  else {
    local_8 = local_10->field_1F43;
  }
  pSVar6 = local_10->field_1F84;
  if (pSVar6 != nullptr) {
    uVar12 = 0;
    if (0 < (int)pSVar6->count) {
      bVar17 = pSVar6->count != 0;
      do {
        if (bVar17) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pcVar7 = &pSVar6->data->field_0000 + pSVar6->elementSize * uVar12;
        }
        else {
          pcVar7 = nullptr;
        }
        if ((pcVar7 != nullptr) && (*(DArrayTy **)(pcVar7 + 0x50) != nullptr)) {
          st::fn_006AE110(*(DArrayTy **)(pcVar7 + 0x50));
        }
        pSVar6 = pSVar11->field_1F84;
        uVar12 = uVar12 + 1;
        bVar17 = uVar12 < pSVar6->count;
      } while ((int)uVar12 < (int)pSVar6->count);
    }
    st::fn_006AE110((DArrayTy *)pSVar11->field_1F84);
  }
  pSVar6 = (SettMapMTy_field_1F84DArray *)st::fn_006AE290(nullptr,8,0x60,8);
  pSVar11->field_1F84 = pSVar6;
  if ((pSVar11->field_1E26 != CASE_C) && (pSVar11->field_1E26 != CASE_10)) {
    DAT_0080874d = -1;
    DAT_0080874e = '\0';
  }
  if (DAT_0080877e != '\0') {
    local_c = &g_bulkInitializedRecords_008087C7[0].field_0021;
    do {
      pbVar13 = local_c;
      bVar3 = local_c[1];
      if (bVar3 != 0xff) {
        memset(&local_74, 0, 0x60); /* compiler bulk-zero initialization */
        STPiece<0,1>(local_74) = 1;
        STPiece<1,1>(local_74) = 1;
        if (((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) && (*pbVar13 == 3)) {
          STPiece<3,1>(local_74) = 1;
        }
        else {
          STPiece<3,1>(local_74) = *pbVar13;
        }
        STPiece<2,1>(local_74) = bVar3;
        switch(pSVar11->field_1E26) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        case CASE_5:
        case CASE_F:
          local_24 = st::fn_0040466A((int)local_8,
                                       CONCAT12(uStack_70,CONCAT11(STPiece<3,1>(local_74),bVar3)) & 0xff,
                                       0xffffffff);
          break;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        default:
          local_24 = st::fn_00403F44(local_8,CONCAT12(uStack_6f,
                                                         CONCAT11(uStack_70,STPiece<3,1>(local_74))) & 0xff,
                                        DAT_0080995c);
          break;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        case CASE_C:
        case CASE_10:
          local_24 = st::fn_00401DBB
                               ((int)local_8,
                                CONCAT12(uStack_70,CONCAT11(STPiece<3,1>(local_74),bVar3)) & 0xff,0xffffffff
                               );
        }
        if (*(char *)(pbVar13 + -0x21) == '\x01') {
          SVar2 = pSVar11->field_1E26;
          if (((SVar2 == CASE_5) || (SVar2 == CASE_C)) || (SVar2 == CASE_10)) {
            uStack_70 = 4;
            uVar12 = 0;
            if (0 < (int)local_24[3]) {
              local_14 = pbVar13 + -0x20;
              bVar17 = local_24[3] != 0;
              do {
                if (bVar17) {
                  iVar5 = local_24[2] * uVar12 + local_24[7];
                }
                else {
                  iVar5 = 0;
                }
                pbVar9 = (byte *)(iVar5 + 0x4c);
                pbVar13 = local_14;
                do {
                  bVar3 = *pbVar9;
                  bVar17 = bVar3 < *pbVar13;
                  if (bVar3 != *pbVar13) {
LAB_005cd670:
                    iVar5 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
                    goto LAB_005cd675;
                  }
                  if (bVar3 == 0) break;
                  bVar3 = pbVar9[1];
                  bVar17 = bVar3 < pbVar13[1];
                  if (bVar3 != pbVar13[1]) goto LAB_005cd670;
                  pbVar9 = pbVar9 + 2;
                  pbVar13 = pbVar13 + 2;
                } while (bVar3 != 0);
                iVar5 = 0;
LAB_005cd675:
                pSVar11 = local_10;
                pbVar13 = local_c;
                if (iVar5 == 0) {
                  uStack_6f = (undefined1)uVar12;
                  break;
                }
                uVar12 = uVar12 + 1;
                bVar17 = uVar12 < local_24[3];
              } while ((int)uVar12 < (int)local_24[3]);
            }
          }
          else {
            uStack_70 = 1;
          }
        }
        else {
          uStack_70 = 1;
        }
        local_20 = *(uint *)(pbVar13 + 3);
        local_2a = pbVar13[2];
        local_6e = DAT_0080877f;
        local_1c = *(uint *)(pbVar13 + 7);
        local_18 = *(uint *)(pbVar13 + 0xb);
        local_29 = 0;
        local_25 = 1;
        st::fn_006AE1C0((DArrayTy *)pSVar11->field_1F84,&local_74);
      }
      local_c = pbVar13 + 0x51;
    } while ((int)local_c < 0x808a70);
    if (pSVar11->field_1E26 == CASE_C) {
      pSVar6 = pSVar11->field_1F84;
      uVar10 = 0;
      uVar12 = pSVar6->count;
      if (0 < (int)uVar12) {
        bVar17 = uVar12 != 0;
        do {
          if (bVar17) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar7 = &pSVar6->data->field_0000 + pSVar6->elementSize * uVar10;
          }
          else {
            pcVar7 = nullptr;
          }
          if (((pcVar7 != nullptr) && (pcVar7[4] == '\x01')) &&
             ((DAT_0080874d == pcVar7[2] && (DAT_0080874e == pcVar7[3])))) {
            pcVar7 = &DAT_00807e1d;
            if (DAT_008067a0 == '\0') {
              pcVar7 = (char *)&DAT_00807ddd;
            }
            st::fn_004013A7(pSVar11,DAT_0080877f,uVar10,(DAT_0080874f != '\0') + 2,pcVar7);
            break;
          }
          uVar10 = uVar10 + 1;
          bVar17 = uVar10 < uVar12;
        } while ((int)uVar10 < (int)uVar12);
      }
    }
    else {
      pSVar6 = pSVar11->field_1F84;
      uVar10 = 0;
      uVar12 = pSVar6->count;
      if (0 < (int)uVar12) {
        bVar17 = uVar12 != 0;
        do {
          if (bVar17) {
            element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar6, uVar10);
          }
          else {
            element_1f84 = nullptr;
          }
          if (((element_1f84 != nullptr) && (element_1f84->field_0004 == '\x01')) && (element_1f84->state != -1)) {
            DAT_0080874d = element_1f84->state;
            element_1f84->field_0004 = '\x02';
            DAT_0080874e = element_1f84->field_0003;
            pcVar15 = &DAT_00807e1d;
            if (DAT_008067a0 == '\0') {
              pcVar15 = (char *)&DAT_00807ddd;
            }
            uVar12 = 0xffffffff;
            goto code_r0x005cd7da;
          }
          uVar10 = uVar10 + 1;
          bVar17 = uVar10 < uVar12;
        } while ((int)uVar10 < (int)uVar12);
      }
    }
  }
LAB_005cd7f2:
  st::fn_00402A9A((SettMapTy *)pSVar11);
  pSVar11->vfunc_20();
  g_currentExceptionFrame = local_b8.previous;
  return;
  while( true ) {
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar15 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar16;
    if (cVar1 == '\0') break;
code_r0x005cd7da:
    pcVar16 = pcVar15;
    if (uVar12 == 0) break;
  }
  uVar12 = ~uVar12;
  pcVar15 = pcVar16 + -uVar12;
  pcVar7 = pcVar7 + 10;
  memmove(pcVar7, pcVar15, uVar12); /* compiler REP MOVS byte copy */
  goto LAB_005cd7f2;
}

// 005CD9A0 SettMapMTy::ChgPlList
#line 4 "decomp/ST.exe/functions/005CD9A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChgPlList

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_005CD9A0
          (SettMapMTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  char cVar1;
  int errorCode;
  int iVar3;
  uint uVar4;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  char local_14c [260];
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_48.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x1dd,0,errorCode,
                               "%s","SettMapMTy::ChgPlList");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x1dd);
    return;
  }
  local_15c = param_1;
  local_158 = param_2;
  local_150 = param_4;
  local_154 = param_3;
  pcVar6 = &DAT_00807e1d;
  if (DAT_008067a0 == '\0') {
    pcVar6 = (char *)&DAT_00807ddd;
  }
  uVar4 = 0xffffffff;
  do {
    pcVar7 = pcVar6;
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar7 = pcVar6 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar7;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  pcVar6 = pcVar7 + -uVar4;
  pcVar7 = local_14c;
  memmove(pcVar7, pcVar6, uVar4); /* compiler REP MOVS byte copy */
  st::fn_006B6500(g_int_00811764,1);
  st::fn_00715360(g_int_00811764,1,'$',(char *)&local_15c,0x114,1,0xffffffff);
  st::fn_006B6500(g_int_00811764,DAT_0080733c);
  g_currentExceptionFrame = local_48.previous;
  return;
}

// 005CDB20 SettMapMTy::AddPlList
#line 4 "decomp/ST.exe/functions/005CDB20/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::AddPlList

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005CDB20(SettMapMTy *this,int param_1)

{
  SettMapMTy_field_1F84DArray *pSVar1;
  int errorCode;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  char *pcVar7;
  char *pcVar8;
  uint local_164 [4];
  char local_154 [260];
  InternalExceptionFrame local_50;
  SettMapMTy *local_c;
  int local_8;

  local_8 = 1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x21b,0,errorCode,
                               "%s","SettMapMTy::AddPlList");
    if (iVar3 == 0) {
      st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x21b);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == 0) {
    if (local_c->field_2244 != '\0') {
      pSVar1 = local_c->field_1F84;
      cVar6 = '\0';
      uVar4 = 0;
      uVar5 = pSVar1->count;
      if (uVar5 != 0) {
        if (uVar5 == 0) {
          pcVar7 = nullptr;
          goto LAB_005cdd03;
        }
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pcVar7 = &pSVar1->data->field_0000 + pSVar1->elementSize * uVar4;
LAB_005cdd03:
          if (pcVar7 != nullptr) {
            if (*(int *)(pcVar7 + 6) == DAT_0080877f) {
              local_8 = 0;
              break;
            }
            if ((*pcVar7 != '\0') && (pcVar7[4] == '\x01')) {
              cVar6 = cVar6 + '\x01';
            }
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar5);
      }
      if (((local_8 != 0) && (cVar6 != '\0')) && (local_164[0] = 0, uVar5 != 0)) {
        if (uVar5 == 0) {
          pcVar7 = nullptr;
          goto LAB_005cdd57;
        }
        while( true ) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pcVar7 = &pSVar1->data->field_0000 + pSVar1->elementSize * local_164[0];
LAB_005cdd57:
          if (((pcVar7 != nullptr) && (*pcVar7 != '\0')) && (pcVar7[4] == '\x01')) break;
          local_164[0] = local_164[0] + 1;
          if (uVar5 <= local_164[0]) {
            g_currentExceptionFrame = local_50.previous;
            return;
          }
        }
        local_164[1] = 3;
        local_164[2] = 2;
        pcVar7 = &DAT_00807e1d;
        if (DAT_008067a0 == '\0') {
          pcVar7 = (char *)&DAT_00807ddd;
        }
        uVar5 = 0xffffffff;
        do {
          pcVar8 = pcVar7;
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          pcVar8 = pcVar7 + 1;
          cVar6 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar6 != '\0');
        uVar5 = ~uVar5;
        pcVar7 = pcVar8 + -uVar5;
        pcVar8 = local_154;
        memmove(pcVar8, pcVar7, uVar5); /* compiler REP MOVS byte copy */
        st::fn_006B6500(g_int_00811764,1);
        st::fn_00715360(g_int_00811764,1,'(',(char *)local_164,0x114,1,0xffffffff);
        st::fn_006B6500(g_int_00811764,DAT_0080733c);
        local_c->field_2244 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
    pSVar1 = local_c->field_1F84;
    uVar5 = pSVar1->count;
    if (uVar5 != 0) {
      if (uVar5 == 0) {
        pcVar7 = nullptr;
        goto LAB_005cdb95;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        pcVar7 = &pSVar1->data->field_0000 + pSVar1->elementSize * uVar4;
LAB_005cdb95:
        if (((pcVar7 != nullptr) && (DAT_0080874d == pcVar7[2])) &&
           ((DAT_0080874e == pcVar7[3] && (*(int *)(pcVar7 + 6) == DAT_0080877f)))) {
          local_8 = 0;
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5);
    }
    if ((local_8 != 0) && (local_164[0] = 0, uVar5 != 0)) {
      if (uVar5 == 0) {
        pcVar7 = nullptr;
        goto LAB_005cdbf4;
      }
      while( true ) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        pcVar7 = &pSVar1->data->field_0000 + pSVar1->elementSize * local_164[0];
LAB_005cdbf4:
        if (((pcVar7 != nullptr) && (DAT_0080874d == pcVar7[2])) && (DAT_0080874e == pcVar7[3]))
        break;
        local_164[0] = local_164[0] + 1;
        if (uVar5 <= local_164[0]) {
          g_currentExceptionFrame = local_50.previous;
          return;
        }
      }
      local_164[2] = (DAT_0080874f != '\0') + 2;
      local_164[1] = 3;
      pcVar7 = &DAT_00807e1d;
      if (DAT_008067a0 == '\0') {
        pcVar7 = (char *)&DAT_00807ddd;
      }
      uVar5 = 0xffffffff;
      do {
        pcVar8 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar8 = pcVar7 + 1;
        cVar6 = *pcVar7;
        pcVar7 = pcVar8;
      } while (cVar6 != '\0');
      uVar5 = ~uVar5;
      pcVar7 = pcVar8 + -uVar5;
      pcVar8 = local_154;
      memmove(pcVar8, pcVar7, uVar5); /* compiler REP MOVS byte copy */
      st::fn_006B6500(g_int_00811764,1);
      st::fn_00715360(g_int_00811764,1,'(',(char *)local_164,0x114,1,0xffffffff);
      st::fn_006B6500(g_int_00811764,DAT_0080733c);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 005CDF60 SettMapMTy::SendPlList
#line 4 "decomp/ST.exe/functions/005CDF60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::SendPlList

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005CDF60(SettMapMTy *this,int param_1)

{
  char cVar2;
  char cVar3;
  char cVar4;
  SettMapMTy *pSVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  uint newSize;
  SettMapMTy_field_1F84Element *pSVar10;
  InternalExceptionFrame local_50;
  uint local_c;
  SettMapMTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar6 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pSVar5 = local_8;
  if (iVar6 == 0) {
    uVar9 = local_8->field_1F84->count * 0x60;
    newSize = uVar9 + 9;
    local_c = newSize;
    if ((uint)local_8->field_222A < newSize) {
      pcVar7 = st::fn_006ACF50(local_8->field_2226,newSize);
      pSVar5->field_2226 = pcVar7;
      pSVar5->field_222A = newSize;
    }
    pcVar7 = pSVar5->field_2226;
    *(undefined4 *)pcVar7 = pSVar5->field_2121;
    *(undefined4 *)(pcVar7 + 4) = DAT_00808aab;
    pcVar7[8] = pSVar5->field_1E26;
    pSVar10 = pSVar5->field_1F84->data;
    pcVar7 = pcVar7 + 9;
    for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      cVar2 = pSVar10->field_0001;
      cVar3 = pSVar10->state;
      cVar4 = pSVar10->field_0003;
      pcVar7[0] = pSVar10->field_0000;
      pcVar7[1] = cVar2;
      pcVar7[2] = cVar3;
      pcVar7[3] = cVar4;
      pSVar10 = (SettMapMTy_field_1F84Element *)&pSVar10->field_0004;
      pcVar7 = pcVar7 + 4;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *pcVar7 = pSVar10->field_0000;
      pSVar10 = (SettMapMTy_field_1F84Element *)&pSVar10->field_0001;
      pcVar7 = pcVar7 + 1;
    }
    st::fn_00715360(g_int_00811764,param_1,'\"',pSVar5->field_2226,local_c,1,0xffffffff);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar8 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x230,0,iVar6,"%s",
                             "SettMapMTy::SendPlList");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar6,0,"E:\\__titans\\Start\\settmobj.cpp",0x230);
  return;
}

// 005CE0E0 SettMapMTy::NoneSettMap
#line 4 "decomp/ST.exe/functions/005CE0E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::NoneSettMap

   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapMTy_field_1E26State. Cases:
   CASE_4=4;CASE_5=5;CASE_7=7;CASE_C=12;CASE_F=15;CASE_10=16;CASE_13=19
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined4
   __thiscall NoneSettMap(SettMapMTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005CF5F9 RET | 005CF642 RET */

undefined4 __thiscall st::fn_005CE0E0(SettMapMTy *this)

{
  byte bVar1;
  SettMapMTy_field_2237DArray *pSVar2;
  char cVar4;
  char cVar5;
  SettMapMTy *this_00;
  int iVar6;
  char *pcVar7;
  SettMapMTy_field_1F84Element *element_1f84;
  SettMapMTy_field_1F84Element *element_1f84_2;
  SettMapMTy_field_1F84Element *element_1f84_3;
  uint *puVar8;
  AnonShape_005D4990_5F0525CF *pAVar9;
  StartSystemTy *pSVar10;
  SettMapMTy_field_1F84Element *pSVar11;
  SettMapMTy_field_1F84DArray *pSVar12;
  DArrayTy *pDVar13;
  SettMapMTyVTable *pSVar14;
  undefined4 uVar15;
  int iVar16;
  void *pvVar17;
  STMessage *pSVar18;
  uint uVar19;
  uint uVar20;
  byte *pbVar21;
  AnonShape_005CE0E0_C50CCD71 *pAVar22;
  byte *pbVar23;
  byte *puVar24;
  int *piVar25;
  uint *puVar26;
  bool bVar27;
  char cVar28;
  InternalExceptionFrame local_148;
  char local_104 [2];
  undefined1 local_102;
  undefined4 local_f2;
  int local_e6;
  undefined4 local_e2;
  STMessage local_dc;
  STMessage local_bc;
  AnonShape_005D4990_5F0525CF local_9c;
  undefined2 local_90;
  char local_8e;
  uint local_8d;
  uint local_89;
  undefined1 local_85;
  undefined1 local_84;
  char local_83;
  undefined4 local_82;
  undefined4 local_7e;
  uint local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  int local_68;
  uint local_64;
  int *local_60;
  SettMapMTy *local_5c;
  STMessage local_58;
  uint *local_38;
  int *local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  char local_1d;
  uint local_1c;
  uint local_18;
  char local_11;
  int *local_10;
  AnonShape_005CE0E0_C50CCD71 *local_c;
  char local_5;

  local_1d = this->field_0065;
  local_c = nullptr;
  local_24 = 0xffffffff;
  local_148.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_148;
  local_5c = this;
  iVar6 = st::fn_0072D7F0(local_148.jumpBuffer,0);
  this_00 = local_5c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_148.previous;
    iVar16 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x4a9,0,iVar6,
                                "%s","SettMapMTy::NoneSettMap");
    if (iVar16 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,"E:\\__titans\\Start\\settmobj.cpp",0x4a9);
    return 0;
  }
  iVar6 = st::fn_00402383((SettMapTy *)local_5c);
  if (((iVar6 != 0) && (local_1d == '\x03')) && (this_00->field_0065 == '\x01')) {
    st::fn_006B3430((int *)g_ddxContext_008075A8,this_00->field_2200);
    st::fn_006B3430((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
    st::fn_006B3430((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
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
  }
  st::fn_006B7510(g_int_00811764,-1,&local_30,-1,0);
  if (DAT_0080877e == '\0') {
    iVar6 = this_00->field_0061;
    if (799 < (uint)(iVar6 - this_00->field_220D)) {
      local_f2 = this_00->field_2221;
      local_e2 = this_00->field_2211;
      local_102 = 4;
      local_e6 = iVar6;
      st::fn_006B6500(g_int_00811764,0);
      st::fn_00715360(g_int_00811764,1,'\x1a',local_104,0x26,1,0xffffffff);
      st::fn_006B6500(g_int_00811764,DAT_0080733c);
      this_00->field_2221 = this_00->field_2221 + 1;
      iVar6 = this_00->field_0061;
      this_00->field_220D = iVar6;
    }
    if (((local_30 == 0) && (60000 < (uint)(iVar6 - this_00->field_2209))) &&
       (this_00->field_2225 == '\0')) {
      this_00->field_2225 = 1;
      pSVar18 = &local_dc;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        pSVar18->unknown_00 = 0;
        pSVar18 = (STMessage *)&pSVar18->unknown_04;
      }
      local_dc.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
      if (this_00->field_1A5B->field_02E6 == nullptr) {
        this_00->GetMessage(&local_dc);
      }
      else {
        local_dc.unknown_08 = this_00->field_0008;
        local_dc.unknown_0c = 2;
        st::fn_00403FA8(this_00->field_1A5B->field_02E6,0x2522,'\0',&local_dc.unknown_00,
                           nullptr,nullptr,0,0);
      }
    }
  }
  else if ((this_00->field_222E != '\0') &&
          (29999 < (uint)(this_00->field_0061 - this_00->field_2233))) {
    this_00->field_222E = 0;
    st::fn_0040471E(this_00);
  }
  local_1c = 0;
  if (0 < local_30) {
    do {
      iVar6 = st::fn_00715630
                        (g_int_00811764,-1,&local_28,(int *)&local_18,&local_c,&local_2c,-1,0);
      if ((iVar6 == 1) && (local_28 == 0x1b)) {
        st::fn_00402BBC(this_00->field_1A5B,(int)local_c);
      }
      pAVar22 = local_c;
      if (DAT_0080877e == '\0') {
        pSVar18 = &local_58;
        for (iVar16 = 8; pAVar22 = local_c, iVar16 != 0; iVar16 = iVar16 + -1) {
          pSVar18->unknown_00 = 0;
          pSVar18 = (STMessage *)&pSVar18->unknown_04;
        }
        if (iVar6 == -0x4d) {
          this_00->field_2225 = 1;
          local_58.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
          pSVar10 = this_00->field_1A5B;
          if (pSVar10->field_02E6 == nullptr) {
            pSVar14 = this_00->vtable;
            pSVar18 = &local_58;
            goto LAB_005cf387;
          }
          local_58.unknown_08 = this_00->field_0008;
          local_58.unknown_0c = 2;
          pSVar18 = &local_58;
LAB_005ce9b2:
          st::fn_00403FA8(pSVar10->field_02E6,0x2522,'\0',&pSVar18->unknown_00,nullptr,
                             nullptr,0,0);
        }
        else {
          if (iVar6 != 1) goto cf_continue_loop_005CF38C;
          iVar6 = this_00->field_0061;
          this_00->field_2209 = iVar6;
          switch(local_28) {
          case 0x10:
            if (this_00->field_0065 == '\x01') {
              local_58.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
              if (this_00->field_1A5B->field_02E6 == nullptr) goto LAB_005cee1a;
              local_58.unknown_08 = this_00->field_0008;
              local_58.unknown_0c = 2;
              st::fn_00403FA8(this_00->field_1A5B->field_02E6,0x2524,'\0',&local_58.unknown_00,
                                 nullptr,nullptr,0,0);
            }
            break;
          case 0x12:
            if (this_00->field_0065 == '\x01') {
              local_58.id = 0x694f;
LAB_005cee1a:
              this_00->GetMessage(&local_58);
            }
            break;
          case 0x1a:
          case 0x2d:
            pcVar7 = &local_c->field_0002;
            if ((local_c->field_0002 == '\x03') && (this_00->field_0065 == '\x01')) {
              local_58.id = 0x694f;
              this_00->GetMessage(&local_58);
            }
            else {
              if (local_c->field_0002 == '\x01') {
                bVar1 = local_c->field_000B;
                if (bVar1 == 1) {
                  if (this_00->field_0065 == '\x01') {
                    if ((local_c->field_0003 == DAT_00809958) ||
                       ((uint)(iVar6 - this_00->field_2215) < 3000)) {
                      if ((local_c->field_0016 != DAT_00808aab) &&
                         (2999 < (uint)(iVar6 - this_00->field_2219))) {
                        st::fn_006B6500(g_int_00811764,1);
                        st::fn_00715360(g_int_00811764,1,'\x1d',nullptr,0,0,0xffffffff);
                        st::fn_006B6500(g_int_00811764,DAT_0080733c);
                        iVar6 = this_00->field_0061;
                        this_00->field_2219 = iVar6;
                      }
                      if (((this_00->field_1F84 != nullptr) &&
                          (*(int *)&pAVar22->field_0x1a != this_00->field_2121)) &&
                         (1999 < (uint)(iVar6 - this_00->field_221D))) {
                        st::fn_006B6500(g_int_00811764,1);
                        st::fn_00715360(g_int_00811764,1,'#',nullptr,0,0,0xffffffff);
                        st::fn_006B6500(g_int_00811764,DAT_0080733c);
                        this_00->field_221D = this_00->field_0061;
                      }
                    }
                    else {
                      st::fn_006B6500(g_int_00811764,1);
                      st::fn_00715360(g_int_00811764,1,'!',nullptr,0,0,0xffffffff);
                      st::fn_00715360(g_int_00811764,1,'\x1f',nullptr,0,0,0xffffffff);
                      st::fn_006B6500(g_int_00811764,DAT_0080733c);
                      this_00->field_2215 = this_00->field_0061;
                    }
                  }
                }
                else if ((1 < bVar1) && (bVar1 < 6)) {
                  if ((local_c->field_0016 != DAT_00808aab) &&
                     (2999 < (uint)(iVar6 - this_00->field_2219))) {
                    st::fn_006B6500(g_int_00811764,1);
                    st::fn_00715360(g_int_00811764,1,'\x1d',nullptr,0,0,0xffffffff);
                    st::fn_006B6500(g_int_00811764,DAT_0080733c);
                    iVar6 = this_00->field_0061;
                    this_00->field_2219 = iVar6;
                  }
                  if (this_00->field_1F84 != nullptr) {
                    if ((*(int *)&pAVar22->field_0x1a != this_00->field_2121) &&
                       (1999 < (uint)(iVar6 - this_00->field_221D))) {
                      st::fn_006B6500(g_int_00811764,1);
                      st::fn_00715360(g_int_00811764,1,'#',nullptr,0,0,0xffffffff);
                      st::fn_006B6500(g_int_00811764,DAT_0080733c);
                      iVar6 = this_00->field_0061;
                      this_00->field_221D = iVar6;
                    }
                    if ((this_00->field_1F84 != nullptr) &&
                       (1999 < (uint)(iVar6 - this_00->field_221D))) {
                      st::fn_004046A1(this_00,(uint)(this_00->field_1E26 == CASE_10));
                    }
                  }
                }
              }
              iVar6 = this_00->field_0061 - pAVar22->field_001E;
              this_00->field_2211 = iVar6;
              st::fn_00404A84(this_00,DAT_0080877f,iVar6);
              if ((((((*pcVar7 == '\x02') && (this_00->field_0065 == '\x01')) &&
                    (pAVar22->field_0003 == DAT_008087be)) &&
                   ((this_00->field_1E26 != 0xe || (pAVar22->field_0003 == DAT_00809958)))) &&
                  (pAVar22->field_0016 == DAT_00808aab)) &&
                 (*(int *)&pAVar22->field_0x1a == this_00->field_2121)) {
                local_5 = '\0';
                this_00->field_002D = 0x10003;
                st::fn_006E6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
                DAT_0080733b = pAVar22->field_0xc;
                DAT_00808754 = *(undefined4 *)&pAVar22->field_0xe;
                pSVar12 = this_00->field_1F84;
                uVar19 = 0;
                uVar20 = pSVar12->count;
                local_1c = 0;
                if (0 < (int)uVar20) {
                  bVar27 = uVar20 != 0;
                  do {
                    if (bVar27) {
                      element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar12, uVar19);
                    }
                    else {
                      element_1f84 = nullptr;
                    }
                    if (((element_1f84 != nullptr) && ((element_1f84->field_0004 == '\x02' || (element_1f84->field_0004 == '\x03')))
                        ) && (element_1f84->element == DAT_0080877f)) {
                      local_5 = '\x01';
                      local_1c = uVar19;
                      break;
                    }
                    uVar19 = uVar19 + 1;
                    bVar27 = uVar19 < uVar20;
                    local_1c = uVar19;
                  } while ((int)uVar19 < (int)uVar20);
                }
                if (local_5 == '\0') {
                  this_00->field_002D = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                  this_00->GetMessage((STMessage *)&this_00->field_0x1d);
                }
                else {
                  this_00->field_002D = 0x694a;
                  this_00->field_0031 = 1;
                  this_00->GetMessage((STMessage *)&this_00->field_0x1d);
                }
              }
            }
            break;
          case 0x1c:
            if (DAT_00808aab != *(uint *)&local_c[2].field_0x1c) {
              local_5 = DAT_00808a8f != *(char *)(local_c + 2);
              iVar6 = 0x10;
              bVar27 = true;
              pbVar21 = g_playerRelationMatrix[0];
              piVar25 = (int *)&local_c->field_0x10;
              do {
                if (iVar6 == 0) break;
                iVar6 = iVar6 + -1;
                bVar27 = *(int *)pbVar21 == *piVar25;
                pbVar21 = pbVar21 + 4;
                piVar25 = piVar25 + 1;
              } while (bVar27);
              local_11 = !bVar27;
              st::fn_004047C3((AnonShape_00571A30_8BA8841B *)&DAT_008087b6,
                                 (AnonShape_00571A30_67EE4B56 *)local_c,'\x01');
              DAT_0080734b = DAT_00808aa8;
              local_34 = (int *)PTR_0080c502->count;
              local_10 = nullptr;
              if (0 < (int)local_34) {
                bVar27 = local_34 != nullptr;
                do {
                  if (bVar27) {
                    pvVar17 = DArrayAt<void>(PTR_0080c502, (int)local_10);
                  }
                  else {
                    pvVar17 = nullptr;
                  }
                  if ((pvVar17 != nullptr) && (STField<uint>(pvVar17,0x90) == DAT_0080995c))
                  {
                    pbVar23 = (byte *)&DAT_00809960;
                    pbVar21 = (byte *)((int)pvVar17 + 0x4c);
                    do {
                      bVar1 = *pbVar21;
                      bVar27 = bVar1 < *pbVar23;
                      if (bVar1 != *pbVar23) {
LAB_005cef58:
                        iVar6 = (1 - (uint)bVar27) - (uint)(bVar27 != 0);
                        goto LAB_005cef5d;
                      }
                      if (bVar1 == 0) break;
                      bVar1 = pbVar21[1];
                      bVar27 = bVar1 < pbVar23[1];
                      if (bVar1 != pbVar23[1]) goto LAB_005cef58;
                      pbVar21 = pbVar21 + 2;
                      pbVar23 = pbVar23 + 2;
                    } while (bVar1 != 0);
                    iVar6 = 0;
LAB_005cef5d:
                    if (iVar6 == 0) {
                      this_00->field_1C5F = (uint)local_10;
                      st::fn_00402BF3
                                (g_startSystem_0081176C,(int)this_00->field_1F43,
                                 (char *)((int)pvVar17 + 0x70),this_00->field_1C63);
                      break;
                    }
                  }
                  local_10 = (int *)((int)local_10 + 1);
                  bVar27 = local_10 < local_34;
                } while ((int)local_10 < (int)local_34);
              }
              puVar8 = this_00->field_2125;
              iVar6 = 0xe;
              do {
                if (*puVar8 != 0) {
                  this_00->field_002D = 5;
                  st::fn_006E6080(this_00,2,*puVar8,(undefined4 *)&this_00->field_0x1d);
                }
                puVar8 = puVar8 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              if (((local_5 == '\0') || (this_00->SetListCtrls(), local_5 == '\0')
                  ) && (local_11 != '\0')) {
                puVar8 = this_00->field_1F8C;
                local_10 = (int *)0xa;
                do {
                  iVar6 = 8;
                  do {
                    if (*puVar8 != 0) {
                      this_00->field_002D = 5;
                      st::fn_006E6080(this_00,2,*puVar8,(undefined4 *)&this_00->field_0x1d);
                    }
                    puVar8 = puVar8 + 1;
                    iVar6 = iVar6 + -1;
                  } while (iVar6 != 0);
                  local_10 = (int *)((int)local_10 + -1);
                } while (local_10 != nullptr);
              }
              st::fn_00402A9A((SettMapTy *)this_00);
            }
            break;
          case 0x1e:
            if ((DAT_00809958 != *(uint *)local_c) && (this_00->field_0065 == '\x01')) {
              puVar24 = (byte *)(&DAT_00853de0);
              memmove(puVar24, pAVar22, 0x232); /* compiler REP MOVS byte copy */
              pAVar22 = pAVar22 + 0xe;
              st::fn_004024D2();
            }
            break;
          case 0x20:
            iVar6 = 0xd;
            bVar27 = true;
            pcVar7 = (char *)&this_00->field_1F53;
            do {
              if (iVar6 == 0) break;
              iVar6 = iVar6 + -1;
              bVar27 = *pcVar7 == *(char *)pAVar22;
              pcVar7 = pcVar7 + 1;
              pAVar22 = (AnonShape_005CE0E0_C50CCD71 *)&pAVar22->field_0x1;
            } while (bVar27);
            if (!bVar27) {
              iVar6 = 6;
              this_00->field_1F53 = *(undefined4 *)local_c;
              *(undefined4 *)&this_00->field_0x1f57 = *(undefined4 *)((int)&local_c->field_0003 + 1);
              bVar1 = local_c->field_000B;
              *(undefined3 *)&this_00->field_0x1f5b = *(undefined3 *)&local_c->field_0x8;
              this_00->field_0x1f5e = bVar1;
              this_00->field_1F5F = local_c->field_0xc;
              piVar25 = &this_00->field_1F60;
              do {
                if (*piVar25 != 0) {
                  this_00->field_002D = 5;
                  st::fn_006E6080(this_00,2,*piVar25,(undefined4 *)&this_00->field_0x1d);
                }
                piVar25 = piVar25 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
              st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_1F80);
            }
            break;
          case 0x22:
            if (((this_00->field_1F84 != nullptr) &&
                (this_00->field_2121 != *(int *)local_c)) &&
               (DAT_00808aab == *(uint *)((int)&local_c->field_0003 + 1))) {
              local_10 = (int *)(local_2c - 9);
              if (-1 < (int)local_10) {
                this_00->field_002D = 0x10003;
                st::fn_006E6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
                uVar20 = 0;
                this_00->field_2121 = *(undefined4 *)local_c;
                local_11 = pAVar22->field_0x8;
                pSVar12 = this_00->field_1F84;
                if (0 < (int)pSVar12->count) {
                  bVar27 = pSVar12->count != 0;
                  do {
                    if (bVar27) {
                      element_1f84_2 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar12, uVar20);
                    }
                    else {
                      element_1f84_2 = nullptr;
                    }
                    if ((element_1f84_2 != nullptr) &&
                       (element_1f84_2->handle != nullptr)) {
                      st::fn_006AE110(element_1f84_2->handle);
                    }
                    pSVar12 = this_00->field_1F84;
                    uVar20 = uVar20 + 1;
                    bVar27 = uVar20 < pSVar12->count;
                  } while ((int)uVar20 < (int)pSVar12->count);
                }
                pSVar12 = this_00->field_1F84;
                piVar25 = (int *)(local_2c / 0x60);
                local_34 = piVar25;
                if ((int)(pSVar12->count * pSVar12->elementSize) < (int)local_10) {
                  pSVar11 = st::fn_006ACF50(pSVar12->data,(uint)local_10);
                  this_00->field_1F84->data = pSVar11;
                  this_00->field_1F84->capacity = (dword)piVar25;
                }
                pcVar7 = &pAVar22->field_0x9;
                pSVar11 = this_00->field_1F84->data;
                for (uVar20 = (uint)local_10 >> 2; uVar20 != 0; uVar20 = uVar20 - 1) {
                  cVar28 = pcVar7[1];
                  cVar4 = pcVar7[2];
                  cVar5 = pcVar7[3];
                  pSVar11->field_0000 = pcVar7[0];
                  pSVar11->field_0001 = cVar28;
                  pSVar11->state = cVar4;
                  pSVar11->field_0003 = cVar5;
                  pcVar7 = pcVar7 + 4;
                  pSVar11 = (SettMapMTy_field_1F84Element *)&pSVar11->field_0004;
                }
                for (uVar20 = (uint)local_10 & 3; uVar20 != 0; uVar20 = uVar20 - 1) {
                  pSVar11->field_0000 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                  pSVar11 = (SettMapMTy_field_1F84Element *)&pSVar11->field_0001;
                }
                uVar20 = 0;
                this_00->field_1F84->count = (dword)local_34;
                pSVar12 = this_00->field_1F84;
                if (0 < (int)pSVar12->count) {
                  bVar27 = pSVar12->count != 0;
                  do {
                    if (bVar27) {
                      element_1f84_3 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar12, uVar20);
                    }
                    else {
                      element_1f84_3 = nullptr;
                    }
                    if (element_1f84_3 != nullptr) {
                      if ((local_11 == '\x05') || (this_00->field_1E26 == CASE_F)) {
                        pDVar13 = (DArrayTy *)
                                  st::fn_0040466A((int)this_00->field_1F3F,(uint)(byte)element_1f84_3->state,
                                                    0xffffffff);
                      }
                      else if ((local_11 == '\f') || (this_00->field_1E26 == CASE_10)) {
                        pDVar13 = (DArrayTy *)
                                  st::fn_00401DBB
                                            ((int)this_00->field_1F3F,(uint)(byte)element_1f84_3->state,
                                             0xffffffff);
                      }
                      else {
                        pDVar13 = (DArrayTy *)
                                  st::fn_00403F44(this_00->field_1F43,(uint)(byte)element_1f84_3->field_0003,
                                                     DAT_0080995c);
                      }
                      element_1f84_3->handle = pDVar13;
                    }
                    pSVar12 = this_00->field_1F84;
                    uVar20 = uVar20 + 1;
                    bVar27 = uVar20 < pSVar12->count;
                  } while ((int)uVar20 < (int)pSVar12->count);
                }
              }
              if (this_00->field_1E26 != CASE_10) {
                st::fn_00405B7D(this_00);
              }
              this_00->SetListCtrls();
              st::fn_00402A9A((SettMapTy *)this_00);
            }
            st::fn_004046A1(this_00,(uint)(this_00->field_1E26 == CASE_10));
            break;
          case 0x31:
          case 0x33:
          case 0x35:
            if (this_00->field_2225 == '\0') {
              this_00->field_2225 = 1;
              local_58.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
              if (this_00->field_1A5B->field_02E6 == nullptr) goto LAB_005cee1a;
              local_58.unknown_08 = this_00->field_0008;
              local_58.unknown_0c = 2;
              st::fn_00403FA8(this_00->field_1A5B->field_02E6,0x2522,'\0',&local_58.unknown_00,
                                 nullptr,nullptr,0,0);
            }
          }
          if (local_c != nullptr) {
            st::fn_006AB060(&local_c);
          }
        }
        goto cf_continue_loop_005CF38C;
      }
      if (iVar6 == -0x4d) {
        this_00->field_2225 = 1;
        pSVar18 = &local_bc;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          pSVar18->unknown_00 = 0;
          pSVar18 = (STMessage *)&pSVar18->unknown_04;
        }
        pSVar10 = this_00->field_1A5B;
        if (pSVar10->field_02E6 != nullptr) {
          local_bc.unknown_08 = this_00->field_0008;
          local_bc.unknown_0c = 2;
          local_bc.id = MESS_MAINMENUTY_6944|MESS_SHARED_0003;
          pSVar18 = &local_bc;
          goto LAB_005ce9b2;
        }
        pSVar14 = this_00->vtable;
        local_bc.id = MESS_MAINMENUTY_6944|MESS_SHARED_0003;
        pSVar18 = &local_bc;
LAB_005cf387:
        (*pSVar14->GetMessage)(this_00,pSVar18);
        goto cf_continue_loop_005CF38C;
      }
      if (iVar6 != 1) goto cf_continue_loop_005CF38C;
      switch(local_28) {
      case 0x11:
        st::fn_0040495D(this_00,local_18);
        st::fn_004035C6(this_00);
        this_00->SetListCtrls();
        st::fn_00402A9A((SettMapTy *)this_00);
        local_24 = 0;
        this_00->field_2121 = this_00->field_2121 + 1;
        break;
      case 0x1a:
        if (local_c->field_0002 == '\x04') {
          local_90 = (undefined2)((uint)DAT_00807dd5 >> 0x10);
          local_84 = DAT_0080733b;
          local_8e = (this_00->field_222E != '\0') + '\x01';
          local_83 = DAT_00807361;
          local_82 = DAT_00808754;
          local_7e = local_c->field_0012;
          local_8d = DAT_008087be;
          local_89 = (this_00->field_1E26 != CASE_C) - 1 & DAT_00808750;
          local_76 = this_00->field_2121;
          local_7a = DAT_00808aab;
          switch(this_00->field_1E26) {
          case CASE_4:
            local_85 = 2;
            break;
          case CASE_5:
            local_85 = 3;
            break;
          case CASE_7:
            local_85 = 1;
            break;
          case CASE_C:
            local_85 = 5;
            break;
          case CASE_13:
            if ((0x13 < DAT_00803400) && (DAT_00803400 < 0x16)) {
              local_85 = 4;
            }
          }
          local_6e = local_c->field_0022;
          puVar24 = (byte *)(&local_c->field_0022);
          local_72 = local_c->field_001E;
          st::fn_006B6500(g_int_00811764,0);
          st::fn_00715360(g_int_00811764,local_18,'\x1a',(char *)&local_90,0x26,1,0xffffffff);
          st::fn_006B6500(g_int_00811764,DAT_0080733c);
          st::fn_00404A84(this_00,local_18,*puVar24);
        }
        break;
      case 0x1d:
        st::fn_00404A89(this_00,local_18);
        break;
      case 0x1f:
        uVar20 = 0x232;
        pcVar7 = (char *)&DAT_00853de0;
        cVar28 = '\x1e';
        goto LAB_005ce59f;
      case 0x21:
        pcVar7 = (char *)&this_00->field_1F53;
        uVar20 = 0xd;
        cVar28 = ' ';
LAB_005ce59f:
        st::fn_00715360(g_int_00811764,local_18,cVar28,pcVar7,uVar20,1,0xffffffff);
        break;
      case 0x23:
        local_24 = (local_24 != 0xffffffff) - 1 & local_18;
        break;
      case 0x24:
        if (local_c != nullptr) {
          pSVar12 = this_00->field_1F84;
          if ((pSVar12 == nullptr) ||
             (pSVar12->count <= *(uint *)local_c)) {
            pcVar7 = nullptr;
          }
          else {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar7 = &pSVar12->data->field_0000 + pSVar12->elementSize * *(uint *)local_c;
          }
          if (pcVar7 != nullptr) {
            local_10 = (int *)((int)&local_c->field_0003 + 1);
            iVar6 = *local_10;
            if ((-1 < iVar6) && ((iVar6 < 4 || (iVar6 == 7)))) {
              local_24 = 0;
            }
            this_00->field_002D = 0x10003;
            st::fn_006E6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
            switch(*local_10) {
            case 0:
              st::fn_00405407(this_00,*(uint *)pAVar22);
              break;
            case 1:
              st::fn_00405B46(this_00,*(uint *)pAVar22,(char)*(undefined4 *)&pAVar22->field_0x8);
              break;
            case 2:
              st::fn_004041A6(this_00,*(uint *)pAVar22,(char)*(undefined4 *)&pAVar22->field_0x8);
              break;
            case 3:
              st::fn_00401BDB(this_00,local_18,*(uint *)pAVar22,*(int *)&pAVar22->field_0x8,
                               (char)*(undefined4 *)&pAVar22->field_0xc,&pAVar22->field_0x10);
              break;
            case 5:
              st::fn_00402068(this_00,*(uint *)pAVar22,*(uint *)&pAVar22->field_0x8,
                               *(uint *)&pAVar22->field_0xc);
              st::fn_00404A89(this_00,0);
              break;
            case 7:
              puVar8 = this_00->field_1F8C;
              pcVar7[0x4f] = pAVar22->field_0x8;
              local_10 = (int *)0xa;
              this_00->field_2121 = this_00->field_2121 + 1;
              do {
                iVar6 = 8;
                do {
                  if (*puVar8 != 0) {
                    this_00->field_002D = 5;
                    st::fn_006E6080(this_00,2,*puVar8,(undefined4 *)&this_00->field_0x1d);
                  }
                  puVar8 = puVar8 + 1;
                  iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
                local_10 = (int *)((int)local_10 + -1);
              } while (local_10 != nullptr);
              local_10 = nullptr;
            }
          }
        }
        break;
      case 0x25:
        if (local_c == nullptr) goto cf_continue_loop_005CF38C;
        if (((3 < local_2c) && (DAT_00807361 != '\0')) && (this_00->field_2243 != '\0')) {
          if ((((AnonShape_005DE670_0D4D7A8C *)this_00->field_1A5B)->field_069A == (LPVOID)0x0) &&
             (st::fn_004021E4((AnonShape_005DE670_0D4D7A8C *)this_00->field_1A5B),
             this_00->field_1A5B->field_069A == nullptr)) {
            this_00->field_2243 = 0;
          }
          else {
            pSVar2 = this_00->field_2237;
            bVar27 = false;
            uVar19 = 0;
            local_10 = nullptr;
            uVar20 = pSVar2->count;
            if (uVar20 != 0) {
              if (uVar20 == 0) {
                pAVar9 = nullptr;
                goto LAB_005ce8db;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pAVar9 = (AnonShape_005D4990_5F0525CF *)
                         ((int)&pSVar2->data->field_0000 + pSVar2->elementSize * uVar19);
LAB_005ce8db:
                if ((pAVar9 != nullptr) &&
                   (*(uint *)&pAVar9->field_0x0 == local_18)) {
                  st::fn_0040393B(this_00,pAVar9,(uint *)local_c);
                  bVar27 = true;
                  goto LAB_005ce8fe;
                }
                uVar19 = uVar19 + 1;
              } while (uVar19 < uVar20);
              bVar27 = false;
            }
LAB_005ce8fe:
            if (!bVar27) {
              STPiece<0,4>(local_9c) = local_18;
              local_9c.field_0008 = st::fn_006AAC70(this_00->field_1A5B->field_06A6);
              st::fn_0040393B(this_00,&local_9c,(uint *)local_c);
              st::fn_006AE1C0((DArrayTy *)this_00->field_2237,&local_9c);
            }
          }
        }
        break;
      case 0x28:
        if (local_c != nullptr) {
          pSVar12 = this_00->field_1F84;
          if ((pSVar12 == nullptr) ||
             (pSVar12->count <= *(uint *)local_c)) {
            pcVar7 = nullptr;
          }
          else {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar7 = &pSVar12->data->field_0000 + pSVar12->elementSize * *(uint *)local_c;
          }
          if ((pcVar7 != nullptr) && (*(int *)((int)&local_c->field_0003 + 1) == 3)) {
            local_24 = 0;
            this_00->field_002D = 0x10003;
            st::fn_006E6080(this_00,3,0x100ef,(undefined4 *)&this_00->field_0x1d);
            st::fn_004013A7(this_00,local_18,*(uint *)pAVar22,*(int *)&pAVar22->field_0x8,
                          &pAVar22->field_0x10);
          }
        }
        break;
      case 0x2e:
        if ((this_00->field_222E != '\0') &&
           (pDVar13 = this_00->field_222F, pDVar13 != nullptr)) {
          uVar20 = pDVar13->count;
          uVar19 = 0;
          local_1c = 0;
          if (0 < (int)uVar20) {
            bVar27 = uVar20 != 0;
            do {
              if (bVar27) {
                puVar8 = DArrayAt<uint>(pDVar13, uVar19);
              }
              else {
                puVar8 = nullptr;
              }
              if ((puVar8 != nullptr) && (*puVar8 == local_18)) {
                local_1c = uVar19;
                st::fn_006B0C70(pDVar13,uVar19);
                break;
              }
              uVar19 = uVar19 + 1;
              bVar27 = uVar19 < uVar20;
              local_1c = uVar19;
            } while ((int)uVar19 < (int)uVar20);
          }
          if (this_00->field_222F->count == 0) {
            this_00->field_222E = 0;
            st::fn_0040471E(this_00);
            if (DAT_008067a0 != '\0') {
              st::external_0000010A((CFsgsConnection *)&DAT_00802a90,6,&this_00->field_0x1a5f);
              st::external_0000010C((CFsgsConnection *)&DAT_00802a90);
            }
          }
        }
      }
      if (local_c != nullptr) {
        st::fn_006AB060(&local_c);
      }
cf_continue_loop_005CF38C:
      local_1c = local_1c + 1;
    } while ((int)local_1c < local_30);
  }
  if (DAT_0080877e != '\0') {
    if (local_24 != 0xffffffff) {
      st::fn_00403AD5(this_00,local_24);
    }
    if ((this_00->field_223B < this_00->field_2237->count) &&
       (this_00->field_1A5B->field_069A != nullptr)) {
      if (this_00->field_223F == 0) {
        this_00->field_223F = this_00->field_1A5B->field_06AA;
      }
      else {
        this_00->field_223F = this_00->field_223F + -1;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar6 = (**(code **)(*(int *)*g_int_00811764 + 200))
                        ((int *)*g_int_00811764,DAT_0080877f,0,1,0,&local_64);
      if (((iVar6 == 0) && (local_64 < 0x400)) && (this_00->field_223F == 0)) {
        pSVar2 = this_00->field_2237;
        if (this_00->field_223B < pSVar2->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          local_10 = (int *)((int)&pSVar2->data->field_0000 +
                            pSVar2->elementSize * this_00->field_223B);
        }
        else {
          local_10 = nullptr;
        }
        if (local_10 != nullptr) {
          pSVar10 = this_00->field_1A5B;
          local_68 = local_10[2];
          local_60 = local_10 + 2;
          local_1c = 0;
          if (pSVar10->field_06A6 != 0) {
LAB_005cf496:
            if (*(char *)(local_1c + local_68) == '\0') goto code_r0x005cf49c;
            if (local_1c == pSVar10->field_06A6 - 1) {
              uVar20 = pSVar10->field_069E % pSVar10->field_06A2;
            }
            else {
              uVar20 = pSVar10->field_06A2;
            }
            local_34 = (int *)(uVar20 + 0x1c);
            local_38 = st::fn_006AAC70((uint)local_34);
            piVar25 = local_10;
            *local_38 = DAT_008087be;
            local_38[1] = local_1c;
            local_38[2] = this_00->field_1A5B->field_06A6;
            local_38[3] = this_00->field_1A5B->field_069E;
            local_38[4] = this_00->field_1A5B->field_06AE;
            local_38[5] = this_00->field_1A5B->field_06B2;
            local_38[6] = this_00->field_1A5B->field_06A2;
            puVar8 = (uint *)(this_00->field_1A5B->field_06A2 * local_1c +
                             (int)this_00->field_1A5B->field_069A);
            puVar26 = local_38 + 7;
            memmove(puVar26, puVar8, uVar20); /* compiler REP MOVS byte copy */
            st::fn_00715360(g_int_00811764,*local_10,'&',(char *)local_38,(uint)local_34,1,0xffffffff);
            st::fn_006AB060(&local_38);
            *(undefined1 *)(local_1c + local_68) = 0;
            iVar6 = piVar25[1] + -1;
            piVar25[1] = iVar6;
            if (iVar6 == 0) {
              st::fn_006AB060((void **)local_60);
              st::fn_006B0C70((DArrayTy *)this_00->field_2237,this_00->field_223B);
            }
          }
LAB_005cf5bf:
          uVar20 = this_00->field_223B + 1;
          this_00->field_223B = uVar20;
          if (this_00->field_2237->count <= uVar20) {
            this_00->field_223B = 0;
          }
        }
      }
    }
  }
  g_currentExceptionFrame = local_148.previous;
  return 1;
code_r0x005cf49c:
  local_1c = local_1c + 1;
  if (pSVar10->field_06A6 <= local_1c) goto LAB_005cf5bf;
  goto LAB_005cf496;
}

// 005CFCD0 SettMapMTy::UpdatePing
#line 4 "decomp/ST.exe/functions/005CFCD0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::UpdatePing

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005CFCD0(SettMapMTy *this,int param_1,undefined4 param_2)

{
  SettMapMTy_field_1F84DArray *pSVar1;
  uint uVar2;
  int iVar4;
  SettMapMTy_field_1F84Element *element_1f84;
  int iVar6;
  uint uVar7;
  bool bVar8;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != nullptr) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (iVar4 == 0) {
      uVar7 = 0;
      pSVar1 = local_8->field_1F84;
      uVar2 = pSVar1->count;
      if (0 < (int)uVar2) {
        bVar8 = uVar2 != 0;
        while( true ) {
          if (bVar8) {
            element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar1, uVar7);
          }
          else {
            element_1f84 = nullptr;
          }
          if (((element_1f84 != nullptr) && (element_1f84->element == param_1)) &&
             ((element_1f84->field_0004 == '\x02' || (element_1f84->field_0004 == '\x03')))) break;
          uVar7 = uVar7 + 1;
          bVar8 = uVar7 < uVar2;
          if ((int)uVar2 <= (int)uVar7) {
            g_currentExceptionFrame = local_4c.previous;
            return;
          }
        }
        element_1f84->field_004B = param_2;
        iVar4 = (uVar7 - local_8->field_1F88) * 0x20;
        if (*(int *)(iVar4 + 0x1fa4 + (int)local_8) != 0) {
          local_8->field_002D = 5;
          st::fn_006E6080(local_8,2,*(undefined4 *)(iVar4 + 0x1fa4 + (int)local_8),
                       (undefined4 *)&local_8->field_0x1d);
        }
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x4bf,0,iVar4,"%s"
                               ,"SettMapMTy::UpdatePing");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Start\\settmobj.cpp",0x4bf);
  }
  return;
}

// 005CFE50 SettMapMTy::SendDesc
#line 4 "decomp/ST.exe/functions/005CFE50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::SendDesc

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005CFE50(SettMapMTy *this,int param_1)

{
  int errorCode;
  int iVar2;
  AnonShape_00571A30_67EE4B56 local_dc;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  errorCode = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (errorCode == 0) {
    st::fn_004047C3((AnonShape_00571A30_8BA8841B *)&DAT_008087b6,&local_dc,'\0');
    st::fn_00715360(g_int_00811764,param_1,'\x1c',(char *)&local_dc,0x94,1,0xffffffff);
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x4c9,0,errorCode,
                             "%s","SettMapMTy::SendDesc");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x4c9);
  return;
}

// 005CFF40 SettMapMTy::DeletePlayer
#line 4 "decomp/ST.exe/functions/005CFF40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::DeletePlayer

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005CFF40(SettMapMTy *this,int param_1)

{
  SettMapMTy_field_1F84DArray *pSVar1;
  uint uVar2;
  int errorCode;
  SettMapMTy_field_1F84Element *element_1f84;
  int iVar5;
  uint uVar6;
  bool bVar7;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != nullptr) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      uVar6 = 0;
      pSVar1 = local_8->field_1F84;
      uVar2 = pSVar1->count;
      if (0 < (int)uVar2) {
        bVar7 = uVar2 != 0;
        while( true ) {
          if (bVar7) {
            element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar1, uVar6);
          }
          else {
            element_1f84 = nullptr;
          }
          if ((element_1f84 != nullptr) &&
             (((element_1f84->field_0004 == '\x02' || (element_1f84->field_0004 == '\x03')) && (element_1f84->element == param_1)))
             ) break;
          uVar6 = uVar6 + 1;
          bVar7 = uVar6 < uVar2;
          if ((int)uVar2 <= (int)uVar6) {
            g_currentExceptionFrame = local_4c.previous;
            return;
          }
        }
        element_1f84->element = 0;
        element_1f84->field_0004 = '\x01';
        element_1f84->field_0001 = '\x01';
        if ((element_1f84->field_0000 != '\0') && ((byte)element_1f84->state < 8)) {
          st::fn_00403F67(&DAT_00807620,element_1f84->state);
        }
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x4dc,0,errorCode,
                               "%s","SettMapMTy::DeletePlayer");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x4dc);
  }
  return;
}

// 005D0150 SettMapMTy::CheckPlList
#line 4 "decomp/ST.exe/functions/005D0150/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::CheckPlList

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=void __thiscall
   CheckPlList(SettMapMTy * this) Evidence: every machine RET purges exactly 0 explicit stack bytes;
   current signature describes 4; removed trailing parameter slots have no listing references;
   ret_sites=005D0557 RET | 005D059D RET */

void __thiscall st::fn_005D0150(SettMapMTy *this)

{
  bool bVar2;
  SettMapMTy *pSVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  SettMapMTy_field_1F84Element *element_1f84;
  char *pcVar8;
  SettMapMTy_field_1F84Element *element_1f84_2;
  char *pcVar9;
  SettMapMTy_field_1F84Element *element_1f84_3;
  int iVar10;
  SettMapMTy_field_1F84DArray *pSVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  InternalExceptionFrame local_5c;
  AnonShape_00413AF0_B6B4EE9A *local_18;
  uint local_14;
  uint local_10;
  SettMapMTy *local_c;
  char local_6;
  char local_5;

  if (this->field_1F84 != nullptr) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_c = this;
    iVar6 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
    pSVar3 = local_c;
    if (iVar6 == 0) {
      cVar5 = '\0';
      local_6 = '\0';
      cVar4 = cVar5;
      if (DAT_00808aaa == '\0') {
        pSVar11 = local_c->field_1F84;
        cVar4 = local_6;
        if (pSVar11->count != 0) {
          uVar12 = 0;
          local_6 = cVar5;
          if (pSVar11->count == 0) {
            pcVar9 = nullptr;
            goto LAB_005d01c2;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar9 = &pSVar11->data->field_0000 + pSVar11->elementSize * uVar12;
LAB_005d01c2:
            if ((pcVar9 != nullptr) && (pcVar9[4] == '\x03')) {
              if (*(DArrayTy **)(pcVar9 + 0x50) != nullptr) {
                st::fn_006AE110(*(DArrayTy **)(pcVar9 + 0x50));
              }
              st::fn_006B0C70((DArrayTy *)pSVar3->field_1F84,uVar12);
              uVar12 = uVar12 - 1;
            }
            pSVar11 = pSVar3->field_1F84;
            uVar12 = uVar12 + 1;
            cVar4 = local_6;
          } while (uVar12 < pSVar11->count);
        }
      }
      do {
        local_6 = cVar4;
        pSVar11 = pSVar3->field_1F84;
        bVar2 = false;
        uVar13 = 0;
        local_5 = '\0';
        uVar12 = pSVar11->count;
        if (uVar12 != 0) {
          if (uVar12 == 0) {
            pcVar9 = nullptr;
            goto LAB_005d021c;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar9 = &pSVar11->data->field_0000 + pSVar11->elementSize * uVar13;
LAB_005d021c:
            if (pcVar9 != nullptr) {
              if (*pcVar9 == '\0') {
                if (pcVar9[4] == '\x01') {
                  if (local_6 == '\0') goto LAB_005d024d;
                  if (*(DArrayTy **)(pcVar9 + 0x50) != nullptr) {
                    st::fn_006AE110(*(DArrayTy **)(pcVar9 + 0x50));
                  }
                  st::fn_006B0C70((DArrayTy *)pSVar3->field_1F84,uVar13);
                  bVar2 = true;
                  goto LAB_005d0277;
                }
              }
              else if (((pcVar9[4] == '\x02') && (pSVar3->field_1E26 != CASE_C)) &&
                      (pSVar3->field_1E26 != CASE_10)) {
                local_6 = '\0';
              }
              else {
LAB_005d024d:
                local_6 = '\x01';
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar12);
          bVar2 = false;
        }
LAB_005d0277:
        cVar4 = local_6;
      } while (bVar2);
      if ((pSVar3->field_1E26 == CASE_C) || (pSVar3->field_1E26 == CASE_10)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        do {
          uVar13 = 1;
          local_5 = '\0';
          pSVar11 = local_c->field_1F84;
          uVar12 = pSVar11->count;
          if (1 < uVar12) {
            if (uVar12 < 2) {
              pcVar9 = nullptr;
              goto LAB_005d02c3;
            }
            do {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
              pcVar9 = &pSVar11->data->field_0000 + pSVar11->elementSize * uVar13;
LAB_005d02c3:
              if (uVar13 - 1 < uVar12) {
                element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar11, uVar13 - 1);
              }
              else {
                element_1f84 = nullptr;
              }
              if (((pcVar9 != nullptr) && (element_1f84 != nullptr)) &&
                 ((*pcVar9 != '\0' &&
                  (((element_1f84->field_0x0 == '\0' && (element_1f84->field_0x4 != '\x01')) && (uVar12 < 0x18))
                  )))) {
                st::fn_004017D0(local_c,element_1f84,uVar13);
                local_5 = '\x01';
                break;
              }
              uVar13 = uVar13 + 1;
            } while (uVar13 < uVar12);
          }
        } while (local_5 != '\0');
      }
      if ((local_c->field_1E26 != CASE_C) && (local_c->field_1E26 != CASE_10)) {
        pSVar11 = local_c->field_1F84;
        uVar12 = pSVar11->count;
        if (uVar12 != 0) {
          if (uVar12 - 1 < uVar12) {
            element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar11, uVar12 - 1);
          }
          else {
            element_1f84 = nullptr;
          }
          if (((element_1f84 != nullptr) && (element_1f84->field_0x0 == '\0')) &&
             ((element_1f84->field_0x4 != '\x01' && (uVar12 < 0x18)))) {
            st::fn_004017D0(local_c,element_1f84,uVar12);
          }
        }
      }
      do {
        uVar13 = 1;
        local_5 = '\0';
        pSVar11 = local_c->field_1F84;
        uVar12 = pSVar11->count;
        if (1 < uVar12) {
          if (uVar12 < 2) {
            pcVar9 = nullptr;
            goto LAB_005d0391;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar9 = &pSVar11->data->field_0000 + pSVar11->elementSize * uVar13;
LAB_005d0391:
            if (uVar13 - 1 < uVar12) {
              element_1f84_2 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar11, uVar13 - 1);
            }
            else {
              element_1f84_2 = nullptr;
            }
            if (((((pcVar9 != nullptr) && (element_1f84_2 != nullptr)) && (*pcVar9 == '\0')) &&
                ((pcVar9[4] != '\x01' && (element_1f84_2->field_0000 == '\0')))) && (element_1f84_2->field_0004 == '\x01')) {
              if (element_1f84_2->handle != nullptr) {
                st::fn_006AE110(element_1f84_2->handle);
              }
              st::fn_006B0C70((DArrayTy *)local_c->field_1F84,uVar13 - 1);
              local_5 = '\x01';
              break;
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar12);
        }
      } while (local_5 != '\0');
      local_5 = '\0';
      local_10 = 0;
      local_18 = (AnonShape_00413AF0_B6B4EE9A *)local_c->field_1F84;
      uVar12 = ((SettMapMTy_field_1F84DArray *)local_18)->count;
      if (uVar12 != 0) {
        do {
          if (local_10 < uVar12) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar9 = &((SettMapMTy_field_1F84DArray *)local_18)->data->field_0000 +
                     ((SettMapMTy_field_1F84DArray *)local_18)->elementSize * local_10;
          }
          else {
            pcVar9 = nullptr;
          }
          if (((pcVar9 != nullptr) && (*pcVar9 != '\0')) && (pcVar9[4] == '\x01')) {
            local_6 = '\0';
            local_14 = local_10 + 1;
            if (local_14 < uVar12) {
/* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
LAB_005d045a:
              pcVar8 = &((SettMapMTy_field_1F84DArray *)local_18)->data->field_0000 +
                       ((SettMapMTy_field_1F84DArray *)local_18)->elementSize * local_14;
              if (pcVar8 == nullptr) goto cf_continue_loop_005D0486;
              if (*pcVar8 == '\0') {
                if (pcVar8[4] == '\x03') {
                  local_6 = local_6 + '\x01';
                }
                if (pcVar8[4] != '\x02') goto cf_continue_loop_005D0486;
                if (*(DArrayTy **)(pcVar9 + 0x50) != nullptr) {
                  st::fn_006AE110(*(DArrayTy **)(pcVar9 + 0x50));
                }
                pcVar14 = pcVar9;
                memmove(pcVar14, pcVar8, 0x60); /* compiler REP MOVS byte copy */
                pcVar9[1] = '\0';
                *pcVar9 = '\x01';
                st::fn_006B0C70((DArrayTy *)local_c->field_1F84,local_14);
                local_5 = '\x01';
              }
            }
LAB_005d048e:
            if ((local_5 == '\0') && (local_6 != '\0')) {
              while( true ) {
                pSVar11 = local_c->field_1F84;
                uVar12 = local_10 + 1;
                if (uVar12 < pSVar11->count) {
                  element_1f84_3 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar11, uVar12);
                }
                else {
                  element_1f84_3 = nullptr;
                }
                if ((element_1f84_3 == nullptr) || (element_1f84_3->field_0000 != '\0')) break;
                if (element_1f84_3->handle != nullptr) {
                  st::fn_006AE110(element_1f84_3->handle);
                }
                st::fn_006B0C70((DArrayTy *)local_c->field_1F84,uVar12);
              }
            }
          }
          local_10 = local_10 + 1;
          local_18 = (AnonShape_00413AF0_B6B4EE9A *)local_c->field_1F84;
          uVar12 = ((SettMapMTy_field_1F84DArray *)local_18)->count;
        } while (local_10 < uVar12);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;
    iVar10 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x563,0,iVar6,
                                "%s","SettMapMTy::CheckPlList");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,"E:\\__titans\\Start\\settmobj.cpp",0x563);
  }
  return;
cf_continue_loop_005D0486:
  local_14 = local_14 + 1;
  if (uVar12 <= local_14) goto LAB_005d048e;
  goto LAB_005d045a;
}

// 005D06C0 SettMapMTy::ChangePlayerCiv
#line 4 "decomp/ST.exe/functions/005D06C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerCiv

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005D06C0(SettMapMTy *this,uint param_1,char param_2)

{
  SettMapMTy *pSVar2;
  int errorCode;
  SettMapMTy_field_1F84Element *element_1f84;
  int iVar4;
  SettMapMTy_field_1F84DArray *pSVar5;
  uint uVar6;
  bool bVar7;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != nullptr) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    pSVar2 = local_8;
    if (errorCode == 0) {
      pSVar5 = local_8->field_1F84;
      if (param_1 < pSVar5->count) {
        element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar5, param_1);
      }
      else {
        element_1f84 = nullptr;
      }
      if ((element_1f84 != nullptr) && (element_1f84->field_0000 != '\0')) {
        element_1f84->field_0003 = param_2;
        if ((element_1f84->field_0004 == '\x02') && (element_1f84->element == DAT_0080877f)) {
          DAT_0080874e = param_2;
        }
        pSVar5 = local_8->field_1F84;
        uVar6 = param_1 + 1;
        bVar7 = uVar6 < pSVar5->count;
        if ((int)uVar6 < (int)pSVar5->count) {
          do {
            if (bVar7) {
              element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar5, uVar6);
            }
            else {
              element_1f84 = nullptr;
            }
            if ((element_1f84 == nullptr) || (element_1f84->field_0000 != '\0')) break;
            element_1f84->field_0003 = param_2;
            if (element_1f84->element == DAT_0080877f) {
              DAT_0080874e = param_2;
            }
            pSVar5 = local_8->field_1F84;
            uVar6 = uVar6 + 1;
            bVar7 = uVar6 < pSVar5->count;
          } while ((int)uVar6 < (int)pSVar5->count);
        }
        local_8->SetListCtrls();
        pSVar2->field_2121 = pSVar2->field_2121 + 1;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x57d,0,errorCode,
                               "%s","SettMapMTy::ChangePlayerCiv");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x57d);
  }
  return;
}

// 005D0850 SettMapMTy::ChangePlayerColor
#line 4 "decomp/ST.exe/functions/005D0850/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerColor

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005D0850(SettMapMTy *this,uint param_1,char param_2)

{
  SettMapMTy *this_00;
  int errorCode;
  SettMapMTy_field_1F84Element *element_1f84;
  int iVar3;
  SettMapMTy_field_1F84DArray *pSVar4;
  uint uVar5;
  bool bVar6;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != nullptr) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (errorCode == 0) {
      pSVar4 = local_8->field_1F84;
      if (param_1 < pSVar4->count) {
        element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar4, param_1);
      }
      else {
        element_1f84 = nullptr;
      }
      if ((element_1f84 != nullptr) && (element_1f84->field_0000 != '\0')) {
        if (element_1f84->state != 0xff) {
          st::fn_00403F67(&DAT_00807620,element_1f84->state);
        }
        element_1f84->state = param_2;
        if ((element_1f84->field_0004 == '\x02') && (element_1f84->element == DAT_0080877f)) {
          DAT_0080874d = param_2;
        }
        pSVar4 = this_00->field_1F84;
        uVar5 = param_1 + 1;
        bVar6 = uVar5 < pSVar4->count;
        if ((int)uVar5 < (int)pSVar4->count) {
          do {
            if (bVar6) {
              element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar4, uVar5);
            }
            else {
              element_1f84 = nullptr;
            }
            if ((element_1f84 == nullptr) || (element_1f84->field_0000 != '\0')) break;
            element_1f84->state = param_2;
            if (element_1f84->element == DAT_0080877f) {
              DAT_0080874d = param_2;
            }
            pSVar4 = this_00->field_1F84;
            uVar5 = uVar5 + 1;
            bVar6 = uVar5 < pSVar4->count;
          } while ((int)uVar5 < (int)pSVar4->count);
        }
        this_00->SetListCtrls();
        st::fn_00402A9A((SettMapTy *)this_00);
        this_00->field_2121 = this_00->field_2121 + 1;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x598,0,errorCode,
                               "%s","SettMapMTy::ChangePlayerColor");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x598);
  }
  return;
}

// 005D0A20 SettMapMTy::ChangePlayerState
#line 4 "decomp/ST.exe/functions/005D0A20/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerState

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005D0A20(SettMapMTy *this,uint param_1)

{
  uint index;
  SettMapMTy_field_1F84DArray *pSVar1;
  SettMapMTy *this_00;
  int errorCode;
  SettMapMTy_field_1F84Element *element_1f84;
  int iVar4;
  SettMapMTy_field_1F84Element *element_1f84_2;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != nullptr) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (errorCode == 0) {
      pSVar1 = local_8->field_1F84;
      if (param_1 < pSVar1->count) {
        element_1f84_2 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar1, param_1);
      }
      else {
        element_1f84_2 = nullptr;
      }
      if (element_1f84_2->field_0x0 != '\0') {
        if (element_1f84_2->field_0x1 == '\0') {
          index = param_1 + 1;
          while( true ) {
            pSVar1 = this_00->field_1F84;
            if (index < pSVar1->count) {
              element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar1, index);
            }
            else {
              element_1f84 = nullptr;
            }
            if ((element_1f84 == nullptr) || (element_1f84->field_0000 != '\0')) break;
            if (element_1f84->handle != nullptr) {
              st::fn_006AE110(element_1f84->handle);
            }
            st::fn_006B0C70((DArrayTy *)this_00->field_1F84,index);
          }
          element_1f84_2->field_0x1 = 1;
        }
        else if (pSVar1->count < 0x18) {
          element_1f84_2->field_0x1 = 0;
          st::fn_004017D0(local_8,element_1f84_2,param_1 + 1);
        }
        this_00->SetListCtrls();
        this_00->field_2121 = this_00->field_2121 + 1;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x5ba,0,errorCode,
                               "%s","SettMapMTy::ChangePlayerState");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x5ba);
  }
  return;
}

// 005D0BB0 SettMapMTy::ChangePlayerTeam
#line 4 "decomp/ST.exe/functions/005D0BB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerTeam

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_005D0BB0(SettMapMTy *this,uint param_1,uint param_2,uint param_3)

{
  byte bVar1;
  SettMapMTy *this_00;
  int errorCode;
  SettMapMTy_field_1F84Element *element_1f84;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  SettMapMTy_field_1F84DArray *pSVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  InternalExceptionFrame local_54;
  byte local_10;
  undefined3 uStack_f;
  SettMapMTy *local_c;
  uint local_8;

  if ((this->field_1F84 != nullptr) && (DAT_00808a8f == param_2)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_c = this;
    errorCode = st::fn_0072D7F0(local_54.jumpBuffer,0);
    this_00 = local_c;
    if (errorCode == 0) {
      pSVar7 = local_c->field_1F84;
      if (param_1 < pSVar7->count) {
        element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar7, param_1);
      }
      else {
        element_1f84 = nullptr;
      }
      if (element_1f84 != nullptr) {
        if (param_2 != 0) {
          uVar8 = param_1 + 1;
          element_1f84->field_004A = (byte)param_3;
          pSVar7 = local_c->field_1F84;
          bVar9 = uVar8 < pSVar7->count;
          if ((int)uVar8 < (int)pSVar7->count) {
            do {
              if (bVar9) {
                element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar7, uVar8);
              }
              else {
                element_1f84 = nullptr;
              }
              if ((element_1f84 == nullptr) || (element_1f84->field_0000 != '\0')) break;
              element_1f84->field_004A = (byte)param_3;
              pSVar7 = local_c->field_1F84;
              uVar8 = uVar8 + 1;
              bVar9 = uVar8 < pSVar7->count;
            } while ((int)uVar8 < (int)pSVar7->count);
          }
          local_c->SetListCtrls();
          this_00->field_2121 = this_00->field_2121 + 1;
          g_currentExceptionFrame = local_54.previous;
          return;
        }
        if (param_3 != 0xff) {
          bVar10 = element_1f84->state;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar10));
          if ((bVar10 != 0xff) && (param_3 != bVar10)) {
            if (element_1f84->field_0004 == '\x04') {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              _local_10 = CONCAT31(uStack_f,bVar10);
              if ((byte)param_3 == bVar10) {
                uVar4 = 0;
                uVar8 = (uint)bVar10;
              }
              else {
                uVar5 = param_3 & 0xff;
                bVar1 = g_playerRelationMatrix[uVar5][bVar10];
                uVar8 = local_8;
                if ((bVar1 == 0) && (g_playerRelationMatrix[bVar10][uVar5] == 0)) {
                  uVar4 = 0xfffffffe;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[bVar10][uVar5] == 0)) {
                  uVar4 = 0xffffffff;
                }
                else if ((bVar1 == 0) && (g_playerRelationMatrix[bVar10][uVar5] == 1)) {
                  uVar4 = 1;
                }
                else if ((bVar1 == 1) && (g_playerRelationMatrix[bVar10][uVar5] == 1)) {
                  uVar4 = 2;
                }
                else {
                  uVar4 = 0;
                }
              }
              bVar10 = (byte)uVar8;
              switch(uVar4) {
              case 1:
                st::fn_00401212(&DAT_00807620,bVar10,(byte)param_3,'\0');
                break;
              case 2:
                st::fn_00401212(&DAT_00807620,(byte)param_3,bVar10,'\0');
                break;
              case 0xfffffffe:
                st::fn_00401212(&DAT_00807620,(byte)param_3,bVar10,'\x01');
                break;
              case 0xffffffff:
                st::fn_00401212(&DAT_00807620,bVar10,(byte)param_3,'\x01');
              }
            }
            else {
              st::fn_004033A0(&DAT_00807620,(byte)param_3,bVar10);
            }
            this_00->SetListCtrls();
            DAT_00808aab = DAT_00808aab + 1;
          }
        }
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar6 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x5df,0,errorCode,
                               "%s","SettMapMTy::ChangePlayerTeam");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x5df);
  }
  return;
}

// 005D0ED0 SettMapMTy::ChangePlayerList
#line 4 "decomp/ST.exe/functions/005D0ED0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerList

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_005D0ED0
          (SettMapMTy *this,int param_1,uint param_2,int param_3,char param_4,char *param_5)

{
  char cVar1;
  SettMapMTy_field_1F84DArray *pSVar2;
  SettMapMTy *pSVar4;
  int errorCode;
  int iVar5;
  uint uVar6;
  SettMapMTy_field_1F84Element *element_1f84;
  char *pcVar9;
  char *pcVar10;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != nullptr) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    pSVar4 = local_8;
    if (errorCode == 0) {
      pSVar2 = local_8->field_1F84;
      if (param_2 < pSVar2->count) {
        element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar2, param_2);
      }
      else {
        element_1f84 = nullptr;
      }
      if (element_1f84 != nullptr) {
        if ((param_3 == 2) || (param_3 == 3)) {
          st::fn_0040495D(local_8,param_1);
        }
        pSVar2 = pSVar4->field_1F84;
        if (param_2 < pSVar2->count) {
          element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar2, param_2);
        }
        else {
          element_1f84 = nullptr;
        }
        element_1f84->field_0004 = (char)param_3;
        element_1f84->field_0005 = param_4;
        if ((param_3 != 2) && (param_3 != 3)) {
          param_1 = 0;
        }
        element_1f84->element = param_1;
        if (param_5 == nullptr) {
          param_5 = &DAT_008016a0;
        }
        uVar6 = 0xffffffff;
        do {
          pcVar9 = param_5;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar9 = param_5 + 1;
          cVar1 = *param_5;
          param_5 = pcVar9;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        pcVar9 = pcVar9 + -uVar6;
        pcVar10 = element_1f84 + 10;
        memmove(pcVar10, pcVar9, uVar6); /* compiler REP MOVS byte copy */
        if (element_1f84->field_0004 == '\0') {
          if (element_1f84->state != 0xff) {
            st::fn_00403F67(&DAT_00807620,element_1f84->state);
          }
          element_1f84->state = -1;
        }
        pSVar4 = local_8;
        if (element_1f84->state == -1) {
          element_1f84->field_004F = '\0';
        }
        else {
          element_1f84->field_004F = '\x01';
        }
        if ((element_1f84->field_0000 != '\0') && (element_1f84->field_0004 != '\x02')) {
          element_1f84->field_0001 = '\x01';
        }
        st::fn_004035C6(local_8);
        if ((pSVar4->field_1E26 != CASE_C) && (pSVar4->field_1E26 != CASE_10)) {
          st::fn_00405B7D(pSVar4);
        }
        pSVar4->SetListCtrls();
        st::fn_00402A9A((SettMapTy *)pSVar4);
        pSVar4->field_2121 = pSVar4->field_2121 + 1;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x605,0,errorCode,
                               "%s","SettMapMTy::ChangePlayerList");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x605);
  }
  return;
}

// 005D1100 SettMapMTy::AddPlayerList
#line 4 "decomp/ST.exe/functions/005D1100/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::AddPlayerList */

void __thiscall
st::fn_005D1100(SettMapMTy *this,int param_1,uint param_2,int param_3,char *param_4)

{
  byte bVar1;
  SettMapMTy_field_1F84DArray *pSVar2;
  uint uVar3;
  bool bVar5;
  SettMapMTy *this_00;
  int errorCode;
  SettMapMTy_field_1F84Element *element_1f84;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if (this->field_1F84 != nullptr) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (errorCode == 0) {
      pSVar2 = local_8->field_1F84;
      if (param_2 < pSVar2->count) {
        element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar2, param_2);
      }
      else {
        element_1f84 = nullptr;
      }
      if (element_1f84 != nullptr) {
        bVar1 = element_1f84->field_0x4;
        if (bVar1 == 1) {
          if (param_3 != 2) goto LAB_005d11ad;
          param_3 = 2;
        }
        else {
          if ((bVar1 < 2) || (3 < bVar1)) goto LAB_005d11ad;
          param_2 = param_2 + 1;
          st::fn_004017D0(local_8,element_1f84,param_2);
        }
        st::fn_00401BDB(this_00,param_1,param_2,param_3,'\0',param_4);
      }
LAB_005d11ad:
      if ((DAT_0080877e != '\0') && (this_00->field_1E26 == CASE_C)) {
        pSVar2 = this_00->field_1F84;
        uVar9 = 0;
        bVar5 = true;
        uVar3 = pSVar2->count;
        if (uVar3 != 0) {
          if (uVar3 == 0) {
            pcVar7 = nullptr;
            goto LAB_005d11ee;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar7 = &pSVar2->data->field_0000 + pSVar2->elementSize * uVar9;
LAB_005d11ee:
            if ((((pcVar7 != nullptr) && (DAT_0080874d == pcVar7[2])) &&
                (DAT_0080874e == pcVar7[3])) && (*(int *)(pcVar7 + 6) == DAT_0080877f)) {
              bVar5 = false;
              break;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar3);
        }
        if ((bVar5) && (uVar9 = 0, uVar3 != 0)) {
          if (uVar3 == 0) {
            pcVar7 = nullptr;
            goto LAB_005d1245;
          }
          while( true ) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar7 = &pSVar2->data->field_0000 + pSVar2->elementSize * uVar9;
LAB_005d1245:
            if (((pcVar7 != nullptr) && (DAT_0080874d == pcVar7[2])) &&
               (DAT_0080874e == pcVar7[3])) break;
            uVar9 = uVar9 + 1;
            if (uVar3 <= uVar9) {
              g_currentExceptionFrame = local_4c.previous;
              return;
            }
          }
          pcVar7 = &DAT_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar7 = (char *)&DAT_00807ddd;
          }
          st::fn_004013A7(local_8,DAT_0080877f,uVar9,(DAT_0080874f != '\0') + 2,pcVar7);
        }
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar8 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x62f,0,errorCode,
                               "%s","SettMapMTy::AddPlayerList");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x62f);
  }
  return;
}

// 005D1400 SettMapMTy::GetMessage
#line 4 "decomp/ST.exe/functions/005D1400/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::GetMessage

   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapMTy_field_1E26State. Cases:
   CASE_4=4;CASE_5=5;CASE_7=7;CASE_C=12;CASE_F=15;CASE_10=16;CASE_13=19

   [STSwitchEnumApplier] Switch target field_1E26 uses
   /SubmarineTitans/Recovered/Enums/SettMapTy_field_1E26State. Cases:
   CASE_4=4;CASE_5=5;CASE_7=7;CASE_C=12;CASE_13=19

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0040137A|005D1400; family_names=SettMapMTy::GetMessage; ret4=2;
   direct_offsets={10:4,14:18,18:10,1c:25} */

int __thiscall st::fn_005D1400(SettMapMTy *this,STMessage *message)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  SettMapMTy_field_1E26State SVar4;
  STMessageId SVar6;
  SettMapMTy_field_1E2FDArray *pSVar7;
  MMsgTy *pMVar8;
  StartSystemTy *pSVar9;
  dword dVar10;
  ccFntTy *pcVar11;
  int *piVar12;
  CursorClassTy *pCVar14;
  SettMapMTy *this_00;
  DWORD DVar15;
  int iVar16;
  uint *puVar18;
  SettMapMTy_field_1E2FElement *element_1e2f;
  SettMapMTy_field_1E2FElement *element_1e2f_2;
  byte *pbVar19;
  DArrayTy *pDVar20;
  SettMapMTy_field_1F84DArray *pSVar21;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  AnonNested_005D1400_0050_DA378AC5 *pAVar22;
  byte bVar23;
  undefined1 *puVar24;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar25;
  AnonShape_005D1400_5A9F7B11 *pAVar26;
  uint uVar27;
  char *pcVar28;
  SettMapMTy_field_1F84Element *element_1f84;
  SettMapMTy_field_1F84Element *element_1f84_2;
  uint uVar29;
  BulkInitializedRecord_008087C7 *pBVar30;
  uint uVar31;
  uint puVar17;
  AnonShape_005D1400_891386BF *pAVar32;
  SettMapMTy_field_1F84Element *element_1f84_3;
  char *pcVar33;
  SettMapMTy_field_1F84Element *element_1f84_4;
  byte *puVar34;
  char *pcVar35;
  AnonShape_005CBBE0_2D1CAA09 *pAVar36;
  bool bVar37;
  bool bVar38;
  int iVar39;
  undefined4 uVar40;
  int iVar41;
  uint *puVar42;
  char local_640 [1044];
  char local_22c [64];
  int local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  char local_190 [64];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  InternalExceptionFrame local_f4;
  undefined4 local_b0 [8];
  undefined4 local_90 [4];
  undefined4 local_80;
  undefined1 uStack_7d;
  undefined4 local_7c;
  undefined1 local_70 [11];
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined4 local_62;
  int local_5a;
  undefined4 local_56;
  SettMapMTy *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  AnonShape_005D1400_5A9F7B11 *local_18;
  byte local_11;
  char *local_10;
  AnonShape_005D1400_891386BF *local_c;
  char local_5;
  uint SVar5;
  uint temp_5fb3942e6a;

  local_48 = this;
  DVar15 = st::fn_006E51B0(this->field_0010);
  uVar29 = 0;
  this->field_0061 = DVar15;
  local_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_f4;
  iVar16 = st::fn_0072D7F0(local_f4.jumpBuffer,0);
  this_00 = local_48;
  if (iVar16 != 0) {
    g_currentExceptionFrame = local_f4.previous;
    iVar39 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x986,0,iVar16,
                                "%s","SettMapMTy::GetMessage");
    if (iVar39 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar16,0,"E:\\__titans\\Start\\settmobj.cpp",0x986);
    return 0xffff;
  }
  st::fn_0040327E((SettMapTy *)local_48,message);
  st::fn_00402937(g_startSystem_0081176C,message);
  pCVar14 = g_cursorClass_00802A30;
  SVar6 = message->id;
  if (SVar6 < MESS_SETTMAPSTY_6505) {
    if (SVar6 == MESS_SHARED_6504) {
      uVar29 = (message->arg0).u32;
      if ((uVar29 != 0xffffffff) && (this_00->field_1F84 != nullptr)) {
        pSVar7 = this_00->field_1E2F;
        if (uVar29 < pSVar7->count) {
          element_1e2f = DArrayAt<SettMapMTy_field_1E2FElement>(pSVar7, uVar29);
        }
        else {
          element_1e2f = nullptr;
        }
        bVar23 = *(byte *)(element_1e2f + 0x41);
        local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar23));
        if (DAT_0080877e == '\0') {
          st::fn_00402D4C(this_00,message->arg1,2,(uint)bVar23,0);
        }
        else {
          st::fn_004041A6(this_00,(message->arg1).u32,bVar23);
          st::fn_00403AD5(this_00,0);
        }
      }
    }
    else if (SVar6 < MESS_SHARED_6341) {
      if (SVar6 == MESS_SETTMAPMTY_6340) {
        st::fn_004031D4
                  ((MMMObjTy *)this_00,
                   (RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1A5B->field_055C,
                   (int)message,0);
      }
      else if (SVar6 < MESS_CHOOSEMAPTY_6327) {
        if (SVar6 == MESS_SHARED_6326) {
          this_00->field_2208 = '\x02' - *(char *)(message->arg0).ptr;
        }
        else if (SVar6 == MESS_ID_CREATE) {
          this_00->field_2209 = this_00->field_0061;
        }
        else if (SVar6 == MESS_SHARED_0003) {
          if (this_00->field_2226 != nullptr) {
            st::fn_006AB060(&this_00->field_2226);
            this_00->field_222A = 0;
          }
          if (this_00->field_222F != nullptr) {
            st::fn_006AE110(this_00->field_222F);
          }
          this_00->field_222F = nullptr;
          if ((this_00->field_004D != 0x60ff) && (g_int_00811764 != nullptr)) {
            if (DAT_0080877e == '\0') {
              st::fn_00715360(g_int_00811764,0,'\x11',nullptr,0,0,0xffffffff);
              if (this_00->field_004D != 0x6109) {
                st::fn_00404B83();
              }
            }
            else if (this_00->field_004D == 0x611f) {
              st::fn_00715360(g_int_00811764,0,'\x12',nullptr,0,0,0xffffffff);
            }
            else {
              st::fn_00715360(g_int_00811764,0,'\x10',nullptr,0,0,0xffffffff);
              st::fn_00404B83();
            }
          }
        }
      }
      else if (SVar6 == MESS_CHOOSEMAPTY_6327) {
        piVar12 = (message->arg0).ptr;
        st::fn_00405155(this_00,(RecoveredSourceFamily_dibcopy *)this_00->field_2204,piVar12);
        iVar16 = *piVar12;
        local_10 = (char *)piVar12[5];
        st::fn_00710A90(g_startSystem_0081176C->field_0034,(int)this_00->field_2204,0,
                         (iVar16 + -1) * (int)local_10,0,(int)local_10,
                         this_00->field_2204->field_0008 -
                         ((-(uint)(piVar12[1] != 1) & 0xfffffffd) + 3));
        uVar29 = 2;
        iVar41 = -1;
        iVar39 = -1;
        puVar18 = (uint *)st::fn_006B0140((iVar16 != 1) + 0x2422,g_hINSTANCE_00807618);
        st::fn_007119C0(g_startSystem_0081176C->field_0034,puVar18,iVar39,iVar41,uVar29);
        st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_2200);
      }
    }
    else if (SVar6 < MESS_PRIVIDERTY_6502) {
      if (SVar6 == MESS_SHARED_6501) {
        uVar29 = (message->arg0).u32;
        if ((uVar29 != 0xffffffff) && (this_00->field_1F84 != nullptr)) {
          pSVar7 = this_00->field_1E2F;
          if (uVar29 < pSVar7->count) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            puVar18 = (uint *)((int)&pSVar7->data->field_0000 + pSVar7->elementSize * uVar29);
          }
          else {
            puVar18 = nullptr;
          }
          bVar23 = *(byte *)(puVar18 + 0x41);
          local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar23));
          if (DAT_0080877e == '\0') {
            st::fn_00402D4C(this_00,message->arg1,5,1,(uint)bVar23);
          }
          else {
            st::fn_00402068(this_00,(message->arg1).u32,1,(uint)bVar23);
            st::fn_00403AD5(this_00,0);
          }
        }
      }
      else if (SVar6 == MESS_SHARED_6341) {
        st::fn_004031D4
                  ((MMMObjTy *)this_00,
                   (RecoveredRecord_MMMObjTy_005B6560 *)&this_00->field_1A5B->field_05ED,
                   (int)message,0);
      }
      else if ((SVar6 == MESS_SHARED_64FF) && (DAT_0080877e != '\0')) {
        st::fn_00715360(g_int_00811764,0,' ',(char *)&this_00->field_1F53,0xd,1,0xffffffff);
      }
    }
    else if (((SVar6 == MESS_PRIVIDERTY_6502) &&
             (uVar29 = (message->arg0).u32, uVar29 != 0xffffffff)) &&
            (this_00->field_1F84 != nullptr)) {
      pSVar7 = this_00->field_1E2F;
      if (uVar29 < pSVar7->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        puVar18 = (uint *)((int)&pSVar7->data->field_0000 + pSVar7->elementSize * uVar29);
      }
      else {
        puVar18 = nullptr;
      }
      bVar23 = *(byte *)(puVar18 + 0x41);
      local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar23));
      if (DAT_0080877e == '\0') {
        st::fn_00402D4C(this_00,message->arg1,1,(uint)bVar23,0);
      }
      else {
        st::fn_00405B46(this_00,(message->arg1).u32,bVar23);
        st::fn_00403AD5(this_00,0);
      }
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (MESS_SETTMAPMTY_654B < SVar6) {
    if (SVar6 < 0x694b) {
      if (SVar6 == MESS_FSGSTY_694A) {
        pSVar21 = this_00->field_1F84;
        local_34 = 0x1010101;
        bVar38 = false;
        local_30 = (undefined1 *)0x1010101;
        local_5 = '\0';
        local_11 = 0;
        if (pSVar21 != nullptr) {
          if (DAT_0080877e == '\0') {
LAB_005d1b5a:
            if (g_cursorClass_00802A30 != nullptr) {
              iVar16 = g_cursorClass_00802A30->field_00C9;
              iVar39 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_5;
              pCVar14->field_0494 = 0xffff;
              st::fn_0040507E(pCVar14,CASE_0,iVar39,iVar16);
              st::fn_0040241E(pCVar14,pCVar14->field_00C5,pCVar14->field_00C9);
              pCVar14->field_00D2 = 0;
              pCVar14->field_04DF = -1;
            }
            DAT_008087c6 = '\0';
            DAT_0080874f = 0;
            pBVar30 = g_bulkInitializedRecords_008087C7;
            for (iVar16 = 0xa2; iVar16 != 0; iVar16 = iVar16 + -1) {
              *(undefined4 *)pBVar30 = 0;
              pBVar30 = (BulkInitializedRecord_008087C7 *)&pBVar30->field_0x4;
            }
            pbVar19 = &g_bulkInitializedRecords_008087C7[0].field_0022;
            do {
              pbVar19[-1] = 0;
              *pbVar19 = 0xff;
              pbVar19 = pbVar19 + 0x51;
            } while ((int)pbVar19 < 0x808a71);
            pSVar21 = this_00->field_1F84;
            uVar31 = 0;
            uVar29 = pSVar21->count;
            if (0 < (int)uVar29) {
              bVar38 = uVar29 != 0;
              do {
                if (bVar38) {
                  element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar21, uVar31);
                }
                else {
                  element_1f84 = nullptr;
                }
                if (((element_1f84 != nullptr) && (element_1f84->field_0000 != '\0')) && (element_1f84->state != 0xff)) {
                  *(undefined1 *)((int)&local_34 + (uint)(byte)element_1f84->state) = 0;
                }
                uVar31 = uVar31 + 1;
                bVar38 = uVar31 < uVar29;
              } while ((int)uVar31 < (int)uVar29);
            }
            local_18 = nullptr;
            if (0 < (int)uVar29) {
              bVar38 = uVar29 != 0;
              do {
                if (bVar38) {
                  element_1f84 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar21, (int)local_18);
                }
                else {
                  element_1f84 = nullptr;
                }
                if (((element_1f84 != nullptr) && (element_1f84->field_0004 != '\0')) &&
                   ((element_1f84->field_0004 != '\x01' ||
                    ((this_00->field_1E26 == CASE_5 || (this_00->field_1E26 == CASE_F)))))) {
                  pDVar20 = element_1f84->handle;
                  if ((uint)(byte)element_1f84->field_0005 < pDVar20->count) {
                    local_c = DArrayAt<AnonShape_005D1400_891386BF>(pDVar20, (uint)(byte)element_1f84->field_0005);
                  }
                  else {
                    local_c = nullptr;
                  }
                  DAT_008087c6 = DAT_008087c6 + '\x01';
                  if (element_1f84->state == -1) {
                    iVar16 = 0;
                    do {
                      if (*(char *)((int)&local_34 + iVar16) != '\0') {
                        element_1f84->state = (char)iVar16;
                        *(undefined1 *)((int)&local_34 + iVar16) = 0;
                        break;
                      }
                      iVar16 = iVar16 + 1;
                    } while (iVar16 < 8);
                  }
                  g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0022 = element_1f84->state;
                  puVar17 = (uint)&local_18->field_0x1;
                  g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0021 = element_1f84->field_0003;
                  pSVar21 = this_00->field_1F84;
                  bVar38 = puVar17 < pSVar21->count;
                  if ((int)puVar17 < (int)pSVar21->count) {
                    do {
                      if (bVar38) {
                        element_1f84_4 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar21, puVar17);
                      }
                      else {
                        element_1f84_4 = nullptr;
                      }
                      if (element_1f84_4 != nullptr) {
                        if (element_1f84_4->field_0000 != '\0') break;
                        element_1f84_4->state = element_1f84->state;
                      }
                      pSVar21 = this_00->field_1F84;
                      puVar17 = puVar17 + 1;
                      bVar38 = puVar17 < pSVar21->count;
                    } while ((int)puVar17 < (int)pSVar21->count);
                  }
                  uVar29 = 0xffffffff;
                  pcVar33 = &DAT_008016a0;
                  do {
                    pcVar35 = pcVar33;
                    if (uVar29 == 0) break;
                    uVar29 = uVar29 - 1;
                    pcVar35 = pcVar33 + 1;
                    cVar2 = *pcVar33;
                    pcVar33 = pcVar35;
                  } while (cVar2 != '\0');
                  uVar29 = ~uVar29;
                  local_10 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                  pcVar33 = pcVar35 + -uVar29;
                  pcVar35 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                  memmove(pcVar35, pcVar33, uVar29); /* compiler REP MOVS byte copy */
                  uVar31 = 0;
                  cVar2 = element_1f84->field_0004;
                  if (cVar2 == '\x02') {
                    if (element_1f84->field_0000 != '\0') {
                      *(undefined1 *)(g_bulkInitializedRecords_008087C7 + (byte)element_1f84->state) = 0;
                    }
                    if (DAT_0080877f == element_1f84->element) {
                      DAT_0080874d = element_1f84->state;
                      DAT_0080874e = element_1f84->field_0003;
                    }
                  }
                  else if (cVar2 == '\x03') {
                    if (DAT_0080877f == element_1f84->element) {
                      DAT_0080874d = element_1f84->state;
                      DAT_0080874e = element_1f84->field_0003;
                      DAT_0080874f = 1;
                    }
                  }
                  else if (cVar2 == '\x04') {
                    *(undefined1 *)(g_bulkInitializedRecords_008087C7 + (byte)element_1f84->state) = 1;
                    if (local_c == nullptr) {
                      uVar29 = 0xffffffff;
                      pcVar33 = &DAT_008016a0;
                      do {
                        pcVar35 = pcVar33;
                        if (uVar29 == 0) break;
                        uVar29 = uVar29 - 1;
                        pcVar35 = pcVar33 + 1;
                        cVar2 = *pcVar33;
                        pcVar33 = pcVar35;
                      } while (cVar2 != '\0');
                      uVar29 = ~uVar29;
                      local_10 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                      pcVar33 = pcVar35 + -uVar29;
                      pcVar35 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                      memmove(pcVar35, pcVar33, uVar29); /* compiler REP MOVS byte copy */
                      uVar31 = 0;
                    }
                    else {
                      uVar29 = 0xffffffff;
                      pcVar33 = &local_c->field_0x4c;
                      do {
                        pcVar35 = pcVar33;
                        if (uVar29 == 0) break;
                        uVar29 = uVar29 - 1;
                        pcVar35 = pcVar33 + 1;
                        cVar2 = *pcVar33;
                        pcVar33 = pcVar35;
                      } while (cVar2 != '\0');
                      uVar29 = ~uVar29;
                      local_10 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                      pcVar33 = pcVar35 + -uVar29;
                      pcVar35 = &g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0x1;
                      memmove(pcVar35, pcVar33, uVar29); /* compiler REP MOVS byte copy */
                      uVar31 = 0;
                    }
                  }
                  g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0023 = element_1f84->field_004A;
                  g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0024 =
                       element_1f84->field_0054;
                  g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_0028 =
                       element_1f84->field_0058;
                  g_bulkInitializedRecords_008087C7[(byte)element_1f84->state].field_002C =
                       element_1f84->field_005C;
                }
                pSVar21 = this_00->field_1F84;
                local_18 = (AnonShape_005D1400_5A9F7B11 *)&local_18->field_0x1;
                bVar38 = local_18 < (undefined1 *)pSVar21->count;
              } while ((int)local_18 < (int)pSVar21->count);
            }
            st::fn_0040591B((STAppC *)&DAT_00807620);
            pCVar14 = g_cursorClass_00802A30;
            if ((this_00->field_1E26 == CASE_7) || (this_00->field_1E26 == 0xe)) {
              if ((this_00->field_1F47 != 0) || ((message->arg0).u32 != 0)) {
                uVar29 = 0xffffffff;
                pcVar28 = &DAT_00853de4;
                do {
                  pcVar33 = pcVar28;
                  if (uVar29 == 0) break;
                  uVar29 = uVar29 - 1;
                  pcVar33 = pcVar28 + 1;
                  cVar2 = *pcVar28;
                  pcVar28 = pcVar33;
                } while (cVar2 != '\0');
                uVar29 = ~uVar29;
                pcVar28 = pcVar33 + -uVar29;
                pcVar33 = &DAT_0080ed16;
                memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
                uVar31 = 0;
                goto LAB_005d2018;
              }
              if ((DAT_0080877e != '\0') && (this_00->field_1A5B->field_02E6 != nullptr)) {
                if (g_cursorClass_00802A30 != nullptr) {
                  iVar16 = g_cursorClass_00802A30->field_00C9;
                  iVar39 = g_cursorClass_00802A30->field_00C5;
                  g_cursorClass_00802A30->field_0493 = CASE_1;
                  pCVar14->field_0494 = 0xffff;
                  st::fn_0040507E(pCVar14,CASE_0,iVar39,iVar16);
                  st::fn_0040241E(pCVar14,pCVar14->field_00C5,pCVar14->field_00C9);
                  pCVar14->field_00D2 = 0;
                  pCVar14->field_04DF = -1;
                }
                pSVar9 = this_00->field_1A5B;
                memset(local_90, 0, 0x20); /* compiler bulk-zero initialization */
                iVar16 = 0;
                memset(local_b0, 0, 0x20); /* compiler bulk-zero initialization */
                local_b0[2] = this_00->field_0008;
                local_90[3] = 2;
                local_b0[3] = 2;
                local_80 = 0x694a;
                local_7c = 1;
                local_b0[4] = 0x693f;
                local_90[2] = local_b0[2];
                iVar16 = st::fn_00403FA8(pSVar9->field_02E6,0x251f,'\x01',local_90,local_b0,
                                            nullptr,0,0);
                if (iVar16 != 0) {
                  this_00->vfunc_24();
                }
              }
            }
            else {
LAB_005d2018:
              uVar29 = 0xffffffff;
              local_5 = '\x01';
              pcVar28 = &DAT_0080ed16;
              do {
                pcVar33 = pcVar28;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar33 = pcVar28 + 1;
                cVar2 = *pcVar28;
                pcVar28 = pcVar33;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              pcVar28 = pcVar33 + -uVar29;
              pcVar33 = (char *)&DAT_0080ee1a;
              memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
              uVar29 = 0xffffffff;
              pcVar28 = &DAT_00807680;
              do {
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                cVar2 = *pcVar28;
                pcVar28 = pcVar28 + 1;
              } while (cVar2 != '\0');
              uVar31 = 0xffffffff;
              pcVar28 = (char *)((int)&DAT_0080ed12 + ~uVar29 + 3);
              do {
                pcVar33 = pcVar28;
                if (uVar31 == 0) break;
                uVar31 = uVar31 - 1;
                pcVar33 = pcVar28 + 1;
                cVar2 = *pcVar28;
                pcVar28 = pcVar33;
              } while (cVar2 != '\0');
              uVar31 = ~uVar31;
              pcVar28 = pcVar33 + -uVar31;
              pcVar33 = &DAT_0080ef1e;
              memmove(pcVar33, pcVar28, uVar31); /* compiler REP MOVS byte copy */
              uVar31 = 0;
            }
            if (local_5 != '\0') {
              DAT_008087a0 = this_00->field_1E26;
              DAT_0080879c = 0;
              if (DAT_0080877e == '\0') {
                memset(&DAT_00808ab0, 0, 0xea0); /* compiler bulk-zero initialization */
                iVar16 = 0;
                DAT_00808aaf = 0;
                pSVar21 = this_00->field_1F84;
                local_18 = nullptr;
                if (0 < (int)pSVar21->count) {
                  bVar38 = pSVar21->count != 0;
                  do {
                    if (bVar38) {
                      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                      pcVar28 = &pSVar21->data->field_0000 + pSVar21->elementSize * (int)local_18;
                    }
                    else {
                      pcVar28 = nullptr;
                    }
                    if (pcVar28 != nullptr) {
                      cVar2 = pcVar28[4];
                      local_5 = cVar2;
                      if ((cVar2 != '\x01') && (cVar2 != '\0')) {
                        if (cVar2 == '\x04') {
                          pDVar20 = *(DArrayTy **)(pcVar28 + 0x50);
                          if ((uint)(byte)pcVar28[5] < pDVar20->count) {
                            pcVar33 = DArrayAt<char>(pDVar20, (uint)(byte)pcVar28[5]);
                          }
                          else {
                            pcVar33 = nullptr;
                          }
                          if (pcVar33 != nullptr) {
                            uVar29 = 0xffffffff;
                            do {
                              pcVar35 = pcVar33;
                              if (uVar29 == 0) break;
                              uVar29 = uVar29 - 1;
                              pcVar35 = pcVar33 + 1;
                              cVar1 = *pcVar33;
                              pcVar33 = pcVar35;
                            } while (cVar1 != '\0');
                            uVar29 = ~uVar29;
                            pcVar35 = pcVar35 + -uVar29;
                            local_10 = local_22c;
                            goto LAB_005d24b8;
                          }
                        }
                        else {
                          uVar29 = 0xffffffff;
                          pcVar33 = pcVar28 + 10;
                          do {
                            pcVar35 = pcVar33;
                            if (uVar29 == 0) break;
                            uVar29 = uVar29 - 1;
                            pcVar35 = pcVar33 + 1;
                            cVar1 = *pcVar33;
                            pcVar33 = pcVar35;
                          } while (cVar1 != '\0');
                          uVar29 = ~uVar29;
                          pcVar35 = pcVar35 + -uVar29;
                          local_10 = local_22c;
LAB_005d24b8:
                          pcVar33 = local_22c;
                          for (uVar31 = uVar29 >> 2; uVar31 != 0; uVar31 = uVar31 - 1) {
                            *(undefined4 *)pcVar33 = *(undefined4 *)pcVar35;
                            pcVar35 = pcVar35 + 4;
                            pcVar33 = pcVar33 + 4;
                          }
                          for (uVar29 = uVar29 & 3; local_10 = local_22c, uVar29 != 0;
                              uVar29 = uVar29 - 1) {
                            *pcVar33 = *pcVar35;
                            pcVar35 = pcVar35 + 1;
                            pcVar33 = pcVar33 + 1;
                          }
                        }
                        local_1ec = *(int *)(pcVar28 + 6);
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        STPiece<0,2>(local_1e8) = CONCAT11(*pcVar28,pcVar28[2]);
                        local_1e4 = this_00->field_0061;
                        if (cVar2 == '\x02') {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_1e8 = CONCAT13(1,CONCAT12(1,(undefined2)local_1e8));
                        }
                        else {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_1e8 = CONCAT13(1,CONCAT12((cVar2 != '\x03') + -1,
                                                          (undefined2)local_1e8)) & 0xff02ffff;
                        }
                        pcVar28 = local_22c;
                        puVar34 = (byte *)(&DAT_00808ab0 + (uint)DAT_00808aaf * 0x27);
                        memmove(puVar34, pcVar28, 0x9c); /* compiler REP MOVS byte copy */
                        if ((byte)local_1e8 < 8) {
                          iVar39 = 0;
                          iVar16 = (local_1e8 & 0xff) * 0x51;
                          do {
                            if (*(char *)(iVar16 + 0x808800 + iVar39) == '\0') {
                              *(byte *)(iVar16 + 0x808800 + iVar39) = DAT_00808aaf;
                              break;
                            }
                            iVar39 = iVar39 + 1;
                          } while (iVar39 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    pSVar21 = this_00->field_1F84;
                    local_18 = (AnonShape_005D1400_5A9F7B11 *)&local_18->field_0x1;
                    bVar38 = local_18 < (undefined1 *)pSVar21->count;
                  } while ((int)local_18 < (int)pSVar21->count);
                }
                st::fn_0040471E(this_00);
                st::fn_006B6500(g_int_00811764,1);
                st::fn_00715360(g_int_00811764,1,'.',nullptr,0,0,0xffffffff);
                st::fn_006B6500(g_int_00811764,DAT_0080733c);
              }
              else {
                st::fn_006B6500(g_int_00811764,1);
                memset((void *)local_70, 0, 0x26); /* compiler bulk-zero initialization */
                iVar16 = 0;
                local_64 = DAT_0080733b;
                STPiece<3,4>(local_70) = DAT_008087be;
                STPiece<0,2>(local_70) = (undefined2)((uint)DAT_00807dd5 >> 0x10);
                local_63 = DAT_00807361;
                local_62 = DAT_00808754;
                local_56 = this_00->field_2121;
                local_70[2] = 2;
                local_5a = DAT_00808aab;
                switch(this_00->field_1E26) {
                case CASE_4:
                  local_65 = 2;
                  break;
                case CASE_5:
                  local_65 = 3;
                  break;
                case CASE_7:
                  local_65 = 1;
                  break;
                case CASE_C:
                  local_65 = 5;
                  break;
                case CASE_13:
                  if ((0x13 < DAT_00803400) && (DAT_00803400 < 0x16)) {
                    local_65 = 4;
                  }
                }
                st::fn_00715360(g_int_00811764,0,'-',local_70,0x26,1,0xffffffff);
                st::fn_006B6500(g_int_00811764,DAT_0080733c);
                this_00->field_2233 = this_00->field_0061;
                this_00->field_222E = 1;
                pDVar20 = st::fn_006AE290(nullptr,0x28,4,10);
                this_00->field_222F = pDVar20;
                if (g_array_0080C4FE != nullptr) {
                  st::fn_006AE110(g_array_0080C4FE);
                }
                g_array_0080C4FE = st::fn_006AE290(nullptr,0x28,4,10);
                memset(&DAT_00808ab0, 0, 0xea0); /* compiler bulk-zero initialization */
                DAT_00808aaf = 0;
                pSVar21 = this_00->field_1F84;
                local_18 = nullptr;
                if (0 < (int)pSVar21->count) {
                  bVar38 = pSVar21->count != 0;
                  do {
                    if (bVar38) {
                      element_1f84_3 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar21, (int)local_18);
                    }
                    else {
                      element_1f84_3 = nullptr;
                    }
                    local_c = element_1f84_3;
                    if (element_1f84_3 != nullptr) {
                      if (((element_1f84_3->field_0x4 == '\x02') || (element_1f84_3->field_0x4 == '\x03')) &&
                         (DAT_0080877f != element_1f84_3->field_0006)) {
                        st::fn_006AE1C0(this_00->field_222F,&element_1f84_3->field_0006);
                        st::fn_006AE1C0(g_array_0080C4FE,&element_1f84_3->field_0006);
                      }
                      cVar2 = element_1f84_3->field_0x4;
                      local_5 = cVar2;
                      if ((cVar2 != '\x01') && (cVar2 != '\0')) {
                        uVar29 = 0xffffffff;
                        local_10 = local_190;
                        pcVar28 = &local_c->field_0xa;
                        do {
                          pcVar33 = pcVar28;
                          if (uVar29 == 0) break;
                          uVar29 = uVar29 - 1;
                          pcVar33 = pcVar28 + 1;
                          cVar1 = *pcVar28;
                          pcVar28 = pcVar33;
                        } while (cVar1 != '\0');
                        uVar29 = ~uVar29;
                        pcVar28 = pcVar33 + -uVar29;
                        pcVar33 = local_190;
                        memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
                        uVar31 = 0;
                        if (cVar2 == '\x04') {
                          iVar16 = local_c->field_0050;
                          if ((uint)(byte)local_c->field_0x5 < *(uint *)(iVar16 + 0xc)) {
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            pcVar28 = (char *)(*(int *)(iVar16 + 8) * (uint)(byte)local_c->field_0x5
                                              + *(int *)(iVar16 + 0x1c));
                          }
                          else {
                            pcVar28 = nullptr;
                          }
                          if (pcVar28 != nullptr) {
                            uVar29 = 0xffffffff;
                            do {
                              pcVar33 = pcVar28;
                              if (uVar29 == 0) break;
                              uVar29 = uVar29 - 1;
                              pcVar33 = pcVar28 + 1;
                              cVar1 = *pcVar28;
                              pcVar28 = pcVar33;
                            } while (cVar1 != '\0');
                            uVar29 = ~uVar29;
                            pcVar33 = pcVar33 + -uVar29;
                            local_10 = local_190;
                            goto LAB_005d22dd;
                          }
                        }
                        else {
                          uVar29 = 0xffffffff;
                          pcVar28 = &local_c->field_0xa;
                          do {
                            pcVar33 = pcVar28;
                            if (uVar29 == 0) break;
                            uVar29 = uVar29 - 1;
                            pcVar33 = pcVar28 + 1;
                            cVar1 = *pcVar28;
                            pcVar28 = pcVar33;
                          } while (cVar1 != '\0');
                          uVar29 = ~uVar29;
                          pcVar33 = pcVar33 + -uVar29;
                          local_10 = local_190;
LAB_005d22dd:
                          pcVar28 = local_190;
                          for (uVar31 = uVar29 >> 2; uVar31 != 0; uVar31 = uVar31 - 1) {
                            *(undefined4 *)pcVar28 = *(undefined4 *)pcVar33;
                            pcVar33 = pcVar33 + 4;
                            pcVar28 = pcVar28 + 4;
                          }
                          for (uVar29 = uVar29 & 3; local_10 = local_190, uVar29 != 0;
                              uVar29 = uVar29 - 1) {
                            *pcVar28 = *pcVar33;
                            pcVar33 = pcVar33 + 1;
                            pcVar28 = pcVar28 + 1;
                          }
                        }
                        local_150 = local_c->field_0006;
                        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                        STPiece<0,2>(local_14c) = CONCAT11(*(undefined1 *)local_c,local_c->field_0x2);
                        local_148 = this_00->field_0061;
                        if (cVar2 == '\x02') {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_14c = CONCAT13(1,CONCAT12(1,(undefined2)local_14c));
                        }
                        else {
                          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                          local_14c = CONCAT13(1,CONCAT12((cVar2 != '\x03') + -1,
                                                          (undefined2)local_14c)) & 0xff02ffff;
                        }
                        pcVar28 = local_190;
                        puVar34 = (byte *)(&DAT_00808ab0 + (uint)DAT_00808aaf * 0x27);
                        memmove(puVar34, pcVar28, 0x9c); /* compiler REP MOVS byte copy */
                        if ((byte)local_14c < 8) {
                          iVar39 = 0;
                          iVar16 = (local_14c & 0xff) * 0x51;
                          do {
                            if (*(char *)(iVar16 + 0x808800 + iVar39) == '\0') {
                              *(byte *)(iVar16 + 0x808800 + iVar39) = DAT_00808aaf;
                              break;
                            }
                            iVar39 = iVar39 + 1;
                          } while (iVar39 < 0x18);
                        }
                        DAT_00808aaf = DAT_00808aaf + 1;
                      }
                    }
                    pSVar21 = this_00->field_1F84;
                    local_18 = (AnonShape_005D1400_5A9F7B11 *)&local_18->field_0x1;
                    bVar38 = local_18 < (undefined1 *)pSVar21->count;
                  } while ((int)local_18 < (int)pSVar21->count);
                }
                if (this_00->field_222F->count == 0) {
                  this_00->field_222E = 0;
                  st::fn_0040471E(this_00);
                  if (DAT_008067a0 != '\0') {
                    st::external_0000010A
                              ((CFsgsConnection *)&DAT_00802a90,6,&this_00->field_0x1a5f);
                    st::external_0000010C((CFsgsConnection *)&DAT_00802a90);
                  }
                }
              }
              if ((this_00->field_1E26 == CASE_C) || (this_00->field_1E26 == CASE_10)) {
                DAT_0080879c = 1;
                _DAT_0080f32e = 1;
              }
            }
          }
          else {
            if (0 < (int)pSVar21->count) {
              bVar37 = pSVar21->count != 0;
              do {
                if (bVar37) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                  pcVar28 = &pSVar21->data->field_0000 + pSVar21->elementSize * uVar29;
                }
                else {
                  pcVar28 = nullptr;
                }
                if ((pcVar28 != nullptr) &&
                   (((pcVar28[4] == '\x02' || (pcVar28[4] == '\x03')) && (pcVar28[0x4f] == '\0'))))
                {
                  bVar38 = true;
                  break;
                }
                uVar29 = uVar29 + 1;
                bVar37 = uVar29 < pSVar21->count;
              } while ((int)uVar29 < (int)pSVar21->count);
            }
            if (bVar38) {
              pMVar8 = this_00->field_1A5B->field_02E6;
              if (pMVar8 != nullptr) {
                st::fn_00403FA8(pMVar8,0x2527,'\0',nullptr,nullptr,
                                   nullptr,0,0);
              }
            }
            else {
              uVar29 = 0;
              if (0 < (int)pSVar21->count) {
                bVar38 = pSVar21->count != 0;
                do {
                  if (bVar38) {
                    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                    pcVar28 = &pSVar21->data->field_0000 + pSVar21->elementSize * uVar29;
                  }
                  else {
                    pcVar28 = nullptr;
                  }
                  if ((pcVar28 != nullptr) && (*pcVar28 != '\0')) {
                    cVar2 = pcVar28[4];
                    if (this_00->field_1E26 == CASE_C) {
                      if ((cVar2 == '\0') || (cVar2 == '\x01')) {
                        local_11 = 0;
                        break;
                      }
                    }
                    else if ((cVar2 == '\0') || (cVar2 == '\x01')) goto LAB_005d1b17;
                    local_11 = local_11 + 1;
                  }
LAB_005d1b17:
                  uVar29 = uVar29 + 1;
                  bVar38 = uVar29 < pSVar21->count;
                } while ((int)uVar29 < (int)pSVar21->count);
              }
              if (1 < local_11) goto LAB_005d1b5a;
              pMVar8 = this_00->field_1A5B->field_02E6;
              if (pMVar8 != nullptr) {
                st::fn_00403FA8(pMVar8,0x2528,'\0',nullptr,nullptr,
                                   nullptr,0,0);
              }
            }
          }
        }
      }
      else if (SVar6 == MESS_SETTMAPMTY_654C) {
        if (DAT_0080877e != '\0') {
          st::fn_004035C6(this_00);
          st::fn_00405B7D(this_00);
          this_00->SetListCtrls();
          st::fn_00402A9A((SettMapTy *)this_00);
          goto switchD_005d1877_caseD_6549;
        }
      }
      else if (SVar6 == MESS_SETTMAPTY_654D) goto switchD_005d1877_caseD_6548;
    }
    else if (SVar6 == MESS_SHARED_C0A2) {
      iVar16 = st::fn_004025F4((int)this_00->field_1A5B);
      if (iVar16 == 0) {
        if (DAT_008067a0 != '\0') {
          pDVar20 = this_00->field_1A5B->field_0686;
          if ((int)pDVar20->elementSize < 1) {
            pcVar28 = nullptr;
          }
          else {
            pcVar28 = *(char **)pDVar20->growCapacity;
          }
          bVar38 = st::fn_00401B1D(pcVar28);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if (CONCAT31(extraout_var,bVar38) != 0) {
            pDVar20 = this_00->field_1A5B->field_0686;
            if ((int)pDVar20->elementSize < 1) {
              st::external_00000107((CFsgsConnection *)&DAT_00802a90,nullptr);
            }
            else {
              st::external_00000107
                        ((CFsgsConnection *)&DAT_00802a90,*(char **)pDVar20->growCapacity);
            }
            goto LAB_005d28da;
          }
        }
        memset(&stack0xfffff980, 0, 0x451); /* compiler bulk-zero initialization */
        pcVar28 = &DAT_00807e1d;
        if (DAT_008067a0 == '\0') {
          pcVar28 = (char *)&DAT_00807ddd;
        }
        uVar29 = 0xffffffff;
        do {
          pcVar33 = pcVar28;
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
          pcVar33 = pcVar28 + 1;
          cVar2 = *pcVar28;
          pcVar28 = pcVar33;
        } while (cVar2 != '\0');
        uVar29 = ~uVar29;
        pSVar9 = this_00->field_1A5B;
        pcVar28 = pcVar33 + -uVar29;
        pcVar33 = &stack0xfffff980;
        memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
        uVar31 = 0;
        pDVar20 = pSVar9->field_0686;
        if ((int)pDVar20->elementSize < 1) {
          pcVar28 = nullptr;
        }
        else {
          pcVar28 = *(char **)pDVar20->growCapacity;
        }
        uVar29 = 0xffffffff;
        do {
          pcVar33 = pcVar28;
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
          pcVar33 = pcVar28 + 1;
          cVar2 = *pcVar28;
          pcVar28 = pcVar33;
        } while (cVar2 != '\0');
        uVar29 = ~uVar29;
        pcVar28 = pcVar33 + -uVar29;
        pcVar33 = local_640;
        memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
        local_10 = local_640;
        st::fn_00402BBC(pSVar9,(int)&stack0xfffff980);
        if (this_00->field_2208 == '\0') {
          pSVar21 = this_00->field_1F84;
          if (pSVar21 != nullptr) {
            uVar29 = pSVar21->count;
            uVar31 = 0;
            if (uVar29 != 0) {
              if (uVar29 == 0) {
                pcVar28 = nullptr;
                goto LAB_005d277a;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pcVar28 = &pSVar21->data->field_0000 + pSVar21->elementSize * uVar31;
LAB_005d277a:
                if ((pcVar28 != nullptr) &&
                   (((pcVar28[4] == '\x02' || (pcVar28[4] == '\x03')) &&
                    (*(int *)(pcVar28 + 6) == DAT_0080877f)))) {
                  local_5 = pcVar28[0x4a];
                  break;
                }
                uVar31 = uVar31 + 1;
              } while (uVar31 < uVar29);
            }
            local_c = nullptr;
            if (uVar29 != 0) {
              if (uVar29 == 0) {
                pcVar28 = nullptr;
                goto LAB_005d27c3;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pcVar28 = &pSVar21->data->field_0000 + pSVar21->elementSize * (int)local_c;
LAB_005d27c3:
                if (((pcVar28 != nullptr) && ((pcVar28[4] == '\x02' || (pcVar28[4] == '\x03'))))
                   && (*(int *)(pcVar28 + 6) != DAT_0080877f)) {
                  if (DAT_00808a8f == '\0') {
                    if (((DAT_0080874d != 0xff) && (bVar23 = pcVar28[2], bVar23 != 0xff)) &&
                       (DAT_0080874d != bVar23)) {
                      local_10 = (char *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar23));
                      uVar29 = (uint)DAT_0080874d;
                      bVar3 = g_playerRelationMatrix[uVar29][bVar23];
                      if ((bVar3 == 0) && (g_playerRelationMatrix[bVar23][uVar29] == 0)) {
                        iVar16 = -2;
                      }
                      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar23][uVar29] == 0)) {
                        iVar16 = -1;
                      }
                      else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar23][uVar29] == 1)) {
                        iVar16 = 1;
                      }
                      else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar23][uVar29] == 1)) {
                        iVar16 = 2;
                      }
                      else {
                        iVar16 = 0;
                      }
                      if (iVar16 == 2) goto LAB_005d28a0;
                    }
                  }
                  else if (pcVar28[0x4a] == local_5) {
LAB_005d28a0:
                    st::fn_00715360(g_int_00811764,*(int *)(pcVar28 + 6),'\x1b',&stack0xfffff980,0x451,
                                 1,0xffffffff);
                  }
                }
                pSVar21 = this_00->field_1F84;
                local_c = (AnonShape_005D1400_891386BF *)&local_c->field_0x1;
              } while (local_c < (undefined1 *)pSVar21->count);
            }
          }
        }
        else {
          st::fn_00715360(g_int_00811764,0,'\x1b',&stack0xfffff980,0x451,1,0xffffffff);
        }
      }
LAB_005d28da:
      st::fn_006B6020(this_00->field_1A5B->field_0686,0,&DAT_008016a0);
      this_00->field_002D = 0x33;
      this_00->field_0031 = this_00->field_1A5B->field_0686;
      st::fn_006E6080(this_00,2,this_00->field_1A5B->field_054C,(undefined4 *)&this_00->field_0x1d);
    }
    goto switchD_005d1877_caseD_6507;
  }
  if (SVar6 < MESS_SETTMAPMTY_654A) {
    switch(SVar6) {
    case MESS_SETTMAPSTY_6505:
      uVar29 = (message->arg0).u32;
      if ((uVar29 != 0xffffffff) && (this_00->field_1F84 != nullptr)) {
        pSVar7 = this_00->field_1E2F;
        if (uVar29 < pSVar7->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          puVar18 = (uint *)((int)&pSVar7->data->field_0000 + pSVar7->elementSize * uVar29);
        }
        else {
          puVar18 = nullptr;
        }
        if (DAT_0080877e == '\0') {
          st::fn_00402D4C(this_00,message->arg1,3,puVar18[0x41],puVar18[0x42]);
          this_00->field_2244 = 0;
        }
        else {
          pcVar28 = &DAT_00807e1d;
          if (DAT_008067a0 == '\0') {
            pcVar28 = (char *)&DAT_00807ddd;
          }
          st::fn_00401BDB(this_00,DAT_0080877f,(message->arg1).u32,puVar18[0x41],
                           (char)puVar18[0x42],pcVar28);
          st::fn_00403AD5(this_00,0);
        }
      }
      break;
    case MESS_FSGSTY_6506:
      uVar29 = (message->arg1).u32;
      if (uVar29 == 0) {
        if (DAT_0080877e != '\0') {
          DAT_00808aab = DAT_00808aab + 1;
          this_00->field_2121 = this_00->field_2121 + 1;
          st::fn_00404A89(this_00,0);
          st::fn_00403AD5(this_00,0);
        }
      }
      else if (((2 < uVar29) && (uVar29 < 9)) && (DAT_0080877e != '\0')) {
        DAT_00808aab = DAT_00808aab + 1;
        st::fn_00404A89(this_00,0);
      }
      break;
    case MESS_SETTMAPTY_6548:
      goto switchD_005d1877_caseD_6548;
    case MESS_SETTMAPMTY_6549:
switchD_005d1877_caseD_6549:
      if (DAT_0080877e != '\0') {
        this_00->field_2121 = this_00->field_2121 + 1;
        st::fn_00403AD5(this_00,0);
        goto switchD_005d1877_caseD_6548;
      }
    }
  }
  else {
switchD_005d1877_caseD_6548:
    if (DAT_0080877e != '\0') {
      DAT_00808aab = DAT_00808aab + 1;
      st::fn_00404A89(this_00,0);
    }
  }
switchD_005d1877_caseD_6507:
  SVar5 = message->id;
  if (((0x69fe < SVar5) && (SVar5 < 0x6a7f)) && (this_00->field_0065 == '\x01')) {
    pSVar21 = this_00->field_1F84;
    local_2c = SVar5 - 0x69ff >> 3;
    if ((pSVar21 == nullptr) ||
       (uVar29 = local_2c + this_00->field_1F88, pSVar21->count <= uVar29)) {
      pAVar26 = nullptr;
    }
    else {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      pAVar26 = (AnonShape_005D1400_5A9F7B11 *)
                (&pSVar21->data->field_0000 + pSVar21->elementSize * uVar29);
    }
    local_18 = pAVar26;
    if (pAVar26 != nullptr) {
      switch(SVar5 + 1 & 7) {
      case 0:
        if ((pAVar26->field_0x4 == '\x02') && (*(int *)&pAVar26->field_0x6 == DAT_0080877f)) {
          if (DAT_0080877e == '\0') {
            uVar31 = 0;
            uVar29 = 0;
            iVar16 = this_00->field_1F88 + local_2c;
            uVar40 = 0;
            goto LAB_005d34ee;
          }
          st::fn_00405407(this_00,this_00->field_1F88 + local_2c);
          st::fn_00403AD5(this_00,0);
        }
        break;
      case 1:
        if (pAVar26->field_0x0 != '\0') {
          uVar29 = pSVar21->count;
          local_44 = 0x1010101;
          local_40 = 0x1010101;
          uVar31 = 0;
          if (0 < (int)uVar29) {
            bVar38 = uVar29 != 0;
            do {
              if (bVar38) {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pcVar28 = &this_00->field_1F84->data->field_0000 +
                          this_00->field_1F84->elementSize * uVar31;
              }
              else {
                pcVar28 = nullptr;
              }
              if ((*pcVar28 != '\0') && (pcVar28[2] != 0xff)) {
                *(undefined1 *)((int)&local_44 + (uint)(byte)pcVar28[2]) = 0;
              }
              uVar31 = uVar31 + 1;
              bVar38 = uVar31 < uVar29;
            } while ((int)uVar31 < (int)uVar29);
          }
          if (pAVar26->field_0x2 != 0xff) {
            *(undefined1 *)((int)&local_44 + (uint)(byte)pAVar26->field_0x2) = 1;
          }
          uVar29 = 0;
          this_00->field_2171 = 0x6502;
          this_00->field_2179 = this_00->field_1F88 + local_2c;
          this_00->field_2191 = 0x6503;
          this_00->field_21A1 = 0;
          this_00->field_1E2F->count = 0;
          this_00->field_1F37 = 0xff;
          st::fn_006AE1C0((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
          local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(1));
          do {
            if (*(char *)((int)&local_44 + uVar29) != '\0') {
              this_00->field_1F37 = uVar29;
              st::fn_006AE1C0
                        ((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
              if ((byte)pAVar26->field_0x2 == uVar29) {
                this_00->field_21A1 = (uint)local_c & 0xff;
              }
              local_c = (AnonShape_005D1400_891386BF *)
                        STReplaceLowByte((uint32_t)(local_c), (uint8_t)((byte)local_c + '\x01'));
            }
            uVar29 = uVar29 + 1;
          } while ((int)uVar29 < 8);
          dVar10 = this_00->field_1E2F->count;
          this_00->field_21C5 = 0x124;
          this_00->field_21A9 = dVar10;
          this_00->field_21CD = 0x1e;
          this_00->field_21A5 = 0x12;
          this_00->field_21C9 = local_2c * 0x19 + 0x41;
LAB_005d3188:
          (*this_00->field_000C->vtable->CreateObject)
                    ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                     &this_00->field_0x2161,0);
        }
        break;
      case 2:
        if (pAVar26->field_0x0 != '\0') {
          this_00->field_2171 = 0x6504;
          this_00->field_2179 = this_00->field_1F88 + local_2c;
          this_00->field_2191 = 0x6500;
          this_00->field_1E2F->count = 0;
          local_10 = (char *)0x1;
          pcVar28 = st::fn_006B0140(0x23f1,g_hINSTANCE_00807618);
          uVar29 = 0xffffffff;
          do {
            pcVar33 = pcVar28;
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            pcVar33 = pcVar28 + 1;
            cVar2 = *pcVar28;
            pcVar28 = pcVar33;
          } while (cVar2 != '\0');
          uVar29 = ~uVar29;
          pcVar28 = pcVar33 + -uVar29;
          pcVar33 = &this_00->field_0x1e33;
          memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
          uVar31 = 0;
          for (puVar18 = st::fn_0072E560((uint *)&this_00->field_0x1e33,'\n');
              puVar18 != nullptr; puVar18 = st::fn_0072E560(puVar18,'\n')) {
            *(undefined1 *)puVar18 = 0x20;
          }
          this_00->field_1F37 = 1;
          st::fn_006AE1C0((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
          pcVar28 = st::fn_006B0140(0x23f0,g_hINSTANCE_00807618);
          uVar29 = 0xffffffff;
          do {
            pcVar33 = pcVar28;
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            pcVar33 = pcVar28 + 1;
            cVar2 = *pcVar28;
            pcVar28 = pcVar33;
          } while (cVar2 != '\0');
          uVar29 = ~uVar29;
          pcVar28 = pcVar33 + -uVar29;
          pcVar33 = &this_00->field_0x1e33;
          memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
          uVar31 = 0;
          for (puVar18 = st::fn_0072E560((uint *)&this_00->field_0x1e33,'\n');
              puVar18 != nullptr; puVar18 = st::fn_0072E560(puVar18,'\n')) {
            *(undefined1 *)puVar18 = 0x20;
          }
          this_00->field_1F37 = 2;
          st::fn_006AE1C0((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
          pcVar28 = local_10;
          if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
            pcVar28 = (char *)(uint)(local_18->field_0x4 != '\x02');
          }
          if (pcVar28 != nullptr) {
            pcVar28 = st::fn_006B0140(0x23f2,g_hINSTANCE_00807618);
            uVar29 = 0xffffffff;
            do {
              pcVar33 = pcVar28;
              if (uVar29 == 0) break;
              uVar29 = uVar29 - 1;
              pcVar33 = pcVar28 + 1;
              cVar2 = *pcVar28;
              pcVar28 = pcVar33;
            } while (cVar2 != '\0');
            uVar29 = ~uVar29;
            pcVar28 = pcVar33 + -uVar29;
            pcVar33 = &this_00->field_0x1e33;
            memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
            uVar31 = 0;
            for (puVar18 = st::fn_0072E560((uint *)&this_00->field_0x1e33,'\n');
                puVar18 != nullptr; puVar18 = st::fn_0072E560(puVar18,'\n')) {
              *(undefined1 *)puVar18 = 0x20;
            }
            this_00->field_1F37 = 3;
            st::fn_006AE1C0((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
          }
          this_00->field_21A9 = this_00->field_1E2F->count;
          bVar23 = local_18->field_0x3;
          this_00->field_21C5 = 0x143;
          this_00->field_21CD = 0x78;
          this_00->field_21A1 = bVar23 - 1;
          this_00->field_21C9 = local_2c * 0x19 + 0x41;
          pcVar11 = g_startSystem_0081176C->field_0034;
          if (pcVar11->field_00A0 != 0) {
            st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar11);
          }
          this_00->field_21A5 = *(undefined4 *)&pcVar11->field_0x8a;
          goto LAB_005d3188;
        }
        break;
      case 3:
        this_00->field_2171 = 0x6505;
        this_00->field_2179 = local_2c + this_00->field_1F88;
        this_00->field_2191 = 0x6500;
        this_00->field_1E2F->count = 0;
        memset(&this_00->field_0x1e33, 0, 0x10c); /* compiler bulk-zero initialization */
        if (pAVar26->field_0x0 == '\0') {
          uVar29 = local_2c + this_00->field_1F88;
          local_5 = '\0';
          if (-1 < (int)uVar29) {
            pSVar21 = this_00->field_1F84;
            do {
              if (uVar29 < pSVar21->count) {
                element_1f84_2 = DArrayAt<SettMapMTy_field_1F84Element>(pSVar21, uVar29);
              }
              else {
                element_1f84_2 = nullptr;
              }
              if (element_1f84_2->field_0000 != '\0') {
                if ((element_1f84_2->field_0004 == '\x02') && (element_1f84_2->element != DAT_0080877f)) {
                  local_5 = '\x01';
                }
                break;
              }
              uVar29 = uVar29 - 1;
            } while (-1 < (int)uVar29);
          }
          if (local_5 != '\0') {
            pcVar28 = st::fn_006B0140(0x1f42,g_hINSTANCE_00807618);
            uVar29 = 0xffffffff;
            do {
              pcVar33 = pcVar28;
              if (uVar29 == 0) break;
              uVar29 = uVar29 - 1;
              pcVar33 = pcVar28 + 1;
              cVar2 = *pcVar28;
              pcVar28 = pcVar33;
            } while (cVar2 != '\0');
            uVar29 = ~uVar29;
            pcVar28 = pcVar33 + -uVar29;
            pcVar33 = &this_00->field_0x1e33;
            memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
            uVar31 = 0;
            this_00->field_1F37 = 2;
            st::fn_006AE1C0((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
            if (DAT_00808aaa != '\0') {
              pcVar28 = st::fn_006B0140(0x1f46,g_hINSTANCE_00807618);
              uVar29 = 0xffffffff;
              do {
                pcVar33 = pcVar28;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar33 = pcVar28 + 1;
                cVar2 = *pcVar28;
                pcVar28 = pcVar33;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              pcVar28 = pcVar33 + -uVar29;
              pcVar33 = &this_00->field_0x1e33;
              memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
              uVar31 = 0;
              this_00->field_1F37 = 3;
              st::fn_006AE1C0
                        ((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
            }
          }
          pcVar28 = st::fn_006B0140(0x1f41,g_hINSTANCE_00807618);
          uVar29 = 0xffffffff;
          do {
            pcVar33 = pcVar28;
            if (uVar29 == 0) break;
            uVar29 = uVar29 - 1;
            pcVar33 = pcVar28 + 1;
            cVar2 = *pcVar28;
            pcVar28 = pcVar33;
          } while (cVar2 != '\0');
          uVar29 = ~uVar29;
          pcVar28 = pcVar33 + -uVar29;
          pcVar33 = &this_00->field_0x1e33;
          memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
          uVar31 = 0;
          this_00->field_1F37 = 1;
          st::fn_006AE1C0((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
        }
        else {
          if ((this_00->field_1E26 != CASE_5) || (pAVar26->field_0x4 != '\x04')) {
            if ((DAT_0080877e != '\0') && (this_00->field_1E26 != CASE_5)) {
              pcVar28 = st::fn_006B0140(8000,g_hINSTANCE_00807618);
              uVar29 = 0xffffffff;
              do {
                pcVar33 = pcVar28;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar33 = pcVar28 + 1;
                cVar2 = *pcVar28;
                pcVar28 = pcVar33;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              pcVar28 = pcVar33 + -uVar29;
              pcVar33 = &this_00->field_0x1e33;
              memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
              uVar31 = 0;
              this_00->field_1F37 = 0;
              st::fn_006AE1C0
                        ((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
            }
            bVar38 = true;
            if ((DAT_00807dd1 & 0xffff0000) == 0xd0dd0000) {
              bVar38 = local_18->field_0x3 != '\x03';
            }
            if (bVar38) {
              pcVar28 = st::fn_006B0140(0x1f42,g_hINSTANCE_00807618);
              uVar29 = 0xffffffff;
              do {
                pcVar33 = pcVar28;
                if (uVar29 == 0) break;
                uVar29 = uVar29 - 1;
                pcVar33 = pcVar28 + 1;
                cVar2 = *pcVar28;
                pcVar28 = pcVar33;
              } while (cVar2 != '\0');
              uVar29 = ~uVar29;
              pcVar28 = pcVar33 + -uVar29;
              pcVar33 = &this_00->field_0x1e33;
              memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
              uVar31 = 0;
              this_00->field_1F37 = 2;
              st::fn_006AE1C0
                        ((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
            }
            pcVar28 = st::fn_006B0140(0x1f41,g_hINSTANCE_00807618);
            uVar29 = 0xffffffff;
            do {
              pcVar33 = pcVar28;
              if (uVar29 == 0) break;
              uVar29 = uVar29 - 1;
              pcVar33 = pcVar28 + 1;
              cVar2 = *pcVar28;
              pcVar28 = pcVar33;
            } while (cVar2 != '\0');
            uVar29 = ~uVar29;
            pcVar28 = pcVar33 + -uVar29;
            pcVar33 = &this_00->field_0x1e33;
            memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
            uVar31 = 0;
            this_00->field_1F37 = 1;
            st::fn_006AE1C0((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
          }
          if ((DAT_0080877e != '\0') && (this_00->field_1E26 != CASE_5)) {
            local_c = nullptr;
            pAVar22 = local_18->field_0050;
            pAVar32 = (AnonShape_005D1400_891386BF *)pAVar22->field_000C;
            if (0 < (int)pAVar32) {
              do {
                if (local_c < pAVar32) {
                  iVar16 = pAVar22->field_0008 * (int)local_c + pAVar22->field_001C;
                }
                else {
                  iVar16 = 0;
                }
                uVar29 = 0xffffffff;
                pcVar28 = (char *)(iVar16 + 0x40);
                do {
                  pcVar33 = pcVar28;
                  if (uVar29 == 0) break;
                  uVar29 = uVar29 - 1;
                  pcVar33 = pcVar28 + 1;
                  cVar2 = *pcVar28;
                  pcVar28 = pcVar33;
                } while (cVar2 != '\0');
                uVar29 = ~uVar29;
                pcVar28 = pcVar33 + -uVar29;
                pcVar33 = &this_00->field_0x1e33;
                memmove(pcVar33, pcVar28, uVar29); /* compiler REP MOVS byte copy */
                this_00->field_1F37 = 4;
                this_00->field_1F3B = local_c;
                st::fn_006AE1C0
                          ((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
                local_c = (AnonShape_005D1400_891386BF *)&local_c->field_0x1;
                pAVar22 = local_18->field_0050;
                pAVar32 = (AnonShape_005D1400_891386BF *)pAVar22->field_000C;
              } while ((int)local_c < (int)pAVar32);
            }
          }
        }
        pSVar7 = this_00->field_1E2F;
        uVar29 = 0;
        this_00->field_21A1 = 0;
        if (0 < (int)pSVar7->count) {
          bVar38 = pSVar7->count != 0;
          local_10 = (char *)(uint)(byte)local_18->field_0x4;
          do {
            if (bVar38) {
              element_1e2f_2 = DArrayAt<SettMapMTy_field_1E2FElement>(pSVar7, uVar29);
            }
            else {
              element_1e2f_2 = nullptr;
            }
            if (((char *)element_1e2f_2[0x41] == local_10) &&
               (element_1e2f_2->field_0108 == (uint)(byte)local_18->field_0x5)) {
              this_00->field_21A1 = uVar29;
              break;
            }
            uVar29 = uVar29 + 1;
            bVar38 = uVar29 < pSVar7->count;
          } while ((int)uVar29 < (int)pSVar7->count);
        }
        dVar10 = pSVar7->count;
        this_00->field_21C5 = 0x15d;
        this_00->field_21A9 = dVar10;
        this_00->field_21CD = 0x5f;
        this_00->field_21C9 = local_2c * 0x19 + 0x41;
        pcVar11 = g_startSystem_0081176C->field_0034;
        if (pcVar11->field_00A0 != 0) {
          st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar11);
        }
        this_00->field_21A5 = *(undefined4 *)&pcVar11->field_0x8a;
        if (0 < this_00->field_21A9) goto LAB_005d3188;
        break;
      case 5:
        if (pAVar26->field_0x0 != '\0') {
          if (DAT_00808a8f == '\0') {
            if (DAT_0080877e == '\0') {
              uVar31 = (uint)DAT_0080874d;
              uVar29 = 0;
              iVar16 = this_00->field_1F88 + local_2c;
              uVar40 = 5;
              goto LAB_005d34ee;
            }
            st::fn_00402068(this_00,this_00->field_1F88 + local_2c,0,(uint)DAT_0080874d);
            st::fn_00404A89(this_00,0);
          }
          else {
            uVar29 = pSVar21->count;
            uVar31 = 0;
            local_3c = 0;
            local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(0xff));
            local_10 = (char *)0x1;
            local_38 = 0;
            local_30 = (undefined1 *)uVar29;
            if (0 < (int)uVar29) {
              bVar38 = uVar29 != 0;
              do {
                if (bVar38) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                  pcVar28 = &this_00->field_1F84->data->field_0000 +
                            this_00->field_1F84->elementSize * uVar31;
                }
                else {
                  pcVar28 = nullptr;
                }
                if ((pcVar28 != nullptr) && ((byte)pcVar28[0x4a] < 8)) {
                  *(undefined1 *)((int)&local_3c + (uint)(byte)pcVar28[0x4a]) = 1;
                }
                uVar31 = uVar31 + 1;
                bVar38 = uVar31 < uVar29;
              } while ((int)uVar31 < (int)uVar29);
            }
            uVar31 = local_2c;
            bVar23 = 0;
            iVar16 = 0;
            do {
              if (*(char *)((int)&local_3c + iVar16) != '\0') {
                bVar23 = bVar23 + 1;
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 < 8);
            bVar3 = this_00->field_211C;
joined_r0x005d3229:
            if (bVar23 < bVar3) {
              iVar16 = 0;
              do {
                if (*(char *)((int)&local_3c + iVar16) == '\0') {
                  *(undefined1 *)((int)&local_3c + iVar16) = 1;
                  bVar23 = bVar23 + 1;
                  break;
                }
                iVar16 = iVar16 + 1;
              } while (iVar16 < 8);
              goto joined_r0x005d3229;
            }
            uVar27 = 0;
            if (0 < (int)uVar29) {
              do {
                puVar24 = local_30;
                if (uVar27 < local_30) {
                  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                  pcVar28 = &this_00->field_1F84->data->field_0000 +
                            this_00->field_1F84->elementSize * uVar27;
                }
                else {
                  pcVar28 = nullptr;
                }
                if (pcVar28 != nullptr) {
                  if (this_00->field_1F88 + uVar31 != uVar27) {
                    if (*pcVar28 == '\0') goto LAB_005d32d3;
                    if ((pcVar28[4] != '\0') && (pcVar28[4] != '\x01')) {
                      if (local_10 == nullptr) {
                        if ((byte)local_c != pcVar28[0x4a]) {
                          local_c = (AnonShape_005D1400_891386BF *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(0xff));
                        }
                      }
                      else {
                        local_10 = nullptr;
                        local_c = (AnonShape_005D1400_891386BF *)
                                  STReplaceLowByte((uint32_t)(local_c), (uint8_t)(pcVar28[0x4a]));
                      }
                    }
                  }
                  if ((*pcVar28 != '\0') &&
                     (((pcVar28[4] == '\0' || (pcVar28[4] == '\x01')) && ((byte)pcVar28[0x4a] < 8)))
                     ) {
                    *(undefined1 *)((int)&local_3c + (uint)(byte)pcVar28[0x4a]) = 0;
                  }
                }
LAB_005d32d3:
                uVar27 = uVar27 + 1;
              } while ((int)uVar27 < (int)puVar24);
            }
            if ((byte)local_c < 8) {
              *(undefined1 *)((int)&local_3c + ((uint)local_c & 0xff)) = 0;
            }
            uVar29 = 0;
            this_00->field_2171 = 0x6501;
            this_00->field_2179 = this_00->field_1F88 + local_2c;
            this_00->field_2191 = 0x6500;
            this_00->field_21A1 = 0;
            this_00->field_1E2F->count = 0;
            local_c = (AnonShape_005D1400_891386BF *)((uint)local_c & 0xffffff00);
            puVar24 = &uStack_7d;
            local_30 = puVar24;
            do {
              iVar16 = uVar29 + 0x41;
              if (puVar24[uVar29 + 0x41] != '\0') {
                pcVar28 = st::fn_006B0140(0x1f4a,g_hINSTANCE_00807618);
                st::external_00000080(&this_00->field_0x1e33,"%s%c",pcVar28,iVar16);
                this_00->field_1F37 = uVar29;
                st::fn_006AE1C0
                          ((DArrayTy *)this_00->field_1E2F,&this_00->field_0x1e33);
                if ((byte)local_18->field_0x4a == uVar29) {
                  this_00->field_21A1 = (uint)local_c & 0xff;
                }
                local_c = (AnonShape_005D1400_891386BF *)
                          STReplaceLowByte((uint32_t)(local_c), (uint8_t)((byte)local_c + '\x01'));
                puVar24 = local_30;
              }
              uVar29 = uVar29 + 1;
            } while ((int)uVar29 < 8);
            SVar4 = this_00->field_1E26;
            this_00->field_21A9 = this_00->field_1E2F->count;
            if (((SVar4 == 6) || (SVar4 == 1)) || (uVar40 = 0x26b, SVar4 == 2)) {
              uVar40 = 0x2ab;
            }
            this_00->field_21C5 = uVar40;
            this_00->field_21CD = 0x46;
            this_00->field_21C9 = local_2c * 0x19 + 0x41;
            pcVar11 = g_startSystem_0081176C->field_0034;
            if (pcVar11->field_00A0 != 0) {
              st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar11);
            }
            this_00->field_21A5 = *(undefined4 *)&pcVar11->field_0x8a;
            (*this_00->field_000C->vtable->CreateObject)
                      ((SystemClassTy *)this_00->field_000C,0x100ef,nullptr,nullptr,
                       &this_00->field_0x2161,0);
          }
        }
        break;
      case 7:
        if (DAT_0080877e == '\0') {
          uVar31 = 0;
          uVar29 = (uint)(pAVar26->field_0x4f == '\0');
          iVar16 = this_00->field_1F88 + local_2c;
          uVar40 = 7;
LAB_005d34ee:
          st::fn_00402D4C(this_00,iVar16,uVar40,uVar29,uVar31);
        }
        else {
          pAVar26->field_0x4f = pAVar26->field_0x4f == '\0';
          this_00->field_002D = 5;
          st::fn_006E6080(this_00,2,this_00->field_1F8C[local_2c * 8 + 7],
                       (undefined4 *)&this_00->field_0x1d);
          this_00->field_2121 = this_00->field_2121 + 1;
          st::fn_00403AD5(this_00,0);
        }
      }
    }
  }
  temp_5fb3942e6a = message->id;
  if (temp_5fb3942e6a < 0x6a7f) {
    g_currentExceptionFrame = local_f4.previous;
    return 0;
  }
  if (0x6afe < temp_5fb3942e6a) {
    g_currentExceptionFrame = local_f4.previous;
    return 0;
  }
  pAVar36 = nullptr;
  pcVar28 = (char *)(temp_5fb3942e6a - 0x6a7f >> 3);
  local_30 = (undefined1 *)(temp_5fb3942e6a + 1 & 7);
  piVar12 = (message->arg1).ptr;
  local_20 = piVar12[2];
  local_1c = piVar12[3];
  pSVar21 = this_00->field_1F84;
  local_28 = *piVar12 + -0x113;
  local_24 = 0;
  if ((pSVar21 != nullptr) &&
     (uVar29 = this_00->field_1F88 + (int)pcVar28, uVar29 < pSVar21->count)) {
    /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
    pAVar36 = (AnonShape_005CBBE0_2D1CAA09 *)
              (&pSVar21->data->field_0000 + pSVar21->elementSize * uVar29);
  }
  local_10 = pcVar28;
  st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_20CC[(int)pcVar28 + 10],0,
               *piVar12 + -0x113,0,piVar12[2],piVar12[3],0xff);
  if (pAVar36 == nullptr) goto switchD_005d35aa_default;
  switch(local_30) {
  case nullptr:
    if (((pAVar36->field_0x0 == '\0') || (pAVar36->field_0x4 != '\x02')) ||
       (*(int *)&pAVar36->field_0x6 != DAT_0080877f)) break;
    st::fn_00404C5F
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar28 + 10],&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    iVar16 = 2 - (uint)(pAVar36->field_0x1 != '\0');
    goto LAB_005d3bf4;
  case (undefined1 *)0x1:
    if (pAVar36->field_0x0 != '\0') {
      local_28 = local_28 + 1;
      local_24 = local_24 + 1;
      local_20 = local_20 + -2;
      local_1c = local_1c + -2;
      st::fn_00404C5F
                ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar28 + 10],&local_28,0,
                 (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0xffffffff);
      if (pAVar36->field_0x2 != -1) {
        switch(pAVar36->field_0x2) {
        case 0:
          bVar23 = 0xfc;
          break;
        case 1:
          bVar23 = 0xfa;
          break;
        case 2:
          bVar23 = 0xfb;
          break;
        case 3:
          bVar23 = 0xf9;
          break;
        case 4:
          bVar23 = 0xfd;
          break;
        case 5:
          bVar23 = 0xfe;
          break;
        case 6:
          bVar23 = 0xf3;
          break;
        case 7:
          bVar23 = 7;
          break;
        default:
          bVar23 = 0xff;
        }
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_20CC[(int)pcVar28 + 10],0,
                     local_28 + 2,local_24 + 2,local_20 + -4,local_1c + -4,bVar23);
      }
    }
    break;
  case (undefined1 *)0x2:
    if (pAVar36->field_0x0 == '\0') break;
    st::fn_00404C5F
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar28 + 10],&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    st::fn_00710A90(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar28 + 10],0,
                     local_28,local_24,local_20,local_1c);
    if (pAVar36->field_0x3 == '\x01') {
      pcVar28 = &DAT_007ca250;
LAB_005d3780:
      uVar29 = 0xffffffff;
      do {
        pcVar33 = pcVar28;
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        pcVar33 = pcVar28 + 1;
        cVar2 = *pcVar28;
        pcVar28 = pcVar33;
      } while (cVar2 != '\0');
      uVar29 = ~uVar29;
      pcVar28 = pcVar33 + -uVar29;
      pcVar33 = (char *)&DAT_0080f33a;
      for (uVar31 = uVar29 >> 2; uVar31 != 0; uVar31 = uVar31 - 1) {
        *(undefined4 *)pcVar33 = *(undefined4 *)pcVar28;
        pcVar28 = pcVar28 + 4;
        pcVar33 = pcVar33 + 4;
      }
    }
    else {
      if (pAVar36->field_0x3 != '\x02') {
        pcVar28 = &DAT_007ca24c;
        goto LAB_005d3780;
      }
      uVar29 = 0xffffffff;
      pcVar28 = &DAT_007ca248;
      do {
        pcVar33 = pcVar28;
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        pcVar33 = pcVar28 + 1;
        cVar2 = *pcVar28;
        pcVar28 = pcVar33;
      } while (cVar2 != '\0');
      uVar29 = ~uVar29;
      pcVar28 = pcVar33 + -uVar29;
      pcVar33 = (char *)&DAT_0080f33a;
      for (uVar31 = uVar29 >> 2; uVar31 != 0; uVar31 = uVar31 - 1) {
        *(undefined4 *)pcVar33 = *(undefined4 *)pcVar28;
        pcVar28 = pcVar28 + 4;
        pcVar33 = pcVar33 + 4;
      }
    }
    for (uVar29 = uVar29 & 3; uVar29 != 0; uVar29 = uVar29 - 1) {
      *pcVar33 = *pcVar28;
      pcVar28 = pcVar28 + 1;
      pcVar33 = pcVar33 + 1;
    }
    st::fn_007119C0(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,2);
    pcVar28 = local_10;
    break;
  case (undefined1 *)0x3:
    st::fn_00404C5F
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar28 + 10],&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    st::fn_00710A90(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar28 + 10],0,
                     local_28,local_24,local_20,local_1c);
    uVar29 = 2;
    iVar41 = -1;
    iVar39 = -1;
    puVar42 = (uint *)&DAT_007c2310;
    iVar16 = local_20;
    puVar18 = (uint *)st::fn_00401C0D(this_00,pAVar36);
    goto LAB_005d38bd;
  case (undefined1 *)0x4:
    st::fn_00404C5F
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar28 + 10],&local_28,2,0x67,0x67);
    bVar23 = pAVar36->field_0x4;
    if (bVar23 < 2) break;
    if (bVar23 < 4) {
      st::fn_00710A90(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar28 + 10],0,
                       local_28,local_24,local_20,local_1c);
      uVar29 = 2;
      iVar39 = -1;
      iVar16 = -1;
      puVar18 = st::fn_0040326F(g_startSystem_0081176C->field_0034,(uint *)&pAVar36->field_0xa,
                                   (uint *)&DAT_007c7274,local_20);
      st::fn_007119C0(g_startSystem_0081176C->field_0034,puVar18,iVar16,iVar39,uVar29);
      break;
    }
    if (bVar23 != 4) break;
    pDVar20 = pAVar36->field_0050;
    if ((uint)(byte)pAVar36->field_0x5 < pDVar20->count) {
      puVar18 = DArrayAt<uint>(pDVar20, (uint)(byte)pAVar36->field_0x5);
    }
    else {
      puVar18 = nullptr;
    }
    if (puVar18 == nullptr) break;
    st::fn_00710A90(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar28 + 10],0,
                     local_28,local_24,local_20,local_1c);
    uVar29 = 2;
    iVar41 = -1;
    iVar39 = -1;
    puVar42 = (uint *)&DAT_007c7274;
    iVar16 = local_20;
LAB_005d38bd:
    puVar18 = st::fn_0040326F(g_startSystem_0081176C->field_0034,puVar18,puVar42,iVar16);
    st::fn_007119C0(g_startSystem_0081176C->field_0034,puVar18,iVar39,iVar41,uVar29);
    break;
  case (undefined1 *)0x5:
    if ((pAVar36->field_0x0 == '\0') ||
       (st::fn_00404C5F
                  ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar28 + 10],&local_28,2,
                   (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67),
       pAVar36->field_0x4 == '\0')) break;
    if (DAT_00808a8f != '\0') {
      pcVar33 = st::fn_006B0140(0x1f4a,g_hINSTANCE_00807618);
      st::external_00000080((LPSTR)&DAT_0080f33a,"%s%c",pcVar33);
      st::fn_00710A90(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar28 + 10],0,
                       local_28,local_24,local_20,local_1c);
      st::fn_007119C0(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,2);
      break;
    }
    if (((DAT_0080874d == 0xff) || (bVar23 = pAVar36->field_0x2, bVar23 == 0xff)) ||
       (DAT_0080874d == bVar23)) break;
    local_10 = (char *)0xffffffff;
    local_30 = (undefined1 *)STReplaceLowByte((uint32_t)(local_30), (uint8_t)(bVar23));
    uVar29 = (uint)DAT_0080874d;
    bVar3 = g_playerRelationMatrix[uVar29][bVar23];
    if ((bVar3 == 0) && (g_playerRelationMatrix[bVar23][uVar29] == 0)) {
      uVar40 = 0xfffffffe;
    }
    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar23][uVar29] == 0)) {
      uVar40 = 0xffffffff;
    }
    else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar23][uVar29] == 1)) {
      uVar40 = 1;
    }
    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar23][uVar29] == 1)) {
      uVar40 = 2;
    }
    else {
      uVar40 = 0;
    }
    switch(uVar40) {
    default:
      iVar16 = -1;
      break;
    case 1:
      iVar16 = 1;
      break;
    case 2:
      iVar16 = 3;
      break;
    case 0xfffffffe:
      iVar16 = 0;
      break;
    case 0xffffffff:
      iVar16 = 2;
    }
    iVar16 = iVar16 + -1;
    if (iVar16 < 0) break;
    pAVar25 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4B;
    goto LAB_005d3bfa;
  case (undefined1 *)0x6:
    st::fn_00404C5F
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar28 + 10],&local_28,2,0x67,0x67);
    if (((pAVar36->field_0x4 == '\x02') || (pAVar36->field_0x4 == '\x03')) &&
       (((DAT_0080877e != '\0' && (*(int *)&pAVar36->field_0x6 != DAT_0080877f)) ||
        ((DAT_0080877e == '\0' && (*(int *)&pAVar36->field_0x6 == DAT_0080877f)))))) {
      st::fn_00710A90(g_startSystem_0081176C->field_0034,this_00->field_20CC[(int)pcVar28 + 10],0,
                       local_28,local_24,local_20,local_1c);
      st::external_00000080((LPSTR)&DAT_0080f33a,"%4d");
      uVar29 = 0xffffffff;
      pcVar33 = (char *)&DAT_0080f33a;
      do {
        if (uVar29 == 0) break;
        uVar29 = uVar29 - 1;
        cVar2 = *pcVar33;
        pcVar33 = pcVar33 + 1;
      } while (cVar2 != '\0');
      if (4 < ~uVar29 - 1) {
        uVar29 = 0xffffffff;
        pcVar28 = &DAT_007cd500;
        do {
          pcVar33 = pcVar28;
          if (uVar29 == 0) break;
          uVar29 = uVar29 - 1;
          pcVar33 = pcVar28 + 1;
          cVar2 = *pcVar28;
          pcVar28 = pcVar33;
        } while (cVar2 != '\0');
        uVar29 = ~uVar29;
        pcVar33 = pcVar33 + -uVar29;
        pcVar35 = (char *)&DAT_0080f33a;
        for (uVar31 = uVar29 >> 2; uVar31 != 0; uVar31 = uVar31 - 1) {
          *(undefined4 *)pcVar35 = *(undefined4 *)pcVar33;
          pcVar33 = pcVar33 + 4;
          pcVar35 = pcVar35 + 4;
        }
        for (uVar29 = uVar29 & 3; pcVar28 = local_10, uVar29 != 0; uVar29 = uVar29 - 1) {
          *pcVar35 = *pcVar33;
          pcVar33 = pcVar33 + 1;
          pcVar35 = pcVar35 + 1;
        }
      }
      st::fn_007119C0(g_startSystem_0081176C->field_0034,&DAT_0080f33a,-1,-1,2);
    }
    break;
  case (undefined1 *)0x7:
    st::fn_00404C5F
              ((MMObjTy *)this_00,this_00->field_20CC[(int)pcVar28 + 10],&local_28,2,
               (-((message->arg0).words.low != 0) & 0xfcU) + 0x23,0x67);
    if (((pAVar36->field_0x4 != '\x02') || (pAVar36->field_0x4f == '\0')) &&
       (pAVar36->field_0x4 != '\x04')) break;
    iVar16 = 0;
LAB_005d3bf4:
    pAVar25 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_1F4F;
LAB_005d3bfa:
    pbVar19 = (byte *)st::fn_0070B3A0(pAVar25,iVar16);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_20CC[(int)pcVar28 + 10],
           (local_20 - *(int *)(pbVar19 + 4)) / 2 + local_28,
           (local_1c - *(int *)(pbVar19 + 8)) / 2 + 1 + local_24,'\x06',pbVar19);
  }
switchD_005d35aa_default:
  st::fn_006B35D0((int *)g_ddxContext_008075A8,this_00->field_20CC[(int)pcVar28]);
  if ((message->arg0).words.low == 3) {
    st::fn_00404BF1(this_00,9,'\x01',-1);
  }
  g_currentExceptionFrame = local_f4.previous;
  return 0;
}

// 005D4850 SettMapMTy::RunGame
#line 4 "decomp/ST.exe/functions/005D4850/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::RunGame

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005D4850(SettMapMTy *this)

{
  MMsgTy *this_00;
  SettMapMTy *this_01;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    if (DAT_0080877e != '\0') {
      st::fn_006B7070(g_int_00811764);
    }
    this_01 = local_8;
    st::fn_004036C0(local_8,0x6948,0,0);
    this_01->field_0x21e6 = 1;
    this_01->field_0x21e5 = 1;
    this_01->field_0x21e4 = 1;
    this_01->field_21E7 = 1;
    this_01->field_0x21e2 = 1;
    this_01->field_0x21e1 = 1;
    (*this_01->vtable->CloseButtons)((SettMapTy *)this_01);
    this_00 = this_01->field_1A5B->field_02E6;
    if (this_00 != nullptr) {
      st::fn_00401FA5(this_00,1,0,1);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x998,0,errorCode,
                             "%s","SettMapMTy::RunGame");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Start\\settmobj.cpp",0x998);
  return;
}

// 005D4990 SettMapMTy::PrepareAFT
#line 4 "decomp/ST.exe/functions/005D4990/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::PrepareAFT

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_005D4990(SettMapMTy *this,AnonShape_005D4990_5F0525CF *param_1,uint *param_2)

{
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *puVar6;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;

  if ((param_1 != nullptr) && (param_2 != nullptr)) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (iVar2 == 0) {
      if (*param_2 != 0xffffffff) {
        uVar5 = local_8->field_1A5B->field_06A6;
        puVar6 = (byte *)param_1->field_0008;
        memset(puVar6, 0, uVar5); /* compiler bulk-zero initialization */
        uVar5 = *param_2;
        iVar2 = param_1->field_0008;
        uVar4 = 0;
        param_1->field_0004 = uVar5;
        if (uVar5 != 0) {
          do {
            param_2 = param_2 + 1;
            if (*param_2 < local_8->field_1A5B->field_06A6) {
              *(undefined1 *)(*param_2 + iVar2) = 1;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uint)param_1->field_0004);
        }
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      uVar5 = local_8->field_1A5B->field_06A6;
      puVar6 = (byte *)param_1->field_0008;
      for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = 0x1010101;
        puVar6 = (byte *)(puVar6 + 1);
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar6 = 1;
        puVar6 = (byte *)((int)puVar6 + 1);
      }
      param_1->field_0004 = local_8->field_1A5B->field_06A6;
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Start\\settmobj.cpp",0x9af,0,iVar2,"%s"
                               ,"SettMapMTy::PrepareAFT");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,"E:\\__titans\\Start\\settmobj.cpp",0x9af);
  }
  return;
}

