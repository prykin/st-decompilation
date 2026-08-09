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
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x37,0,errorCode,
                             "%s","OptPanelTy::PreInitOptPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x37);
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
  undefined4 uVar6;
  undefined4 uVar7;
  short sVar8;
  ushort uVar9;
  uint uVar10;
  byte bVar11;
  undefined4 uVar12;
  char *pcVar13;
  int *piVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 == 0) {
    g_optPanel_008016DC = local_8;
    pcVar2 = (ccFntTy *)st::fn_0070DF00(0x19d,g_interSystem_00802A28->field_0028);
    this_00->field_017C = pcVar2;
    pcVar2->field_0058 = 0;
    pcVar2->field_005C = 0;
    pcVar2 = (ccFntTy *)st::fn_0070DF00(0x19d,(ccFntTy *)g_interSystem_00802A28->field_002C);
    this_00->field_0180 = pcVar2;
    pcVar2->field_0058 = 1;
    pcVar2->field_005C = 0;
    iVar18 = 1;
    piVar14 = nullptr;
    pCVar3 = st::fn_0040577C("BKG_OPTIONS",0);
    local_EAX_158 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar3,piVar14,iVar18);
    iVar18 = 1;
    piVar14 = nullptr;
    this_00->field_0184 = local_EAX_158;
    this_00->field_0188 = 0;
    pCVar3 = st::fn_0040577C("BKG_OPT_NUM",0);
    puVar5 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar3,piVar14,iVar18);
    iVar18 = 1;
    piVar14 = nullptr;
    this_00->field_018C = puVar5;
    pCVar3 = st::fn_0040577C("BKG_OPT_SAVE",0);
    local_EAX_238 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar3,piVar14,iVar18);
    iVar18 = 1;
    piVar14 = nullptr;
    this_00->field_0190 = local_EAX_238;
    pCVar3 = st::fn_0040577C("BKG_OPT_MOBJ",0);
    local_EAX_275 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar3,piVar14,iVar18);
    puVar19 = nullptr;
    iVar15 = 0;
    iVar18 = 1;
    bVar11 = 0;
    uVar10 = 0xffffffff;
    this_00->field_0194 = local_EAX_275;
    pCVar3 = st::fn_0040577C("IND_PNT",0);
    local_EAX_317 =
         st::fn_00709AF0
                   (PTR_00806794,CASE_B,pCVar3,uVar10,bVar11,iVar18,iVar15,puVar19);
    this_00->field_0198 = local_EAX_317;
    puVar4 = this_00->field_0184 + 0x14;
    iVar18 = 1;
    uVar11 = st::fn_006B4FE0((int)this_00->field_0184);
    puVar4 = (ushort *)
             st::fn_006B50C0(0xde,0xb,(uint)this_00->field_0184[7],uVar11,(undefined4 *)puVar4,iVar18);
    this_00->field_01E5 = puVar4;
    pDVar5 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_01F1 = pDVar5;
    st::fn_006B6020(pDVar5,0,&CHAR_00h_008016a0);
    st::fn_0040443A(this_00);
    st::fn_00402851(this_00);
    uVar20 = 0;
    uVar16 = 0;
    pcVar13 = nullptr;
    uVar12 = 0;
    uVar9 = 0;
    sVar8 = 0;
    uVar7 = 0xc002;
    uVar6 = 0xc001;
    pCVar3 = st::fn_0040577C("BUT_MEDIUM",0);
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
    pCVar3 = st::fn_0040577C("BUT_MEDIUM",0);
    uVar10 = st::fn_0040398B((UPanelTy *)this_00,0,0,0x93,0x9f,1,pCVar3,uVar6,uVar7,sVar8,uVar9,
                                 uVar12,pcVar13,uVar16,uVar20);
    uVar6 = this_00->field_0038;
    this_00->field_01AD[1] = uVar10;
    this_00->field_0301 = uVar6;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar17 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x5b,0,iVar2,"%s",
                              "OptPanelTy::InitOptPanel");
  if (iVar17 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x5b);
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
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x79,0,iVar3,"%s",
                             "OptPanelTy::DoneOptPanel");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x79);
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
  undefined4 uVar8;
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
    pCVar3 = st::fn_0040577C("BUT_MINUS",0);
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
    (*pOVar2->field_000C->vtable->CreateObject)
              ((SystemClassTy *)pOVar2->field_000C,4,&local_8,nullptr,local_42c,0);
    g_currentExceptionFrame = local_54.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar10 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0xa0,0,iVar3,"%s",
                              "OptPanelTy::CreateSlider");
  if (iVar10 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\optpanel.cpp",0xa0);
  return 0xffffffff;
}

// 0052EDF0 OptPanelTy::PaintVolume
#line 4 "decomp/ST.exe/functions/0052EDF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PaintVolume */

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
  iVar6 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0xac,0,iVar4,"%s",
                             "OptPanelTy::PaintVolume");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\optpanel.cpp",0xac);
  return;
}

// 0052EFB0 OptPanelTy::PaintDblBut
#line 4 "decomp/ST.exe/functions/0052EFB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::PaintDblBut */

void __thiscall
st::fn_0052EFB0
          (OptPanelTy *this,AnonShape_0052EFB0_CC661192 *param_1,char *param_2,UINT param_3,
          undefined *param_4,undefined *param_5,int param_6)

{
  OptPanelTy *pOVar2;
  int iVar3;
  undefined4 uVar3;
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
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_1c->field_0068,local_18,local_14,'\x01',
             (byte *)local_8);
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      iVar10 = 1;
      piVar9 = nullptr;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar3 = (*(code *)param_4)(param_1);
      iVar8 = 1;
      pCVar4 = st::fn_0040577C("BUT_SWITCH",0);
      pCVar4 = st::fn_006F2C00(pCVar4,iVar8,uVar3);
      local_8 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar4,piVar9,iVar10);
      if (param_6 == 0) {
        iVar8 = local_10->field_000C;
      }
      else {
        iVar8 = local_c->field_0018;
      }
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
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
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
    iVar7 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0xca,0,iVar3,"%s"
                               ,"OptPanelTy::PaintDblBut");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\optpanel.cpp",0xca);
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
    iVar2 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x125,0,errorCode,
                               "%s","OptPanelTy::SwitchOptPanel");
    if (iVar2 == 0) {
      st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x125);
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
        ShiftControls(local_c,0);
      }
      this_00->field_0172 = CASE_4;
      DAT_00808788 = 0;
      if ((g_cPanel_00801688 != nullptr) && (g_cPanel_00801688->field_023F == CASE_1)) {
        st::fn_00402ED2(g_cPanel_00801688,1);
      }
      GVar14 = CASE_B0;
    }
    goto LAB_0052f60b;
  case CASE_2:
    if (g_researchPanel_008016E8 != nullptr) {
      local_8 = st::fn_00401A73(g_researchPanel_008016E8,'\0');
    }
    bVar3 = local_8 != 0;
    if (g_bldBoatPanel_0080167C != nullptr) {
      local_8 = st::fn_00401A73(g_bldBoatPanel_0080167C,'\0');
    }
    bVar4 = local_8 != 0;
    if (g_bldObjPanel_00801684 != nullptr) {
      local_8 = st::fn_00401A73(g_bldObjPanel_00801684,'\0');
    }
    bVar5 = local_8 != 0;
    if (g_infocPanel_00801698 != nullptr) {
      local_8 = (*g_infocPanel_00801698->vtable->SetPanel)
                          ((SpecPanelTy *)g_infocPanel_00801698,'\0');
    }
    bVar6 = local_8 != 0;
    if (g_tradePanel_00802A44 != nullptr) {
      local_8 = st::fn_00404AF7(g_tradePanel_00802A44,'\0','\0');
    }
    bVar7 = local_8 != 0;
    if (g_behPanel_00801678 != nullptr) {
      local_8 = (*g_behPanel_00801678->vtable->SetPanel)((SpecPanelTy *)g_behPanel_00801678,'\0');
    }
    bVar8 = local_8 != 0;
    if (g_sAMPanel_008016EC != nullptr) {
      local_8 = (*g_sAMPanel_008016EC->vtable->SetPanel)((SpecPanelTy *)g_sAMPanel_008016EC,'\0');
    }
    bVar9 = local_8 != 0;
    if (g_upgPanel_00802A48 != nullptr) {
      local_8 = (*g_upgPanel_00802A48->vtable->SetPanel)((SpecPanelTy *)g_upgPanel_00802A48,'\0');
    }
    bVar10 = local_8 != 0;
    if (g_frmPanel_0080168C != nullptr) {
      local_8 = (*g_frmPanel_0080168C->vtable->SetPanel)((SpecPanelTy *)g_frmPanel_0080168C,'\0');
    }
    bVar11 = local_8 != 0;
    if (g_bldLabPanel_00801680 != nullptr) {
      local_8 = st::fn_00401A73(g_bldLabPanel_00801680,'\0');
    }
    bVar12 = local_8 != 0;
    if (g_helpPanel_00801690 != nullptr) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      local_8 = (**(code **)(g_helpPanel_00801690->vtable + 0x18))(0);
    }
    bVar13 = local_8 != 0;
    if (g_playPanel_008016E4 != nullptr) {
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
   OptPanelTy::SwitchOptPanelOff */

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
      st::fn_00402851(local_8);
      if (this_00->field_0172 == CASE_1) {
        st::fn_00405A1A(this_00,0);
      }
      this_00->field_0172 = CASE_4;
      st::fn_00405E2F(CASE_B0);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x139,0,errorCode,
                             "%s","OptPanelTy::SwitchOptPanelOff");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x139);
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
  undefined4 uVar3;
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
    *(short *)&this->field_0x2e = sVar2;
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
    iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x156,0,iVar5,
                               "%s","OptPanelTy::ShiftControls");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x156);
  }
  return;
}

