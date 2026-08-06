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
  ccFntTy *pcVar3;
  LPSTR pCVar4;
  ushort *puVar5;
  int uVar11;
  DArrayTy *pDVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  short sVar9;
  ushort uVar10;
  uint uVar12;
  byte bVar13;
  undefined4 uVar14;
  char *pcVar15;
  int *piVar16;
  int iVar17;
  undefined4 uVar18;
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
    pcVar3 = (ccFntTy *)st::fn_0070DF00(0x19d,g_interSystem_00802A28->field_0028);
    this_00->field_017C = pcVar3;
    pcVar3->field_0058 = 0;
    pcVar3->field_005C = 0;
    pcVar3 = (ccFntTy *)st::fn_0070DF00(0x19d,(ccFntTy *)g_interSystem_00802A28->field_002C);
    this_00->field_0180 = pcVar3;
    pcVar3->field_0058 = 1;
    pcVar3->field_005C = 0;
    iVar2 = 1;
    piVar16 = nullptr;
    pCVar4 = st::fn_0040577C("BKG_OPTIONS",0);
    puVar5 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar4,piVar16,iVar2);
    iVar2 = 1;
    piVar16 = nullptr;
    this_00->field_0184 = puVar5;
    this_00->field_0188 = 0;
    pCVar4 = st::fn_0040577C("BKG_OPT_NUM",0);
    puVar5 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar4,piVar16,iVar2);
    iVar2 = 1;
    piVar16 = nullptr;
    this_00->field_018C = puVar5;
    pCVar4 = st::fn_0040577C("BKG_OPT_SAVE",0);
    puVar5 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar4,piVar16,iVar2);
    iVar2 = 1;
    piVar16 = nullptr;
    this_00->field_0190 = puVar5;
    pCVar4 = st::fn_0040577C("BKG_OPT_MOBJ",0);
    puVar5 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar4,piVar16,iVar2);
    puVar19 = nullptr;
    iVar17 = 0;
    iVar2 = 1;
    bVar13 = 0;
    uVar12 = 0xffffffff;
    this_00->field_0194 = puVar5;
    pCVar4 = st::fn_0040577C("IND_PNT",0);
    puVar5 = st::fn_00709AF0
                       (PTR_00806794,CASE_B,pCVar4,uVar12,bVar13,iVar2,iVar17,puVar19);
    this_00->field_0198 = puVar5;
    puVar5 = this_00->field_0184 + 0x14;
    iVar2 = 1;
    uVar11 = st::fn_006B4FE0((int)this_00->field_0184);
    puVar5 = (ushort *)
             st::fn_006B50C0(0xde,0xb,(uint)this_00->field_0184[7],uVar11,(undefined4 *)puVar5,iVar2);
    this_00->field_01E5 = puVar5;
    pDVar6 = st::fn_006B54F0(nullptr,1,1);
    this_00->field_01F1 = pDVar6;
    st::fn_006B6020(pDVar6,0,&DAT_008016a0);
    st::fn_0040443A(this_00);
    st::fn_00402851(this_00);
    uVar20 = 0;
    uVar18 = 0;
    pcVar15 = nullptr;
    uVar14 = 0;
    uVar10 = 0;
    sVar9 = 0;
    uVar8 = 0xc002;
    uVar7 = 0xc001;
    pCVar4 = st::fn_0040577C("BUT_MEDIUM",0);
    uVar12 = st::fn_0040398B((UPanelTy *)this_00,0,1,0xc9,0x9f,1,pCVar4,uVar7,uVar8,sVar9,uVar10
                                 ,uVar14,pcVar15,uVar18,uVar20);
    uVar20 = 0;
    uVar18 = 0;
    pcVar15 = nullptr;
    uVar14 = 0;
    uVar10 = 0;
    sVar9 = 0;
    uVar8 = 0xc004;
    uVar7 = 0xc003;
    this_00->field_01AD[0] = uVar12;
    pCVar4 = st::fn_0040577C("BUT_MEDIUM",0);
    uVar12 = st::fn_0040398B((UPanelTy *)this_00,0,0,0x93,0x9f,1,pCVar4,uVar7,uVar8,sVar9,uVar10
                                 ,uVar14,pcVar15,uVar18,uVar20);
    uVar7 = this_00->field_0038;
    this_00->field_01AD[1] = uVar12;
    this_00->field_0301 = uVar7;
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
  ushort **ppuVar5;
  uint *puVar6;
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
    puVar6 = pOVar2->field_01B5;
    iVar3 = 10;
    do {
      if (*puVar6 != 0) {
        st::fn_006E56B0(pOVar2->field_000C,*puVar6);
      }
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar6 = pOVar2->field_01AD;
    iVar3 = 2;
    do {
      if (*puVar6 != 0) {
        st::fn_006E56B0(pOVar2->field_000C,*puVar6);
      }
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
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
    ppuVar5 = &pOVar2->field_0184;
    iVar3 = 5;
    do {
      if (*ppuVar5 != nullptr) {
        st::fn_006F20E0(g_cMf32_00806790,(uint *)ppuVar5);
      }
      ppuVar5 = ppuVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
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
  LPSTR pCVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
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
    iVar10 = 1;
    piVar9 = nullptr;
    uVar8 = 0;
    local_6c = param_6;
    local_84 = pOVar2->field_0008;
    local_68 = param_7;
    iVar3 = 1;
    local_42c[0] = (uint)(param_8 != 0);
    local_80 = 2;
    local_7c = param_5;
    local_2a8 = 2;
    local_42c[1] = 2;
    local_318 = 1;
    local_31c = 1;
    local_42c[3] = 2;
    local_42c[2] = local_42c[0];
    pCVar4 = st::fn_0040577C("BUT_MINUS",0);
    pCVar4 = st::fn_006F2C00(pCVar4,iVar3,uVar8);
    local_c = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar4,piVar9,iVar10);
    local_414 = *(undefined4 *)(local_c + 2);
    local_410 = *(undefined4 *)(local_c + 4);
    st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_c);
    iVar3 = pOVar2->field_003C;
    local_42c[4] = iVar3 + param_3;
    iVar10 = pOVar2->field_005C;
    if (iVar10 == 0) {
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
    local_2a4[2] = iVar3 + param_1;
    if (iVar10 == 0) {
      iVar3 = -pOVar2->field_0048;
    }
    else {
      iVar3 = pOVar2->field_0044;
    }
    local_2a4[3] = iVar3 + param_2;
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
  byte *pbVar5;
  int iVar6;
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
      iVar4 = 0x80;
      local_10 = (uint)param_2;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_8 = CONCAT31(uVar3,param_2);
      do {
        pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pOVar2->field_0198,6);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pOVar2->field_0068,iVar4,local_c,'\x01',pbVar5);
        iVar4 = iVar4 + 4;
        local_10 = local_10 - 1;
      } while (local_10 != 0);
    }
    if ((byte)local_8 < 0x1e) {
      local_c = local_14 + (uint)param_1 * 0xd + 0x5f;
      iVar6 = 0x1e - (local_8 & 0xff);
      iVar4 = (local_8 & 0xff) * 4 + 0x80;
      do {
        pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)pOVar2->field_0198,0);
        st::fn_00403229((RecoveredSourceFamily_dibcopy *)pOVar2->field_0068,iVar4,local_c,'\x01',pbVar5);
        iVar4 = iVar4 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
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
  undefined4 uVar4;
  LPSTR pCVar5;
  uint uVar6;
  uint *resourceString;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
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
      iVar3 = local_10->field_0004;
    }
    else {
      iVar3 = local_c->field_0010;
    }
    local_14 = iVar3 - this->field_0044;
  }
  if ((param_4 != nullptr) && (param_5 != nullptr)) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_1c = this;
    iVar3 = st::fn_0072D7F0(local_60.jumpBuffer,0);
    if (iVar3 == 0) {
      local_8 = st::fn_006F1CE0(g_cMf32_00806790,1,param_2,nullptr,1);
      uVar6 = local_14;
      iVar3 = local_18;
      pOVar2 = local_1c;
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_1c->field_0068,local_18,local_14,'\x01',
             (byte *)local_8);
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      iVar9 = 1;
      piVar8 = nullptr;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar4 = (*(code *)param_4)(param_1);
      iVar7 = 1;
      pCVar5 = st::fn_0040577C("BUT_SWITCH",0);
      pCVar5 = st::fn_006F2C00(pCVar5,iVar7,uVar4);
      local_8 = st::fn_006F1CE0(g_cMf32_00806790,1,pCVar5,piVar8,iVar9);
      if (param_6 == 0) {
        iVar7 = local_10->field_000C;
      }
      else {
        iVar7 = local_c->field_0018;
      }
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)pOVar2->field_0068,iVar3 + 5,
             (iVar7 - *(int *)(local_8 + 4)) / 2 + 1 + uVar6,'\x01',(byte *)local_8);
      iVar3 = *(int *)(local_8 + 2);
      st::fn_006F20E0(g_cMf32_00806790,(uint *)&local_8);
      if (param_6 == 0) {
        iVar7 = local_10->field_000C;
        iVar9 = local_10->field_0008;
      }
      else {
        iVar7 = local_c->field_0018;
        iVar9 = local_c->field_0014;
      }
      st::fn_00710A90(pOVar2->field_0180,pOVar2->field_0068,0,iVar3 + 10 + local_18,uVar6,
                       (iVar9 - iVar3) + -10,iVar7);
      iVar10 = -1;
      iVar9 = -1;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      uVar6 = (*(code *)param_5)(param_1);
      iVar7 = -1;
      iVar3 = 0;
      resourceString = (uint *)st::fn_006B0140(param_3,g_hINSTANCE_00807618);
      st::fn_00711B70(pOVar2->field_0180,resourceString,iVar3,iVar7,uVar6,iVar9,iVar10);
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
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
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
      iVar5 = 10;
      puVar6 = local_8->field_01B5;
      do {
        if (*puVar6 != 0) {
          st::fn_006E6080(this_00,2,*puVar6,(undefined4 *)&this_00->field_0x18);
        }
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      puVar6 = this_00->field_01AD;
      iVar5 = 2;
      do {
        if (*puVar6 != 0) {
          st::fn_006E6080(this_00,2,*puVar6,(undefined4 *)&this_00->field_0x18);
        }
        puVar6 = puVar6 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
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
  undefined1 *resourceString;
  char cVar1;
  ccFntTy *pcVar2;
  byte bVar4;
  byte bVar5;
  int iVar6;
  char *pcVar7;
  size_t _Count;
  char *pcVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  HANDLE pvVar14;
  undefined4 uVar15;
  LPSTR pCVar16;
  int iVar17;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  OptPanelTy *extraout_ECX;
  uint uVar18;
  ushort *puVar19;
  OptPanelTy *this_00;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  SNDContext *pSVar23;
  ccFntTy **ppcVar24;
  int *piVar25;
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
  int iVar26;
  undefined4 uVar27;
  short sVar28;
  OptPanelTy *pOVar29;
  ushort uVar30;
  UINT UVar31;
  RecoveredSourceFamily_dibcopy *pRVar32;
  SNDContext *pSVar33;
  undefined4 uVar34;
  size_t sVar35;
  undefined4 *puVar36;
  undefined4 uVar37;
  uint uVar38;
  int *piVar39;
  undefined4 uVar40;
  size_t sVar41;

  st::fn_0072DA40();
  local_110.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_110;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  this_00 = extraout_ECX;
  iVar6 = st::fn_0072D7F0(local_110.jumpBuffer,0);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_110.previous;
    iVar17 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x350,0,iVar6,
                                "%s");
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x350);
    return;
  }
  iVar6 = 10;
  puVar9 = this_00->field_01B5;
  do {
    if (*puVar9 != 0) {
      st::fn_006E56B0(this_00->field_000C,*puVar9);
    }
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0,'\x01',(byte *)this_00->field_0184
        );
  st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x31,2,0xc6,0xc);
  switch(this_00->field_01A4) {
  case CASE_1:
    uVar38 = 0;
    iVar6 = -2;
    UVar31 = 16000;
    break;
  case CASE_2:
    uVar38 = 0;
    iVar6 = -2;
    UVar31 = 0x3e87;
    break;
  case CASE_3:
    UVar31 = 0x3e81;
    goto LAB_00530592;
  case CASE_4:
    UVar31 = 0x3e82;
LAB_00530592:
    uVar38 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar9 = (uint *)st::fn_006B0140(UVar31,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    puVar19 = this_00->field_0190;
LAB_005305a9:
    pRVar32 = (RecoveredSourceFamily_dibcopy *)this_00->field_0068;
LAB_005305b4:
    st::fn_00403229(pRVar32,0x1d,0x13,'\x01',(byte *)puVar19);
    goto cf_common_join_005305BC;
  case CASE_5:
  case CASE_B:
    uVar38 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar9 = (uint *)st::fn_006B0140(0x3ea8,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    st::fn_00710A90(this_00->field_0180,this_00->field_0068,0,0x1d,0x13,0xee,0x6a);
    switch(this_00->field_01AB) {
    case CASE_1:
    case CASE_2:
    case CASE_6:
      pcVar8 = local_984;
      for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        pcVar8 = pcVar8 + 4;
      }
      iVar6 = st::fn_00711110(this_00->field_0180,&this_00->field_0x1f5);
      if (iVar6 < 0xee) {
LAB_0052fd4a:
        uVar38 = 0xffffffff;
        pcVar8 = &this_00->field_0x1f5;
        do {
          pcVar7 = pcVar8;
          if (uVar38 == 0) break;
          uVar38 = uVar38 - 1;
          pcVar7 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar7;
        } while (cVar1 != '\0');
        uVar38 = ~uVar38;
        pcVar8 = pcVar7 + -uVar38;
        pcVar7 = local_984;
        for (uVar18 = uVar38 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar7 = pcVar7 + 4;
        }
      }
      else {
        iVar6 = -1;
        pcVar8 = &this_00->field_0x1f5;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        pcVar8 = (char *)0xa;
        do {
          pcVar7 = local_984;
          pcVar8 = pcVar8 + 1;
          st::fn_0072E340(pcVar7,&this_00->field_0x1f5,(size_t)pcVar8);
          uVar38 = 0xffffffff;
          pcVar20 = &DAT_007c7278;
          do {
            pcVar22 = pcVar20;
            if (uVar38 == 0) break;
            uVar38 = uVar38 - 1;
            pcVar22 = pcVar20 + 1;
            cVar1 = *pcVar20;
            pcVar20 = pcVar22;
          } while (cVar1 != '\0');
          uVar38 = ~uVar38;
          iVar6 = -1;
          pcVar20 = local_984;
          do {
            pcVar21 = pcVar20;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar21 = pcVar20 + 1;
            cVar1 = *pcVar20;
            pcVar20 = pcVar21;
          } while (cVar1 != '\0');
          pcVar20 = pcVar22 + -uVar38;
          pcVar22 = pcVar21 + -1;
          for (uVar18 = uVar38 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar22 = *(undefined4 *)pcVar20;
            pcVar20 = pcVar20 + 4;
            pcVar22 = pcVar22 + 4;
          }
          pcVar21 = local_984;
          for (uVar38 = uVar38 & 3; uVar38 != 0; uVar38 = uVar38 - 1) {
            *pcVar22 = *pcVar20;
            pcVar20 = pcVar20 + 1;
            pcVar22 = pcVar22 + 1;
          }
          iVar6 = st::fn_00711110(this_00->field_0180,pcVar21);
        } while ((iVar6 < 0xee) && ((int)pcVar8 < (int)pcVar7));
        if (pcVar8 == pcVar7) goto LAB_0052fd4a;
        pcVar7 = local_984;
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          pcVar7 = pcVar7 + 4;
        }
        st::fn_0072E340(local_984,&this_00->field_0x1f5,(size_t)(pcVar8 + -3));
        uVar38 = 0xffffffff;
        pcVar8 = &DAT_007c7274;
        do {
          pcVar7 = pcVar8;
          if (uVar38 == 0) break;
          uVar38 = uVar38 - 1;
          pcVar7 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar7;
        } while (cVar1 != '\0');
        uVar38 = ~uVar38;
        iVar6 = -1;
        pcVar8 = local_984;
        do {
          pcVar20 = pcVar8;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar20 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar20;
        } while (cVar1 != '\0');
        pcVar8 = pcVar7 + -uVar38;
        pcVar7 = pcVar20 + -1;
        for (uVar18 = uVar38 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar7 = pcVar7 + 4;
        }
      }
      UVar31 = this_00->field_01A5;
      for (uVar38 = uVar38 & 3; uVar38 != 0; uVar38 = uVar38 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      pcVar8 = st::fn_006B0140(UVar31,g_hINSTANCE_00807618);
      st::external_00000080(&this_00->field_006C,pcVar8);
      break;
    default:
      pcVar8 = st::fn_006B0140(this_00->field_01A5,g_hINSTANCE_00807618);
      uVar38 = 0xffffffff;
      do {
        pcVar7 = pcVar8;
        if (uVar38 == 0) break;
        uVar38 = uVar38 - 1;
        pcVar7 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar7;
      } while (cVar1 != '\0');
      uVar38 = ~uVar38;
      pcVar8 = pcVar7 + -uVar38;
      pcVar7 = &this_00->field_006C;
      memmove(pcVar7, pcVar8, uVar38); /* compiler REP MOVS byte copy */
      uVar18 = 0;
      break;
    case CASE_7:
      pcVar8 = local_880;
      for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
        pcVar8[0] = '\0';
        pcVar8[1] = '\0';
        pcVar8[2] = '\0';
        pcVar8[3] = '\0';
        pcVar8 = pcVar8 + 4;
      }
      iVar6 = 0;
      pcVar8 = nullptr;
      if (DAT_00808aaf != 0) {
        pcVar7 = (char *)&DAT_00808ab0;
        do {
          pcVar8 = pcVar7;
          if (*(int *)(pcVar7 + 0x40) == g_playSystem_00802A38->field_00F4) break;
          iVar6 = iVar6 + 1;
          pcVar7 = pcVar7 + 0x9c;
          pcVar8 = nullptr;
        } while (iVar6 < (int)(uint)DAT_00808aaf);
      }
      if (pcVar8 == nullptr) {
        pcVar7 = &DAT_007c7274;
LAB_0052ff02:
        uVar38 = 0xffffffff;
        do {
          pcVar8 = pcVar7;
          if (uVar38 == 0) break;
          uVar38 = uVar38 - 1;
          pcVar8 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar8;
        } while (cVar1 != '\0');
        uVar38 = ~uVar38;
        pcVar8 = pcVar8 + -uVar38;
        pcVar7 = local_880;
        for (uVar18 = uVar38 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar7 = pcVar7 + 4;
        }
      }
      else {
        pcVar7 = pcVar8;
        iVar6 = st::fn_00711110(this_00->field_0180,pcVar8);
        if (iVar6 < 200) goto LAB_0052ff02;
        iVar6 = -1;
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        _Count = 10;
        do {
          sVar41 = _Count;
          _Count = sVar41 + 1;
          st::fn_0072E340(local_880,pcVar7,_Count);
          uVar38 = 0xffffffff;
          pcVar8 = &DAT_007c7278;
          do {
            pcVar20 = pcVar8;
            if (uVar38 == 0) break;
            uVar38 = uVar38 - 1;
            pcVar20 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar20;
          } while (cVar1 != '\0');
          uVar38 = ~uVar38;
          iVar6 = -1;
          pcVar8 = local_880;
          do {
            pcVar22 = pcVar8;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar22 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar22;
          } while (cVar1 != '\0');
          pcVar8 = pcVar20 + -uVar38;
          pcVar20 = pcVar22 + -1;
          for (uVar18 = uVar38 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
            *(undefined4 *)pcVar20 = *(undefined4 *)pcVar8;
            pcVar8 = pcVar8 + 4;
            pcVar20 = pcVar20 + 4;
          }
          pcVar22 = local_880;
          for (uVar38 = uVar38 & 3; uVar38 != 0; uVar38 = uVar38 - 1) {
            *pcVar20 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            pcVar20 = pcVar20 + 1;
          }
          sVar35 = 0x52fe7b;
          iVar6 = st::fn_00711110(this_00->field_0180,pcVar22);
        } while ((iVar6 < 200) && ((int)_Count < (int)sVar35));
        if (_Count == sVar35) goto LAB_0052ff02;
        pcVar8 = local_880;
        for (iVar6 = 0x41; iVar6 != 0; iVar6 = iVar6 + -1) {
          pcVar8[0] = '\0';
          pcVar8[1] = '\0';
          pcVar8[2] = '\0';
          pcVar8[3] = '\0';
          pcVar8 = pcVar8 + 4;
        }
        st::fn_0072E340(local_880,pcVar7,sVar41 - 2);
        uVar38 = 0xffffffff;
        pcVar8 = &DAT_007c7274;
        do {
          pcVar7 = pcVar8;
          if (uVar38 == 0) break;
          uVar38 = uVar38 - 1;
          pcVar7 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar7;
        } while (cVar1 != '\0');
        uVar38 = ~uVar38;
        iVar6 = -1;
        pcVar8 = local_880;
        do {
          pcVar20 = pcVar8;
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          pcVar20 = pcVar8 + 1;
          cVar1 = *pcVar8;
          pcVar8 = pcVar20;
        } while (cVar1 != '\0');
        pcVar8 = pcVar7 + -uVar38;
        pcVar7 = pcVar20 + -1;
        for (uVar18 = uVar38 >> 2; uVar18 != 0; uVar18 = uVar18 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar7 = pcVar7 + 4;
        }
      }
      UVar31 = this_00->field_01A5;
      for (uVar38 = uVar38 & 3; uVar38 != 0; uVar38 = uVar38 - 1) {
        *pcVar7 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      }
      pcVar8 = st::fn_006B0140(UVar31,g_hINSTANCE_00807618);
      st::external_00000080(&this_00->field_006C,pcVar8);
      break;
    case CASE_A:
      pcVar8 = st::fn_006B0140(this_00->field_01A5,g_hINSTANCE_00807618);
      st::external_00000080(&this_00->field_006C,pcVar8);
    }
    if (DAT_0080874e == '\x03') {
      uVar38 = 5;
    }
    else {
      uVar38 = -(uint)(DAT_0080874e != '\x01') & 7;
    }
    st::fn_00711B70(this_00->field_0180,(uint *)&this_00->field_006C,-2,-1,uVar38,-1,-1);
    goto cf_common_join_005305BC;
  case CASE_6:
    uVar38 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar9 = (uint *)st::fn_006B0140(0x3e8a,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x6b,0x6e,0xa0,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = -2;
    puVar9 = (uint *)st::fn_006B0140(0x3ee4,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x61,0x4e,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = -3;
    puVar9 = (uint *)st::fn_006B0140(0x3eea,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x77,0x4e,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = -3;
    puVar9 = (uint *)st::fn_006B0140(0x3eeb,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x84,0x4e,0xb);
    goto LAB_00530554;
  case CASE_7:
    uVar38 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar9 = (uint *)st::fn_006B0140(0x3e8b,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x61,0x4e,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = -3;
    puVar9 = (uint *)st::fn_006B0140(0x3ee9,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x6b,0x6e,0xa0,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = -2;
    puVar9 = (uint *)st::fn_006B0140(0x3ee4,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x77,0x4e,0xb);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = -3;
    puVar9 = (uint *)st::fn_006B0140(0x3eeb,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x84,0x4e,0xb);
LAB_00530554:
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar6 = -3;
    UVar31 = 0x3eec;
    break;
  case CASE_8:
    uVar38 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar9 = (uint *)st::fn_006B0140(0x3e8c,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x15,0x77,0xc);
    uVar38 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar9 = (uint *)st::fn_006B0140(0x3eef,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x94,0x15,0x77,0xc);
    uVar38 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar9 = (uint *)st::fn_006B0140(0x3eed,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x5b,0xf0,0xc);
    uVar38 = 0;
    iVar6 = -2;
    UVar31 = 0x3f07;
    break;
  case CASE_9:
    uVar38 = 0;
    iVar6 = -2;
    UVar31 = 0x3e8d;
    break;
  default:
    goto cf_common_join_005305BC;
  case CASE_C:
    uVar38 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar9 = (uint *)st::fn_006B0140(0x3e89,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    puVar19 = this_00->field_0194;
    goto LAB_005305a9;
  case CASE_D:
    uVar38 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar9 = (uint *)st::fn_006B0140(0x3e88,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x6d,0x77,0x11);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = -2;
    puVar9 = (uint *)st::fn_006B0140(0x3ef9,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x1d,0x7f,0x77,0x11);
    uVar38 = (DAT_0080874e != '\x03') - 1 & 5;
    iVar17 = -1;
    iVar6 = -2;
    puVar9 = (uint *)st::fn_006B0140(0x3efa,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x6f,'\x01',
           (byte *)this_00->field_018C);
    resourceString = &this_00->field_006C;
    st::external_00000080(resourceString,"%d");
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0xaa,0x6f,
                     *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
    st::fn_007119C0(this_00->field_017C,(uint *)resourceString,-2,-1,0);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0xaa,0x81,'\x01',
           (byte *)this_00->field_018C);
    st::external_00000080(resourceString,"%d");
    st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0xaa,0x81,
                     *(int *)(this_00->field_018C + 2),*(int *)(this_00->field_018C + 4));
    st::fn_007119C0(this_00->field_017C,(uint *)resourceString,-2,-1,0);
    goto cf_common_join_005305BC;
  case CASE_E:
    uVar38 = 0;
    iVar17 = -1;
    iVar6 = -2;
    puVar9 = (uint *)st::fn_006B0140(0x3e94,g_hINSTANCE_00807618);
    st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
    puVar19 = this_00->field_0190;
    pRVar32 = (RecoveredSourceFamily_dibcopy *)this_00->field_0068;
    goto LAB_005305b4;
  }
  iVar17 = -1;
  puVar9 = (uint *)st::fn_006B0140(UVar31,g_hINSTANCE_00807618);
  st::fn_007119C0(this_00->field_017C,puVar9,iVar6,iVar17,uVar38);
cf_common_join_005305BC:
  switch(this_00->field_01A4) {
  case CASE_1:
    bVar5 = 0;
    uVar38 = 0;
    do {
      iVar6 = 1;
      if (((DAT_00808783 == '\x03') && (bVar5 != 0)) &&
         ((bVar5 < 3 || ((bVar5 == 4 && (DAT_008067a0 != '\0')))))) {
        iVar6 = 0;
      }
      uVar34 = 0;
      uVar27 = 0;
      pcVar8 = nullptr;
      uVar15 = 0;
      uVar30 = 0;
      iVar17 = uVar38 + 0xc0af;
      sVar28 = 0;
      iVar10 = uVar38 + 0xc09f;
      pCVar16 = st::fn_0040577C("BUT_BUTOPT",0);
      local_4c = 0x530655;
      uVar18 = st::fn_0040398B((UPanelTy *)this_00,1,iVar6,0x1d,uVar38 * 0x12 + 0x13,1,pCVar16,
                                   iVar10,iVar17,sVar28,uVar30,uVar15,pcVar8,uVar27,uVar34);
      this_00->field_01B5[uVar38] = uVar18;
      bVar5 = (char)uVar38 + 1;
      uVar38 = (uint)bVar5;
    } while (bVar5 < 7);
    break;
  case CASE_2:
    iVar6 = 0xc09f;
    iVar17 = 0x25;
    do {
      uVar27 = 0;
      puVar36 = nullptr;
      pcVar8 = nullptr;
      uVar15 = 0;
      uVar30 = 0;
      iVar10 = iVar6 + 0x10;
      sVar28 = 0;
      iVar26 = iVar6;
      pCVar16 = st::fn_0040577C("BUT_BUTOPT",0);
      local_4c = 0x530784;
      uVar15 = st::fn_0040398B((UPanelTy *)this_00,1,1,0x1d,iVar17,1,pCVar16,iVar26,iVar10,
                                   sVar28,uVar30,uVar15,pcVar8,puVar36,uVar27);
      iVar6 = iVar6 + 1;
      iVar17 = iVar17 + 0x12;
      *puVar36 = uVar15;
    } while (pcVar8 != (char *)0x1);
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
      pcVar8 = &DAT_00807680;
      do {
        pcVar7 = pcVar8;
        if (uVar38 == 0) break;
        uVar38 = uVar38 - 1;
        pcVar7 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar7;
      } while (cVar1 != '\0');
      uVar38 = ~uVar38;
      pcVar8 = pcVar7 + -uVar38;
      pcVar7 = &this_00->field_006C;
      memmove(pcVar7, pcVar8, uVar38); /* compiler REP MOVS byte copy */
      uVar18 = 0;
      uVar38 = 0xffffffff;
      pcVar8 = PTR_s_SAVEGAME__0079acec;
      do {
        pcVar7 = pcVar8;
        if (uVar38 == 0) break;
        uVar38 = uVar38 - 1;
        pcVar7 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar7;
      } while (cVar1 != '\0');
      uVar38 = ~uVar38;
      iVar6 = -1;
      pcVar8 = &this_00->field_006C;
      do {
        pcVar20 = pcVar8;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar20 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar20;
      } while (cVar1 != '\0');
      pcVar8 = pcVar7 + -uVar38;
      pcVar7 = pcVar20 + -1;
      memmove(pcVar7, pcVar8, uVar38); /* compiler REP MOVS byte copy */
      uVar18 = 0;
      uVar38 = 0xffffffff;
      pcVar8 = (char *)&DAT_00807ddd;
      do {
        pcVar7 = pcVar8;
        if (uVar38 == 0) break;
        uVar38 = uVar38 - 1;
        pcVar7 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar7;
      } while (cVar1 != '\0');
      uVar38 = ~uVar38;
      iVar6 = -1;
      pcVar8 = &this_00->field_006C;
      do {
        pcVar20 = pcVar8;
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar20 = pcVar8 + 1;
        cVar1 = *pcVar8;
        pcVar8 = pcVar20;
      } while (cVar1 != '\0');
      pcVar8 = pcVar7 + -uVar38;
      pcVar7 = pcVar20 + -1;
      memmove(pcVar7, pcVar8, uVar38); /* compiler REP MOVS byte copy */
      st::fn_006B78C0(&this_00->field_006C,&this_00->field_006C);
      pvVar14 = st::external_00000074(&this_00->field_006C,0,1);
      this_00->field_01DD = pvVar14;
      if (pvVar14 == (HANDLE)0xffffffff) {
        this_00->field_01DD = (HANDLE)0x0;
      }
    }
    iVar6 = this_00->field_005C;
    memset(local_77c, 0, 0x4d4); /* compiler bulk-zero initialization */
    local_77c[0] = 0;
    local_77c[2] = this_00->field_003C + 0x26;
    if (iVar6 == 0) {
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
    if (iVar6 == 0) {
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
    if ((this_00->field_005C == 0) || (uVar15 = 0x55, DAT_0080734c == '\0')) {
      uVar15 = 0x56;
    }
    uVar38 = this_00->field_01B5[0];
    this_00->field_0028 = uVar15;
    if (uVar38 != 0) {
      st::fn_006E6080(this_00,0x80000002,uVar38,(undefined4 *)&this_00->field_0x18);
    }
    if (this_00->field_01A4 == CASE_3) {
      pcVar2 = this_00->field_017C;
      ppcVar24 = local_1a88;
      for (iVar6 = 0x223; iVar6 != 0; iVar6 = iVar6 + -1) {
        *ppcVar24 = nullptr;
        ppcVar24 = ppcVar24 + 1;
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
    pcVar8 = nullptr;
    uVar34 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar27 = 0xc0b1;
    uVar15 = 0xc0a1;
    if (this_00->field_01A4 == CASE_E) {
      pCVar16 = st::fn_0040577C("BUT_MEDIUM",0);
      local_4c = 0x5318f5;
      uVar38 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x78,0x7d,1,pCVar16,uVar15,uVar27,sVar28,
                                   uVar30,uVar34,pcVar8,uVar37,uVar40);
      this_00->field_01B5[2] = uVar38;
      st::fn_004017A8(this_00);
    }
    else {
      pCVar16 = st::fn_0040577C("BUT_MEDIUM",0);
      local_4c = 0x531882;
      uVar38 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x5d,0x7c,1,pCVar16,uVar15,uVar27,sVar28,
                                   uVar30,uVar34,pcVar8,uVar37,uVar40);
      uVar40 = 0;
      uVar37 = 0;
      pcVar8 = nullptr;
      uVar34 = 0;
      uVar30 = 0;
      sVar28 = 0;
      uVar27 = 0xc0b2;
      uVar15 = 0xc0a2;
      this_00->field_01B5[2] = uVar38;
      pCVar16 = st::fn_0040577C("BUT_MEDIUM",0);
      local_4c = 0x5318c2;
      uVar38 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x94,0x7c,1,pCVar16,uVar15,uVar27,sVar28,
                                   uVar30,uVar34,pcVar8,uVar37,uVar40);
      this_00->field_01B5[3] = uVar38;
      st::fn_00403FBC(this_00,this_00->field_01E1);
    }
    break;
  case CASE_5:
    uVar40 = 0;
    uVar37 = 0;
    pcVar8 = nullptr;
    uVar34 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar27 = 0xc0af;
    uVar15 = 0xc09f;
    pCVar16 = st::fn_0040577C("BUT_MEDIUM",0);
    local_4c = 0x5306a8;
    uVar38 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x5e,0x7d,1,pCVar16,uVar15,uVar27,sVar28,
                                 uVar30,uVar34,pcVar8,uVar37,uVar40);
    uVar40 = 0;
    uVar37 = 0;
    pcVar8 = nullptr;
    uVar34 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar27 = 0xc0b0;
    uVar15 = 0xc0a0;
    this_00->field_01B5[0] = uVar38;
    pCVar16 = st::fn_0040577C("BUT_MEDIUM",0);
    local_4c = 0x5306e8;
    uVar38 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x97,0x7d,1,pCVar16,uVar15,uVar27,sVar28,
                                 uVar30,uVar34,pcVar8,uVar37,uVar40);
    this_00->field_01B5[1] = uVar38;
    break;
  case CASE_6:
    iVar6 = 0xc09f;
    iVar17 = 0x16;
    do {
      uVar15 = 0;
      puVar36 = nullptr;
      pcVar8 = nullptr;
      uVar38 = 0;
      uVar30 = 0;
      bVar5 = '\x01' << ((char)iVar6 + 0x61U & 0x1f) & STPiece<1,1>(DAT_00807300);
      iVar10 = iVar6 + 0x10;
      pOVar29 = nullptr;
      iVar26 = iVar6;
      pCVar16 = st::fn_0040577C("BUT_BUTOPT",0);
      local_4c = 0x530c65;
      uVar15 = st::fn_0040398B((UPanelTy *)this_00,3,(-(uint)(bVar5 != 0) & 2) + 1,0x1d,iVar17,1
                                   ,pCVar16,iVar26,iVar10,(short)pOVar29,uVar30,uVar38,pcVar8,
                                   puVar36,uVar15);
      iVar6 = iVar6 + 1;
      iVar17 = iVar17 + 0x12;
      *puVar36 = uVar15;
    } while (pcVar8 != (char *)0x1);
    bVar5 = 5;
    do {
      piVar39 = (int *)0x1;
      uVar18 = 4;
      if (bVar5 != 5) {
        uVar18 = (uint)bVar5;
      }
      uVar12 = (bVar5 != 5) - 1 & 4;
      if (bVar5 == 5) {
        uVar38 = ((DAT_0080730e + 4000) * 0x1f) / 0xfa1;
      }
      else if (bVar5 == 6) {
        uVar38 = 0;
        if (g_sound == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = g_sndContext_0080765C->field_0050 & 1;
        }
        if (uVar13 == 0) {
          piVar39 = nullptr;
        }
        else {
          piVar39 = nullptr;
          local_264.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_264;
          iVar6 = st::fn_0072D7F0(local_264.jumpBuffer,0);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = g_sndContext_0080765C->field_0050 & 1;
            }
            if (uVar13 != 0) {
              piVar39 = &local_70;
              uVar12 = 0x530e3a;
              st::fn_006B7E00((int)g_sndContext_0080765C,1,&local_74,piVar39);
            }
            uVar13 = (uint)(local_74 + local_70) >> 1;
          }
          else {
            uVar13 = 0;
          }
          if (g_sound == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = g_sndContext_0080765C->field_0050 & 1;
          }
          g_currentExceptionFrame = local_264.previous;
          this_00 = pOVar29;
          if (uVar11 != 0) {
            iVar6 = g_sndContext_0080765C->field_0064;
            iVar17 = g_sndContext_0080765C->field_0060;
LAB_00530d9d:
            uVar38 = (iVar6 - iVar17) + 1;
            this_00 = pOVar29;
          }
LAB_00530da0:
          uVar38 = (uVar13 * 0x1f) / uVar38;
        }
      }
      else if (bVar5 == 7) {
        uVar38 = 0;
        if (g_sound == 0) {
          uVar13 = 0;
        }
        else {
          uVar13 = g_sndContext_0080765C->field_0038 & 1;
        }
        if (uVar13 != 0) {
          piVar39 = nullptr;
          local_154.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_154;
          iVar6 = st::fn_0072D7F0(local_154.jumpBuffer,0);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = g_sndContext_0080765C->field_0038 & 1;
            }
            if (uVar13 != 0) {
              piVar39 = &local_6c;
              uVar12 = 0x530d50;
              st::fn_006B7E00((int)g_sndContext_0080765C,0,&local_60,piVar39);
            }
            uVar13 = (uint)(local_60 + local_6c) >> 1;
          }
          else {
            uVar13 = 0;
          }
          if (g_sound == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = g_sndContext_0080765C->field_0038 & 1;
          }
          g_currentExceptionFrame = local_154.previous;
          this_00 = pOVar29;
          if (uVar11 != 0) {
            iVar6 = g_sndContext_0080765C->field_004C;
            iVar17 = g_sndContext_0080765C->field_0048;
            goto LAB_00530d9d;
          }
          goto LAB_00530da0;
        }
        piVar39 = nullptr;
      }
      uVar18 = uVar18 & 0xff;
      iVar6 = uVar12 + uVar18 * 0xd + 0x29;
      pOVar29 = (OptPanelTy *)0xf9;
      uVar12 = st::fn_00403EE0(this_00,0x6d,iVar6,0xf9,iVar6,uVar18 + 0xc09f,0x1f,uVar38,(int)piVar39);
      this_00->field_01B5[uVar18] = uVar12;
      st::fn_00405DF3(this_00,(char)iVar6 - 4,(byte)uVar38);
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
    pOVar29 = (OptPanelTy *)0xe9;
    uVar18 = st::fn_00402680((UPanelTy *)this_00,3,bVar5,0x1d,0x16,0xe9,0x11,0,0x12,0xc09f,
                                 0xc0af);
    this_00->field_01B5[0] = uVar18;
    bVar5 = 5;
    pSVar23 = g_sndContext_0080765C;
    do {
      pSVar33 = (SNDContext *)0x1;
      uVar18 = 4;
      if (bVar5 != 5) {
        uVar18 = (uint)bVar5;
      }
      uVar12 = (bVar5 != 5) - 1 & 4;
      if (bVar5 == 5) {
        if ((char)DAT_00807300 == '\x02') {
          if (g_sound == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = pSVar23->field_0080 & 1;
          }
          if (uVar13 == 0) {
            uVar38 = 0;
            pSVar33 = nullptr;
            goto cf_common_join_0053138B;
          }
        }
        if ((char)DAT_00807300 == '\x04') {
          if (g_sound == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = pSVar23->field_0068 & 1;
          }
          if (uVar13 != 0) goto LAB_005311d8;
switchD_005311ec_caseD_1:
          uVar38 = 0;
          pSVar33 = nullptr;
          goto cf_common_join_0053138B;
        }
LAB_005311d8:
        switch(DAT_00807300 & 0xff) {
        case 1:
          goto switchD_005311ec_caseD_1;
        case 2:
          local_198.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_198;
          iVar6 = st::fn_0072D7F0(local_198.jumpBuffer,0);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar38 = 0;
            }
            else {
              uVar38 = g_sndContext_0080765C->field_0080 & 1;
            }
            if (uVar38 != 0) {
              uVar18 = 0x53124e;
              pSVar33 = g_sndContext_0080765C;
              st::fn_006B7E00((int)g_sndContext_0080765C,3,&local_4c,&local_50);
            }
            uVar13 = (uint)(local_50 + local_4c) >> 1;
          }
          else {
            uVar13 = 0;
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
            this_00 = pOVar29;
          }
          else {
            uVar38 = (g_sndContext_0080765C->field_0094 - g_sndContext_0080765C->field_0090) + 1;
            this_00 = pOVar29;
          }
          break;
        default:
          goto switchD_005311ec_caseD_3;
        case 4:
          local_1dc.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_1dc;
          iVar6 = st::fn_0072D7F0(local_1dc.jumpBuffer,0);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar38 = 0;
            }
            else {
              uVar38 = g_sndContext_0080765C->field_0068 & 1;
            }
            if (uVar38 != 0) {
              uVar18 = 0x531309;
              pSVar33 = g_sndContext_0080765C;
              st::fn_006B7E00((int)g_sndContext_0080765C,2,&local_64,&local_5c);
            }
            uVar13 = (uint)(local_64 + local_5c) >> 1;
          }
          else {
            uVar13 = 0;
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
          this_00 = pOVar29;
          break;
        case 8:
          uVar38 = ((DAT_0080730a + 4000) * 0x1f) / 0xfa1;
          goto cf_common_join_0053138B;
        }
