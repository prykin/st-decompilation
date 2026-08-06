#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/frmpanel.cpp

// 0050FD60 FrmPanelTy::InitFrmPanel
#line 4 "decomp/ST.exe/functions/0050FD60/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::InitFrmPanel */

void __thiscall st::fn_0050FD60(FrmPanelTy *this)

{
  FrmPanelTyVTable *pFVar1;
  FrmPanelTy *this_00;
  int iVar3;
  LPSTR pCVar4;
  uint uVar5;
  undefined4 uVar6;
  short sVar7;
  int iVar8;
  undefined2 uVar9;
  int iVar10;
  UINT UVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  InternalExceptionFrame local_4c;
  FrmPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 == 0) {
    uVar14 = 0x77;
    uVar12 = 0xc9;
    UVar11 = 0x2736;
    iVar10 = 0xc;
    iVar8 = 0xc6;
    uVar6 = 2;
    iVar3 = 0x31;
    g_frmPanel_0080168C = local_8;
    pCVar4 = st::fn_0040577C("BKG_FORMATIONW",0);
    st::fn_00403800
              ((SpecPanelTy *)this_00,pCVar4,iVar3,uVar6,iVar8,iVar10,UVar11,uVar12,uVar14);
    uVar15 = 1;
    pFVar1 = this_00->vtable;
    pcVar13 = nullptr;
    uVar14 = 0x2774;
    uVar9 = 0;
    sVar7 = 2;
    uVar12 = 0xc0af;
    uVar6 = 0xc09f;
    pCVar4 = st::fn_0040577C("BUT_FLINE",0);
    uVar5 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0x2b,0x19,0,1,1,pCVar4,uVar6,uVar12,sVar7,uVar9,uVar14
                       ,pcVar13,uVar15);
    uVar15 = 1;
    pFVar1 = this_00->vtable;
    pcVar13 = nullptr;
    uVar14 = 0x2775;
    uVar9 = 0;
    sVar7 = 2;
    uVar12 = 0xc0b0;
    uVar6 = 0xc0a0;
    this_00->field_01B3[0] = uVar5;
    pCVar4 = st::fn_0040577C("BUT_FBENDUP",0);
    uVar5 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0x60,0x19,0,1,1,pCVar4,uVar6,uVar12,sVar7,uVar9,uVar14
                       ,pcVar13,uVar15);
    uVar15 = 1;
    pFVar1 = this_00->vtable;
    pcVar13 = nullptr;
    uVar14 = 0x2779;
    uVar9 = 0;
    sVar7 = 2;
    uVar12 = 0xc0b1;
    uVar6 = 0xc0a1;
    this_00->field_01B3[1] = uVar5;
    pCVar4 = st::fn_0040577C("BUT_FHOLD",0);
    uVar5 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0x95,0x19,0,1,1,pCVar4,uVar6,uVar12,sVar7,uVar9,uVar14
                       ,pcVar13,uVar15);
    uVar15 = 1;
    pFVar1 = this_00->vtable;
    pcVar13 = nullptr;
    uVar14 = 0x277a;
    uVar9 = 0;
    sVar7 = 2;
    uVar12 = 0xc0b2;
    uVar6 = 0xc0a2;
    this_00->field_01B3[2] = uVar5;
    pCVar4 = st::fn_0040577C("BUT_FLOCK",0);
    uVar5 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0xca,0x19,0,1,1,pCVar4,uVar6,uVar12,sVar7,uVar9,uVar14
                       ,pcVar13,uVar15);
    uVar15 = 1;
    pFVar1 = this_00->vtable;
    pcVar13 = nullptr;
    uVar14 = 0x2777;
    uVar9 = 0;
    sVar7 = 2;
    uVar12 = 0xc0b3;
    uVar6 = 0xc0a3;
    this_00->field_01B3[3] = uVar5;
    pCVar4 = st::fn_0040577C("BUT_FWALL",0);
    uVar5 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0x2b,0x31,0,1,1,pCVar4,uVar6,uVar12,sVar7,uVar9,uVar14
                       ,pcVar13,uVar15);
    uVar15 = 1;
    pFVar1 = this_00->vtable;
    pcVar13 = nullptr;
    uVar14 = 0x2776;
    uVar9 = 0;
    sVar7 = 2;
    uVar12 = 0xc0b4;
    uVar6 = 0xc0a4;
    this_00->field_01B3[4] = uVar5;
    pCVar4 = st::fn_0040577C("BUT_FBENDDN",0);
    uVar5 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0x60,0x31,0,1,1,pCVar4,uVar6,uVar12,sVar7,uVar9,uVar14
                       ,pcVar13,uVar15);
    pFVar1 = this_00->vtable;
    uVar15 = 1;
    pcVar13 = nullptr;
    uVar14 = 0x2778;
    uVar9 = 0;
    sVar7 = 2;
    uVar12 = 0xc0b5;
    this_00->field_01B3[5] = uVar5;
    uVar6 = 0xc0a5;
    pCVar4 = st::fn_0040577C("BUT_FSQUARE",0);
    uVar5 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0x95,0x31,0,1,1,pCVar4,uVar6,uVar12,sVar7,uVar9,uVar14
                       ,pcVar13,uVar15);
    uVar15 = 1;
    pFVar1 = this_00->vtable;
    pcVar13 = nullptr;
    uVar14 = 0x277b;
    uVar9 = 0;
    sVar7 = 2;
    uVar12 = 0xc0b6;
    uVar6 = 0xc0a6;
    this_00->field_01B3[6] = uVar5;
    pCVar4 = st::fn_0040577C("BUT_FBREAK",0);
    uVar5 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0xca,0x31,0,1,1,pCVar4,uVar6,uVar12,sVar7,uVar9,uVar14
                       ,pcVar13,uVar15);
    uVar15 = 1;
    pFVar1 = this_00->vtable;
    pcVar13 = "MSK_FRLFT";
    uVar14 = 0x277c;
    uVar9 = 0;
    sVar7 = 2;
    uVar12 = 0xb109;
    uVar6 = 0xb108;
    this_00->field_01B3[7] = uVar5;
    pCVar4 = st::fn_0040577C("BUT_FINC",0);
    uVar5 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0x2b,0x52,0,1,6,pCVar4,uVar6,uVar12,sVar7,uVar9,uVar14
                       ,pcVar13,uVar15);
    uVar15 = 1;
    pFVar1 = this_00->vtable;
    pcVar13 = "MSK_FRRT";
    uVar14 = 0x277d;
    uVar9 = 0;
    sVar7 = 2;
    uVar12 = 0xb10b;
    uVar6 = 0xb10a;
    this_00->field_01D3[0] = uVar5;
    pCVar4 = st::fn_0040577C("BUT_FDEC",0);
    uVar5 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0x4d,0x52,0,1,6,pCVar4,uVar6,uVar12,sVar7,uVar9,uVar14
                       ,pcVar13,uVar15);
    uVar15 = 1;
    pFVar1 = this_00->vtable;
    pcVar13 = "MSK_FRLFT";
    uVar14 = 0x277e;
    uVar9 = 0;
    sVar7 = 2;
    uVar12 = 0xb10d;
    uVar6 = 0xb10c;
    this_00->field_01D3[1] = uVar5;
    pCVar4 = st::fn_0040577C("BUT_FRLFT",0);
    uVar5 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0xaa,0x52,0,1,6,pCVar4,uVar6,uVar12,sVar7,uVar9,uVar14
                       ,pcVar13,uVar15);
    uVar15 = 1;
    pFVar1 = this_00->vtable;
    pcVar13 = "MSK_FRRT";
    uVar14 = 0x277f;
    uVar9 = 0;
    sVar7 = 2;
    uVar12 = 0xb10f;
    uVar6 = 0xb10e;
    this_00->field_01D3[2] = uVar5;
    pCVar4 = st::fn_0040577C("BUT_FRRT",0);
    uVar5 = (*pFVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0xcc,0x52,0,1,6,pCVar4,uVar6,uVar12,sVar7,uVar9,uVar14
                       ,pcVar13,uVar15);
    this_00->field_01D3[3] = uVar5;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar8 = st::fn_006AD4D0("E:\\__titans\\Andrey\\frmpanel.cpp",0x43,0,iVar3,"%s",
                             "FrmPanelTy::InitFrmPanel");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\frmpanel.cpp",0x43);
  return;
}