// 0052FB00 OptPanelTy::SetOptControls
#line 4 "decomp/ST.exe/functions/0052FB00/decomp.c"
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
  char *pcVar6;
  int iVar6;
  size_t _Count;
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
  int iVar7;
  int local_EAX_4632;
  uint uVar8;
  int local_EAX_4865;
  uint uVar9;
  uint uVar10;
  int local_EAX_5376;
  int local_EAX_5605;
  int local_EAX_5906;
  int local_EAX_6096;
  byte bVar5;
  HANDLE pvVar11;
  undefined4 uVar12;
  LPSTR pCVar13;
  int iVar17;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  OptPanelTy *extraout_ECX;
  uint uVar14;
  ushort *puVar15;
  OptPanelTy *this_00;
  int iVar16;
  char *pcVar17;
  uint *puVar18;
  char *pcVar19;
  char *pcVar20;
  SNDContext *pSVar21;
  ccFntTy **ppcVar22;
  int *piVar23;
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
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_ffffffb8;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_ffffffbc;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_ffffffc0;
  int iVar24;
  undefined4 uVar25;
  short sVar26;
  OptPanelTy *pOVar27;
  ushort uVar28;
  UINT UVar29;
  RecoveredSourceFamily_dibcopy *pRVar30;
  SNDContext *pSVar31;
  undefined4 uVar32;
  char *pcVar33;
  size_t sVar34;
  int iVar35;
  undefined4 *puVar36;
  undefined4 uVar37;
  uint uVar38;
  int *piVar39;
  undefined4 uVar40;
  size_t sVar41;
  char *resourceString;
  char *pcVar7_mg32;

  st::fn_0072DA40();
  local_110.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_110;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  this_00 = extraout_ECX;
  local_EAX_51 = st::fn_0072D7F0(local_110.jumpBuffer,0);
  if (local_EAX_51 != 0) {
    g_currentExceptionFrame = local_110.previous;
    iVar17 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x350,0,local_EAX_51,
                                "%s");
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_51,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x350);
    return;
  }
  iVar16 = 10;
  puVar18 = this_00->field_01B5;
  do {
    if (*puVar18 != 0) {
      st::fn_006E56B0(this_00->field_000C,*puVar18);
    }
    *puVar18 = 0;
    puVar18 = puVar18 + 1;
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0,'\x01',(byte *)this_00->field_0184
        );
  st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x31,2,0xc6,0xc);
  switch(this_00->field_01A4) {
  case CASE_1:
    uVar38 = 0;
    iVar16 = -2;
    UVar29 = 16000;
    break;
  case CASE_2:
    uVar38 = 0;
    iVar16 = -2;
    UVar29 = 0x3e87;
    break;
  case CASE_3:
    UVar29 = 0x3e81;
    goto LAB_00530592;
  case CASE_4:
    UVar29 = 0x3e82;
LAB_00530592:
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg27 = st::fn_006B0140(UVar29,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg27,iVar16,iVar35,uVar38);
    puVar15 = this_00->field_0190;
LAB_005305a9:
    pRVar30 = (RecoveredSourceFamily_dibcopy *)this_00->field_0068;
LAB_005305b4:
    st::fn_00403229(pRVar30,0x1d,0x13,'\x01',(byte *)puVar15);
    goto cf_common_join_005305BC;
  case CASE_5:
  case CASE_B:
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg10 = st::fn_006B0140(0x3ea8,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg10,iVar16,iVar35,uVar38);
    st::fn_00710A90(this_00->field_0180,this_00->field_0068,0,0x1d,0x13,0xee,0x6a);
    switch(this_00->field_01AB) {
    case CASE_1:
    case CASE_2:
    case CASE_6:
      pcVar33 = local_984;
      for (iVar16 = 0x41; iVar16 != 0; iVar16 = iVar16 + -1) {
        pcVar33[0] = '\0';
        pcVar33[1] = '\0';
        pcVar33[2] = '\0';
        pcVar33[3] = '\0';
        pcVar33 = pcVar33 + 4;
      }
      local_EAX_338 = st::fn_00711110(this_00->field_0180,&this_00->field_0x1f5);
      if (local_EAX_338 < 0xee) {
LAB_0052fd4a:
        uVar38 = 0xffffffff;
        pcVar33 = &this_00->field_0x1f5;
        do {
          pcVar6 = pcVar33;
          if (uVar38 == 0) break;
          uVar38 = uVar38 - 1;
          pcVar6 = pcVar33 + 1;
          cVar1 = *pcVar33;
          pcVar33 = pcVar6;
        } while (cVar1 != '\0');
        uVar38 = ~uVar38;
        pcVar33 = pcVar6 + -uVar38;
        pcVar6 = local_984;
        for (uVar14 = uVar38 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar33;
          pcVar33 = pcVar33 + 4;
          pcVar6 = pcVar6 + 4;
        }
      }
      else {
        iVar16 = -1;
        pcVar33 = &this_00->field_0x1f5;
        do {
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          cVar1 = *pcVar33;
          pcVar33 = pcVar33 + 1;
        } while (cVar1 != '\0');
        pcVar33 = (char *)0xa;
        do {
          pcVar6 = local_984;
          pcVar33 = pcVar33 + 1;
          st::fn_0072E340(pcVar6,&this_00->field_0x1f5,(size_t)pcVar33);
          uVar38 = 0xffffffff;
          pcVar17 = &st_global_007C7278;
          do {
            pcVar20 = pcVar17;
            if (uVar38 == 0) break;
            uVar38 = uVar38 - 1;
            pcVar20 = pcVar17 + 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar20;
          } while (cVar1 != '\0');
          uVar38 = ~uVar38;
          iVar16 = -1;
          pcVar17 = local_984;
          do {
            pcVar19 = pcVar17;
            if (iVar16 == 0) break;
            iVar16 = iVar16 + -1;
            pcVar19 = pcVar17 + 1;
            cVar1 = *pcVar17;
            pcVar17 = pcVar19;
          } while (cVar1 != '\0');
          pcVar17 = pcVar20 + -uVar38;
          pcVar20 = pcVar19 + -1;
          for (uVar14 = uVar38 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pcVar20 = *(undefined4 *)pcVar17;
            pcVar17 = pcVar17 + 4;
            pcVar20 = pcVar20 + 4;
          }
          pcVar19 = local_984;
          for (uVar38 = uVar38 & 3; uVar38 != 0; uVar38 = uVar38 - 1) {
            *pcVar20 = *pcVar17;
            pcVar17 = pcVar17 + 1;
            pcVar20 = pcVar20 + 1;
          }
          local_EAX_465 = st::fn_00711110(this_00->field_0180,pcVar19);
        } while ((local_EAX_465 < 0xee) && ((int)pcVar33 < (int)pcVar6));
        if (pcVar33 == pcVar6) goto LAB_0052fd4a;
        pcVar6 = local_984;
        for (iVar16 = 0x41; iVar16 != 0; iVar16 = iVar16 + -1) {
          pcVar6[0] = '\0';
          pcVar6[1] = '\0';
          pcVar6[2] = '\0';
          pcVar6[3] = '\0';
          pcVar6 = pcVar6 + 4;
        }
        st::fn_0072E340(local_984,&this_00->field_0x1f5,(size_t)(pcVar33 + -3));
        uVar38 = 0xffffffff;
        pcVar33 = &st_global_007C7274;
        do {
          pcVar6 = pcVar33;
          if (uVar38 == 0) break;
          uVar38 = uVar38 - 1;
          pcVar6 = pcVar33 + 1;
          cVar1 = *pcVar33;
          pcVar33 = pcVar6;
        } while (cVar1 != '\0');
        uVar38 = ~uVar38;
        iVar16 = -1;
        pcVar33 = local_984;
        do {
          pcVar17 = pcVar33;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar17 = pcVar33 + 1;
          cVar1 = *pcVar33;
          pcVar33 = pcVar17;
        } while (cVar1 != '\0');
        pcVar33 = pcVar6 + -uVar38;
        pcVar6 = pcVar17 + -1;
        for (uVar14 = uVar38 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar33;
          pcVar33 = pcVar33 + 4;
          pcVar6 = pcVar6 + 4;
        }
      }
      UVar29 = this_00->field_01A5;
      for (uVar38 = uVar38 & 3; uVar38 != 0; uVar38 = uVar38 - 1) {
        *pcVar6 = *pcVar33;
        pcVar33 = pcVar33 + 1;
        pcVar6 = pcVar6 + 1;
      }
      pcVar7_mg26 = st::fn_006B0140(UVar29,g_hINSTANCE_00807618);
      st::external_00000080(&this_00->field_006C,pcVar7_mg26);
      break;
    default:
      pcVar7_mg1D = st::fn_006B0140(this_00->field_01A5,g_hINSTANCE_00807618);
      uVar38 = 0xffffffff;
      do {
        pcVar33 = pcVar7_mg1D;
        if (uVar38 == 0) break;
        uVar38 = uVar38 - 1;
        pcVar33 = pcVar7_mg1D + 1;
        cVar1 = *pcVar7_mg1D;
        pcVar7_mg1D = pcVar33;
      } while (cVar1 != '\0');
      uVar38 = ~uVar38;
      pcVar33 = pcVar33 + -uVar38;
      pcVar6 = &this_00->field_006C;
      memmove(pcVar6, pcVar33, uVar38); /* compiler REP MOVS byte copy */
      uVar14 = 0;
      break;
    case CASE_7:
      pcVar33 = local_880;
      for (iVar16 = 0x41; iVar16 != 0; iVar16 = iVar16 + -1) {
        pcVar33[0] = '\0';
        pcVar33[1] = '\0';
        pcVar33[2] = '\0';
        pcVar33[3] = '\0';
        pcVar33 = pcVar33 + 4;
      }
      iVar16 = 0;
      pcVar33 = nullptr;
      if (DAT_00808aaf != 0) {
        pcVar6 = &CHAR_00h_00808ab0;
        do {
          pcVar33 = pcVar6;
          if (*(int *)(pcVar6 + 0x40) == g_playSystem_00802A38->field_00F4) break;
          iVar16 = iVar16 + 1;
          pcVar6 = pcVar6 + 0x9c;
          pcVar33 = nullptr;
        } while (iVar16 < (int)(uint)DAT_00808aaf);
      }
      if (pcVar33 == nullptr) {
        pcVar6 = &st_global_007C7274;
LAB_0052ff02:
        uVar38 = 0xffffffff;
        do {
          pcVar33 = pcVar6;
          if (uVar38 == 0) break;
          uVar38 = uVar38 - 1;
          pcVar33 = pcVar6 + 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar33;
        } while (cVar1 != '\0');
        uVar38 = ~uVar38;
        pcVar33 = pcVar33 + -uVar38;
        pcVar6 = local_880;
        for (uVar14 = uVar38 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar33;
          pcVar33 = pcVar33 + 4;
          pcVar6 = pcVar6 + 4;
        }
      }
      else {
        pcVar6 = pcVar33;
        iVar6 = st::fn_00711110(this_00->field_0180,pcVar33);
        if (iVar6 < 200) goto LAB_0052ff02;
        iVar16 = -1;
        do {
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          cVar1 = *pcVar33;
          pcVar33 = pcVar33 + 1;
        } while (cVar1 != '\0');
        _Count = 10;
        do {
          sVar41 = _Count;
          _Count = sVar41 + 1;
          st::fn_0072E340(local_880,pcVar6,_Count);
          uVar38 = 0xffffffff;
          pcVar33 = &st_global_007C7278;
          do {
            pcVar17 = pcVar33;
            if (uVar38 == 0) break;
            uVar38 = uVar38 - 1;
            pcVar17 = pcVar33 + 1;
            cVar1 = *pcVar33;
            pcVar33 = pcVar17;
          } while (cVar1 != '\0');
          uVar38 = ~uVar38;
          iVar16 = -1;
          pcVar33 = local_880;
          do {
            pcVar20 = pcVar33;
            if (iVar16 == 0) break;
            iVar16 = iVar16 + -1;
            pcVar20 = pcVar33 + 1;
            cVar1 = *pcVar33;
            pcVar33 = pcVar20;
          } while (cVar1 != '\0');
          pcVar33 = pcVar17 + -uVar38;
          pcVar17 = pcVar20 + -1;
          for (uVar14 = uVar38 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar33;
            pcVar33 = pcVar33 + 4;
            pcVar17 = pcVar17 + 4;
          }
          pcVar20 = local_880;
          for (uVar38 = uVar38 & 3; uVar38 != 0; uVar38 = uVar38 - 1) {
            *pcVar17 = *pcVar33;
            pcVar33 = pcVar33 + 1;
            pcVar17 = pcVar17 + 1;
          }
          sVar34 = 0x52fe7b;
          local_EAX_886 = st::fn_00711110(this_00->field_0180,pcVar20);
        } while ((local_EAX_886 < 200) && ((int)_Count < (int)sVar34));
        if (_Count == sVar34) goto LAB_0052ff02;
        pcVar33 = local_880;
        for (iVar16 = 0x41; iVar16 != 0; iVar16 = iVar16 + -1) {
          pcVar33[0] = '\0';
          pcVar33[1] = '\0';
          pcVar33[2] = '\0';
          pcVar33[3] = '\0';
          pcVar33 = pcVar33 + 4;
        }
        st::fn_0072E340(local_880,pcVar6,sVar41 - 2);
        uVar38 = 0xffffffff;
        pcVar33 = &st_global_007C7274;
        do {
          pcVar6 = pcVar33;
          if (uVar38 == 0) break;
          uVar38 = uVar38 - 1;
          pcVar6 = pcVar33 + 1;
          cVar1 = *pcVar33;
          pcVar33 = pcVar6;
        } while (cVar1 != '\0');
        uVar38 = ~uVar38;
        iVar16 = -1;
        pcVar33 = local_880;
        do {
          pcVar17 = pcVar33;
          if (iVar16 == 0) break;
          iVar16 = iVar16 + -1;
          pcVar17 = pcVar33 + 1;
          cVar1 = *pcVar33;
          pcVar33 = pcVar17;
        } while (cVar1 != '\0');
        pcVar33 = pcVar6 + -uVar38;
        pcVar6 = pcVar17 + -1;
        for (uVar14 = uVar38 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
          *(undefined4 *)pcVar6 = *(undefined4 *)pcVar33;
          pcVar33 = pcVar33 + 4;
          pcVar6 = pcVar6 + 4;
        }
      }
      UVar29 = this_00->field_01A5;
      for (uVar38 = uVar38 & 3; uVar38 != 0; uVar38 = uVar38 - 1) {
        *pcVar6 = *pcVar33;
        pcVar33 = pcVar33 + 1;
        pcVar6 = pcVar6 + 1;
      }
      pcVar7_mg1C = st::fn_006B0140(UVar29,g_hINSTANCE_00807618);
      st::external_00000080(&this_00->field_006C,pcVar7_mg1C);
      break;
    case CASE_A:
      pcVar7_mg11 = st::fn_006B0140(this_00->field_01A5,g_hINSTANCE_00807618);
      st::external_00000080(&this_00->field_006C,pcVar7_mg11);
    }
    if (DAT_0080874e == '\x03') {
      uVar38 = 5;
    }
    else {
      uVar38 = -(uint)(DAT_0080874e != '\x01') & 7;
    }
    st::fn_00711B70(this_00->field_0180,&this_00->field_006C,-2,-1,uVar38,-1,-1);
    goto cf_common_join_005305BC;
  case CASE_6:
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mgC = st::fn_006B0140(0x3e8a,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mgC,iVar16,iVar35,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x6b,0x6e,0xa0,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mgD = st::fn_006B0140(0x3ee4,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mgD,iVar16,iVar35,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x61,0x4e,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar35 = -1;
    iVar16 = -3;
    pcVar7_mgE = st::fn_006B0140(0x3eea,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mgE,iVar16,iVar35,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x77,0x4e,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar35 = -1;
    iVar16 = -3;
    pcVar7_mgF = st::fn_006B0140(0x3eeb,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mgF,iVar16,iVar35,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x84,0x4e,0xb);
    goto LAB_00530554;
  case CASE_7:
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg8 = st::fn_006B0140(0x3e8b,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg8,iVar16,iVar35,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x61,0x4e,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar35 = -1;
    iVar16 = -3;
    pcVar7_mg9 = st::fn_006B0140(0x3ee9,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg9,iVar16,iVar35,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x6b,0x6e,0xa0,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mgA = st::fn_006B0140(0x3ee4,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mgA,iVar16,iVar35,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x77,0x4e,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar35 = -1;
    iVar16 = -3;
    pcVar7_mgB = st::fn_006B0140(0x3eeb,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mgB,iVar16,iVar35,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x84,0x4e,0xb);
LAB_00530554:
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar16 = -3;
    UVar29 = 0x3eec;
    break;
  case CASE_8:
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg5 = st::fn_006B0140(0x3e8c,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg5,iVar16,iVar35,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x15,0x77,0xc);
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg6 = st::fn_006B0140(0x3eef,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg6,iVar16,iVar35,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x94,0x15,0x77,0xc);
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg7 = st::fn_006B0140(0x3eed,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg7,iVar16,iVar35,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x5b,0xf0,0xc);
    uVar38 = 0;
    iVar16 = -2;
    UVar29 = 0x3f07;
    break;
  case CASE_9:
    uVar38 = 0;
    iVar16 = -2;
    UVar29 = 0x3e8d;
    break;
  default:
    goto cf_common_join_005305BC;
  case CASE_C:
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg4 = st::fn_006B0140(0x3e89,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg4,iVar16,iVar35,uVar38);
    puVar15 = this_00->field_0194;
    goto LAB_005305a9;
  case CASE_D:
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg1 = st::fn_006B0140(0x3e88,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg1,iVar16,iVar35,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x6d,0x77,0x11);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg2 = st::fn_006B0140(0x3ef9,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg2,iVar16,iVar35,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x7f,0x77,0x11);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg3 = st::fn_006B0140(0x3efa,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg3,iVar16,iVar35,uVar38);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x6f,'\x01',
           (byte *)this_00->field_018C);
    resourceString = &this_00->field_006C;
    st::external_00000080(resourceString,"%d");
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0xaa,0x6f,
                     *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
    st::fn_007119C0(this_00->field_017C,resourceString,-2,-1,0);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x81,'\x01',
           (byte *)this_00->field_018C);
    st::external_00000080(resourceString,"%d");
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0xaa,0x81,
                     *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
    st::fn_007119C0(this_00->field_017C,resourceString,-2,-1,0);
    goto cf_common_join_005305BC;
  case CASE_E:
    uVar38 = 0;
    iVar35 = -1;
    iVar16 = -2;
    pcVar7_mg0 = st::fn_006B0140(0x3e94,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,pcVar7_mg0,iVar16,iVar35,uVar38);
    puVar15 = this_00->field_0190;
    pRVar30 = (RecoveredSourceFamily_dibcopy *)this_00->field_0068;
    goto LAB_005305b4;
  }
  iVar35 = -1;
  pcVar7_mg28 = st::fn_006B0140(UVar29,g_hINSTANCE_00807618);
  st::fn_007119C0(this_00->field_017C,pcVar7_mg28,iVar16,iVar35,uVar38);
cf_common_join_005305BC:
  switch(this_00->field_01A4) {
  case CASE_1:
    bVar5 = 0;
    uVar38 = 0;
    do {
      iVar16 = 1;
      if (((DAT_00808783 == '\x03') && (bVar5 != 0)) &&
         ((bVar5 < 3 || ((bVar5 == 4 && (DAT_008067a0 != '\0')))))) {
        iVar16 = 0;
      }
      uVar32 = 0;
      uVar25 = 0;
      pcVar33 = nullptr;
      uVar12 = 0;
      uVar28 = 0;
      iVar35 = uVar38 + 0xc0af;
      sVar26 = 0;
      iVar7 = uVar38 + 0xc09f;
      pCVar13 = st::fn_0040577C("BUT_BUTOPT",0);
      local_4c = 0x530655;
      uVar14 = st::fn_0040398B((UPanelTy *)this_00,1,iVar16,0x1d,uVar38 * 0x12 + 0x13,1,pCVar13,
                                   iVar7,iVar35,sVar26,uVar28,uVar12,pcVar33,uVar25,uVar32);
      this_00->field_01B5[uVar38] = uVar14;
      bVar5 = (char)uVar38 + 1;
      uVar38 = (uint)bVar5;
    } while (bVar5 < 7);
    break;
  case CASE_2:
    iVar16 = 0xc09f;
    iVar35 = 0x25;
    do {
      uVar25 = 0;
      puVar36 = nullptr;
      pcVar33 = nullptr;
      uVar12 = 0;
      uVar28 = 0;
      iVar7 = iVar16 + 0x10;
      sVar26 = 0;
      iVar24 = iVar16;
      pCVar13 = st::fn_0040577C("BUT_BUTOPT",0);
      local_4c = 0x530784;
      uVar12 = st::fn_0040398B((UPanelTy *)this_00,1,1,0x1d,iVar35,1,pCVar13,iVar24,iVar7,sVar26
                                   ,uVar28,uVar12,pcVar33,puVar36,uVar25);
      iVar16 = iVar16 + 1;
      iVar35 = iVar35 + 0x12;
      *puVar36 = uVar12;
    } while (pcVar33 != (char *)0x1);
    break;
  case CASE_3:
  case CASE_4:
  case CASE_E:
    if (this_00->field_01A4 != CASE_E) {
      if (this_00->field_01DD != (HANDLE)0x0) {
        st::external_00000060(this_00->field_01DD);
        this_00->field_01DD = (HANDLE)0x0;
      }
      uVar38 = 0xffffffff;
      pcVar33 = &CHAR_00h_00807680;
      do {
        pcVar6 = pcVar33;
        if (uVar38 == 0) break;
        uVar38 = uVar38 - 1;
        pcVar6 = pcVar33 + 1;
        cVar1 = *pcVar33;
        pcVar33 = pcVar6;
      } while (cVar1 != '\0');
      uVar38 = ~uVar38;
      pcVar33 = pcVar6 + -uVar38;
      pcVar6 = &this_00->field_006C;
      memmove(pcVar6, pcVar33, uVar38); /* compiler REP MOVS byte copy */
      uVar14 = 0;
      uVar38 = 0xffffffff;
      pcVar7_mg32 = st_global_0079ACEC;
      do {
        pcVar33 = pcVar7_mg32;
        if (uVar38 == 0) break;
        uVar38 = uVar38 - 1;
        pcVar33 = pcVar7_mg32 + 1;
        cVar1 = *pcVar7_mg32;
        pcVar7_mg32 = pcVar33;
      } while (cVar1 != '\0');
      uVar38 = ~uVar38;
      iVar16 = -1;
      pcVar6 = &this_00->field_006C;
      do {
        pcVar17 = pcVar6;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar17 = pcVar6 + 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar1 != '\0');
      pcVar33 = pcVar33 + -uVar38;
      pcVar6 = pcVar17 + -1;
      memmove(pcVar6, pcVar33, uVar38); /* compiler REP MOVS byte copy */
      uVar14 = 0;
      uVar38 = 0xffffffff;
      pcVar33 = &CHAR_00h_00807ddd;
      do {
        pcVar6 = pcVar33;
        if (uVar38 == 0) break;
        uVar38 = uVar38 - 1;
        pcVar6 = pcVar33 + 1;
        cVar1 = *pcVar33;
        pcVar33 = pcVar6;
      } while (cVar1 != '\0');
      uVar38 = ~uVar38;
      iVar16 = -1;
      pcVar33 = &this_00->field_006C;
      do {
        pcVar17 = pcVar33;
        if (iVar16 == 0) break;
        iVar16 = iVar16 + -1;
        pcVar17 = pcVar33 + 1;
        cVar1 = *pcVar33;
        pcVar33 = pcVar17;
      } while (cVar1 != '\0');
      pcVar33 = pcVar6 + -uVar38;
      pcVar6 = pcVar17 + -1;
      memmove(pcVar6, pcVar33, uVar38); /* compiler REP MOVS byte copy */
      st::fn_006B78C0(&this_00->field_006C,&this_00->field_006C);
      pvVar11 = st::external_00000074(&this_00->field_006C,0,1);
      this_00->field_01DD = pvVar11;
      if (pvVar11 == (HANDLE)0xffffffff) {
        this_00->field_01DD = (HANDLE)0x0;
      }
    }
    iVar16 = this_00->field_005C;
    memset(local_77c, 0, 0x4d4); /* compiler bulk-zero initialization */
    local_77c[0] = 0;
    local_77c[2] = this_00->field_003C + 0x26;
    if (iVar16 == 0) {
      local_77c[3] = -this_00->field_0048;
    }
    else {
      local_77c[3] = this_00->field_0044;
    }
    local_77c[3] = local_77c[3] + 0x31;
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
    local_644 = this_00->field_003C + 0xf2;
    local_650 = 2;
    local_64c = 0;
    local_648 = 2;
    local_544 = 1;
    local_540 = 1;
    if (iVar16 == 0) {
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
    local_528 = st::fn_0070AA70(g_cMf32_00806790,"BUT_MSLUP",0,1);
    local_524 = st::fn_0070A6F0(g_cMf32_00806790,0x12,"BUT_MSLUP",1);
    local_5ec = this_00->field_0008;
    local_3c4 = 1;
    local_3c0 = 1;
    local_4c4 = this_00->field_003C + 0xf2;
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
    local_3a8 = st::fn_0070AA70(g_cMf32_00806790,"BUT_MSLDN",0,1);
    local_3a4 = st::fn_0070A6F0(g_cMf32_00806790,0x12,"BUT_MSLDN",1);
    local_46c = this_00->field_0008;
    local_3bc = 500;
    local_3b8 = 0x32;
    local_468 = 2;
    local_464 = 0x8165;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,7,this_00->field_01B5,nullptr,local_77c,0);
    if ((this_00->field_005C == 0) || (uVar12 = 0x55, DAT_0080734c == '\0')) {
      uVar12 = 0x56;
    }
    uVar38 = this_00->field_01B5[0];
    this_00->field_0028 = uVar12;
    if (uVar38 != 0) {
      st::fn_006E6080(this_00,0x80000002,uVar38,(undefined4 *)&this_00->field_0x18);
    }
    if (this_00->field_01A4 == CASE_3) {
      pcVar2 = this_00->field_017C;
      ppcVar22 = local_1a88;
      for (iVar16 = 0x223; iVar16 != 0; iVar16 = iVar16 + -1) {
        *ppcVar22 = nullptr;
        ppcVar22 = ppcVar22 + 1;
      }
      local_1a88[0] = nullptr;
      local_1a7c = this_00->field_003C + 0x26;
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
      (*this_00->field_000C->vtable->CreateObject)
                ((SystemClassTy *)this_00->field_000C,6,this_00->field_01B5 + 1,nullptr,
                 local_1a88,1);
    }
    uVar40 = 0;
    uVar37 = 0;
    pcVar33 = nullptr;
    uVar32 = 0;
    uVar28 = 0;
    sVar26 = 0;
    uVar25 = 0xc0b1;
    uVar12 = 0xc0a1;
    if (this_00->field_01A4 == CASE_E) {
      pCVar13 = st::fn_0040577C("BUT_MEDIUM",0);
      local_4c = 0x5318f5;
      uVar38 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x78,0x7d,1,pCVar13,uVar12,uVar25,sVar26,
                                   uVar28,uVar32,pcVar33,uVar37,uVar40);
      this_00->field_01B5[2] = uVar38;
      st::fn_004017A8(this_00);
    }
    else {
      pCVar13 = st::fn_0040577C("BUT_MEDIUM",0);
      local_4c = 0x531882;
      uVar38 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x5d,0x7c,1,pCVar13,uVar12,uVar25,sVar26,
                                   uVar28,uVar32,pcVar33,uVar37,uVar40);
      uVar40 = 0;
      uVar37 = 0;
      pcVar33 = nullptr;
      uVar32 = 0;
      uVar28 = 0;
      sVar26 = 0;
      uVar25 = 0xc0b2;
      uVar12 = 0xc0a2;
      this_00->field_01B5[2] = uVar38;
      pCVar13 = st::fn_0040577C("BUT_MEDIUM",0);
      local_4c = 0x5318c2;
      uVar38 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x94,0x7c,1,pCVar13,uVar12,uVar25,sVar26,
                                   uVar28,uVar32,pcVar33,uVar37,uVar40);
      this_00->field_01B5[3] = uVar38;
      st::fn_00403FBC(this_00,this_00->field_01E1);
    }
    break;
  case CASE_5:
    uVar40 = 0;
    uVar37 = 0;
    pcVar33 = nullptr;
    uVar32 = 0;
    uVar28 = 0;
    sVar26 = 0;
    uVar25 = 0xc0af;
    uVar12 = 0xc09f;
    pCVar13 = st::fn_0040577C("BUT_MEDIUM",0);
    local_4c = 0x5306a8;
    uVar38 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x5e,0x7d,1,pCVar13,uVar12,uVar25,sVar26,
                                 uVar28,uVar32,pcVar33,uVar37,uVar40);
    uVar40 = 0;
    uVar37 = 0;
    pcVar33 = nullptr;
    uVar32 = 0;
    uVar28 = 0;
    sVar26 = 0;
    uVar25 = 0xc0b0;
    uVar12 = 0xc0a0;
    this_00->field_01B5[0] = uVar38;
    pCVar13 = st::fn_0040577C("BUT_MEDIUM",0);
    local_4c = 0x5306e8;
    uVar38 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x97,0x7d,1,pCVar13,uVar12,uVar25,sVar26,
                                 uVar28,uVar32,pcVar33,uVar37,uVar40);
    this_00->field_01B5[1] = uVar38;
    break;
  case CASE_6:
    iVar16 = 0xc09f;
    iVar35 = 0x16;
    do {
      uVar12 = 0;
      puVar36 = nullptr;
      pcVar33 = nullptr;
      uVar38 = 0;
      uVar28 = 0;
      bVar5 = '\x01' << ((char)iVar16 + 0x61U & 0x1f) & STPiece<1,1>(DAT_00807300);
      iVar7 = iVar16 + 0x10;
      pOVar27 = nullptr;
      iVar24 = iVar16;
      pCVar13 = st::fn_0040577C("BUT_BUTOPT",0);
      local_4c = 0x530c65;
      uVar12 = st::fn_0040398B((UPanelTy *)this_00,3,(-(uint)(bVar5 != 0) & 2) + 1,0x1d,iVar35,1
                                   ,pCVar13,iVar24,iVar7,(short)pOVar27,uVar28,uVar38,pcVar33,
                                   puVar36,uVar12);
      iVar16 = iVar16 + 1;
      iVar35 = iVar35 + 0x12;
      *puVar36 = uVar12;
    } while (pcVar33 != (char *)0x1);
    bVar5 = 5;
    do {
      piVar39 = (int *)0x1;
      uVar14 = 4;
      if (bVar5 != 5) {
        uVar14 = (uint)bVar5;
      }
      uVar9 = (bVar5 != 5) - 1 & 4;
      if (bVar5 == 5) {
        uVar38 = ((DAT_0080730e + 4000) * 0x1f) / 0xfa1;
      }
      else if (bVar5 == 6) {
        uVar38 = 0;
        if (g_sound == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = g_sndContext_0080765C->field_0050 & 1;
        }
        if (uVar10 == 0) {
          piVar39 = nullptr;
        }
        else {
          piVar39 = nullptr;
          local_264.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_264;
          local_EAX_4865 = st::fn_0072D7F0(local_264.jumpBuffer,0);
          if (local_EAX_4865 == 0) {
            if (g_sound == 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = g_sndContext_0080765C->field_0050 & 1;
            }
            if (uVar10 != 0) {
              piVar39 = &local_70;
              uVar9 = 0x530e3a;
              st::fn_006B7E00((int)g_sndContext_0080765C,1,&local_74,piVar39);
            }
            uVar10 = (uint)(local_74 + local_70) >> 1;
          }
          else {
            uVar10 = 0;
          }
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = g_sndContext_0080765C->field_0050 & 1;
          }
          g_currentExceptionFrame = local_264.previous;
          this_00 = pOVar27;
          if (uVar8 != 0) {
            iVar16 = g_sndContext_0080765C->field_0064;
            iVar35 = g_sndContext_0080765C->field_0060;
LAB_00530d9d:
            uVar38 = (iVar16 - iVar35) + 1;
            this_00 = pOVar27;
          }
LAB_00530da0:
          uVar38 = (uVar10 * 0x1f) / uVar38;
        }
      }
      else if (bVar5 == 7) {
        uVar38 = 0;
        if (g_sound == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = g_sndContext_0080765C->field_0038 & 1;
        }
        if (uVar10 != 0) {
          piVar39 = nullptr;
          local_154.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_154;
          local_EAX_4632 = st::fn_0072D7F0(local_154.jumpBuffer,0);
          if (local_EAX_4632 == 0) {
            if (g_sound == 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = g_sndContext_0080765C->field_0038 & 1;
            }
            if (uVar10 != 0) {
              piVar39 = &local_6c;
              uVar9 = 0x530d50;
              st::fn_006B7E00((int)g_sndContext_0080765C,0,&local_60,piVar39);
            }
            uVar10 = (uint)(local_60 + local_6c) >> 1;
          }
          else {
            uVar10 = 0;
          }
          if (g_sound == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = g_sndContext_0080765C->field_0038 & 1;
          }
          g_currentExceptionFrame = local_154.previous;
          this_00 = pOVar27;
          if (uVar8 != 0) {
            iVar16 = g_sndContext_0080765C->field_004C;
            iVar35 = g_sndContext_0080765C->field_0048;
            goto LAB_00530d9d;
          }
          goto LAB_00530da0;
        }
        piVar39 = nullptr;
      }
      uVar14 = uVar14 & 0xff;
      iVar16 = uVar9 + uVar14 * 0xd + 0x29;
      pOVar27 = (OptPanelTy *)0xf9;
      uVar9 = st::fn_00403EE0(this_00,0x6d,iVar16,0xf9,iVar16,uVar14 + 0xc09f,0x1f,uVar38,(int)piVar39);
      this_00->field_01B5[uVar14] = uVar9;
      st::fn_00405DF3(this_00,(char)iVar16 - 4,(byte)uVar38);
      bVar5 = bVar5 + 1;
    } while (bVar5 < 8);
    break;
  case CASE_7:
    if ((DAT_00807300 & 0xff) == 1) {
      bVar5 = 0;
    }
    else if ((DAT_00807300 & 0xff) == 2) {
      bVar5 = 2;
    }
    else {
      bVar5 = 1;
    }
    uVar38 = 0xc0af;
    pOVar27 = (OptPanelTy *)0xe9;
    uVar14 = st::fn_00402680((UPanelTy *)this_00,3,bVar5,0x1d,0x16,0xe9,0x11,0,0x12,0xc09f,
                                 0xc0af);
    this_00->field_01B5[0] = uVar14;
    bVar5 = 5;
    pSVar21 = g_sndContext_0080765C;
    do {
      pSVar31 = (SNDContext *)0x1;
      uVar14 = 4;
      if (bVar5 != 5) {
        uVar14 = (uint)bVar5;
      }
      uVar9 = (bVar5 != 5) - 1 & 4;
      if (bVar5 == 5) {
        if ((char)DAT_00807300 == '\x02') {
          if (g_sound == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = pSVar21->field_0080 & 1;
          }
          if (uVar10 == 0) {
            uVar38 = 0;
            pSVar31 = nullptr;
            goto cf_common_join_0053138B;
          }
        }
        if ((char)DAT_00807300 == '\x04') {
          if (g_sound == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = pSVar21->field_0068 & 1;
          }
          if (uVar10 != 0) goto LAB_005311d8;
switchD_005311ec_caseD_1:
          uVar38 = 0;
          pSVar31 = nullptr;
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
              uVar38 = 0;
            }
            else {
              uVar38 = g_sndContext_0080765C->field_0080 & 1;
            }
            if (uVar38 != 0) {
              uVar14 = 0x53124e;
              pSVar31 = g_sndContext_0080765C;
              st::fn_006B7E00((int)g_sndContext_0080765C,3,&local_4c,&local_50);
            }
            uVar10 = (uint)(local_50 + local_4c) >> 1;
          }
          else {
            uVar10 = 0;
          }
          if (g_sound == 0) {
            uVar38 = 0;
          }
          else {
            uVar38 = g_sndContext_0080765C->field_0080 & 1;
          }
          g_currentExceptionFrame = local_198.previous;
          if (uVar38 == 0) {
LAB_0053108d:
            uVar38 = 0;
            this_00 = pOVar27;
          }
          else {
            uVar38 = (g_sndContext_0080765C->field_0094 - g_sndContext_0080765C->field_0090) + 1;
            this_00 = pOVar27;
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
              uVar38 = 0;
            }
            else {
              uVar38 = g_sndContext_0080765C->field_0068 & 1;
            }
            if (uVar38 != 0) {
              uVar14 = 0x531309;
              pSVar31 = g_sndContext_0080765C;
              st::fn_006B7E00((int)g_sndContext_0080765C,2,&local_64,&local_5c);
            }
            uVar10 = (uint)(local_64 + local_5c) >> 1;
          }
          else {
            uVar10 = 0;
          }
          if (g_sound == 0) {
            uVar38 = 0;
          }
          else {
            uVar38 = g_sndContext_0080765C->field_0068 & 1;
          }
          g_currentExceptionFrame = local_1dc.previous;
          if (uVar38 == 0) goto LAB_0053108d;
          uVar38 = (g_sndContext_0080765C->field_007C - g_sndContext_0080765C->field_0078) + 1;
          this_00 = pOVar27;
          break;
        case 8:
          uVar38 = ((DAT_0080730a + 4000) * 0x1f) / 0xfa1;
          goto cf_common_join_0053138B;
        }