LAB_0053108f:
        uVar38 = (uVar13 * 0x1f) / uVar38;
      }
      else {
        if (bVar5 == 6) {
          uVar38 = 0;
          if (g_sound == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = pSVar23->field_0050 & 1;
          }
          if (uVar13 == 0) {
            pSVar33 = nullptr;
            goto cf_common_join_0053138B;
          }
          local_220.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_220;
          iVar6 = st::fn_0072D7F0(local_220.jumpBuffer,0);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar38 = 0;
            }
            else {
              uVar38 = g_sndContext_0080765C->field_0050 & 1;
            }
            if (uVar38 != 0) {
              uVar18 = 0x53111e;
              pSVar33 = g_sndContext_0080765C;
              st::fn_006B7E00
                        ((int)g_sndContext_0080765C,1,(undefined4 *)&stack0xffffffb8,&local_68);
            }
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            uVar13 = (uint)(local_68 + in_stack_ffffffb8) >> 1;
          }
          else {
            uVar13 = 0;
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
            this_00 = pOVar29;
            goto LAB_0053108f;
          }
          goto LAB_0053108d;
        }
        if (bVar5 == 7) {
          uVar38 = 0;
          if (g_sound == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = pSVar23->field_0038 & 1;
          }
          if (uVar13 == 0) {
            pSVar33 = nullptr;
            goto cf_common_join_0053138B;
          }
          local_2a8.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_2a8;
          iVar6 = st::fn_0072D7F0(local_2a8.jumpBuffer,0);
          if (iVar6 == 0) {
            if (g_sound == 0) {
              uVar38 = 0;
            }
            else {
              uVar38 = g_sndContext_0080765C->field_0038 & 1;
            }
            if (uVar38 != 0) {
              uVar18 = 0x531039;
              pSVar33 = g_sndContext_0080765C;
              st::fn_006B7E00((int)g_sndContext_0080765C,0,&local_58,&local_54);
            }
            uVar13 = (uint)(local_58 + local_54) >> 1;
          }
          else {
            uVar13 = 0;
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
          this_00 = pOVar29;
          goto LAB_0053108f;
        }
      }
