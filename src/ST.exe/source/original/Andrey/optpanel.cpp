#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/optpanel.cpp

// 0052E500 OptPanelTy::PreInitOptPanel
#line 4 "decomp/ST.exe/functions/0052E500/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PreInitOptPanel */

void __thiscall st::fn_0052E500(OptPanelTy *this)

{
  OptPanelTy *pOVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pOVar2 = local_8;
  if (errorCode == 0) {
    st::fn_006B1A50(g_ddxContext_008075A8,3,nullptr,(undefined4 *)&local_8->field_0x4c);
    pOVar2->field_0044 = pOVar2->field_0050 - pOVar2->field_0048;
    pOVar2->field_0174 = pOVar2->field_0048 + pOVar2->field_0050;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x37,0,errorCode,
                             st::mutable_c_string("%s"),"OptPanelTy::PreInitOptPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x37);
  return;
}

// 0052E5E0 OptPanelTy::InitOptPanel
#line 4 "decomp/ST.exe/functions/0052E5E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::InitOptPanel */

void __thiscall st::fn_0052E5E0(OptPanelTy *this)

{
  OptPanelTy *this_00;
  int iVar2;
  ccFntTy *pcVar2;
  LPSTR pCVar3;
  ushort *local_EAX_158;
  ushort *puVar5;
  ushort *local_EAX_238;
  ushort *local_EAX_275;
  ushort *local_EAX_317;
  int uVar11;
  ushort *puVar4;
  DArrayTy *pDVar5;
  int iVar17;
  uint uVar6;
  uint uVar7;
  short sVar8;
  ushort uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    g_optPanel_008016DC = local_8;
    /* ST_CALLSITE[0052E62C]: CALL 0x0070df00; direct=0070DF00 ccFntTy::operator_new */
    pcVar2 = (ccFntTy *)st::fn_0070DF00(0x19d,(ccFntTy *)g_interSystem_00802A28->field_0028);
    this_00->field_017C = pcVar2;
    pcVar2->field_0058 = 0;
    pcVar2->field_005C = 0;
    /* ST_CALLSITE[0052E64C]: CALL 0x0070df00; direct=0070DF00 ccFntTy::operator_new */
    pcVar2 = (ccFntTy *)st::fn_0070DF00(0x19d,(ccFntTy *)g_interSystem_00802A28->field_002C);
    this_00->field_0180 = pcVar2;
    pcVar2->field_0058 = 1;
    pcVar2->field_005C = 0;
    iVar18 = 1;
    piVar14 = nullptr;
    pCVar3 = st::fn_0040577C(st::mutable_c_string("BKG_OPTIONS"),0);
    local_EAX_158 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar3,piVar14,iVar18);
    iVar18 = 1;
    piVar14 = nullptr;
    this_00->field_0184 = local_EAX_158;
    this_00->field_0188 = 0;
    pCVar3 = st::fn_0040577C(st::mutable_c_string("BKG_OPT_NUM"),0);
    puVar5 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar3,piVar14,iVar18);
    iVar18 = 1;
    piVar14 = nullptr;
    this_00->field_018C = puVar5;
    pCVar3 = st::fn_0040577C(st::mutable_c_string("BKG_OPT_SAVE"),0);
    local_EAX_238 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar3,piVar14,iVar18);
    iVar18 = 1;
    piVar14 = nullptr;
    this_00->field_0190 = local_EAX_238;
    pCVar3 = st::fn_0040577C(st::mutable_c_string("BKG_OPT_MOBJ"),0);
    local_EAX_275 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar3,piVar14,iVar18);
    puVar19 = nullptr;
    iVar15 = 0;
    iVar18 = 1;
    bVar11 = 0;
    uVar10 = 0xffffffff;
    this_00->field_0194 = local_EAX_275;
    pCVar3 = st::fn_0040577C(st::mutable_c_string("IND_PNT"),0);
    local_EAX_317 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,pCVar3,uVar10,bVar11,iVar18,iVar15,puVar19);
    this_00->field_0198 = local_EAX_317;
    puVar4 = this_00->field_0184 + 0x14;
    iVar18 = 1;
    uVar11 = st::fn_006B4FE0(this_00->field_0184);
    puVar4 = (ushort *)
             st::fn_006B50C0(0xde,0xb,(uint)this_00->field_0184[7],uVar11,(undefined4 *)puVar4,iVar18);
    this_00->field_01E5 = puVar4;
    pDVar5 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_01F1 = pDVar5;
    st::fn_006B6020(pDVar5,0,&CHAR_00h_008016a0);
    /* ST_CALLSITE[0052E77B]: CALL 0x0040443a; direct=0040443A OptPanelTy::PrepMissObj */
    st::fn_0040443A(this_00);
    /* ST_CALLSITE[0052E782]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
    st::fn_00402851(this_00);
    uVar20 = 0;
    uVar16 = 0;
    pcVar13 = nullptr;
    uVar12 = 0;
    uVar9 = 0;
    sVar8 = 0;
    uVar7 = 0xc002;
    uVar6 = 0xc001;
    pCVar3 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
    /* ST_CALLSITE[0052E7B7]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar10 = st::fn_0040398B((UPanelTy *)this_00,0,1,0xc9,0x9f,1,pCVar3,uVar6,uVar7,sVar8,uVar9,
                                 uVar12,pcVar13,uVar16,uVar20);
    uVar20 = 0;
    uVar16 = 0;
    pcVar13 = nullptr;
    uVar12 = 0;
    uVar9 = 0;
    sVar8 = 0;
    uVar7 = 0xc004;
    uVar6 = 0xc003;
    this_00->field_01AD[0] = uVar10;
    pCVar3 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
    /* ST_CALLSITE[0052E7F1]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar10 = st::fn_0040398B((UPanelTy *)this_00,0,0,0x93,0x9f,1,pCVar3,uVar6,uVar7,sVar8,uVar9,
                                 uVar12,pcVar13,uVar16,uVar20);
    uVar6 = this_00->field_0038;
    this_00->field_01AD[1] = uVar10;
    this_00->field_0301 = uVar6;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar17 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x5b,0,iVar2,st::mutable_c_string("%s"),
                              "OptPanelTy::InitOptPanel");
  if (iVar17 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x5b);
  return;
}

// 0052E8F0 OptPanelTy::DoneOptPanel
#line 4 "decomp/ST.exe/functions/0052E8F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::DoneOptPanel */

void __thiscall st::fn_0052E8F0(OptPanelTy *this)