LAB_0053108f:
        uVar38 = (uVar10 * 0x1f) / uVar38;
      }
      else {
        if (bVar5 == 6) {
          uVar38 = 0;
          if (g_sound == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = pSVar21->field_0050 & 1;
          }
          if (uVar10 == 0) {
            pSVar31 = nullptr;
            goto cf_common_join_0053138B;
          }
          local_220.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_220;
          local_EAX_5605 = st::fn_0072D7F0(local_220.jumpBuffer,0);
          if (local_EAX_5605 == 0) {
            if (g_sound == 0) {
              uVar38 = 0;
            }
            else {
              uVar38 = g_sndContext_0080765C->field_0050 & 1;
            }
            if (uVar38 != 0) {
              uVar14 = 0x53111e;
              pSVar31 = g_sndContext_0080765C;
              st::fn_006B7E00
                        ((int)g_sndContext_0080765C,1,(undefined4 *)&stack0xffffffb8,&local_68);
            }
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            uVar10 = (uint)(local_68 + in_stack_ffffffb8) >> 1;
          }
          else {
            uVar10 = 0;
          }
          if (g_sound == 0) {
            uVar38 = 0;
          }
          else {
            uVar38 = g_sndContext_0080765C->field_0050 & 1;
          }
          g_currentExceptionFrame = local_220.previous;
          if (uVar38 != 0) {
            uVar38 = (g_sndContext_0080765C->field_0064 - g_sndContext_0080765C->field_0060) + 1;
            this_00 = pOVar27;
            goto LAB_0053108f;
          }
          goto LAB_0053108d;
        }
        if (bVar5 == 7) {
          uVar38 = 0;
          if (g_sound == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = pSVar21->field_0038 & 1;
          }
          if (uVar10 == 0) {
            pSVar31 = nullptr;
            goto cf_common_join_0053138B;
          }
          local_2a8.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_2a8;
          local_EAX_5376 = st::fn_0072D7F0(local_2a8.jumpBuffer,0);
          if (local_EAX_5376 == 0) {
            if (g_sound == 0) {
              uVar38 = 0;
            }
            else {
              uVar38 = g_sndContext_0080765C->field_0038 & 1;
            }
            if (uVar38 != 0) {
              uVar14 = 0x531039;
              pSVar31 = g_sndContext_0080765C;
              st::fn_006B7E00((int)g_sndContext_0080765C,0,&local_58,&local_54);
            }
            uVar10 = (uint)(local_58 + local_54) >> 1;
          }
          else {
            uVar10 = 0;
          }
          if (g_sound == 0) {
            uVar38 = 0;
          }
          else {
            uVar38 = g_sndContext_0080765C->field_0038 & 1;
          }
          g_currentExceptionFrame = local_2a8.previous;
          if (uVar38 == 0) goto LAB_0053108d;
          uVar38 = (g_sndContext_0080765C->field_004C - g_sndContext_0080765C->field_0048) + 1;
          this_00 = pOVar27;
          goto LAB_0053108f;
        }
      }