// 00510250 FrmPanelTy::DoneFrmPanel
#line 4 "decomp/ST.exe/functions/00510250/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::DoneFrmPanel */

void __thiscall st::fn_00510250(FrmPanelTy *this)

{
  FrmPanelTy *pFVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  FrmPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pFVar2 = local_8;
  if (iVar3 == 0) {
    iVar3 = 8;
    puVar5 = local_8->field_01B3;
    do {
      if (*puVar5 != 0) {
        st::fn_006E56B0(pFVar2->field_000C,*puVar5);
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar5 = pFVar2->field_01D3;
    iVar3 = 4;
    do {
      if (*puVar5 != 0) {
        st::fn_006E56B0(pFVar2->field_000C,*puVar5);
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    g_frmPanel_0080168C = nullptr;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\frmpanel.cpp",0x4f,0,iVar3,"%s",
                             "FrmPanelTy::DoneFrmPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\frmpanel.cpp",0x4f);
  return;
}

// 00510370 FrmPanelTy::ShiftControls
#line 4 "decomp/ST.exe/functions/00510370/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::ShiftControls */

void __thiscall st::fn_00510370(FrmPanelTy *this,int param_1)

{
  FrmPanelTy *this_00;
  short sVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  FrmPanelTy *local_8;

  if (param_1 != this->field_005C) {
    local_8 = this;
    st::fn_00404D36((SpecPanelTy *)this,param_1);
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    this->field_002E = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (iVar3 == 0) {
      iVar3 = 8;
      puVar5 = local_8->field_01B3;
      do {
        if (*puVar5 != 0) {
          st::fn_006E6080(this_00,2,*puVar5,(undefined4 *)&this_00->field_0x18);
        }
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      puVar5 = this_00->field_01D3;
      iVar3 = 4;
      do {
        if (*puVar5 != 0) {
          st::fn_006E6080(this_00,2,*puVar5,(undefined4 *)&this_00->field_0x18);
        }
        puVar5 = puVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\frmpanel.cpp",0x5e,0,iVar3,"%s"
                               ,"FrmPanelTy::ShiftControls");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\frmpanel.cpp",0x5e);
  }
  return;
}

// 005104B0 FrmPanelTy::Update
#line 4 "decomp/ST.exe/functions/005104B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::Update */

void __thiscall st::fn_005104B0(FrmPanelTy *this)

{
  FrmPanelTy *this_00;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  bool bVar7;
  InternalExceptionFrame local_54;
  int local_10 [2];
  FrmPanelTy *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\frmpanel.cpp",0x70,0,iVar2,"%s"
                               ,"FrmPanelTy::Update");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,"E:\\__titans\\Andrey\\frmpanel.cpp",0x70);
    return;
  }
  piVar4 = &local_8->field_01AB;
  local_10[0] = *piVar4;
  local_10[1] = local_8->field_01AF;
  *piVar4 = 0;
  local_8->field_01AF = 0;
  st::fn_004035BC(g_allPlayers_007FA174,0x11,(AnonShape_0043BEB0_1C00EC12 *)piVar4);
  iVar2 = 2;
  bVar7 = true;
  piVar6 = local_10;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar7 = *piVar4 == *piVar6;
    piVar4 = piVar4 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar7);
  if (!bVar7) {
    this_00->field_0028 = 5;
    puVar5 = this_00->field_01B3;
    iVar2 = 8;
    do {
      if (*puVar5 != 0) {
        st::fn_006E6080(this_00,2,*puVar5,(undefined4 *)&this_00->field_0x18);
      }
      puVar5 = puVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

// 005105E0 FrmPanelTy::PaintBut
#line 4 "decomp/ST.exe/functions/005105E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::PaintBut */

void __thiscall
st::fn_005105E0(FrmPanelTy *this,AnonShape_005105E0_BBFE3E3B *param_1,char *param_2)

{
  FrmPanelTy *pFVar2;
  int iVar3;
  LPSTR text;
  int iVar4;
  int *piVar5;
  InternalExceptionFrame local_5c;
  int local_18;
  FrmPanelTy *local_14;
  int local_10;
  ushort *local_c;
  uint local_8;

  local_c = nullptr;
  piVar5 = param_1->field_0018;
  local_18 = *piVar5 - this->field_003C;
  if (this->field_005C == 0) {
    local_10 = piVar5[1] - DAT_00806734;
  }
  else {
    local_10 = piVar5[1] - this->field_0044;
  }
  local_8 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar3 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  pFVar2 = local_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\frmpanel.cpp",0x8f,0,iVar3,"%s"
                               ,"FrmPanelTy::PaintBut");
    if (iVar4 == 0) {
      st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\frmpanel.cpp",0x8f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  switch(param_1->field_0014) {
  case 0:
    local_8 = 0;
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  case 1:
    local_8 = (uint)(*(char *)(param_1->field_0010 + -0xbf04 + (int)local_14) != '\0');
    break;
  case 2:
  case 3:
    local_8 = 1;
  }
  iVar3 = 1;
  piVar5 = nullptr;
  text = st::fn_006F2C00(param_2,1,local_8);
  local_c = st::fn_006F1CE0(g_cMf32_00806790,1,text,piVar5,iVar3);
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)pFVar2->field_0068,local_18,local_10,'\x01',
         (byte *)local_c);
  st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_c);
  st::fn_006B3640
            ((int *)g_ddxContext_008075A8,pFVar2->field_0060,0xffffffff,pFVar2->field_003C,
             pFVar2->field_0044);
  g_currentExceptionFrame = local_5c.previous;
  return;
}

// 005107C0 FrmPanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/005107C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00404246|005107C0; family_names=FrmPanelTy::GetMessage; ret4=8;
   direct_offsets={10:1,14:0,18:0,1c:1} */

int __thiscall st::fn_005107C0(FrmPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  FrmPanelTy *this_00;
  int iVar2;
  LPSTR pCVar3;
  int iVar4;
  FrmPanelTyVTable *pFVar5;
  char *pcVar6;
  code *pcVar7;
  undefined4 uVar8;
  InternalExceptionFrame local_60;
  uint local_1c [4];
  undefined2 local_c;
  FrmPanelTy *local_8;

  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_60.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_60.previous;
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\frmpanel.cpp",0xe0,0,iVar2,"%s"
                               ,"FrmPanelTy::GetMessage");
    if (iVar4 == 0) {
      st::fn_006A5E40(iVar2,0,"E:\\__titans\\Andrey\\frmpanel.cpp",0xe0);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_00401401((SpecPanelTy *)local_8,message);
  SVar1 = message->id;
  if (SVar1 < (MESS_BLDLABPANELTY_C0A4|MESS_ID_CREATE)) {
    if (SVar1 < MESS_SHARED_C09F) {
      if (SVar1 < 0xb10c) {
        if (SVar1 != MESS_FRMPANELTY_B10B) {
          if (SVar1 < MESS_FRMPANELTY_B109) {
            if (SVar1 != MESS_FRMPANELTY_B108) {
              if (SVar1 == MESS_ID_CREATE) {
                st::fn_00404584(this_00);
                g_currentExceptionFrame = local_60.previous;
                return 0;
              }
              if (SVar1 != MESS_SHARED_0003) {
                g_currentExceptionFrame = local_60.previous;
                return 0;
              }
              st::fn_00402B53(this_00);
              g_currentExceptionFrame = local_60.previous;
              return 0;
            }
          }
          else {
            if (SVar1 == MESS_FRMPANELTY_B109) {
              pFVar5 = this_00->vtable;
              pcVar6 = "BUT_FINC";
              goto LAB_00510902;
            }
            if (SVar1 != MESS_FRMPANELTY_B10A) {
              g_currentExceptionFrame = local_60.previous;
              return 0;
            }
          }
cf_common_exit_005109A5:
          local_1c[1] = 0;
          local_1c[2] = 0;
          local_1c[3] = 0;
          local_c = 0;
          switch(SVar1) {
          case MESS_FRMPANELTY_B108:
            local_1c[0] = 9;
            break;
          default:
            local_1c[0] = 8;
            break;
          case MESS_FRMPANELTY_B10A:
            local_1c[0] = 10;
            break;
          case 0xb10c:
            local_1c[0] = 0xb;
            break;
          case MESS_CPANELTY_B10E:
            local_1c[0] = 0xc;
          }
          st::fn_00403C33((undefined4 *)0x18,local_1c,0,0xffffffff);
          st::fn_00405E2F(0xae);
          g_currentExceptionFrame = local_60.previous;
          return 0;
        }
        pFVar5 = this_00->vtable;
        pcVar6 = "BUT_FDEC";
      }
      else {
        switch(SVar1) {
        case 0xb10c:
        case MESS_CPANELTY_B10E:
          goto cf_common_exit_005109A5;
        case MESS_CPANELTY_B10D:
          pFVar5 = this_00->vtable;
          pcVar6 = "BUT_FRLFT";
          break;
        case 0xb10f:
          pFVar5 = this_00->vtable;
          pcVar6 = "BUT_FRRT";
          break;
        default:
          goto switchD_005108d5_default;
        }
      }
LAB_00510902:
      iVar4 = 1;
      iVar2 = 0;
      pcVar7 = thunk_FUN_0052a080;
      pCVar3 = st::fn_0040577C(pcVar6,0);
      (*pFVar5->PaintBut)((PanelTy *)this_00,(int)message,6,pCVar3,pcVar7,iVar2,iVar4);
      g_currentExceptionFrame = local_60.previous;
      return 0;
    }
    switch(SVar1) {
    case MESS_SHARED_C09F:
      uVar8 = 1;
      break;
    case MESS_BEHPANELTY_C0A0:
      uVar8 = 3;
      break;
    case MESS_FSGSTY_C0A1:
      uVar8 = 6;
      break;
    case MESS_SHARED_C0A2:
      uVar8 = 7;
      break;
    case MESS_SHARED_C0A3:
      uVar8 = 2;
      break;
    case MESS_BLDLABPANELTY_C0A4:
      uVar8 = 4;
      break;
    case MESS_FRMPANELTY_C0A5:
      uVar8 = 5;
      break;
    default:
      goto switchD_00510930_default;
    }
    st::fn_004035AD(g_cursorClass_00802A30,0x4e,uVar8);
switchD_00510930_default:
    (*this_00->vtable->SetPanel)((SpecPanelTy *)this_00,'\0');
    st::fn_00405E2F(0xae);
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  switch(SVar1) {
  case MESS_BLDLABPANELTY_C0A4|MESS_ID_CREATE:
    goto cf_common_exit_005109A5;
  default:
    goto switchD_005108d5_default;
  case MESS_INTERCOMPANELTY_C0AF:
    pcVar6 = "BUT_FLINE";
    break;
  case 0xc0b0:
    pcVar6 = "BUT_FBENDUP";
    break;
  case MESS_BEHPANELTY_C0B1:
    pcVar6 = "BUT_FHOLD";
    break;
  case 0xc0b2:
    pcVar6 = "BUT_FLOCK";
    break;
  case MESS_BLDLABPANELTY_C0B3:
    pcVar6 = "BUT_FWALL";
    break;
  case MESS_RESEARCHPANELTY_C0B4:
    pcVar6 = "BUT_FBENDDN";
    break;
  case MESS_SHARED_C0B5:
    pcVar6 = "BUT_FSQUARE";
    break;
  case MESS_RESEARCHPANELTY_C0B4|MESS_ID_CREATE:
    pcVar6 = "BUT_FBREAK";
  }
  pCVar3 = st::fn_0040577C(pcVar6,0);
  st::fn_00405D9E(this_00,(AnonShape_005105E0_BBFE3E3B *)message,pCVar3);
switchD_005108d5_default:
  g_currentExceptionFrame = local_60.previous;
  return 0;
}

