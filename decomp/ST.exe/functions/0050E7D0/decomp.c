#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::SetControlObjSI

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254
    */

void __thiscall CPanelTy::SetControlObjSI(CPanelTy *this,char param_1)

{
  CPanelTy_field_0BFAState CVar1;
  char cVar2;
  AnonShape_GLOBAL_0081175C_57F682DD *pAVar3;
  CPanelTy *this_00;
  Global_sub_00529590_param_1Enum *pGVar5;
  int iVar6;
  char *pcVar7;
  LPSTR pCVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 uVar12;
  undefined1 *puVar13;
  uint uVar14;
  byte bVar15;
  uint *puVar16;
  int iVar17;
  bool bVar18;
  undefined4 uVar19;
  short sVar20;
  int iVar21;
  ushort uVar22;
  ushort uVar23;
  undefined4 uVar24;
  char *pcVar25;
  undefined4 uVar26;
  AnonShape_004F2E40_DC76A8C6 local_84c [5];
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
  iVar6 = Library::MSVCRT::__setjmp3(local_10c.jumpBuffer,0);
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_10c.previous;
    iVar17 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x94e,0,iVar6,
                                "%s","CPanelTy::SetControlObjSI");
    if (iVar17 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x94e);
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
  if (this_00->field_0308[1] != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0308[1]);
  }
  this_00->field_0308[1] = 0;
  if (this_00->field_0310[1] != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0310[1]);
  }
  this_00->field_0310[1] = 0;
  if (this_00->field_0310[2] != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0310[2]);
  }
  uVar10 = this_00->field_09D0;
  this_00->field_0310[2] = 0;
  if (uVar10 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,uVar10);
  }
  this_00->field_09D0 = 0;
  puVar16 = this_00->field_0A15;
  iVar6 = 6;
  do {
    if (*puVar16 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar16);
      *puVar16 = 0;
    }
    puVar16 = puVar16 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  puVar16 = this_00->field_0B1F;
  iVar6 = 6;
  do {
    if (*puVar16 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar16);
      *puVar16 = 0;
    }
    puVar16 = puVar16 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (this_00->field_0B37 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_0B37);
  }
  CVar1 = this_00->field_0BFA;
  this_00->field_0B37 = 0;
  if (((CVar1 == CASE_0) || (CVar1 == CASE_3)) || (CVar1 == CASE_4)) {
    uVar10 = this_00->field_09C0[1];
    if (uVar10 != 0) {
      *(undefined4 *)&this_00->field_0x2c = 0;
      this_00->field_0028 = 0x20;
      FUN_006e6080(this_00,2,uVar10,(undefined4 *)&this_00->field_0x18);
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
  puVar13 = (undefined1 *)(-0xbfe - (int)this_00);
  local_10 = puVar13;
  do {
    if (*local_8 != 0) {
      local_14 = local_8 + (int)puVar13;
      iVar17 = 0xc;
      iVar6 = 0xd;
      if (local_14 == (Global_sub_00529590_param_1Enum *)0x1) {
        iVar17 = 0x49;
      }
      else if (local_14 == (Global_sub_00529590_param_1Enum *)0x2) {
        iVar17 = 0xc;
        iVar6 = 0x27;
      }
      else if (local_14 == (Global_sub_00529590_param_1Enum *)0x3) {
        iVar17 = 0x49;
        iVar6 = 0x27;
      }
      sub_004F17D0(this_00,0,(byte)local_18);
      if (this_00->field_0BFC == '\0') {
        local_c = 0;
      }
      else {
        local_c = (uint)local_8[6];
      }
      pcVar25 = nullptr;
      uVar23 = 0;
      uVar22 = 1;
      iVar21 = 0;
      puVar13 = local_1c;
      pcVar7 = thunk_FUN_00529590(*local_8,this_00->field_0BF5);
      pCVar8 = thunk_FUN_00571240(pcVar7,iVar21);
      SetButStruct(this_00,(AnonShape_004F2E40_DC76A8C6 *)((int)local_84c + local_28 * 0x17c),5,
                   local_c,iVar17,iVar6,6,pCVar8,uVar22,uVar23,puVar13,pcVar25);
      pGVar5 = local_14;
      iVar6 = local_28;
      pAVar3 = (AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02DE;
      *(undefined4 *)((int)local_84c + local_28 * 0x17c + 0x110) = 1;
      uVar9 = FUN_0070b3a0(pAVar3,(int)pGVar5);
      puVar13 = local_10;
      *(undefined4 *)((int)local_84c + iVar6 * 0x17c + 0x124) = uVar9;
      *(undefined4 *)((int)local_84c + iVar6 * 0x17c + 0x128) = 0x3c;
      local_28 = local_28 + 1;
    }
    bVar15 = (char)local_18 + 1;
    local_1c = local_1c + 0x27;
    local_8 = local_8 + 1;
    local_18 = STReplaceLowByte((uint32_t)(local_18), (uint8_t)(bVar15));
  } while (bVar15 < 4);
  local_60 = this_00->field_0008;
  local_24 = local_84c;
  local_70[0] = 1;
  local_70[1] = 0xffffffff;
  local_5c = 2;
  local_58 = 0xb20f;
  local_3c = 2;
  local_38 = 0xb210;
  local_40 = local_60;
  (*this_00->field_000C->vtable->CreateObject)
            ((SystemClassTy *)this_00->field_000C,9,&this_00->field_0302,nullptr,local_70,0);
  sub_004F1610(this_00,'\0');
  uVar10 = this_00->field_09C0[1];
  if (uVar10 != 0) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      uVar14 = 0;
    }
    else {
      uVar14 = (uint)(byte)this_00->field_0C0A;
    }
    *(uint *)&this_00->field_0x2c = uVar14;
    FUN_006e6080(this_00,2,uVar10,(undefined4 *)&this_00->field_0x18);
  }
  if (this_00->field_0BFB == '\x02') {
LAB_0050eb47:
    uVar26 = 0;
    uVar24 = 0;
    iVar17 = 0;
    pcVar7 = nullptr;
    iVar6 = 0;
    uVar22 = 0;
    sVar20 = 0;
    uVar19 = 0xb13f;
    uVar9 = 0xb12f;
    pCVar8 = thunk_FUN_00571240("BUT_SMALL",0);
    uVar10 = (uint)(this_00->field_0BFC != '\0');
  }
  else {
    switch(this_00->field_0BF5) {
    case CASE_53:
      if (this_00->field_0C3C != CASE_1) {
        g_currentExceptionFrame = local_10c.previous;
        return;
      }
      uVar26 = 0;
      uVar24 = 0;
      iVar17 = 0;
      pcVar7 = nullptr;
      iVar6 = 0;
      uVar22 = 0;
      sVar20 = 0;
      uVar19 = 0xb13f;
      uVar9 = 0xb12f;
      pCVar8 = thunk_FUN_00571240("BUT_SMALL",0);
      uVar10 = (uint)(this_00->field_0BFC != '\0');
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
      iVar6 = 0;
      memset(local_25c, 0, 0x150); /* compiler bulk-zero initialization */
      local_10 = (undefined1 *)(this_00->field_0050 + 0x23);
      iVar17 = 0;
      local_14 = (Global_sub_00529590_param_1Enum *)this_00->field_0138;
      puVar11 = local_25c + 1;
      iVar6 = 0;
      do {
        puVar13 = local_10;
        puVar11[-1] = iVar6 + 1;
        *puVar11 = 0;
        puVar11[2] = puVar13;
        bVar18 = local_14 != nullptr;
        puVar11[4] = 0x1d;
        iVar21 = DAT_00806734;
        if (bVar18) {
          iVar21 = this_00->field_00A8;
        }
        puVar11[3] = iVar21 + 0x59 + iVar17;
        puVar11[5] = 0x11;
        puVar11[0x11] = 0;
        puVar11[0x15] = 0x101;
        puVar11[10] = 0x101;
        puVar11[0x16] = 3;
        puVar11[0xb] = 3;
        puVar11[0xc] = 0x4201;
        puVar11[0x17] = 0x4202;
        *(undefined2 *)(puVar11 + 0x18) = 0;
        *(undefined2 *)(puVar11 + 0xd) = 0;
        *(undefined2 *)((int)puVar11 + 0x62) = 2;
        *(undefined2 *)((int)puVar11 + 0x36) = 2;
        if (iVar6 == 0) {
          uVar9 = 0x3aa9;
LAB_0050edc5:
          puVar11[0x19] = uVar9;
          puVar11[0xe] = uVar9;
        }
        else if (iVar6 == 1) {
          uVar9 = 0x3aaa;
          goto LAB_0050edc5;
        }
        iVar17 = iVar17 + 0x12;
        puVar11 = puVar11 + 0x1c;
        local_c = local_c + -1;
        iVar6 = iVar6 + 1;
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
          (*this_00->field_000C->vtable->CreateObject)
                    ((SystemClassTy *)this_00->field_000C,5,&this_00->field_09D0,nullptr,local_c8
                     ,0);
          local_8 = (Global_sub_00529590_param_1Enum *)((uint)local_8 & 0xffffff00);
          memset(&this_00->field_0xa2d, 0, 0xea); /* compiler bulk-zero initialization */
          do {
            if ((this_00->field_09D4 == '\x01') &&
               ((Global_sub_00525EF0_param_2Enum)local_8 == CASE_3)) {
              uVar12 = 0;
            }
            else {
              uVar12 = 2;
            }
            uVar10 = (uint)local_8 & 0xff;
            local_10 = &this_00->field_0x0 + uVar10 * 0x27;
            puVar13 = local_10 + 0xa2d;
            *puVar13 = uVar12;
            uVar9 = thunk_FUN_00525ef0(this_00->field_09D4 + CASE_2,
                                       (Global_sub_00525EF0_param_2Enum)local_8);
            *(undefined4 *)(local_10 + 0xa2e) = uVar9;
            if ((this_00->field_09D4 == '\x01') &&
               ((Global_sub_00525EF0_param_2Enum)local_8 == '\x03')) {
              uVar14 = 0;
            }
            else {
              uVar14 = (uint)(this_00->field_0BFC != '\0');
            }
            uVar14 = CreateBut(this_00,5,0,uVar14,0xba,uVar10 * 0xb + 0x55,0,nullptr,
                               uVar10 + 0xb18f,uVar10 + 0xb19f,1,0,(int)puVar13,nullptr,0x11,10,
                               0);
            this_00->field_0A15[uVar10] = uVar14;
            bVar15 = (Global_sub_00525EF0_param_2Enum)local_8 + 1;
            local_8 = (Global_sub_00529590_param_1Enum *)STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar15));
          } while (bVar15 < 4);
          g_currentExceptionFrame = local_10c.previous;
          return;
        }
      } while( true );
    case CASE_5C:
      if (*(int *)&this_00->field_0xc12 == 0) {
        g_currentExceptionFrame = local_10c.previous;
        return;
      }
      uVar26 = 0;
      uVar24 = 0;
      iVar17 = 0;
      pcVar7 = nullptr;
      iVar6 = 0;
      uVar22 = 0;
      sVar20 = 0;
      uVar19 = 0xb13f;
      uVar9 = 0xb12f;
      pCVar8 = thunk_FUN_00571240("BUT_SMALL",0);
      uVar10 = (uint)(this_00->field_0BFC != '\0');
      break;
    default:
      g_currentExceptionFrame = local_10c.previous;
      return;
    case CASE_67:
    case CASE_68:
      if (this_00->field_0BFC == '\0') {
        uVar10 = 0;
      }
      else {
        uVar10 = (uint)(byte)this_00->field_0C0B;
      }
      uVar10 = CreateBut(this_00,5,0,uVar10,0x1a,0x5d,1,"BUT_MINUSSI",0xb211,0xb212,0,0,0,
                         nullptr,0,0,0);
      this_00->field_0B1F[0] = uVar10;
      if (this_00->field_0BFC == '\0') {
        uVar10 = 0;
      }
      else {
        uVar10 = (uint)(byte)this_00->field_0C0C;
      }
      uVar10 = CreateBut(this_00,5,0,uVar10,0xba,0x5d,1,"BUT_PLUSSI",0xb213,0xb214,0,0,0,
                         nullptr,0,0,0);
      this_00->field_0B1F[1] = uVar10;
      g_currentExceptionFrame = local_10c.previous;
      return;
    case CASE_6D:
      uVar10 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x2a,0x7b,1,
                         "BUT_MINUSSI",0xb211,0xb212,0,0,0,nullptr,0,0,0);
      this_00->field_0B1F[0] = uVar10;
      uVar10 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0x45,0x7b,1,
                         "BUT_PLUSSI",0xb213,0xb214,0,0,0,nullptr,0,0,0);
      cVar2 = this_00->field_0BFC;
      this_00->field_0B1F[1] = uVar10;
      uVar10 = CreateBut(this_00,5,0,(uint)(cVar2 != '\0'),0x8f,0x7b,1,"BUT_MINUSSI",0xb215
                         ,0xb216,0,0,0,nullptr,0,0,0);
      this_00->field_0B1F[2] = uVar10;
      uVar10 = CreateBut(this_00,5,0,(uint)(this_00->field_0BFC != '\0'),0xaa,0x7b,1,
                         "BUT_PLUSSI",0xb217,0xb218,0,0,0,nullptr,0,0,0);
      cVar2 = this_00->field_0BFC;
      this_00->field_0B1F[3] = uVar10;
      uVar10 = CreateBut(this_00,5,0,(uint)(cVar2 != '\0'),0x17,100,0,nullptr,0xb219,0xb21a,0,0,
                         0,nullptr,0x11,10,0);
      cVar2 = this_00->field_0BFC;
      this_00->field_0B1F[4] = uVar10;
      uVar10 = CreateBut(this_00,5,0,(uint)(cVar2 != '\0'),0xc5,100,0,nullptr,0xb21b,0xb21c,0,0,
                         0,nullptr,0x11,10,0);
      this_00->field_0B1F[5] = uVar10;
      g_currentExceptionFrame = local_10c.previous;
      return;
    }
  }
  uVar10 = CreateBut(this_00,5,0,uVar10,0x9a,0x59,1,pCVar8,uVar9,uVar19,sVar20,uVar22,iVar6,pcVar7,
                     iVar17,uVar24,uVar26);
  this_00->field_0310[1] = uVar10;
  g_currentExceptionFrame = local_10c.previous;
  return;
}

