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
  LPSTR pCVar3;
  ushort *puVar4;
  byte *pbVar5;
  char *pcVar17_mg1;
  int iVar15;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  short sVar9;
  uint uVar10;
  byte bVar11;
  undefined2 uVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar16;
  char *pcVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  InternalExceptionFrame local_5c;
  SAMPanelTy *local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar3 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  this_00 = local_14;
  if (iVar3 == 0) {
    g_sAMPanel_008016EC = local_14;
    /* ST_CALLSITE[0053CF4C]: CALL 0x00403800; direct=00403800 SpecPanelTy::InitPanel */
    st::fn_00403800
              ((SpecPanelTy *)local_14,st::mutable_c_string("BKG_SETANYW"),0x2f,2,0xc6,0xc,0x2735,0xc9,0x77);
    puVar18 = nullptr;
    iVar16 = 0;
    iVar13 = 1;
    bVar11 = 0;
    uVar10 = 0xffffffff;
    pCVar3 = st::fn_0040577C(st::mutable_c_string("BUT_PRODWEAP"),0);
    puVar4 = st::fn_00709AF0
                       (PTR_00806794,CASE_B,pCVar3,uVar10,bVar11,iVar13,iVar16,puVar18);
    local_c = &this_00->field_01B5;
    this_00->field_01B1 = puVar4;
    iVar13 = 0xb4ff;
    local_8 = 0x17;
    local_10 = 6;
    do {
      uVar19 = 1;
      pcVar17 = nullptr;
      uVar14 = 0;
      pSVar1 = this_00->vtable;
      uVar12 = 0;
      iVar16 = iVar13 + 0x10;
      sVar9 = 0;
      uVar7 = 0;
      iVar6 = 1;
      iVar8 = iVar13;
      pCVar3 = st::fn_0040577C(st::mutable_c_string("BUT_PRODWEAP"),0);
      pCVar3 = st::fn_006F2C00(pCVar3,iVar6,uVar7);
      iVar6 = local_8;
      /* ST_CALLSITE[0053CFE2]: CALL dword ptr [EDX + 0x4] */
      uVar7 = (*pSVar1->CreateBut)
                        ((PanelTy *)this_00,0,1,0x24,local_8 + 1,0,1,1,st::machine_word_boundary_cast<undefined4>(pCVar3),iVar8,iVar16,sVar9,
                         uVar12,uVar14,pcVar17,uVar19);
      *local_c = uVar7;
      pbVar5 = (byte *)st::fn_00710BA0(this_00->field_0189,this_00->field_0185,0,0x37,iVar6,0xd2
                                           ,0xc,0);
      if (pbVar5 != nullptr) {
        uVar10 = 0;
        iVar6 = -1;
        iVar16 = 0;
        pcVar17_mg1 = st::fn_006B0140(iVar13 - 0x842b,g_hINSTANCE_00807618);
        st::fn_007119C0(this_00->field_0189,pcVar17_mg1,iVar16,iVar6,uVar10);
        /* ST_CALLSITE[0053D041]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x37,local_8,'\x01',pbVar5);
        st::fn_00710F00(this_00->field_0189);
      }
      iVar13 = iVar13 + 1;
      local_c = local_c + 1;
      local_8 = local_8 + 0xb;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    uVar20 = 1;
    pSVar1 = this_00->vtable;
    pcVar17 = nullptr;
    uVar19 = 0;
    uVar12 = 0;
    sVar9 = 0;
    uVar14 = 0xb518;
    uVar7 = 0xb508;
    pCVar3 = st::fn_0040577C(st::mutable_c_string("BUT_BIG"),0);
    /* ST_CALLSITE[0053D0AD]: CALL dword ptr [EDI + 0x4] */
    uVar7 = (*pSVar1->CreateBut)
                      ((PanelTy *)this_00,0,1,0xa0,0x5c,0,1,1,st::machine_word_boundary_cast<undefined4>(pCVar3),uVar7,uVar14,sVar9,uVar12,
                       uVar19,pcVar17,uVar20);
    this_00->field_01CD = uVar7;
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar15 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\setamine.cpp"),0x29,0,iVar3,st::mutable_c_string("%s"),
                              "SAMPanelTy::InitSAMPanel");
  if (iVar15 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\setamine.cpp"),0x29);
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
  int iVar5;
  uint *puVar6;
  InternalExceptionFrame local_4c;
  SAMPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    iVar5 = 7;
    local_8->field_01B1 = nullptr;
    puVar6 = &local_8->field_01B5;
    do {
      if (*puVar6 != 0) {
        st::fn_006E56B0(pSVar2->field_000C,*puVar6);
        *puVar6 = 0;
      }
      puVar6 = puVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    g_sAMPanel_008016EC = nullptr;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\setamine.cpp"),0x38,0,iVar3,st::mutable_c_string("%s"),
                             "SAMPanelTy::DoneSAMPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\setamine.cpp"),0x38);
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
  int iVar5;
  int *piVar6;
  InternalExceptionFrame local_4c;
  SAMPanelTy *local_8;

  if (param_1 != this->field_005C) {
    local_8 = this;
    /* ST_CALLSITE[0053D2AB]: CALL 0x00404d36; direct=00404D36 SpecPanelTy::ShiftControls */
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
      iVar5 = 7;
      piVar6 = st::pointer_boundary_cast<int *>(&local_8->field_01B5);
      do {
        if (*piVar6 != 0) {
          st::fn_006E6080(this_00,2,*piVar6,(undefined4 *)&this_00->field_0x18);
        }
        piVar6 = piVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\setamine.cpp"),0x46,0,iVar3,st::mutable_c_string("%s")
                               ,"SAMPanelTy::ShiftControls");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\setamine.cpp"),0x46);
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
  int iVar4;
  int *piVar5;
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
    /* ST_CALLSITE[0053D402]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    st::fn_004035BC
              (g_allPlayers_007FA174,0x12,(AnonShape_0043BEB0_1C00EC12 *)&local_8->field_01AB);
    this_00->field_0028 = 5;
    piVar5 = st::pointer_boundary_cast<int *>(&this_00->field_01B5);
    iVar4 = 6;
    do {
      if (*piVar5 != 0) {
        st::fn_006E6080(this_00,2,*piVar5,(undefined4 *)&this_00->field_0x18);
      }
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\setamine.cpp"),0x57,0,iVar2,st::mutable_c_string("%s"),
                             "SAMPanelTy::Update");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\setamine.cpp"),0x57);
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
  uint32_t _local_10;

  STMessageId SVar1;
  SAMPanelTyVTable *pSVar2;
  int iVar3;
  SAMPanelTy *this_00;
  byte bVar5;
  int iVar6;
  LPSTR pCVar6;
  int iVar7;
  BITMAPINFO *pBVar8;
  int iVar11;
  UINT UVar9;
  int iVar10;
  int iVar12;
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
    iVar11 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\setamine.cpp"),0x94,0,iVar6,
                                st::mutable_c_string("%s"),"SAMPanelTy::GetMessage");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Andrey\\setamine.cpp"),0x94);
    return 0xffff;
  }
  /* ST_CALLSITE[0053D50E]: CALL 0x00401401; direct=00401401 SpecPanelTy::GetMessage */
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
        /* ST_CALLSITE[0053D553]: CALL 0x00403d96; direct=00403D96 SAMPanelTy::DoneSAMPanel */
        st::fn_00403D96(this_00);
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (SVar1 == MESS_ID_CREATE) {
        /* ST_CALLSITE[0053D539]: CALL 0x0040132f; direct=0040132F SAMPanelTy::InitSAMPanel */
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
      iVar10 = this_00->field_003C;
      bVar5 = (char)message->id - 0xf;
      iVar12 = *(int *)(message->arg1).ptr;
      iVar3 = *(int *)((int)(message->arg1).ptr + 4);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_10 = CONCAT31(uStack_f,bVar5);
      iVar7 = DAT_00806734;
      if (this_00->field_005C != 0) {
        iVar7 = this_00->field_0044;
      }
      pBVar8 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01B1,
                            (uint)(*(char *)((int)&this_00->field_01AB + (uint)bVar5) == '\0'));
      /* ST_CALLSITE[0053D681]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,iVar12 - iVar10,iVar3 - iVar7,
             '\x01',(byte *)pBVar8);
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
    }
    else if (SVar1 == MESS_SAMPANELTY_B518) {
      pSVar2 = this_00->vtable;
      iVar12 = 1;
      iVar10 = 0;
      UVar9 = 0x2755;
      pCVar6 = st::fn_0040577C(st::mutable_c_string("BUT_BIG"),0);
      /* ST_CALLSITE[0053D618]: CALL dword ptr [EBX + 0x10] */
      (*pSVar2->PaintIBut)((PanelTy *)this_00,(int)message,pCVar6,UVar9,iVar10,iVar12);
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

