#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/behpanel.cpp

// 004ED630 BehPanelTy::InitBehPanel
#line 4 "decomp/ST.exe/functions/004ED630/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::InitBehPanel */

void __thiscall st::fn_004ED630(BehPanelTy *this)

{
  BehPanelTyVTable *pBVar1;
  BehPanelTy *this_00;
  int iVar7;
  LPSTR pCVar3;
  ushort *puVar4;
  char *pcVar5_mg1;
  char *pcVar5_mg0;
  int local_EAX_721;
  BITMAPINFO *pBVar5;
  int iVar13;
  byte bVar6;
  int iVar8;
  uint uVar9;
  Global_mfRLoad_param_2Enum GVar11;
  uint uVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  ushort uVar16;
  int iVar17;
  UINT UVar18;
  uint uVar19;
  int iVar20;
  char *pcVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  int local_994 [32];
  undefined4 auStack_914 [3];
  int aiStack_908 [9];
  int aiStack_8e4 [22];
  undefined4 auStack_88c [7];
  undefined4 auStack_870 [497];
  InternalExceptionFrame local_ac;
  undefined4 local_68 [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  int local_20;
  int *local_1c;
  BehPanelTy *local_18;
  int local_14;
  uint local_10;
  int local_c;
  int local_8;

  puVar23 = local_68;
  local_18 = this;
  for (iVar8 = 0x14; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar23 = 0;
    puVar23 = puVar23 + 1;
  }
  memset(local_994, 0, 0x8e8); /* compiler bulk-zero initialization */
  local_ac.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ac;
  iVar7 = st::fn_0072D7F0(local_ac.jumpBuffer,0);
  this_00 = local_18;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_ac.previous;
    iVar13 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\behpanel.cpp"),0x68,0,iVar7,
                                st::mutable_c_string("%s"),"BehPanelTy::InitBehPanel");
    if (iVar13 == 0) {
      st::fn_006A5E40(iVar7,0,st::mutable_c_string("E:\\__titans\\Andrey\\behpanel.cpp"),0x68);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  uVar22 = 0x77;
  uVar19 = 0x99;
  UVar18 = 0x4e5d;
  iVar17 = 0xb;
  iVar14 = 0x84;
  uVar12 = 3;
  iVar8 = 0x36;
  g_behPanel_00801678 = local_18;
  pCVar3 = st::fn_0040577C(st::mutable_c_string("BKG_BEHAVIOURW"),0);
  /* ST_CALLSITE[004ED6BB]: CALL 0x00403800; direct=00403800 SpecPanelTy::InitPanel */
  st::fn_00403800
            ((SpecPanelTy *)this_00,pCVar3,iVar8,uVar12,iVar14,iVar17,UVar18,uVar19,uVar22);
  puVar4 = st::fn_00709AF0
                     (PTR_00806794,CASE_B,st::mutable_c_string("BUT_MSK_SI"),0xffffffff,0,1,0,nullptr);
  this_00->field_02B8 = puVar4;
  this_00->field_01AF = 0x2b;
  this_00->field_01B0 = 0x2c;
  this_00->field_01B1 = 5;
  this_00->field_01B2 = 6;
  this_00->field_0x1b3 = 0x4d;
  this_00->field_0x1b4 = 0x2d;
  local_10 = local_10 & 0xffffff00;
  do {
    if (DAT_0080874e == '\x03') {
      switch(local_10 & 0xff) {
      case 0:
        local_c = 0x24;
        local_8 = 0x12;
        break;
      case 1:
        local_c = 0x61;
        local_8 = 0x12;
        break;
      case 2:
        local_c = 0x96;
        local_8 = 0x12;
        break;
      case 3:
        local_c = 0x24;
        local_8 = 0x2c;
        break;
      case 4:
        local_c = 0x61;
        local_8 = 0x2c;
        break;
      case 5:
        local_c = 0x96;
        local_8 = 0x2c;
      }
      goto switchD_004ed72f_default;
    }
    switch(local_10 & 0xff) {
    case 0:
      local_c = 0x20;
      local_8 = 0x15;
      break;
    case 1:
      local_c = 0x5d;
      local_8 = 0x15;
      break;
    case 2:
      local_c = 0x9a;
      local_8 = 0x15;
      break;
    case 3:
      local_c = 0x20;
      goto LAB_004ed7fd;
    case 4:
      local_c = 0x5d;
      goto LAB_004ed7fd;
    case 5:
      local_c = 0x9a;
LAB_004ed7fd:
      local_8 = 0x39;
    }
switchD_004ed72f_default:
    uVar9 = local_10 & 0xff;
    iVar8 = local_c + this_00->field_003C;
    local_994[uVar9 * 0x5f] = 0;
    local_994[uVar9 * 0x5f + 2] = iVar8;
    iVar8 = DAT_00806734;
    if (this_00->field_005C != 0) {
      iVar8 = this_00->field_0044;
    }
    puVar23 = nullptr;
    iVar20 = 0;
    local_994[uVar9 * 0x5f + 3] = iVar8 + local_8;
    iVar17 = 1;
    bVar6 = 0;
    uVar15 = 0xffffffff;
    uVar12 = 0;
    iVar14 = 1;
    auStack_88c[uVar9 * 0x5f] = 1;
    iVar8 = 0;
    auStack_88c[uVar9 * 0x5f + 1] = 1;
    if (DAT_0080874e == '\x03') {
      pcVar5_mg1 = st::fn_00405493((&this_00->field_01AF)[uVar9],0);
      pCVar3 = st::fn_0040577C(pcVar5_mg1,iVar8);
      pCVar3 = st::fn_006F2C00(pCVar3,iVar14,uVar12);
      GVar11 = CASE_6;
    }
    else {
      pcVar5_mg0 = st::fn_00405493((&this_00->field_01AF)[uVar9],0);
      pCVar3 = st::fn_0040577C(pcVar5_mg0,iVar8);
      pCVar3 = st::fn_006F2C00(pCVar3,iVar14,uVar12);
      GVar11 = CASE_1;
    }
    puVar4 = st::fn_00709AF0
                       (PTR_00806794,GVar11,pCVar3,uVar15,bVar6,iVar17,iVar20,puVar23);
    iVar8 = *(int *)(puVar4 + 4);
    local_994[uVar9 * 0x5f + 4] = *(int *)(puVar4 + 2);
    local_994[uVar9 * 0x5f + 5] = iVar8;
    local_14 = (int)&this_00->vtable + uVar9 * 0x27;
    ((undefined1 *)local_14)[0x1ce] = 1;
    local_EAX_721 = st::fn_00401A78((&this_00->field_01AF)[uVar9],0);
    *(int *)(local_14 + 0x1cf) = local_EAX_721;
    uVar12 = st::fn_0040371F((&this_00->field_01AF)[uVar9]);
    iVar14 = local_14;
    auStack_914[uVar9 * 0x5f] = 0x101;
    auStack_914[uVar9 * 0x5f + 1] = 3;
    auStack_914[uVar9 * 0x5f + 2] = 0x4201;
    *(undefined4 *)(iVar14 + 0x1d7) = uVar12;
    *(undefined2 *)(aiStack_908 + uVar9 * 0x5f) = 0;
    *(undefined2 *)((int)aiStack_908 + (uVar9 * 0xbe + 1) * 2) = 1;
    aiStack_908[uVar9 * 0x5f + 1] = iVar14 + 0x1ce;
    aiStack_908[uVar9 * 0x5f + 3] = 0;
    aiStack_8e4[uVar9 * 0x5f + 3] = 1;
    aiStack_908[uVar9 * 0x5f + 6] = 0x101;
    ((undefined1 *)iVar14)[0x1db] = 3;
    iVar8 = *(int *)(iVar14 + 0x1d7);
    aiStack_908[uVar9 * 0x5f + 7] = 3;
    aiStack_908[uVar9 * 0x5f + 8] = 0x4202;
    *(undefined2 *)(aiStack_8e4 + uVar9 * 0x5f) = 0;
    *(undefined2 *)((int)aiStack_8e4 + (uVar9 * 0xbe + 1) * 2) = 1;
    aiStack_8e4[uVar9 * 0x5f + 1] = iVar14 + 0x1ce;
    if (-1 < iVar8) {
      uVar12 = *(undefined4 *)(&DAT_00807e66 + iVar8 * 4);
      auStack_870[uVar9 * 0x5f + 2] = 8;
      auStack_870[uVar9 * 0x5f + 3] = uVar12;
    }
    bVar6 = (byte)local_10;
    auStack_88c[uVar9 * 0x5f + 2] = 1;
    iVar8 = local_20;
    if (DAT_0080874e == '\x03') {
      if (bVar6 == 0) {
LAB_004eda0d:
        iVar14 = 0;
      }
      else {
        if ((bVar6 < 2) || (4 < bVar6)) goto LAB_004eda47;
        if (bVar6 == 0) goto LAB_004eda0d;
        iVar14 = uVar9 - 1;
      }
      pBVar5 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B8,iVar14);
      bVar6 = (byte)local_10;
      auStack_870[iVar8 * 0x5f] = st::machine_word_boundary_cast<undefined4>(pBVar5);
      auStack_870[iVar8 * 0x5f + 1] = 0x3c;
    }
LAB_004eda47:
    local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar6 + 1));
    if (5 < (byte)(bVar6 + 1)) {
      local_58 = this_00->field_0008;
      local_1c = local_994;
      local_30 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffff2) + 0xb20e;
      local_68[0] = 1;
      local_68[1] = 0xffffffff;
      local_20 = 6;
      local_54 = 2;
      local_50 = 0xb1ff;
      local_34 = 2;
      local_38 = local_58;
      /* ST_CALLSITE[004EDAB4]: CALL dword ptr [EAX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,9,&this_00->field_01BE,nullptr,st::machine_word_boundary_cast<undefined4>(local_68),0);
      uVar24 = 1;
      pBVar1 = this_00->vtable;
      pcVar21 = nullptr;
      uVar22 = 0x4e8a;
      uVar16 = 0;
      sVar13 = 2;
      uVar19 = 0xc0af;
      uVar12 = 0xc09f;
      pCVar3 = st::fn_0040577C(st::mutable_c_string("BUT_BHOLD"),0);
      /* ST_CALLSITE[004EDB0C]: CALL dword ptr [EBX + 0x4] */
      uVar12 = (*pBVar1->CreateBut)
                         ((PanelTy *)this_00,0,0,(-(uint)(DAT_0080874e != '\x03') & 2) + 0x1f,
                          (-(uint)(DAT_0080874e != '\x03') & 7) + 0x5a,0,1,1,st::machine_word_boundary_cast<undefined4>(pCVar3),uVar12,uVar19,
                          sVar13,uVar16,uVar22,pcVar21,uVar24);
      uVar25 = 1;
      pBVar1 = this_00->vtable;
      pcVar21 = nullptr;
      uVar24 = 0x4e88;
      uVar16 = 0;
      sVar13 = 2;
      uVar22 = 0xc0b0;
      uVar19 = 0xc0a0;
      this_00->field_01C2 = uVar12;
      pCVar3 = st::fn_0040577C(st::mutable_c_string("BUT_BHOLD"),0);
      /* ST_CALLSITE[004EDB6B]: CALL dword ptr [EBX + 0x4] */
      uVar12 = (*pBVar1->CreateBut)
                         ((PanelTy *)this_00,0,0,(-(uint)(DAT_0080874e != '\x03') & 6) + 0x45,
                          (-(uint)(DAT_0080874e != '\x03') & 7) + 0x5a,0,1,1,st::machine_word_boundary_cast<undefined4>(pCVar3),uVar19,uVar22,
                          sVar13,uVar16,uVar24,pcVar21,uVar25);
      uVar25 = 1;
      pBVar1 = this_00->vtable;
      pcVar21 = nullptr;
      uVar24 = 0x4e89;
      uVar16 = 0;
      sVar13 = 2;
      uVar22 = 0xc0b1;
      uVar19 = 0xc0a1;
      this_00->field_01C6 = uVar12;
      pCVar3 = st::fn_0040577C(st::mutable_c_string("BUT_BAGR"),0);
      /* ST_CALLSITE[004EDBCB]: CALL dword ptr [EBX + 0x4] */
      uVar12 = (*pBVar1->CreateBut)
                         ((PanelTy *)this_00,0,0,
                          (-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 0xb3,
                          (-(uint)(DAT_0080874e != '\x03') & 7) + 0x5a,0,1,1,st::machine_word_boundary_cast<undefined4>(pCVar3),uVar19,uVar22,
                          sVar13,uVar16,uVar24,pcVar21,uVar25);
      this_00->field_01CA = uVar12;
      g_currentExceptionFrame = local_ac.previous;
      return;
    }
  } while( true );
}