cf_common_join_0053138B:
      uVar18 = uVar18 & 0xff;
      iVar6 = uVar12 + uVar18 * 0xd + 0x29;
      pOVar29 = (OptPanelTy *)0xf9;
      uVar12 = st::fn_00403EE0(this_00,0x6d,iVar6,0xf9,iVar6,uVar18 + 0xc09f,0x1f,uVar38,(int)pSVar33);
      this_00->field_01B5[uVar18] = uVar12;
      st::fn_00405DF3(this_00,(char)iVar6 - 4,(byte)uVar38);
      pSVar23 = g_sndContext_0080765C;
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
    iVar6 = 0;
    iVar17 = 0x1b;
    do {
      if (iVar17 < 0x76) {
                    /* WARNING: Could not recover jumptable at 0x00530aa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)(&PTR_LAB_00531ce8)[iVar6])();
        return;
      }
      uVar27 = 0;
      puVar36 = nullptr;
      pcVar8 = nullptr;
      iVar26 = iVar6 + 0xc09f;
      uVar15 = 0;
      uVar30 = 0;
      sVar28 = 0;
      iVar10 = iVar6 + 0xc0af;
      pCVar16 = st::fn_0040577C("BUT_BUTOPT",0);
      local_4c = 0x530b3a;
      uVar15 = st::fn_0040398B((UPanelTy *)this_00,3,1,0x1d,iVar17,1,pCVar16,iVar26,iVar10,
                                   sVar28,uVar30,uVar15,pcVar8,puVar36,uVar27);
      iVar17 = iVar17 + 0x12;
      *puVar36 = uVar15;
      iVar6 = iVar6 + 1;
    } while (pcVar8 != (char *)0x1);
    break;
  case CASE_B:
    uVar40 = 0;
    uVar37 = 0;
    pcVar8 = nullptr;
    uVar34 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar27 = 0xc0b0;
    uVar15 = 0xc0a0;
    pCVar16 = st::fn_0040577C("BUT_MEDIUM",0);
    local_4c = 0x53072a;
    uVar38 = st::fn_0040398B((UPanelTy *)this_00,0,1,0x7d,0x7d,1,pCVar16,uVar15,uVar27,sVar28,
                                 uVar30,uVar34,pcVar8,uVar37,uVar40);
    this_00->field_01B5[0] = uVar38;
    break;
  case CASE_C:
    iVar6 = this_00->field_003C;
    memset(local_11fc, 0, 0x878); /* compiler bulk-zero initialization */
    iVar17 = 0;
    local_11dc = iVar6 + 0x26;
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
    iVar6 = this_00->field_005C;
    local_1038 = 1;
    local_1034 = 1;
    local_fc4 = 2;
    local_fc0[2] = this_00->field_003C + 0xf2;
    piVar39 = local_1140;
    piVar25 = local_fc0;
    memmove(piVar25, piVar39, 0x17c); /* compiler REP MOVS byte copy */
    if (iVar6 == 0) {
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
    iVar6 = 0;
    memset(local_1c48, 0, 0x1c0); /* compiler bulk-zero initialization */
    bVar5 = 0;
    iVar6 = 0;
    iVar17 = 0;
    puVar9 = local_1c48 + 1;
    do {
      if (iVar6 == 0) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffbc = 800;
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffc0 = 600;
      }
      else if (iVar6 == 1) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffbc = 0x400;
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffc0 = 0x300;
      }
      else if (iVar6 == 2) {
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffbc = 0x500;
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        in_stack_ffffffc0 = 0x400;
      }
      bVar4 = 0;
      puVar9[-1] = iVar6 + 1;
      *puVar9 = 2;
      if (0 < *(int *)(DAT_0080877a + 4)) {
        uVar38 = 0;
        do {
          iVar10 = DAT_0080877a + uVar38 * 0xc;
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          if (((*(int *)(iVar10 + 8) == in_stack_ffffffbc) &&
              (*(int *)(DAT_0080877a + (uVar38 * 3 + 3) * 4) == in_stack_ffffffc0)) &&
             (*(int *)(iVar10 + 0x10) == 8)) {
            *puVar9 = (uint)(DAT_00807348 == bVar5);
            break;
          }
          bVar4 = bVar4 + 1;
          uVar38 = (uint)bVar4;
        } while ((int)uVar38 < *(int *)(DAT_0080877a + 4));
      }
      puVar9[2] = this_00->field_003C + 0x1d;
      if (this_00->field_005C == 0) {
        iVar10 = -this_00->field_0048;
      }
      else {
        iVar10 = this_00->field_0044;
      }
      puVar9[3] = iVar17 + 0x13 + iVar10;
      puVar9[4] = 0x72;
      puVar9[5] = 0x11;
      bVar5 = bVar5 + 1;
      iVar6 = iVar6 + 1;
      iVar17 = iVar17 + 0x12;
      puVar9 = puVar9 + 0x1c;
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
    pcVar8 = nullptr;
    uVar34 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar27 = 0xc0b0;
    uVar15 = 0xc0a0;
    pCVar16 = st::fn_0040577C("BUT_BUTOPT",0);
    local_4c = 0x530992;
    uVar38 = st::fn_0040398B((UPanelTy *)this_00,1,0,0x1d,0x49,1,pCVar16,uVar15,uVar27,sVar28,
                                 uVar30,uVar34,pcVar8,uVar37,uVar40);
    uVar40 = 0;
    uVar37 = 0;
    pcVar8 = nullptr;
    uVar34 = 0;
    uVar30 = 0;
    sVar28 = 0;
    uVar27 = 0xc0b1;
    uVar15 = 0xc0a1;
    this_00->field_01B5[1] = uVar38;
    pCVar16 = st::fn_0040577C("BUT_BUTOPT",0);
    local_4c = 0x5309da;
    uVar38 = st::fn_0040398B((UPanelTy *)this_00,3,(-(uint)(DAT_00807342 != 0) & 2) + 1,0x1d,
                                 0x5b,1,pCVar16,uVar15,uVar27,sVar28,uVar30,uVar34,pcVar8,uVar37,
                                 uVar40);
    this_00->field_01B5[2] = uVar38;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar38 = st::fn_00403EE0(this_00,0x94,0x70,*(int *)(this_00->field_018C + 2) + 0xaf,0x70,0xc0a2,3,
                          DAT_00807346 / 5 - 1,1);
    puVar19 = this_00->field_018C;
    this_00->field_01B5[3] = uVar38;
    uVar38 = st::fn_00403EE0(this_00,0x94,0x82,*(int *)(puVar19 + 2) + 0xaf,0x82,0xc0a3,3,
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
  int iVar5;
  cMf32 *pcVar6;
  OptPanelTy_field_02FDDArray *pOVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  OptPanelTy *pOVar12;
  uint *puVar13;
  char *pcVar14;
  byte *pbVar15;
  bool bVar16;
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
  iVar5 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pOVar12 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar9 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x3ad,0,iVar5,
                               "%s","OptPanelTy::PrepAsses");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x3ad);
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
  switch(_DAT_008087a0 & 0xff) {
  case 1:
  case 4:
  case 6:
  case 7:
  case 0xd:
  case 0xe:
  case 0x13:
    st::external_00000080((LPSTR)&DAT_0080f33a,"%s%s%s",&DAT_00807680,PTR_s_SYSTEM__0079acf0,
              PTR_s_STRATEGS_0079acfc);
    break;
  case 2:
  case 3:
  case 5:
  case 8:
  case 0xf:
    st::external_00000080((LPSTR)&DAT_0080f33a,"%s%s",&DAT_00807680,&DAT_0080ef1e);
  }
  pcVar6 = (cMf32 *)st::fn_006F0EC0(0x345,(byte *)&DAT_0080f33a,0,0,0);
  pOVar12 = local_8;
  switch(_DAT_008087a0 & 0xff) {
  case 1:
  case 4:
  case 6:
  case 7:
  case 0xd:
  case 0xe:
  case 0x13:
    pOVar7 = (OptPanelTy_field_02FDDArray *)
             st::fn_00404255((int)pcVar6,(uint)DAT_0080874e,DAT_0080995c);
    break;
  case 2:
  case 3:
  case 5:
  case 8:
  case 0xf:
    pOVar7 = (OptPanelTy_field_02FDDArray *)
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
  if ((&stack0x00000000 != (undefined1 *)0x12c) &&
     (pcVar8 = st::fn_006B0140(0x2711,g_hINSTANCE_00807618), pcVar8 != nullptr)) {
    pcVar8 = st::fn_006B0140(0x2711,g_hINSTANCE_00807618);
    uVar10 = 0xffffffff;
    do {
      pcVar14 = pcVar8;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar14 = pcVar8 + 1;
      cVar2 = *pcVar8;
      pcVar8 = pcVar14;
    } while (cVar2 != '\0');
    uVar10 = ~uVar10;
    pcVar8 = pcVar14 + -uVar10;
    pcVar14 = local_12c;
    memmove(pcVar14, pcVar8, uVar10); /* compiler REP MOVS byte copy */
  }
  local_c0 = 1;
  st::fn_006B11D0(&pOVar12->field_02FD->flags,0,(undefined4 *)local_12c);
  pOVar12->field_0028 = 0x28;
  puVar1 = &pOVar12->field_0x18;
  *(dword *)&pOVar12->field_0x2c = pOVar12->field_02FD->count;
  st::fn_006E6080(pOVar12,2,pOVar12->field_01B5[0],(undefined4 *)puVar1);
  pOVar12->field_0028 = 0x20;
  *(undefined4 *)&pOVar12->field_0x2c = 1;
  st::fn_006E6080(pOVar12,2,pOVar12->field_01B5[0],(undefined4 *)puVar1);
  iVar5 = st::fn_0040522C((uint)DAT_0080874d,(char *)&DAT_0080f33a);
  if (iVar5 == 0) {
    pOVar12->field_0028 = 0x22;
    *(undefined4 *)&pOVar12->field_0x2c = 0;
    st::fn_006E6080(pOVar12,2,pOVar12->field_01B5[0],(undefined4 *)puVar1);
  }
  else {
    pOVar7 = pOVar12->field_02FD;
    local_c = 0;
    if (pOVar7->count != 0) {
      if (pOVar7->count == 0) {
        puVar13 = nullptr;
        goto LAB_00532855;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        puVar13 = (uint *)((int)&pOVar7->data->field_0000 + pOVar7->elementSize * local_c);
LAB_00532855:
        pbVar15 = (byte *)&DAT_0080f33a;
        do {
          bVar3 = (byte)*puVar13;
          bVar16 = bVar3 < *pbVar15;
          if (bVar3 != *pbVar15) {
LAB_0053287e:
            iVar5 = (1 - (uint)bVar16) - (uint)(bVar16 != 0);
            goto LAB_00532883;
          }
          if (bVar3 == 0) break;
          bVar3 = STField<byte>(puVar13,1);
          bVar16 = bVar3 < pbVar15[1];
          if (bVar3 != pbVar15[1]) goto LAB_0053287e;
          puVar13 = (uint *)((int)puVar13 + 2);
          pbVar15 = pbVar15 + 2;
        } while (bVar3 != 0);
        iVar5 = 0;
LAB_00532883:
        if (iVar5 == 0) {
          *(uint *)&pOVar12->field_0x2c = local_c;
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
  int iVar5;
  DArrayTy *pDVar6;
  HANDLE hFindFile;
  cMf32 *this_00;
  ushort *puVar7;
  char *pcVar8;
  BOOL BVar9;
  LONG LVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  OptPanelTy *this_01;
  byte *pbVar14;
  char *pcVar15;
  char *pcVar16;
  byte *pbVar17;
  bool bVar18;
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
  iVar5 = st::fn_0072D7F0(local_70.jumpBuffer,0);
  this_01 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_70.previous;
    iVar11 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x44f,0,iVar5,
                                "%s","OptPanelTy::PrepFiles");
    if (iVar11 == 0) {
      st::fn_006A5E40(iVar5,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x44f);
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
  pDVar6 = st::fn_006B54F0(nullptr,0x32,10);
  this_01->field_01E9 = pDVar6;
  pDVar6 = st::fn_006AE290(nullptr,0x32,8,10);
  this_01->field_01ED = pDVar6;
  this_01->field_0028 = 0x20;
  *(undefined4 *)&this_01->field_0x2c = 0;
  st::fn_006E6080(this_01,2,this_01->field_01B5[0],(undefined4 *)&this_01->field_0x18);
  uVar12 = 0xffffffff;
  pcVar8 = &DAT_00807680;
  do {
    pcVar16 = pcVar8;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  pcVar8 = pcVar16 + -uVar12;
  pcVar16 = &this_01->field_006C;
  memmove(pcVar16, pcVar8, uVar12); /* compiler REP MOVS byte copy */
  uVar13 = 0;
  uVar12 = 0xffffffff;
  pcVar8 = PTR_s_SAVEGAME__0079acec;
  do {
    pcVar16 = pcVar8;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  iVar5 = -1;
  pcVar8 = &this_01->field_006C;
  do {
    pcVar15 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar15 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar15;
  } while (cVar1 != '\0');
  pcVar8 = pcVar16 + -uVar12;
  pcVar16 = pcVar15 + -1;
  memmove(pcVar16, pcVar8, uVar12); /* compiler REP MOVS byte copy */
  uVar13 = 0;
  uVar12 = 0xffffffff;
  pcVar8 = (char *)&DAT_00807ddd;
  do {
    pcVar16 = pcVar8;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  iVar5 = -1;
  pcVar8 = &this_01->field_006C;
  do {
    pcVar15 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar15 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar15;
  } while (cVar1 != '\0');
  pcVar8 = pcVar16 + -uVar12;
  pcVar16 = pcVar15 + -1;
  memmove(pcVar16, pcVar8, uVar12); /* compiler REP MOVS byte copy */
  uVar13 = 0;
  pcVar8 = &this_01->field_006C;
  st::fn_006B8280(pcVar8,pcVar8);
  uVar12 = 0xffffffff;
  do {
    pcVar16 = pcVar8;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  pcVar8 = pcVar16 + -uVar12;
  pcVar16 = local_3fc;
  memmove(pcVar16, pcVar8, uVar12); /* compiler REP MOVS byte copy */
  uVar13 = 0;
  uVar12 = 0xffffffff;
  pcVar8 = PTR_DAT_0079ad00;
  do {
    pcVar16 = pcVar8;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  iVar5 = -1;
  pcVar8 = &this_01->field_006C;
  do {
    pcVar15 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar15 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar15;
  } while (cVar1 != '\0');
  pcVar8 = pcVar16 + -uVar12;
  pcVar16 = pcVar15 + -1;
  memmove(pcVar16, pcVar8, uVar12); /* compiler REP MOVS byte copy */
  uVar13 = 0;
  uVar12 = 0xffffffff;
  pcVar8 = &DAT_007c72d8;
  do {
    pcVar16 = pcVar8;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  iVar5 = -1;
  pcVar8 = &this_01->field_006C;
  do {
    pcVar15 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar15 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar15;
  } while (cVar1 != '\0');
  pcVar8 = pcVar16 + -uVar12;
  pcVar16 = pcVar15 + -1;
  memmove(pcVar16, pcVar8, uVar12); /* compiler REP MOVS byte copy */
  uVar13 = 0;
  uVar12 = 0xffffffff;
  pcVar8 = PTR_DAT_0079acf4;
  do {
    pcVar16 = pcVar8;
    if (uVar12 == 0) break;
    uVar12 = uVar12 - 1;
    pcVar16 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar16;
  } while (cVar1 != '\0');
  uVar12 = ~uVar12;
  iVar5 = -1;
  pcVar8 = &this_01->field_006C;
  do {
    pcVar15 = pcVar8;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar15 = pcVar8 + 1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar15;
  } while (cVar1 != '\0');
  pcVar8 = pcVar16 + -uVar12;
  pcVar16 = pcVar15 + -1;
  memmove(pcVar16, pcVar8, uVar12); /* compiler REP MOVS byte copy */
  uVar13 = 0;
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
          uVar12 = 0xffffffff;
          pcVar8 = local_3fc;
          do {
            pcVar16 = pcVar8;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar16 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar16;
          } while (cVar1 != '\0');
          uVar12 = ~uVar12;
          pcVar8 = pcVar16 + -uVar12;
          pcVar16 = &local_10->field_006C;
          memmove(pcVar16, pcVar8, uVar12); /* compiler REP MOVS byte copy */
          uVar13 = 0;
          uVar12 = 0xffffffff;
          pbVar14 = local_2f8;
          do {
            pbVar17 = pbVar14;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pbVar17 = pbVar14 + 1;
            bVar2 = *pbVar14;
            pbVar14 = pbVar17;
          } while (bVar2 != 0);
          uVar12 = ~uVar12;
          iVar5 = -1;
          pcVar8 = &local_10->field_006C;
          do {
            pcVar16 = pcVar8;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar16 = pcVar8 + 1;
            cVar1 = *pcVar8;
            pcVar8 = pcVar16;
          } while (cVar1 != '\0');
          pbVar14 = pbVar17 + -uVar12;
          pbVar17 = (byte *)(pcVar16 + -1);
          memmove(pbVar17, pbVar14, uVar12); /* compiler REP MOVS byte copy */
          this_00 = (cMf32 *)st::fn_006F0EC0
                                       (0x345,&local_10->field_006C,0,0,0);
          puVar7 = st::fn_006F1CE0(this_00,0x80,PTR_s_SAVE_DESC_0079ad04,(int *)&local_1c,0);
          if (puVar7 == nullptr) {
            local_8 = 0;
          }
          else {
            bVar18 = false;
            if (this_01->field_01A4 == CASE_3) {
              if (((char)(local_8 >> 0x18) == -0x78) && ((char)local_8 == '\x16')) {
                bVar18 = true;
              }
              else {
                bVar18 = false;
              }
            }
            else if (this_01->field_01A4 == CASE_4) {
              bVar18 = local_14 == local_8;
            }
            if (bVar18) {
              st::fn_006AE1C0(this_01->field_01ED,&local_1f4.ftLastWriteTime);
              uVar12 = 0xffffffff;
              pcVar8 = PTR_DAT_0079ad00;
              do {
                if (uVar12 == 0) break;
                uVar12 = uVar12 - 1;
                cVar1 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
              pcVar8 = st::fn_006B8240((char *)local_2f8,~uVar12 - 1);
              st::fn_006B5AA0(&this_01->field_01E9->flags,pcVar8);
            }
          }
          st::fn_006F1170(this_00);
          hFindFile = local_18;
          pIVar4 = local_b4.previous;
        }
      }
      g_currentExceptionFrame = pIVar4;
      BVar9 = st::external_00000071(hFindFile,&local_1f4);
    } while (BVar9 != 0);
  }
  if (hFindFile != (HANDLE)0xffffffff) {
    st::external_00000072(hFindFile);
  }
  uVar12 = this_01->field_01E9->elementSize;
  local_8 = uVar12;
  if (uVar12 == 0) {
    if (this_01->field_01A4 != CASE_3) goto LAB_0053325d;
    st::fn_006B6020(this_01->field_01F1,0,&DAT_008016a0);
    uVar13 = this_01->field_01B5[1];
    this_01->field_0028 = 0x33;
    *(DArrayTy **)&this_01->field_0x2c = this_01->field_01F1;
  }
  else {
    if (1 < uVar12) {
      do {
        local_c = 0;
        uVar13 = 0;
        if (uVar12 != 1) {
          do {
            st::fn_006ACC70(this_01->field_01ED,uVar13,&local_2c);
            index = uVar13 + 1;
            st::fn_006ACC70(this_01->field_01ED,index,&local_24);
            LVar10 = st::external_0000006B(&local_2c,&local_24);
            if (LVar10 < 0) {
              st::fn_006B0CD0((AnonShape_00413AF0_B6B4EE9A *)this_01->field_01ED,uVar13,index);
              st::fn_006B8200((AnonShape_006B8200_800652FF *)this_01->field_01E9,uVar13,index);
              local_c = 1;
            }
            uVar13 = index;
            uVar12 = local_8;
          } while (index < local_8 - 1);
        }
      } while (local_c != 0);
    }
    this_01->field_0028 = 0x28;
    *(uint *)&this_01->field_0x2c = uVar12;
    st::fn_006E6080(this_01,2,this_01->field_01B5[0],(undefined4 *)&this_01->field_0x18);
    this_01->field_0028 = 0x20;
    *(undefined4 *)&this_01->field_0x2c = 1;
    st::fn_006E6080(this_01,2,this_01->field_01B5[0],(undefined4 *)&this_01->field_0x18);
    this_01->field_0028 = 0x22;
    if (uVar12 <= param_1) {
      param_1 = uVar12 - 1;
    }
    uVar13 = this_01->field_01B5[0];
    *(uint *)&this_01->field_0x2c = param_1;
  }
  st::fn_006E6080(this_01,2,uVar13,(undefined4 *)&this_01->field_0x18);
LAB_0053325d:
  uVar13 = this_01->field_01B5[3];
  this_01->field_0028 = 0x20;
  *(uint *)&this_01->field_0x2c = (uint)(uVar12 != 0);
  st::fn_006E6080(this_01,2,uVar13,(undefined4 *)&this_01->field_0x18);
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
  byte *pbVar5;
  int iVar6;
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
    iVar6 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x459,0,iVar4,
                               "%s","OptPanelTy::CheckFiles");
    if (iVar6 != 0) {
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
      pbVar5 = *(byte **)(local_c->field_01E9->growCapacity + uVar9 * 4);
    }
    else {
      pbVar5 = nullptr;
    }
    do {
      bVar1 = *pbVar5;
      bVar10 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_005334fb:
        iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
        goto LAB_00533500;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar10 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_005334fb;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_00533500:
    if (iVar4 == 0) {
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
        iVar2 = 0x3e84;
      }
      else {
        iVar2 = 0x3e96 - (uint)(g_playSystem_00802A38->field_00E4 -
                                g_playSystem_00802A38->field_0034 < 6000);
      }
      local_8->field_01A5 = iVar2;
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
  int iVar10;
  DWORD DVar11;
  uint uVar12;
  byte *puVar13;
  LPSTR pCVar14;
  cMf32 *pcVar15;
  byte *pbVar16;
  uint uVar17;
  OptPanelTy *this_00;
  ushort *puVar18;
  char *pcVar19;
  byte *puVar20;
  char *pcVar21;
  char *pcVar22;
  byte *pbVar23;
  bool bVar24;
  uint uVar25;
  uint *puVar26;
  OptPanelTy_field_02FDElement *element_02fd;
  OptPanelTy_field_02FDElement *element_02fd_2;
  undefined4 uVar27;
  byte bVar28;
  int iVar29;
  code *pcVar30;
  ccFntTy *pcVar31;
  int iVar32;
  UINT UVar33;
  code *pcVar34;
  ulong uVar35;
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
  uint *local_1c;
  dword local_18;
  uint *local_14;
  OptPanelTy *local_10;
  cMf32 *local_c;
  uint local_8;
  byte temp_5fc7a8e9f1;
  byte temp_5fabcf5a4c;
  byte OVar3;

  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_10 = this;
  iVar10 = st::fn_0072D7F0(local_8c.jumpBuffer,0);
  this_00 = local_10;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar29 = st::fn_006AD4D0("E:\\__titans\\Andrey\\optpanel.cpp",0x7f4,0,iVar10,
                                "%s","OptPanelTy::GetMessage");
    if (iVar29 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar10,0,"E:\\__titans\\Andrey\\optpanel.cpp",0x7f4);
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
       ((uVar12 = *(uint *)((message->arg2).u32 + 4), uVar12 == 2 || ((3 < uVar12 && (uVar12 < 6))))
       )) {
      st::fn_00405E2F(0xae);
    }
  }
  SVar6 = message->id;
  if (SVar6 < 0xc007) {
    if (SVar6 == MESS_OPTPANELTY_C006) {
      pcVar34 = thunk_FUN_00529fe0;
      pCVar14 = st::fn_0040577C("BUT_MINUS",0);
      bVar28 = 1;
    }
    else {
      if (SVar6 < MESS_OPTPANELTY_8165) {
        if (SVar6 != MESS_OPTPANELTY_8164) {
          if (MESS_SHARED_8160 < SVar6) {
            if (SVar6 == MESS_SIDTY_8161) {
              puVar18 = this_00->field_01E5;
              uVar12 = *(uint *)(puVar18 + 10);
              if (uVar12 == 0) {
                uVar12 = ((uint)puVar18[7] * *(int *)(puVar18 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                         *(int *)(puVar18 + 4);
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
              puVar13 = (byte *)st::fn_006B4FA0((int *)puVar18);
              uVar9 = (undefined1)local_8;
              for (uVar17 = uVar12 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *puVar13 = CONCAT22(CONCAT11(uVar9,uVar9),CONCAT11(uVar9,uVar9));
                puVar13 = (byte *)(puVar13 + 1);
              }
              for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined1 *)puVar13 = uVar9;
                puVar13 = (byte *)((int)puVar13 + 1);
              }
              st::fn_00710A90(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
              if (this_00->field_01A4 == CASE_E) {
                pOVar7 = this_00->field_02FD;
                uVar12 = (uint)(message->arg0).words.low;
                if (uVar12 < pOVar7->count) {
                  element_02fd = DArrayAt<OptPanelTy_field_02FDElement>(pOVar7, uVar12);
                }
                else {
                  element_02fd = nullptr;
                }
                uVar12 = (uint)((message->arg0).words.high == 0);
              }
              else {
                uVar12 = (uint)(message->arg0).words.low;
                if ((int)uVar12 < (int)this_00->field_01E9->elementSize) {
                  puVar26 = *(uint **)(this_00->field_01E9->growCapacity + uVar12 * 4);
                  uVar12 = (uint)((message->arg0).words.high == 0);
                }
                else {
                  puVar26 = nullptr;
                  uVar12 = (uint)((message->arg0).words.high == 0);
                }
              }
              st::fn_007119C0(this_00->field_017C,puVar26,2,-1,uVar12);
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
                  pcVar19 = *(char **)(this_00->field_01E9->growCapacity + (message->arg0).i32 * 4);
                }
                else {
                  pcVar19 = nullptr;
                }
                st::fn_006B6020(this_00->field_01F1,0,pcVar19);
                uVar12 = this_00->field_01B5[1];
                this_00->field_0028 = 0x33;
                *(DArrayTy **)&this_00->field_0x2c = this_00->field_01F1;
                st::fn_006E6080(this_00,2,uVar12,(undefined4 *)&this_00->field_0x18);
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              if (OVar4 == CASE_4) {
                puVar18 = this_00->field_01E5;
                uVar12 = *(uint *)(puVar18 + 10);
                if (uVar12 == 0) {
                  uVar12 = ((uint)puVar18[7] * *(int *)(puVar18 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                           *(int *)(puVar18 + 4);
                }
                local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
                puVar13 = (byte *)st::fn_006B4FA0((int *)puVar18);
                uVar9 = (undefined1)local_8;
                for (uVar17 = uVar12 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                  *puVar13 = CONCAT22(CONCAT11(uVar9,uVar9),CONCAT11(uVar9,uVar9));
                  puVar13 = (byte *)(puVar13 + 1);
                }
                for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                  *(undefined1 *)puVar13 = uVar9;
                  puVar13 = (byte *)((int)puVar13 + 1);
                }
                this_00->field_0028 = 0x26;
                st::fn_006E6080(this_00,2,this_00->field_01B5[0],(undefined4 *)&this_00->field_0x18);
                st::fn_00710A90(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
                if (*(int *)&this_00->field_0x2c < (int)this_00->field_01E9->elementSize) {
                  puVar26 = *(uint **)(this_00->field_01E9->growCapacity +
                                      *(int *)&this_00->field_0x2c * 4);
                }
                else {
                  puVar26 = nullptr;
                }
                st::fn_007119C0(this_00->field_017C,puVar26,0,-1,0);
                puVar18 = this_00->field_01E5;
                st::fn_006B55F0
                          ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,
                           (byte *)puVar18,0,0,0,*(int *)(puVar18 + 2),*(int *)(puVar18 + 4));
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              if (OVar4 != CASE_E) {
                g_currentExceptionFrame = local_8c.previous;
                return 0;
              }
              puVar18 = this_00->field_01E5;
              uVar12 = *(uint *)(puVar18 + 10);
              if (uVar12 == 0) {
                uVar12 = ((uint)puVar18[7] * *(int *)(puVar18 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                         *(int *)(puVar18 + 4);
              }
              local_8 = (DAT_0080874e != '\x03') - 1 & 0x73;
              puVar13 = (byte *)st::fn_006B4FA0((int *)puVar18);
              uVar9 = (undefined1)local_8;
              for (uVar17 = uVar12 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
                *puVar13 = CONCAT22(CONCAT11(uVar9,uVar9),CONCAT11(uVar9,uVar9));
                puVar13 = (byte *)(puVar13 + 1);
              }
              for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined1 *)puVar13 = uVar9;
                puVar13 = (byte *)((int)puVar13 + 1);
              }
              st::fn_00710A90(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
              iVar10 = st::fn_0040522C((uint)DAT_0080874d,(char *)&DAT_0080f33a);
              uVar12 = 0;
              iVar32 = -1;
              iVar29 = 0;
              if (iVar10 == 0) {
                puVar26 = (uint *)st::fn_006B0140(0x2711,g_hINSTANCE_00807618);
              }
              else {
                puVar26 = &DAT_0080f33a;
              }
              st::fn_007119C0(this_00->field_017C,puVar26,iVar29,iVar32,uVar12);
              puVar18 = this_00->field_01E5;
              st::fn_006B55F0
                        ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,
                         (byte *)puVar18,0,0,0,*(int *)(puVar18 + 2),*(int *)(puVar18 + 4));
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
            pcVar31 = this_00->field_017C;
            if (pcVar31->field_00A0 != 0) {
              st::fn_00710790((AnonShape_00710790_4CBB90D4 *)pcVar31);
            }
            local_8 = *(uint *)&pcVar31->field_0x8a;
            st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1a,0xca,0x6f,
                         (DAT_0080874e != '\x03') - 1U & 0x73);
            uVar17 = (uint)(message->arg0).words.high;
            uVar12 = uVar17;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if ((int)uVar17 < (int)(*(int *)(local_18 + 0x1e0) + uVar17)) {
              do {
                if ((int)uVar12 < (int)this_00->field_02F9[2]) {
                  local_1c = *(uint **)(this_00->field_02F9[5] + uVar12 * 4);
                }
                else {
                  local_1c = nullptr;
                }
                if (local_1c != nullptr) {
                  st::fn_00710A90(this_00->field_017C,this_00->field_0068,0,0x26,
                                   (uVar12 - uVar17) * local_8 + 0x1b,0xca,local_8);
                  st::fn_007119C0(this_00->field_017C,local_1c,0,-1,0);
                }
                uVar17 = (uint)(message->arg0).words.high;
                uVar12 = uVar12 + 1;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              } while ((int)uVar12 < (int)(*(int *)(local_18 + 0x1e0) + uVar17));
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
              (DVar11 = st::external_0000006D(this_00->field_01DD,0), DVar11 == 0)))) {
            st::external_0000006E(this_00->field_01DD);
            if (this_00->field_01A4 != CASE_7) {
              st::fn_00403FBC(this_00,this_00->field_01E1);
            }
            this_00->field_0028 = 5;
            puVar26 = this_00->field_01B5;
            iVar10 = 10;
            do {
              if (*puVar26 != 0) {
                st::fn_006E6080(this_00,2,*puVar26,(undefined4 *)&this_00->field_0x18);
              }
              puVar26 = puVar26 + 1;
              iVar10 = iVar10 + -1;
            } while (iVar10 != 0);
          }
          if (this_00->field_0172 == CASE_3) {
            iVar10 = this_00->field_0050;
            if (this_00->field_0044 < iVar10) {
              this_00->field_0044 = this_00->field_0044 + 0x1e;
            }
            if (iVar10 <= this_00->field_0044) {
              this_00->field_0044 = iVar10;
              this_00->field_0172 = CASE_1;
              st::fn_00405A1A(this_00,1);
            }
            uVar12 = this_00->field_0044;
            uVar17 = this_00->field_003C;
            uVar25 = this_00->field_0060;
          }
          else {
            if (this_00->field_0172 != CASE_4) goto LAB_00534016;
            iVar10 = this_00->field_0050 - this_00->field_0048;
            if (iVar10 < this_00->field_0044) {
              this_00->field_0044 = this_00->field_0044 + -0x1e;
            }
            if (this_00->field_0044 <= iVar10) {
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
            uVar12 = this_00->field_0044;
            uVar17 = this_00->field_003C;
            uVar25 = this_00->field_0060;
          }
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,uVar25,0xffffffff,uVar17,uVar12);
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
        pcVar19 = "BUT_SLUP";
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
            pcVar34 = thunk_FUN_00529fe0;
            pCVar14 = st::fn_0040577C("BUT_PLUS",0);
            bVar28 = 1;
            goto LAB_00534654;
          }
          UVar33 = 0x274f;
          goto cf_common_exit_00536DB5;
        }
        if (SVar6 == MESS_OPTPANELTY_C002) {
          UVar33 = 0x274e;
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
        pcVar19 = "BUT_SLDN";
      }
      pcVar34 = thunk_FUN_00529fe0;
      pCVar14 = st::fn_0040577C(pcVar19,0);
      bVar28 = 6;
    }
LAB_00534654:
    st::fn_00403495((UPanelTy *)this_00,(AnonShape_0053D7A0_044B6141 *)message,bVar28,pCVar14,
                       pcVar34);
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
        uVar12 = 0xffffffff;
        pcVar19 = &DAT_00807680;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = (char *)&DAT_0080ee1a;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar12 = 0xffffffff;
        pcVar19 = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar10 = -1;
        pcVar19 = (char *)&DAT_0080ee1a;
        do {
          pcVar21 = pcVar19;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar12 = 0xffffffff;
        pcVar19 = (char *)&DAT_00807ddd;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar10 = -1;
        pcVar19 = (char *)&DAT_0080ee1a;
        do {
          pcVar21 = pcVar19;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        st::fn_006B8280((char *)&DAT_0080ee1a,(char *)&DAT_0080ee1a);
        uVar12 = 0xffffffff;
        pcVar19 = PTR_DAT_0079ad00;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar10 = -1;
        pcVar19 = (char *)&DAT_0080ee1a;
        do {
          pcVar21 = pcVar19;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar12 = 0xffffffff;
        pcVar19 = &this_00->field_0x1f5;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar10 = -1;
        pcVar19 = (char *)&DAT_0080ee1a;
        do {
          pcVar21 = pcVar19;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        st::fn_00405A42(this_00,-1);
        this_00->field_019C = 0x6100;
        DAT_0080879c = 1;
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      case CASE_3:
        st::external_00000080((LPSTR)&DAT_0080ee1a,"%s%s",&DAT_00807680,&DAT_0080ef1e);
        st::fn_00405A42(this_00,-1);
        uVar12 = 0xffffffff;
        this_00->field_019C = 0x6100;
        pcVar19 = (char *)&DAT_0080ee1a;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = &DAT_0080ed16;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        st::fn_00404B4C((STAppC *)&DAT_00807620,0);
        puVar13 = (byte *)(&DAT_0080a14f);
        puVar20 = (byte *)(&DAT_008087b6);
        memmove(puVar20, puVar13, 0x1999); /* compiler REP MOVS byte copy */
        iVar10 = 0;
        puVar13 = (byte *)&DAT_0080baec;
        puVar20 = (byte *)(&DAT_0080e43b);
        memmove(puVar20, puVar13, 0x400); /* compiler REP MOVS byte copy */
        iVar10 = 0;
        if (DAT_0080ed12 != nullptr) {
          st::fn_006AB060(&DAT_0080ed12);
        }
        DAT_0080ed12 = st::fn_006AAC70(0x8db);
        puVar13 = (byte *)(&DAT_0080bae8);
        puVar20 = (byte *)(DAT_0080ed12);
        memmove(puVar20, puVar13, 0x8db); /* compiler REP MOVS byte copy */
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
          uVar35 = (g_playSystem_00802A38->field_00E4 - g_playSystem_00802A38->field_0034 < 6000) +
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
        uVar12 = 0xffffffff;
        pcVar19 = &DAT_00807680;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = &this_00->field_006C;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar12 = 0xffffffff;
        pcVar19 = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar10 = -1;
        pcVar19 = &this_00->field_006C;
        do {
          pcVar21 = pcVar19;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar12 = 0xffffffff;
        pcVar19 = (char *)&DAT_00807ddd;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar10 = -1;
        pcVar19 = &this_00->field_006C;
        do {
          pcVar21 = pcVar19;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        st::fn_006B8280(&this_00->field_006C,&this_00->field_006C);
        uVar12 = 0xffffffff;
        pcVar19 = PTR_DAT_0079ad00;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar10 = -1;
        pcVar19 = &this_00->field_006C;
        do {
          pcVar21 = pcVar19;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar12 = 0xffffffff;
        pcVar19 = &this_00->field_0x1f5;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar10 = -1;
        pcVar19 = &this_00->field_006C;
        do {
          pcVar21 = pcVar19;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar12 = 0xffffffff;
        pcVar19 = PTR_DAT_0079acf4;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar10 = -1;
        pcVar19 = &this_00->field_006C;
        do {
          pcVar21 = pcVar19;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        st::external_0000006F(&this_00->field_006C);
        uVar12 = 0xffffffff;
        pcVar19 = &DAT_00807680;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = &this_00->field_006C;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar12 = 0xffffffff;
        pcVar19 = PTR_s_SAVEGAME__0079acec;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar10 = -1;
        pcVar19 = &this_00->field_006C;
        do {
          pcVar21 = pcVar19;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar12 = 0xffffffff;
        pcVar19 = (char *)&DAT_00807ddd;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar10 = -1;
        pcVar19 = &this_00->field_006C;
        do {
          pcVar21 = pcVar19;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        st::fn_006B8280(&this_00->field_006C,&this_00->field_006C);
        uVar12 = 0xffffffff;
        pcVar19 = PTR_DAT_0079ad00;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar10 = -1;
        pcVar19 = &this_00->field_006C;
        do {
          pcVar21 = pcVar19;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar12 = 0xffffffff;
        pcVar19 = &this_00->field_0x1f5;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar10 = -1;
        pcVar19 = &this_00->field_006C;
        do {
          pcVar21 = pcVar19;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
        uVar17 = 0;
        uVar12 = 0xffffffff;
        pcVar19 = PTR_DAT_0079acf8;
        do {
          pcVar22 = pcVar19;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar22 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar22;
        } while (cVar2 != '\0');
        uVar12 = ~uVar12;
        iVar10 = -1;
        pcVar19 = &this_00->field_006C;
        do {
          pcVar21 = pcVar19;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar21 = pcVar19 + 1;
          cVar2 = *pcVar19;
          pcVar19 = pcVar21;
        } while (cVar2 != '\0');
        pcVar19 = pcVar22 + -uVar12;
        pcVar22 = pcVar21 + -1;
        memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
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
      iVar10 = *(int *)(message->arg0).ptr;
      if (iVar10 == 1) {
        STPiece<0,1>(DAT_00807300) = '\x01';
      }
      else if (iVar10 == 2) {
        STPiece<0,1>(DAT_00807300) = '\b';
      }
      else if (iVar10 == 3) {
        STPiece<0,1>(DAT_00807300) = '\x02';
      }
      switch((char)DAT_00807300) {
      case '\x01':
        local_c = nullptr;
        break;
      case '\x02':
        local_d0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_d0;
        iVar10 = st::fn_0072D7F0(local_d0.jumpBuffer,0);
        if (iVar10 == 0) {
          if (g_sound == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = g_sndContext_0080765C->field_0080 & 1;
          }
          if (uVar12 != 0) {
            st::fn_006B7E00((int)g_sndContext_0080765C,3,local_3c + 3,&local_28);
          }
          uVar12 = local_3c[3] + local_28 >> 1;
        }
        else {
          uVar12 = 0;
        }
        if (g_sound == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = g_sndContext_0080765C->field_0080 & 1;
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
        iVar10 = st::fn_0072D7F0(local_224.jumpBuffer,0);
        if (iVar10 == 0) {
          if (g_sound == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = g_sndContext_0080765C->field_0068 & 1;
          }
          if (uVar12 != 0) {
            st::fn_006B7E00((int)g_sndContext_0080765C,2,&local_24,&local_2c);
          }
          uVar12 = local_24 + local_2c >> 1;
        }
        else {
          uVar12 = 0;
        }
        if (g_sound == 0) {
          uVar17 = 0;
        }
        else {
          uVar17 = g_sndContext_0080765C->field_0068 & 1;
        }
        g_currentExceptionFrame = local_224.previous;
        if (uVar17 == 0) goto LAB_005350ba;
        uVar17 = (g_sndContext_0080765C->field_007C - g_sndContext_0080765C->field_0078) + 1;
LAB_005350bc:
        local_c = (cMf32 *)((uVar12 * 0x1f) / uVar17);
        this_00 = local_10;
        break;
      case '\b':
        local_c = (cMf32 *)(((DAT_0080730a + 4000) * 0x1f) / 0xfa1);
      }
      pcVar15 = local_c;
      st::fn_00405DF3(this_00,0,(byte)local_c);
      uVar12 = this_00->field_01B5[4];
      this_00->field_0028 = 0x22;
      *(cMf32 **)&this_00->field_0x2c = pcVar15;
      st::fn_006E6080(this_00,2,uVar12,(undefined4 *)&this_00->field_0x18);
      this_00->field_0028 = 0x20;
      uVar12 = this_00->field_01B5[4];
      *(uint *)&this_00->field_0x2c = (uint)((char)DAT_00807300 != '\x01');
      st::fn_006E6080(this_00,2,uVar12,(undefined4 *)&this_00->field_0x18);
      st::fn_00404552(&DAT_00807620,HWND_00856d78);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_8:
      DAT_0080733b = 4 - *(char *)(message->arg0).ptr;
      if (DAT_0080877e == '\0') {
        iVar10 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar10 + 0x14);
      }
      else {
        iVar10 = (uint)DAT_0080733b * 0x18;
        DAT_00807654 = *(undefined4 *)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar10 + 8);
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
                   *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar10 + 0x10),
                   *(char **)(s_FrmPanelTy__GetMessage_007c2ae0 + iVar10 + 4));
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      break;
    case CASE_9:
      DAT_0080731a = (uint)(DAT_0080731a == 0);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      uVar12 = this_00->field_01B5[1];
      this_00->field_0305 = *(char *)(message->arg0).ptr + -1;
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 1;
      st::fn_006E6080(this_00,2,uVar12,(undefined4 *)&this_00->field_0x18);
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
    uVar35 = 4;
LAB_00535271:
    st::external_00000106((CFsgsConnection *)&DAT_00802a90,uVar35);
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
      uVar12 = this_00->field_01B5[1];
      this_00->field_0028 = 0x32;
      st::fn_006E6080(this_00,2,uVar12,(undefined4 *)&this_00->field_0x18);
      if ((int)this_00->field_01F1->elementSize < 1) {
        pcVar19 = nullptr;
      }
      else {
        pcVar19 = *(char **)this_00->field_01F1->growCapacity;
      }
      uVar12 = 0xffffffff;
      do {
        pcVar22 = pcVar19;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar22 = pcVar19 + 1;
        cVar2 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      puVar1 = &this_00->field_0x1f5;
      pcVar19 = pcVar22 + -uVar12;
      pcVar22 = puVar1;
      memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
      pbVar23 = &DAT_008016a0;
      pbVar16 = puVar1;
      do {
        bVar28 = *pbVar16;
        bVar24 = bVar28 < *pbVar23;
        if (bVar28 != *pbVar23) {
LAB_0053556a:
          iVar10 = (1 - (uint)bVar24) - (uint)(bVar24 != 0);
          goto LAB_0053556f;
        }
        if (bVar28 == 0) break;
        bVar28 = pbVar16[1];
        bVar24 = bVar28 < pbVar23[1];
        if (bVar28 != pbVar23[1]) goto LAB_0053556a;
        pbVar16 = pbVar16 + 2;
        pbVar23 = pbVar23 + 2;
      } while (bVar28 != 0);
      iVar10 = 0;
LAB_0053556f:
      if (iVar10 == 0) {
        this_00->field_01A5 = 0x3f4b;
        this_00->field_01AA = this_00->field_01A9;
        this_00->field_01A9 = this_00->field_01A4;
        this_00->field_01A4 = CASE_B;
        st::fn_00402851(this_00);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      iVar10 = st::fn_00402874(this_00,puVar1);
      if (iVar10 != 0) {
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
        pcVar19 = *(char **)(this_00->field_01E9->growCapacity + *(int *)&this_00->field_0x2c * 4);
      }
      else {
        pcVar19 = nullptr;
      }
      uVar12 = 0xffffffff;
      do {
        pcVar22 = pcVar19;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar22 = pcVar19 + 1;
        cVar2 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      pcVar19 = pcVar22 + -uVar12;
      pcVar22 = &this_00->field_0x1f5;
      memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
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
          st::external_00000080((LPSTR)&DAT_0080f33a,"%s%s%s",&DAT_00807680,PTR_s_SYSTEM__0079acf0,
                    PTR_s_STRATEGS_0079acfc);
          break;
        case 2:
        case 3:
        case 5:
        case 8:
        case 0xf:
          st::external_00000080((LPSTR)&DAT_0080f33a,"%s%s",&DAT_00807680,&DAT_0080ef1e);
        }
        local_19c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_19c;
        iVar10 = st::fn_0072D7F0(local_19c.jumpBuffer,0);
        this_00 = local_10;
        pcVar15 = local_c;
        if (iVar10 == 0) {
          pcVar15 = (cMf32 *)st::fn_006F0EC0
                                       (0x345,(byte *)&DAT_0080f33a,0,0,0);
          pOVar7 = this_00->field_02FD;
          if (*(uint *)&this_00->field_0x2c < pOVar7->count) {
            element_02fd_2 = DArrayAt<OptPanelTy_field_02FDElement>(pOVar7, *(uint *)&this_00->field_0x2c);
          }
          else {
            element_02fd_2 = nullptr;
          }
          local_c = pcVar15;
          local_20 = st::fn_004012AD((int)pcVar15,(char *)(element_02fd_2 + 0x13),(int *)&local_18);
          uVar12 = local_8;
          if (local_20 != nullptr) {
            local_14 = st::fn_006AAC10(local_18 + local_8 * 2);
            *(undefined1 *)local_14 = 1;
            pbVar16 = (byte *)((int)local_14 + uVar12);
            *pbVar16 = DAT_0080874d;
            puVar18 = local_20;
            pbVar16 = pbVar16 + uVar12;
            for (uVar17 = local_18 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
              *(undefined4 *)pbVar16 = *(undefined4 *)puVar18;
              puVar18 = puVar18 + 2;
              pbVar16 = pbVar16 + 4;
            }
            for (uVar12 = local_18 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
              *pbVar16 = (byte)*puVar18;
              puVar18 = (ushort *)((int)puVar18 + 1);
              pbVar16 = pbVar16 + 1;
            }
            st::fn_00403C33((undefined4 *)0x32,local_14,1,local_18 + local_8 * 2);
            local_1c = (uint *)0x1;
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
        local_14 = st::fn_006AAC10(2);
        if (local_14 != nullptr) {
          *(undefined1 *)local_14 = 0;
          STField<byte>(local_14,1) = DAT_0080874d;
          st::fn_00403C33((undefined4 *)0x32,local_14,1,2);
          st::fn_006AB060(&local_14);
          local_1c = (uint *)0x1;
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
        iVar10 = 0x3e84;
      }
      else {
        iVar10 = 0x3e96 - (uint)(g_playSystem_00802A38->field_00E4 -
                                 g_playSystem_00802A38->field_0034 < 6000);
      }
      this_00->field_01A9 = OVar4;
      this_00->field_01A5 = iVar10;
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
        pcVar19 = *(char **)(this_00->field_01E9->growCapacity + *(int *)&this_00->field_0x2c * 4);
      }
      else {
        pcVar19 = nullptr;
      }
      uVar12 = 0xffffffff;
      do {
        pcVar22 = pcVar19;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar22 = pcVar19 + 1;
        cVar2 = *pcVar19;
        pcVar19 = pcVar22;
      } while (cVar2 != '\0');
      uVar12 = ~uVar12;
      pcVar19 = pcVar22 + -uVar12;
      pcVar22 = &this_00->field_0x1f5;
      memmove(pcVar22, pcVar19, uVar12); /* compiler REP MOVS byte copy */
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
      st::fn_00711B70(this_00->field_017C,(uint *)&this_00->field_006C,-2,-1,0,-1,-1);
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
          uVar12 = 0;
        }
        else {
          uVar12 = g_sndContext_0080765C->field_0080 & 1;
        }
        if (uVar12 != 0) {
          if (g_sound == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = g_sndContext_0080765C->field_0080 & 1;
          }
          if (uVar12 == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = (g_sndContext_0080765C->field_0094 - g_sndContext_0080765C->field_0090) + 1;
          }
          local_8 = ((iVar10 + -1) * (message->arg0).u32) / 0x1e;
          STPiece<2,2>(DAT_00807300) = (undefined2)local_8;
          uRam00807304 = (undefined2)(local_8 >> 0x10);
          local_158.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_158;
          iVar10 = st::fn_0072D7F0(local_158.jumpBuffer,0);
          pIVar8 = local_158.previous;
          if (iVar10 == 0) {
            if (g_sound == 0) {
              uVar12 = 0;
            }
            else {
              uVar12 = g_sndContext_0080765C->field_0080 & 1;
            }
            if (uVar12 != 0) {
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
          uVar12 = 0;
        }
        else {
          uVar12 = g_sndContext_0080765C->field_0068 & 1;
        }
        if (uVar12 != 0) {
          if (g_sound == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = g_sndContext_0080765C->field_0068 & 1;
          }
          if (uVar12 == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = (g_sndContext_0080765C->field_007C - g_sndContext_0080765C->field_0078) + 1;
          }
          _DAT_00807306 = ((iVar10 + -1) * (message->arg0).u32) / 0x1e;
          local_114.previous = g_currentExceptionFrame;
          g_currentExceptionFrame = &local_114;
          local_8 = _DAT_00807306;
          iVar10 = st::fn_0072D7F0(local_114.jumpBuffer,0);
          pIVar8 = local_114.previous;
          if (iVar10 == 0) {
            if (g_sound == 0) {
              uVar12 = 0;
            }
            else {
              uVar12 = g_sndContext_0080765C->field_0068 & 1;
            }
            if (uVar12 != 0) {
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
      st::fn_00711B70(this_00->field_017C,(uint *)&this_00->field_006C,-2,-1,0,-1,-1);
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
        uVar12 = 0;
      }
      else {
        uVar12 = g_sndContext_0080765C->field_0050 & 1;
      }
      if (uVar12 != 0) {
        if (g_sound == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = g_sndContext_0080765C->field_0050 & 1;
        }
        if (uVar12 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = (g_sndContext_0080765C->field_0064 - g_sndContext_0080765C->field_0060) + 1;
        }
        _DAT_00807312 = ((iVar10 + -1) * (message->arg0).u32) / 0x1e;
        local_1e0.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_1e0;
        local_8 = _DAT_00807312;
        iVar10 = st::fn_0072D7F0(local_1e0.jumpBuffer,0);
        if (iVar10 == 0) {
          if (g_sound == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = g_sndContext_0080765C->field_0050 & 1;
          }
          if (uVar12 != 0) {
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
        uVar12 = 0;
      }
      else {
        uVar12 = g_sndContext_0080765C->field_0038 & 1;
      }
      if (uVar12 != 0) {
        if (g_sound == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = g_sndContext_0080765C->field_0038 & 1;
        }
        if (uVar12 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = (g_sndContext_0080765C->field_004C - g_sndContext_0080765C->field_0048) + 1;
        }
        _DAT_00807316 = ((iVar10 + -1) * (message->arg0).u32) / 0x1e;
        local_268.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_268;
        local_8 = _DAT_00807316;
        iVar10 = st::fn_0072D7F0(local_268.jumpBuffer,0);
        if (iVar10 == 0) {
          if (g_sound == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = g_sndContext_0080765C->field_0038 & 1;
          }
          if (uVar12 != 0) {
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
        pcVar34 = thunk_FUN_0052a280;
        UVar33 = 0x3e81;
      }
      else {
        pcVar34 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a230;
        }
        UVar33 = 0x3e81;
      }
      goto cf_common_exit_00536F8B;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar31 = this_00->field_0180;
        pcVar34 = thunk_FUN_0052a280;
        UVar33 = 0x3e8b;
      }
      else {
        pcVar34 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a230;
        }
        pcVar31 = this_00->field_0180;
        UVar33 = 0x3e8b;
      }
      goto cf_common_exit_00536F92;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
      UVar33 = 0x273e;
      goto cf_common_exit_00536DB5;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar10 = 0;
        pcVar34 = thunk_FUN_0052a770;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3efc;
      }
      else {
        pcVar34 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a730;
        }
        iVar10 = 0;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3efc;
      }
      break;
    case CASE_7:
      iVar10 = *(int *)(message->arg0).ptr;
      if (iVar10 == 1) {
        if (DAT_0080874e == '\x03') {
          iVar10 = 1;
          pcVar34 = thunk_FUN_0052a640;
          pcVar30 = thunk_FUN_0052a4d0;
          UVar33 = 0x3ee7;
        }
        else {
          pcVar34 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar34 = thunk_FUN_0052a5c0;
          }
          iVar10 = 1;
          pcVar30 = thunk_FUN_0052a4d0;
          UVar33 = 0x3ee7;
        }
      }
      else if (iVar10 == 2) {
        if (DAT_0080874e == '\x03') {
          iVar10 = 1;
          pcVar34 = thunk_FUN_0052a640;
          pcVar30 = thunk_FUN_0052a4d0;
          UVar33 = 0x3ee5;
        }
        else {
          pcVar34 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar34 = thunk_FUN_0052a5c0;
          }
          iVar10 = 1;
          pcVar30 = thunk_FUN_0052a4d0;
          UVar33 = 0x3ee5;
        }
      }
      else {
        if (iVar10 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          iVar10 = 1;
          pcVar34 = thunk_FUN_0052a640;
          pcVar30 = thunk_FUN_0052a4d0;
          UVar33 = 0x3ee6;
        }
        else {
          pcVar34 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar34 = thunk_FUN_0052a5c0;
          }
          iVar10 = 1;
          pcVar30 = thunk_FUN_0052a4d0;
          UVar33 = 0x3ee6;
        }
      }
      break;
    case CASE_8:
      iVar10 = *(int *)(message->arg0).ptr;
      if (iVar10 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar34 = thunk_FUN_0052a640;
        }
        else {
          pcVar34 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar34 = thunk_FUN_0052a5c0;
          }
        }
        iVar10 = 1;
        pcVar30 = thunk_FUN_0052a4d0;
        UVar33 = 0x3ef1;
        pCVar14 = st::fn_0040577C("BUT_BUTOPT1",0);
        st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar33,pcVar30,pcVar34,
                    iVar10);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar10 != 2) {
        if (iVar10 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar34 = thunk_FUN_0052a640;
        }
        else {
          pcVar34 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar34 = thunk_FUN_0052a5c0;
          }
        }
        iVar10 = 1;
        pcVar30 = thunk_FUN_0052a4d0;
        UVar33 = 0x3ef2;
        pCVar14 = st::fn_0040577C("BUT_BUTOPT1",0);
        st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar33,pcVar30,pcVar34,
                    iVar10);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        pcVar34 = thunk_FUN_0052a640;
      }
      else {
joined_r0x0053686a:
        pcVar34 = thunk_FUN_0052a540;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a5c0;
        }
      }
LAB_00536434:
      UVar33 = 0x3ef0;
cf_common_exit_00536441:
      iVar10 = 1;
      pcVar30 = thunk_FUN_0052a4d0;
      pCVar14 = st::fn_0040577C("BUT_BUTOPT1",0);
      st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar33,pcVar30,pcVar34,
                  iVar10);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar10 = 0;
        pcVar34 = thunk_FUN_0052a770;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3ef4;
      }
      else {
        pcVar34 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a730;
        }
        iVar10 = 0;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3ef4;
      }
      break;
    case CASE_D:
      iVar10 = *(int *)(message->arg0).ptr;
      if (iVar10 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar34 = thunk_FUN_0052a640;
        }
        else {
          pcVar34 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar34 = thunk_FUN_0052a5c0;
          }
        }
        iVar10 = 1;
        pcVar30 = thunk_FUN_0052a4d0;
        UVar33 = 0x3e90;
        pCVar14 = st::fn_0040577C("BUT_BUTOPT1",0);
        st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar33,pcVar30,pcVar34,
                    iVar10);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar10 == 2) {
        if (DAT_0080874e == '\x03') {
          pcVar34 = thunk_FUN_0052a640;
        }
        else {
          pcVar34 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar34 = thunk_FUN_0052a5c0;
          }
        }
        iVar10 = 1;
        pcVar30 = thunk_FUN_0052a4d0;
        UVar33 = 0x3e91;
        pCVar14 = st::fn_0040577C("BUT_BUTOPT1",0);
        st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar33,pcVar30,pcVar34,
                    iVar10);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (iVar10 == 3) {
        if (DAT_0080874e == '\x03') {
          pcVar34 = thunk_FUN_0052a640;
        }
        else {
          pcVar34 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar34 = thunk_FUN_0052a5c0;
          }
        }
        iVar10 = 1;
        pcVar30 = thunk_FUN_0052a4d0;
        UVar33 = 0x3e92;
        pCVar14 = st::fn_0040577C("BUT_BUTOPT1",0);
        st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar33,pcVar30,pcVar34,
                    iVar10);
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      goto cf_common_exit_00536FB7;
    }
cf_common_exit_00536EE8:
    uVar27 = 0;
    iVar29 = 1;
    pCVar14 = st::fn_0040577C("BUT_BUTOPT",0);
    pCVar14 = st::fn_006F2C00(pCVar14,iVar29,uVar27);
    st::fn_00404F0C(this_00,(AnonShape_0052EFB0_CC661192 *)message,pCVar14,UVar33,pcVar30,pcVar34,iVar10
               );
    g_currentExceptionFrame = local_8c.previous;
    return 0;
  case 0xc0b0:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar31 = this_00->field_0180;
        pcVar34 = thunk_FUN_0052a280;
        UVar33 = 0x3e82;
      }
      else {
        pcVar34 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a230;
        }
        pcVar31 = this_00->field_0180;
        UVar33 = 0x3e82;
      }
      break;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar34 = thunk_FUN_0052a280;
        UVar33 = 0x3e8a;
      }
      else {
        pcVar34 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a230;
        }
        UVar33 = 0x3e8a;
      }
      goto cf_common_exit_00536F8B;
    case CASE_3:
      puVar18 = this_00->field_01E5;
      uVar12 = *(uint *)(puVar18 + 10);
      if (uVar12 == 0) {
        uVar12 = ((uint)puVar18[7] * *(int *)(puVar18 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                 *(int *)(puVar18 + 4);
      }
      local_24 = (DAT_0080874e != '\x03') - 1 & 0x73;
      puVar13 = (byte *)st::fn_006B4FA0((int *)puVar18);
      uVar9 = (undefined1)local_24;
      for (uVar17 = uVar12 >> 2; uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar13 = CONCAT22(CONCAT11(uVar9,uVar9),CONCAT11(uVar9,uVar9));
        puVar13 = (byte *)(puVar13 + 1);
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar13 = uVar9;
        puVar13 = (byte *)((int)puVar13 + 1);
      }
      st::fn_00710A90(this_00->field_017C,(int)this_00->field_01E5,0,0,0,0,0);
      st::fn_007119C0(this_00->field_017C,*(uint **)(message->arg0).ptr,0,-1,0);
      uVar5 = (message->arg1).words.low;
      if ((uVar5 != 0xffff) || ((message->arg1).words.high != 0xffff)) {
        uVar12 = (uint)(message->arg1).words.high;
        st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)this_00->field_01E5,0,(uint)uVar5,uVar12,
                     (uint)uVar5,uVar12 + 10,0x6c,0xd);
      }
      puVar18 = this_00->field_01E5;
      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x26,0x1c,(byte *)puVar18,0,
                 0,0,*(int *)(puVar18 + 2),*(int *)(puVar18 + 4));
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_5:
      UVar33 = 0x273f;
      goto cf_common_exit_00536DB5;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar10 = 0;
        pcVar34 = thunk_FUN_0052a770;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3efd;
      }
      else {
        pcVar34 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a730;
        }
        iVar10 = 0;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3efd;
      }
      goto cf_common_exit_00536EE8;
    case CASE_8:
      iVar10 = *(int *)(message->arg0).ptr;
      if (iVar10 == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar34 = thunk_FUN_0052a640;
          UVar33 = 0x3ef1;
        }
        else {
          pcVar34 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar34 = thunk_FUN_0052a5c0;
          }
          UVar33 = 0x3ef1;
        }
        goto cf_common_exit_00536441;
      }
      if (iVar10 != 2) {
        if (iVar10 != 3) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar34 = thunk_FUN_0052a640;
          UVar33 = 0x3ef2;
          goto cf_common_exit_00536441;
        }
        goto LAB_00536d52;
      }
      if (DAT_0080874e != '\x03') goto joined_r0x0053686a;
      pcVar34 = thunk_FUN_0052a640;
      goto LAB_00536434;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar10 = 0;
        pcVar34 = thunk_FUN_0052a770;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3ef5;
      }
      else {
        pcVar34 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a730;
        }
        iVar10 = 0;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3ef5;
      }
      goto cf_common_exit_00536EE8;
    case CASE_B:
switchD_00536a2b_caseD_3:
      UVar33 = 0x2751;
cf_common_exit_00536DB5:
      pCVar14 = st::fn_0040577C("BUT_MEDIUM",0);
      st::fn_00403508((UPanelTy *)this_00,(AnonShape_0053DAF0_3BDC2979 *)message,pCVar14,UVar33);
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    case CASE_D:
      if (DAT_0080874e == '\x03') {
        pcVar31 = this_00->field_0180;
        pcVar34 = thunk_FUN_0052a280;
        UVar33 = 0x3e93;
      }
      else {
        pcVar34 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a230;
        }
        pcVar31 = this_00->field_0180;
        UVar33 = 0x3e93;
      }
    }
    goto cf_common_exit_00536F92;
  case MESS_BEHPANELTY_C0B1:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar31 = this_00->field_0180;
        pcVar34 = thunk_FUN_0052a280;
        UVar33 = 0x3e83;
      }
      else {
        pcVar34 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a230;
        }
        pcVar31 = this_00->field_0180;
        UVar33 = 0x3e83;
      }
      goto cf_common_exit_00536F92;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar34 = thunk_FUN_0052a280;
        UVar33 = 0x3e8c;
      }
      else {
        pcVar34 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a230;
        }
        UVar33 = 0x3e8c;
      }
      goto cf_common_exit_00536F8B;
    case CASE_3:
    case CASE_4:
      goto switchD_00536a2b_caseD_3;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar10 = 0;
        pcVar34 = thunk_FUN_0052a770;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3efe;
      }
      else {
        pcVar34 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a730;
        }
        iVar10 = 0;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3efe;
      }
      break;
    case CASE_8:
      if (*(int *)(message->arg0).ptr == 1) {
        if (DAT_0080874e == '\x03') {
          pcVar34 = thunk_FUN_0052a640;
          UVar33 = 0x3f02;
        }
        else {
          pcVar34 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar34 = thunk_FUN_0052a5c0;
          }
          UVar33 = 0x3f02;
        }
      }
      else {
        if (*(int *)(message->arg0).ptr != 2) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar34 = thunk_FUN_0052a640;
          UVar33 = 0x3f03;
        }
        else {
          pcVar34 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar34 = thunk_FUN_0052a5c0;
          }
          UVar33 = 0x3f03;
        }
      }
      goto cf_common_exit_00536441;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar10 = 0;
        pcVar34 = thunk_FUN_0052a770;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3ef6;
      }
      else {
        pcVar34 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a730;
        }
        iVar10 = 0;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3ef6;
      }
      break;
    case CASE_D:
      if (DAT_0080874e == '\x03') {
        iVar10 = 0;
        pcVar34 = thunk_FUN_0052a770;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3ef8;
      }
      else {
        pcVar34 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a730;
        }
        iVar10 = 0;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3ef8;
      }
      break;
    case CASE_E:
      UVar33 = 0x2752;
      goto cf_common_exit_00536DB5;
    }
    goto cf_common_exit_00536EE8;
  case 0xc0b2:
    switch(this_00->field_01A4) {
    case CASE_1:
      if (DAT_0080874e == '\x03') {
        pcVar34 = thunk_FUN_0052a280;
      }
      else {
        pcVar34 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a230;
        }
      }
      if (DAT_008067a0 == '\0') {
        UVar33 = 0x3e84;
      }
      else {
        UVar33 = 0x3e96 - (g_playSystem_00802A38->field_00E4 - g_playSystem_00802A38->field_0034 <
                          6000);
      }
      goto cf_common_exit_00536F8B;
    case CASE_2:
      if (DAT_0080874e == '\x03') {
        pcVar31 = this_00->field_0180;
        pcVar34 = thunk_FUN_0052a280;
        UVar33 = 0x3e8d;
      }
      else {
        pcVar34 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a230;
        }
        pcVar31 = this_00->field_0180;
        UVar33 = 0x3e8d;
      }
      goto cf_common_exit_00536F92;
    case CASE_3:
    case CASE_4:
      UVar33 = 0x2750;
      goto cf_common_exit_00536DB5;
    default:
      goto cf_common_exit_00536FB7;
    case CASE_6:
      if (DAT_0080874e == '\x03') {
        iVar10 = 0;
        pcVar34 = thunk_FUN_0052a770;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3eff;
      }
      else {
        pcVar34 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a730;
        }
        iVar10 = 0;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3eff;
      }
      break;
    case CASE_8:
      if (*(int *)(message->arg0).ptr != 1) {
        if (*(int *)(message->arg0).ptr != 2) {
          g_currentExceptionFrame = local_8c.previous;
          return 0;
        }
        if (DAT_0080874e == '\x03') {
          pcVar34 = thunk_FUN_0052a640;
          UVar33 = 0x3f06;
        }
        else {
          pcVar34 = thunk_FUN_0052a540;
          if (DAT_0080874e != '\x01') {
            pcVar34 = thunk_FUN_0052a5c0;
          }
          UVar33 = 0x3f06;
        }
        goto cf_common_exit_00536441;
      }
      if (DAT_0080874e == '\x03') {
        pcVar34 = thunk_FUN_0052a640;
        UVar33 = 0x3ef2;
        goto cf_common_exit_00536441;
      }
