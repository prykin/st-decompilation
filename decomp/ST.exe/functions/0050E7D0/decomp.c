#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::SetControlObjSI

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254
    */

void __thiscall CPanelTy::SetControlObjSI(CPanelTy *this,char param_1)

{
  CPanelTy_field_0BFAState CVar1;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar2;
  code *pcVar3;
  CPanelTy *this_00;
  Global_sub_00529590_param_1Enum *pGVar4;
  int iVar5;
  char *pcVar6;
  LPSTR pCVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  uint uVar13;
  byte bVar14;
  uint *puVar15;
  int iVar16;
  bool bVar17;
  undefined4 uVar18;
  short sVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  char *pcVar25;
  AnonShape_004F2E40_DC76A8C6 local_84c;
  undefined4 auStack_73c [5];
  undefined4 auStack_728 [307];
  undefined4 local_25c [84];
  InternalExceptionFrame local_10c;
  undefined4 local_c8 [4];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 *local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [4];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_28;
  AnonShape_004F2E40_DC76A8C6 *local_24;
  CPanelTy *local_20;
  undefined1 *local_1c;
  uint local_18;
  Global_sub_00529590_param_1Enum *local_14;
  undefined1 *local_10;
  uint local_c;
  Global_sub_00529590_param_1Enum *local_8;

  local_10c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_10c;
  local_20 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_10c.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_10c.previous;
    iVar16 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x94e,0,iVar5,
                                "%s","CPanelTy::SetControlObjSI");
    if (iVar16 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x94e);
    return;
  }
  if (param_1 != '\0') {
    thunk_FUN_0054a8d0(PTR_00802a30);
  }
  this_00 = local_20;
  if (local_20->field_0302 != 0) {
    StartSystemTy::sub_006E56B0(local_20->field_000C,local_20->field_0302);
  }
  this_00->field_0302 = 0;
  if (this_00->field_030C != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_030C);
  }
  this_00->field_030C = 0;
  if (this_00->field_0314 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0314);
  }
  this_00->field_0314 = 0;
  if (this_00->field_0318 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0318);
  }
  this_00->field_0318 = 0;
  if (this_00->field_09D0 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_09D0);
  }
  this_00->field_09D0 = 0;
  puVar15 = &this_00->field_0A15;
  iVar5 = 6;
  do {
    if (*puVar15 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar15);
      *puVar15 = 0;
    }
    puVar15 = puVar15 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar15 = &this_00->field_0B1F;
  iVar5 = 6;
  do {
    if (*puVar15 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar15);
      *puVar15 = 0;
    }
    puVar15 = puVar15 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (this_00->field_0B37 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0B37);
  }
  CVar1 = this_00->field_0BFA;
  this_00->field_0B37 = 0;
  if (((CVar1 == CASE_0) || (CVar1 == CASE_3)) || (CVar1 == CASE_4)) {
    if (this_00->field_09C4 != 0) {
      *(undefined4 *)&this_00->field_0x2c = 0;
      this_00->field_0028 = 0x20;
      FUN_006e6080(this_00,2,this_00->field_09C4,(undefined4 *)&this_00->field_0x18);
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
    g_currentExceptionFrame = local_10c.previous;
    return;
  }
  local_18 = local_18 & 0xffffff00;
  memset(local_70, 0, 0x50); /* compiler bulk-zero initialization */
  local_1c = &this_00->field_0x86a;
  local_8 = &this_00->field_0BFE;
  puVar12 = (undefined1 *)(-0xbfe - (int)this_00);
  local_10 = puVar12;
  do {
    if (*local_8 != 0) {
      local_14 = local_8 + (int)puVar12;
      iVar16 = 0xc;
      iVar5 = 0xd;
      if (local_14 == (Global_sub_00529590_param_1Enum *)0x1) {
        iVar16 = 0x49;
      }
      else if (local_14 == (Global_sub_00529590_param_1Enum *)0x2) {
        iVar16 = 0xc;
        iVar5 = 0x27;
      }
      else if (local_14 == (Global_sub_00529590_param_1Enum *)0x3) {
        iVar16 = 0x49;
        iVar5 = 0x27;
      }
      thunk_FUN_004f17d0(this_00,0,(byte)local_18);
      if (this_00->field_0BFC == '\0') {
        local_c = 0;
      }
      else {
        local_c = (uint)local_8[6];
      }
      pcVar25 = (char *)0x0;
      uVar24 = 0;
      uVar23 = 1;
      iVar22 = 0;
      puVar12 = local_1c;
      pcVar6 = thunk_FUN_00529590(*local_8,this_00->field_0BF5);
      pCVar7 = thunk_FUN_00571240(pcVar6,iVar22);
      SetButStruct(this_00,(AnonShape_004F2E40_DC76A8C6 *)((int)&local_84c + local_28 * 0x17c),5,
                   local_c,iVar16,iVar5,6,pCVar7,uVar23,uVar24,puVar12,pcVar25);
      pGVar4 = local_14;
      iVar5 = local_28;
      pAVar2 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02DE;
      auStack_73c[local_28 * 0x5f] = 1;
      uVar8 = FUN_0070b3a0(pAVar2,(int)pGVar4);
      puVar12 = local_10;
      auStack_728[iVar5 * 0x5f] = uVar8;
      auStack_728[iVar5 * 0x5f + 1] = 0x3c;
      local_28 = local_28 + 1;
    }
    bVar14 = (char)local_18 + 1;
    local_1c = local_1c + 0x27;
    local_8 = local_8 + 1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_18 = CONCAT31(local_18._1_3_,bVar14);
  } while (bVar14 < 4);
  local_60 = this_00->field_0008;
  local_24 = &local_84c;
  local_70[0] = 1;
  local_70[1] = 0xffffffff;
  local_5c = 2;
  local_58 = 0xb20f;
  local_3c = 2;
  local_38 = 0xb210;
  local_40 = local_60;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (*(code *)this_00->field_000C->vtable->field_0008)(9,&this_00->field_0302,0,local_70,0);
  thunk_FUN_004f1610(this_00,'\0');
  if (this_00->field_09C4 != 0) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      uVar13 = 0;
    }
    else {
      uVar13 = (uint)(byte)this_00->field_0C0A;
    }
    *(uint *)&this_00->field_0x2c = uVar13;
    FUN_006e6080(this_00,2,this_00->field_09C4,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_0BFB == '\x02') {
LAB_0050eb47:
    uVar21 = 0;
    uVar20 = 0;
    iVar16 = 0;
    pcVar6 = (char *)0x0;
    iVar5 = 0;
    uVar23 = 0;
    sVar19 = 0;
    uVar18 = 0xb13f;
    uVar8 = 0xb12f;
    pCVar7 = thunk_FUN_00571240("BUT_SMALL",0);
    uVar13 = (uint)(this_00->field_0BFC != '\0');
  }
  else {
    switch(this_00->field_0BF5) {
    case CASE_53:
      if (this_00->field_0C3C != '\x01') {
        g_currentExceptionFrame = local_10c.previous;
        return;
      }
      uVar21 = 0;
      uVar20 = 0;
      iVar16 = 0;
      pcVar6 = (char *)0x0;
      iVar5 = 0;
      uVar23 = 0;
      sVar19 = 0;
      uVar18 = 0xb13f;
      uVar8 = 0xb12f;
      pCVar7 = thunk_FUN_00571240("BUT_SMALL",0);
      uVar13 = (uint)(this_00->field_0BFC != '\0');
      break;
    case CASE_54:
    case CASE_55:
    case CASE_56:
    case CASE_57:
    case CASE_58:
    case CASE_59:
    case CASE_5A:
      if (this_00->field_0C31 == '\0') {
        g_currentExceptionFrame = local_10c.previous;
        return;
      }
      goto LAB_0050eb47;
    case CASE_5B:
      local_c = 2;
      memset(local_c8, 0, 0x58); /* compiler bulk-zero initialization */
      iVar5 = 0;
      memset(local_25c, 0, 0x150); /* compiler bulk-zero initialization */
      local_10 = (undefined1 *)(this_00->field_0050 + 0x23);
      iVar16 = 0;
      local_14 = (Global_sub_00529590_param_1Enum *)this_00->field_0138;
      puVar9 = local_25c + 1;
      iVar5 = 0;
      do {
        puVar12 = local_10;
        puVar9[-1] = iVar5 + 1;
        *puVar9 = 0;
        puVar9[2] = puVar12;
        bVar17 = local_14 != (Global_sub_00529590_param_1Enum *)0x0;
        puVar9[4] = 0x1d;
        iVar22 = DAT_00806734;
        if (bVar17) {
          iVar22 = this_00->field_00A8;
        }
        puVar9[3] = iVar22 + 0x59 + iVar16;
        puVar9[5] = 0x11;
        puVar9[0x11] = 0;
        puVar9[0x15] = 0x101;
        puVar9[10] = 0x101;
        puVar9[0x16] = 3;
        puVar9[0xb] = 3;
        puVar9[0xc] = 0x4201;
        puVar9[0x17] = 0x4202;
        *(undefined2 *)(puVar9 + 0x18) = 0;
        *(undefined2 *)(puVar9 + 0xd) = 0;
        *(undefined2 *)((int)puVar9 + 0x62) = 2;
        *(undefined2 *)((int)puVar9 + 0x36) = 2;
        if (iVar5 == 0) {
          uVar8 = 0x3aa9;
LAB_0050edc5:
          puVar9[0x19] = uVar8;
          puVar9[0xe] = uVar8;
        }
        else if (iVar5 == 1) {
          uVar8 = 0x3aaa;
          goto LAB_0050edc5;
        }
        iVar16 = iVar16 + 0x12;
        puVar9 = puVar9 + 0x1c;
        local_c = local_c + -1;
        iVar5 = iVar5 + 1;
        if (local_c == 0) {
          local_7c = (uint)(byte)this_00->field_09D4;
          local_80 = local_25c;
          local_b8 = this_00->field_0008;
          local_c8[0] = 1;
          local_c8[1] = 1;
          local_78 = 1;
          local_74 = 1;
          local_b4 = 2;
          local_b0 = 0xb207;
          local_94 = 2;
          local_90 = 0xb206;
          local_98 = local_b8;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)this_00->field_000C->vtable->field_0008)(5,&this_00->field_09D0,0,local_c8,0);
          local_8 = (Global_sub_00529590_param_1Enum *)((uint)local_8 & 0xffffff00);
          memset(&this_00->field_0xa2d, 0, 0xea); /* compiler bulk-zero initialization */
          do {
            if ((this_00->field_09D4 == '\x01') && ((char)local_8 == '\x03')) {
              uVar11 = 0;
            }
            else {
              uVar11 = 2;
            }
            uVar13 = (uint)local_8 & 0xff;
            local_10 = &this_00->field_0x0 + uVar13 * 0x27;
            puVar12 = local_10 + 0xa2d;
            *puVar12 = uVar11;
            uVar8 = thunk_FUN_00525ef0(this_00->field_09D4 + CASE_2,(char)local_8);
            *(undefined4 *)(local_10 + 0xa2e) = uVar8;
            if ((this_00->field_09D4 == '\x01') && ((char)local_8 == '\x03')) {
              uVar10 = 0;
            }
            else {
              uVar10 = (uint)(this_00->field_0BFC != '\0');
            }
            uVar8 = CreateBut(this_00,5,0,uVar10,0xba,uVar13 * 0xb + 0x55,0,(char *)0x0,
                              uVar13 + 0xb18f,uVar13 + 0xb19f,1,0,(int)puVar12,(char *)0x0,0x11,10,0
                             );
            (&this_00->field_0A15)[uVar13] = uVar8;
            bVar14 = (char)local_8 + 1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_8 = (Global_sub_00529590_param_1Enum *)CONCAT31(local_8._1_3_,bVar14);
          } while (bVar14 < 4);
          g_currentExceptionFrame = local_10c.previous;
          return;
        }
      } while( true );
    case CASE_5C:
      if (*(int *)&this_00->field_0xc12 == 0) {
        g_currentExceptionFrame = local_10c.previous;
        return;
      }
      uVar21 = 0;
      uVar20 = 0;
      iVar16 = 0;
      pcVar6 = (char *)0x0;
      iVar5 = 0;
      uVar23 = 0;
      sVar19 = 0;
      uVar18 = 0xb13f;
      uVar8 = 0xb12f;
      pCVar7 = thunk_FUN_00571240("BUT_SMALL",0);
      uVar13 = (uint)(this_00->field_0BFC != '\0');
      break;
    default:
      g_currentExceptionFrame = local_10c.previous;
      return;
    case CASE_67:
    case CASE_68:
      if (this_00->field_0BFC == '\0') {
        uVar13 = 0;
      }
      else {
        uVar13 = (uint)(byte)this_00->field_0C0B;
      }
      uVar8 = CreateBut(this_00,5,0,uVar13,0x1a,0x5d,1,"BUT_MINUSSI",0xb211,0xb212,0,0,0,
                        (char *)0x0,0,0,0);
      this_00->field_0B1F = uVar8;
      if (this_00->field_0BFC == '\0') {
        uVar13 = 0;
      }
      else {
        uVar13 = (uint)(byte)this_00->field_0C0C;
      }
      uVar8 = CreateBut(this_00,5,0,uVar13,0xba,0x5d,1,"BUT_PLUSSI",0xb213,0xb214,0,0,0,
                        (char *)0x0,0,0,0);
      this_00->field_0B23 = uVar8;
      g_currentExceptionFrame = local_10c.previous;
      return;
    case CASE_6D:
      uVar8 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x2a,0x7b,1,
                        "BUT_MINUSSI",0xb211,0xb212,0,0,0,(char *)0x0,0,0,0);
      this_00->field_0B1F = uVar8;
      uVar8 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x45,0x7b,1,
                        "BUT_PLUSSI",0xb213,0xb214,0,0,0,(char *)0x0,0,0,0);
      this_00->field_0B23 = uVar8;
      uVar8 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x8f,0x7b,1,
                        "BUT_MINUSSI",0xb215,0xb216,0,0,0,(char *)0x0,0,0,0);
      this_00->field_0B27 = uVar8;
      uVar8 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0xaa,0x7b,1,
                        "BUT_PLUSSI",0xb217,0xb218,0,0,0,(char *)0x0,0,0,0);
      this_00->field_0B2B = uVar8;
      uVar8 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x17,100,0,(char *)0x0,
                        0xb219,0xb21a,0,0,0,(char *)0x0,0x11,10,0);
      this_00->field_0B2F = uVar8;
      uVar8 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0xc5,100,0,(char *)0x0,
                        0xb21b,0xb21c,0,0,0,(char *)0x0,0x11,10,0);
      this_00->field_0B33 = uVar8;
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
  }
  uVar8 = CreateBut(this_00,5,0,uVar13,0x9a,0x59,1,pCVar7,uVar8,uVar18,sVar19,uVar23,iVar5,pcVar6,
                    iVar16,uVar20,uVar21);
  this_00->field_0314 = uVar8;
  g_currentExceptionFrame = local_10c.previous;
  return;
}