// 004EDDF0 BehPanelTy::DoneBehPanel
#line 4 "decomp/ST.exe/functions/004EDDF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::DoneBehPanel */

void __thiscall st::fn_004EDDF0(BehPanelTy *this)

{
  BehPanelTy *pBVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  BehPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pBVar2 = local_8;
  if (errorCode == 0) {
    if (local_8->field_01BE != 0) {
      st::fn_006E56B0(local_8->field_000C,local_8->field_01BE);
    }
    pBVar2->field_01BE = 0;
    if (pBVar2->field_01C2 != 0) {
      st::fn_006E56B0(pBVar2->field_000C,pBVar2->field_01C2);
    }
    pBVar2->field_01C2 = 0;
    if (pBVar2->field_01C6 != 0) {
      st::fn_006E56B0(pBVar2->field_000C,pBVar2->field_01C6);
    }
    pBVar2->field_01C6 = 0;
    if (pBVar2->field_01CA != 0) {
      st::fn_006E56B0(pBVar2->field_000C,pBVar2->field_01CA);
    }
    pBVar2->field_01CA = 0;
    pBVar2->field_02B8 = nullptr;
    g_behPanel_00801678 = nullptr;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\behpanel.cpp"),0x77,0,errorCode,
                             st::mutable_c_string("%s"),"BehPanelTy::DoneBehPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\behpanel.cpp"),0x77);
  return;
}

