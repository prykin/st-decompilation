#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/infocen.cpp

// 0051FF50 InfocPanelTy::InitInfocPanel
#line 1 "decomp/ST.exe/functions/0051FF50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::InitInfocPanel */

void __thiscall st::fn_0051FF50(InfocPanelTy *this)

{
  InfocPanelTy *this_00;
  int iVar2;
  LPSTR pCVar3;
  ushort *puVar4;
  ccFntTy *pcVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  int iVar12;
  UINT UVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined4 local_430 [224];
  InternalExceptionFrame local_b0;
  undefined4 local_6c [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  InfocPanelTy *local_10;
  int local_c;
  int local_8;

  puVar16 = local_6c;
  local_10 = this;
  for (iVar6 = 0x16; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  memset(local_430, 0, 0x380); /* compiler bulk-zero initialization */
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  iVar6 = st::fn_0072D7F0(local_b0.jumpBuffer,0);
  this_00 = local_10;
  if (iVar6 == 0) {
    uVar15 = 0x8b;
    uVar14 = 0xd8;
    UVar13 = 0x36bf;
    iVar12 = 0xb;
    iVar9 = 0xbf;
    uVar8 = 3;
    iVar6 = 0x40;
    g_infocPanel_00801698 = local_10;
    pCVar3 = st::fn_0040577C("BKG_INFOCENTERW",0);
    st::fn_00403800
              ((SpecPanelTy *)this_00,pCVar3,iVar6,uVar8,iVar9,iVar12,UVar13,uVar14,uVar15);
    puVar4 = st::fn_00709AF0
                       (DAT_00806794,CASE_B,"BUT_CHPLAYER",0xffffffff,0,1,0,
                        nullptr);
    this_00->field_03C4 = puVar4;
    puVar4 = st::fn_00709AF0
                       (DAT_00806794,CASE_B,"GAME_ALLY",0xffffffff,0,1,0,nullptr);
    this_00->field_03C8 = puVar4;
    puVar16 = nullptr;
    iVar9 = 0;
    iVar6 = 1;
    bVar11 = 0;
    uVar10 = 0xffffffff;
    pCVar3 = st::fn_0040577C("IND_PNT",0);
    puVar4 = st::fn_00709AF0
                       (DAT_00806794,CASE_B,pCVar3,uVar10,bVar11,iVar6,iVar9,puVar16);
    this_00->field_03CC = puVar4;
    pcVar5 = (ccFntTy *)st::fn_0070CEB0(0x19d,g_cMf32_00806790,"MONEY_FONT",0);
    this_00->field_03D5 = pcVar5;
    pcVar5->field_0058 = 1;
    pcVar5->field_005C = 0;
    local_c = this_00->field_005C;
    local_14 = this_00->field_003C + 0x1d;
    iVar9 = 0;
    iVar6 = 1;
    puVar16 = local_430 + 1;
    local_8 = 7;
    do {
      iVar12 = local_14;
      puVar16[-1] = iVar6;
      *puVar16 = 2;
      puVar16[2] = iVar12;
      iVar2 = local_c;
      puVar16[4] = 0x11;
      iVar12 = DAT_00806734;
      if (iVar2 != 0) {
        iVar12 = this_00->field_0044;
      }
      iVar6 = iVar6 + 1;
      puVar16[3] = iVar9 + 0x23 + iVar12;
      puVar16[5] = 0xc;
      iVar9 = iVar9 + 0xd;
      puVar16 = puVar16 + 0x1c;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    local_5c = this_00->field_0008;
    local_24 = local_430;
    local_58 = 2;
    local_38 = 2;
    local_6c[0] = 1;
    local_20 = 1;
    local_54 = 0xb208;
    local_34 = 0xb209;
    local_1c = 1;
    local_18 = 1;
    local_3c = local_5c;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,5,&this_00->field_03D0,nullptr,local_6c,0);
    this_00->field_02D4 = 0x56;
    this_00->field_02D8 = 0x17;
    this_00->field_02DC = 0x31;
    this_00->field_02E0 = 0x20;
    this_00->field_02E4 = 0x2760;
    this_00->field_02E8 = 0x88;
    this_00->field_02EC = 0x17;
    this_00->field_02F0 = 0x31;
    this_00->field_02F4 = 0x20;
    this_00->field_02F8 = 0x2761;
    this_00->field_02FC = 0xba;
    this_00->field_0300 = 0x17;
    this_00->field_0304 = 0x31;
    this_00->field_0308 = 0x20;
    this_00->field_030C = 0x2762;
    this_00->field_0310 = 0xee;
    this_00->field_0314 = 0x17;
    this_00->field_0318 = 0x31;
    this_00->field_031C = 0x20;
    this_00->field_0320 = 0x2763;
    this_00->field_0324 = 0x58;
    this_00->field_0328 = 0x3e;
    this_00->field_032C = 0x31;
    this_00->field_0330 = 0x20;
    this_00->field_0334 = 0x2764;
    this_00->field_0338 = 0x88;
    this_00->field_033C = 0x3e;
    this_00->field_0340 = 0x31;
    this_00->field_0344 = 0x20;
    this_00->field_0348 = 0x2765;
    this_00->field_034C = 0xba;
    this_00->field_0350 = 0x3e;
    this_00->field_0354 = 0x31;
    this_00->field_0358 = 0x20;
    this_00->field_0364 = 0x3e;
    this_00->field_0368 = 0x31;
    this_00->field_036C = 0x20;
    this_00->field_035C = 0x2766;
    this_00->field_0360 = 0xee;
    this_00->field_0370 = 0x2767;
    this_00->field_0374 = 0x56;
    this_00->field_0378 = 0x65;
    this_00->field_037C = 0x1f;
    this_00->field_0380 = 0x19;
    this_00->field_0384 = 0x271f;
    this_00->field_0388 = 0x75;
    this_00->field_038C = 0x65;
    this_00->field_0390 = 0x2a;
    this_00->field_0394 = 0x19;
    this_00->field_03A8 = 0x19;
    this_00->field_03BC = 0x19;
    this_00->field_0398 = 0x271d;
    this_00->field_039C = 0x9f;
    this_00->field_03A0 = 0x65;
    this_00->field_03A4 = 0x2a;
    this_00->field_03AC = 0x2768;
    this_00->field_03B0 = 0xcc;
    this_00->field_03B4 = 0x65;
    this_00->field_03B8 = 0x53;
    this_00->field_03C0 = 0x2769;
    iVar6 = 0xc;
    piVar7 = &this_00->field_02D8;
    do {
      piVar7[-1] = piVar7[-1] + this_00->field_003C;
      iVar6 = iVar6 + -1;
      *piVar7 = *piVar7 + (this_00->field_0058 - this_00->field_0048) + this_00->field_0050;
      piVar7 = piVar7 + 5;
    } while (iVar6 != 0);
    g_currentExceptionFrame = local_b0.previous;
    return;
  }
  g_currentExceptionFrame = local_b0.previous;
  iVar9 = st::fn_006AD4D0("E:\\__titans\\Andrey\\infocen.cpp",0x3e,0,iVar6,"%s",
                             "InfocPanelTy::InitInfocPanel");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar6,0,"E:\\__titans\\Andrey\\infocen.cpp",0x3e);
  return;
}

// 005204D0 InfocPanelTy::DoneInfocPanel
#line 1 "decomp/ST.exe/functions/005204D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::DoneInfocPanel */

void __thiscall st::fn_005204D0(InfocPanelTy *this)

{
  InfocPanelTy *pIVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  InfocPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pIVar2 = local_8;
  if (errorCode == 0) {
    if (local_8->field_03D0 != 0) {
      st::fn_006E56B0(local_8->field_000C,local_8->field_03D0);
    }
    pIVar2->field_03D0 = 0;
    if (pIVar2->field_03D5 != nullptr) {
      st::fn_00710560((uint *)pIVar2->field_03D5);
      pIVar2->field_03D5 = nullptr;
    }
    pIVar2->field_03CC = nullptr;
    pIVar2->field_03C8 = nullptr;
    pIVar2->field_03C4 = nullptr;
    g_infocPanel_00801698 = nullptr;
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\infocen.cpp",0x4f,0,errorCode,
                             "%s","InfocPanelTy::DoneInfocPanel");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\infocen.cpp",0x4f);
  return;
}

// 005205E0 InfocPanelTy::ShiftControls
#line 1 "decomp/ST.exe/functions/005205E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::ShiftControls */

void __thiscall st::fn_005205E0(InfocPanelTy *this,int param_1)

{
  short sVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  InfocPanelTy *local_8;

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
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    if (errorCode == 0) {
      if (local_8->field_03D0 != 0) {
        st::fn_006E6080(local_8,2,local_8->field_03D0,(undefined4 *)&local_8->field_0x18);
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0("E:\\__titans\\Andrey\\infocen.cpp",0x5c,0,errorCode,
                               "%s","InfocPanelTy::ShiftControls");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\infocen.cpp",0x5c);
  }
  return;
}

// 005206F0 InfocPanelTy::Update
#line 1 "decomp/ST.exe/functions/005206F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::Update */

void __thiscall st::fn_005206F0(InfocPanelTy *this)

{
  undefined1 *puVar1;
  byte bVar2;
  InfocPanelTy *this_00;
  byte bVar4;
  int iVar5;
  UINT resourceId;
  uint *resourceString;
  undefined4 uVar6;
  uint uVar7;
  byte *puVar8;
  byte *puVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  undefined4 local_188 [75];
  InternalExceptionFrame local_5c;
  byte local_18;
  undefined3 uStack_17;
  InfocPanelTy *local_14;
  uint local_10;
  byte *local_c;
  byte local_5;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar5 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  this_00 = local_14;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar11 = st::fn_006AD4D0("E:\\__titans\\Andrey\\infocen.cpp",0x99,0,iVar5,"%s"
                                ,"InfocPanelTy::Update");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,"E:\\__titans\\Andrey\\infocen.cpp",0x99);
    return;
  }
  puVar1 = &local_14->field_01AB;
  puVar8 = (byte *)puVar1;
  puVar9 = (byte *)(local_188);
  memmove(puVar9, puVar8, 0x129); /* compiler REP MOVS byte copy */
  st::fn_004035BC(g_allPlayers_007FA174,9,(AnonShape_0043BEB0_1C00EC12 *)puVar1);
  if (this_00->field_01AB == 0) {
    this_00->field_03D4 = 0xff;
  }
  else if (this_00->field_03D4 == 0xff) {
    this_00->field_03D4 = 0;
  }
  else if ((byte)this_00->field_01AB <= (byte)this_00->field_03D4) {
    this_00->field_03D4 = 0;
  }
  memset(&this_00->field_0x18, 0, 0x20); /* compiler bulk-zero initialization */
  pbVar10 = &this_00->field_01AC;
  this_00->field_0028 = 0x23;
  local_5 = 0;
  local_10 = 0x23;
  do {
    uVar7 = local_10;
    this_00->field_002C = local_5 + 1;
    if (local_5 < (byte)this_00->field_01AB) {
      if (local_5 == this_00->field_03D4) {
        this_00->field_002E = 1;
      }
      else {
        this_00->field_002E = 0;
      }
    }
    else {
      this_00->field_002E = 2;
    }
    local_c = pbVar10;
    st::fn_006E6080(this_00,2,this_00->field_03D0,(undefined4 *)&this_00->field_0x18);
    if (*pbVar10 != 0xff) {
      if (DAT_0080874e == '\x03') {
        bVar4 = 0x73;
      }
      else {
        bVar4 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
      }
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0x30,uVar7,0x22,0xc,bVar4);
      if (local_5 < (byte)this_00->field_01AB) {
        st::fn_00710A90(this_00->field_0189,this_00->field_0068,0,0x31,uVar7,0x10,0xc);
        bVar4 = g_bulkInitializedRecords_008087C7[*pbVar10].field_0021;
        if (bVar4 == 1) {
          resourceId = 0x2742;
        }
        else if (bVar4 == 2) {
          resourceId = 0x2743;
        }
        else if (bVar4 == 3) {
          resourceId = 0x2745;
        }
        else {
          resourceId = 10000;
        }
        uVar12 = 0;
        iVar11 = -1;
        iVar5 = -1;
        resourceString = (uint *)st::fn_006B0140(resourceId,g_module_00807618);
        st::fn_007119C0(this_00->field_0189,resourceString,iVar5,iVar11,uVar12);
      }
      if (DAT_00808a8f == '\0') {
        iVar5 = -1;
        bVar4 = *local_c;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        _local_18 = CONCAT31(uStack_17,bVar4);
        if (DAT_0080874d == bVar4) {
LAB_00520987:
          uVar6 = 0;
        }
        else {
          uVar7 = (uint)DAT_0080874d;
          bVar2 = g_playerRelationMatrix[uVar7][bVar4];
          if ((bVar2 == 0) && (g_playerRelationMatrix[bVar4][uVar7] == 0)) {
            uVar6 = 0xfffffffe;
          }
          else if ((bVar2 == 1) && (g_playerRelationMatrix[bVar4][uVar7] == 0)) {
            uVar6 = 0xffffffff;
          }
          else if ((bVar2 == 0) && (g_playerRelationMatrix[bVar4][uVar7] == 1)) {
            uVar6 = 1;
          }
          else {
            if ((bVar2 != 1) || (g_playerRelationMatrix[bVar4][uVar7] != 1)) goto LAB_00520987;
            uVar6 = 2;
          }
        }
        switch(uVar6) {
        case 1:
          iVar5 = 1;
          break;
        case 2:
          iVar5 = 3;
          break;
        case 0xfffffffe:
          iVar5 = 0;
          break;
        case 0xffffffff:
          iVar5 = 2;
        }
        uVar7 = local_10;
        if (-1 < iVar5 + -1) {
          pbVar10 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03C8,
                                         iVar5 + -1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0x41,local_10,'\x06',pbVar10);
          uVar7 = local_10;
        }
      }
      else {
        st::external_00000080(&this_00->field_018D,"%c",
                  g_bulkInitializedRecords_008087C7[*local_c].field_0023 + 0x41);
        st::fn_00710A90(this_00->field_0189,this_00->field_0068,0,0x41,uVar7,0x12,0xc);
        st::fn_007119C0(this_00->field_0189,(uint *)&this_00->field_018D,-1,-1,3);
      }
    }
    local_5 = local_5 + 1;
    pbVar10 = local_c + 1;
    local_10 = uVar7 + 0xd;
    if (6 < local_5) {
      local_c = pbVar10;
      st::fn_00404C69(this_00);
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
  } while( true );
}

