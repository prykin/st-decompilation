#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/setamine.cpp

// 0053CEF0 SAMPanelTy::InitSAMPanel
#line 4 "decomp/ST.exe/functions/0053CEF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::InitSAMPanel */

void __thiscall st::fn_0053CEF0(SAMPanelTy *this)

{
  SAMPanelTyVTable *pSVar1;
  SAMPanelTy *this_00;
  int iVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  byte *pbVar6;
  uint *resourceString;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  short sVar10;
  uint uVar11;
  byte bVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  int iVar15;
  char *pcVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  InternalExceptionFrame local_5c;
  SAMPanelTy *local_14;
  int local_10;
  uint *local_c;
  int local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar3 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  this_00 = local_14;
  if (iVar3 == 0) {
    g_sAMPanel_008016EC = local_14;
    st::fn_00403800
              ((SpecPanelTy *)local_14,"BKG_SETANYW",0x2f,2,0xc6,0xc,0x2735,0xc9,0x77);
    puVar17 = nullptr;
    iVar15 = 0;
    iVar3 = 1;
    bVar12 = 0;
    uVar11 = 0xffffffff;
    pCVar4 = st::fn_0040577C("BUT_PRODWEAP",0);
    puVar5 = st::fn_00709AF0
                       (PTR_00806794,CASE_B,pCVar4,uVar11,bVar12,iVar3,iVar15,puVar17);
    local_c = this_00->field_01B5;
    this_00->field_01B1 = puVar5;
    iVar3 = 0xb4ff;
    local_8 = 0x17;
    local_10 = 6;
    do {
      uVar18 = 1;
      pcVar16 = nullptr;
      uVar14 = 0;
      pSVar1 = this_00->vtable;
      uVar13 = 0;
      iVar15 = iVar3 + 0x10;
      sVar10 = 0;
      uVar8 = 0;
      iVar7 = 1;
      iVar9 = iVar3;
      pCVar4 = st::fn_0040577C("BUT_PRODWEAP",0);
      pCVar4 = st::fn_006F2C00(pCVar4,iVar7,uVar8);
      iVar7 = local_8;
      uVar11 = (*pSVar1->CreateBut)
                         ((PanelTy *)this_00,0,1,0x24,local_8 + 1,0,1,1,pCVar4,iVar9,iVar15,sVar10,
                          uVar13,uVar14,pcVar16,uVar18);
      *local_c = uVar11;
      pbVar6 = (byte *)st::fn_00710BA0(this_00->field_0189,this_00->field_0185,0,0x37,iVar7,0xd2
                                           ,0xc,0);
      if (pbVar6 != nullptr) {
        uVar11 = 0;
        iVar7 = -1;
        iVar15 = 0;
        resourceString = (uint *)st::fn_006B0140(iVar3 - 0x842b,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_0189,resourceString,iVar15,iVar7,uVar11);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x37,local_8,'\x01',pbVar6);
        st::fn_00710F00(this_00->field_0189);
      }
      iVar3 = iVar3 + 1;
      local_c = local_c + 1;
      local_8 = local_8 + 0xb;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    uVar19 = 1;
    pSVar1 = this_00->vtable;
    pcVar16 = nullptr;
    uVar18 = 0;
    uVar13 = 0;
    sVar10 = 0;
    uVar14 = 0xb518;
    uVar8 = 0xb508;
    pCVar4 = st::fn_0040577C("BUT_BIG",0);
    uVar8 = (*pSVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0xa0,0x5c,0,1,1,pCVar4,uVar8,uVar14,sVar10,uVar13,
                       uVar18,pcVar16,uVar19);
    this_00->field_01CD = uVar8;
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar15 = st::fn_006AD4D0("E:\\__titans\\Andrey\\setamine.cpp",0x29,0,iVar3,"%s",
                              "SAMPanelTy::InitSAMPanel");
  if (iVar15 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\setamine.cpp",0x29);
  return;
}

// 0053D1A0 SAMPanelTy::DoneSAMPanel
#line 4 "decomp/ST.exe/functions/0053D1A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::DoneSAMPanel */

void __thiscall st::fn_0053D1A0(SAMPanelTy *this)

{
  SAMPanelTy *pSVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  SAMPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    iVar3 = 7;
    local_8->field_01B1 = nullptr;
    puVar5 = local_8->field_01B5;
    do {
      if (*puVar5 != 0) {
        st::fn_006E56B0(pSVar2->field_000C,*puVar5);
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    g_sAMPanel_008016EC = nullptr;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\setamine.cpp",0x38,0,iVar3,"%s",
                             "SAMPanelTy::DoneSAMPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\setamine.cpp",0x38);
  return;
}

// 0053D290 SAMPanelTy::ShiftControls
#line 4 "decomp/ST.exe/functions/0053D290/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::ShiftControls */

void __thiscall st::fn_0053D290(SAMPanelTy *this,int param_1)

{
  SAMPanelTy *this_00;
  short sVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  InternalExceptionFrame local_4c;
  SAMPanelTy *local_8;

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
      iVar3 = 7;
      puVar5 = local_8->field_01B5;
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
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\setamine.cpp",0x46,0,iVar3,"%s"
                               ,"SAMPanelTy::ShiftControls");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\setamine.cpp",0x46);
  }
  return;
}

// 0053D3B0 SAMPanelTy::Update
#line 4 "decomp/ST.exe/functions/0053D3B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::Update */

void __thiscall st::fn_0053D3B0(SAMPanelTy *this)

{
  SAMPanelTy *this_00;
  int iVar2;
  int iVar3;
  uint *puVar4;
  InternalExceptionFrame local_54;
  undefined4 local_10;
  undefined2 local_c;
  SAMPanelTy *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    local_10 = local_8->field_01AB;
    local_c = local_8->field_01AF;
    st::fn_004035BC
              (g_allPlayers_007FA174,0x12,(AnonShape_0043BEB0_1C00EC12 *)&local_8->field_01AB);
    this_00->field_0028 = 5;
    puVar4 = this_00->field_01B5;
    iVar2 = 6;
    do {
      if (*puVar4 != 0) {
        st::fn_006E6080(this_00,2,*puVar4,(undefined4 *)&this_00->field_0x18);
      }
      puVar4 = puVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\setamine.cpp",0x57,0,iVar2,"%s",
                             "SAMPanelTy::Update");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\Andrey\\setamine.cpp",0x57);
  return;
}

// 0053D4D0 SAMPanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/0053D4D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\setamine.cpp
   SAMPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0053D4D0; family_names=SAMPanelTy::GetMessage; ret4=7;
   direct_offsets={10:4,14:0,18:1,1c:0} */

int __thiscall st::fn_0053D4D0(SAMPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  SAMPanelTyVTable *pSVar2;
  int iVar3;
  SAMPanelTy *this_00;
  byte bVar5;
  int iVar6;
  LPSTR pCVar7;
  int iVar8;
  byte *pbVar9;
  UINT UVar10;
  int iVar11;
  InternalExceptionFrame local_54;
  byte local_10;
  undefined3 uStack_f;
  SAMPanelTy *local_c;
  undefined1 local_6;
  char local_5;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  iVar6 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar11 = st::fn_006AD4D0("E:\\__titans\\Andrey\\setamine.cpp",0x94,0,iVar6,
                                "%s","SAMPanelTy::GetMessage");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,"E:\\__titans\\Andrey\\setamine.cpp",0x94);
    return 0xffff;
  }
  st::fn_00401401((SpecPanelTy *)local_c,message);
  SVar1 = message->id;
  if (SVar1 < 0xb509) {
    if (SVar1 == MESS_SAMPANELTY_B508) {
      local_6 = 0xff;
      st::fn_00403C33((undefined4 *)0x2a,(uint *)&local_6,0,0xffffffff);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (SVar1 < 4) {
      if (SVar1 == MESS_SHARED_0003) {
        st::fn_00403D96(this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (SVar1 == MESS_ID_CREATE) {
        st::fn_0040132F(this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    else if ((0xb4fe < SVar1) && (SVar1 < MESS_SAMPANELTY_B508)) {
      local_5 = (char)message->id + 1;
      st::fn_00403C33((undefined4 *)0x2a,(uint *)&local_5,0,0xffffffff);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  else if (0xb50e < SVar1) {
    if (SVar1 < MESS_SAMPANELTY_B518) {
      iVar6 = this_00->field_003C;
      bVar5 = (char)message->id - 0xf;
      iVar11 = *(int *)(message->arg1).ptr;
      iVar3 = *(int *)((int)(message->arg1).ptr + 4);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_10 = CONCAT31(uStack_f,bVar5);
      iVar8 = DAT_00806734;
      if (this_00->field_005C != 0) {
        iVar8 = this_00->field_0044;
      }
      pbVar9 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01B1,
                                    (uint)(*(char *)((int)this_00->field_01B5 + (bVar5 - 10)) ==
                                          '\0'));
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,iVar11 - iVar6,iVar3 - iVar8,
             '\x01',pbVar9);
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
    }
    else if (SVar1 == MESS_SAMPANELTY_B518) {
      pSVar2 = this_00->vtable;
      iVar11 = 1;
      iVar6 = 0;
      UVar10 = 0x2755;
      pCVar7 = st::fn_0040577C("BUT_BIG",0);
      (*pSVar2->PaintIBut)((PanelTy *)this_00,(int)message,pCVar7,UVar10,iVar6,iVar11);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

