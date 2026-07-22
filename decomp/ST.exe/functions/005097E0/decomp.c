#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::SetControlObj

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254
    */

void __thiscall CPanelTy::SetControlObj(CPanelTy *this,char param_1)

{
  CPanelTy_field_0BFAState CVar1;
  char cVar2;
  code *pcVar3;
  CPanelTy *this_00;
  Global_sub_00525EF0_param_1Enum GVar4;
  int iVar5;
  char *pcVar6;
  LPSTR pCVar7;
  undefined4 *puVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  short sVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  int iVar20;
  undefined4 uVar21;
  char *pcVar22;
  undefined4 uVar23;
  AnonShape_004F2E40_DC76A8C6 local_b44;
  undefined4 auStack_a34 [502];
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
  Global_sub_00529590_param_1Enum *local_1c;
  undefined4 *local_18;
  int local_14;
  uint local_10;
  undefined1 *local_c;
  undefined4 *local_8;

  local_10c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_10c;
  local_20 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_10c.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_10c.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x53e,0,iVar5,
                                "%s","CPanelTy::SetControlObj");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x53e);
    return;
  }
  if (param_1 != '\0') {
    CursorClassTy::sub_0054A8D0(g_cursorClass_00802A30);
  }
  this_00 = local_20;
  if (local_20->field_0302 != 0) {
    StartSystemTy::sub_006E56B0(local_20->field_000C,local_20->field_0302);
  }
  this_00->field_0302 = 0;
  if (this_00->field_030C != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_030C);
  }
  puVar8 = &this_00->field_0314;
  this_00->field_030C = 0;
  local_18 = puVar8;
  if (this_00->field_0314 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0314);
  }
  *puVar8 = 0;
  if (this_00->field_0318 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0318);
  }
  this_00->field_0318 = 0;
  if (this_00->field_09D0 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_09D0);
  }
  this_00->field_09D0 = 0;
  puVar12 = &this_00->field_0A15;
  iVar5 = 6;
  do {
    if (*puVar12 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar12);
      *puVar12 = 0;
    }
    puVar12 = puVar12 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  CVar1 = this_00->field_0BFA;
  if (((CVar1 == CASE_0) || (CVar1 == CASE_3)) || (CVar1 == CASE_4)) {
    if (this_00->field_09C4 != 0) {
      this_00->field_0028 = 0x20;
      *(undefined4 *)&this_00->field_0x2c = 0;
      FUN_006e6080(this_00,2,this_00->field_09C4,(undefined4 *)&this_00->field_0x18);
    }
  }
  else {
    local_10 = local_10 & 0xffffff00;
    memset(local_70, 0, 0x50); /* compiler bulk-zero initialization */
    local_c = &this_00->field_0x86a;
    local_1c = &this_00->field_0BFE;
    iVar5 = -0xbff - (int)this_00;
    local_14 = iVar5;
    do {
      if (*local_1c == 0) goto LAB_00509a02;
      iVar13 = 0xe;
      iVar11 = 0xf;
      switch(local_1c + iVar5) {
      case (Global_sub_00529590_param_1Enum *)0x0:
        iVar13 = 0x4b;
        break;
      case (Global_sub_00529590_param_1Enum *)0x1:
        iVar13 = 0x88;
        break;
      case (Global_sub_00529590_param_1Enum *)0x2:
        goto switchD_00509942_caseD_2;
      case (Global_sub_00529590_param_1Enum *)0x3:
        iVar13 = 0x88;
        goto switchD_00509942_caseD_2;
      case (Global_sub_00529590_param_1Enum *)0x4:
        iVar13 = 0x4b;
switchD_00509942_caseD_2:
        iVar11 = 0x37;
      }
      sub_004F17D0(this_00,0,(byte)local_10);
      if (this_00->field_0BFC == '\0') {
        local_8 = (undefined4 *)0x0;
      }
      else {
        local_8 = (undefined4 *)(uint)local_1c[6];
      }
      pcVar22 = (char *)0x0;
      uVar19 = 0;
      uVar18 = 1;
      iVar5 = 0;
      puVar14 = local_c;
      pcVar6 = thunk_FUN_00529590(*local_1c,this_00->field_0BF5);
      pCVar7 = thunk_FUN_00571240(pcVar6,iVar5);
      SetButStruct(this_00,(AnonShape_004F2E40_DC76A8C6 *)((int)&local_b44 + local_28 * 0x17c),5,
                   local_8,iVar13,iVar11,1,pCVar7,uVar18,uVar19,puVar14,pcVar22);
      iVar5 = local_28 * 0x5f;
      local_28 = local_28 + 1;
      auStack_a34[iVar5] = 1;
      iVar5 = local_14;
LAB_00509a02:
      bVar10 = (char)local_10 + 1;
      local_c = local_c + 0x27;
      local_1c = local_1c + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_10 = CONCAT31(local_10._1_3_,bVar10);
    } while (bVar10 < 6);
    local_60 = this_00->field_0008;
    local_24 = &local_b44;
    local_70[0] = 1;
    local_70[1] = 0xffffffff;
    local_5c = 2;
    local_58 = 0xb203;
    local_3c = 2;
    local_38 = 0xb204;
    local_40 = local_60;
    (*this_00->field_000C->vtable->CreateObject)
              ((SystemClassTy *)this_00->field_000C,9,&this_00->field_0302,(int *)0x0,local_70,0);
    sub_004F1610(this_00,'\0');
    if (this_00->field_09C4 != 0) {
      this_00->field_0028 = 0x20;
      if (this_00->field_0BFC == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = (uint)(byte)this_00->field_0C0A;
      }
      *(uint *)&this_00->field_0x2c = uVar9;
      FUN_006e6080(this_00,2,this_00->field_09C4,(undefined4 *)&this_00->field_0x18);
    }
    if (this_00->field_0BFB == '\x02') {
LAB_00509b60:
      uVar23 = 0;
      uVar21 = 0;
      iVar11 = 0;
      pcVar6 = (char *)0x0;
      iVar5 = 0;
      uVar18 = 0;
      sVar17 = 0;
      uVar16 = 0xb13f;
      uVar15 = 0xb12f;
      pCVar7 = thunk_FUN_00571240("BUT_SMALL",0);
      uVar15 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x92,0x6e,1,pCVar7,uVar15,
                         uVar16,sVar17,uVar18,iVar5,pcVar6,iVar11,uVar21,uVar23);
      *local_18 = uVar15;
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
    switch(this_00->field_0BF5) {
    case CASE_32:
    case CASE_40:
    case CASE_44:
    case CASE_49:
      if (*(int *)&this_00->field_0xc12 != 0) goto LAB_00509b60;
      break;
    case CASE_33:
      iVar5 = 0xb12f;
      local_c = (undefined1 *)0x4c;
      local_8 = (undefined4 *)0x2;
      puVar8 = local_18;
      do {
        if (*(int *)((int)puVar8 + 0x8fe) != 0) {
          uVar21 = 0;
          uVar16 = 0;
          iVar20 = 0;
          pcVar6 = (char *)0x0;
          iVar13 = 0;
          uVar18 = 0;
          sVar17 = 0;
          uVar15 = 0xb13f;
          iVar11 = iVar5;
          pCVar7 = thunk_FUN_00571240("BUT_SMALL",0);
          uVar15 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x92,(int)local_c,1,
                             pCVar7,iVar11,uVar15,sVar17,uVar18,iVar13,pcVar6,iVar20,uVar16,uVar21);
          *puVar8 = uVar15;
        }
        puVar8 = puVar8 + 1;
        iVar5 = iVar5 + 1;
        local_c = (undefined1 *)((int)local_c + 0x22);
        local_8 = (undefined4 *)((int)local_8 + -1);
      } while (local_8 != (undefined4 *)0x0);
      g_currentExceptionFrame = local_10c.previous;
      return;
    case CASE_34:
      local_8 = (undefined4 *)0x2;
      memset(local_c8, 0, 0x58); /* compiler bulk-zero initialization */
      iVar5 = 0;
      memset(local_25c, 0, 0x150); /* compiler bulk-zero initialization */
      local_14 = this_00->field_0138;
      puVar8 = local_25c + 1;
      iVar11 = this_00->field_0050 + 99;
      iVar5 = 0;
      do {
        iVar13 = local_14;
        puVar8[-1] = iVar5 + 1;
        *puVar8 = 0;
        puVar8[2] = iVar11;
        puVar8[4] = 0x2e;
        iVar20 = DAT_00806734;
        if (iVar13 != 0) {
          iVar20 = this_00->field_00A8;
        }
        puVar8[3] = iVar20 + 0x22;
        puVar8[5] = 0x10;
        puVar8[0x11] = 0;
        puVar8[0x15] = 0x101;
        puVar8[10] = 0x101;
        puVar8[0x16] = 3;
        puVar8[0xb] = 3;
        puVar8[0xc] = 0x4201;
        puVar8[0x17] = 0x4202;
        *(undefined2 *)(puVar8 + 0x18) = 0;
        *(undefined2 *)(puVar8 + 0xd) = 0;
        *(undefined2 *)((int)puVar8 + 0x62) = 2;
        *(undefined2 *)((int)puVar8 + 0x36) = 2;
        if (iVar5 == 0) {
          uVar15 = 0x3aa6;
LAB_00509ddd:
          puVar8[0x19] = uVar15;
          puVar8[0xe] = uVar15;
        }
        else if (iVar5 == 1) {
          uVar15 = 0x3aa7;
          goto LAB_00509ddd;
        }
        iVar11 = iVar11 + 0x31;
        puVar8 = puVar8 + 0x1c;
        local_8 = (undefined4 *)((int)local_8 + -1);
        iVar5 = iVar5 + 1;
        if (local_8 == (undefined4 *)0x0) {
          local_80 = local_25c;
          local_7c = (uint)(byte)this_00->field_09D4;
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
          (*this_00->field_000C->vtable->CreateObject)
                    ((SystemClassTy *)this_00->field_000C,5,&this_00->field_09D0,(int *)0x0,local_c8
                     ,0);
          local_c = (undefined1 *)((uint)local_c & 0xffffff00);
          local_10 = 0x3b;
          iVar5 = *(int *)(this_00->field_0194 + 4);
          iVar11 = *(int *)(this_00->field_09F9 + 2);
          puVar14 = &this_00->field_0xa2d;
          memset((void *)puVar14, 0, 0xea); /* compiler bulk-zero initialization */
          local_14 = (iVar5 - iVar11) / 2 + 8;
          local_8 = &this_00->field_0A15;
          iVar5 = 0xb18f;
          do {
            *puVar14 = 2;
            if (DAT_0080874e == '\x01') {
              GVar4 = (this_00->field_09D4 != '\x01') + CASE_1;
            }
            else {
              GVar4 = CASE_2 - (this_00->field_09D4 != '\x01');
            }
            uVar15 = thunk_FUN_00525ef0(GVar4,(char)local_c);
            *(undefined4 *)(puVar14 + 1) = uVar15;
            uVar15 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),local_14,local_10,0,
                               (char *)0x0,iVar5,iVar5 + 0x10,1,0,(int)puVar14,(char *)0x0,0x11,10,0
                              );
            puVar14 = puVar14 + 0x27;
            local_10 = local_10 + 0xb;
            *local_8 = uVar15;
            bVar10 = (char)local_c + 1;
            iVar5 = iVar5 + 1;
            local_8 = local_8 + 1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_c = (undefined1 *)CONCAT31(local_c._1_3_,bVar10);
          } while (bVar10 < 6);
          g_currentExceptionFrame = local_10c.previous;
          return;
        }
      } while( true );
    case CASE_35:
      if (this_00->field_0C31 != '\0') {
        uVar23 = 0;
        uVar21 = 0;
        iVar11 = 0;
        pcVar6 = (char *)0x0;
        iVar5 = 0;
        uVar18 = 0;
        sVar17 = 0;
        uVar16 = 0xb13f;
        uVar15 = 0xb12f;
        pCVar7 = thunk_FUN_00571240("BUT_SMALL",0);
        cVar2 = this_00->field_0BFC;
LAB_00509c11:
        uVar15 = CreateBut(this_00,5,0,(uint)(cVar2 != '\0'),0x92,0x6e,1,pCVar7,uVar15,uVar16,sVar17
                           ,uVar18,iVar5,pcVar6,iVar11,uVar21,uVar23);
        *local_18 = uVar15;
        g_currentExceptionFrame = local_10c.previous;
        return;
      }
      break;
    case CASE_3C:
      if (this_00->field_0C3C == '\x01') {
        uVar23 = 0;
        uVar21 = 0;
        iVar11 = 0;
        pcVar6 = (char *)0x0;
        iVar5 = 0;
        uVar18 = 0;
        sVar17 = 0;
        uVar16 = 0xb13f;
        uVar15 = 0xb12f;
        pCVar7 = thunk_FUN_00571240("BUT_SMALL",0);
        cVar2 = this_00->field_0BFC;
        goto LAB_00509c11;
      }
      break;
    case CASE_43:
    case CASE_4C:
      if (this_00->field_0BFC == '\0') {
        iVar5 = 0;
      }
      else {
        iVar5 = (-(uint)(this_00->field_0C11 != 0) & 2) + 1;
      }
      uVar23 = 0;
      uVar21 = 0;
      iVar13 = 0;
      pcVar6 = (char *)0x0;
      iVar11 = 0;
      uVar18 = 0;
      sVar17 = 0;
      uVar16 = 0xb12e;
      uVar15 = 0xb12d;
      pCVar7 = thunk_FUN_00571240("BUT_AUTO",0);
      uVar15 = CreateBut(this_00,5,3,iVar5,-1,0x58,1,pCVar7,uVar15,uVar16,sVar17,uVar18,iVar11,
                         pcVar6,iVar13,uVar21,uVar23);
      this_00->field_030C = uVar15;
      g_currentExceptionFrame = local_10c.previous;
      return;
    case CASE_50:
      iVar11 = 0xb17f;
      local_c = (undefined1 *)0x6;
      iVar5 = 0x3b;
      local_14 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09F9 + 2)) / 2 + 8;
      local_8 = &this_00->field_0A15;
      do {
        uVar15 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),local_14,iVar5,0,
                           (char *)0x0,iVar11 + -0x20,iVar11,2,0,0x4f20,(char *)0x0,0xaa,10,
                           iVar11 + -0x10);
        iVar11 = iVar11 + 1;
        iVar5 = iVar5 + 0xb;
        *local_8 = uVar15;
        local_8 = local_8 + 1;
        local_c = (undefined1 *)((int)local_c + -1);
      } while (local_c != (undefined1 *)0x0);
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_10c.previous;
  return;
}

