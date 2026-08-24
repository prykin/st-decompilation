#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/upginfo.cpp

// 005528B0 UpgPanelTy::InitUpgPanel
#line 4 "decomp/ST.exe/functions/005528B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::InitUpgPanel */

void __thiscall st::fn_005528B0(UpgPanelTy *this)

{
  UpgPanelTy *this_00;
  int iVar2;
  LPSTR pCVar2;
  ushort *puVar3;
  int iVar6;
  int iVar4;
  uint uVar5;
  int iVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  UINT UVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  InternalExceptionFrame local_4c;
  UpgPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    uVar13 = 0x77;
    uVar12 = 0xc9;
    UVar11 = 0x36c1;
    iVar10 = 0xc;
    iVar7 = 0xc6;
    uVar5 = 2;
    iVar4 = 0x31;
    g_upgPanel_00802A48 = local_8;
    pCVar2 = st::fn_0040577C(st::mutable_c_string("BKG_UPDATESW"),0);
    /* ST_CALLSITE[00552914]: CALL 0x00403800; direct=00403800 SpecPanelTy::InitPanel */
    st::fn_00403800
              ((SpecPanelTy *)this_00,pCVar2,iVar4,uVar5,iVar7,iVar10,UVar11,uVar12,uVar13);
    puVar3 = st::fn_00709AF0
                       (PTR_00806794,CASE_B,(char *)&DAT_007c20a0,0xffffffff,0,1,0,nullptr);
    this_00->field_03EB = puVar3;
    puVar3 = st::fn_00709AF0
                       (PTR_00806794,CASE_B,(char *)&DAT_007c38c8,0xffffffff,0,1,0,nullptr);
    this_00->field_03EF = puVar3;
    puVar14 = nullptr;
    iVar7 = 0;
    iVar4 = 1;
    bVar9 = 0;
    uVar8 = 0xffffffff;
    pCVar2 = st::fn_0040577C(st::mutable_c_string("FRAMES"),0);
    puVar3 = st::fn_00709AF0
                       (PTR_00806794,CASE_B,pCVar2,uVar8,bVar9,iVar4,iVar7,puVar14);
    this_00->field_03F3 = puVar3;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\upginfo.cpp"),0x1d,0,iVar2,st::mutable_c_string("%s"),
                             "UpgPanelTy::InitUpgPanel");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\upginfo.cpp"),0x1d);
  return;
}

// 00552A30 UpgPanelTy::DoneUpgPanel
#line 4 "decomp/ST.exe/functions/00552A30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::DoneUpgPanel */

void __thiscall st::fn_00552A30(UpgPanelTy *this)

{
  InternalExceptionFrame *pIVar2;
  int errorCode;
  int iVar3;
  int local_48 [16];
  UpgPanelTy *local_8;

  pIVar2 = g_currentExceptionFrame;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_48,0);
  if (errorCode == 0) {
    local_8->field_03F3 = nullptr;
    local_8->field_03EF = nullptr;
    local_8->field_03EB = nullptr;
    g_upgPanel_00802A48 = nullptr;
    g_currentExceptionFrame = pIVar2;
    return;
  }
  g_currentExceptionFrame = pIVar2;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\upginfo.cpp"),0x2a,0,errorCode,
                             st::mutable_c_string("%s"),"UpgPanelTy::DoneUpgPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\upginfo.cpp"),0x2a);
  return;
}

// 00552AF0 UpgPanelTy::ShiftControls
#line 4 "decomp/ST.exe/functions/00552AF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::ShiftControls */

void __thiscall st::fn_00552AF0(UpgPanelTy *this,int param_1)

{
  InternalExceptionFrame *pIVar2;
  short sVar3;
  int errorCode;
  int iVar4;
  int local_44 [16];

  if (param_1 != this->field_005C) {
    /* ST_CALLSITE[00552B07]: CALL 0x00404d36; direct=00404D36 SpecPanelTy::ShiftControls */
    st::fn_00404D36((SpecPanelTy *)this,param_1);
    sVar3 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar3 = -sVar3;
    }
    this->field_002E = sVar3;
    pIVar2 = g_currentExceptionFrame;
    errorCode = st::fn_0072D7F0(local_44,0);
    if (errorCode == 0) {
      g_currentExceptionFrame = pIVar2;
      return;
    }
    g_currentExceptionFrame = pIVar2;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\upginfo.cpp"),0x36,0,errorCode,
                               st::mutable_c_string("%s"),"UpgPanelTy::ShiftControls");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\upginfo.cpp"),0x36);
  }
  return;
}

// 00552BC0 UpgPanelTy::Update
#line 4 "decomp/ST.exe/functions/00552BC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::Update */

void __thiscall st::fn_00552BC0(UpgPanelTy *this)