cf_common_join_0053138B:
      uVar14 = uVar14 & 0xff;
      iVar16 = uVar9 + uVar14 * 0xd + 0x29;
      pOVar27 = (OptPanelTy *)0xf9;
      uVar9 = st::fn_00403EE0(this_00,0x6d,iVar16,0xf9,iVar16,uVar14 + 0xc09f,0x1f,uVar38,(int)pSVar31);
      this_00->field_01B5[uVar14] = uVar9;
      st::fn_00405DF3(this_00,(char)iVar16 - 4,(byte)uVar38);
      pSVar21 = g_sndContext_0080765C;
switchD_005311ec_caseD_3:
      bVar5 = bVar5 + 1;
    } while (bVar5 < 8);
    break;
  case CASE_8:
    uVar38 = st::fn_00402680((UPanelTy *)this_00,3,3 - DAT_0080733b,0x1d,0x20,0x72,0x11,0,0x12,
                                 0xc09f,0xc0af);
    this_00->field_01B5[0] = uVar38;
    uVar38 = st::fn_00402680((UPanelTy *)this_00,3,2 - DAT_0080733a,0x99,0x20,0x72,0x11,0,0x12,
                                 0xc0a0,0xc0b0);
    this_00->field_01B5[1] = uVar38;
    uVar38 = st::fn_00402680((UPanelTy *)this_00,2,DAT_00807349,0x5d,0x68,0x72,0x11,0,0x12,
                                 0xc0a2,0xc0b2);
    this_00->field_01B5[3] = uVar38;
    break;
  case CASE_9:
    iVar16 = 0;
    iVar35 = 0x1b;
    do {
      if (iVar35 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00530aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)(&PTR_LAB_00531ce8)[iVar16])();
        return;
      }
      uVar25 = 0;
      puVar36 = nullptr;
      pcVar33 = nullptr;
      iVar24 = iVar16 + 0xc09f;
      uVar12 = 0;
      uVar28 = 0;
      sVar26 = 0;
      iVar7 = iVar16 + 0xc0af;
      pCVar13 = st::fn_0040577C("BUT_BUTOPT",0);
      local_4c = 0x530b3a;
      uVar12 = st::fn_0040398B((UPanelTy *)this_00,3,1,0x1d,iVar35,1,pCVar13,iVar24,iVar7,sVar26
                                   ,uVar28,uVar12,pcVar33,puVar36,uVar25);
      iVar35 = iVar35 + 0x12;
      *puVar36 = uVar12;
      iVar16 = iVar16 + 1;
    } while (pcVar33 != (char *)0x1);
    break;
  case CASE_B:
    uVar40 = 0;
    uVar37 = 0;
    pcVar33 = nullptr;
    uVar32 = 0;
    uVar28 = 0;
    sVar26 = 0;
    uVar25 = 0xc0b0;
    uVar12 = 0xc0a0;
    pCVar13 = st::fn_0040577C("BUT_MEDIUM",0);
    local_4c = 0x53072a;
    uVar38 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x7d,0x7d,1,pCVar13,uVar12,uVar25,sVar26,
                                 uVar28,uVar32,pcVar33,uVar37,uVar40);
    this_00->field_01B5[0] = uVar38;
    break;
  case CASE_C:
    iVar16 = this_00->field_003C;
    memset(local_11fc, 0, 0x878); /* compiler bulk-zero initialization */
    iVar35 = 0;
    local_11dc = iVar16 + 0x26;
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
    local_1140[2] = this_00->field_003C + 0xf2;
    if (this_00->field_005C == 0) {
      local_1140[3] = -this_00->field_0048;
    }
    else {
      local_1140[3] = this_00->field_0044;
    }
    local_1140[3] = local_1140[3] + 100;
    local_1130 = 0x11;
    local_112c = 0x24;
    local_1030 = 500;
    local_102c = 0x32;
    local_10dc = 2;
    local_10d8 = 0x8165;
    local_10e0 = local_11c4;
    local_101c = st::fn_0070AA70(g_cMf32_00806790,"BUT_MSLDN",0,1);
    local_1018 = st::fn_0070A6F0(g_cMf32_00806790,0x12,"BUT_MSLDN",1);
    iVar16 = this_00->field_005C;
    local_1038 = 1;
    local_1034 = 1;
    local_fc4 = 2;
    local_fc0[2] = this_00->field_003C + 0xf2;
    piVar39 = local_1140;
    piVar23 = local_fc0;
    memmove(piVar23, piVar39, 0x17c); /* compiler REP MOVS byte copy */
    if (iVar16 == 0) {
      local_fc0[3] = -this_00->field_0048;
    }
    else {
      local_fc0[3] = this_00->field_0044;
    }
    local_fc0[3] = local_fc0[3] + 0x1b;
    local_fb0 = 0x11;
    local_fac = 0x24;
    local_f58 = 0x8164;
    local_e9c = st::fn_0070AA70(g_cMf32_00806790,"BUT_MSLUP",0,1);
    local_e98 = st::fn_0070A6F0(g_cMf32_00806790,0x12,"BUT_MSLUP",1);
    local_990 = 1;
    local_994 = 1;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,8,this_00->field_01B5,nullptr,local_11fc,0);
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 1;
    st::fn_006E6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);
    break;
  case CASE_D:
    memset(local_cc, 0, 0x58); /* compiler bulk-zero initialization */
    iVar16 = 0;
    memset(local_1c48, 0, 0x1c0); /* compiler bulk-zero initialization */
    bVar5 = 0;
    iVar16 = 0;
    iVar35 = 0;
    puVar18 = local_1c48 + 1;
    do {
      if (iVar16 == 0) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffbc = 800;
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffc0 = 600;
      }
      else if (iVar16 == 1) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffbc = 0x400;
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffc0 = 0x300;
      }
      else if (iVar16 == 2) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffbc = 0x500;
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffc0 = 0x400;
      }
      bVar4 = 0;
      puVar18[-1] = iVar16 + 1;
      *puVar18 = 2;
      if (0 < *(int *)(DAT_0080877a + 4)) {
        uVar38 = 0;
        do {
          iVar7 = DAT_0080877a + uVar38 * 0xc;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          if (((*(int *)(iVar7 + 8) == in_stack_ffffffbc) &&
              (*(int *)(DAT_0080877a + (uVar38 * 3 + 3) * 4) == in_stack_ffffffc0)) &&
             (*(int *)(iVar7 + 0x10) == 8)) {
            *puVar18 = (uint)(DAT_00807348 == bVar5);
            break;
          }
          bVar4 = bVar4 + 1;
          uVar38 = (uint)bVar4;
        } while ((int)uVar38 < *(int *)(DAT_0080877a + 4));
      }
      puVar18[2] = this_00->field_003C + 0x1d;
      if (this_00->field_005C == 0) {
        iVar7 = -this_00->field_0048;
      }
      else {
        iVar7 = this_00->field_0044;
      }
      puVar18[3] = iVar35 + 0x13 + iVar7;
      puVar18[4] = 0x72;
      puVar18[5] = 0x11;
      bVar5 = bVar5 + 1;
      iVar16 = iVar16 + 1;
      iVar35 = iVar35 + 0x12;
      puVar18 = puVar18 + 0x1c;
    } while (bVar5 < 3);
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
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,5,this_00->field_01B5,nullptr,local_cc,0);
    uVar40 = 0;
    uVar37 = 0;
    pcVar33 = nullptr;
    uVar32 = 0;
    uVar28 = 0;
    sVar26 = 0;
    uVar25 = 0xc0b0;
    uVar12 = 0xc0a0;
    pCVar13 = st::fn_0040577C("BUT_BUTOPT",0);
    local_4c = 0x530992;
    uVar38 = st::fn_0040398B((UPanelTy *)this_00,1,0,0x1d,0x49,1,pCVar13,uVar12,uVar25,sVar26,
                                 uVar28,uVar32,pcVar33,uVar37,uVar40);
    uVar40 = 0;
    uVar37 = 0;
    pcVar33 = nullptr;
    uVar32 = 0;
    uVar28 = 0;
    sVar26 = 0;
    uVar25 = 0xc0b1;
    uVar12 = 0xc0a1;
    this_00->field_01B5[1] = uVar38;
    pCVar13 = st::fn_0040577C("BUT_BUTOPT",0);
    local_4c = 0x5309da;
    uVar38 = st::fn_0040398B((UPanelTy *)this_00,3,(-(uint)(DAT_00807342 != 0) & 2) + 1,0x1d,
                                 0x5b,1,pCVar13,uVar12,uVar25,sVar26,uVar28,uVar32,pcVar33,uVar37,
                                 uVar40);
    this_00->field_01B5[2] = uVar38;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar38 = st::fn_00403EE0(this_00,0x94,0x70,*(int *)(this_00->field_018C + 2) + 0xaf,0x70,0xc0a2,3,
                          DAT_00807346 / 5 - 1,1);
    puVar15 = this_00->field_018C;
    this_00->field_01B5[3] = uVar38;
    uVar38 = st::fn_00403EE0(this_00,0x94,0x82,*(int *)(puVar15 + 2) + 0xaf,0x82,0xc0a3,3,
                          (uint)DAT_00807347,1);
    this_00->field_01B5[4] = uVar38;
    this_00->field_0305 = DAT_00807348;
  }
  if ((this_00->field_01A4 == CASE_1) || (this_00->field_01A9 == '\0')) {
    *(undefined4 *)&this_00->field_0x2c = 0;
  }
  else {
    *(undefined4 *)&this_00->field_0x2c = 1;
  }
  uVar38 = this_00->field_01AD[1];
  this_00->field_0028 = 0x20;
  st::fn_006E6080(this_00,2,uVar38,(undefined4 *)&this_00->field_0x18);
  this_00->field_0028 = 5;
  uVar38 = 0;
  do {
    if (this_00->field_01AD[uVar38] != 0) {
      st::fn_006E6080(this_00,2,this_00->field_01AD[uVar38],(undefined4 *)&this_00->field_0x18);
    }
    bVar5 = (char)uVar38 + 1;
    uVar38 = (uint)bVar5;
  } while (bVar5 < 2);
  g_currentExceptionFrame = local_110.previous;
  return;
}

// 005325B0 OptPanelTy::PrepAsses
#line 4 "decomp/ST.exe/functions/005325B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  int local_EAX_67;
  int iVar5;
  cMf32 *pcVar5;
  OptPanelTy_field_02FDDArray *pOVar6;
  char *pcVar7_mg0;
  char *pcVar7_mg1;
  int iVar7;
  int iVar8;
  uint uVar8;
  OptPanelTy *pOVar10;
  char *pcVar11;
  uint *puVar12;
  char *pcVar13;
  byte *pbVar14;
  bool bVar15;
  char local_12c [108];
  undefined4 local_c0;
  InternalExceptionFrame local_94;
  InternalExceptionFrame local_50;
  uint local_c;
  OptPanelTy *local_8;

  this->field_0028 = 0x20;
  *(undefined4 *)&this->field_0x2c = 0;
  local_8 = this;
  st::fn_006E6080(this,2,this->field_01B5[0],(undefined4 *)&this->field_0x18);
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_EAX_67 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pOVar10 = local_8;
  if (local_EAX_67 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x3ad,0,local_EAX_67,
                               "%s","OptPanelTy::PrepAsses");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_67,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x3ad);
    return;
  }
  if (local_8->field_02FD != nullptr) {
    st::fn_006AE110((DArrayTy *)local_8->field_02FD);
  }
  pOVar10->field_02FD = nullptr;
  local_94.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_94;
  iVar5 = st::fn_0072D7F0(local_94.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_94.previous;
    pOVar6 = (OptPanelTy_field_02FDDArray *)
             st::fn_006AE290(nullptr,1,0x98,1);
    local_8->field_02FD = pOVar6;
    pOVar10 = local_8;
    goto LAB_00532758;
  }
  switch(_DAT_008087a0 & 0xff) {
  case 1:
  case 4:
  case 6:
  case 7:
  case 0xd:
  case 0xe:
  case 0x13:
    st::external_00000080((LPSTR)&DAT_0080f33a,"%s%s%s",&CHAR_00h_00807680,st_global_0079ACF0,
              PTR_s_STRATEGS_0079acfc);
    break;
  case 2:
  case 3:
  case 5:
  case 8:
  case 0xf:
    st::external_00000080((LPSTR)&DAT_0080f33a,"%s%s",&CHAR_00h_00807680,&CHAR_00h_0080ef1e);
  }
  pcVar5 = (cMf32 *)st::fn_006F0EC0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  pOVar10 = local_8;
  switch(_DAT_008087a0 & 0xff) {
  case 1:
  case 4:
  case 6:
  case 7:
  case 0xd:
  case 0xe:
  case 0x13:
    pOVar6 = (OptPanelTy_field_02FDDArray *)
             st::fn_00404255((int)pcVar5,(uint)DAT_0080874e,DAT_0080995c);
    break;
  case 2:
  case 3:
  case 5:
  case 8:
  case 0xf:
    pOVar6 = (OptPanelTy_field_02FDDArray *)
             st::fn_0040466A((int)pcVar5,(uint)DAT_0080874d,0xffffffff);
    break;
  default:
    goto switchD_005326e6_caseD_9;
  }
  pOVar10->field_02FD = pOVar6;
switchD_005326e6_caseD_9:
  st::fn_006F1170(pcVar5);
  g_currentExceptionFrame = local_94.previous;