// 004EDF30 BehPanelTy::ShiftControls
#line 4 "decomp/ST.exe/functions/004EDF30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::ShiftControls */

void __thiscall st::fn_004EDF30(BehPanelTy *this,int param_1)

{
  BehPanelTy *this_00;
  short sVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  BehPanelTy *local_8;

  if (param_1 != this->field_005C) {
    local_8 = this;
    /* ST_CALLSITE[004EDF4C]: CALL 0x00404d36; direct=00404D36 SpecPanelTy::ShiftControls */
    st::fn_00404D36((SpecPanelTy *)this,param_1);
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar2 = -sVar2;
    }
    *(short *)&this->field_0x2e = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (errorCode == 0) {
      if (local_8->field_01BE != 0) {
        st::fn_006E6080(local_8,2,local_8->field_01BE,(undefined4 *)&local_8->field_0x18);
      }
      if (this_00->field_01C2 != 0) {
        st::fn_006E6080(this_00,2,this_00->field_01C2,(undefined4 *)&this_00->field_0x18);
      }
      if (this_00->field_01C6 != 0) {
        st::fn_006E6080(this_00,2,this_00->field_01C6,(undefined4 *)&this_00->field_0x18);
      }
      if (this_00->field_01CA != 0) {
        st::fn_006E6080(this_00,2,this_00->field_01CA,(undefined4 *)&this_00->field_0x18);
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\behpanel.cpp"),0x87,0,errorCode,
                               st::mutable_c_string("%s"),"BehPanelTy::ShiftControls");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\behpanel.cpp"),0x87);
  }
  return;
}