LAB_00536d52:
      pcVar34 = thunk_FUN_0052a540;
      if (DAT_0080874e != '\x01') {
        pcVar34 = thunk_FUN_0052a5c0;
      }
      UVar33 = 0x3ef2;
      goto cf_common_exit_00536441;
    case CASE_9:
      if (DAT_0080874e == '\x03') {
        iVar10 = 0;
        pcVar34 = thunk_FUN_0052a770;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3ef7;
      }
      else {
        pcVar34 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a730;
        }
        iVar10 = 0;
        pcVar30 = thunk_FUN_0052a6c0;
        UVar33 = 0x3ef7;
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
          iVar10 = 0;
          pcVar34 = thunk_FUN_0052a770;
          pcVar30 = thunk_FUN_0052a6c0;
          UVar33 = 0x3f04;
        }
        else {
          pcVar34 = thunk_FUN_0052a6f0;
          if (DAT_0080874e != '\x01') {
            pcVar34 = thunk_FUN_0052a730;
          }
          iVar10 = 0;
          pcVar30 = thunk_FUN_0052a6c0;
          UVar33 = 0x3f04;
        }
        goto cf_common_exit_00536EE8;
      }
      if (DAT_0080874e == '\x03') {
        pcVar34 = thunk_FUN_0052a280;
        UVar33 = 0x3e8f;
      }
      else {
        pcVar34 = thunk_FUN_0052a1e0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a230;
        }
        UVar33 = 0x3e8f;
      }
      goto cf_common_exit_00536F8B;
    }
    if (DAT_0080874e == '\x03') {
      pcVar31 = this_00->field_0180;
      pcVar34 = thunk_FUN_0052a280;
      UVar33 = 0x3e85;
    }
    else {
      pcVar34 = thunk_FUN_0052a1e0;
      if (DAT_0080874e != '\x01') {
        pcVar34 = thunk_FUN_0052a230;
      }
      pcVar31 = this_00->field_0180;
      UVar33 = 0x3e85;
    }
    goto cf_common_exit_00536F92;
  case MESS_RESEARCHPANELTY_C0B4:
    if (this_00->field_01A4 != CASE_1) {
      if (this_00->field_01A4 != CASE_9) {
        g_currentExceptionFrame = local_8c.previous;
        return 0;
      }
      if (DAT_0080874e == '\x03') {
        pcVar34 = thunk_FUN_0052a770;
      }
      else {
        pcVar34 = thunk_FUN_0052a6f0;
        if (DAT_0080874e != '\x01') {
          pcVar34 = thunk_FUN_0052a730;
        }
      }
      iVar10 = 0;
      pcVar30 = thunk_FUN_0052a6c0;
      UVar33 = 0x3f05;
      goto cf_common_exit_00536EE8;
    }
    if (DAT_0080874e == '\x03') {
      pcVar31 = this_00->field_0180;
      pcVar34 = thunk_FUN_0052a280;
      UVar33 = 0x3e86;
    }
    else {
      pcVar34 = thunk_FUN_0052a1e0;
      if (DAT_0080874e != '\x01') {
        pcVar34 = thunk_FUN_0052a230;
      }
      pcVar31 = this_00->field_0180;
      UVar33 = 0x3e86;
    }
    goto cf_common_exit_00536F92;
  case MESS_SHARED_C0B5:
    if (this_00->field_01A4 != CASE_1) {
      g_currentExceptionFrame = local_8c.previous;
      return 0;
    }
    if (DAT_0080874e == '\x03') {
      pcVar34 = thunk_FUN_0052a280;
    }
    else {
      pcVar34 = thunk_FUN_0052a1e0;
      if (DAT_0080874e != '\x01') {
        pcVar34 = thunk_FUN_0052a230;
      }
    }
    UVar33 = 0x3e87;
cf_common_exit_00536F8B:
    pcVar31 = this_00->field_0180;
cf_common_exit_00536F92:
    uVar27 = 0;
    iVar10 = 1;
    pCVar14 = st::fn_0040577C("BUT_BUTOPT",0);
    pCVar14 = st::fn_006F2C00(pCVar14,iVar10,uVar27);
    st::fn_00401EA1
              ((UPanelTy *)this_00,(AnonShape_0053D920_829E6B3B *)message,1,pCVar14,pcVar31,UVar33,
               pcVar34);
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