LAB_00532758:
  if ((&stack0x00000000 != (undefined1 *)0x12c) &&
     (pcVar7_mg0 = st::fn_006B0140(0x2711,g_hINSTANCE_00807618), pcVar7_mg0 != nullptr)) {
    pcVar7_mg1 = st::fn_006B0140(0x2711,g_hINSTANCE_00807618);
    uVar8 = 0xffffffff;
    do {
      pcVar11 = pcVar7_mg1;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar11 = pcVar7_mg1 + 1;
      cVar2 = *pcVar7_mg1;
      pcVar7_mg1 = pcVar11;
    } while (cVar2 != '\0');
    uVar8 = ~uVar8;
    pcVar11 = pcVar11 + -uVar8;
    pcVar13 = local_12c;
    memmove(pcVar13, pcVar11, uVar8); /* compiler REP MOVS byte copy */
  }
  local_c0 = 1;
  st::fn_006B11D0(&pOVar10->field_02FD->flags,0,(undefined4 *)local_12c);
  pOVar10->field_0028 = 0x28;
  puVar1 = &pOVar10->field_0x18;
  *(dword *)&pOVar10->field_0x2c = pOVar10->field_02FD->count;
  st::fn_006E6080(pOVar10,2,pOVar10->field_01B5[0],(undefined4 *)puVar1);
  pOVar10->field_0028 = 0x20;
  *(undefined4 *)&pOVar10->field_0x2c = 1;
  st::fn_006E6080(pOVar10,2,pOVar10->field_01B5[0],(undefined4 *)puVar1);
  iVar7 = st::fn_0040522C((uint)DAT_0080874d,(char *)&DAT_0080f33a);
  if (iVar7 == 0) {
    pOVar10->field_0028 = 0x22;
    *(undefined4 *)&pOVar10->field_0x2c = 0;
    st::fn_006E6080(pOVar10,2,pOVar10->field_01B5[0],(undefined4 *)puVar1);
  }
  else {
    pOVar6 = pOVar10->field_02FD;
    local_c = 0;
    if (pOVar6->count != 0) {
      if (pOVar6->count == 0) {
        puVar12 = nullptr;
        goto LAB_00532855;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        puVar12 = (uint *)((int)&pOVar6->data->field_0000 + pOVar6->elementSize * local_c);
LAB_00532855:
        pbVar14 = (byte *)&DAT_0080f33a;
        do {
          bVar3 = (byte)*puVar12;
          bVar15 = bVar3 < *pbVar14;
          if (bVar3 != *pbVar14) {
LAB_0053287e:
            iVar7 = (1 - (uint)bVar15) - (uint)(bVar15 != 0);
            goto LAB_00532883;
          }
          if (bVar3 == 0) break;
          bVar3 = STField<byte>(puVar12,1);
          bVar15 = bVar3 < pbVar14[1];
          if (bVar3 != pbVar14[1]) goto LAB_0053287e;
          puVar12 = (uint *)((int)puVar12 + 2);
          pbVar14 = pbVar14 + 2;
        } while (bVar3 != 0);
        iVar7 = 0;
LAB_00532883:
        if (iVar7 == 0) {
          *(uint *)&pOVar10->field_0x2c = local_c;
          pOVar10->field_0028 = 0x22;
          st::fn_006E6080(pOVar10,2,pOVar10->field_01B5[0],(undefined4 *)&pOVar10->field_0x18);
        }
        pOVar6 = pOVar10->field_02FD;
        local_c = local_c + 1;
        if (pOVar6->count <= local_c) {
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
   and decompilation contains no value return */

void __thiscall st::fn_00532A80(OptPanelTy *this)

{
  undefined1 *puVar1;
  OptPanelTy *this_00;
  int iVar3;
  DArrayTy *pDVar4;
  char *pcVar5;
  uint *puVar6;
  int iVar7;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar7 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x3d1,0,iVar3,
                               "%s","OptPanelTy::PrepMissObj");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x3d1);
    return;
  }
  if ((DArrayTy *)local_8->field_02F9 != nullptr) {
    st::fn_006B5570((DArrayTy *)local_8->field_02F9);
  }
  pDVar4 = st::fn_006B54F0(nullptr,10,10);
  this_00->field_02F9 = &pDVar4->flags;
  iVar3 = 0;
  if (0 < (int)g_dArray_0080C4CB->elementSize) {
    if ((int)g_dArray_0080C4CB->elementSize < 1) {
      pcVar5 = nullptr;
      goto LAB_00532af5;
    }
    do {
      pcVar5 = *(char **)(g_dArray_0080C4CB->growCapacity + iVar3 * 4);
LAB_00532af5:
      st::fn_004015A0((DArrayTy *)this_00->field_02F9,pcVar5,"@- %s");
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)g_dArray_0080C4CB->elementSize);
  }
  puVar6 = st::fn_007126E0
                     (this_00->field_017C,(DArrayTy *)this_00->field_02F9," ,.;:!?/\\()[]{}",
                      (uint *)&DAT_007c21ec,200,0,0xffffffff,nullptr,1);
  if ((DArrayTy *)this_00->field_02F9 != nullptr) {
    st::fn_006B5570((DArrayTy *)this_00->field_02F9);
  }
  this_00->field_02F9 = puVar6;
  if (puVar6 == nullptr) {
    pDVar4 = st::fn_006B54F0(nullptr,10,10);
    this_00->field_02F9 = &pDVar4->flags;
  }
  puVar6 = this_00->field_02F9;
  if (puVar6[2] != 0) {
    st::fn_007129D0(this_00->field_017C,puVar6,puVar6);
  }
  if ((this_00->field_01A4 == CASE_C) && (this_00->field_01B5[0] != 0)) {
    puVar1 = &this_00->field_0x18;
    this_00->field_0028 = 0x28;
    *(undefined2 *)&this_00->field_0x2c = 1;
    *(short *)&this_00->field_0x2e = (short)this_00->field_02F9[2];
    st::fn_006E6080(this_00,2,this_00->field_01B5[0],(undefined4 *)puVar1);
    *(undefined2 *)&this_00->field_0x2e = 0;
    *(undefined2 *)&this_00->field_0x2c = 0;
    this_00->field_0028 = 0x22;
    st::fn_006E6080(this_00,2,this_00->field_01B5[0],(undefined4 *)puVar1);
    this_00->field_0028 = 0x20;
    *(undefined4 *)&this_00->field_0x2c = 1;
    st::fn_006E6080(this_00,2,this_00->field_01B5[0],(undefined4 *)puVar1);
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
   and decompilation contains no value return */

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
    iVar12 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x44f,0,local_EAX_75,
                                "%s","OptPanelTy::PrepFiles");
    if (iVar12 == 0) {
      st::fn_006A5E40(local_EAX_75,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x44f);
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
  this_01->field_01ED = pDVar5;
  this_01->field_0028 = 0x20;
  *(undefined4 *)&this_01->field_0x2c = 0;
  st::fn_006E6080(this_01,2,this_01->field_01B5[0],(undefined4 *)&this_01->field_0x18);
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
  pcVar12 = PTR_DAT_0079ad00;
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
  pcVar12 = st_global_0079ACF4;
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
  hFindFile = st::external_00000070(&this_01->field_006C,&local_1f4);
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
                                       (0x345,&local_10->field_006C,0,0,0);
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
              pcVar12 = PTR_DAT_0079ad00;
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
      BVar7 = st::external_00000071(hFindFile,&local_1f4);
    } while (BVar7 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    st::external_00000072(hFindFile);
  }
  uVar9 = this_01->field_01E9->elementSize;
  local_8 = uVar9;
  if (uVar9 == 0) {
    if (this_01->field_01A4 != CASE_3) goto LAB_0053325d;
    st::fn_006B6020(this_01->field_01F1,0,&CHAR_00h_008016a0);
    uVar10 = this_01->field_01B5[1];
    this_01->field_0028 = 0x33;
    *(DArrayTy **)&this_01->field_0x2c = this_01->field_01F1;
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
    *(uint *)&this_01->field_0x2c = uVar9;
    st::fn_006E6080(this_01,2,this_01->field_01B5[0],(undefined4 *)&this_01->field_0x18);
    this_01->field_0028 = 0x20;
    *(undefined4 *)&this_01->field_0x2c = 1;
    st::fn_006E6080(this_01,2,this_01->field_01B5[0],(undefined4 *)&this_01->field_0x18);
    this_01->field_0028 = 0x22;
    if (uVar9 <= param_1) {
      param_1 = uVar9 - 1;
    }
    uVar10 = this_01->field_01B5[0];
    *(uint *)&this_01->field_0x2c = param_1;
  }
  st::fn_006E6080(this_01,2,uVar10,(undefined4 *)&this_01->field_0x18);
LAB_0053325d:
  uVar10 = this_01->field_01B5[3];
  this_01->field_0028 = 0x20;
  *(uint *)&this_01->field_0x2c = (uint)(uVar9 != 0);
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
  undefined4 uVar7;
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
    iVar5 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x459,0,iVar4,
                               "%s","OptPanelTy::CheckFiles");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x459);
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
   OptPanelTy::Question */

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
    st::fn_00402851(local_8);
    st::fn_00405A42(this_00,-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x490,0,iVar2,"%s",
                             "OptPanelTy::Question");
  if (iVar3 == 0) {
    st::fn_006A5E40(iVar2,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x490);
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
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x4a6,0,errorCode,
                               "%s","OptPanelTy::Notification");
    if (iVar3 == 0) {
      st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x4a6);
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
  st::fn_00402851(local_8);
  OVar1 = this_00->field_0172;
  if ((OVar1 == CASE_2) || (OVar1 == CASE_4)) {
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
  undefined1 *puVar1;
  char cVar2;
  OptPanelTy_field_01A4State OVar4;
  ushort uVar5;
  STMessageId SVar6;
  OptPanelTy_field_02FDDArray *pOVar7;
  InternalExceptionFrame *pIVar8;
  undefined1 uVar9;
  int local_EAX_48;
  DWORD DVar10;
  uint uVar12;
  byte *puVar11;
  uint *puVar12;
  OptPanelTy_field_02FDElement *element_02fd;
  OptPanelTy_field_02FDElement *element_02fd_2;
  LPSTR pCVar13;
  int local_EAX_4707;
  int local_EAX_4896;
  int local_EAX_6893;
  cMf32 *pcVar14;
  byte *pbVar15;
  int local_EAX_8594;
  int local_EAX_8848;
  int local_EAX_9241;
  int iVar10;
  int iVar29;
  uint uVar16;
  OptPanelTy *this_00;
  int iVar17;
  uint uVar18;
  ushort *puVar19;
  byte *puVar20;
  char *pcVar21;
  char *pcVar22;
  bool bVar23;
  uint uVar24;
  char *pcVar25;
  undefined4 uVar26;
  byte bVar27;
  int iVar28;
  code *pcVar29;
  ccFntTy *pcVar30;
  int iVar31;
  UINT UVar32;
  code *pcVar33;
  ulong uVar34;
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
    iVar29 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x7f4,0,local_EAX_48,
                                "%s","OptPanelTy::GetMessage");
    if (iVar29 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_48,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x7f4);
    return 0xffff;
  }
  if (message->id == MESS_ID_CREATE) {
    st::fn_00403A3A(local_10);
  }
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
       ((uVar18 = *(uint *)((message->arg2).u32 + 4), uVar18 == 2 || ((3 < uVar18 && (uVar18 < 6))))
       )) {
      st::fn_00405E2F(0xae);
    }
  }
  SVar6 = message->id;
  if (SVar6 < 0xc007) {
    if (SVar6 == MESS_OPTPANELTY_C006) {
      pcVar33 = st::fn_00401E88;
      pCVar13 = st::fn_0040577C("BUT_MINUS",0);
      bVar27 = 1;
    }
    else {
      if (SVar6 < MESS_OPTPANELTY_8165) {
        if (SVar6 != MESS_OPTPANELTY_8164) {
          if (MESS_SHARED_8160 < SVar6) {
            if (SVar6 == MESS_SIDTY_8161) {
              puVar19 = this_00->field_01E5;
              uVar18 = *(uint *)(puVar19 + 10);
              if (uVar18 == 0) {
                uVar18 = ((uint)puVar19[7] * *(int *)(puVar19 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                         *(int *)(puVar19 + 4);
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
              puVar11 = (byte *)st::fn_006B4FA0((int *)puVar19);
              uVar9 = (undefined1)local_8;
              for (uVar16 = uVar18 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *puVar11 = CONCAT22(CONCAT11(uVar9,uVar9),CONCAT11(uVar9,uVar9));
                puVar11 = (byte *)(puVar11 + 1);
              }
              for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined1 *)puVar11 = uVar9;
                puVar11 = (byte *)((int)puVar11 + 1);
              }
              st::fn_00710A90(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
              if (this_00->field_01A4 == CASE_E) {
                pOVar7 = this_00->field_02FD;
                uVar18 = (uint)(message->arg0).words.low;
                if (uVar18 < pOVar7->count) {
                  element_02fd = DArrayAt<OptPanelTy_field_02FDElement>(pOVar7, uVar18);
                }
                else {
                  element_02fd = nullptr;
                }
                uVar18 = (uint)((message->arg0).words.high == 0);
              }
              else {
                uVar18 = (uint)(message->arg0).words.low;
                if ((int)uVar18 < (int)this_00->field_01E9->elementSize) {
                  puVar12 = *(uint **)(this_00->field_01E9->growCapacity + uVar18 * 4);
                  uVar18 = (uint)((message->arg0).words.high == 0);
                }
                else {
                  puVar12 = nullptr;
                  uVar18 = (uint)((message->arg0).words.high == 0);
                }
              }
              st::fn_007119C0(this_00->field_017C,(char *)puVar12,2,-1,uVar18);
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
                  pcVar25 = *(char **)(this_00->field_01E9->growCapacity + (message->arg0).i32 * 4);
                }
                else {
                  pcVar25 = nullptr;
                }
                st::fn_006B6020(this_00->field_01F1,0,pcVar25);
                uVar18 = this_00->field_01B5[1];
                this_00->field_0028 = 0x33;
                *(DArrayTy **)&this_00->field_0x2c = this_00->field_01F1;
                st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x18);
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              if (OVar4 == CASE_4) {
                puVar19 = this_00->field_01E5;
                uVar18 = *(uint *)(puVar19 + 10);
                if (uVar18 == 0) {
                  uVar18 = ((uint)puVar19[7] * *(int *)(puVar19 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                           *(int *)(puVar19 + 4);
                }
                local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
                puVar11 = (byte *)st::fn_006B4FA0((int *)puVar19);
                uVar9 = (undefined1)local_8;
                for (uVar16 = uVar18 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                  *puVar11 = CONCAT22(CONCAT11(uVar9,uVar9),CONCAT11(uVar9,uVar9));
                  puVar11 = (byte *)(puVar11 + 1);
                }
                for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *(undefined1 *)puVar11 = uVar9;
                  puVar11 = (byte *)((int)puVar11 + 1);
                }
                this_00->field_0028 = 0x26;
                st::fn_006E6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);
                st::fn_00710A90(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
                if (*(int *)&this_00->field_0x2c < (int)this_00->field_01E9->elementSize) {
                  pcVar25 = *(char **)(this_00->field_01E9->growCapacity +
                                      *(int *)&this_00->field_0x2c * 4);
                }
                else {
                  pcVar25 = nullptr;
                }
                st::fn_007119C0(this_00->field_017C,pcVar25,0,-1,0);
                puVar19 = this_00->field_01E5;
                st::fn_006B55F0
                          ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,
                           (byte *)puVar19,0,0,0,*(int *)(puVar19 + 2),*(int *)(puVar19 + 4));
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              if (OVar4 != CASE_E) {
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              puVar19 = this_00->field_01E5;
              uVar18 = *(uint *)(puVar19 + 10);
              if (uVar18 == 0) {
                uVar18 = ((uint)puVar19[7] * *(int *)(puVar19 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                         *(int *)(puVar19 + 4);
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
              puVar11 = (byte *)st::fn_006B4FA0((int *)puVar19);
              uVar9 = (undefined1)local_8;
              for (uVar16 = uVar18 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                *puVar11 = CONCAT22(CONCAT11(uVar9,uVar9),CONCAT11(uVar9,uVar9));
                puVar11 = (byte *)(puVar11 + 1);
              }
              for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
                *(undefined1 *)puVar11 = uVar9;
                puVar11 = (byte *)((int)puVar11 + 1);
              }
              st::fn_00710A90(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
              iVar17 = st::fn_0040522C((uint)DAT_0080874d,(char *)&DAT_0080f33a);
              uVar18 = 0;
              iVar31 = -1;
              iVar28 = 0;
              if (iVar17 == 0) {
                pcVar25 = st::fn_006B0140(0x2711,g_hINSTANCE_00807618);
              }
              else {
                pcVar25 = (char *)&DAT_0080f33a;
              }
              st::fn_007119C0(this_00->field_017C,pcVar25,iVar28,iVar31,uVar18);
              puVar19 = this_00->field_01E5;
              st::fn_006B55F0
                        ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,
                         (byte *)puVar19,0,0,0,*(int *)(puVar19 + 2),*(int *)(puVar19 + 4));
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
            pcVar30 = this_00->field_017C;
            if (pcVar30->field_00A0 != 0) {
              st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar30);
            }
            local_8 = *(uint *)&pcVar30->field_0x8a;
            st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1a,0xca,0x6f,
                         (DAT_0080874e != '\x03') - 1U & 0x73);
            uVar16 = (uint)(message->arg0).words.high;
            uVar18 = uVar16;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((int)uVar16 < (int)(*(int *)(local_18 + 0x1e0) + uVar16)) {
              do {
                if ((int)uVar18 < (int)this_00->field_02F9[2]) {
                  local_1c = *(char **)(this_00->field_02F9[5] + uVar18 * 4);
                }
                else {
                  local_1c = nullptr;
                }
                if (local_1c != nullptr) {
                  st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x26,
                                   (uVar18 - uVar16) * local_8 + 0x1b,0xca,local_8);
                  st::fn_007119C0(this_00->field_017C,local_1c,0,-1,0);
                }
                uVar16 = (uint)(message->arg0).words.high;
                uVar18 = uVar18 + 1;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              } while ((int)uVar18 < (int)(*(int *)(local_18 + 0x1e0) + uVar16));
            }
            st::fn_006B3640
                      ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,
                       this_00->field_003C,this_00->field_0044);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (SVar6 == MESS_SHARED_0003) {
            st::fn_00403887(this_00);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (SVar6 != MESS_ID_NONE) {
            if (SVar6 != MESS_ID_CREATE) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            st::fn_004058E9(this_00);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          temp_5fc7a8e9f1 = this_00->field_01A4;
          if ((2 < temp_5fc7a8e9f1) &&
             ((((temp_5fc7a8e9f1 < 5 || (temp_5fc7a8e9f1 == 7)) &&
               (this_00->field_01DD != (HANDLE)0x0)) &&
              (DVar10 = st::external_0000006D(this_00->field_01DD,0), DVar10 == 0)))) {
            st::external_0000006E(this_00->field_01DD);
            if (this_00->field_01A4 != CASE_7) {
              st::fn_00403FBC(this_00,this_00->field_01E1);
            }
            this_00->field_0028 = 5;
            puVar12 = this_00->field_01B5;
            iVar17 = 10;
            do {
              if (*puVar12 != 0) {
                st::fn_006E6080(this_00,2,*puVar12,(undefined4 *)&this_00->field_0x18);
              }
              puVar12 = puVar12 + 1;
              iVar17 = iVar17 + -1;
            } while (iVar17 != 0);
          }
          if (this_00->field_0172 == CASE_3) {
            iVar17 = this_00->field_0050;
            if (this_00->field_0044 < iVar17) {
              this_00->field_0044 = this_00->field_0044 + 0x1e;
            }
            if (iVar17 <= this_00->field_0044) {
              this_00->field_0044 = iVar17;
              this_00->field_0172 = CASE_1;
              st::fn_00405A1A(this_00,1);
            }
            uVar18 = this_00->field_0044;
            uVar16 = this_00->field_003C;
            uVar24 = this_00->field_0060;
          }
          else {
            if (this_00->field_0172 != CASE_4) goto LAB_00534016;
            iVar17 = this_00->field_0050 - this_00->field_0048;
            if (iVar17 < this_00->field_0044) {
              this_00->field_0044 = this_00->field_0044 + -0x1e;
            }
            if (this_00->field_0044 <= iVar17) {
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
                st::fn_00402851(this_00);
                this_00->field_01A0 = 0;
              }
              if (this_00->field_019C != 0) {
                if ((this_00->field_01A4 == CASE_5) && (this_00->field_01AB == CASE_2)) {
                  _DAT_0080f32e = 1;
                  if (DAT_00808783 == '\x01') {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    _DAT_008087a0 = CONCAT31(_DAT_008087a1,9);
                  }
                  else if (DAT_00808783 == '\x02') {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    _DAT_008087a0 = CONCAT31(_DAT_008087a1,10);
                  }
                }
                memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
                this_00->field_0024 = 1;
                this_00->field_0028 = this_00->field_019C;
                if (this_00->field_019C == 0x610a) {
                  *(undefined4 *)&this_00->field_0x2c = 6;
                }
                st::fn_006E3B50(this_00->field_0010,(undefined4 *)&this_00->field_0x18);
                this_00->field_019C = 0;
              }
            }
            uVar18 = this_00->field_0044;
            uVar16 = this_00->field_003C;
            uVar24 = this_00->field_0060;
          }
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,uVar24,0xffffffff,uVar16,uVar18);
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
        pcVar25 = "BUT_SLUP";
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
            st::fn_00402851(this_00);
            g_currentExceptionFrame = local_8c.previous;
            return 0;
          }
          if (SVar6 != MESS_OPTPANELTY_C004) {
            if (SVar6 != MESS_SHARED_C005) {
              g_currentExceptionFrame = local_8c.previous;
              return 0;
            }
            pcVar33 = st::fn_00401E88;
            pCVar13 = st::fn_0040577C("BUT_PLUS",0);
            bVar27 = 1;
            goto LAB_00534654;
          }
          UVar32 = 0x274f;
          goto cf_common_exit_00536DB5;
        }
        if (SVar6 == MESS_OPTPANELTY_C002) {
          UVar32 = 0x274e;
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
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
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
          this_00->st::fn_004017F8(message);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (SVar6 != MESS_OPTPANELTY_8165) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        pcVar25 = "BUT_SLDN";
      }
      pcVar33 = st::fn_00401E88;
      pCVar13 = st::fn_0040577C(pcVar25,0);
      bVar27 = 6;
    }
LAB_00534654:
    st::fn_00403495((UPanelTy *)this_00,(AnonShape_0053D7A0_044B6141 *)message,bVar27,pCVar13,
                       pcVar33);
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
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar9 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar9;
      this_00->field_01A4 = CASE_7;
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_5:
      switch(this_00->field_01AB) {
      case CASE_1:
        goto switchD_00534835_caseD_1;
      case CASE_2:
        uVar18 = 0xffffffff;
        pcVar25 = &CHAR_00h_00807680;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = (char *)&DAT_0080ee1a;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar26_mg30 = st_global_0079ACEC;
        do {
          pcVar25 = pcVar26_mg30;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar25 = pcVar26_mg30 + 1;
          cVar2 = *pcVar26_mg30;
          pcVar26_mg30 = pcVar25;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar22 = (char *)&DAT_0080ee1a;
        do {
          pcVar21 = pcVar22;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar22 + 1;
          cVar2 = *pcVar22;
          pcVar22 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar25 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar25 = &CHAR_00h_00807ddd;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = (char *)&DAT_0080ee1a;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        st::fn_006B8280((char *)&DAT_0080ee1a,(char *)&DAT_0080ee1a);
        uVar18 = 0xffffffff;
        pcVar25 = PTR_DAT_0079ad00;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = (char *)&DAT_0080ee1a;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar25 = &this_00->field_0x1f5;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = (char *)&DAT_0080ee1a;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        st::fn_00405A42(this_00,-1);
        this_00->field_019C = 0x6100;
        DAT_0080879c = 1;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case CASE_3:
        st::external_00000080((LPSTR)&DAT_0080ee1a,"%s%s",&CHAR_00h_00807680,&CHAR_00h_0080ef1e);
        st::fn_00405A42(this_00,-1);
        uVar18 = 0xffffffff;
        this_00->field_019C = 0x6100;
        pcVar25 = (char *)&DAT_0080ee1a;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = &CHAR_00h_0080ed16;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        st::fn_00404B4C((STAppC *)&DAT_00807620,0);
        puVar11 = (byte *)(&DAT_0080a14f);
        puVar20 = (byte *)(&DAT_008087b6);
        memmove(puVar20, puVar11, 0x1999); /* compiler REP MOVS byte copy */
        iVar17 = 0;
        puVar11 = (byte *)&DAT_0080baec;
        puVar20 = (byte *)(&DAT_0080e43b);
        memmove(puVar20, puVar11, 0x400); /* compiler REP MOVS byte copy */
        iVar17 = 0;
        if (DAT_0080ed12 != nullptr) {
          st::fn_006AB060(&DAT_0080ed12);
        }
        DAT_0080ed12 = st::fn_006AAC70(0x8db);
        puVar11 = (byte *)(&DAT_0080bae8);
        puVar20 = (byte *)(DAT_0080ed12);
        memmove(puVar20, puVar11, 0x8db); /* compiler REP MOVS byte copy */
        DAT_0080879c = 0;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case CASE_4:
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
          uVar34 = (g_playSystem_00802A38->field_00E4 - g_playSystem_00802A38->field_0034 < 6000) +
                   2;
          goto LAB_00535271;
        }
        goto LAB_0053526f;
      case CASE_5:
        st::fn_00405A42(this_00,-1);
        this_00->field_019C = 0x7102;
        if (DAT_00808783 == '\x03') {
          DAT_0080c50a = 1;
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        break;
      case CASE_6:
        uVar18 = 0xffffffff;
        pcVar25 = &CHAR_00h_00807680;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = &this_00->field_006C;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar26_mgC = st_global_0079ACEC;
        do {
          pcVar25 = pcVar26_mgC;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar25 = pcVar26_mgC + 1;
          cVar2 = *pcVar26_mgC;
          pcVar26_mgC = pcVar25;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar22 = &this_00->field_006C;
        do {
          pcVar21 = pcVar22;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar22 + 1;
          cVar2 = *pcVar22;
          pcVar22 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar25 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar25 = &CHAR_00h_00807ddd;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = &this_00->field_006C;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        st::fn_006B8280(&this_00->field_006C,&this_00->field_006C);
        uVar18 = 0xffffffff;
        pcVar25 = PTR_DAT_0079ad00;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = &this_00->field_006C;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar25 = &this_00->field_0x1f5;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = &this_00->field_006C;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar25 = st_global_0079ACF4;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = &this_00->field_006C;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        st::external_0000006F(&this_00->field_006C);
        uVar18 = 0xffffffff;
        pcVar25 = &CHAR_00h_00807680;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = &this_00->field_006C;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar26_mg1D = st_global_0079ACEC;
        do {
          pcVar25 = pcVar26_mg1D;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar25 = pcVar26_mg1D + 1;
          cVar2 = *pcVar26_mg1D;
          pcVar26_mg1D = pcVar25;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar22 = &this_00->field_006C;
        do {
          pcVar21 = pcVar22;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar22 + 1;
          cVar2 = *pcVar22;
          pcVar22 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar25 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar25 = &CHAR_00h_00807ddd;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = &this_00->field_006C;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        st::fn_006B8280(&this_00->field_006C,&this_00->field_006C);
        uVar18 = 0xffffffff;
        pcVar25 = PTR_DAT_0079ad00;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = &this_00->field_006C;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar25 = &this_00->field_0x1f5;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = &this_00->field_006C;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        uVar16 = 0;
        uVar18 = 0xffffffff;
        pcVar25 = st_global_0079ACF8;
        do {
          pcVar22 = pcVar25;
          if (uVar18 == 0) break;
          uVar18 = uVar18 - 1;
          pcVar22 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar22;
        } while (cVar2 != '\0');
        uVar18 = ~uVar18;
        iVar17 = -1;
        pcVar25 = &this_00->field_006C;
        do {
          pcVar21 = pcVar25;
          if (iVar17 == 0) break;
          iVar17 = iVar17 + -1;
          pcVar21 = pcVar25 + 1;
          cVar2 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar2 != '\0');
        pcVar25 = pcVar22 + -uVar18;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
        st::external_0000006F(&this_00->field_006C);
        OVar4 = this_00->field_01A9;
        this_00->field_01A9 = this_00->field_01AA;
        this_00->field_01A4 = OVar4;
        st::fn_00402851(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case CASE_7:
        this_00->field_0028 = 0x44ff;
        g_playSystem_00802A38->st::fn_004017F8((int)&this_00->field_0x18);
        this_00->field_0028 = 0xc001;
        this_00->field_0034 = 0;
        this_00->st::fn_004017F8((STMessage *)&this_00->field_0x18);
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
      iVar17 = *(int *)(message->arg0).ptr;
      if (iVar17 == 1) {
        STPiece<0,1>(DAT_00807300) = '\x01';
      }
      else if (iVar17 == 2) {
        STPiece<0,1>(DAT_00807300) = '\b';
      }
      else if (iVar17 == 3) {
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
            uVar18 = 0;
          }
          else {
            uVar18 = g_sndContext_0080765C->field_0080 & 1;
          }
          if (uVar18 != 0) {
            st::fn_006B7E00((int)g_sndContext_0080765C,3,local_3c + 3,&local_28);
          }
          uVar18 = local_3c[3] + local_28 >> 1;
        }
        else {
          uVar18 = 0;
        }
        if (g_sound == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = g_sndContext_0080765C->field_0080 & 1;
        }
        g_currentExceptionFrame = local_d0.previous;
        if (uVar16 == 0) {
LAB_005350ba:
          uVar16 = 0;
        }
        else {
          uVar16 = (g_sndContext_0080765C->field_0094 - g_sndContext_0080765C->field_0090) + 1;
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
            uVar18 = 0;
          }
          else {
            uVar18 = g_sndContext_0080765C->field_0068 & 1;
          }
          if (uVar18 != 0) {
            st::fn_006B7E00((int)g_sndContext_0080765C,2,&local_24,&local_2c);
          }
          uVar18 = local_24 + local_2c >> 1;
        }
        else {
          uVar18 = 0;
        }
        if (g_sound == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = g_sndContext_0080765C->field_0068 & 1;
        }
        g_currentExceptionFrame = local_224.previous;
        if (uVar16 == 0) goto LAB_005350ba;
        uVar16 = (g_sndContext_0080765C->field_007C - g_sndContext_0080765C->field_0078) + 1;
LAB_005350bc:
        local_c = (cMf32 *)((uVar18 * 0x1f) / uVar16);
        this_00 = local_10;
        break;
      case '\b':
        local_c = (cMf32 *)(((DAT_0080730a + 4000) * 0x1f) / 0xfa1);
      }
      pcVar14 = local_c;
      st::fn_00405DF3(this_00,0,(byte)local_c);
      uVar18 = this_00->field_01B5[4];
      this_00->field_0028 = 0x22;
      *(cMf32 **)&this_00->field_0x2c = pcVar14;
      st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x18);
      this_00->field_0028 = 0x20;
      uVar18 = this_00->field_01B5[4];
      *(uint *)&this_00->field_0x2c = (uint)((char)DAT_00807300 != '\x01');
      st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x18);
      st::fn_00404552(&DAT_00807620,HWND_00856d78);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_8:
      DAT_0080733b = 4 - *(char *)(message->arg0).ptr;
      if (DAT_0080877e == '\0') {
        iVar17 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar17 + 0x14);
      }
      else {
        iVar17 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar17 + 8);
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
                   *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar17 + 0x10),
                   *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar17 + 4));
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_9:
      DAT_0080731a = (uint)(DAT_0080731a == 0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      uVar18 = this_00->field_01B5[1];
      this_00->field_0305 = *(char *)(message->arg0).ptr + -1;
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 1;
      st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x18);
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
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      this_00->field_01AA = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01A4 = CASE_6;
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_3:
switchD_00535190_caseD_3:
      this_00->field_0028 = 0xc0a1;
      this_00->field_0034 = 0;
      this_00->st::fn_004017F8((STMessage *)&this_00->field_0x18);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
    case CASE_B:
      if (this_00->field_01A9 != 0) {
        this_00->field_01A4 = this_00->field_01A9;
        this_00->field_01A9 = this_00->field_01AA;
        st::fn_00402851(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (OVar4 == CASE_5) {
        this_00->field_01A4 = CASE_1;
        st::fn_00402851(this_00);
        st::fn_00405A42(this_00,-1);
        if (this_00->field_01AB != CASE_7) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        DAT_00808788 = 0;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
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
      st::fn_00405A42(this_00,-1);
      this_00->field_019C = 0x6107;
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
LAB_0053526f:
    uVar34 = 4;
LAB_00535271:
    st::external_00000106((CFsgsConnection *)&DAT_00802a90,uVar34);
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
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar9 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar9;
      this_00->field_01A4 = CASE_8;
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_3:
      uVar18 = this_00->field_01B5[1];
      this_00->field_0028 = 0x32;
      st::fn_006E6080(this_00,2,uVar18,(undefined4 *)&this_00->field_0x18);
      if ((int)this_00->field_01F1->elementSize < 1) {
        pcVar25 = nullptr;
      }
      else {
        pcVar25 = *(char **)this_00->field_01F1->growCapacity;
      }
      uVar18 = 0xffffffff;
      do {
        pcVar22 = pcVar25;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar22 = pcVar25 + 1;
        cVar2 = *pcVar25;
        pcVar25 = pcVar22;
      } while (cVar2 != '\0');
      uVar18 = ~uVar18;
      puVar1 = &this_00->field_0x1f5;
      pcVar25 = pcVar22 + -uVar18;
      pcVar22 = puVar1;
      memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
      pcVar25 = &CHAR_00h_008016a0;
      pbVar15 = puVar1;
      do {
        bVar27 = *pbVar15;
        bVar23 = bVar27 < (byte)*pcVar25;
        if (bVar27 != *pcVar25) {
LAB_0053556a:
          iVar17 = (1 - (uint)bVar23) - (uint)(bVar23 != 0);
          goto LAB_0053556f;
        }
        if (bVar27 == 0) break;
        bVar27 = pbVar15[1];
        bVar23 = bVar27 < (byte)pcVar25[1];
        if (bVar27 != pcVar25[1]) goto LAB_0053556a;
        pbVar15 = pbVar15 + 2;
        pcVar25 = pcVar25 + 2;
      } while (bVar27 != 0);
      iVar17 = 0;
LAB_0053556f:
      if (iVar17 == 0) {
        this_00->field_01A5 = 0x3f4b;
        this_00->field_01AA = this_00->field_01A9;
        this_00->field_01A9 = this_00->field_01A4;
        this_00->field_01A4 = CASE_B;
        st::fn_00402851(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      iVar17 = st::fn_00402874(this_00,puVar1);
      if (iVar17 != 0) {
        this_00->field_01AA = this_00->field_01A9;
        this_00->field_01A5 = 0x3f49;
        this_00->field_01A9 = this_00->field_01A4;
        this_00->field_01A4 = CASE_5;
        this_00->field_01AB = CASE_1;
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
      if (*(int *)&this_00->field_0x2c < (int)this_00->field_01E9->elementSize) {
        pcVar25 = *(char **)(this_00->field_01E9->growCapacity + *(int *)&this_00->field_0x2c * 4);
      }
      else {
        pcVar25 = nullptr;
      }
      uVar18 = 0xffffffff;
      do {
        pcVar22 = pcVar25;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar22 = pcVar25 + 1;
        cVar2 = *pcVar25;
        pcVar25 = pcVar22;
      } while (cVar2 != '\0');
      uVar18 = ~uVar18;
      pcVar25 = pcVar22 + -uVar18;
      pcVar22 = &this_00->field_0x1f5;
      memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
      this_00->field_01E1 = *(undefined4 *)&this_00->field_0x2c;
      this_00->field_01A5 = 0x3f48;
      this_00->field_01AA = this_00->field_01A9;
      this_00->field_01A9 = this_00->field_01A4;
      this_00->field_01AB = CASE_2;
      this_00->field_01A4 = CASE_5;
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_6:
      STPiece<1,1>(DAT_00807300) = STPiece<1,1>(DAT_00807300) ^ 4;
      st::fn_0040510F(&g_sound,CASE_4);
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
      if (*(uint *)&this_00->field_0x2c < pOVar7->count) {
        element_02fd_2 = DArrayAt<OptPanelTy_field_02FDElement>(pOVar7, *(uint *)&this_00->field_0x2c);
      }
      else {
        element_02fd_2 = nullptr;
      }
      if (element_02fd_2->field_006C == 0) {
        switch(_DAT_008087a0 & 0xff) {
        case 1:
        case 4:
        case 6:
        case 7:
        case 0xd:
        case 0xe:
        case 0x13:
          st::external_00000080((LPSTR)&DAT_0080f33a,"%s%s%s",&CHAR_00h_00807680,st_global_0079ACF0
                    ,PTR_s_STRATEGS_0079acfc);
          break;
        case 2:
        case 3:
        case 5:
        case 8:
        case 0xf:
          st::external_00000080((LPSTR)&DAT_0080f33a,"%s%s",&CHAR_00h_00807680,&CHAR_00h_0080ef1e);
        }
        local_19c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_19c;
        local_EAX_6893 = st::fn_0072D7F0(local_19c.jumpBuffer,0);
        this_00 = local_10;
        pcVar14 = local_c;
        if (local_EAX_6893 == 0) {
          pcVar14 = (cMf32 *)st::fn_006F0EC0
                                       (0x345,(byte *)&DAT_0080f33a,0,0,0);
          pOVar7 = this_00->field_02FD;
          if (*(uint *)&this_00->field_0x2c < pOVar7->count) {
            element_02fd_2 = DArrayAt<OptPanelTy_field_02FDElement>(pOVar7, *(uint *)&this_00->field_0x2c);
          }
          else {
            element_02fd_2 = nullptr;
          }
          local_c = pcVar14;
          local_20 = st::fn_004012AD((int)pcVar14,(char *)(element_02fd_2 + 0x13),(int *)&local_18);
          uVar18 = local_8;
          if (local_20 != nullptr) {
            local_14 = st::fn_006AAC10(local_18 + local_8 * 2);
            *(undefined1 *)local_14 = 1;
            pbVar15 = (byte *)((int)local_14 + uVar18);
            *pbVar15 = DAT_0080874d;
            puVar19 = local_20;
            pbVar15 = pbVar15 + uVar18;
            for (uVar16 = local_18 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
              *(undefined4 *)pbVar15 = *(undefined4 *)puVar19;
              puVar19 = puVar19 + 2;
              pbVar15 = pbVar15 + 4;
            }
            for (uVar18 = local_18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
              *pbVar15 = (byte)*puVar19;
              puVar19 = (ushort *)((int)puVar19 + 1);
              pbVar15 = pbVar15 + 1;
            }
            st::fn_00403C33((undefined4 *)0x32,local_14,1,local_18 + local_8 * 2);
            local_1c = (char *)0x1;
            pcVar14 = local_c;
          }
        }
        g_currentExceptionFrame = local_19c.previous;
        if (pcVar14 != nullptr) {
          st::fn_006F1170(pcVar14);
        }
        if (local_20 != nullptr) {
          st::fn_006AB060(&local_20);
        }
        if (local_14 != nullptr) {
          st::fn_006AB060(&local_14);
        }
      }
      else {
        local_14 = st::fn_006AAC10(2);
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
        this_00->st::fn_004017F8((STMessage *)&this_00->field_0x18);
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
        iVar17 = 0x3e84;
      }
      else {
        iVar17 = 0x3e96 - (uint)(g_playSystem_00802A38->field_00E4 -
                                 g_playSystem_00802A38->field_0034 < 6000);
      }
      this_00->field_01A9 = OVar4;
      this_00->field_01A5 = iVar17;
      this_00->field_01AB = CASE_4;
      this_00->field_01A4 = CASE_5;
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar9 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar9;
      this_00->field_01A4 = CASE_9;
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_3:
    case CASE_4:
      this_00->field_0028 = 0x26;
      st::fn_006E6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);
      if (*(int *)&this_00->field_0x2c < (int)this_00->field_01E9->elementSize) {
        pcVar25 = *(char **)(this_00->field_01E9->growCapacity + *(int *)&this_00->field_0x2c * 4);
      }
      else {
        pcVar25 = nullptr;
      }
      uVar18 = 0xffffffff;
      do {
        pcVar22 = pcVar25;
        if (uVar18 == 0) break;
        uVar18 = uVar18 - 1;
        pcVar22 = pcVar25 + 1;
        cVar2 = *pcVar25;
        pcVar25 = pcVar22;
      } while (cVar2 != '\0');
      uVar18 = ~uVar18;
      pcVar25 = pcVar22 + -uVar18;
      pcVar22 = &this_00->field_0x1f5;
      memmove(pcVar22, pcVar25, uVar18); /* compiler REP MOVS byte copy */
      this_00->field_01E1 = *(undefined4 *)&this_00->field_0x2c;
      this_00->field_01A5 = 0x3f4a;
      this_00->field_01AA = this_00->field_01A9;
      this_00->field_01A9 = this_00->field_01A4;
      this_00->field_01AB = CASE_6;
      this_00->field_01A4 = CASE_5;
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
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x6f,'\x01',
             (byte *)this_00->field_018C);
      st::external_00000080(&this_00->field_006C,"%d",(uint)(byte)DAT_00807346);
      st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0xaa,0x6f,
                       *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
      st::fn_00711B70(this_00->field_017C,&this_00->field_006C,-2,-1,0,-1,-1);
      if (g_popUp_008016D8 != nullptr) {
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
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_2:
      uVar9 = this_00->field_01A9;
      this_00->field_01A9 = OVar4;
      this_00->field_01AA = uVar9;
      this_00->field_01A4 = CASE_D;
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_6:
      DAT_0080730e = ((message->arg0).u32 * 4000) / 0x1e - 4000;
      st::fn_00405E9D(&g_sound,DAT_0080730e);
      st::fn_00405DF3(this_00,0,*(byte *)&message->arg0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_7:
      if ((char)DAT_00807300 == '\x02') {
        if (g_sound == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = g_sndContext_0080765C->field_0080 & 1;
        }
        if (uVar18 != 0) {
          if (g_sound == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = g_sndContext_0080765C->field_0080 & 1;
          }
          if (uVar18 == 0) {
            iVar17 = 0;
          }
          else {
            iVar17 = (g_sndContext_0080765C->field_0094 - g_sndContext_0080765C->field_0090) + 1;
          }
          local_8 = ((iVar17 + -1) * (message->arg0).u32) / 0x1e;
          STPiece<2,2>(DAT_00807300) = (undefined2)local_8;
          uRam00807304 = (undefined2)(local_8 >> 0x10);
          local_158.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_158;
          local_EAX_8848 = st::fn_0072D7F0(local_158.jumpBuffer,0);
          pIVar8 = local_158.previous;
          if (local_EAX_8848 == 0) {
            if (g_sound == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = g_sndContext_0080765C->field_0080 & 1;
            }
            if (uVar18 != 0) {
              st::fn_006B7F00((int)g_sndContext_0080765C,3,local_8,local_8);
            }
            g_currentExceptionFrame = local_158.previous;
            pIVar8 = g_currentExceptionFrame;
          }
LAB_00535ef1:
          g_currentExceptionFrame = pIVar8;
          st::fn_00405DF3(local_10,0,*(byte *)&message->arg0);
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
      }
      else if ((char)DAT_00807300 == '\x04') {
        if (g_sound == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = g_sndContext_0080765C->field_0068 & 1;
        }
        if (uVar18 != 0) {
          if (g_sound == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = g_sndContext_0080765C->field_0068 & 1;
          }
          if (uVar18 == 0) {
            iVar17 = 0;
          }
          else {
            iVar17 = (g_sndContext_0080765C->field_007C - g_sndContext_0080765C->field_0078) + 1;
          }
          _DAT_00807306 = ((iVar17 + -1) * (message->arg0).u32) / 0x1e;
          local_114.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_114;
          local_8 = _DAT_00807306;
          local_EAX_8594 = st::fn_0072D7F0(local_114.jumpBuffer,0);
          pIVar8 = local_114.previous;
          if (local_EAX_8594 == 0) {
            if (g_sound == 0) {
              uVar18 = 0;
            }
            else {
              uVar18 = g_sndContext_0080765C->field_0068 & 1;
            }
            if (uVar18 != 0) {
              st::fn_006B7F00((int)g_sndContext_0080765C,2,local_8,local_8);
            }
            g_currentExceptionFrame = local_114.previous;
            pIVar8 = g_currentExceptionFrame;
          }
          goto LAB_00535ef1;
        }
      }
      else if ((char)DAT_00807300 == '\b') {
        DAT_0080730a = ((message->arg0).u32 * 4000) / 0x1e - 4000;
        st::fn_0040171C(&g_sound,DAT_0080730a);
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
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x81,'\x01',
             (byte *)this_00->field_018C);
      st::external_00000080(&this_00->field_006C,"%d",DAT_00807347 + 1);
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
      st::fn_00402851(this_00);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if ((5 < temp_5fabcf5a4c) && (temp_5fabcf5a4c < 8)) {
      if (g_sound == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = g_sndContext_0080765C->field_0050 & 1;
      }
      if (uVar18 != 0) {
        if (g_sound == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = g_sndContext_0080765C->field_0050 & 1;
        }
        if (uVar18 == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = (g_sndContext_0080765C->field_0064 - g_sndContext_0080765C->field_0060) + 1;
        }
        _DAT_00807312 = ((iVar17 + -1) * (message->arg0).u32) / 0x1e;
        local_1e0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_1e0;
        local_8 = _DAT_00807312;
        local_EAX_9241 = st::fn_0072D7F0(local_1e0.jumpBuffer,0);
        if (local_EAX_9241 == 0) {
          if (g_sound == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = g_sndContext_0080765C->field_0050 & 1;
          }
          if (uVar18 != 0) {
            st::fn_006B7F00((int)g_sndContext_0080765C,1,local_8,local_8);
          }
        }
        g_currentExceptionFrame = local_1e0.previous;
        st::fn_00405DF3(local_10,2,*(byte *)&message->arg0);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
    }
    break;
  case MESS_BLDLABPANELTY_C0A4|MESS_ID_CREATE:
    if ((CASE_5 < this_00->field_01A4) && (this_00->field_01A4 < CASE_8)) {
      if (g_sound == 0) {
        uVar18 = 0;
      }
      else {
        uVar18 = g_sndContext_0080765C->field_0038 & 1;
      }
      if (uVar18 != 0) {
        if (g_sound == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = g_sndContext_0080765C->field_0038 & 1;
        }
        if (uVar18 == 0) {
          iVar17 = 0;
        }
        else {
          iVar17 = (g_sndContext_0080765C->field_004C - g_sndContext_0080765C->field_0048) + 1;
        }
        _DAT_00807316 = ((iVar17 + -1) * (message->arg0).u32) / 0x1e;
        local_268.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_268;
        local_8 = _DAT_00807316;
        iVar10 = st::fn_0072D7F0(local_268.jumpBuffer,0);
        if (iVar10 == 0) {
          if (g_sound == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = g_sndContext_0080765C->field_0038 & 1;
          }
          if (uVar18 != 0) {
            st::fn_006B7F00((int)g_sndContext_0080765C,0,local_8,local_8);
          }
        }
        g_currentExceptionFrame = local_268.previous;
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
        pcVar33 = st::fn_00404692;
        UVar32 = 0x3e81;
      }
      else {
        pcVar33 = st::fn_00404D95;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_004039D1;
        }
        UVar32 = 0x3e81;
      }
      goto cf_common_exit_00536F8B;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar30 = this_00->field_0180;
        pcVar33 = st::fn_00404692;
        UVar32 = 0x3e8b;
      }
      else {
        pcVar33 = st::fn_00404D95;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_004039D1;
        }
        pcVar30 = this_00->field_0180;
        UVar32 = 0x3e8b;
      }
      goto cf_common_exit_00536F92;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
      UVar32 = 0x273e;
      goto cf_common_exit_00536DB5;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = st::fn_00403FE9;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3efc;
      }
      else {
        pcVar33 = st::fn_0040146A;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_0040211C;
        }
        iVar17 = 0;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3efc;
      }
      break;
    case CASE_7:
      iVar17 = *(int *)(message->arg0).ptr;
      if (iVar17 == 1) {
        if (DAT_0080874e == '\x03') {
          iVar17 = 1;
          pcVar33 = st::fn_00405C7C;
          pcVar29 = st::fn_0040335A;
          UVar32 = 0x3ee7;
        }
        else {
          pcVar33 = st::fn_00402919;
          if (DAT_0080874e != '\x01') {
            pcVar33 = st::fn_00405B87;
          }
          iVar17 = 1;
          pcVar29 = st::fn_0040335A;
          UVar32 = 0x3ee7;
        }
      }
      else if (iVar17 == 2) {
        if (DAT_0080874e == '\x03') {
          iVar17 = 1;
          pcVar33 = st::fn_00405C7C;
          pcVar29 = st::fn_0040335A;
          UVar32 = 0x3ee5;
        }
        else {
          pcVar33 = st::fn_00402919;
          if (DAT_0080874e != '\x01') {
            pcVar33 = st::fn_00405B87;
          }
          iVar17 = 1;
          pcVar29 = st::fn_0040335A;
          UVar32 = 0x3ee5;
        }
      }
      else {
        if (iVar17 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          iVar17 = 1;
          pcVar33 = st::fn_00405C7C;
          pcVar29 = st::fn_0040335A;
          UVar32 = 0x3ee6;
        }
        else {
          pcVar33 = st::fn_00402919;
          if (DAT_0080874e != '\x01') {
            pcVar33 = st::fn_00405B87;
          }
          iVar17 = 1;
          pcVar29 = st::fn_0040335A;
          UVar32 = 0x3ee6;
        }
      }
      break;
    case CASE_8:
      iVar17 = *(int *)(message->arg0).ptr;
      if (iVar17 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar33 = st::fn_00405C7C;
        }
        else {
          pcVar33 = st::fn_00402919;
          if (DAT_0080874e != '\x01') {
            pcVar33 = st::fn_00405B87;
          }
        }
        iVar17 = 1;
        pcVar29 = st::fn_0040335A;
        UVar32 = 0x3ef1;
        pCVar13 = st::fn_0040577C("BUT_BUTOPT1",0);
        st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar13,UVar32,pcVar29,pcVar33,
                    iVar17);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar17 != 2) {
        if (iVar17 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar33 = st::fn_00405C7C;
        }
        else {
          pcVar33 = st::fn_00402919;
          if (DAT_0080874e != '\x01') {
            pcVar33 = st::fn_00405B87;
          }
        }
        iVar17 = 1;
        pcVar29 = st::fn_0040335A;
        UVar32 = 0x3ef2;
        pCVar13 = st::fn_0040577C("BUT_BUTOPT1",0);
        st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar13,UVar32,pcVar29,pcVar33,
                    iVar17);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        pcVar33 = st::fn_00405C7C;
      }
      else {
joined_r0x0053686a:
        pcVar33 = st::fn_00402919;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_00405B87;
        }
      }
LAB_00536434:
      UVar32 = 0x3ef0;
cf_common_exit_00536441:
      iVar17 = 1;
      pcVar29 = st::fn_0040335A;
      pCVar13 = st::fn_0040577C("BUT_BUTOPT1",0);
      st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar13,UVar32,pcVar29,pcVar33,
                  iVar17);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = st::fn_00403FE9;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3ef4;
      }
      else {
        pcVar33 = st::fn_0040146A;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_0040211C;
        }
        iVar17 = 0;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3ef4;
      }
      break;
    case CASE_D:
      iVar17 = *(int *)(message->arg0).ptr;
      if (iVar17 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar33 = st::fn_00405C7C;
        }
        else {
          pcVar33 = st::fn_00402919;
          if (DAT_0080874e != '\x01') {
            pcVar33 = st::fn_00405B87;
          }
        }
        iVar17 = 1;
        pcVar29 = st::fn_0040335A;
        UVar32 = 0x3e90;
        pCVar13 = st::fn_0040577C("BUT_BUTOPT1",0);
        st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar13,UVar32,pcVar29,pcVar33,
                    iVar17);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar17 == 2) {
        if (DAT_0080874e == '\x03') {
          pcVar33 = st::fn_00405C7C;
        }
        else {
          pcVar33 = st::fn_00402919;
          if (DAT_0080874e != '\x01') {
            pcVar33 = st::fn_00405B87;
          }
        }
        iVar17 = 1;
        pcVar29 = st::fn_0040335A;
        UVar32 = 0x3e91;
        pCVar13 = st::fn_0040577C("BUT_BUTOPT1",0);
        st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar13,UVar32,pcVar29,pcVar33,
                    iVar17);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar17 == 3) {
        if (DAT_0080874e == '\x03') {
          pcVar33 = st::fn_00405C7C;
        }
        else {
          pcVar33 = st::fn_00402919;
          if (DAT_0080874e != '\x01') {
            pcVar33 = st::fn_00405B87;
          }
        }
        iVar17 = 1;
        pcVar29 = st::fn_0040335A;
        UVar32 = 0x3e92;
        pCVar13 = st::fn_0040577C("BUT_BUTOPT1",0);
        st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar13,UVar32,pcVar29,pcVar33,
                    iVar17);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      goto cf_common_exit_00536FB7;
    }