{
  UpgPanelTy *pUVar2;
  int iVar3;
  uint uVar3;
  BITMAPINFO *pBVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar10;
  uint local_298 [144];
  InternalExceptionFrame local_58;
  UpgPanelTy *local_14;
  int local_10;
  int local_c;
  int local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar3 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  pUVar2 = local_14;
  if (iVar3 == 0) {
    puVar8 = &local_14->field_01AB;
    puVar7 = puVar8;
    puVar9 = local_298;
    memmove(puVar9, puVar7, 0x240); /* compiler REP MOVS byte copy */
    /* ST_CALLSITE[00552C19]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
    st::fn_004035BC(g_allPlayers_007FA174,0x10,(AnonShape_0043BEB0_1C00EC12 *)puVar8);
    iVar6 = 0x19;
    puVar8 = &pUVar2->field_01AB;
    local_8 = 3;
    do {
      uVar3 = st::fn_004033F0((Global_sub_005276E0_param_1Enum)*puVar8,(byte)(*puVar8 >> 0x10));
      if (*(Global_sub_005276E0_param_1Enum *)(puVar8 + 2) == CASE_0) {
        pAVar10 = (AnonShape_GLOBAL_0081175C_57F682DD *)pUVar2->field_03EF;
      }
      else {
        pAVar10 = (AnonShape_GLOBAL_0081175C_57F682DD *)pUVar2->field_03EB;
      }
      pBVar4 = st::fn_0070B3A0(pAVar10,uVar3);
      /* ST_CALLSITE[00552C6B]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)pUVar2->field_0068,0x24,iVar6,'\x01',(byte *)pBVar4);
      puVar8 = puVar8 + 0xc;
      iVar6 = iVar6 + 0x1b;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    local_8 = 0x5e;
    puVar8 = &pUVar2->field_023B;
    local_c = 2;
    do {
      iVar6 = 0x19;
      local_10 = 3;
      do {
        uVar3 = st::fn_004033F0((Global_sub_005276E0_param_1Enum)*puVar8,(byte)(*puVar8 >> 0x10));
        if (*(Global_sub_005276E0_param_1Enum *)(puVar8 + 2) == CASE_0) {
          pAVar10 = (AnonShape_GLOBAL_0081175C_57F682DD *)pUVar2->field_03EF;
        }
        else {
          pAVar10 = (AnonShape_GLOBAL_0081175C_57F682DD *)pUVar2->field_03EB;
        }
        pBVar4 = st::fn_0070B3A0(pAVar10,uVar3);
        /* ST_CALLSITE[00552CDF]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pUVar2->field_0068,local_8,iVar6,'\x01',
               (byte *)pBVar4);
        puVar8 = puVar8 + 0xc;
        iVar6 = iVar6 + 0x1b;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      local_8 = local_8 + 0x33;
      local_c = local_c + -1;
    } while (local_c != 0);
    iVar6 = 0x19;
    puVar8 = &pUVar2->field_035B;
    local_c = 3;
    local_10 = 0;
    do {
      uVar3 = st::fn_004033F0((Global_sub_005276E0_param_1Enum)*puVar8,(byte)(*puVar8 >> 0x10));
      if (*(Global_sub_005276E0_param_1Enum *)(puVar8 + 2) == CASE_0) {
        pAVar10 = (AnonShape_GLOBAL_0081175C_57F682DD *)pUVar2->field_03EF;
      }
      else {
        pAVar10 = (AnonShape_GLOBAL_0081175C_57F682DD *)pUVar2->field_03EB;
      }
      pBVar4 = st::fn_0070B3A0(pAVar10,uVar3);
      /* ST_CALLSITE[00552D58]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)pUVar2->field_0068,0xd3,iVar6,'\x01',(byte *)pBVar4);
      puVar8 = puVar8 + 0xc;
      iVar6 = iVar6 + 0x1b;
      local_c = local_c + -1;
    } while (local_c != 0);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\upginfo.cpp"),0x54,0,iVar3,st::mutable_c_string("%s"),
                             "UpgPanelTy::Update");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\upginfo.cpp"),0x54);
  return;
}

// 00552E40 UpgPanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/00552E40/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\upginfo.cpp
   UpgPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00552E40; family_names=UpgPanelTy::GetMessage; ret4=3;
   direct_offsets={10:1,14:0,18:0,1c:0} */

int __thiscall st::fn_00552E40(UpgPanelTy *this,STMessage *message)

{
  UpgPanelTy *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  UpgPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\upginfo.cpp"),0x68,0,iVar2,st::mutable_c_string("%s"),
                               "UpgPanelTy::GetMessage");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\upginfo.cpp"),0x68);
    return 0xffff;
  }
  /* ST_CALLSITE[00552E79]: CALL 0x00401401; direct=00401401 SpecPanelTy::GetMessage */
  st::fn_00401401((SpecPanelTy *)local_8,message);
  if (message->id == MESS_ID_CREATE) {
    /* ST_CALLSITE[00552EA4]: CALL 0x00401d20; direct=00401D20 UpgPanelTy::InitUpgPanel */
    st::fn_00401D20(this_00);
  }
  else if (message->id == MESS_SHARED_0003) {
    /* ST_CALLSITE[00552E8B]: CALL 0x00401ab4; direct=00401AB4 UpgPanelTy::DoneUpgPanel */
    st::fn_00401AB4(this_00);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}