{
  OptPanelTy *pOVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ushort **ppuVar6;
  uint *puVar7;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pOVar2 = local_8;
  if (iVar3 == 0) {
    if (local_8->field_01E9 != nullptr) {
      st::fn_006B5570(local_8->field_01E9);
      pOVar2->field_01E9 = nullptr;
    }
    if (pOVar2->field_01ED != nullptr) {
      st::fn_006AE110(pOVar2->field_01ED);
      pOVar2->field_01ED = nullptr;
    }
    if (pOVar2->field_01F1 != nullptr) {
      st::fn_006B5570(pOVar2->field_01F1);
      pOVar2->field_01F1 = nullptr;
    }
    if (pOVar2->field_01E5 != nullptr) {
      st::fn_006AB060(&pOVar2->field_01E5);
    }
    if ((DArrayTy *)pOVar2->field_02F9 != nullptr) {
      st::fn_006B5570((DArrayTy *)pOVar2->field_02F9);
    }
    pOVar2->field_02F9 = nullptr;
    if (pOVar2->field_02FD != nullptr) {
      st::fn_006AE110((DArrayTy *)pOVar2->field_02FD);
    }
    pOVar2->field_02FD = nullptr;
    if (pOVar2->field_01DD != (HANDLE)0x0) {
      /* ST_CALLSITE[0052E9B8]: CALL dword ptr [0x0085bcac] */
      st::external_00000060(pOVar2->field_01DD);
      pOVar2->field_01DD = (HANDLE)0x0;
    }
    puVar7 = pOVar2->field_01B5;
    iVar5 = 10;
    do {
      if (*puVar7 != 0) {
        st::fn_006E56B0(pOVar2->field_000C,*puVar7);
      }
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar7 = pOVar2->field_01AD;
    iVar5 = 2;
    do {
      if (*puVar7 != 0) {
        st::fn_006E56B0(pOVar2->field_000C,*puVar7);
      }
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    g_optPanel_008016DC = nullptr;
    if (pOVar2->field_017C != nullptr) {
      st::fn_00710560((uint *)pOVar2->field_017C);
      pOVar2->field_017C = nullptr;
    }
    if (pOVar2->field_0180 != nullptr) {
      st::fn_00710560((uint *)pOVar2->field_0180);
      pOVar2->field_0180 = nullptr;
    }
    pOVar2->field_0198 = nullptr;
    ppuVar6 = &pOVar2->field_0184;
    iVar5 = 5;
    do {
      if (*ppuVar6 != nullptr) {
        st::fn_006F20E0(g_cMf32_00806790,(uint *)ppuVar6);
      }
      ppuVar6 = ppuVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x79,0,iVar3,st::mutable_c_string("%s"),
                             "OptPanelTy::DoneOptPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x79);
  return;
}

// 0052EB50 OptPanelTy::CreateSlider
#line 4 "decomp/ST.exe/functions/0052EB50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::CreateSlider

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 0052FB00 -> 0052EB50 @ 00530A59; zero-filled partial register load at 00530A30 */

undefined4 __thiscall
st::fn_0052EB50
          (OptPanelTy *this,int param_1,int param_2,int param_3,int param_4,undefined4 param_5,
          undefined4 param_6,uint param_7,int param_8)

{
  OptPanelTy *pOVar2;
  int iVar3;
  LPSTR pCVar3;
  int iVar10;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  int iVar11;
  uint local_42c [6];
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_2a8;
  uint local_2a4 [26];
  undefined4 local_23c;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_6c;
  uint local_68;
  InternalExceptionFrame local_54;
  OptPanelTy *local_10;
  ushort *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pOVar2 = local_10;
  if (iVar3 == 0) {
    memset(local_42c, 0, 0x3d8); /* compiler bulk-zero initialization */
    iVar11 = 1;
    piVar9 = nullptr;
    uVar8 = 0;
    local_6c = param_6;
    local_84 = pOVar2->field_0008;
    local_68 = param_7;
    iVar4 = 1;
    local_42c[0] = (uint)(param_8 != 0);
    local_80 = 2;
    local_7c = param_5;
    local_2a8 = 2;
    local_42c[1] = 2;
    local_318 = 1;
    local_31c = 1;
    local_42c[3] = 2;
    local_42c[2] = local_42c[0];
    pCVar3 = st::fn_0040577C(st::mutable_c_string("BUT_MINUS"),0);
    pCVar3 = st::fn_006F2C00(pCVar3,iVar4,uVar8);
    local_c = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar3,piVar9,iVar11);
    local_414 = *(undefined4 *)(local_c + 2);
    local_410 = *(undefined4 *)(local_c + 4);
    st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_c);
    iVar4 = pOVar2->field_003C;
    local_42c[4] = iVar4 + param_3;
    iVar11 = pOVar2->field_005C;
    if (iVar11 == 0) {
      iVar5 = -pOVar2->field_0048;
    }
    else {
      iVar5 = pOVar2->field_0044;
    }
    local_3c0 = 2;
    local_42c[5] = iVar5 + param_4;
    local_3c4 = pOVar2->field_0008;
    local_3bc = 0xc005;
    local_314 = 500;
    local_310 = 0x32;
    puVar6 = local_42c + 2;
    puVar7 = local_2a4;
    memmove(puVar7, puVar6, 0x17c); /* compiler REP MOVS byte copy */
    local_2a4[2] = iVar4 + param_1;
    if (iVar11 == 0) {
      iVar4 = -pOVar2->field_0048;
    }
    else {
      iVar4 = pOVar2->field_0044;
    }
    local_2a4[3] = iVar4 + param_2;
    local_23c = 0xc006;
    /* ST_CALLSITE[0052ECF6]: CALL dword ptr [EAX + 0x8] */
    (*pOVar2->field_000C->vtable->CreateObject)
              ((SystemClassTy *)pOVar2->field_000C,4,&local_8,nullptr,st::machine_word_boundary_cast<undefined4>(local_42c),0);
    g_currentExceptionFrame = local_54.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0xa0,0,iVar3,st::mutable_c_string("%s"),
                              "OptPanelTy::CreateSlider");
  if (iVar10 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0xa0);
  return 0xffffffff;
}

// 0052EDF0 OptPanelTy::PaintVolume
#line 4 "decomp/ST.exe/functions/0052EDF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PaintVolume

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0052EDF0(OptPanelTy *this,byte param_1,byte param_2)

{
  OptPanelTy *pOVar2;
  uint3 uVar3;
  int iVar4;
  BITMAPINFO *pBVar4;
  int iVar6;
  int iVar5;
  int iVar7;
  InternalExceptionFrame local_5c;
  OptPanelTy *local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint local_8;

  local_14 = (-(uint)(param_1 != 0) & 0xfffffffc) + 4;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar4 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  pOVar2 = local_18;
  if (iVar4 == 0) {
    uVar3 = STPiece<1,3>(local_8);
    local_8 = (uint)STPiece<1,3>(local_8) << 8;
    if (param_2 != 0) {
      local_c = local_14 + (uint)param_1 * 0xd + 0x5f;
      iVar5 = 0x80;
      local_10 = (uint)param_2;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT31(uVar3,param_2);
      do {
        pBVar4 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pOVar2->field_0198,6);
        /* ST_CALLSITE[0052EE87]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pOVar2->field_0068,iVar5,local_c,'\x01',
               (byte *)pBVar4);
        iVar5 = iVar5 + 4;
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
    if ((byte)local_8 < 0x1e) {
      local_c = local_14 + (uint)param_1 * 0xd + 0x5f;
      iVar7 = 0x1e - (local_8 & 0xff);
      iVar5 = (local_8 & 0xff) * 4 + 0x80;
      do {
        pBVar4 = st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pOVar2->field_0198,0);
        /* ST_CALLSITE[0052EEE8]: CALL 0x00403229; direct=00403229 DibPut */
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pOVar2->field_0068,iVar5,local_c,'\x01',
               (byte *)pBVar4);
        iVar5 = iVar5 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    g_currentExceptionFrame = local_5c.previous;
    return;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0xac,0,iVar4,st::mutable_c_string("%s"),
                             "OptPanelTy::PaintVolume");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0xac);
  return;
}

// 0052EFB0 OptPanelTy::PaintDblBut
#line 4 "decomp/ST.exe/functions/0052EFB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PaintDblBut

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_0052EFB0
          (OptPanelTy *this,AnonShape_0052EFB0_CC661192 *param_1,char *param_2,UINT param_3,
          code *param_4,code *param_5,int param_6)

{
  OptPanelTy *pOVar2;
  int iVar3;
  uint uVar3;
  LPSTR pCVar4;
  uint uVar5;
  char *resourceString;
  int iVar7;
  int iVar6;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  InternalExceptionFrame local_60;
  OptPanelTy *local_1c;
  int local_18;
  uint local_14;
  AnonNested_0052EFB0_0018_CB007E0D *local_10;
  AnonShape_0052EFB0_8161B92D *local_c;
  ushort *local_8;

  local_10 = param_1->field_0018;
  local_c = param_1->field_0014;
  local_8 = nullptr;
  if (param_6 == 0) {
    local_18 = local_10->field_0000;
  }
  else {
    local_18 = local_c->field_000C;
  }
  local_18 = local_18 - this->field_003C;
  if (this->field_005C == 0) {
    if (param_6 == 0) {
      local_14 = this->field_0048 + local_10->field_0004;
    }
    else {
      local_14 = this->field_0048 + local_c->field_0010;
    }
  }
  else {
    if (param_6 == 0) {
      iVar6 = local_10->field_0004;
    }
    else {
      iVar6 = local_c->field_0010;
    }
    local_14 = iVar6 - this->field_0044;
  }
  if ((param_4 != nullptr) && (param_5 != nullptr)) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_1c = this;
    iVar3 = st::fn_0072D7F0(local_60.jumpBuffer,0);
    if (iVar3 == 0) {
      local_8 = st::fn_006F1CE0(g_cMf32_00806790,1,param_2,nullptr,1);
      uVar5 = local_14;
      iVar6 = local_18;
      pOVar2 = local_1c;
      /* ST_CALLSITE[0052F080]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_1c->field_0068,local_18,local_14,'\x01',
             (byte *)local_8);
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      iVar10 = 1;
      piVar9 = nullptr;
      /* ST_CALLSITE[0052F09F]: CALL dword ptr [EBP + 0x14] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar3 = (*(code *)param_4)(param_1);
      iVar8 = 1;
      pCVar4 = st::fn_0040577C(st::mutable_c_string("BUT_SWITCH"),0);
      pCVar4 = st::fn_006F2C00(pCVar4,iVar8,uVar3);
      local_8 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar4,piVar9,iVar10);
      if (param_6 == 0) {
        iVar8 = local_10->field_000C;
      }
      else {
        iVar8 = local_c->field_0018;
      }
      /* ST_CALLSITE[0052F102]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)pOVar2->field_0068,iVar6 + 5,
             (iVar8 - *(int *)(local_8 + 4)) / 2 + 1 + uVar5,'\x01',(byte *)local_8);
      iVar6 = *(int *)(local_8 + 2);
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      if (param_6 == 0) {
        iVar8 = local_10->field_000C;
        iVar10 = local_10->field_0008;
      }
      else {
        iVar8 = local_c->field_0018;
        iVar10 = local_c->field_0014;
      }
      st::fn_00710A90(pOVar2->field_0180,pOVar2->field_0068,0,iVar6 + 10 + local_18,uVar5,
                       (iVar10 - iVar6) + -10,iVar8);
      iVar11 = -1;
      iVar10 = -1;
      /* ST_CALLSITE[0052F16F]: CALL dword ptr [EBP + 0x18] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar5 = (*(code *)param_5)(param_1);
      iVar8 = -1;
      iVar6 = 0;
      resourceString = st::fn_006B0140(param_3,g_hINSTANCE_00807618);
      st::fn_00711B70(pOVar2->field_0180,resourceString,iVar6,iVar8,uVar5,iVar10,iVar11);
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,pOVar2->field_0060,0xffffffff,pOVar2->field_003C,
                 pOVar2->field_0044);
      g_currentExceptionFrame = local_60.previous;
      return;
    }
    g_currentExceptionFrame = local_60.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0xca,0,iVar3,st::mutable_c_string("%s")
                               ,"OptPanelTy::PaintDblBut");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0xca);
  }
  return;
}

// 0052F2B0 OptPanelTy::SwitchOptPanel
#line 4 "decomp/ST.exe/functions/0052F2B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::SwitchOptPanel

   [STSwitchEnumApplier] Switch target field_0172 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_0172State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall st::fn_0052F2B0(OptPanelTy *this,char param_1)

{
  OptPanelTy *this_00;
  int errorCode;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  Global_sub_005252C0_param_1Enum GVar14;
  InternalExceptionFrame local_5c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  OptPanelTy *local_c;
  int local_8;

  if (this->field_019C != 0) {
    return;
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_c = this;
  errorCode = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  this_00 = local_c;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x125,0,errorCode,
                               st::mutable_c_string("%s"),"OptPanelTy::SwitchOptPanel");
    if (iVar2 == 0) {
      st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x125);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  switch(local_c->field_0172) {
  case CASE_1:
  case CASE_3:
    switch(param_1) {
    case '\x02':
    case '\f':
    case '\x0e':
      local_c->field_01A9 = 1;
    case '\x01':
      if (param_1 == '\x01') {
        local_c->field_01A9 = 0;
      }
      if (param_1 == local_c->field_01A4) {
        g_currentExceptionFrame = local_5c.previous;
        return;
      }
      local_c->field_01A4 = param_1;
      /* ST_CALLSITE[0052F35C]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(local_c);
      g_currentExceptionFrame = local_5c.previous;
      return;
    case '\x03':
    case '\x04':
    case '\x05':
    case '\x06':
    case '\a':
    case '\b':
    case '\t':
    case '\n':
    case '\v':
    case '\r':
    default:
      if (local_c->field_0172 == CASE_1) {
        /* ST_CALLSITE[0052F37D]: CALL 0x00405a1a; direct=00405A1A OptPanelTy::ShiftControls */
        st::fn_00405A1A(local_c,0);
      }
      this_00->field_0172 = CASE_4;
      DAT_00808788 = 0;
      if ((g_cPanel_00801688 != nullptr) && (g_cPanel_00801688->field_023F == CASE_1)) {
        /* ST_CALLSITE[0052F3A7]: CALL 0x00402ed2; direct=00402ED2 CPanelTy::ShiftControls */
        st::fn_00402ED2(g_cPanel_00801688,1);
      }
      GVar14 = CASE_B0;
    }
    goto LAB_0052f60b;
  case CASE_2:
    if (g_researchPanel_008016E8 != nullptr) {
      /* ST_CALLSITE[0052F3C3]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      local_8 = st::fn_00401A73(g_researchPanel_008016E8,'\0');
    }
    bVar3 = local_8 != 0;
    if (g_bldBoatPanel_0080167C != nullptr) {
      /* ST_CALLSITE[0052F3E4]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      local_8 = st::fn_00401A73(g_bldBoatPanel_0080167C,'\0');
    }
    bVar4 = local_8 != 0;
    if (g_bldObjPanel_00801684 != nullptr) {
      /* ST_CALLSITE[0052F400]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      local_8 = st::fn_00401A73(g_bldObjPanel_00801684,'\0');
    }
    bVar5 = local_8 != 0;
    if (g_infocPanel_00801698 != nullptr) {
      /* ST_CALLSITE[0052F41E]: CALL dword ptr [EDX + 0x1c] */
      local_8 = (*g_infocPanel_00801698->vtable->SetPanel)
                          ((SpecPanelTy *)g_infocPanel_00801698,'\0');
    }
    bVar6 = local_8 != 0;
    if (g_tradePanel_00802A44 != nullptr) {
      /* ST_CALLSITE[0052F439]: CALL 0x00404af7; direct=00404AF7 TradePanelTy::sub_00552160 */
      local_8 = st::fn_00404AF7(g_tradePanel_00802A44,'\0','\0');
    }
    bVar7 = local_8 != 0;
    if (g_behPanel_00801678 != nullptr) {
      /* ST_CALLSITE[0052F457]: CALL dword ptr [EAX + 0x1c] */
      local_8 = (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\0');
    }
    bVar8 = local_8 != 0;
    if (g_sAMPanel_008016EC != nullptr) {
      /* ST_CALLSITE[0052F473]: CALL dword ptr [EDX + 0x1c] */
      local_8 = (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\0');
    }
    bVar9 = local_8 != 0;
    if (g_upgPanel_00802A48 != nullptr) {
      /* ST_CALLSITE[0052F48F]: CALL dword ptr [EAX + 0x1c] */
      local_8 = (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\0');
    }
    bVar10 = local_8 != 0;
    if (g_frmPanel_0080168C != nullptr) {
      /* ST_CALLSITE[0052F4AB]: CALL dword ptr [EDX + 0x1c] */
      local_8 = (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\0');
    }
    bVar11 = local_8 != 0;
    if (g_bldLabPanel_00801680 != nullptr) {
      /* ST_CALLSITE[0052F4C5]: CALL 0x00401a73; direct=00401A73 ProdPanelTy::SetPanel */
      local_8 = st::fn_00401A73(g_bldLabPanel_00801680,'\0');
    }
    bVar12 = local_8 != 0;
    if (g_helpPanel_00801690 != nullptr) {
      /* ST_CALLSITE[0052F4E3]: CALL dword ptr [EAX + 0x18] */
      local_8 = g_helpPanel_00801690->SetPanel('\0');
    }
    bVar13 = local_8 != 0;
    if (g_playPanel_008016E4 != nullptr) {
      /* ST_CALLSITE[0052F4FD]: CALL 0x0040425f; direct=0040425F PlayPanelTy::SetPanel */
      local_8 = st::fn_0040425F(g_playPanel_008016E4,'\0');
    }
    if ((local_8 != 0 ||
         (bVar13 ||
         (bVar12 ||
         (bVar11 ||
         (bVar10 || (bVar9 || (bVar8 || (bVar7 || (bVar6 || (bVar5 || (bVar4 || bVar3))))))))))) &&
       (param_1 == '\x0f')) {
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    local_10 = 0;
    local_14 = (uint)(DAT_00808783 != '\x03');
    local_18 = 1;
    st::fn_00403C33((undefined4 *)0x5,&local_18,1,0xffffffff);
    DAT_0080878c = 1;
    if (g_cPanel_00801688 != nullptr) {
      /* ST_CALLSITE[0052F569]: CALL 0x00402ed2; direct=00402ED2 CPanelTy::ShiftControls */
      st::fn_00402ED2(g_cPanel_00801688,0);
    }
    switch(param_1) {
    case '\x01':
      break;
    case '\x02':
    case '\f':
    case '\x0e':
      this_00->field_01A9 = 1;
      break;
    default:
      goto switchD_0052f589_caseD_3;
    }
    if (param_1 == '\x01') {
      this_00->field_01A9 = 0;
    }
    if (param_1 != this_00->field_01A4) {
      this_00->field_01A4 = param_1;
      /* ST_CALLSITE[0052F5B2]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(this_00);
      goto switchD_0052f30f_caseD_4;
    }
    break;
  case CASE_4:
switchD_0052f30f_caseD_4:
    break;
  default:
    goto switchD_0052f30f_default;
  }
switchD_0052f589_caseD_3:
  switch(param_1) {
  case '\x02':
  case '\f':
  case '\x0e':
    this_00->field_01A9 = 1;
  case '\x01':
    if (param_1 == '\x01') {
      this_00->field_01A9 = 0;
    }
    if (param_1 != this_00->field_01A4) {
      this_00->field_01A4 = param_1;
      /* ST_CALLSITE[0052F5F8]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(this_00);
    }
  default:
    this_00->field_0172 = CASE_3;
    GVar14 = CASE_AF;
  }
LAB_0052f60b:
  st::fn_00405E2F(GVar14);
switchD_0052f30f_default:
  g_currentExceptionFrame = local_5c.previous;
  return;
}

// 0052F7E0 OptPanelTy::SwitchOptPanelOff
#line 4 "decomp/ST.exe/functions/0052F7E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::SwitchOptPanelOff

   [STSwitchEnumApplier] Switch target field_0172 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_0172State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STSwitchEnumApplier] Switch target field_01A4 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01A4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14
    */

void __thiscall st::fn_0052F7E0(OptPanelTy *this)

{
  OptPanelTy *this_00;
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode == 0) {
    if ((local_8->field_0172 == CASE_1) || (local_8->field_0172 == CASE_3)) {
      local_8->field_01AA = 0;
      local_8->field_01A9 = 0;
      local_8->field_01A4 = CASE_1;
      /* ST_CALLSITE[0052F838]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(local_8);
      if (this_00->field_0172 == CASE_1) {
        /* ST_CALLSITE[0052F84B]: CALL 0x00405a1a; direct=00405A1A OptPanelTy::ShiftControls */
        st::fn_00405A1A(this_00,0);
      }
      this_00->field_0172 = CASE_4;
      st::fn_00405E2F(CASE_B0);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x139,0,errorCode,
                             st::mutable_c_string("%s"),"OptPanelTy::SwitchOptPanelOff");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x139);
  return;
}

// 0052F900 OptPanelTy::ShiftControls
#line 4 "decomp/ST.exe/functions/0052F900/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::ShiftControls

   [STSwitchEnumApplier] Switch target field_01A4 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01A4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0052F900(OptPanelTy *this,int param_1)

{
  OptPanelTy *this_00;
  short sVar2;
  int iVar5;
  uint uVar3;
  int iVar4;
  int iVar6;
  uint *puVar7;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  if (param_1 != this->field_005C) {
    this->field_005C = param_1;
    memset(&this->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
    sVar2 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 == 0) {
      sVar2 = -sVar2;
    }
    this->field_002E = sVar2;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    iVar5 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    this_00 = local_8;
    if (iVar5 == 0) {
      iVar6 = 10;
      puVar7 = local_8->field_01B5;
      do {
        if (*puVar7 != 0) {
          st::fn_006E6080(this_00,2,*puVar7,(undefined4 *)&this_00->field_0x18);
        }
        puVar7 = puVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      puVar7 = this_00->field_01AD;
      iVar6 = 2;
      do {
        if (*puVar7 != 0) {
          st::fn_006E6080(this_00,2,*puVar7,(undefined4 *)&this_00->field_0x18);
        }
        puVar7 = puVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      switch(this_00->field_01A4) {
      case CASE_3:
      case CASE_4:
      case CASE_C:
      case CASE_E:
        memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
        if ((param_1 == 0) || (uVar3 = 0x55, DAT_0080734c == '\0')) {
          uVar3 = 0x56;
        }
        this_00->field_0028 = uVar3;
        if (this_00->field_01B5[0] != 0) {
          st::fn_006E6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);
        }
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x156,0,iVar5,
                               st::mutable_c_string("%s"),"OptPanelTy::ShiftControls");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x156);
  }
  return;
}

// 0052FB00 OptPanelTy::SetOptControls
#line 4 "decomp/ST.exe/functions/0052FB00/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::SetOptControls

   [STSwitchEnumApplier] Switch target field_01A4 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01A4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14

   [STSwitchEnumApplier] Switch target field_01AB uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01ABState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_A=10

   [STSwitchEnumApplier] Switch target field_01AB uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01ABState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_A=10;CASE_B=11 */

void __thiscall st::fn_0052FB00(OptPanelTy *this)

{
  char cVar1;
  ccFntTy *pcVar2;
  byte bVar4;
  int local_EAX_51;
  char *pcVar7_mg10;
  int local_EAX_338;
  int local_EAX_465;
  char *pcVar7_mg26;
  int iVar6;
  int local_EAX_886;
  char *pcVar7_mg1C;
  char *pcVar7_mg11;
  char *pcVar7_mg1D;
  char *pcVar7_mg4;
  char *pcVar7_mg0;
  char *pcVar7_mg1;
  char *pcVar7_mg2;
  char *pcVar7_mg3;
  char *pcVar7_mg5;
  char *pcVar7_mg6;
  char *pcVar7_mg7;
  char *pcVar7_mgC;
  char *pcVar7_mgD;
  char *pcVar7_mgE;
  char *pcVar7_mgF;
  char *pcVar7_mg8;
  char *pcVar7_mg9;
  char *pcVar7_mgA;
  char *pcVar7_mgB;
  char *pcVar7_mg28;
  char *pcVar7_mg27;
  int local_EAX_4632;
  int local_EAX_4865;
  int local_EAX_5376;
  int local_EAX_5605;
  int local_EAX_5906;
  int local_EAX_6096;
  HANDLE pvVar5;
  uint uVar6;
  LPSTR pCVar7;
  int iVar17;
  uint uVar8;
  ushort *puVar9;
  OptPanelTy *this_00;
  int iVar10;
  uint *puVar11;
  int *piVar12;
  char *pcVar13;
  char *pcVar14;
  uint uVar16;
  SNDContext *pSVar17;
  ccFntTy **ppcVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  short sVar23;
  ushort uVar24;
  UINT UVar25;
  RecoveredSourceFamily_dibcopy *pRVar26;
  uint uVar27;
  char *pcVar28;
  int iVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint local_1c48 [112];
  ccFntTy *local_1a88 [3];
  int local_1a7c;
  int local_1a78;
  undefined4 local_1a74;
  undefined4 local_1a70;
  undefined4 local_1a6c;
  DArrayTy *local_1a68;
  undefined4 local_1a3c;
  undefined4 local_1a38;
  undefined4 local_1a34;
  undefined4 local_19fc;
  undefined4 local_19f8;
  undefined4 local_19f4;
  undefined4 local_122c;
  undefined4 local_1228;
  uint local_11fc [4];
  undefined4 local_11ec;
  int local_11e8;
  undefined4 local_11e4;
  undefined4 local_11e0;
  int local_11dc;
  int local_11d8;
  undefined4 local_11c4;
  undefined4 local_11c0;
  undefined4 local_11bc;
  undefined4 local_114c;
  undefined4 local_1148;
  undefined4 local_1144;
  int local_1140 [4];
  undefined4 local_1130;
  undefined4 local_112c;
  undefined4 local_10e0;
  undefined4 local_10dc;
  undefined4 local_10d8;
  undefined4 local_1038;
  undefined4 local_1034;
  undefined4 local_1030;
  undefined4 local_102c;
  ushort *local_101c;
  int local_1018;
  undefined4 local_fc4;
  int local_fc0 [4];
  undefined4 local_fb0;
  undefined4 local_fac;
  undefined4 local_f58;
  ushort *local_e9c;
  int local_e98;
  undefined4 local_d80;
  undefined4 local_994;
  undefined4 local_990;
  char local_984 [260];
  char local_880 [260];
  int local_77c [4];
  undefined4 local_76c;
  undefined4 local_768;
  undefined4 local_764;
  undefined4 local_760;
  undefined4 local_754;
  undefined4 local_750;
  undefined4 local_74c;
  undefined4 local_734;
  undefined4 local_730;
  undefined4 local_72c;
  undefined4 local_714;
  undefined4 local_710;
  undefined4 local_70c;
  undefined4 local_6f4;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  int local_644;
  int local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_544;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_538;
  ushort *local_528;
  int local_524;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  int local_4c4;
  int local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 local_464;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  ushort *local_3a8;
  int local_3a4;
  undefined4 local_2ac;
  InternalExceptionFrame local_2a8;
  InternalExceptionFrame local_264;
  InternalExceptionFrame local_220;
  InternalExceptionFrame local_1dc;
  InternalExceptionFrame local_198;
  InternalExceptionFrame local_154;
  InternalExceptionFrame local_110;
  undefined4 local_cc [4];
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  uint *local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  uint local_38;
  size_t local_34;
  char *local_30;
  uint local_2c;
  OptPanelTy *local_28;
  uint local_24;
  uint local_20;
  size_t local_1c;
  uint *local_18;
  uint local_14;
  byte local_d;
  undefined4 *local_c;
  uint local_8;
  char *resourceString;
  char *pcVar7_mg32;

  local_8 = 0x52fb0d;
  local_110.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_110;
  local_28 = this;
  local_EAX_51 = st::fn_0072D7F0(local_110.jumpBuffer,0);
  this_00 = local_28;
  if (local_EAX_51 != 0) {
    g_currentExceptionFrame = local_110.previous;
    iVar17 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x350,0,local_EAX_51,
                                st::mutable_c_string("%s"),"OptPanelTy::SetOptControls");
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_51,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x350);
    return;
  }
  iVar10 = 10;
  local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(10));
  puVar11 = local_28->field_01B5;
  do {
    if (*puVar11 != 0) {
      st::fn_006E56B0(this_00->field_000C,*puVar11);
    }
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  /* ST_CALLSITE[0052FB83]: CALL 0x00403229; direct=00403229 DibPut */
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0,'\x01',(byte *)this_00->field_0184
        );
  st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x31,2,0xc6,0xc);
  switch(this_00->field_01A4) {
  case CASE_1:
    uVar31 = 0;
    iVar10 = -2;
    UVar25 = 16000;
    break;
  case CASE_2:
    uVar31 = 0;
    iVar10 = -2;
    UVar25 = 0x3e87;
    break;
  case CASE_3:
    UVar25 = 0x3e81;
    goto LAB_00530592;
  case CASE_4:
    UVar25 = 0x3e82;
LAB_00530592:
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg27 = st::fn_006B0140(UVar25,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg27,iVar10,iVar29,uVar31);
    puVar9 = this_00->field_0190;
LAB_005305a9:
    pRVar26 = (RecoveredSourceFamily_dibcopy *)this_00->field_0068;
LAB_005305b4:
    /* ST_CALLSITE[005305B4]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229(pRVar26,0x1d,0x13,'\x01',(byte *)puVar9);
    goto cf_common_join_005305BC;
  case CASE_5:
  case CASE_B:
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg10 = st::fn_006B0140(0x3ea8,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg10,iVar10,iVar29,uVar31);
    st::fn_00710A90(this_00->field_0180,this_00->field_0068,0,0x1d,0x13,0xee,0x6a);
    switch(this_00->field_01AB) {
    case CASE_1:
    case CASE_2:
    case CASE_6:
      pcVar28 = local_984;
      for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
        pcVar28[0] = '\0';
        pcVar28[1] = '\0';
        pcVar28[2] = '\0';
        pcVar28[3] = '\0';
        pcVar28 = pcVar28 + 4;
      }
      local_EAX_338 = st::fn_00711110(this_00->field_0180,(char *)&this_00->field_0x1f5);
      if (local_EAX_338 < 0xee) {
LAB_0052fd4a:
        uVar31 = 0xffffffff;
        pcVar28 = (char *)&this_00->field_0x1f5;
        do {
          pcVar14 = pcVar28;
          if (uVar31 == 0) break;
          uVar31 = uVar31 - 1;
          pcVar14 = pcVar28 + 1;
          cVar1 = *pcVar28;
          pcVar28 = pcVar14;
        } while (cVar1 != '\0');
        uVar31 = ~uVar31;
        pcVar28 = pcVar14 + -uVar31;
        pcVar14 = local_984;
        for (uVar8 = uVar31 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar28;
          pcVar28 = pcVar28 + 4;
          pcVar14 = pcVar14 + 4;
        }
      }
      else {
        uVar31 = 0xffffffff;
        pcVar28 = (char *)&this_00->field_0x1f5;
        do {
          if (uVar31 == 0) break;
          uVar31 = uVar31 - 1;
          cVar1 = *pcVar28;
          pcVar28 = pcVar28 + 1;
        } while (cVar1 != '\0');
        local_1c = ~uVar31 - 1;
        local_34 = 10;
        do {
          local_34 = local_34 + 1;
          st::fn_0072E340(local_984,(char *)&this_00->field_0x1f5,local_34);
          uVar31 = 0xffffffff;
          pcVar28 = &st_global_007C7278;
          do {
            pcVar14 = pcVar28;
            if (uVar31 == 0) break;
            uVar31 = uVar31 - 1;
            pcVar14 = pcVar28 + 1;
            cVar1 = *pcVar28;
            pcVar28 = pcVar14;
          } while (cVar1 != '\0');
          uVar31 = ~uVar31;
          iVar10 = -1;
          pcVar28 = local_984;
          do {
            pcVar13 = pcVar28;
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            pcVar13 = pcVar28 + 1;
            cVar1 = *pcVar28;
            pcVar28 = pcVar13;
          } while (cVar1 != '\0');
          pcVar28 = pcVar14 + -uVar31;
          pcVar14 = pcVar13 + -1;
          memmove(pcVar14, pcVar28, uVar31); /* compiler REP MOVS byte copy */
          uVar8 = 0;
          local_EAX_465 = st::fn_00711110(this_00->field_0180,local_984);
        } while ((local_EAX_465 < 0xee) && ((int)local_34 < (int)local_1c));
        if (local_34 == local_1c) goto LAB_0052fd4a;
        pcVar28 = local_984;
        for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
          pcVar28[0] = '\0';
          pcVar28[1] = '\0';
          pcVar28[2] = '\0';
          pcVar28[3] = '\0';
          pcVar28 = pcVar28 + 4;
        }
        st::fn_0072E340(local_984,(char *)&this_00->field_0x1f5,local_34 - 3);
        uVar31 = 0xffffffff;
        pcVar28 = &st_global_007C7274;
        do {
          pcVar14 = pcVar28;
          if (uVar31 == 0) break;
          uVar31 = uVar31 - 1;
          pcVar14 = pcVar28 + 1;
          cVar1 = *pcVar28;
          pcVar28 = pcVar14;
        } while (cVar1 != '\0');
        uVar31 = ~uVar31;
        iVar10 = -1;
        pcVar28 = local_984;
        do {
          pcVar13 = pcVar28;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar13 = pcVar28 + 1;
          cVar1 = *pcVar28;
          pcVar28 = pcVar13;
        } while (cVar1 != '\0');
        pcVar28 = pcVar14 + -uVar31;
        pcVar14 = pcVar13 + -1;
        for (uVar8 = uVar31 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar28;
          pcVar28 = pcVar28 + 4;
          pcVar14 = pcVar14 + 4;
        }
      }
      UVar25 = this_00->field_01A5;
      for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
        *pcVar14 = *pcVar28;
        pcVar28 = pcVar28 + 1;
        pcVar14 = pcVar14 + 1;
      }
      pcVar28 = local_984;
      pcVar7_mg26 = st::fn_006B0140(UVar25,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0052FD92]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&this_00->field_006C),pcVar7_mg26,pcVar28);
      break;
    default:
      pcVar7_mg1D = st::fn_006B0140(this_00->field_01A5,g_hINSTANCE_00807618);
      uVar31 = 0xffffffff;
      do {
        pcVar28 = pcVar7_mg1D;
        if (uVar31 == 0) break;
        uVar31 = uVar31 - 1;
        pcVar28 = pcVar7_mg1D + 1;
        cVar1 = *pcVar7_mg1D;
        pcVar7_mg1D = pcVar28;
      } while (cVar1 != '\0');
      uVar31 = ~uVar31;
      pcVar28 = pcVar28 + -uVar31;
      pcVar14 = &this_00->field_006C;
      memmove(pcVar14, pcVar28, uVar31); /* compiler REP MOVS byte copy */
      uVar8 = 0;
      break;
    case CASE_7:
      pcVar28 = local_880;
      for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
        pcVar28[0] = '\0';
        pcVar28[1] = '\0';
        pcVar28[2] = '\0';
        pcVar28[3] = '\0';
        pcVar28 = pcVar28 + 4;
      }
      iVar10 = 0;
      local_30 = nullptr;
      if (DAT_00808aaf != 0) {
        pcVar28 = &CHAR_00h_00808ab0;
        do {
          local_30 = pcVar28;
          if (*(int *)(pcVar28 + 0x40) == g_playSystem_00802A38->field_00F4) break;
          iVar10 = iVar10 + 1;
          pcVar28 = pcVar28 + 0x9c;
          local_30 = nullptr;
        } while (iVar10 < (int)(uint)DAT_00808aaf);
      }
      pcVar28 = local_30;
      if (local_30 == nullptr) {
        pcVar14 = &st_global_007C7274;
LAB_0052ff02:
        uVar31 = 0xffffffff;
        do {
          pcVar28 = pcVar14;
          if (uVar31 == 0) break;
          uVar31 = uVar31 - 1;
          pcVar28 = pcVar14 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar28;
        } while (cVar1 != '\0');
        uVar31 = ~uVar31;
        pcVar28 = pcVar28 + -uVar31;
        pcVar14 = local_880;
        for (uVar8 = uVar31 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar28;
          pcVar28 = pcVar28 + 4;
          pcVar14 = pcVar14 + 4;
        }
      }
      else {
        iVar6 = st::fn_00711110(this_00->field_0180,local_30);
        pcVar14 = local_30;
        if (iVar6 < 200) goto LAB_0052ff02;
        uVar31 = 0xffffffff;
        do {
          if (uVar31 == 0) break;
          uVar31 = uVar31 - 1;
          cVar1 = *pcVar28;
          pcVar28 = pcVar28 + 1;
        } while (cVar1 != '\0');
        local_18 = (uint *)(~uVar31 - 1);
        local_c = (undefined4 *)0xa;
        do {
          local_c = (undefined4 *)((int)local_c + 1);
          st::fn_0072E340(local_880,local_30,(size_t)local_c);
          uVar31 = 0xffffffff;
          pcVar28 = &st_global_007C7278;
          do {
            pcVar14 = pcVar28;
            if (uVar31 == 0) break;
            uVar31 = uVar31 - 1;
            pcVar14 = pcVar28 + 1;
            cVar1 = *pcVar28;
            pcVar28 = pcVar14;
          } while (cVar1 != '\0');
          uVar31 = ~uVar31;
          iVar10 = -1;
          pcVar28 = local_880;
          do {
            pcVar13 = pcVar28;
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            pcVar13 = pcVar28 + 1;
            cVar1 = *pcVar28;
            pcVar28 = pcVar13;
          } while (cVar1 != '\0');
          pcVar28 = pcVar14 + -uVar31;
          pcVar14 = pcVar13 + -1;
          memmove(pcVar14, pcVar28, uVar31); /* compiler REP MOVS byte copy */
          uVar8 = 0;
          local_EAX_886 = st::fn_00711110(this_00->field_0180,local_880);
          pcVar28 = local_30;
        } while ((local_EAX_886 < 200) && ((int)local_c < (int)local_18));
        pcVar14 = local_30;
        if (local_c == local_18) goto LAB_0052ff02;
        pcVar14 = local_880;
        for (iVar10 = 0x41; iVar10 != 0; iVar10 = iVar10 + -1) {
          pcVar14[0] = '\0';
          pcVar14[1] = '\0';
          pcVar14[2] = '\0';
          pcVar14[3] = '\0';
          pcVar14 = pcVar14 + 4;
        }
        st::fn_0072E340(local_880,pcVar28,(int)local_c - 3);
        uVar31 = 0xffffffff;
        pcVar28 = &st_global_007C7274;
        do {
          pcVar14 = pcVar28;
          if (uVar31 == 0) break;
          uVar31 = uVar31 - 1;
          pcVar14 = pcVar28 + 1;
          cVar1 = *pcVar28;
          pcVar28 = pcVar14;
        } while (cVar1 != '\0');
        uVar31 = ~uVar31;
        iVar10 = -1;
        pcVar28 = local_880;
        do {
          pcVar13 = pcVar28;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar13 = pcVar28 + 1;
          cVar1 = *pcVar28;
          pcVar28 = pcVar13;
        } while (cVar1 != '\0');
        pcVar28 = pcVar14 + -uVar31;
        pcVar14 = pcVar13 + -1;
        for (uVar8 = uVar31 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar14 = *(undefined4 *)pcVar28;
          pcVar28 = pcVar28 + 4;
          pcVar14 = pcVar14 + 4;
        }
      }
      UVar25 = this_00->field_01A5;
      for (uVar31 = uVar31 & 3; uVar31 != 0; uVar31 = uVar31 - 1) {
        *pcVar14 = *pcVar28;
        pcVar28 = pcVar28 + 1;
        pcVar14 = pcVar14 + 1;
      }
      pcVar28 = local_880;
      pcVar7_mg1C = st::fn_006B0140(UVar25,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0052FF3E]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&this_00->field_006C),pcVar7_mg1C,pcVar28);
      break;
    case CASE_A:
      uVar31 = (uint)(byte)this_00->field_01AC;
      pcVar7_mg11 = st::fn_006B0140(this_00->field_01A5,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0052FF6A]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&this_00->field_006C),pcVar7_mg11,uVar31);
    }
    if (DAT_0080874e == '\x03') {
      uVar31 = 5;
    }
    else {
      uVar31 = -(uint)(DAT_0080874e != '\x01') & 7;
    }
    st::fn_00711B70(this_00->field_0180,&this_00->field_006C,-2,-1,uVar31,-1,-1);
    goto cf_common_join_005305BC;
  case CASE_6:
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mgC = st::fn_006B0140(0x3e8a,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mgC,iVar10,iVar29,uVar31);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x6b,0x6e,0xa0,0xb);
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mgD = st::fn_006B0140(0x3ee4,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mgD,iVar10,iVar29,uVar31);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x61,0x4e,0xb);
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar29 = -1;
    iVar10 = -3;
    pcVar7_mgE = st::fn_006B0140(0x3eea,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mgE,iVar10,iVar29,uVar31);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x77,0x4e,0xb);
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar29 = -1;
    iVar10 = -3;
    pcVar7_mgF = st::fn_006B0140(0x3eeb,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mgF,iVar10,iVar29,uVar31);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x84,0x4e,0xb);
    goto LAB_00530554;
  case CASE_7:
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg8 = st::fn_006B0140(0x3e8b,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg8,iVar10,iVar29,uVar31);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x61,0x4e,0xb);
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar29 = -1;
    iVar10 = -3;
    pcVar7_mg9 = st::fn_006B0140(0x3ee9,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg9,iVar10,iVar29,uVar31);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x6b,0x6e,0xa0,0xb);
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mgA = st::fn_006B0140(0x3ee4,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mgA,iVar10,iVar29,uVar31);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x77,0x4e,0xb);
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar29 = -1;
    iVar10 = -3;
    pcVar7_mgB = st::fn_006B0140(0x3eeb,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mgB,iVar10,iVar29,uVar31);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x84,0x4e,0xb);