// 00520B50 InfocPanelTy::PaintInfocObj
#line 1 "decomp/ST.exe/functions/00520B50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::PaintInfocObj
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/ushort Evidence:
   entry-use width=/ushort; unmasked_dword_reads=0; evidence=00520B9B MOV EAX,dword ptr [EBP + 0xc];
   first-use mask | 00520BBB MOV ECX,dword ptr [EBP + 0xc]; first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_00520B50
          (InfocPanelTy *this,ushort param_1,ushort param_2,int param_3,int param_4)

{
  InfocPanelTy *pIVar2;
  byte bVar3;
  int errorCode;
  int iVar4;
  InternalExceptionFrame local_4c;
  InfocPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pIVar2 = local_8;
  if (errorCode == 0) {
    if ((local_8->field_03D4 == -1) && (param_1 == 0xffff)) {
      st::external_00000080(&local_8->field_018D,"----/%d",param_2);
    }
    else {
      st::external_00000080(&local_8->field_018D,"%d/%d",param_1,param_2);
    }
    if (DAT_0080874e == '\x03') {
      bVar3 = 0x73;
    }
    else {
      bVar3 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
    }
    st::fn_006B4170((RecoveredSourceFamily_dibcopy *)pIVar2->field_0068,0,param_3,param_4,0x2d,0xc,
                 bVar3);
    st::fn_00710A90(pIVar2->field_0189,pIVar2->field_0068,0,param_3,param_4,0x2d,0xc);
    st::fn_007119C0(pIVar2->field_0189,(uint *)&pIVar2->field_018D,-1,-1,
                   (DAT_0080874e != '\x03') - 1 & 5);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0("E:\\__titans\\Andrey\\infocen.cpp",0xa9,0,errorCode,
                             "%s","InfocPanelTy::PaintInfocObj");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,"E:\\__titans\\Andrey\\infocen.cpp",0xa9);
  return;
}