cf_common_exit_00536EE8:
    uVar26 = 0;
    iVar28 = 1;
    pCVar13 = st::fn_0040577C("BUT_BUTOPT",0);
    pCVar13 = st::fn_006F2C00(pCVar13,iVar28,uVar26);
    st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar13,UVar32,pcVar29,pcVar33,iVar17
               );
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  case 0xc0b0:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar30 = this_00->field_0180;
        pcVar33 = st::fn_00404692;
        UVar32 = 0x3e82;
      }
      else {
        pcVar33 = st::fn_00404D95;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_004039D1;
        }
        pcVar30 = this_00->field_0180;
        UVar32 = 0x3e82;
      }
      break;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar33 = st::fn_00404692;
        UVar32 = 0x3e8a;
      }
      else {
        pcVar33 = st::fn_00404D95;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_004039D1;
        }
        UVar32 = 0x3e8a;
      }
      goto cf_common_exit_00536F8B;
    case CASE_3:
      puVar19 = this_00->field_01E5;
      uVar18 = *(uint *)(puVar19 + 10);
      if (uVar18 == 0) {
        uVar18 = ((uint)puVar19[7] * *(int *)(puVar19 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar19 + 4);
      }
      local_24 = (DAT_0080874e != '\x03') - 1 & 0x73;
      puVar11 = (byte *)st::fn_006B4FA0((int *)puVar19);
      uVar9 = (undefined1)local_24;
      for (uVar16 = uVar18 >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
        *puVar11 = CONCAT22(CONCAT11(uVar9,uVar9),CONCAT11(uVar9,uVar9));
        puVar11 = (byte *)(puVar11 + 1);
      }
      for (uVar18 = uVar18 & 3; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined1 *)puVar11 = uVar9;
        puVar11 = (byte *)((int)puVar11 + 1);
      }
      st::fn_00710A90(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
      st::fn_007119C0(this_00->field_017C,*(char **)(message->arg0).ptr,0,-1,0);
      uVar5 = (message->arg1).words.low;
      if ((uVar5 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
        uVar18 = (uint)(message->arg1).words.high;
        st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_01E5,0,(uint)uVar5,uVar18,
                     (uint)uVar5,uVar18 + 10,0x6c,0xd);
      }
      puVar19 = this_00->field_01E5;
      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,(byte *)puVar19,0,
                 0,0,*(int *)(puVar19 + 2),*(int *)(puVar19 + 4));
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
      UVar32 = 0x273f;
      goto cf_common_exit_00536DB5;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = st::fn_00403FE9;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3efd;
      }
      else {
        pcVar33 = st::fn_0040146A;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_0040211C;
        }
        iVar17 = 0;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3efd;
      }
      goto cf_common_exit_00536EE8;
    case CASE_8:
      iVar17 = *(int *)(message->arg0).ptr;
      if (iVar17 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar33 = st::fn_00405C7C;
          UVar32 = 0x3ef1;
        }
        else {
          pcVar33 = st::fn_00402919;
          if (DAT_0080874e != '\x01') {
            pcVar33 = st::fn_00405B87;
          }
          UVar32 = 0x3ef1;
        }
        goto cf_common_exit_00536441;
      }
      if (iVar17 != 2) {
        if (iVar17 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar33 = st::fn_00405C7C;
          UVar32 = 0x3ef2;
          goto cf_common_exit_00536441;
        }
        goto LAB_00536d52;
      }
      if (DAT_0080874e != '\x03') goto joined_r0x0053686a;
      pcVar33 = st::fn_00405C7C;
      goto LAB_00536434;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = st::fn_00403FE9;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3ef5;
      }
      else {
        pcVar33 = st::fn_0040146A;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_0040211C;
        }
        iVar17 = 0;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3ef5;
      }
      goto cf_common_exit_00536EE8;
    case CASE_B:
switchD_00536a2b_caseD_3:
      UVar32 = 0x2751;
cf_common_exit_00536DB5:
      pCVar13 = st::fn_0040577C("BUT_MEDIUM",0);
      st::fn_00403508((UPanelTy *)this_00,(AnonShape_0053DAF0_3BDC2979 *)message,pCVar13,UVar32);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      if (DAT_0080874e == '\x03') {
        pcVar30 = this_00->field_0180;
        pcVar33 = st::fn_00404692;
        UVar32 = 0x3e93;
      }
      else {
        pcVar33 = st::fn_00404D95;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_004039D1;
        }
        pcVar30 = this_00->field_0180;
        UVar32 = 0x3e93;
      }
    }
    goto cf_common_exit_00536F92;
  case MESS_BEHPANELTY_C0B1:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar30 = this_00->field_0180;
        pcVar33 = st::fn_00404692;
        UVar32 = 0x3e83;
      }
      else {
        pcVar33 = st::fn_00404D95;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_004039D1;
        }
        pcVar30 = this_00->field_0180;
        UVar32 = 0x3e83;
      }
      goto cf_common_exit_00536F92;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar33 = st::fn_00404692;
        UVar32 = 0x3e8c;
      }
      else {
        pcVar33 = st::fn_00404D95;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_004039D1;
        }
        UVar32 = 0x3e8c;
      }
      goto cf_common_exit_00536F8B;
    case CASE_3:
    case CASE_4:
      goto switchD_00536a2b_caseD_3;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = st::fn_00403FE9;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3efe;
      }
      else {
        pcVar33 = st::fn_0040146A;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_0040211C;
        }
        iVar17 = 0;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3efe;
      }
      break;
    case CASE_8:
      if (*(int *)(message->arg0).ptr == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar33 = st::fn_00405C7C;
          UVar32 = 0x3f02;
        }
        else {
          pcVar33 = st::fn_00402919;
          if (DAT_0080874e != '\x01') {
            pcVar33 = st::fn_00405B87;
          }
          UVar32 = 0x3f02;
        }
      }
      else {
        if (*(int *)(message->arg0).ptr != 2) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar33 = st::fn_00405C7C;
          UVar32 = 0x3f03;
        }
        else {
          pcVar33 = st::fn_00402919;
          if (DAT_0080874e != '\x01') {
            pcVar33 = st::fn_00405B87;
          }
          UVar32 = 0x3f03;
        }
      }
      goto cf_common_exit_00536441;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = st::fn_00403FE9;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3ef6;
      }
      else {
        pcVar33 = st::fn_0040146A;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_0040211C;
        }
        iVar17 = 0;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3ef6;
      }
      break;
    case CASE_D:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = st::fn_00403FE9;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3ef8;
      }
      else {
        pcVar33 = st::fn_0040146A;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_0040211C;
        }
        iVar17 = 0;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3ef8;
      }
      break;
    case CASE_E:
      UVar32 = 0x2752;
      goto cf_common_exit_00536DB5;
    }
    goto cf_common_exit_00536EE8;
  case 0xc0b2:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar33 = st::fn_00404692;
      }
      else {
        pcVar33 = st::fn_00404D95;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_004039D1;
        }
      }
      if (DAT_008067a0 == '\0') {
        UVar32 = 0x3e84;
      }
      else {
        UVar32 = 0x3e96 - (g_playSystem_00802A38->field_00E4 - g_playSystem_00802A38->field_0034 <
                          6000);
      }
      goto cf_common_exit_00536F8B;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar30 = this_00->field_0180;
        pcVar33 = st::fn_00404692;
        UVar32 = 0x3e8d;
      }
      else {
        pcVar33 = st::fn_00404D95;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_004039D1;
        }
        pcVar30 = this_00->field_0180;
        UVar32 = 0x3e8d;
      }
      goto cf_common_exit_00536F92;
    case CASE_3:
    case CASE_4:
      UVar32 = 0x2750;
      goto cf_common_exit_00536DB5;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = st::fn_00403FE9;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3eff;
      }
      else {
        pcVar33 = st::fn_0040146A;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_0040211C;
        }
        iVar17 = 0;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3eff;
      }
      break;
    case CASE_8:
      if (*(int *)(message->arg0).ptr != 1) {
        if (*(int *)(message->arg0).ptr != 2) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar33 = st::fn_00405C7C;
          UVar32 = 0x3f06;
        }
        else {
          pcVar33 = st::fn_00402919;
          if (DAT_0080874e != '\x01') {
            pcVar33 = st::fn_00405B87;
          }
          UVar32 = 0x3f06;
        }
        goto cf_common_exit_00536441;
      }
      if (DAT_0080874e == '\x03') {
        pcVar33 = st::fn_00405C7C;
        UVar32 = 0x3ef2;
        goto cf_common_exit_00536441;
      }