LAB_00530554:
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar10 = -3;
    UVar25 = 0x3eec;
    break;
  case CASE_8:
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg5 = st::fn_006B0140(0x3e8c,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg5,iVar10,iVar29,uVar31);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x15,0x77,0xc);
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg6 = st::fn_006B0140(0x3eef,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg6,iVar10,iVar29,uVar31);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x94,0x15,0x77,0xc);
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg7 = st::fn_006B0140(0x3eed,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg7,iVar10,iVar29,uVar31);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x5b,0xf0,0xc);
    uVar31 = 0;
    iVar10 = -2;
    UVar25 = 0x3f07;
    break;
  case CASE_9:
    uVar31 = 0;
    iVar10 = -2;
    UVar25 = 0x3e8d;
    break;
  default:
    goto cf_common_join_005305BC;
  case CASE_C:
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg4 = st::fn_006B0140(0x3e89,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg4,iVar10,iVar29,uVar31);
    puVar9 = this_00->field_0194;
    goto LAB_005305a9;
  case CASE_D:
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg1 = st::fn_006B0140(0x3e88,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg1,iVar10,iVar29,uVar31);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x6d,0x77,0x11);
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg2 = st::fn_006B0140(0x3ef9,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg2,iVar10,iVar29,uVar31);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x7f,0x77,0x11);
    uVar31 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg3 = st::fn_006B0140(0x3efa,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg3,iVar10,iVar29,uVar31);
    /* ST_CALLSITE[0053013D]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x6f,'\x01',
           (byte *)this_00->field_018C);
    resourceString = &this_00->field_006C;
    /* ST_CALLSITE[00530159]: CALL EDI */
    st::external_00000080(resourceString,st::mutable_c_string("%d"),(uint)DAT_00807346);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0xaa,0x6f,
                     *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
    st::fn_007119C0(this_00->field_017C,resourceString,-2,-1,0);
    /* ST_CALLSITE[005301AD]: CALL 0x00403229; direct=00403229 DibPut */
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x81,'\x01',
           (byte *)this_00->field_018C);
    /* ST_CALLSITE[005301C1]: CALL EDI */
    st::external_00000080(resourceString,st::mutable_c_string("%d"),DAT_00807347 + 1);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0xaa,0x81,
                     *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
    st::fn_007119C0(this_00->field_017C,resourceString,-2,-1,0);
    goto cf_common_join_005305BC;
  case CASE_E:
    uVar31 = 0;
    iVar29 = -1;
    iVar10 = -2;
    pcVar7_mg0 = st::fn_006B0140(0x3e94,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg0,iVar10,iVar29,uVar31);
    puVar9 = this_00->field_0190;
    pRVar26 = (RecoveredSourceFamily_dibcopy *)this_00->field_0068;
    goto LAB_005305b4;
  }
  iVar29 = -1;
  pcVar7_mg28 = st::fn_006B0140(UVar25,g_hINSTANCE_00807618);
  st::fn_007119C0(this_00->field_017C,pcVar7_mg28,iVar10,iVar29,uVar31);
cf_common_join_005305BC:
  switch(this_00->field_01A4) {
  case CASE_1:
    bVar4 = 0;
    local_8 = local_8 & 0xffffff00;
    do {
      iVar10 = 1;
      if (((DAT_00808783 == '\x03') && (bVar4 != 0)) &&
         ((bVar4 < 3 || ((bVar4 == 4 && (DAT_008067a0 != '\0')))))) {
        iVar10 = 0;
      }
      uVar27 = 0;
      uVar8 = local_8 & 0xff;
      uVar22 = 0;
      pcVar28 = nullptr;
      uVar6 = 0;
      uVar24 = 0;
      iVar29 = uVar8 + 0xc0af;
      sVar23 = 0;
      iVar21 = uVar8 + 0xc09f;
      pCVar7 = st::fn_0040577C(st::mutable_c_string("BUT_BUTOPT"),0);
      /* ST_CALLSITE[00530650]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
      uVar31 = st::fn_0040398B((UPanelTy *)this_00,1,iVar10,0x1d,uVar8 * 0x12 + 0x13,1,pCVar7,
                                   iVar21,iVar29,sVar23,uVar24,uVar6,pcVar28,uVar22,uVar27);
      this_00->field_01B5[uVar8] = uVar31;
      bVar4 = (byte)local_8 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
    } while (bVar4 < 7);
    break;
  case CASE_2:
    local_18 = this_00->field_01B5;
    iVar10 = 0xc09f;
    iVar29 = 0x25;
    local_1c = 5;
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(6));
    do {
      uVar27 = 0;
      uVar22 = 0;
      pcVar28 = nullptr;
      uVar6 = 0;
      uVar24 = 0;
      iVar21 = iVar10 + 0x10;
      sVar23 = 0;
      iVar20 = iVar10;
      pCVar7 = st::fn_0040577C(st::mutable_c_string("BUT_BUTOPT"),0);
      /* ST_CALLSITE[0053077F]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
      uVar31 = st::fn_0040398B((UPanelTy *)this_00,1,1,0x1d,iVar29,1,pCVar7,iVar20,iVar21,sVar23
                                   ,uVar24,uVar6,pcVar28,uVar22,uVar27);
      iVar10 = iVar10 + 1;
      iVar29 = iVar29 + 0x12;
      *local_18 = uVar31;
      local_18 = local_18 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    local_1c = 0;
    break;
  case CASE_3:
  case CASE_4:
  case CASE_E:
    if (this_00->field_01A4 != CASE_E) {
      if (this_00->field_01DD != (HANDLE)0x0) {
        /* ST_CALLSITE[00531402]: CALL dword ptr [0x0085bcac] */
        st::external_00000060(this_00->field_01DD);
        this_00->field_01DD = (HANDLE)0x0;
      }
      uVar31 = 0xffffffff;
      pcVar28 = &CHAR_00h_00807680;
      do {
        pcVar14 = pcVar28;
        if (uVar31 == 0) break;
        uVar31 = uVar31 - 1;
        pcVar14 = pcVar28 + 1;
        cVar1 = *pcVar28;
        pcVar28 = pcVar14;
      } while (cVar1 != '\0');
      uVar31 = ~uVar31;
      pcVar28 = pcVar14 + -uVar31;
      pcVar14 = &this_00->field_006C;
      memmove(pcVar14, pcVar28, uVar31); /* compiler REP MOVS byte copy */
      uVar8 = 0;
      uVar31 = 0xffffffff;
      pcVar7_mg32 = st_global_0079ACEC;
      do {
        pcVar28 = pcVar7_mg32;
        if (uVar31 == 0) break;
        uVar31 = uVar31 - 1;
        pcVar28 = pcVar7_mg32 + 1;
        cVar1 = *pcVar7_mg32;
        pcVar7_mg32 = pcVar28;
      } while (cVar1 != '\0');
      uVar31 = ~uVar31;
      iVar10 = -1;
      pcVar14 = &this_00->field_006C;
      do {
        pcVar13 = pcVar14;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar13;
      } while (cVar1 != '\0');
      pcVar28 = pcVar28 + -uVar31;
      pcVar14 = pcVar13 + -1;
      memmove(pcVar14, pcVar28, uVar31); /* compiler REP MOVS byte copy */
      uVar8 = 0;
      uVar31 = 0xffffffff;
      pcVar28 = &CHAR_00h_00807ddd;
      do {
        pcVar14 = pcVar28;
        if (uVar31 == 0) break;
        uVar31 = uVar31 - 1;
        pcVar14 = pcVar28 + 1;
        cVar1 = *pcVar28;
        pcVar28 = pcVar14;
      } while (cVar1 != '\0');
      uVar31 = ~uVar31;
      iVar10 = -1;
      pcVar28 = &this_00->field_006C;
      do {
        pcVar13 = pcVar28;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar28 + 1;
        cVar1 = *pcVar28;
        pcVar28 = pcVar13;
      } while (cVar1 != '\0');
      pcVar28 = pcVar14 + -uVar31;
      pcVar14 = pcVar13 + -1;
      memmove(pcVar14, pcVar28, uVar31); /* compiler REP MOVS byte copy */
      st::fn_006B78C0(&this_00->field_006C,&this_00->field_006C);
      /* ST_CALLSITE[005314A1]: CALL dword ptr [0x0085bcfc] */
      pvVar5 = st::external_00000074(st::pointer_boundary_cast<LPCSTR>(&this_00->field_006C),0,1);
      this_00->field_01DD = pvVar5;
      if (pvVar5 == (HANDLE)0xffffffff) {
        this_00->field_01DD = (HANDLE)0x0;
      }
    }
    iVar10 = this_00->field_005C;
    memset(local_77c, 0, 0x4d4); /* compiler bulk-zero initialization */
    local_77c[0] = 0;
    local_77c[2] = st::machine_word_boundary_cast<int>(this_00->field_003C + 0x26);
    if (iVar10 == 0) {
      local_77c[3] = -this_00->field_0048;
    }
    else {
      local_77c[3] = this_00->field_0044;
    }
    local_77c[3] = st::machine_word_boundary_cast<int>(local_77c[3] + 0x31);
    local_754 = this_00->field_0008;
    local_76c = 200;
    local_768 = 0x43;
    local_764 = 0;
    local_760 = 0;
    local_750 = 2;
    local_74c = 0x8160;
    local_730 = 2;
    local_72c = 0x8161;
    local_710 = 2;
    local_70c = 0x8162;
    local_6f0 = 2;
    local_6ec = 0x8163;
    if (DAT_0080734c != '\0') {
      local_2ac = 1;
    }
    local_644 = st::machine_word_boundary_cast<int>(this_00->field_003C + 0xf2);
    local_650 = 2;
    local_64c = 0;
    local_648 = 2;
    local_544 = 1;
    local_540 = 1;
    if (iVar10 == 0) {
      local_640 = -this_00->field_0048;
    }
    else {
      local_640 = this_00->field_0044;
    }
    local_640 = local_640 + 0x30;
    local_63c = 0x11;
    local_638 = 0x24;
    local_734 = local_754;
    local_714 = local_754;
    local_6f4 = local_754;
    local_528 = st::fn_0070AA70(g_cMf32_00806790,st::mutable_c_string("BUT_MSLUP"),0,1);
    local_524 = st::fn_0070A6F0(g_cMf32_00806790,0x12,st::mutable_c_string("BUT_MSLUP"),1);
    local_5ec = this_00->field_0008;
    local_3c4 = 1;
    local_3c0 = 1;
    local_4c4 = st::machine_word_boundary_cast<int>(this_00->field_003C + 0xf2);
    local_53c = 500;
    local_538 = 0x32;
    local_5e8 = 2;
    local_5e4 = 0x8164;
    local_4d0 = 2;
    local_4cc = 0;
    local_4c8 = 2;
    if (this_00->field_005C == 0) {
      local_4c0 = -this_00->field_0048;
    }
    else {
      local_4c0 = this_00->field_0044;
    }
    local_4c0 = local_4c0 + 0x51;
    local_4bc = 0x11;
    local_4b8 = 0x24;
    local_3a8 = st::fn_0070AA70(g_cMf32_00806790,st::mutable_c_string("BUT_MSLDN"),0,1);
    local_3a4 = st::fn_0070A6F0(g_cMf32_00806790,0x12,st::mutable_c_string("BUT_MSLDN"),1);
    local_46c = this_00->field_0008;
    local_3bc = 500;
    local_3b8 = 0x32;
    local_468 = 2;
    local_464 = 0x8165;
    /* ST_CALLSITE[00531727]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,7,this_00->field_01B5,nullptr,st::machine_word_boundary_cast<undefined4>(local_77c),0);
    if ((this_00->field_005C == 0) || (uVar6 = 0x55, DAT_0080734c == '\0')) {
      uVar6 = 0x56;
    }
    uVar31 = this_00->field_01B5[0];
    this_00->field_0028 = uVar6;
    if (uVar31 != 0) {
      st::fn_006E6080(this_00,st::machine_word_boundary_cast<undefined4>(&DAT_80000002),uVar31,(undefined4 *)&this_00->field_0x18);
    }
    if (this_00->field_01A4 == CASE_3) {
      pcVar2 = this_00->field_017C;
      ppcVar18 = local_1a88;
      for (iVar10 = 0x223; iVar10 != 0; iVar10 = iVar10 + -1) {
        *ppcVar18 = nullptr;
        ppcVar18 = ppcVar18 + 1;
      }
      local_1a88[0] = nullptr;
      local_1a7c = st::machine_word_boundary_cast<int>(this_00->field_003C + 0x26);
      local_1a88[1] = (ccFntTy *)0x9;
      if (this_00->field_005C == 0) {
        local_1a78 = -this_00->field_0048;
      }
      else {
        local_1a78 = this_00->field_0044;
      }
      local_1a68 = this_00->field_01F1;
      local_1a78 = local_1a78 + 0x1c;
      local_1228 = 1;
      local_122c = 1;
      local_1a3c = this_00->field_0008;
      local_1a74 = 0xde;
      local_1a70 = 0xb;
      local_1a6c = 0x104;
      local_1a38 = 2;
      local_1a34 = 0xc0b0;
      local_19f8 = 2;
      local_19f4 = 0xc0a0;
      local_1a88[2] = pcVar2;
      local_19fc = local_1a3c;
      /* ST_CALLSITE[0053183E]: CALL dword ptr [EAX + 0x8] */
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,st::pointer_boundary_cast<undefined4 *>(this_00->field_01B5 + 1),nullptr,
                 st::machine_word_boundary_cast<undefined4>(local_1a88),1);
    }
    uVar32 = 0;
    uVar30 = 0;
    pcVar28 = nullptr;
    uVar27 = 0;
    uVar24 = 0;
    sVar23 = 0;
    uVar22 = 0xc0b1;
    uVar6 = 0xc0a1;
    if (this_00->field_01A4 == CASE_E) {
      pCVar7 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
      /* ST_CALLSITE[005318F0]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
      uVar31 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x78,0x7d,1,pCVar7,uVar6,uVar22,sVar23,
                                   uVar24,uVar27,pcVar28,uVar30,uVar32);
      this_00->field_01B5[2] = uVar31;
      /* ST_CALLSITE[005318FD]: CALL 0x004017a8; direct=004017A8 OptPanelTy::PrepAsses */
      st::fn_004017A8(this_00);
    }
    else {
      pCVar7 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
      /* ST_CALLSITE[0053187D]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
      uVar31 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x5d,0x7c,1,pCVar7,uVar6,uVar22,sVar23,
                                   uVar24,uVar27,pcVar28,uVar30,uVar32);
      uVar32 = 0;
      uVar30 = 0;
      pcVar28 = nullptr;
      uVar27 = 0;
      uVar24 = 0;
      sVar23 = 0;
      uVar22 = 0xc0b2;
      uVar6 = 0xc0a2;
      this_00->field_01B5[2] = uVar31;
      pCVar7 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
      /* ST_CALLSITE[005318BD]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
      uVar31 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x94,0x7c,1,pCVar7,uVar6,uVar22,sVar23,
                                   uVar24,uVar27,pcVar28,uVar30,uVar32);
      this_00->field_01B5[3] = uVar31;
      STPiece<0,2>(uVar31) = this_00->field_01E1;
      STPiece<2,2>(uVar31) = this_00->field_01E3;
      /* ST_CALLSITE[005318D1]: CALL 0x00403fbc; direct=00403FBC OptPanelTy::PrepFiles */
      st::fn_00403FBC(this_00,uVar31);
    }
    break;
  case CASE_5:
    uVar32 = 0;
    uVar30 = 0;
    pcVar28 = nullptr;
    uVar27 = 0;
    uVar24 = 0;
    sVar23 = 0;
    uVar22 = 0xc0af;
    uVar6 = 0xc09f;
    pCVar7 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
    /* ST_CALLSITE[005306A3]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar31 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x5e,0x7d,1,pCVar7,uVar6,uVar22,sVar23,
                                 uVar24,uVar27,pcVar28,uVar30,uVar32);
    uVar32 = 0;
    uVar30 = 0;
    pcVar28 = nullptr;
    uVar27 = 0;
    uVar24 = 0;
    sVar23 = 0;
    uVar22 = 0xc0b0;
    uVar6 = 0xc0a0;
    this_00->field_01B5[0] = uVar31;
    pCVar7 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
    /* ST_CALLSITE[005306E3]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar31 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x97,0x7d,1,pCVar7,uVar6,uVar22,sVar23,
                                 uVar24,uVar27,pcVar28,uVar30,uVar32);
    this_00->field_01B5[1] = uVar31;
    break;
  case CASE_6:
    local_18 = this_00->field_01B5;
    iVar10 = 0xc09f;
    local_c = (undefined4 *)0x16;
    local_1c = 4;
    do {
      uVar27 = 0;
      uVar22 = 0;
      pcVar28 = nullptr;
      uVar6 = 0;
      uVar24 = 0;
      bVar4 = '\x01' << ((char)iVar10 + 0x61U & 0x1f) & STPiece<1,1>(DAT_00807300);
      iVar29 = iVar10 + 0x10;
      sVar23 = 0;
      iVar21 = iVar10;
      pCVar7 = st::fn_0040577C(st::mutable_c_string("BUT_BUTOPT"),0);
      /* ST_CALLSITE[00530C60]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
      uVar31 = st::fn_0040398B((UPanelTy *)this_00,3,(-(uint)(bVar4 != 0) & 2) + 1,0x1d,
                                   (int)local_c,1,pCVar7,iVar21,iVar29,sVar23,uVar24,uVar6,pcVar28,
                                   uVar22,uVar27);
      iVar10 = iVar10 + 1;
      local_c = (undefined4 *)((int)local_c + 0x12);
      *local_18 = uVar31;
      local_18 = local_18 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    bVar4 = 5;
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(5));
    local_1c = 0;
    uVar31 = local_20;
    do {
      local_14 = 1;
      local_2c = STReplaceLowByte((uint32_t)(local_2c), (uint8_t)(4));
      if (bVar4 != 5) {
        local_2c = STReplaceLowByte((uint32_t)(local_2c), (uint8_t)(bVar4));
      }
      uVar8 = local_8 & 0xff;
      local_24 = (bVar4 != 5) - 1 & 4;
      if (uVar8 == 5) {
        uVar31 = ((DAT_0080730e + 4000) * 0x1f) / 0xfa1;
        local_20 = uVar31;
      }
      else if (uVar8 == 6) {
        uVar31 = 0;
        if (g_sound == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0050 & 1);
        }
        if (uVar8 == 0) {
          local_20 = 0;
          local_14 = 0;
        }
        else {
          local_264.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_264;
          local_EAX_4865 = st::fn_0072D7F0(local_264.jumpBuffer,0);
          if (local_EAX_4865 == 0) {
            if (g_sound == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0050 & 1);
            }
            if (uVar8 != 0) {
              st::fn_006B7E00((int)g_sndContext_0080765C,1,(undefined4 *)&local_74,(undefined4 *)&local_70);
            }
            uVar8 = (uint)(local_74 + local_70) >> 1;
          }
          else {
            uVar8 = 0;
          }
          if (g_sound == 0) {
            uVar16 = 0;
          }
          else {
            uVar16 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0050 & 1);
          }
          g_currentExceptionFrame = local_264.previous;
          if (uVar16 != 0) {
            iVar10 = g_sndContext_0080765C->field_0064;
            iVar29 = g_sndContext_0080765C->field_0060;
LAB_00530d9d:
            uVar31 = (iVar10 - iVar29) + 1;
          }
LAB_00530da0:
          uVar31 = (uVar8 * 0x1f) / uVar31;
          this_00 = local_28;
          local_20 = uVar31;
        }
      }
      else if (uVar8 == 7) {
        uVar31 = 0;
        if (g_sound == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0038 & 1);
        }
        if (uVar8 != 0) {
          local_154.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_154;
          local_EAX_4632 = st::fn_0072D7F0(local_154.jumpBuffer,0);
          if (local_EAX_4632 == 0) {
            if (g_sound == 0) {
              uVar8 = 0;
            }
            else {
              uVar8 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0038 & 1);
            }
            if (uVar8 != 0) {
              st::fn_006B7E00((int)g_sndContext_0080765C,0,(undefined4 *)&local_60,(undefined4 *)&local_6c);
            }
            uVar8 = (uint)(local_60 + local_6c) >> 1;
          }
          else {
            uVar8 = 0;
          }
          if (g_sound == 0) {
            uVar16 = 0;
          }
          else {
            uVar16 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0038 & 1);
          }
          g_currentExceptionFrame = local_154.previous;
          if (uVar16 != 0) {
            iVar10 = g_sndContext_0080765C->field_004C;
            iVar29 = g_sndContext_0080765C->field_0048;
            goto LAB_00530d9d;
          }
          goto LAB_00530da0;
        }
        local_20 = 0;
        local_14 = 0;
      }
      uVar16 = local_2c & 0xff;
      iVar10 = local_24 + uVar16 * 0xd + 0x29;
      /* ST_CALLSITE[00530EE7]: CALL 0x00403ee0; direct=00403EE0 OptPanelTy::CreateSlider */
      uVar8 = st::fn_00403EE0(this_00,0x6d,iVar10,0xf9,iVar10,uVar16 + 0xc09f,0x1f,uVar31,local_14);
      this_00->field_01B5[uVar16] = uVar8;
      /* ST_CALLSITE[00530EFC]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
      st::fn_00405DF3(this_00,(char)local_2c - 4,(byte)uVar31);
      bVar4 = (byte)local_8 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
    } while (bVar4 < 8);
    break;
  case CASE_7:
    if ((DAT_00807300 & 0xff) == 1) {
      local_2c = (uint)STPiece<1,3>(local_2c) << 8;
    }
    else if ((DAT_00807300 & 0xff) == 2) {
      local_2c = STReplaceLowByte((uint32_t)(local_2c), (uint8_t)(2));
    }
    else {
      local_2c = STReplaceLowByte((uint32_t)(local_2c), (uint8_t)(1));
    }
    /* ST_CALLSITE[00530F57]: CALL 0x00402680; direct=00402680 UPanelTy::CreateTab */
    uVar31 = st::fn_00402680((UPanelTy *)this_00,3,(byte)local_2c,0x1d,0x16,0xe9,0x11,0,0x12,
                                 0xc09f,0xc0af);
    this_00->field_01B5[0] = uVar31;
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(5));
    uVar8 = local_8;
    STPiece<0,1>(local_8) = 5;
    uVar31 = local_14;
    pSVar17 = g_sndContext_0080765C;
    bVar4 = (byte)local_8;
    local_8 = uVar8;
    do {
      local_20 = 1;
      local_24 = STReplaceLowByte((uint32_t)(local_24), (uint8_t)(4));
      if (bVar4 != 5) {
        local_24 = STReplaceLowByte((uint32_t)(local_24), (uint8_t)(bVar4));
      }
      local_38 = (bVar4 != 5) - 1 & 4;
      uVar8 = local_8 & 0xff;
      if (uVar8 == 5) {
        if ((char)DAT_00807300 == '\x02') {
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = st::machine_word_boundary_cast<uint>(pSVar17->field_0080 & 1);
          }
          if (uVar8 == 0) {
            uVar31 = 0;
            local_20 = 0;
            local_14 = 0;
            goto cf_common_join_0053138B;
          }
        }
        if ((char)DAT_00807300 == '\x04') {
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = st::machine_word_boundary_cast<uint>(pSVar17->field_0068 & 1);
          }
          if (uVar8 != 0) goto LAB_005311d8;
switchD_005311ec_caseD_1:
          uVar31 = 0;
          local_20 = 0;
          local_14 = 0;
          goto cf_common_join_0053138B;
        }