// 00520D10 InfocPanelTy::PaintInfoc
#line 1 "decomp/ST.exe/functions/00520D10/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::PaintInfoc */

void __thiscall st::fn_00520D10(InfocPanelTy *this)

{
  char cVar1;
  InfocPanelTy *this_00;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  ushort uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  InternalExceptionFrame local_50;
  InfocPanelTy *local_c;
  byte local_8;
  undefined3 uStack_7;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar11 = st::fn_006AD4D0("E:\\__titans\\Andrey\\infocen.cpp",0xde,0,iVar4,"%s"
                                ,"InfocPanelTy::PaintInfoc");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,"E:\\__titans\\Andrey\\infocen.cpp",0xde);
    return;
  }
  if (local_c->field_03D4 == 0xff) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(&local_c->field_0x234 + (uint)(byte)local_c->field_03D4 * 0x10);
  }
  st::fn_00403DD7(local_c,uVar6,local_c->field_02A4,0x58,0x29);
  if (this_00->field_03D4 == 0xff) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(&this_00->field_0x238 + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  st::fn_00403DD7(this_00,uVar6,this_00->field_02A8,0x8a,0x29);
  if (this_00->field_03D4 == 0xff) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(&this_00->field_0x236 + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  st::fn_00403DD7(this_00,uVar6,this_00->field_02A6,0xbc,0x29);
  if (this_00->field_03D4 == 0xff) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(&this_00->field_0x23a + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  st::fn_00403DD7(this_00,uVar6,this_00->field_02AA,0xf0,0x29);
  if (this_00->field_03D4 == 0xff) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(&this_00->field_0x23c + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  st::fn_00403DD7(this_00,uVar6,this_00->field_02AC,0x58,0x50);
  if (this_00->field_03D4 == 0xff) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(&this_00->field_0x240 + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  st::fn_00403DD7(this_00,uVar6,this_00->field_02B0,0x8a,0x50);
  if (this_00->field_03D4 == 0xff) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(&this_00->field_0x23e + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  st::fn_00403DD7(this_00,uVar6,this_00->field_02AE,0xbc,0x50);
  if (this_00->field_03D4 == 0xff) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(&this_00->field_0x242 + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  st::fn_00403DD7(this_00,uVar6,this_00->field_02B2,0xf0,0x50);
  if ((this_00->field_03D4 == 0xff) ||
     (9999 < *(int *)(&this_00->field_0x1b4 + (uint)(byte)this_00->field_03D4 * 0x10))) {
    uVar9 = 0xffffffff;
    pcVar8 = &DAT_007c3ff4;
    do {
      pcVar10 = pcVar8;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar8 = pcVar10 + -uVar9;
    pcVar10 = &this_00->field_018D;
    memmove(pcVar10, pcVar8, uVar9); /* compiler REP MOVS byte copy */
    uVar7 = 0;
  }
  else {
    st::external_00000080(&this_00->field_018D,"%4d",
              *(int *)(&this_00->field_0x1b4 + (uint)(byte)this_00->field_03D4 * 0x10));
  }
  st::fn_00710A90(this_00->field_03D5,this_00->field_0068,0,0x54,0x71,0x23,0xc);
  st::fn_007119C0(this_00->field_03D5,(uint *)&this_00->field_018D,-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
  if ((this_00->field_03D4 == 0xff) ||
     (999999 < *(int *)(&this_00->field_0x1b8 + (uint)(byte)this_00->field_03D4 * 0x10))) {
    uVar9 = 0xffffffff;
    pcVar8 = &DAT_007c3fec;
    do {
      pcVar10 = pcVar8;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar8 = pcVar10 + -uVar9;
    pcVar10 = &this_00->field_018D;
    memmove(pcVar10, pcVar8, uVar9); /* compiler REP MOVS byte copy */
    uVar7 = 0;
  }
  else {
    st::external_00000080(&this_00->field_018D,"%6d",
              *(int *)(&this_00->field_0x1b8 + (uint)(byte)this_00->field_03D4 * 0x10));
  }
  st::fn_00710A90(this_00->field_03D5,this_00->field_0068,0,0x78,0x71,0x17,0xc);
  st::fn_007119C0(this_00->field_03D5,(uint *)&this_00->field_018D,-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 4);
  if ((this_00->field_03D4 == 0xff) ||
     (999999 < *(int *)(&this_00->field_0x1bc + (uint)(byte)this_00->field_03D4 * 0x10))) {
    uVar9 = 0xffffffff;
    pcVar8 = &DAT_007c3fec;
    do {
      pcVar10 = pcVar8;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar8 = pcVar10 + -uVar9;
    pcVar10 = &this_00->field_018D;
    memmove(pcVar10, pcVar8, uVar9); /* compiler REP MOVS byte copy */
  }
  else {
    st::external_00000080(&this_00->field_018D,"%6d",
              *(int *)(&this_00->field_0x1bc + (uint)(byte)this_00->field_03D4 * 0x10));
  }
  st::fn_00710A90(this_00->field_03D5,this_00->field_0068,0,0xa2,0x71,0x23,0xc);
  st::fn_007119C0(this_00->field_03D5,(uint *)&this_00->field_018D,-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 5);
  if (this_00->field_03D4 == 0xff) {
    iVar4 = 0xce;
    iVar11 = 0x14;
    do {
      pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,0);
      st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,iVar4,0x71,'\x01',pbVar5);
      iVar4 = iVar4 + 4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  else {
    local_8 = 1;
    iVar4 = *(int *)(&this_00->field_0x1c0 + (uint)(byte)this_00->field_03D4 * 0x10);
    if (iVar4 < 1) {
      if (0 < iVar4 + 0x14) {
        uVar9 = 1;
        do {
          pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,uVar9 * 4 + 0xca,0x71,'\x01',
                 pbVar5);
          local_8 = local_8 + 1;
          uVar9 = (uint)local_8;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        } while ((int)uVar9 <=
                 *(int *)(&this_00->field_0x1c0 + (uint)(byte)this_00->field_03D4 * 0x10) + 0x14);
      }
      bVar3 = (&this_00->field_0x1c0)[(uint)(byte)this_00->field_03D4 * 0x10] + 0x15;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_8 = CONCAT31(uStack_7,bVar3);
      if (bVar3 < 0x15) {
        iVar11 = 0x15 - (uint)bVar3;
        iVar4 = (uint)bVar3 * 4 + 0xca;
        do {
          pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,4);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,iVar4,0x71,'\x01',pbVar5);
          iVar4 = iVar4 + 4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
    }
    else {
      if (0 < iVar4) {
        uVar9 = 1;
        do {
          pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,
                                        (-(uint)(DAT_0080874e != '\x03') & 2) + 1);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,uVar9 * 4 + 0xca,0x71,'\x01',
                 pbVar5);
          local_8 = local_8 + 1;
          uVar9 = (uint)local_8;
        } while ((int)uVar9 <=
                 *(int *)(&this_00->field_0x1c0 + (uint)(byte)this_00->field_03D4 * 0x10));
      }
      bVar3 = (&this_00->field_0x1c0)[(uint)(byte)this_00->field_03D4 * 0x10] + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_8 = CONCAT31(uStack_7,bVar3);
      if (bVar3 < 0x15) {
        iVar11 = 0x15 - (uint)bVar3;
        iVar4 = (uint)bVar3 * 4 + 0xca;
        do {
          pbVar5 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,0);
          st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,iVar4,0x71,'\x01',pbVar5);
          iVar4 = iVar4 + 4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 00521490 InfocPanelTy::GetMessage
#line 1 "decomp/ST.exe/functions/00521490/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00521490; family_names=InfocPanelTy::GetMessage; ret4=6;
   direct_offsets={10:2,14:2,18:2,1c:0} */

int __thiscall st::fn_00521490(InfocPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  int *piVar2;
  int iVar3;
  bool bVar5;
  int iVar6;
  InfocPanelTy *this_00;
  byte bVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  InternalExceptionFrame local_58;
  uint local_14;
  InfocPanelTy *local_10;
  undefined4 local_c;
  uint local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar8 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_10;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar11 = st::fn_006AD4D0("E:\\__titans\\Andrey\\infocen.cpp",0x11e,0,iVar8,
                                "%s","InfocPanelTy::GetMessage");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar8,0,"E:\\__titans\\Andrey\\infocen.cpp",0x11e);
    return 0xffff;
  }
  st::fn_00401401((SpecPanelTy *)local_10,message);
  SVar1 = message->id;
  if (SVar1 < MESS_SHARED_0061) {
    if (SVar1 == MESS_SHARED_0060) {
      iVar8 = 0;
      local_14 = (uint)(message->arg1).words.high;
      uVar12 = (uint)(message->arg1).words.low;
      local_c = 0;
      if (this_00->field_0172 == 1) {
        local_8 = local_8 & 0xffffff00;
        do {
          uVar9 = local_8 & 0xff;
          if (((((int)uVar12 < (int)(&this_00->field_02D4)[uVar9 * 5]) ||
               ((int)((&this_00->field_02DC)[uVar9 * 5] + (&this_00->field_02D4)[uVar9 * 5]) <=
                (int)uVar12)) || ((int)local_14 < (int)(&this_00->field_02D8)[uVar9 * 5])) ||
             ((int)((&this_00->field_02E0)[uVar9 * 5] + (&this_00->field_02D8)[uVar9 * 5]) <=
              (int)local_14)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          iVar8 = 0;
          if (bVar5) {
            iVar8 = (&this_00->field_02E4)[(local_8 & 0xff) * 5];
            break;
          }
          bVar7 = (char)local_8 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
        } while (bVar7 < 0xc);
      }
      iVar11 = this_00->field_0178;
      if (iVar11 != iVar8) {
        if (iVar11 != 0) {
          this_00->field_0028 = 0x4202;
          this_00->field_002C = 0;
          this_00->field_002E = 2;
          this_00->field_0030 = iVar11;
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)g_cursorClass_00802A30->field_0000)(&this_00->field_0x18);
          }
        }
        this_00->field_0178 = iVar8;
        if (iVar8 != 0) {
          this_00->field_0028 = 0x4201;
          this_00->field_002C = 0;
          this_00->field_002E = 2;
          this_00->field_0030 = iVar8;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)g_cursorClass_00802A30->field_0000)(&this_00->field_0x18);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
    }
    else {
      if (SVar1 == MESS_ID_CREATE) {
        st::fn_004040B1(this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      if (SVar1 == MESS_SHARED_0003) {
        st::fn_004015C3(this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  else if (SVar1 == MESS_MREPORTTY_B208) {
    this_00->field_03D4 = *(char *)(message->arg0).ptr + -1;
    st::fn_00404C69(this_00);
  }
  else if (SVar1 == MESS_PLAYPANELTY_B209) {
    piVar2 = (message->arg0).ptr;
    iVar8 = piVar2[3];
    iVar11 = this_00->field_003C;
    bVar7 = (&this_00->field_01AB)[*piVar2];
    uVar12 = (DAT_0080874e != '\x03') - 1 & 0x11;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar7));
    iVar3 = piVar2[4];
    iVar6 = DAT_00806734;
    if (this_00->field_005C != 0) {
      iVar6 = this_00->field_0044;
    }
    if (piVar2[1] == 0) {
      if (bVar7 != 0xff) {
        uVar12 = bVar7 + 1;
      }
    }
    else if ((piVar2[1] == 1) && (bVar7 != 0xff)) {
      uVar12 = bVar7 + 9;
    }
    pbVar10 = (byte *)st::fn_0070B3A0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03C4,uVar12);
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)this_00->field_0068,iVar8 - iVar11,iVar3 - iVar6,'\x01',
           pbVar10);
    st::fn_006B3640
              ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
               this_00->field_0044);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