LAB_00536d52:
      pcVar33 = st::fn_00402919;
      if (DAT_0080874e != '\x01') {
        pcVar33 = st::fn_00405B87;
      }
      UVar32 = 0x3ef2;
      goto cf_common_exit_00536441;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar17 = 0;
        pcVar33 = st::fn_00403FE9;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3ef7;
      }
      else {
        pcVar33 = st::fn_0040146A;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_0040211C;
        }
        iVar17 = 0;
        pcVar29 = st::fn_0040235B;
        UVar32 = 0x3ef7;
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
          iVar17 = 0;
          pcVar33 = st::fn_00403FE9;
          pcVar29 = st::fn_0040235B;
          UVar32 = 0x3f04;
        }
        else {
          pcVar33 = st::fn_0040146A;
          if (DAT_0080874e != '\x01') {
            pcVar33 = st::fn_0040211C;
          }
          iVar17 = 0;
          pcVar29 = st::fn_0040235B;
          UVar32 = 0x3f04;
        }
        goto cf_common_exit_00536EE8;
      }
      if (DAT_0080874e == '\x03') {
        pcVar33 = st::fn_00404692;
        UVar32 = 0x3e8f;
      }
      else {
        pcVar33 = st::fn_00404D95;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_004039D1;
        }
        UVar32 = 0x3e8f;
      }
      goto cf_common_exit_00536F8B;
    }
    if (DAT_0080874e == '\x03') {
      pcVar30 = this_00->field_0180;
      pcVar33 = st::fn_00404692;
      UVar32 = 0x3e85;
    }
    else {
      pcVar33 = st::fn_00404D95;
      if (DAT_0080874e != '\x01') {
        pcVar33 = st::fn_004039D1;
      }
      pcVar30 = this_00->field_0180;
      UVar32 = 0x3e85;
    }
    goto cf_common_exit_00536F92;
  case MESS_RESEARCHPANELTY_C0B4:
    if (this_00->field_01A4 != CASE_1) {
      if (this_00->field_01A4 != CASE_9) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        pcVar33 = st::fn_00403FE9;
      }
      else {
        pcVar33 = st::fn_0040146A;
        if (DAT_0080874e != '\x01') {
          pcVar33 = st::fn_0040211C;
        }
      }
      iVar17 = 0;
      pcVar29 = st::fn_0040235B;
      UVar32 = 0x3f05;
      goto cf_common_exit_00536EE8;
    }
    if (DAT_0080874e == '\x03') {
      pcVar30 = this_00->field_0180;
      pcVar33 = st::fn_00404692;
      UVar32 = 0x3e86;
    }
    else {
      pcVar33 = st::fn_00404D95;
      if (DAT_0080874e != '\x01') {
        pcVar33 = st::fn_004039D1;
      }
      pcVar30 = this_00->field_0180;
      UVar32 = 0x3e86;
    }
    goto cf_common_exit_00536F92;
  case MESS_SHARED_C0B5:
    if (this_00->field_01A4 != CASE_1) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (DAT_0080874e == '\x03') {
      pcVar33 = st::fn_00404692;
    }
    else {
      pcVar33 = st::fn_00404D95;
      if (DAT_0080874e != '\x01') {
        pcVar33 = st::fn_004039D1;
      }
    }
    UVar32 = 0x3e87;
cf_common_exit_00536F8B:
    pcVar30 = this_00->field_0180;
cf_common_exit_00536F92:
    uVar26 = 0;
    iVar17 = 1;
    pCVar13 = st::fn_0040577C("BUT_BUTOPT",0);
    pCVar13 = st::fn_006F2C00(pCVar13,iVar17,uVar26);
    st::fn_00401EA1
              ((UPanelTy *)this_00,(AnonShape_0053D920_829E6B3B *)message,1,pCVar13,pcVar30,UVar32,
               pcVar33);
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
    st::fn_0040443A(local_8);
    if (g_helpPanel_00801690 != nullptr) {
      st::fn_00402D38(g_helpPanel_00801690,'\a');
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar2 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x800,0,errorCode,
                             "%s","OptPanelTy::UpdateObjectives");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x800);
  return;
}