LAB_005311d8:
        switch(DAT_00807300 & 0xff) {
        case 1:
          goto switchD_005311ec_caseD_1;
        case 2:
          local_198.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_198;
          local_EAX_5906 = st::fn_0072D7F0(local_198.jumpBuffer,0);
          if (local_EAX_5906 == 0) {
            if (g_sound == 0) {
              uVar31 = 0;
            }
            else {
              uVar31 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0080 & 1);
            }
            if (uVar31 != 0) {
              st::fn_006B7E00((int)g_sndContext_0080765C,3,(undefined4 *)&local_4c,(undefined4 *)&local_50);
            }
            uVar8 = (uint)(local_50 + local_4c) >> 1;
          }
          else {
            uVar8 = 0;
          }
          if (g_sound == 0) {
            uVar31 = 0;
          }
          else {
            uVar31 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0080 & 1);
          }
          g_currentExceptionFrame = local_198.previous;
          if (uVar31 == 0) {
LAB_0053108d:
            uVar31 = 0;
          }
          else {
            uVar31 = (g_sndContext_0080765C->field_0094 - g_sndContext_0080765C->field_0090) + 1;
          }
          break;
        default:
          goto switchD_005311ec_caseD_3;
        case 4:
          local_1dc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_1dc;
          local_EAX_6096 = st::fn_0072D7F0(local_1dc.jumpBuffer,0);
          if (local_EAX_6096 == 0) {
            if (g_sound == 0) {
              uVar31 = 0;
            }
            else {
              uVar31 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0068 & 1);
            }
            if (uVar31 != 0) {
              st::fn_006B7E00((int)g_sndContext_0080765C,2,(undefined4 *)&local_64,(undefined4 *)&local_5c);
            }
            uVar8 = (uint)(local_64 + local_5c) >> 1;
          }
          else {
            uVar8 = 0;
          }
          if (g_sound == 0) {
            uVar31 = 0;
          }
          else {
            uVar31 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0068 & 1);
          }
          g_currentExceptionFrame = local_1dc.previous;
          if (uVar31 == 0) goto LAB_0053108d;
          uVar31 = (g_sndContext_0080765C->field_007C - g_sndContext_0080765C->field_0078) + 1;
          break;
        case 8:
          uVar31 = ((DAT_0080730a + 4000) * 0x1f) / 0xfa1;
          local_14 = uVar31;
          goto cf_common_join_0053138B;
        }
LAB_0053108f:
        uVar31 = (uVar8 * 0x1f) / uVar31;
        this_00 = local_28;
        local_14 = uVar31;
      }
      else {
        if (uVar8 == 6) {
          uVar31 = 0;
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = st::machine_word_boundary_cast<uint>(pSVar17->field_0050 & 1);
          }
          if (uVar8 == 0) {
            local_14 = 0;
            local_20 = 0;
            goto cf_common_join_0053138B;
          }
          local_220.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_220;
          local_EAX_5605 = st::fn_0072D7F0(local_220.jumpBuffer,0);
          if (local_EAX_5605 == 0) {
            if (g_sound == 0) {
              uVar31 = 0;
            }
            else {
              uVar31 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0050 & 1);
            }
            if (uVar31 != 0) {
              st::fn_006B7E00((int)g_sndContext_0080765C,1,(undefined4 *)&local_48,(undefined4 *)&local_68);
            }
            uVar8 = (uint)(local_68 + local_48) >> 1;
          }
          else {
            uVar8 = 0;
          }
          if (g_sound == 0) {
            uVar31 = 0;
          }
          else {
            uVar31 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0050 & 1);
          }
          g_currentExceptionFrame = local_220.previous;
          if (uVar31 != 0) {
            uVar31 = (g_sndContext_0080765C->field_0064 - g_sndContext_0080765C->field_0060) + 1;
            goto LAB_0053108f;
          }
          goto LAB_0053108d;
        }
        if (uVar8 == 7) {
          uVar31 = 0;
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = st::machine_word_boundary_cast<uint>(pSVar17->field_0038 & 1);
          }
          if (uVar8 == 0) {
            local_14 = 0;
            local_20 = 0;
            goto cf_common_join_0053138B;
          }
          local_2a8.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_2a8;
          local_EAX_5376 = st::fn_0072D7F0(local_2a8.jumpBuffer,0);
          if (local_EAX_5376 == 0) {
            if (g_sound == 0) {
              uVar31 = 0;
            }
            else {
              uVar31 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0038 & 1);
            }
            if (uVar31 != 0) {
              st::fn_006B7E00((int)g_sndContext_0080765C,0,(undefined4 *)&local_58,(undefined4 *)&local_54);
            }
            uVar8 = (uint)(local_58 + local_54) >> 1;
          }
          else {
            uVar8 = 0;
          }
          if (g_sound == 0) {
            uVar31 = 0;
          }
          else {
            uVar31 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0038 & 1);
          }
          g_currentExceptionFrame = local_2a8.previous;
          if (uVar31 == 0) goto LAB_0053108d;
          uVar31 = (g_sndContext_0080765C->field_004C - g_sndContext_0080765C->field_0048) + 1;
          goto LAB_0053108f;
        }
      }
cf_common_join_0053138B:
      uVar16 = local_24 & 0xff;
      iVar10 = local_38 + uVar16 * 0xd + 0x29;
      /* ST_CALLSITE[005313B9]: CALL 0x00403ee0; direct=00403EE0 OptPanelTy::CreateSlider */
      uVar8 = st::fn_00403EE0(this_00,0x6d,iVar10,0xf9,iVar10,uVar16 + 0xc09f,0x1f,uVar31,local_20);
      this_00->field_01B5[uVar16] = uVar8;
      /* ST_CALLSITE[005313CE]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
      st::fn_00405DF3(this_00,(char)local_24 - 4,(byte)uVar31);
      pSVar17 = g_sndContext_0080765C;
      bVar4 = (byte)local_8;
switchD_005311ec_caseD_3:
      bVar4 = bVar4 + 1;
      local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
    } while (bVar4 < 8);
    break;
  case CASE_8:
    /* ST_CALLSITE[00530B86]: CALL 0x00402680; direct=00402680 UPanelTy::CreateTab */
    uVar31 = st::fn_00402680((UPanelTy *)this_00,3,3 - DAT_0080733b,0x1d,0x20,0x72,0x11,0,0x12,
                                 0xc09f,0xc0af);
    this_00->field_01B5[0] = uVar31;
    /* ST_CALLSITE[00530BB8]: CALL 0x00402680; direct=00402680 UPanelTy::CreateTab */
    uVar31 = st::fn_00402680((UPanelTy *)this_00,3,2 - DAT_0080733a,0x99,0x20,0x72,0x11,0,0x12,
                                 0xc0a0,0xc0b0);
    this_00->field_01B5[1] = uVar31;
    /* ST_CALLSITE[00530BE4]: CALL 0x00402680; direct=00402680 UPanelTy::CreateTab */
    uVar31 = st::fn_00402680((UPanelTy *)this_00,2,DAT_00807349,0x5d,0x68,0x72,0x11,0,0x12,
                                 0xc0a2,0xc0b2);
    this_00->field_01B5[3] = uVar31;
    break;
  case CASE_9:
    local_18 = this_00->field_01B5;
    local_c = nullptr;
    iVar10 = 0x1b;
    local_1c = 6;
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(6));
    do {
      if (iVar10 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00530aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (*(code *)(&PTR_LAB_00531ce8)[(int)local_c])();
        return;
      }
      uVar27 = 0;
      uVar22 = 0;
      pcVar28 = nullptr;
      iVar21 = (int)local_c + 0xc09f;
      uVar6 = 0;
      uVar24 = 0;
      sVar23 = 0;
      iVar29 = (int)local_c + 0xc0af;
      pCVar7 = st::fn_0040577C(st::mutable_c_string("BUT_BUTOPT"),0);
      /* ST_CALLSITE[00530B35]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
      uVar31 = st::fn_0040398B((UPanelTy *)this_00,3,1,0x1d,iVar10,1,pCVar7,iVar21,iVar29,sVar23
                                   ,uVar24,uVar6,pcVar28,uVar22,uVar27);
      iVar10 = iVar10 + 0x12;
      *local_18 = uVar31;
      local_c = (undefined4 *)((int)local_c + 1);
      local_18 = local_18 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
    local_1c = 0;
    break;
  case CASE_B:
    uVar32 = 0;
    uVar30 = 0;
    pcVar28 = nullptr;
    uVar27 = 0;
    uVar24 = 0;
    sVar23 = 0;
    uVar22 = 0xc0b0;
    uVar6 = 0xc0a0;
    pCVar7 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
    /* ST_CALLSITE[00530725]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar31 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x7d,0x7d,1,pCVar7,uVar6,uVar22,sVar23,
                                 uVar24,uVar27,pcVar28,uVar30,uVar32);
    this_00->field_01B5[0] = uVar31;
    break;
  case CASE_C:
    iVar10 = this_00->field_003C;
    memset(local_11fc, 0, 0x878); /* compiler bulk-zero initialization */
    iVar29 = 0;
    local_11dc = iVar10 + 0x26;
    local_11fc[0] = 0;
    local_11fc[1] = 2;
    if (this_00->field_005C == 0) {
      local_11d8 = -this_00->field_0048;
    }
    else {
      local_11d8 = this_00->field_0044;
    }
    pcVar2 = this_00->field_017C;
    local_11d8 = local_11d8 + 0x1a;
    local_11fc[2] = 1;
    local_11fc[3] = this_00->field_02F9[2];
    local_11ec = 0xca;
    if (pcVar2->field_00A0 != 0) {
      st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar2);
    }
    local_11e8 = *(int *)&pcVar2->field_0x8a;
    local_11e0 = (undefined4)(0x6e / (longlong)local_11e8);
    local_11e4 = 1;
    local_11c0 = 2;
    local_11bc = 0x6332;
    local_114c = 4;
    local_1148 = 0;
    local_11c4 = this_00->field_0008;
    if (DAT_0080734c != '\0') {
      local_d80 = 1;
    }
    local_1144 = 2;
    local_1140[1] = 2;
    local_1140[0] = 0;
    local_1140[2] = st::machine_word_boundary_cast<int>(this_00->field_003C + 0xf2);
    if (this_00->field_005C == 0) {
      local_1140[3] = -this_00->field_0048;
    }
    else {
      local_1140[3] = this_00->field_0044;
    }
    local_1140[3] = st::machine_word_boundary_cast<int>(local_1140[3] + 100);
    local_1130 = 0x11;
    local_112c = 0x24;
    local_1030 = 500;
    local_102c = 0x32;
    local_10dc = 2;
    local_10d8 = 0x8165;
    local_10e0 = local_11c4;
    local_101c = st::fn_0070AA70(g_cMf32_00806790,st::mutable_c_string("BUT_MSLDN"),0,1);
    local_1018 = st::fn_0070A6F0(g_cMf32_00806790,0x12,st::mutable_c_string("BUT_MSLDN"),1);
    iVar10 = this_00->field_005C;
    local_1038 = 1;
    local_1034 = 1;
    local_fc4 = 2;
    local_fc0[2] = st::machine_word_boundary_cast<int>(this_00->field_003C + 0xf2);
    piVar12 = local_1140;
    piVar19 = local_fc0;
    memmove(piVar19, piVar12, 0x17c); /* compiler REP MOVS byte copy */
    if (iVar10 == 0) {
      local_fc0[3] = -this_00->field_0048;
    }
    else {
      local_fc0[3] = this_00->field_0044;
    }
    local_fc0[3] = st::machine_word_boundary_cast<int>(local_fc0[3] + 0x1b);
    local_fb0 = 0x11;
    local_fac = 0x24;
    local_f58 = 0x8164;
    local_e9c = st::fn_0070AA70(g_cMf32_00806790,st::mutable_c_string("BUT_MSLUP"),0,1);
    local_e98 = st::fn_0070A6F0(g_cMf32_00806790,0x12,st::mutable_c_string("BUT_MSLUP"),1);
    local_990 = 1;
    local_994 = 1;
    /* ST_CALLSITE[00531B6D]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,8,this_00->field_01B5,nullptr,st::machine_word_boundary_cast<undefined4>(local_11fc),0);
    uVar31 = this_00->field_01B5[0];
    this_00->field_0028 = 0x20;
    this_00->field_002C = 1;
    this_00->field_002E = 0;
    st::fn_006E6080(this_00,2,uVar31,(undefined4 *)&this_00->field_0x18);
    break;
  case CASE_D:
    local_3c = 8;
    memset(local_cc, 0, 0x58); /* compiler bulk-zero initialization */
    iVar10 = 0;
    memset(local_1c48, 0, 0x1c0); /* compiler bulk-zero initialization */
    local_d = 0;
    local_18 = nullptr;
    local_1c = 0;
    puVar11 = local_1c48 + 1;
    do {
      if (local_18 == nullptr) {
        local_44 = 800;
        local_40 = 600;
      }
      else if (local_18 == (uint *)0x1) {
        local_44 = 0x400;
        local_40 = 0x300;
      }
      else if (local_18 == (uint *)0x2) {
        local_44 = 0x500;
        local_40 = 0x400;
      }
      local_c = (undefined4 *)((uint)local_c & 0xffffff00);
      puVar11[-1] = (uint)((int)local_18 + 1);
      *puVar11 = 2;
      local_24 = *(uint *)(DAT_0080877a + 4);
      if (0 < (int)local_24) {
        uVar31 = 0;
        do {
          iVar10 = DAT_0080877a + uVar31 * 0xc;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (((*(int *)(iVar10 + 8) == local_44) &&
              (*(int *)(DAT_0080877a + (uVar31 * 3 + 3) * 4) == local_40)) &&
             (*(int *)(iVar10 + 0x10) == 8)) {
            *puVar11 = (uint)(DAT_00807348 == local_d);
            break;
          }
          bVar4 = (char)local_c + 1;
          local_c = (undefined4 *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar4));
          uVar31 = (uint)bVar4;
        } while ((int)uVar31 < (int)local_24);
      }
      puVar11[2] = st::machine_word_boundary_cast<uint>(this_00->field_003C + 0x1d);
      if (this_00->field_005C == 0) {
        iVar10 = -this_00->field_0048;
      }
      else {
        iVar10 = this_00->field_0044;
      }
      puVar11[3] = local_1c + 0x13 + iVar10;
      puVar11[4] = 0x72;
      puVar11[5] = 0x11;
      local_d = local_d + 1;
      local_18 = (uint *)((int)local_18 + 1);
      local_1c = local_1c + 0x12;
      puVar11 = puVar11 + 0x1c;
    } while (local_d < 3);
    local_80 = (_DAT_00807348 & 0xff) + 1;
    local_bc = this_00->field_0008;
    local_84 = local_1c48;
    local_cc[0] = 1;
    local_cc[1] = 0;
    local_b8 = 2;
    local_b4 = 0xc09f;
    local_98 = 2;
    local_94 = 0xc0af;
    local_7c = 1;
    local_78 = 1;
    local_9c = local_bc;
    /* ST_CALLSITE[0053095A]: CALL dword ptr [EDX + 0x8] */
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,5,this_00->field_01B5,nullptr,st::machine_word_boundary_cast<undefined4>(local_cc),0);
    uVar32 = 0;
    uVar30 = 0;
    pcVar28 = nullptr;
    uVar27 = 0;
    uVar24 = 0;
    sVar23 = 0;
    uVar22 = 0xc0b0;
    uVar6 = 0xc0a0;
    pCVar7 = st::fn_0040577C(st::mutable_c_string("BUT_BUTOPT"),0);
    /* ST_CALLSITE[0053098D]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar31 = st::fn_0040398B((UPanelTy *)this_00,1,0,0x1d,0x49,1,pCVar7,uVar6,uVar22,sVar23,
                                 uVar24,uVar27,pcVar28,uVar30,uVar32);
    uVar32 = 0;
    uVar30 = 0;
    pcVar28 = nullptr;
    uVar27 = 0;
    uVar24 = 0;
    sVar23 = 0;
    uVar22 = 0xc0b1;
    uVar6 = 0xc0a1;
    this_00->field_01B5[1] = uVar31;
    pCVar7 = st::fn_0040577C(st::mutable_c_string("BUT_BUTOPT"),0);
    /* ST_CALLSITE[005309D5]: CALL 0x0040398b; direct=0040398B UPanelTy::CreateBut */
    uVar31 = st::fn_0040398B((UPanelTy *)this_00,3,(-(uint)(DAT_00807342 != 0) & 2) + 1,0x1d,
                                 0x5b,1,pCVar7,uVar6,uVar22,sVar23,uVar24,uVar27,pcVar28,uVar30,
                                 uVar32);
    this_00->field_01B5[2] = uVar31;
    /* ST_CALLSITE[00530A1D]: CALL 0x00403ee0; direct=00403EE0 OptPanelTy::CreateSlider */
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar31 = st::fn_00403EE0(this_00,0x94,0x70,*(int *)(this_00->field_018C + 2) + 0xaf,0x70,0xc0a2,3,
                          DAT_00807346 / 5 - 1,1);
    puVar9 = this_00->field_018C;
    this_00->field_01B5[3] = uVar31;
    /* ST_CALLSITE[00530A59]: CALL 0x00403ee0; direct=00403EE0 OptPanelTy::CreateSlider */
    uVar31 = st::fn_00403EE0(this_00,0x94,0x82,*(int *)(puVar9 + 2) + 0xaf,0x82,0xc0a3,3,
                          (uint)DAT_00807347,1);
    this_00->field_01B5[4] = uVar31;
    this_00->field_0305 = DAT_00807348;
  }
  if ((this_00->field_01A4 == CASE_1) || (this_00->field_01A9 == '\0')) {
    this_00->field_002C = 0;
    this_00->field_002E = 0;
  }
  else {
    this_00->field_002C = 1;
    this_00->field_002E = 0;
  }
  uVar31 = this_00->field_01AD[1];
  this_00->field_0028 = 0x20;
  st::fn_006E6080(this_00,2,uVar31,(undefined4 *)&this_00->field_0x18);
  this_00->field_0028 = 5;
  local_8 = local_8 & 0xffffff00;
  do {
    if (this_00->field_01AD[local_8 & 0xff] != 0) {
      st::fn_006E6080(this_00,2,this_00->field_01AD[local_8 & 0xff],(undefined4 *)&this_00->field_0x18);
    }
    bVar4 = (byte)local_8 + 1;
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
  } while (bVar4 < 2);
  g_currentExceptionFrame = local_110.previous;
  return;
}

// 005325B0 OptPanelTy::PrepAsses
#line 4 "decomp/ST.exe/functions/005325B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PrepAsses
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall PrepAsses(OptPanelTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005328C8 RET | 005328F7 RET | 0053293B RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_005325B0(OptPanelTy *this)

{
  alignas(4) byte st_stack_frame[308];

  byte *puVar1;
  char cVar2;
  byte bVar3;
  ushort uVar5;
  int local_EAX_67;
  int iVar5;
  cMf32 *pcVar6;
  OptPanelTy_field_02FDDArray *pOVar7;
  char *pcVar7_mg0;
  char *pcVar7_mg1;
  int iVar9;
  int iVar8;
  uint uVar10;
  OptPanelTy *pOVar12;
  char *pcVar13;
  uint *puVar14;
  char *pcVar15;
  byte *pbVar16;
  bool bVar17;
  char local_12c [108];
  undefined4 local_c0;
  InternalExceptionFrame local_94;
  InternalExceptionFrame local_50;
  uint local_c;
  OptPanelTy *local_8;

  this->field_0028 = 0x20;
  this->field_002C = 0;
  this->field_002E = 0;
  local_8 = this;
  st::fn_006E6080(this,2,this->field_01B5[0],(undefined4 *)&this->field_0x18);
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_EAX_67 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pOVar12 = local_8;
  if (local_EAX_67 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x3ad,0,local_EAX_67,
                               st::mutable_c_string("%s"),"OptPanelTy::PrepAsses");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_67,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x3ad);
    return;
  }
  if (local_8->field_02FD != nullptr) {
    st::fn_006AE110((DArrayTy *)local_8->field_02FD);
  }
  pOVar12->field_02FD = nullptr;
  local_94.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_94;
  iVar5 = st::fn_0072D7F0(local_94.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_94.previous;
    pOVar7 = (OptPanelTy_field_02FDDArray *)
             st::fn_006AE290(nullptr,1,0x98,1);
    local_8->field_02FD = pOVar7;
    pOVar12 = local_8;
    goto LAB_00532758;
  }
  switch(DAT_008087a0 & 0xff) {
  case 1:
  case 4:
  case 6:
  case 7:
  case 0xd:
  case 0xe:
  case 0x13:
    /* ST_CALLSITE[00532688]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%s%s"),&CHAR_00h_00807680,st_global_0079ACF0,
              PTR_s_STRATEGS_0079acfc);
    break;
  case 2:
  case 3:
  case 5:
  case 8:
  case 0xf:
    /* ST_CALLSITE[005326A7]: CALL dword ptr [0x0085bde8] */
    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%s"),&CHAR_00h_00807680,&CHAR_00h_0080ef1e);
  }
  pcVar6 = (cMf32 *)st::fn_006F0EC0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  pOVar12 = local_8;
  switch(DAT_008087a0 & 0xff) {
  case 1:
  case 4:
  case 6:
  case 7:
  case 0xd:
  case 0xe:
  case 0x13:
    pOVar7 = (OptPanelTy_field_02FDDArray *)
             /* ST_CALLSITE[005326FD]: CALL 0x00404255; direct=00404255 CreateAssistantList */
             st::fn_00404255((int)pcVar6,(uint)DAT_0080874e,DAT_0080995c);
    break;
  case 2:
  case 3:
  case 5:
  case 8:
  case 0xf:
    pOVar7 = (OptPanelTy_field_02FDDArray *)
             /* ST_CALLSITE[00532710]: CALL 0x0040466a; direct=0040466A CreateStrategList */
             st::fn_0040466A((int)pcVar6,(uint)DAT_0080874d,0xffffffff);
    break;
  default:
    goto switchD_005326e6_caseD_9;
  }
  pOVar12->field_02FD = pOVar7;
switchD_005326e6_caseD_9:
  st::fn_006F1170(pcVar6);
  g_currentExceptionFrame = local_94.previous;