// 004EE0A0 BehPanelTy::Update
#line 4 "decomp/ST.exe/functions/004EE0A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::Update */

void __thiscall st::fn_004EE0A0(BehPanelTy *this)

{
  BehPanelTy *this_00;
  int local_EAX_35;
  int iVar2;
  int iVar4;
  int iVar3;
  int *piVar5;
  short *psVar6;
  Global_sub_005272B0_param_1Enum *pGVar7;
  short *psVar8;
  bool bVar9;
  InternalExceptionFrame local_6c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  byte local_16;
  int local_14;
  BehPanelTy *local_10;
  int local_c;
  Global_sub_005272B0_param_1Enum *local_8;

  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_10 = this;
  local_EAX_35 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_35 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\behpanel.cpp"),0xb2,0,local_EAX_35,
                               st::mutable_c_string("%s"),"BehPanelTy::Update");
    if (iVar3 == 0) {
      st::fn_006A5E40(local_EAX_35,0,st::mutable_c_string("E:\\__titans\\Andrey\\behpanel.cpp"),0xb2);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_28 = local_10->field_01AB;
  STPiece<0,1>(local_24) = local_10->field_01AF;
  STPiece<1,1>(local_24) = local_10->field_01B0;
  STPiece<2,1>(local_24) = local_10->field_01B1;
  STPiece<3,1>(local_24) = local_10->field_01B2;
  local_20 = *(undefined4 *)&local_10->field_0x1b3;
  local_1c = local_10->field_01B7;
  STPiece<0,1>(local_18) = local_10->field_01BB;
  STPiece<1,1>(local_18) = local_10->field_01BC;
  local_16 = local_10->field_01BD;
  /* ST_CALLSITE[004EE10E]: CALL 0x004035bc; direct=004035BC STAllPlayersC::GetPanelInfo */
  st::fn_004035BC
            (g_allPlayers_007FA174,0xb,(AnonShape_0043BEB0_1C00EC12 *)&local_10->field_01AB);
  local_8 = (Global_sub_005272B0_param_1Enum *)&local_24;
  local_14 = -0x1af - (int)this_00;
  pGVar7 = st::pointer_boundary_cast<Global_sub_005272B0_param_1Enum *>(&this_00->field_01AF);
  piVar5 = reinterpret_cast<int *>(&this_00->field_01CF);
  local_c = 6;
  do {
    this_00->field_0028 = 0x54;
    *(uint *)&this_00->field_0x2c = (uint)pGVar7[6];
    this_00->field_0030 = st::machine_word_boundary_cast<undefined4>(pGVar7 + local_14);
    st::fn_006E6080(this_00,2,this_00->field_01BE,(undefined4 *)&this_00->field_0x18);
    if (*pGVar7 != *local_8) {
      *(undefined1 *)((int)piVar5 + -1) = 1;
      iVar2 = st::fn_00401A78(*pGVar7,this_00->field_01AB);
      *piVar5 = iVar2;
      iVar4 = st::fn_0040371F(*pGVar7);
      piVar5[2] = iVar4;
      ((undefined1 *)piVar5)[3] = 3;
    }
    piVar5 = (int *)((int)piVar5 + 0x27);
    pGVar7 = pGVar7 + 1;
    local_8 = local_8 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  iVar4 = 3;
  bVar9 = true;
  psVar6 = (short *)&this_00->field_01AF;
  psVar8 = (short *)&local_24;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    bVar9 = *psVar6 == *psVar8;
    psVar6 = psVar6 + 1;
    psVar8 = psVar8 + 1;
  } while (bVar9);
  if (!bVar9) {
    this_00->field_0028 = 5;
    st::fn_006E6080(this_00,2,this_00->field_01BE,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_01BB != (byte)local_18) {
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_01BB;
    this_00->field_0028 = 0x20;
    st::fn_006E6080(this_00,2,this_00->field_01C2,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_01BC != STPiece<1,1>(local_18)) {
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_01BC;
    this_00->field_0028 = 0x20;
    st::fn_006E6080(this_00,2,this_00->field_01C6,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_01BD != local_16) {
    *(uint *)&this_00->field_0x2c = (uint)(byte)this_00->field_01BD;
    this_00->field_0028 = 0x20;
    st::fn_006E6080(this_00,2,this_00->field_01CA,(undefined4 *)&this_00->field_0x18);
  }
  g_currentExceptionFrame = local_6c.previous;
  return;
}

// 004EE350 BehPanelTy::PaintBBut
#line 4 "decomp/ST.exe/functions/004EE350/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::PaintBBut
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:3: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=004EE3BE MOV EAX,dword ptr [EBP + 0x10];
   first-use mask */

void __thiscall
st::fn_004EE350
          (BehPanelTy *this,AnonShape_004EE350_18D491EA *param_1,char *param_2,byte param_3)

{
  AnonNested_004EE350_0018_78690378 *pAVar1;
  BehPanelTy *pBVar3;
  int *errorCode;
  LPSTR text;
  int iVar4;
  InternalExceptionFrame local_58;
  BehPanelTy *local_14;
  int local_10;
  int local_c;
  ushort *local_8;

  local_8 = nullptr;
  pAVar1 = param_1->field_0018;
  local_10 = pAVar1->field_0000 - this->field_003C;
  if (this->field_005C == 0) {
    local_c = st::machine_word_boundary_cast<int>(pAVar1->field_0004 - DAT_00806734);
  }
  else {
    local_c = pAVar1->field_0004 - this->field_0044;
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  errorCode = (int *)st::fn_0072D7F0(local_58.jumpBuffer,0);
  if (errorCode == nullptr) {
    iVar4 = 1;
    text = st::fn_006F2C00(param_2,1,(uint)param_3);
    local_8 = st::fn_006F1CE0(g_cMf32_00806790,1,text,errorCode,iVar4);
    pBVar3 = local_14;
    /* ST_CALLSITE[004EE3F5]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_14->field_0068,local_10,local_c,'\x01',
           (byte *)local_8);
    st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,pBVar3->field_0060,0xffffffff,pBVar3->field_003C,
               pBVar3->field_0044);
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\behpanel.cpp"),0xc5,0,(int)errorCode,
                             st::mutable_c_string("%s"),"BehPanelTy::PaintBBut");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40((int)errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\behpanel.cpp"),0xc5);
  return;
}

// 004EE4D0 BehPanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/004EE4D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\behpanel.cpp
   BehPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004EE4D0; family_names=BehPanelTy::GetMessage; ret4=8;
   direct_offsets={10:2,14:1,18:1,1c:0} */

int __thiscall st::fn_004EE4D0(BehPanelTy *this,STMessage *message)

{
  BehPanelTyVTable *pBVar1;
  STMessageId SVar2;
  BehPanelTy *this_00;
  char cVar3;
  int iVar4;
  char *pcVar4;
  LPSTR pCVar5;
  int iVar10;
  byte bVar7;
  int iVar8;
  code *pcVar9;
  int iVar11;
  int iVar12;
  InternalExceptionFrame local_70;
  uint local_2c [7];
  uint local_f;
  BehPanelTy *local_8;
  uint SVar1;

  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\behpanel.cpp"),0xf3,0,iVar4,
                                st::mutable_c_string("%s"),"BehPanelTy::GetMessage");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\behpanel.cpp"),0xf3);
    return 0xffff;
  }
  /* ST_CALLSITE[004EE50E]: CALL 0x00401401; direct=00401401 SpecPanelTy::GetMessage */
  st::fn_00401401((SpecPanelTy *)local_8,message);
  SVar1 = message->id;
  if (SVar1 < 0xb20f) {
    if (SVar1 == 0xb20e) {
      pBVar1 = this_00->vtable;
      iVar12 = 1;
      iVar11 = 0;
      pcVar9 = st::function_address_boundary_cast<code *>(st::fn_0052A320);
      iVar8 = 0;
      pcVar4 = st::fn_00405493((&this_00->field_01AF)[(message->arg0).words.high],
                                  this_00->field_01AB);
      pCVar5 = st::fn_0040577C(pcVar4,iVar8);
      /* ST_CALLSITE[004EE660]: CALL dword ptr [EDI + 0x8] */
      (*pBVar1->PaintBut)((PanelTy *)this_00,(int)message,6,pCVar5,st::pointer_boundary_cast<undefined *>(pcVar9),iVar11,iVar12);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (0xb1ff < SVar1) {
      if (SVar1 != 0xb200) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      pBVar1 = this_00->vtable;
      iVar12 = 1;
      iVar11 = 0;
      pcVar9 = st::function_address_boundary_cast<code *>(st::fn_0052A320);
      iVar8 = 0;
      pcVar4 = st::fn_00405493((&this_00->field_01AF)[(message->arg0).words.high],
                                  this_00->field_01AB);
      pCVar5 = st::fn_0040577C(pcVar4,iVar8);
      /* ST_CALLSITE[004EE611]: CALL dword ptr [EDI + 0x8] */
      (*pBVar1->PaintBut)((PanelTy *)this_00,(int)message,1,pCVar5,st::pointer_boundary_cast<undefined *>(pcVar9),iVar11,iVar12);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (SVar1 == 0xb1ff) {
      if (this_00->field_0172 != 1) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      st::fn_00405E2F(0xae);
      /* ST_CALLSITE[004EE5A4]: CALL 0x004035ad; direct=004035AD CursorClassTy::sub_0054B630 */
      st::fn_004035AD
                (g_cursorClass_00802A30,(uint)(byte)(&this_00->field_01AF)[(message->arg0).u32],0);
      this_00->field_0028 = 0xbfff;
      /* ST_CALLSITE[004EE5B8]: CALL dword ptr [EDX] */
      this_00->GetMessage((STMessage *)&this_00->field_0x18);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    if (SVar1 != 2) {
      if (SVar1 != 3) {
        g_currentExceptionFrame = local_70.previous;
        return 0;
      }
      /* ST_CALLSITE[004EE542]: CALL 0x00401d4d; direct=00401D4D BehPanelTy::DoneBehPanel */
      st::fn_00401D4D(this_00);
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    /* ST_CALLSITE[004EE55C]: CALL 0x00401960; direct=00401960 BehPanelTy::InitBehPanel */
    st::fn_00401960(this_00);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  }
  switch(SVar1) {
  case 0xc09f:
  case 0xc0a0:
  case 0xc0a1:
    if (this_00->field_0172 != 1) {
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    st::fn_00405E2F(0xae);
    SVar2 = message->id;
    memset(local_2c, 0, 0x21); /* compiler bulk-zero initialization */
    if (SVar2 == MESS_SHARED_C09F) {
      STPiece<0,1>(local_2c[0]) = '\x15';
      cVar3 = this_00->field_01BB;
    }
    else {
      STPiece<0,1>(local_2c[0]) = (SVar2 != MESS_BEHPANELTY_C0A0) + '\x16';
      if (SVar2 == MESS_BEHPANELTY_C0A0) {
        cVar3 = this_00->field_01BC;
      }
      else {
        cVar3 = this_00->field_01BD;
      }
    }
    local_f = (uint)(cVar3 == '\x03');
    st::fn_00403C33((undefined4 *)0x17,local_2c,0,0xffffffff);
    g_currentExceptionFrame = local_70.previous;
    return 0;
  default:
    goto switchD_004ee68c_caseD_c0a2;
  case 0xc0af:
    bVar7 = this_00->field_01BB == '\x03';
    pcVar4 = "BUT_BLOCK";
    break;
  case 0xc0b0:
    bVar7 = this_00->field_01BC == '\x03';
    pcVar4 = "BUT_BHOLD";
    break;
  case 0xc0b1:
    bVar7 = this_00->field_01BD == '\x03';
    pcVar4 = "BUT_BAGR";
  }
  pCVar5 = st::fn_0040577C(pcVar4,0);
  /* ST_CALLSITE[004EE779]: CALL 0x004042be; direct=004042BE BehPanelTy::PaintBBut */
  st::fn_004042BE(this_00,(AnonShape_004EE350_18D491EA *)message,pCVar5,bVar7);
switchD_004ee68c_caseD_c0a2:
  g_currentExceptionFrame = local_70.previous;
  return 0;
}