LAB_00532758:
  if (((st_stack_frame + 304) != (undefined1 *)0x12c) &&
     (pcVar7_mg0 = st::fn_006B0140(0x2711,g_hINSTANCE_00807618), pcVar7_mg0 != nullptr)) {
    pcVar7_mg1 = st::fn_006B0140(0x2711,g_hINSTANCE_00807618);
    uVar10 = 0xffffffff;
    do {
      pcVar13 = pcVar7_mg1;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar13 = pcVar7_mg1 + 1;
      cVar2 = *pcVar7_mg1;
      pcVar7_mg1 = pcVar13;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar13 = pcVar13 + -uVar10;
    pcVar15 = local_12c;
    memmove(pcVar15, pcVar13, uVar10); /* compiler REP MOVS byte copy */
  }
  local_c0 = 1;
  st::fn_006B11D0(&pOVar12->field_02FD->flags,0,(undefined4 *)local_12c);
  pOVar12->field_0028 = 0x28;
  puVar1 = &pOVar12->field_0x18;
  uVar5 = *(undefined2 *)((int)&pOVar12->field_02FD->count + 2);
  pOVar12->field_002C = *(undefined2 *)&pOVar12->field_02FD->count;
  pOVar12->field_002E = uVar5;
  st::fn_006E6080(pOVar12,2,pOVar12->field_01B5[0],(undefined4 *)puVar1);
  pOVar12->field_0028 = 0x20;
  pOVar12->field_002C = 1;
  pOVar12->field_002E = 0;
  st::fn_006E6080(pOVar12,2,pOVar12->field_01B5[0],(undefined4 *)puVar1);
  iVar9 = st::fn_0040522C((uint)DAT_0080874d,(char *)&DAT_0080f33a);
  if (iVar9 == 0) {
    pOVar12->field_0028 = 0x22;
    pOVar12->field_002C = 0;
    pOVar12->field_002E = 0;
    st::fn_006E6080(pOVar12,2,pOVar12->field_01B5[0],(undefined4 *)puVar1);
  }
  else {
    pOVar7 = pOVar12->field_02FD;
    local_c = 0;
    if (pOVar7->count != 0) {
      if (pOVar7->count == 0) {
        puVar14 = nullptr;
        goto LAB_00532855;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        puVar14 = (uint *)((int)&pOVar7->data->field_0000 + pOVar7->elementSize * local_c);
LAB_00532855:
        pbVar16 = (byte *)&DAT_0080f33a;
        do {
          bVar3 = (byte)*puVar14;
          bVar17 = bVar3 < *pbVar16;
          if (bVar3 != *pbVar16) {
LAB_0053287e:
            iVar9 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
            goto LAB_00532883;
          }
          if (bVar3 == 0) break;
          bVar3 = STField<byte>(puVar14,1);
          bVar17 = bVar3 < pbVar16[1];
          if (bVar3 != pbVar16[1]) goto LAB_0053287e;
          puVar14 = (uint *)((int)puVar14 + 2);
          pbVar16 = pbVar16 + 2;
        } while (bVar3 != 0);
        iVar9 = 0;
LAB_00532883:
        if (iVar9 == 0) {
          pOVar12->field_002C = (undefined2)local_c;
          pOVar12->field_002E = STPiece<2,2>(local_c);
          pOVar12->field_0028 = 0x22;
          st::fn_006E6080(pOVar12,2,pOVar12->field_01B5[0],(undefined4 *)&pOVar12->field_0x18);
        }
        pOVar7 = pOVar12->field_02FD;
        local_c = local_c + 1;
        if (pOVar7->count <= local_c) {
          g_currentExceptionFrame = local_50.previous;
          return;
        }
      } while( true );
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 00532A80 OptPanelTy::PrepMissObj
#line 4 "decomp/ST.exe/functions/00532A80/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PrepMissObj

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STSwitchEnumApplier] Switch target field_01A4 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01A4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14
    */

void __thiscall st::fn_00532A80(OptPanelTy *this)

{
  byte *puVar1;
  uint uVar2;
  OptPanelTy *this_00;
  int iVar4;
  DArrayTy *pDVar5;
  char *pcVar6;
  uint *puVar7;
  int iVar8;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x3d1,0,iVar4,
                               st::mutable_c_string("%s"),"OptPanelTy::PrepMissObj");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x3d1);
    return;
  }
  if ((DArrayTy *)local_8->field_02F9 != nullptr) {
    st::fn_006B5570((DArrayTy *)local_8->field_02F9);
  }
  pDVar5 = st::fn_006B54F0(nullptr,10,10);
  this_00->field_02F9 = &pDVar5->flags;
  iVar4 = 0;
  if (0 < (int)g_dArray_0080C4CB->elementSize) {
    if ((int)g_dArray_0080C4CB->elementSize < 1) {
      pcVar6 = nullptr;
      goto LAB_00532af5;
    }
    do {
      pcVar6 = *(char **)(g_dArray_0080C4CB->growCapacity + iVar4 * 4);
LAB_00532af5:
      st::fn_004015A0((DArrayTy *)this_00->field_02F9,pcVar6,st::mutable_c_string("@- %s"));
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)g_dArray_0080C4CB->elementSize);
  }
  puVar7 = st::fn_007126E0
                     (this_00->field_017C,(DArrayTy *)this_00->field_02F9,st::mutable_c_string(" ,.;:!?/\\()[]{}"),
                      (uint *)&DAT_007c21ec,200,0,0xffffffff,nullptr,1);
  if ((DArrayTy *)this_00->field_02F9 != nullptr) {
    st::fn_006B5570((DArrayTy *)this_00->field_02F9);
  }
  this_00->field_02F9 = puVar7;
  if (puVar7 == nullptr) {
    pDVar5 = st::fn_006B54F0(nullptr,10,10);
    this_00->field_02F9 = &pDVar5->flags;
  }
  puVar7 = this_00->field_02F9;
  if (puVar7[2] != 0) {
    st::fn_007129D0(this_00->field_017C,puVar7,puVar7);
  }
  if ((this_00->field_01A4 == CASE_C) && (this_00->field_01B5[0] != 0)) {
    puVar1 = &this_00->field_0x18;
    this_00->field_0028 = 0x28;
    this_00->field_002C = 1;
    this_00->field_002E = (short)this_00->field_02F9[2];
    st::fn_006E6080(this_00,2,this_00->field_01B5[0],(undefined4 *)puVar1);
    this_00->field_002E = 0;
    this_00->field_002C = 0;
    this_00->field_0028 = 0x22;
    st::fn_006E6080(this_00,2,this_00->field_01B5[0],(undefined4 *)puVar1);
    uVar2 = this_00->field_01B5[0];
    this_00->field_0028 = 0x20;
    this_00->field_002C = 1;
    this_00->field_002E = 0;
    st::fn_006E6080(this_00,2,uVar2,(undefined4 *)puVar1);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 00532D50 OptPanelTy::PrepFiles
#line 4 "decomp/ST.exe/functions/00532D50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PrepFiles

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return

   [STSwitchEnumApplier] Switch target field_01A4 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01A4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14
    */

void __thiscall st::fn_00532D50(OptPanelTy *this,uint param_1)

{
  uint index;
  char cVar1;
  byte bVar2;
  InternalExceptionFrame *pIVar4;
  int local_EAX_75;
  DArrayTy *pDVar5;
  HANDLE hFindFile;
  int iVar5;
  cMf32 *this_00;
  ushort *puVar6;
  char *pcVar7_mg17;
  BOOL BVar7;
  LONG LVar8;
  int iVar12;
  uint uVar9;
  uint uVar10;
  int iVar11;
  OptPanelTy *this_01;
  char *pcVar12;
  byte *pbVar13;
  char *pcVar14;
  char *pcVar15;
  byte *pbVar16;
  bool bVar17;
  char local_3fc [260];
  byte local_2f8 [260];
  _WIN32_FIND_DATAA local_1f4;
  InternalExceptionFrame local_b4;
  InternalExceptionFrame local_70;
  FILETIME local_2c;
  FILETIME local_24;
  uint *local_1c;
  HANDLE local_18;
  uint local_14;
  OptPanelTy *local_10;
  int local_c;
  uint local_8;
  char *pcVar7_mg2;

  local_14 = 0x88000016;
  if (DAT_00808783 == '\x01') {
    local_14 = 0x88000116;
  }
  else if (DAT_00808783 == '\x02') {
    local_14 = 0x88000216;
  }
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  local_10 = this;
  local_EAX_75 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  this_01 = local_10;
  if (local_EAX_75 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar12 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x44f,0,local_EAX_75,
                                st::mutable_c_string("%s"),"OptPanelTy::PrepFiles");
    if (iVar12 == 0) {
      st::fn_006A5E40(local_EAX_75,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x44f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_10->field_01E9 != nullptr) {
    st::fn_006B5570(local_10->field_01E9);
    this_01->field_01E9 = nullptr;
  }
  if (this_01->field_01ED != nullptr) {
    st::fn_006AE110(this_01->field_01ED);
    this_01->field_01ED = nullptr;
  }
  pDVar5 = st::fn_006B54F0(nullptr,0x32,10);
  this_01->field_01E9 = pDVar5;
  pDVar5 = st::fn_006AE290(nullptr,0x32,8,10);
  uVar9 = this_01->field_01B5[0];
  this_01->field_01ED = pDVar5;
  this_01->field_0028 = 0x20;
  this_01->field_002C = 0;
  this_01->field_002E = 0;
  st::fn_006E6080(this_01,2,uVar9,(undefined4 *)&this_01->field_0x18);
  uVar9 = 0xffffffff;
  pcVar12 = &CHAR_00h_00807680;
  do {
    pcVar15 = pcVar12;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar15 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar15;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar12 = pcVar15 + -uVar9;
  pcVar15 = &this_01->field_006C;
  memmove(pcVar15, pcVar12, uVar9); /* compiler REP MOVS byte copy */
  uVar10 = 0;
  uVar9 = 0xffffffff;
  pcVar7_mg2 = st_global_0079ACEC;
  do {
    pcVar12 = pcVar7_mg2;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar12 = pcVar7_mg2 + 1;
    cVar1 = *pcVar7_mg2;
    pcVar7_mg2 = pcVar12;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar11 = -1;
  pcVar15 = &this_01->field_006C;
  do {
    pcVar14 = pcVar15;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar14 = pcVar15 + 1;
    cVar1 = *pcVar15;
    pcVar15 = pcVar14;
  } while (cVar1 != '\0');
  pcVar12 = pcVar12 + -uVar9;
  pcVar15 = pcVar14 + -1;
  memmove(pcVar15, pcVar12, uVar9); /* compiler REP MOVS byte copy */
  uVar10 = 0;
  uVar9 = 0xffffffff;
  pcVar12 = &CHAR_00h_00807ddd;
  do {
    pcVar15 = pcVar12;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar15 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar15;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar11 = -1;
  pcVar12 = &this_01->field_006C;
  do {
    pcVar14 = pcVar12;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar14 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar14;
  } while (cVar1 != '\0');
  pcVar12 = pcVar15 + -uVar9;
  pcVar15 = pcVar14 + -1;
  memmove(pcVar15, pcVar12, uVar9); /* compiler REP MOVS byte copy */
  uVar10 = 0;
  pcVar12 = &this_01->field_006C;
  st::fn_006B8280(pcVar12,pcVar12);
  uVar9 = 0xffffffff;
  do {
    pcVar15 = pcVar12;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar15 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar15;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  pcVar12 = pcVar15 + -uVar9;
  pcVar15 = local_3fc;
  memmove(pcVar15, pcVar12, uVar9); /* compiler REP MOVS byte copy */
  uVar10 = 0;
  uVar9 = 0xffffffff;
  pcVar12 = st::pointer_boundary_cast<char *>(PTR_DAT_0079ad00);
  do {
    pcVar15 = pcVar12;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar15 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar15;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar11 = -1;
  pcVar12 = &this_01->field_006C;
  do {
    pcVar14 = pcVar12;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar14 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar14;
  } while (cVar1 != '\0');
  pcVar12 = pcVar15 + -uVar9;
  pcVar15 = pcVar14 + -1;
  memmove(pcVar15, pcVar12, uVar9); /* compiler REP MOVS byte copy */
  uVar10 = 0;
  uVar9 = 0xffffffff;
  pcVar12 = &st_global_007C72D8;
  do {
    pcVar15 = pcVar12;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar15 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar15;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar11 = -1;
  pcVar12 = &this_01->field_006C;
  do {
    pcVar14 = pcVar12;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar14 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar14;
  } while (cVar1 != '\0');
  pcVar12 = pcVar15 + -uVar9;
  pcVar15 = pcVar14 + -1;
  memmove(pcVar15, pcVar12, uVar9); /* compiler REP MOVS byte copy */
  uVar10 = 0;
  uVar9 = 0xffffffff;
  pcVar12 = st::pointer_boundary_cast<char *>(st_global_0079ACF4);
  do {
    pcVar15 = pcVar12;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pcVar15 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar15;
  } while (cVar1 != '\0');
  uVar9 = ~uVar9;
  iVar11 = -1;
  pcVar12 = &this_01->field_006C;
  do {
    pcVar14 = pcVar12;
    if (iVar11 == 0) break;
    iVar11 = iVar11 + -1;
    pcVar14 = pcVar12 + 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar14;
  } while (cVar1 != '\0');
  pcVar12 = pcVar15 + -uVar9;
  pcVar15 = pcVar14 + -1;
  memmove(pcVar15, pcVar12, uVar9); /* compiler REP MOVS byte copy */
  uVar10 = 0;
  /* ST_CALLSITE[00532F50]: CALL dword ptr [0x0085bcec] */
  hFindFile = st::external_00000070(st::pointer_boundary_cast<LPCSTR>(&this_01->field_006C),st::pointer_boundary_cast<LPWIN32_FIND_DATAA>(&local_1f4));
  local_18 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      pIVar4 = g_currentExceptionFrame;
      if (((byte)local_1f4.dwFileAttributes & 0x10) == 0) {
        local_1c = &local_8;
        local_8 = 0;
        st::fn_0072E730
                  ((byte *)local_1f4.cFileName,nullptr,nullptr,local_2f8,nullptr);
        local_b4.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_b4;
        iVar5 = st::fn_0072D7F0(local_b4.jumpBuffer,0);
        this_01 = local_10;
        hFindFile = local_18;
        pIVar4 = local_b4.previous;
        if (iVar5 == 0) {
          uVar9 = 0xffffffff;
          pcVar12 = local_3fc;
          do {
            pcVar15 = pcVar12;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar15 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar15;
          } while (cVar1 != '\0');
          uVar9 = ~uVar9;
          pcVar12 = pcVar15 + -uVar9;
          pcVar15 = &local_10->field_006C;
          memmove(pcVar15, pcVar12, uVar9); /* compiler REP MOVS byte copy */
          uVar10 = 0;
          uVar9 = 0xffffffff;
          pbVar13 = local_2f8;
          do {
            pbVar16 = pbVar13;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pbVar16 = pbVar13 + 1;
            bVar2 = *pbVar13;
            pbVar13 = pbVar16;
          } while (bVar2 != 0);
          uVar9 = ~uVar9;
          iVar11 = -1;
          pcVar12 = &local_10->field_006C;
          do {
            pcVar15 = pcVar12;
            if (iVar11 == 0) break;
            iVar11 = iVar11 + -1;
            pcVar15 = pcVar12 + 1;
            cVar1 = *pcVar12;
            pcVar12 = pcVar15;
          } while (cVar1 != '\0');
          pbVar13 = pbVar16 + -uVar9;
          pbVar16 = (byte *)(pcVar15 + -1);
          memmove(pbVar16, pbVar13, uVar9); /* compiler REP MOVS byte copy */
          this_00 = (cMf32 *)st::fn_006F0EC0
                                       (0x345,(byte *)&local_10->field_006C,0,0,0);
          puVar6 = st::fn_006F1CE0(this_00,0x80,PTR_s_SAVE_DESC_0079ad04,(int *)&local_1c,0);
          if (puVar6 == nullptr) {
            local_8 = 0;
          }
          else {
            bVar17 = false;
            if (this_01->field_01A4 == CASE_3) {
              if (((char)(local_8 >> 0x18) == -0x78) && ((char)local_8 == '\x16')) {
                bVar17 = true;
              }
              else {
                bVar17 = false;
              }
            }
            else if (this_01->field_01A4 == CASE_4) {
              bVar17 = local_14 == local_8;
            }
            if (bVar17) {
              st::fn_006AE1C0(this_01->field_01ED,&local_1f4.ftLastWriteTime);
              uVar9 = 0xffffffff;
              pcVar12 = st::pointer_boundary_cast<char *>(PTR_DAT_0079ad00);
              do {
                if (uVar9 == 0) break;
                uVar9 = uVar9 - 1;
                cVar1 = *pcVar12;
                pcVar12 = pcVar12 + 1;
              } while (cVar1 != '\0');
              pcVar7_mg17 = st::fn_006B8240((char *)local_2f8,~uVar9 - 1);
              st::fn_006B5AA0(this_01->field_01E9,pcVar7_mg17);
            }
          }
          st::fn_006F1170(this_00);
          hFindFile = local_18;
          pIVar4 = local_b4.previous;
        }
      }
      g_currentExceptionFrame = pIVar4;
      /* ST_CALLSITE[00533114]: CALL dword ptr [0x0085bcf0] */
      BVar7 = st::external_00000071(hFindFile,st::pointer_boundary_cast<LPWIN32_FIND_DATAA>(&local_1f4));
    } while (BVar7 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    /* ST_CALLSITE[00533128]: CALL dword ptr [0x0085bcf4] */
    st::external_00000072(hFindFile);
  }
  uVar9 = this_01->field_01E9->elementSize;
  local_8 = uVar9;
  if (uVar9 == 0) {
    if (this_01->field_01A4 != CASE_3) goto LAB_0053325d;
    st::fn_006B6020(this_01->field_01F1,0,&CHAR_00h_008016a0);
    uVar10 = this_01->field_01B5[1];
    this_01->field_0028 = 0x33;
    *(DArrayTy **)&this_01->field_002C = this_01->field_01F1;
  }
  else {
    if (1 < uVar9) {
      do {
        local_c = 0;
        uVar10 = 0;
        if (uVar9 != 1) {
          do {
            st::fn_006ACC70(this_01->field_01ED,uVar10,&local_2c);
            index = uVar10 + 1;
            st::fn_006ACC70(this_01->field_01ED,index,&local_24);
            /* ST_CALLSITE[00533180]: CALL dword ptr [0x0085bcd8] */
            LVar8 = st::external_0000006B(&local_2c,&local_24);
            if (LVar8 < 0) {
              st::fn_006B0CD0((AnonShape_00413AF0_B6B4EE9A *)this_01->field_01ED,uVar10,index);
              st::fn_006B8200((AnonShape_006B8200_800652FF *)this_01->field_01E9,uVar10,index);
              local_c = 1;
            }
            uVar10 = index;
            uVar9 = local_8;
          } while (index < local_8 - 1);
        }
      } while (local_c != 0);
    }
    this_01->field_0028 = 0x28;
    this_01->field_002C = (short)uVar9;
    this_01->field_002E = (short)(uVar9 >> 0x10);
    st::fn_006E6080(this_01,2,this_01->field_01B5[0],(undefined4 *)&this_01->field_0x18);
    this_01->field_0028 = 0x20;
    this_01->field_002C = 1;
    this_01->field_002E = 0;
    st::fn_006E6080(this_01,2,this_01->field_01B5[0],(undefined4 *)&this_01->field_0x18);
    this_01->field_0028 = 0x22;
    if (uVar9 <= param_1) {
      param_1 = uVar9 - 1;
    }
    uVar10 = this_01->field_01B5[0];
    this_01->field_002C = (short)param_1;
    this_01->field_002E = (short)(param_1 >> 0x10);
  }
  st::fn_006E6080(this_01,2,uVar10,(undefined4 *)&this_01->field_0x18);
LAB_0053325d:
  uVar10 = this_01->field_01B5[3];
  this_01->field_0028 = 0x20;
  this_01->field_002C = (short)(uint)(uVar9 != 0);
  this_01->field_002E = (short)((uint)(uVar9 != 0) >> 0x10);
  st::fn_006E6080(this_01,2,uVar10,(undefined4 *)&this_01->field_0x18);
  if (this_01->field_01A4 == CASE_4) {
    st::fn_006E6080(this_01,2,this_01->field_01B5[2],(undefined4 *)&this_01->field_0x18);
  }
  g_currentExceptionFrame = local_70.previous;
  return;
}

// 00533470 OptPanelTy::CheckFiles
#line 4 "decomp/ST.exe/functions/00533470/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::CheckFiles */

undefined4 __thiscall st::fn_00533470(OptPanelTy *this,byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar4;
  byte *pbVar4;
  int iVar6;
  int iVar5;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  bool bVar10;
  InternalExceptionFrame local_54;
  OptPanelTy *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  iVar4 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x459,0,iVar4,
                               st::mutable_c_string("%s"),"OptPanelTy::CheckFiles");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x459);
    return 0;
  }
  uVar9 = 0;
  uVar2 = local_c->field_01E9->elementSize;
  if (uVar2 == 0) {
    g_currentExceptionFrame = local_54.previous;
    return local_8;
  }
  do {
    pbVar8 = param_1;
    if ((int)uVar9 < (int)uVar2) {
      pbVar4 = *(byte **)(local_c->field_01E9->growCapacity + uVar9 * 4);
    }
    else {
      pbVar4 = nullptr;
    }
    do {
      bVar1 = *pbVar4;
      bVar10 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_005334fb:
        iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00533500;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar10 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_005334fb;
      pbVar4 = pbVar4 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_00533500:
    if (iVar6 == 0) {
      g_currentExceptionFrame = local_54.previous;
      return 1;
    }
    uVar9 = uVar9 + 1;
    if (uVar2 <= uVar9) {
      g_currentExceptionFrame = local_54.previous;
      return local_8;
    }
  } while( true );
}

// 00533880 OptPanelTy::Question
#line 4 "decomp/ST.exe/functions/00533880/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::Question

   [STSwitchEnumApplier] Switch target field_01A4 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01A4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14
    */

void __thiscall st::fn_00533880(OptPanelTy *this,char param_1)

{
  OptPanelTy *this_00;
  int iVar2;
  int iVar4;
  int iVar3;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  if (this->field_0172 != CASE_2) {
    return;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    if (param_1 == '\x04') {
      if (DAT_008067a0 == '\0') {
        iVar4 = 0x3e84;
      }
      else {
        iVar4 = 0x3e96 - (uint)(g_playSystem_00802A38->field_00E4 -
                                g_playSystem_00802A38->field_0034 < 6000);
      }
      local_8->field_01A5 = iVar4;
    }
    else if (param_1 == '\x05') {
      local_8->field_01A5 = 0x3e85;
    }
    else {
      if (param_1 != '\a') {
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      local_8->field_01A5 = 0x4272;
    }
    local_8->field_01AB = param_1;
    local_8->field_01A0 = (uint)(param_1 != '\a');
    local_8->field_01A9 = 0;
    local_8->field_01A4 = CASE_5;
    /* ST_CALLSITE[00533954]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
    st::fn_00402851(local_8);
    /* ST_CALLSITE[00533960]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
    st::fn_00405A42(this_00,-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x490,0,iVar2,st::mutable_c_string("%s"),
                             "OptPanelTy::Question");
  if (iVar3 == 0) {
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x490);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 00533A10 OptPanelTy::Notification
#line 4 "decomp/ST.exe/functions/00533A10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::Notification

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0054F1D0 -> 00533A10 @ 0054FCA4; literal 0 at 0054FCA0 | 00550380 -> 00533A10 @
   005503A7; FUN_00550380 parameter param_1 | 0056F250 -> 00533A10 @ 0056F7B8; literal 0 at 0056F7B4

   [STSwitchEnumApplier] Switch target field_0172 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_0172State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STSwitchEnumApplier] Switch target field_01A4 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01A4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14
    */

void __thiscall st::fn_00533A10(OptPanelTy *this,char param_1,byte param_2)

{
  OptPanelTy_field_0172State OVar1;
  OptPanelTy *this_00;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x4a6,0,errorCode,
                               st::mutable_c_string("%s"),"OptPanelTy::Notification");
    if (iVar3 == 0) {
      st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x4a6);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == '\n') {
    local_8->field_01A5 = 0x4271;
    local_8->field_01AC = param_2;
  }
  else if (param_1 == '\v') {
    local_8->field_01A5 = 0x4270;
  }
  else {
    if (param_1 != '\f') {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    local_8->field_01A5 = 0x4276;
  }
  local_8->field_01AB = param_1;
  local_8->field_01A0 = 0;
  local_8->field_01A9 = 0;
  local_8->field_01A4 = CASE_B;
  /* ST_CALLSITE[00533AAC]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
  st::fn_00402851(local_8);
  OVar1 = this_00->field_0172;
  if ((OVar1 == CASE_2) || (OVar1 == CASE_4)) {
    /* ST_CALLSITE[00533ACB]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
    st::fn_00405A42(this_00,-1);
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 00533D10 OptPanelTy::GetMessage
#line 4 "decomp/ST.exe/functions/00533D10/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00533D10; family_names=OptPanelTy::GetMessage; ret4=78;
   direct_offsets={10:6,14:39,18:17,1c:6}

   [STSwitchEnumApplier] Switch target field_01A4 uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01A4State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14

   [STSwitchEnumApplier] Switch target field_01AB uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01ABState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_A=10

   [STSwitchEnumApplier] Switch target field_01AB uses
   /SubmarineTitans/Recovered/Enums/OptPanelTy_field_01ABState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_A=10;CASE_B=11 */

int __thiscall st::fn_00533D10(OptPanelTy *this,STMessage *message)

{
  byte *puVar1;
  char cVar2;
  OptPanelTy_field_01A4State OVar4;
  ushort uVar5;
  STMessageId SVar6;
  OptPanelTy_field_02FDDArray *pOVar7;
  ushort uVar8;
  InternalExceptionFrame *pIVar9;
  byte uVar10;
  int local_EAX_48;
  DWORD DVar11;
  uint uVar12;
  byte *puVar12;
  uint *puVar13;
  OptPanelTy_field_02FDElement *element_02fd;
  OptPanelTy_field_02FDElement *element_02fd_2;
  LPSTR pCVar14;
  int local_EAX_4707;
  int local_EAX_4896;
  int local_EAX_6893;
  cMf32 *pcVar15;
  byte *pbVar16;
  int local_EAX_8594;
  int local_EAX_8848;
  int local_EAX_9241;
  int iVar10;
  int iVar29;
  uint uVar17;
  OptPanelTy *this_00;
  int iVar18;
  uint uVar19;
  ushort *puVar20;
  byte *puVar21;
  char *pcVar22;
  char *pcVar23;
  bool bVar24;
  uint uVar25;
  char *pcVar26;
  uint uVar27;
  byte bVar28;
  int iVar30;
  code *pcVar31;
  ccFntTy *pcVar32;
  int iVar33;
  UINT UVar34;
  code *pcVar35;
  ulong uVar36;
  InternalExceptionFrame local_268;
  InternalExceptionFrame local_224;
  InternalExceptionFrame local_1e0;
  InternalExceptionFrame local_19c;
  InternalExceptionFrame local_158;
  InternalExceptionFrame local_114;
  InternalExceptionFrame local_d0;
  InternalExceptionFrame local_8c;
  uint local_48;
  uint local_44;
  uint local_3c [4];
  int local_2c;
  int local_28;
  uint local_24;
  ushort *local_20;
  char *local_1c;
  dword local_18;
  uint *local_14;
  OptPanelTy *local_10;
  cMf32 *local_c;
  uint local_8;
  byte OVar3;
  byte temp_5fc7a8e9f1;
  byte temp_5fabcf5a4c;
  char *pcVar26_mg1D;
  char *pcVar26_mgC;
  char *pcVar26_mg30;

  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_10 = this;
  local_EAX_48 = st::fn_0072D7F0(local_8c.jumpBuffer,0);
  this_00 = local_10;
  if (local_EAX_48 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar29 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x7f4,0,local_EAX_48,
                                st::mutable_c_string("%s"),"OptPanelTy::GetMessage");
    if (iVar29 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_48,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x7f4);
    return 0xffff;
  }
  if (message->id == MESS_ID_CREATE) {
    /* ST_CALLSITE[00533D62]: CALL 0x00403a3a; direct=00403A3A OptPanelTy::PreInitOptPanel */
    st::fn_00403A3A(local_10);
  }
  /* ST_CALLSITE[00533D6A]: CALL 0x004017f8; direct=004017F8 PanelTy::GetMessage */
  st::fn_004017F8((PanelTy *)this_00,message);
  switch(message->id) {
  case MESS_OPTPANELTY_C001:
  case MESS_OPTPANELTY_C003:
  case MESS_SHARED_C09F:
  case MESS_BEHPANELTY_C0A0:
  case MESS_FSGSTY_C0A1:
  case MESS_SHARED_C0A2:
  case MESS_SHARED_C0A3:
  case MESS_BLDLABPANELTY_C0A4:
  case MESS_FRMPANELTY_C0A5:
  case MESS_BLDLABPANELTY_C0A4|MESS_ID_CREATE:
  case MESS_BLDLABPANELTY_C0A4|MESS_SHARED_0003:
  case MESS_BEHPANELTY_C0A0|MESS_SHARED_0008:
  case MESS_BEHPANELTY_C0A0|MESS_CURSORCLASSTY_0009:
  case MESS_BEHPANELTY_C0A0|MESS_SYSTEMCLASSTY_000A:
  case 0xc0ab:
  case 0xc0ac:
  case MESS_BEHPANELTY_C0A0|MESS_SHARED_0008|MESS_SHARED_0005:
  case MESS_OPTPANELTY_C0AE:
    if (((message->arg2).u32 != 0) &&
       ((uVar19 = *(uint *)((message->arg2).u32 + 4), uVar19 == 2 || ((3 < uVar19 && (uVar19 < 6))))
       )) {
      st::fn_00405E2F(0xae);
    }
  }
  SVar6 = message->id;
  if (SVar6 < 0xc007) {
    if (SVar6 == MESS_OPTPANELTY_C006) {
      pcVar35 = st::function_address_boundary_cast<code *>(st::fn_00529FE0);
      pCVar14 = st::fn_0040577C(st::mutable_c_string("BUT_MINUS"),0);
      bVar28 = 1;
    }
    else {
      if (SVar6 < MESS_OPTPANELTY_8165) {
        if (SVar6 != MESS_OPTPANELTY_8164) {
          if (MESS_SHARED_8160 < SVar6) {
            if (SVar6 == MESS_SIDTY_8161) {
              puVar20 = this_00->field_01E5;
              uVar19 = *(uint *)(puVar20 + 10);
              if (uVar19 == 0) {
                uVar19 = ((uint)puVar20[7] * *(int *)(puVar20 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                         *(int *)(puVar20 + 4);
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
              puVar12 = (byte *)st::fn_006B4FA0((int *)puVar20);
              uVar10 = (undefined1)local_8;
              for (uVar17 = uVar19 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *puVar12 = CONCAT22(CONCAT11(uVar10,uVar10),CONCAT11(uVar10,uVar10));
                puVar12 = (byte *)(puVar12 + 1);
              }
              for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                *(undefined1 *)puVar12 = uVar10;
                puVar12 = (byte *)((int)puVar12 + 1);
              }
              st::fn_00710A90(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
              if (this_00->field_01A4 == CASE_E) {
                pOVar7 = this_00->field_02FD;
                uVar19 = (uint)(message->arg0).words.low;
                if (uVar19 < pOVar7->count) {
                  element_02fd = DArrayAt<OptPanelTy_field_02FDElement>(pOVar7, uVar19);
                }
                else {
                  element_02fd = nullptr;
                }
                uVar19 = (uint)((message->arg0).words.high == 0);
              }
              else {
                uVar19 = (uint)(message->arg0).words.low;
                if ((int)uVar19 < (int)this_00->field_01E9->elementSize) {
                  puVar13 = *(uint **)(this_00->field_01E9->growCapacity + uVar19 * 4);
                  uVar19 = (uint)((message->arg0).words.high == 0);
                }
                else {
                  puVar13 = nullptr;
                  uVar19 = (uint)((message->arg0).words.high == 0);
                }
              }
              st::fn_007119C0(this_00->field_017C,(char *)puVar13,2,-1,uVar19);
              st::fn_006B55F0
                        ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,
                         (message->arg1).words.low + 0x26,(message->arg1).words.high + 0x31,
                         (byte *)this_00->field_01E5,0,0,0,200,*(int *)(this_00->field_01E5 + 4));
              st::fn_006B3640
                        ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,
                         this_00->field_003C,this_00->field_0044);
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            if (SVar6 != MESS_OPTPANELTY_8162) {
              if (SVar6 != MESS_SIDTY_8163) {
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              OVar4 = this_00->field_01A4;
              if (OVar4 == CASE_3) {
                if ((message->arg0).i32 < (int)this_00->field_01E9->elementSize) {
                  pcVar26 = *(char **)(this_00->field_01E9->growCapacity + (message->arg0).i32 * 4);
                }
                else {
                  pcVar26 = nullptr;
                }
                st::fn_006B6020(this_00->field_01F1,0,pcVar26);
                uVar19 = this_00->field_01B5[1];
                this_00->field_0028 = 0x33;
                *(DArrayTy **)&this_00->field_002C = this_00->field_01F1;
                st::fn_006E6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x18);
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              if (OVar4 == CASE_4) {
                puVar20 = this_00->field_01E5;
                uVar19 = *(uint *)(puVar20 + 10);
                if (uVar19 == 0) {
                  uVar19 = ((uint)puVar20[7] * *(int *)(puVar20 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                           *(int *)(puVar20 + 4);
                }
                local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
                puVar12 = (byte *)st::fn_006B4FA0((int *)puVar20);
                uVar10 = (undefined1)local_8;
                for (uVar17 = uVar19 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *puVar12 = CONCAT22(CONCAT11(uVar10,uVar10),CONCAT11(uVar10,uVar10));
                  puVar12 = (byte *)(puVar12 + 1);
                }
                for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                  *(undefined1 *)puVar12 = uVar10;
                  puVar12 = (byte *)((int)puVar12 + 1);
                }
                this_00->field_0028 = 0x26;
                st::fn_006E6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);
                st::fn_00710A90(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
                if (*(int *)&this_00->field_002C < (int)this_00->field_01E9->elementSize) {
                  pcVar26 = *(char **)(this_00->field_01E9->growCapacity +
                                      *(int *)&this_00->field_002C * 4);
                }
                else {
                  pcVar26 = nullptr;
                }
                st::fn_007119C0(this_00->field_017C,pcVar26,0,-1,0);
                puVar20 = this_00->field_01E5;
                st::fn_006B55F0
                          ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,
                           (byte *)puVar20,0,0,0,*(int *)(puVar20 + 2),*(int *)(puVar20 + 4));
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              if (OVar4 != CASE_E) {
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              puVar20 = this_00->field_01E5;
              uVar19 = *(uint *)(puVar20 + 10);
              if (uVar19 == 0) {
                uVar19 = ((uint)puVar20[7] * *(int *)(puVar20 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                         *(int *)(puVar20 + 4);
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
              puVar12 = (byte *)st::fn_006B4FA0((int *)puVar20);
              uVar10 = (undefined1)local_8;
              for (uVar17 = uVar19 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *puVar12 = CONCAT22(CONCAT11(uVar10,uVar10),CONCAT11(uVar10,uVar10));
                puVar12 = (byte *)(puVar12 + 1);
              }
              for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                *(undefined1 *)puVar12 = uVar10;
                puVar12 = (byte *)((int)puVar12 + 1);
              }
              st::fn_00710A90(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
              iVar18 = st::fn_0040522C((uint)DAT_0080874d,(char *)&DAT_0080f33a);
              uVar19 = 0;
              iVar33 = -1;
              iVar30 = 0;
              if (iVar18 == 0) {
                pcVar26 = st::fn_006B0140(0x2711,g_hINSTANCE_00807618);
              }
              else {
                pcVar26 = (char *)&DAT_0080f33a;
              }
              st::fn_007119C0(this_00->field_017C,pcVar26,iVar30,iVar33,uVar19);
              puVar20 = this_00->field_01E5;
              st::fn_006B55F0
                        ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,
                         (byte *)puVar20,0,0,0,*(int *)(puVar20 + 2),*(int *)(puVar20 + 4));
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            OVar3 = this_00->field_01A4;
            if (OVar3 < 3) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            if ((4 < OVar3) && (OVar3 != 0xe)) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            goto switchD_00535190_caseD_3;
          }
          if (SVar6 == MESS_SHARED_8160) {
            message->arg1 = *(STMessageArg *)(this_00->field_01E5 + 4);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (MESS_SHARED_0003 < SVar6) {
            if (SVar6 != MESS_SHARED_6332) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            local_18 = (message->arg2).u32;
            pcVar32 = this_00->field_017C;
            if (pcVar32->field_00A0 != 0) {
              st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar32);
            }
            local_8 = *(uint *)&pcVar32->field_0x8a;
            st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1a,0xca,0x6f,
                         (DAT_0080874e != '\x03') - 1U & 0x73);
            uVar17 = (uint)(message->arg0).words.high;
            uVar19 = uVar17;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((int)uVar17 < (int)(*(int *)(local_18 + 0x1e0) + uVar17)) {
              do {
                if ((int)uVar19 < (int)this_00->field_02F9[2]) {
                  local_1c = *(char **)(this_00->field_02F9[5] + uVar19 * 4);
                }
                else {
                  local_1c = nullptr;
                }
                if (local_1c != nullptr) {
                  st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x26,
                                   (uVar19 - uVar17) * local_8 + 0x1b,0xca,local_8);
                  st::fn_007119C0(this_00->field_017C,local_1c,0,-1,0);
                }
                uVar17 = (uint)(message->arg0).words.high;
                uVar19 = uVar19 + 1;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              } while ((int)uVar19 < (int)(*(int *)(local_18 + 0x1e0) + uVar17));
            }
            st::fn_006B3640
                      ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,
                       this_00->field_003C,this_00->field_0044);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (SVar6 == MESS_SHARED_0003) {
            /* ST_CALLSITE[00534071]: CALL 0x00403887; direct=00403887 OptPanelTy::DoneOptPanel */
            st::fn_00403887(this_00);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (SVar6 != MESS_ID_NONE) {
            if (SVar6 != MESS_ID_CREATE) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            /* ST_CALLSITE[00533E07]: CALL 0x004058e9; direct=004058E9 OptPanelTy::InitOptPanel */
            st::fn_004058E9(this_00);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          temp_5fc7a8e9f1 = this_00->field_01A4;
          if ((2 < temp_5fc7a8e9f1) &&
             ((((temp_5fc7a8e9f1 < 5 || (temp_5fc7a8e9f1 == 7)) &&
               (this_00->field_01DD != (HANDLE)0x0)) &&
              /* ST_CALLSITE[00533E41]: CALL dword ptr [0x0085bce0] */
              (DVar11 = st::external_0000006D(this_00->field_01DD,0), DVar11 == 0)))) {
            /* ST_CALLSITE[00533E52]: CALL dword ptr [0x0085bce4] */
            st::external_0000006E(this_00->field_01DD);
            if (this_00->field_01A4 != CASE_7) {
              STPiece<0,2>(uVar19) = this_00->field_01E1;
              STPiece<2,2>(uVar19) = this_00->field_01E3;
              /* ST_CALLSITE[00533E6A]: CALL 0x00403fbc; direct=00403FBC OptPanelTy::PrepFiles */
              st::fn_00403FBC(this_00,uVar19);
            }
            this_00->field_0028 = 5;
            puVar13 = this_00->field_01B5;
            iVar18 = 10;
            do {
              if (*puVar13 != 0) {
                st::fn_006E6080(this_00,2,*puVar13,(undefined4 *)&this_00->field_0x18);
              }
              puVar13 = puVar13 + 1;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
          }
          if (this_00->field_0172 == CASE_3) {
            iVar18 = this_00->field_0050;
            if (this_00->field_0044 < iVar18) {
              this_00->field_0044 = st::machine_word_boundary_cast<int>(this_00->field_0044 + 0x1e);
            }
            if (iVar18 <= this_00->field_0044) {
              this_00->field_0044 = iVar18;
              this_00->field_0172 = CASE_1;
              /* ST_CALLSITE[00533FF8]: CALL 0x00405a1a; direct=00405A1A OptPanelTy::ShiftControls */
              st::fn_00405A1A(this_00,1);
            }
            uVar19 = this_00->field_0044;
            uVar17 = this_00->field_003C;
            uVar25 = this_00->field_0060;
          }
          else {
            if (this_00->field_0172 != CASE_4) goto LAB_00534016;
            iVar18 = this_00->field_0050 - this_00->field_0048;
            if (iVar18 < this_00->field_0044) {
              this_00->field_0044 = st::machine_word_boundary_cast<int>(this_00->field_0044 + -0x1e);
            }
            if (this_00->field_0044 <= iVar18) {
              DAT_0080878c = 0;
              local_3c[1] = 0;
              local_3c[2] = 0;
              local_3c[0] = 1;
              if (this_00->field_019C != 0x6102) {
                st::fn_00403C33((undefined4 *)0x5,local_3c,1,0xffffffff);
              }
              this_00->field_0044 = this_00->field_0050 - this_00->field_0048;
              this_00->field_0172 = CASE_2;
              if (this_00->field_01A0 != 0) {
                this_00->field_01A4 = CASE_1;
                /* ST_CALLSITE[00533F35]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
                st::fn_00402851(this_00);
                this_00->field_01A0 = 0;
              }
              if (this_00->field_019C != 0) {
                if ((this_00->field_01A4 == CASE_5) && (this_00->field_01AB == CASE_2)) {
                  _DAT_0080f32e = 1;
                  if (DAT_00808783 == '\x01') {
                    DAT_008087a0 = STReplaceLowByte((uint32_t)(DAT_008087a0), (uint8_t)(9));
                  }
                  else if (DAT_00808783 == '\x02') {
                    DAT_008087a0 = STReplaceLowByte((uint32_t)(DAT_008087a0), (uint8_t)(10));
                  }
                }
                memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
                this_00->field_0024 = 1;
                this_00->field_0028 = this_00->field_019C;
                if (this_00->field_019C == 0x610a) {
                  this_00->field_002C = 6;
                  this_00->field_002E = 0;
                }
                st::fn_006E3B50(this_00->field_0010,(undefined4 *)&this_00->field_0x18);
                this_00->field_019C = 0;
              }
            }
            uVar19 = this_00->field_0044;
            uVar17 = this_00->field_003C;
            uVar25 = this_00->field_0060;
          }
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,uVar25,0xffffffff,uVar17,uVar19);
LAB_00534016:
          if ((uint)(this_00->field_0038 - this_00->field_0301) < 0x7d1) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          this_00->field_0301 = this_00->field_0038;
          uVar12 = st::fn_00401375(0x807658);
          if (uVar12 != 0) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          st::fn_00404552(&DAT_00807620,HWND_00856d78);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        pcVar26 = "BUT_SLUP";
      }
      else {
        if (MESS_OPTPANELTY_C002 < SVar6) {
          if (SVar6 == MESS_OPTPANELTY_C003) {
            if ((this_00->field_01A4 == CASE_5) && (this_00->field_01AB == CASE_7)) {
              DAT_00808788 = 0;
            }
            if (this_00->field_01A9 == 0) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            this_00->field_01A4 = this_00->field_01A9;
            this_00->field_01A9 = this_00->field_01AA;
            this_00->field_01AA = 0;
            /* ST_CALLSITE[0053478B]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
            st::fn_00402851(this_00);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (SVar6 != MESS_OPTPANELTY_C004) {
            if (SVar6 != MESS_SHARED_C005) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            pcVar35 = st::function_address_boundary_cast<code *>(st::fn_00529FE0);
            pCVar14 = st::fn_0040577C(st::mutable_c_string("BUT_PLUS"),0);
            bVar28 = 1;
            goto LAB_00534654;
          }
          UVar34 = 0x274f;
          goto cf_common_exit_00536DB5;
        }
        if (SVar6 == MESS_OPTPANELTY_C002) {
          UVar34 = 0x274e;
          goto cf_common_exit_00536DB5;
        }
        if (MESS_OPTPANELTY_A106 < SVar6) {
          if (SVar6 != MESS_OPTPANELTY_C001) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if ((this_00->field_01A4 == CASE_5) && (this_00->field_01AB == CASE_7)) {
            DAT_00808788 = 0;
          }
          this_00->field_01A0 = 1;
          message->id = MESS_CURSORCLASSTY_A101;
          /* ST_CALLSITE[005346F1]: CALL dword ptr [EAX] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)g_cursorClass_00802A30->field_0000)(message);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (0xa104 < SVar6) {
          if (this_00->field_01A4 != CASE_5) {
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          (message->arg2).u32 = 0;
          message->id = (SVar6 != MESS_OPTPANELTY_A105) + MESS_SHARED_C09F;
          /* ST_CALLSITE[0053469B]: CALL dword ptr [EDX] */
          this_00->GetMessage(message);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (SVar6 != MESS_OPTPANELTY_8165) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        pcVar26 = "BUT_SLDN";
      }
      pcVar35 = st::function_address_boundary_cast<code *>(st::fn_00529FE0);
      pCVar14 = st::fn_0040577C(pcVar26,0);
      bVar28 = 6;
    }
LAB_00534654:
    /* ST_CALLSITE[00534657]: CALL 0x00403495; direct=00403495 UPanelTy::PaintBut */
    st::fn_00403495((UPanelTy *)this_00,(AnonShape_0053D7A0_044B6141 *)message,bVar28,pCVar14,
                       pcVar35);
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  }
  switch(SVar6) {
  case MESS_SHARED_C09F:
    OVar4 = this_00->field_01A4;
    switch(OVar4) {
    case CASE_1:
      this_00->field_01A9 = OVar4;
      this_00->field_01A4 = CASE_3;
      /* ST_CALLSITE[00534807]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar10 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar10;
      this_00->field_01A4 = CASE_7;
      /* ST_CALLSITE[00534EAF]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_5:
      switch(this_00->field_01AB) {
      case CASE_1:
        goto switchD_00534835_caseD_1;
      case CASE_2:
        uVar19 = 0xffffffff;
        pcVar26 = &CHAR_00h_00807680;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = (char *)&DAT_0080ee1a;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26_mg30 = st_global_0079ACEC;
        do {
          pcVar26 = pcVar26_mg30;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar26 = pcVar26_mg30 + 1;
          cVar2 = *pcVar26_mg30;
          pcVar26_mg30 = pcVar26;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar23 = (char *)&DAT_0080ee1a;
        do {
          pcVar22 = pcVar23;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar23 + 1;
          cVar2 = *pcVar23;
          pcVar23 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar26 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26 = &CHAR_00h_00807ddd;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = (char *)&DAT_0080ee1a;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        st::fn_006B8280((char *)&DAT_0080ee1a,(char *)&DAT_0080ee1a);
        uVar19 = 0xffffffff;
        pcVar26 = st::pointer_boundary_cast<char *>(PTR_DAT_0079ad00);
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = (char *)&DAT_0080ee1a;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26 = (char *)&this_00->field_0x1f5;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = (char *)&DAT_0080ee1a;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        /* ST_CALLSITE[00534D00]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
        st::fn_00405A42(this_00,-1);
        this_00->field_019C = 0x6100;
        DAT_0080879c = 1;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case CASE_3:
        /* ST_CALLSITE[005348F5]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)&DAT_0080ee1a,st::mutable_c_string("%s%s"),&CHAR_00h_00807680,&CHAR_00h_0080ef1e);
        /* ST_CALLSITE[00534905]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
        st::fn_00405A42(this_00,-1);
        uVar19 = 0xffffffff;
        this_00->field_019C = 0x6100;
        pcVar26 = (char *)&DAT_0080ee1a;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = &CHAR_00h_0080ed16;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        /* ST_CALLSITE[00534940]: CALL 0x00404b4c; direct=00404B4C STAppC::sub_0056E9E0 */
        st::fn_00404B4C((STAppC *)&DAT_00807620,0);
        puVar12 = (byte *)(&DAT_0080a14f);
        puVar21 = (byte *)(&DAT_008087b6);
        memmove(puVar21, puVar12, 0x1999); /* compiler REP MOVS byte copy */
        iVar18 = 0;
        puVar12 = (byte *)&DAT_0080baec;
        puVar21 = (byte *)(&DAT_0080e43b);
        memmove(puVar21, puVar12, 0x400); /* compiler REP MOVS byte copy */
        iVar18 = 0;
        if (DAT_0080ed12 != 0) {
          st::fn_006AB060(&DAT_0080ed12);
        }
        DAT_0080ed12 = st::machine_word_boundary_cast<undefined4>(st::fn_006AAC70(0x8db));
        puVar12 = (byte *)(&DAT_0080bae8);
        puVar21 = (byte *)(DAT_0080ed12);
        memmove(puVar21, puVar12, 0x8db); /* compiler REP MOVS byte copy */
        DAT_0080879c = 0;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case CASE_4:
        /* ST_CALLSITE[00534887]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
        st::fn_00405A42(this_00,-1);
        this_00->field_019C = 0x6102;
        if (DAT_00808783 == '\x03') {
          DAT_0080c50a = 1;
        }
        if (DAT_008067a0 == '\0') {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (g_playSystem_00802A38 != nullptr) {
          uVar36 = (g_playSystem_00802A38->field_00E4 - g_playSystem_00802A38->field_0034 < 6000) +
                   2;
          goto LAB_00535271;
        }
        goto LAB_0053526f;
      case CASE_5:
        /* ST_CALLSITE[00534843]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
        st::fn_00405A42(this_00,-1);
        this_00->field_019C = 0x7102;
        if (DAT_00808783 == '\x03') {
          DAT_0080c50a = 1;
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        break;
      case CASE_6:
        uVar19 = 0xffffffff;
        pcVar26 = &CHAR_00h_00807680;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = &this_00->field_006C;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26_mgC = st_global_0079ACEC;
        do {
          pcVar26 = pcVar26_mgC;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar26 = pcVar26_mgC + 1;
          cVar2 = *pcVar26_mgC;
          pcVar26_mgC = pcVar26;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar23 = &this_00->field_006C;
        do {
          pcVar22 = pcVar23;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar23 + 1;
          cVar2 = *pcVar23;
          pcVar23 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar26 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26 = &CHAR_00h_00807ddd;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        st::fn_006B8280(&this_00->field_006C,&this_00->field_006C);
        uVar19 = 0xffffffff;
        pcVar26 = st::pointer_boundary_cast<char *>(PTR_DAT_0079ad00);
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26 = (char *)&this_00->field_0x1f5;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26 = st::pointer_boundary_cast<char *>(st_global_0079ACF4);
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        /* ST_CALLSITE[00534AC7]: CALL dword ptr [0x0085bce8] */
        st::external_0000006F(st::pointer_boundary_cast<LPCSTR>(&this_00->field_006C));
        uVar19 = 0xffffffff;
        pcVar26 = &CHAR_00h_00807680;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = &this_00->field_006C;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26_mg1D = st_global_0079ACEC;
        do {
          pcVar26 = pcVar26_mg1D;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar26 = pcVar26_mg1D + 1;
          cVar2 = *pcVar26_mg1D;
          pcVar26_mg1D = pcVar26;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar23 = &this_00->field_006C;
        do {
          pcVar22 = pcVar23;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar23 + 1;
          cVar2 = *pcVar23;
          pcVar23 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar26 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26 = &CHAR_00h_00807ddd;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        st::fn_006B8280(&this_00->field_006C,&this_00->field_006C);
        uVar19 = 0xffffffff;
        pcVar26 = st::pointer_boundary_cast<char *>(PTR_DAT_0079ad00);
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26 = (char *)&this_00->field_0x1f5;
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar19 = 0xffffffff;
        pcVar26 = st::pointer_boundary_cast<char *>(st_global_0079ACF8);
        do {
          pcVar23 = pcVar26;
          if (uVar19 == 0) break;
          uVar19 = uVar19 - 1;
          pcVar23 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar23;
        } while (cVar2 != '\0');
        uVar19 = ~uVar19;
        iVar18 = -1;
        pcVar26 = &this_00->field_006C;
        do {
          pcVar22 = pcVar26;
          if (iVar18 == 0) break;
          iVar18 = iVar18 + -1;
          pcVar22 = pcVar26 + 1;
          cVar2 = *pcVar26;
          pcVar26 = pcVar22;
        } while (cVar2 != '\0');
        pcVar26 = pcVar23 + -uVar19;
        pcVar23 = pcVar22 + -1;
        memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
        /* ST_CALLSITE[00534BD8]: CALL dword ptr [0x0085bce8] */
        st::external_0000006F(st::pointer_boundary_cast<LPCSTR>(&this_00->field_006C));
        OVar4 = this_00->field_01A9;
        this_00->field_01A9 = this_00->field_01AA;
        this_00->field_01A4 = OVar4;
        /* ST_CALLSITE[00534BF8]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
        st::fn_00402851(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case CASE_7:
        this_00->field_0028 = 0x44ff;
        /* ST_CALLSITE[00534D43]: CALL dword ptr [EAX + 0x20] */
        g_playSystem_00802A38->GetMessage((int)&this_00->field_0x18);
        this_00->field_0028 = 0xc001;
        this_00->field_0034 = 0;
        /* ST_CALLSITE[00534D55]: CALL dword ptr [EDX] */
        this_00->GetMessage((STMessage *)&this_00->field_0x18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_6:
      STPiece<1,1>(DAT_00807300) = STPiece<1,1>(DAT_00807300) ^ 1;
      st::fn_0040510F(&g_sound,CASE_1);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_7:
      st::fn_00403E86(0x807620);
      iVar18 = *(int *)(message->arg0).ptr;
      if (iVar18 == 1) {
        STPiece<0,1>(DAT_00807300) = '\x01';
      }
      else if (iVar18 == 2) {
        STPiece<0,1>(DAT_00807300) = '\b';
      }
      else if (iVar18 == 3) {
        STPiece<0,1>(DAT_00807300) = '\x02';
      }
      switch((char)DAT_00807300) {
      case '\x01':
        local_c = nullptr;
        break;
      case '\x02':
        local_d0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_d0;
        local_EAX_4707 = st::fn_0072D7F0(local_d0.jumpBuffer,0);
        if (local_EAX_4707 == 0) {
          if (g_sound == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0080 & 1);
          }
          if (uVar19 != 0) {
            st::fn_006B7E00((int)g_sndContext_0080765C,3,local_3c + 3,(undefined4 *)&local_28);
          }
          uVar19 = st::machine_word_boundary_cast<uint>(local_3c[3] + local_28 >> 1);
        }
        else {
          uVar19 = 0;
        }
        if (g_sound == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0080 & 1);
        }
        g_currentExceptionFrame = local_d0.previous;
        if (uVar17 == 0) {
LAB_005350ba:
          uVar17 = 0;
        }
        else {
          uVar17 = (g_sndContext_0080765C->field_0094 - g_sndContext_0080765C->field_0090) + 1;
        }
        goto LAB_005350bc;
      default:
        break;
      case '\x04':
        local_224.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_224;
        local_EAX_4896 = st::fn_0072D7F0(local_224.jumpBuffer,0);
        if (local_EAX_4896 == 0) {
          if (g_sound == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0068 & 1);
          }
          if (uVar19 != 0) {
            st::fn_006B7E00((int)g_sndContext_0080765C,2,&local_24,(undefined4 *)&local_2c);
          }
          uVar19 = local_24 + local_2c >> 1;
        }
        else {
          uVar19 = 0;
        }
        if (g_sound == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0068 & 1);
        }
        g_currentExceptionFrame = local_224.previous;
        if (uVar17 == 0) goto LAB_005350ba;
        uVar17 = (g_sndContext_0080765C->field_007C - g_sndContext_0080765C->field_0078) + 1;
LAB_005350bc:
        local_c = (cMf32 *)((uVar19 * 0x1f) / uVar17);
        this_00 = local_10;
        break;
      case '\b':
        local_c = (cMf32 *)(((DAT_0080730a + 4000) * 0x1f) / 0xfa1);
      }
      pcVar15 = local_c;
      /* ST_CALLSITE[00535104]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
      st::fn_00405DF3(this_00,0,(byte)local_c);
      uVar19 = this_00->field_01B5[4];
      this_00->field_0028 = 0x22;
      *(cMf32 **)&this_00->field_002C = pcVar15;
      st::fn_006E6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x18);
      this_00->field_0028 = 0x20;
      bVar24 = (char)DAT_00807300 != '\x01';
      uVar19 = this_00->field_01B5[4];
      this_00->field_002C = (short)(uint)bVar24;
      this_00->field_002E = (short)((uint)bVar24 >> 0x10);
      st::fn_006E6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x18);
      st::fn_00404552(&DAT_00807620,HWND_00856d78);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_8:
      DAT_0080733b = 4 - *(char *)(message->arg0).ptr;
      if (DAT_0080877e == '\0') {
        iVar18 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)("FrmPanelTy::GetMessage" + iVar18 + 0x14);
      }
      else {
        iVar18 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)("FrmPanelTy::GetMessage" + iVar18 + 8);
      }
      local_44 = (uint)DAT_0080733b;
      if (DAT_00808783 == '\x03') {
        local_48 = 4;
        st::fn_00403C33((undefined4 *)0x5,&local_48,1,0xffffffff);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (g_sT3DSMAPContext_00807598 != nullptr) {
        st::fn_006E8640
                  (g_sT3DSMAPContext_00807598,
                   *(char **)("FrmPanelTy::GetMessage" + iVar18 + 0x10),
                   *(char **)("FrmPanelTy::GetMessage" + iVar18 + 4));
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_9:
      DAT_0080731a = (uint)(DAT_0080731a == 0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      uVar19 = this_00->field_01B5[1];
      this_00->field_0305 = *(char *)(message->arg0).ptr + -1;
      this_00->field_0028 = 0x20;
      this_00->field_002C = 1;
      this_00->field_002E = 0;
      st::fn_006E6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x18);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    break;
  case MESS_BEHPANELTY_C0A0:
    OVar4 = this_00->field_01A4;
    switch(OVar4) {
    case CASE_1:
      this_00->field_01A9 = OVar4;
      this_00->field_01A4 = CASE_4;
      /* ST_CALLSITE[005351A6]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      this_00->field_01AA = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01A4 = CASE_6;
      /* ST_CALLSITE[00535360]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_3:
switchD_00535190_caseD_3:
      this_00->field_0028 = 0xc0a1;
      this_00->field_0034 = 0;
      /* ST_CALLSITE[00534487]: CALL dword ptr [EAX] */
      this_00->GetMessage((STMessage *)&this_00->field_0x18);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
    case CASE_B:
      if (this_00->field_01A9 != 0) {
        this_00->field_01A4 = this_00->field_01A9;
        this_00->field_01A9 = this_00->field_01AA;
        /* ST_CALLSITE[005351E0]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
        st::fn_00402851(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (OVar4 == CASE_5) {
        this_00->field_01A4 = CASE_1;
        /* ST_CALLSITE[00535209]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
        st::fn_00402851(this_00);
        /* ST_CALLSITE[00535215]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
        st::fn_00405A42(this_00,-1);
        if (this_00->field_01AB != CASE_7) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        DAT_00808788 = 0;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      /* ST_CALLSITE[0053524B]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
      st::fn_00405A42(this_00,-1);
      if (this_00->field_01AB < CASE_A) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (CASE_B < this_00->field_01AB) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_008067a0 == '\0') {
        this_00->field_019C = 0x6102;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_6:
      STPiece<1,1>(DAT_00807300) = STPiece<1,1>(DAT_00807300) ^ 2;
      st::fn_0040510F(&g_sound,CASE_2);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_8:
      DAT_0080733a = '\x03' - *(char *)(message->arg0).ptr;
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_9:
      DAT_00807322 = (uint)(DAT_00807322 == 0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      DAT_00807348 = this_00->field_0305;
      /* ST_CALLSITE[0053531F]: CALL 0x00405a42; direct=00405A42 OptPanelTy::SwitchOptPanel */
      st::fn_00405A42(this_00,-1);
      this_00->field_019C = 0x6107;
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
LAB_0053526f:
    uVar36 = 4;
LAB_00535271:
    /* ST_CALLSITE[00535276]: CALL dword ptr [0x0085c060] */
    st::external_00000106((CFsgsConnection *)&DAT_00802a90,uVar36);
    this_00->field_019C = 0x610a;
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  case MESS_FSGSTY_C0A1:
    OVar4 = this_00->field_01A4;
    switch(OVar4) {
    case CASE_1:
      this_00->field_01A5 = 0x3e83;
      this_00->field_01A9 = OVar4;
      this_00->field_01AB = CASE_3;
      this_00->field_01A4 = CASE_5;
      /* ST_CALLSITE[005353EF]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar10 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar10;
      this_00->field_01A4 = CASE_8;
      /* ST_CALLSITE[00535426]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_3:
      uVar19 = this_00->field_01B5[1];
      this_00->field_0028 = 0x32;
      st::fn_006E6080(this_00,2,uVar19,(undefined4 *)&this_00->field_0x18);
      if ((int)this_00->field_01F1->elementSize < 1) {
        pcVar26 = nullptr;
      }
      else {
        pcVar26 = *(char **)this_00->field_01F1->growCapacity;
      }
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar26;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar26 + 1;
        cVar2 = *pcVar26;
        pcVar26 = pcVar23;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      puVar1 = &this_00->field_0x1f5;
      pcVar26 = pcVar23 + -uVar19;
      pcVar23 = st::pointer_boundary_cast<char *>(puVar1);
      memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
      pcVar26 = &CHAR_00h_008016a0;
      pbVar16 = puVar1;
      do {
        bVar28 = *pbVar16;
        bVar24 = bVar28 < (byte)*pcVar26;
        if (bVar28 != *pcVar26) {
LAB_0053556a:
          iVar18 = (1 - (uint)bVar24) - (uint)(bVar24 != 0);
          goto LAB_0053556f;
        }
        if (bVar28 == 0) break;
        bVar28 = pbVar16[1];
        bVar24 = bVar28 < (byte)pcVar26[1];
        if (bVar28 != pcVar26[1]) goto LAB_0053556a;
        pbVar16 = pbVar16 + 2;
        pcVar26 = pcVar26 + 2;
      } while (bVar28 != 0);
      iVar18 = 0;
LAB_0053556f:
      if (iVar18 == 0) {
        this_00->field_01A5 = 0x3f4b;
        this_00->field_01AA = this_00->field_01A9;
        this_00->field_01A9 = this_00->field_01A4;
        this_00->field_01A4 = CASE_B;
        /* ST_CALLSITE[0053559E]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
        st::fn_00402851(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      /* ST_CALLSITE[005355BD]: CALL 0x00402874; direct=00402874 OptPanelTy::CheckFiles */
      iVar18 = st::fn_00402874(this_00,puVar1);
      if (iVar18 != 0) {
        this_00->field_01AA = this_00->field_01A9;
        this_00->field_01A5 = 0x3f49;
        this_00->field_01A9 = this_00->field_01A4;
        this_00->field_01A4 = CASE_5;
        this_00->field_01AB = CASE_1;
        /* ST_CALLSITE[005355F8]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
        st::fn_00402851(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
switchD_00534835_caseD_1:
      st::fn_004058FD();
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_4:
      this_00->field_0028 = 0x26;
      st::fn_006E6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);
      if (*(int *)&this_00->field_002C < (int)this_00->field_01E9->elementSize) {
        pcVar26 = *(char **)(this_00->field_01E9->growCapacity + *(int *)&this_00->field_002C * 4);
      }
      else {
        pcVar26 = nullptr;
      }
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar26;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar26 + 1;
        cVar2 = *pcVar26;
        pcVar26 = pcVar23;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      pcVar26 = pcVar23 + -uVar19;
      pcVar23 = (char *)&this_00->field_0x1f5;
      memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
      uVar8 = this_00->field_002E;
      uVar10 = this_00->field_01A9;
      this_00->field_01E1 = this_00->field_002C;
      this_00->field_01E3 = uVar8;
      this_00->field_01A5 = 0x3f48;
      this_00->field_01AA = uVar10;
      this_00->field_01A9 = this_00->field_01A4;
      this_00->field_01AB = CASE_2;
      this_00->field_01A4 = CASE_5;
      /* ST_CALLSITE[005356C5]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_6:
      STPiece<1,1>(DAT_00807300) = STPiece<1,1>(DAT_00807300) ^ 4;
      st::fn_0040510F(&g_sound,CASE_4);
      /* ST_CALLSITE[005354D1]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
      st::fn_00404BD8
                ((SoundClassTy *)&g_sound,SOUND_MODE_1,nullptr,0x4b7,nullptr,0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_9:
      DAT_0080731e = (uint)(DAT_0080731e == 0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      DAT_00807342 = (uint)(DAT_00807342 == 0);
      if (g_popUp_008016D8 != nullptr) {
        /* ST_CALLSITE[0053548B]: CALL 0x00401fe6; direct=00401FE6 PopUpTy::ChangeState */
        st::fn_00401FE6(g_popUp_008016D8);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_E:
      local_c = nullptr;
      local_14 = nullptr;
      local_20 = nullptr;
      local_8 = 1;
      local_1c = nullptr;
      this_00->field_0028 = 0x26;
      st::fn_006E6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);
      pOVar7 = this_00->field_02FD;
      if (*(uint *)&this_00->field_002C < pOVar7->count) {
        element_02fd_2 = DArrayAt<OptPanelTy_field_02FDElement>(pOVar7, *(uint *)&this_00->field_002C);
      }
      else {
        element_02fd_2 = nullptr;
      }
      if (element_02fd_2->field_006C == 0) {
        switch(DAT_008087a0 & 0xff) {
        case 1:
        case 4:
        case 6:
        case 7:
        case 0xd:
        case 0xe:
        case 0x13:
          /* ST_CALLSITE[005357B6]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%s%s"),&CHAR_00h_00807680,st_global_0079ACF0
                    ,PTR_s_STRATEGS_0079acfc);
          break;
        case 2:
        case 3:
        case 5:
        case 8:
        case 0xf:
          /* ST_CALLSITE[005357D5]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s%s"),&CHAR_00h_00807680,&CHAR_00h_0080ef1e);
        }
        local_19c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_19c;
        local_EAX_6893 = st::fn_0072D7F0(local_19c.jumpBuffer,0);
        this_00 = local_10;
        pcVar15 = local_c;
        if (local_EAX_6893 == 0) {
          pcVar15 = (cMf32 *)st::fn_006F0EC0
                                       (0x345,(byte *)&DAT_0080f33a,0,0,0);
          pOVar7 = this_00->field_02FD;
          if (*(uint *)&this_00->field_002C < pOVar7->count) {
            element_02fd_2 = DArrayAt<OptPanelTy_field_02FDElement>(pOVar7, *(uint *)&this_00->field_002C);
          }
          else {
            element_02fd_2 = nullptr;
          }
          local_c = pcVar15;
          /* ST_CALLSITE[00535852]: CALL 0x004012ad; direct=004012AD LoadStrategData */
          local_20 = st::fn_004012AD((int)pcVar15,(char *)(element_02fd_2 + 0x13),(int *)&local_18);
          uVar19 = local_8;
          if (local_20 != nullptr) {
            local_14 = static_cast<uint *>(st::fn_006AAC10(local_18 + local_8 * 2));
            *(undefined1 *)local_14 = 1;
            pbVar16 = (byte *)((int)local_14 + uVar19);
            *pbVar16 = DAT_0080874d;
            puVar20 = local_20;
            pbVar16 = pbVar16 + uVar19;
            for (uVar17 = local_18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pbVar16 = *(undefined4 *)puVar20;
              puVar20 = puVar20 + 2;
              pbVar16 = pbVar16 + 4;
            }
            for (uVar19 = local_18 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
              *pbVar16 = (byte)*puVar20;
              puVar20 = (ushort *)((int)puVar20 + 1);
              pbVar16 = pbVar16 + 1;
            }
            st::fn_00403C33((undefined4 *)0x32,local_14,1,local_18 + local_8 * 2);
            local_1c = (char *)0x1;
            pcVar15 = local_c;
          }
        }
        g_currentExceptionFrame = local_19c.previous;
        if (pcVar15 != nullptr) {
          st::fn_006F1170(pcVar15);
        }
        if (local_20 != nullptr) {
          st::fn_006AB060(&local_20);
        }
        if (local_14 != nullptr) {
          st::fn_006AB060(&local_14);
        }
      }
      else {
        local_14 = static_cast<uint *>(st::fn_006AAC10(2));
        if (local_14 != nullptr) {
          *(undefined1 *)local_14 = 0;
          STField<byte>(local_14,1) = DAT_0080874d;
          st::fn_00403C33((undefined4 *)0x32,local_14,1,2);
          st::fn_006AB060(&local_14);
          local_1c = (char *)0x1;
        }
      }
      if (local_1c != nullptr) {
        this_00->field_0028 = 0xc001;
        this_00->field_0034 = 0;
        /* ST_CALLSITE[0053591F]: CALL dword ptr [EAX] */
        this_00->GetMessage((STMessage *)&this_00->field_0x18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case MESS_SHARED_C0A2:
    OVar4 = this_00->field_01A4;
    switch(OVar4) {
    case CASE_1:
      if (DAT_008067a0 == '\0') {
        iVar18 = 0x3e84;
      }
      else {
        iVar18 = 0x3e96 - (uint)(g_playSystem_00802A38->field_00E4 -
                                 g_playSystem_00802A38->field_0034 < 6000);
      }
      this_00->field_01A9 = OVar4;
      this_00->field_01A5 = iVar18;
      this_00->field_01AB = CASE_4;
      this_00->field_01A4 = CASE_5;
      /* ST_CALLSITE[005359A2]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar10 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar10;
      this_00->field_01A4 = CASE_9;
      /* ST_CALLSITE[005359D9]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_3:
    case CASE_4:
      this_00->field_0028 = 0x26;
      st::fn_006E6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);
      if (*(int *)&this_00->field_002C < (int)this_00->field_01E9->elementSize) {
        pcVar26 = *(char **)(this_00->field_01E9->growCapacity + *(int *)&this_00->field_002C * 4);
      }
      else {
        pcVar26 = nullptr;
      }
      uVar19 = 0xffffffff;
      do {
        pcVar23 = pcVar26;
        if (uVar19 == 0) break;
        uVar19 = uVar19 - 1;
        pcVar23 = pcVar26 + 1;
        cVar2 = *pcVar26;
        pcVar26 = pcVar23;
      } while (cVar2 != '\0');
      uVar19 = ~uVar19;
      pcVar26 = pcVar23 + -uVar19;
      pcVar23 = (char *)&this_00->field_0x1f5;
      memmove(pcVar23, pcVar26, uVar19); /* compiler REP MOVS byte copy */
      uVar8 = this_00->field_002E;
      uVar10 = this_00->field_01A9;
      this_00->field_01E1 = this_00->field_002C;
      this_00->field_01E3 = uVar8;
      this_00->field_01A5 = 0x3f4a;
      this_00->field_01AA = uVar10;
      this_00->field_01A9 = this_00->field_01A4;
      this_00->field_01AB = CASE_6;
      this_00->field_01A4 = CASE_5;
      /* ST_CALLSITE[00535BBB]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_6:
      STPiece<1,1>(DAT_00807300) = STPiece<1,1>(DAT_00807300) ^ 8;
      st::fn_0040510F(&g_sound,CASE_8);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_8:
      g_currentExceptionFrame = local_8c.previous;
      DAT_00807349 = *(char *)(message->arg0).ptr + -1;
      return 0;
    case CASE_9:
      DAT_00807326 = DAT_00807326 == '\0';
      st::fn_00401E74((uint)(byte)DAT_00807326);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      DAT_00807346 = (*(char *)&message->arg0 + '\x01') * '\x05';
      /* ST_CALLSITE[00535A4E]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x6f,'\x01',
             (byte *)this_00->field_018C);
      /* ST_CALLSITE[00535A65]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&this_00->field_006C),st::mutable_c_string("%d"),(uint)(byte)DAT_00807346);
      st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0xaa,0x6f,
                       *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
      st::fn_00711B70(this_00->field_017C,&this_00->field_006C,-2,-1,0,-1,-1);
      if (g_popUp_008016D8 != nullptr) {
        /* ST_CALLSITE[00535AB6]: CALL 0x00401334; direct=00401334 PopUpTy::ChangeNumStr */
        st::fn_00401334(g_popUp_008016D8);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case MESS_SHARED_C0A3:
    OVar4 = this_00->field_01A4;
    switch(OVar4) {
    case CASE_1:
      this_00->field_01A5 = 0x3e85;
      this_00->field_01A9 = OVar4;
      this_00->field_01AB = CASE_5;
      this_00->field_01A4 = CASE_5;
      /* ST_CALLSITE[00535C20]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar10 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar10;
      this_00->field_01A4 = CASE_D;
      /* ST_CALLSITE[00535C57]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_6:
      DAT_0080730e = ((message->arg0).u32 * 4000) / 0x1e - 4000;
      st::fn_00405E9D(&g_sound,DAT_0080730e);
      /* ST_CALLSITE[00535D96]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
      st::fn_00405DF3(this_00,0,*(byte *)&message->arg0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_7:
      if ((char)DAT_00807300 == '\x02') {
        if (g_sound == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0080 & 1);
        }
        if (uVar19 != 0) {
          if (g_sound == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0080 & 1);
          }
          if (uVar19 == 0) {
            iVar18 = 0;
          }
          else {
            iVar18 = (g_sndContext_0080765C->field_0094 - g_sndContext_0080765C->field_0090) + 1;
          }
          local_8 = ((iVar18 + -1) * (message->arg0).u32) / 0x1e;
          STPiece<2,2>(DAT_00807300) = (undefined2)local_8;
          st_image_00807304 = (undefined2)(local_8 >> 0x10);
          local_158.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_158;
          local_EAX_8848 = st::fn_0072D7F0(local_158.jumpBuffer,0);
          pIVar9 = local_158.previous;
          if (local_EAX_8848 == 0) {
            if (g_sound == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0080 & 1);
            }
            if (uVar19 != 0) {
              st::fn_006B7F00((int)g_sndContext_0080765C,3,local_8,local_8);
            }
            g_currentExceptionFrame = local_158.previous;
            pIVar9 = g_currentExceptionFrame;
          }
LAB_00535ef1:
          g_currentExceptionFrame = pIVar9;
          /* ST_CALLSITE[00535EFD]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
          st::fn_00405DF3(local_10,0,*(byte *)&message->arg0);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      else if ((char)DAT_00807300 == '\x04') {
        if (g_sound == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0068 & 1);
        }
        if (uVar19 != 0) {
          if (g_sound == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0068 & 1);
          }
          if (uVar19 == 0) {
            iVar18 = 0;
          }
          else {
            iVar18 = (g_sndContext_0080765C->field_007C - g_sndContext_0080765C->field_0078) + 1;
          }
          _DAT_00807306 = ((iVar18 + -1) * (message->arg0).u32) / 0x1e;
          local_114.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_114;
          local_8 = _DAT_00807306;
          local_EAX_8594 = st::fn_0072D7F0(local_114.jumpBuffer,0);
          pIVar9 = local_114.previous;
          if (local_EAX_8594 == 0) {
            if (g_sound == 0) {
              uVar19 = 0;
            }
            else {
              uVar19 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0068 & 1);
            }
            if (uVar19 != 0) {
              st::fn_006B7F00((int)g_sndContext_0080765C,2,local_8,local_8);
            }
            g_currentExceptionFrame = local_114.previous;
            pIVar9 = g_currentExceptionFrame;
          }
          goto LAB_00535ef1;
        }
      }
      else if ((char)DAT_00807300 == '\b') {
        DAT_0080730a = ((message->arg0).u32 * 4000) / 0x1e - 4000;
        st::fn_0040171C(&g_sound,DAT_0080730a);
        /* ST_CALLSITE[00535E0B]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
        st::fn_00405DF3(this_00,0,*(byte *)&message->arg0);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_9:
      DAT_00807328 = (uint)(DAT_00807328 == 0);
      if (DAT_00807328 != 0) {
        st::fn_006DDB70(g_sT3DSMAPContext_00807598);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      st::fn_006DDBB0(g_sT3DSMAPContext_00807598);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      DAT_00807347 = *(byte *)&message->arg0;
      /* ST_CALLSITE[00535C93]: CALL 0x00403229; direct=00403229 DibPut */
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x81,'\x01',
             (byte *)this_00->field_018C);
      /* ST_CALLSITE[00535CAB]: CALL dword ptr [0x0085bde8] */
      st::external_00000080(st::pointer_boundary_cast<LPSTR>(&this_00->field_006C),st::mutable_c_string("%d"),DAT_00807347 + 1);
      st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0xaa,0x81,
                       *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
      st::fn_00711B70(this_00->field_017C,&this_00->field_006C,-2,-1,0,-1,-1);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    break;
  case MESS_BLDLABPANELTY_C0A4:
    if (this_00->field_01A4 == CASE_1) {
      this_00->field_01A9 = 1;
      this_00->field_01A4 = CASE_C;
      /* ST_CALLSITE[00536075]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (this_00->field_01A4 == CASE_9) {
      DAT_0080732c = (uint)(DAT_0080732c == 0);
      this_00->field_0028 = 0x440f;
      st::fn_006E6000(this_00,0xf,0,(undefined4 *)&this_00->field_0x18);
      if (g_sT3DSMAPContext_00807598 != nullptr) {
        st::fn_006E8630(g_sT3DSMAPContext_00807598,DAT_0080732c);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case MESS_FRMPANELTY_C0A5:
    temp_5fabcf5a4c = this_00->field_01A4;
    if (temp_5fabcf5a4c == 1) {
      this_00->field_01A9 = 1;
      this_00->field_01A4 = CASE_2;
      /* ST_CALLSITE[005361B0]: CALL 0x00402851; direct=00402851 OptPanelTy::SetOptControls */
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if ((5 < temp_5fabcf5a4c) && (temp_5fabcf5a4c < 8)) {
      if (g_sound == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0050 & 1);
      }
      if (uVar19 != 0) {
        if (g_sound == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0050 & 1);
        }
        if (uVar19 == 0) {
          iVar18 = 0;
        }
        else {
          iVar18 = (g_sndContext_0080765C->field_0064 - g_sndContext_0080765C->field_0060) + 1;
        }
        _DAT_00807312 = ((iVar18 + -1) * (message->arg0).u32) / 0x1e;
        local_1e0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_1e0;
        local_8 = _DAT_00807312;
        local_EAX_9241 = st::fn_0072D7F0(local_1e0.jumpBuffer,0);
        if (local_EAX_9241 == 0) {
          if (g_sound == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0050 & 1);
          }
          if (uVar19 != 0) {
            st::fn_006B7F00((int)g_sndContext_0080765C,1,local_8,local_8);
          }
        }
        g_currentExceptionFrame = local_1e0.previous;
        /* ST_CALLSITE[00536184]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
        st::fn_00405DF3(local_10,2,*(byte *)&message->arg0);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case MESS_BLDLABPANELTY_C0A4|MESS_ID_CREATE:
    if ((CASE_5 < this_00->field_01A4) && (this_00->field_01A4 < CASE_8)) {
      if (g_sound == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0038 & 1);
      }
      if (uVar19 != 0) {
        if (g_sound == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0038 & 1);
        }
        if (uVar19 == 0) {
          iVar18 = 0;
        }
        else {
          iVar18 = (g_sndContext_0080765C->field_004C - g_sndContext_0080765C->field_0048) + 1;
        }
        _DAT_00807316 = ((iVar18 + -1) * (message->arg0).u32) / 0x1e;
        local_268.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_268;
        local_8 = _DAT_00807316;
        iVar10 = st::fn_0072D7F0(local_268.jumpBuffer,0);
        if (iVar10 == 0) {
          if (g_sound == 0) {
            uVar19 = 0;
          }
          else {
            uVar19 = st::machine_word_boundary_cast<uint>(g_sndContext_0080765C->field_0038 & 1);
          }
          if (uVar19 != 0) {
            st::fn_006B7F00((int)g_sndContext_0080765C,0,local_8,local_8);
          }
        }
        g_currentExceptionFrame = local_268.previous;
        /* ST_CALLSITE[005362B8]: CALL 0x00405df3; direct=00405DF3 OptPanelTy::PaintVolume */
        st::fn_00405DF3(local_10,3,*(byte *)&message->arg0);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case MESS_INTERCOMPANELTY_C0AF:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A280);
        UVar34 = 0x3e81;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A1E0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A230);
        }
        UVar34 = 0x3e81;
      }
      goto cf_common_exit_00536F8B;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar32 = this_00->field_0180;
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A280);
        UVar34 = 0x3e8b;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A1E0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A230);
        }
        pcVar32 = this_00->field_0180;
        UVar34 = 0x3e8b;
      }
      goto cf_common_exit_00536F92;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
      UVar34 = 0x273e;
      goto cf_common_exit_00536DB5;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A770);
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3efc;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A6F0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A730);
        }
        iVar18 = 0;
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3efc;
      }
      break;
    case CASE_7:
      iVar18 = *(int *)(message->arg0).ptr;
      if (iVar18 == 1) {
        if (DAT_0080874e == '\x03') {
          iVar18 = 1;
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A640);
          pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A4D0);
          UVar34 = 0x3ee7;
        }
        else {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A540);
          if (DAT_0080874e != '\x01') {
            pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A5C0);
          }
          iVar18 = 1;
          pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A4D0);
          UVar34 = 0x3ee7;
        }
      }
      else if (iVar18 == 2) {
        if (DAT_0080874e == '\x03') {
          iVar18 = 1;
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A640);
          pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A4D0);
          UVar34 = 0x3ee5;
        }
        else {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A540);
          if (DAT_0080874e != '\x01') {
            pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A5C0);
          }
          iVar18 = 1;
          pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A4D0);
          UVar34 = 0x3ee5;
        }
      }
      else {
        if (iVar18 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          iVar18 = 1;
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A640);
          pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A4D0);
          UVar34 = 0x3ee6;
        }
        else {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A540);
          if (DAT_0080874e != '\x01') {
            pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A5C0);
          }
          iVar18 = 1;
          pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A4D0);
          UVar34 = 0x3ee6;
        }
      }
      break;
    case CASE_8:
      iVar18 = *(int *)(message->arg0).ptr;
      if (iVar18 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A640);
        }
        else {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A540);
          if (DAT_0080874e != '\x01') {
            pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A5C0);
          }
        }
        iVar18 = 1;
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A4D0);
        UVar34 = 0x3ef1;
        pCVar14 = st::fn_0040577C(st::mutable_c_string("BUT_BUTOPT1"),0);
        /* ST_CALLSITE[005364AC]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
        st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar34,pcVar31,pcVar35,
                    iVar18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar18 != 2) {
        if (iVar18 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A640);
        }
        else {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A540);
          if (DAT_0080874e != '\x01') {
            pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A5C0);
          }
        }
        iVar18 = 1;
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A4D0);
        UVar34 = 0x3ef2;
        pCVar14 = st::fn_0040577C(st::mutable_c_string("BUT_BUTOPT1"),0);
        /* ST_CALLSITE[005363FA]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
        st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar34,pcVar31,pcVar35,
                    iVar18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A640);
      }
      else {
joined_r0x0053686a:
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A540);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A5C0);
        }
      }
LAB_00536434:
      UVar34 = 0x3ef0;
cf_common_exit_00536441:
      iVar18 = 1;
      pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A4D0);
      pCVar14 = st::fn_0040577C(st::mutable_c_string("BUT_BUTOPT1"),0);
      /* ST_CALLSITE[00536453]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
      st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar34,pcVar31,pcVar35,
                  iVar18);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A770);
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3ef4;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A6F0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A730);
        }
        iVar18 = 0;
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3ef4;
      }
      break;
    case CASE_D:
      iVar18 = *(int *)(message->arg0).ptr;
      if (iVar18 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A640);
        }
        else {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A540);
          if (DAT_0080874e != '\x01') {
            pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A5C0);
          }
        }
        iVar18 = 1;
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A4D0);
        UVar34 = 0x3e90;
        pCVar14 = st::fn_0040577C(st::mutable_c_string("BUT_BUTOPT1"),0);
        /* ST_CALLSITE[005365CD]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
        st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar34,pcVar31,pcVar35,
                    iVar18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar18 == 2) {
        if (DAT_0080874e == '\x03') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A640);
        }
        else {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A540);
          if (DAT_0080874e != '\x01') {
            pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A5C0);
          }
        }
        iVar18 = 1;
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A4D0);
        UVar34 = 0x3e91;
        pCVar14 = st::fn_0040577C(st::mutable_c_string("BUT_BUTOPT1"),0);
        /* ST_CALLSITE[00536574]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
        st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar34,pcVar31,pcVar35,
                    iVar18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar18 == 3) {
        if (DAT_0080874e == '\x03') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A640);
        }
        else {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A540);
          if (DAT_0080874e != '\x01') {
            pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A5C0);
          }
        }
        iVar18 = 1;
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A4D0);
        UVar34 = 0x3e92;
        pCVar14 = st::fn_0040577C(st::mutable_c_string("BUT_BUTOPT1"),0);
        /* ST_CALLSITE[0053651B]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
        st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar34,pcVar31,pcVar35,
                    iVar18);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      goto cf_common_exit_00536FB7;
    }
cf_common_exit_00536EE8:
    uVar27 = 0;
    iVar30 = 1;
    pCVar14 = st::fn_0040577C(st::mutable_c_string("BUT_BUTOPT"),0);
    pCVar14 = st::fn_006F2C00(pCVar14,iVar30,uVar27);
    /* ST_CALLSITE[00536F06]: CALL 0x00404f0c; direct=00404F0C OptPanelTy::PaintDblBut */
    st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar34,pcVar31,pcVar35,iVar18
               );
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  case 0xc0b0:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar32 = this_00->field_0180;
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A280);
        UVar34 = 0x3e82;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A1E0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A230);
        }
        pcVar32 = this_00->field_0180;
        UVar34 = 0x3e82;
      }
      break;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A280);
        UVar34 = 0x3e8a;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A1E0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A230);
        }
        UVar34 = 0x3e8a;
      }
      goto cf_common_exit_00536F8B;
    case CASE_3:
      puVar20 = this_00->field_01E5;
      uVar19 = *(uint *)(puVar20 + 10);
      if (uVar19 == 0) {
        uVar19 = ((uint)puVar20[7] * *(int *)(puVar20 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar20 + 4);
      }
      local_24 = (DAT_0080874e != '\x03') - 1 & 0x73;
      puVar12 = (byte *)st::fn_006B4FA0((int *)puVar20);
      uVar10 = (undefined1)local_24;
      for (uVar17 = uVar19 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar12 = CONCAT22(CONCAT11(uVar10,uVar10),CONCAT11(uVar10,uVar10));
        puVar12 = (byte *)(puVar12 + 1);
      }
      for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined1 *)puVar12 = uVar10;
        puVar12 = (byte *)((int)puVar12 + 1);
      }
      st::fn_00710A90(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
      st::fn_007119C0(this_00->field_017C,*(char **)(message->arg0).ptr,0,-1,0);
      uVar5 = (message->arg1).words.low;
      if ((uVar5 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
        uVar19 = (uint)(message->arg1).words.high;
        st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_01E5,0,(uint)uVar5,uVar19,
                     (uint)uVar5,uVar19 + 10,0x6c,0xd);
      }
      puVar20 = this_00->field_01E5;
      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,(byte *)puVar20,0,
                 0,0,*(int *)(puVar20 + 2),*(int *)(puVar20 + 4));
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
      UVar34 = 0x273f;
      goto cf_common_exit_00536DB5;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A770);
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3efd;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A6F0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A730);
        }
        iVar18 = 0;
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3efd;
      }
      goto cf_common_exit_00536EE8;
    case CASE_8:
      iVar18 = *(int *)(message->arg0).ptr;
      if (iVar18 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A640);
          UVar34 = 0x3ef1;
        }
        else {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A540);
          if (DAT_0080874e != '\x01') {
            pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A5C0);
          }
          UVar34 = 0x3ef1;
        }
        goto cf_common_exit_00536441;
      }
      if (iVar18 != 2) {
        if (iVar18 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A640);
          UVar34 = 0x3ef2;
          goto cf_common_exit_00536441;
        }
        goto LAB_00536d52;
      }
      if (DAT_0080874e != '\x03') goto joined_r0x0053686a;
      pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A640);
      goto LAB_00536434;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A770);
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3ef5;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A6F0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A730);
        }
        iVar18 = 0;
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3ef5;
      }
      goto cf_common_exit_00536EE8;
    case CASE_B:
switchD_00536a2b_caseD_3:
      UVar34 = 0x2751;
cf_common_exit_00536DB5:
      pCVar14 = st::fn_0040577C(st::mutable_c_string("BUT_MEDIUM"),0);
      /* ST_CALLSITE[00536DC7]: CALL 0x00403508; direct=00403508 UPanelTy::PaintIBut */
      st::fn_00403508((UPanelTy *)this_00,(AnonShape_0053DAF0_3BDC2979 *)message,pCVar14,UVar34);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      if (DAT_0080874e == '\x03') {
        pcVar32 = this_00->field_0180;
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A280);
        UVar34 = 0x3e93;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A1E0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A230);
        }
        pcVar32 = this_00->field_0180;
        UVar34 = 0x3e93;
      }
    }
    goto cf_common_exit_00536F92;
  case MESS_BEHPANELTY_C0B1:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar32 = this_00->field_0180;
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A280);
        UVar34 = 0x3e83;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A1E0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A230);
        }
        pcVar32 = this_00->field_0180;
        UVar34 = 0x3e83;
      }
      goto cf_common_exit_00536F92;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A280);
        UVar34 = 0x3e8c;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A1E0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A230);
        }
        UVar34 = 0x3e8c;
      }
      goto cf_common_exit_00536F8B;
    case CASE_3:
    case CASE_4:
      goto switchD_00536a2b_caseD_3;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A770);
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3efe;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A6F0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A730);
        }
        iVar18 = 0;
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3efe;
      }
      break;
    case CASE_8:
      if (*(int *)(message->arg0).ptr == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A640);
          UVar34 = 0x3f02;
        }
        else {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A540);
          if (DAT_0080874e != '\x01') {
            pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A5C0);
          }
          UVar34 = 0x3f02;
        }
      }
      else {
        if (*(int *)(message->arg0).ptr != 2) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A640);
          UVar34 = 0x3f03;
        }
        else {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A540);
          if (DAT_0080874e != '\x01') {
            pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A5C0);
          }
          UVar34 = 0x3f03;
        }
      }
      goto cf_common_exit_00536441;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A770);
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3ef6;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A6F0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A730);
        }
        iVar18 = 0;
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3ef6;
      }
      break;
    case CASE_D:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A770);
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3ef8;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A6F0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A730);
        }
        iVar18 = 0;
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3ef8;
      }
      break;
    case CASE_E:
      UVar34 = 0x2752;
      goto cf_common_exit_00536DB5;
    }
    goto cf_common_exit_00536EE8;
  case 0xc0b2:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A280);
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A1E0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A230);
        }
      }
      if (DAT_008067a0 == '\0') {
        UVar34 = 0x3e84;
      }
      else {
        UVar34 = 0x3e96 - (g_playSystem_00802A38->field_00E4 - g_playSystem_00802A38->field_0034 <
                          6000);
      }
      goto cf_common_exit_00536F8B;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar32 = this_00->field_0180;
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A280);
        UVar34 = 0x3e8d;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A1E0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A230);
        }
        pcVar32 = this_00->field_0180;
        UVar34 = 0x3e8d;
      }
      goto cf_common_exit_00536F92;
    case CASE_3:
    case CASE_4:
      UVar34 = 0x2750;
      goto cf_common_exit_00536DB5;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A770);
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3eff;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A6F0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A730);
        }
        iVar18 = 0;
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3eff;
      }
      break;
    case CASE_8:
      if (*(int *)(message->arg0).ptr != 1) {
        if (*(int *)(message->arg0).ptr != 2) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A640);
          UVar34 = 0x3f06;
        }
        else {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A540);
          if (DAT_0080874e != '\x01') {
            pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A5C0);
          }
          UVar34 = 0x3f06;
        }
        goto cf_common_exit_00536441;
      }
      if (DAT_0080874e == '\x03') {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A640);
        UVar34 = 0x3ef2;
        goto cf_common_exit_00536441;
      }
LAB_00536d52:
      pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A540);
      if (DAT_0080874e != '\x01') {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A5C0);
      }
      UVar34 = 0x3ef2;
      goto cf_common_exit_00536441;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar18 = 0;
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A770);
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3ef7;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A6F0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A730);
        }
        iVar18 = 0;
        pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
        UVar34 = 0x3ef7;
      }
    }
    goto cf_common_exit_00536EE8;
  case MESS_BLDLABPANELTY_C0B3:
    OVar4 = this_00->field_01A4;
    if (OVar4 != CASE_1) {
      if (OVar4 != CASE_2) {
        if (OVar4 != CASE_9) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          iVar18 = 0;
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A770);
          pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
          UVar34 = 0x3f04;
        }
        else {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A6F0);
          if (DAT_0080874e != '\x01') {
            pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A730);
          }
          iVar18 = 0;
          pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
          UVar34 = 0x3f04;
        }
        goto cf_common_exit_00536EE8;
      }
      if (DAT_0080874e == '\x03') {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A280);
        UVar34 = 0x3e8f;
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A1E0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A230);
        }
        UVar34 = 0x3e8f;
      }
      goto cf_common_exit_00536F8B;
    }
    if (DAT_0080874e == '\x03') {
      pcVar32 = this_00->field_0180;
      pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A280);
      UVar34 = 0x3e85;
    }
    else {
      pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A1E0);
      if (DAT_0080874e != '\x01') {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A230);
      }
      pcVar32 = this_00->field_0180;
      UVar34 = 0x3e85;
    }
    goto cf_common_exit_00536F92;
  case MESS_RESEARCHPANELTY_C0B4:
    if (this_00->field_01A4 != CASE_1) {
      if (this_00->field_01A4 != CASE_9) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A770);
      }
      else {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A6F0);
        if (DAT_0080874e != '\x01') {
          pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A730);
        }
      }
      iVar18 = 0;
      pcVar31 = st::function_address_boundary_cast<code *>(st::fn_0052A6C0);
      UVar34 = 0x3f05;
      goto cf_common_exit_00536EE8;
    }
    if (DAT_0080874e == '\x03') {
      pcVar32 = this_00->field_0180;
      pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A280);
      UVar34 = 0x3e86;
    }
    else {
      pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A1E0);
      if (DAT_0080874e != '\x01') {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A230);
      }
      pcVar32 = this_00->field_0180;
      UVar34 = 0x3e86;
    }
    goto cf_common_exit_00536F92;
  case MESS_SHARED_C0B5:
    if (this_00->field_01A4 != CASE_1) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (DAT_0080874e == '\x03') {
      pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A280);
    }
    else {
      pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A1E0);
      if (DAT_0080874e != '\x01') {
        pcVar35 = st::function_address_boundary_cast<code *>(st::fn_0052A230);
      }
    }
    UVar34 = 0x3e87;
cf_common_exit_00536F8B:
    pcVar32 = this_00->field_0180;
cf_common_exit_00536F92:
    uVar27 = 0;
    iVar18 = 1;
    pCVar14 = st::fn_0040577C(st::mutable_c_string("BUT_BUTOPT"),0);
    pCVar14 = st::fn_006F2C00(pCVar14,iVar18,uVar27);
    /* ST_CALLSITE[00536FB2]: CALL 0x00401ea1; direct=00401EA1 UPanelTy::PaintTxtBut */
    st::fn_00401EA1
              ((UPanelTy *)this_00,(AnonShape_0053D920_829E6B3B *)message,1,pCVar14,pcVar32,UVar34,
               pcVar35);
  }
cf_common_exit_00536FB7:
  g_currentExceptionFrame = local_8c.previous;
  return 0;
}

// 005380E0 OptPanelTy::UpdateObjectives
#line 4 "decomp/ST.exe/functions/005380E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::UpdateObjectives

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005380E0(OptPanelTy *this)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (errorCode == 0) {
    /* ST_CALLSITE[00538112]: CALL 0x0040443a; direct=0040443A OptPanelTy::PrepMissObj */
    st::fn_0040443A(local_8);
    if (g_helpPanel_00801690 != nullptr) {
      /* ST_CALLSITE[00538123]: CALL 0x00402d38; direct=00402D38 HelpPanelTy::sub_00515180 */
      st::fn_00402D38(g_helpPanel_00801690,'\a');
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x800,0,errorCode,
                             st::mutable_c_string("%s"),"OptPanelTy::UpdateObjectives");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\optpanel.cpp"),0x800);
  return;
}

