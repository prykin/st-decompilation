#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintCtrlObjSI

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254

   [STSwitchEnumApplier] Switch target field_0BFA uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BFAState. Cases:
   CASE_0=0;CASE_1=1;CASE_3=3;CASE_4=4;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254

   [STSwitchEnumApplier] Switch target field_0C11 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0C11State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STSwitchEnumApplier] Switch target field_0C3C uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0C3CState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

void __thiscall CPanelTy::PaintCtrlObjSI(CPanelTy *this)

{
  char cVar1;
  CPanelTy_field_0C11State CVar2;
  CPanelTy_field_0BF5State CVar3;
  CPanelTy *this_00;
  int iVar5;
  Global_sub_00529500_param_1Enum resourceId;
  char *pcVar7_mg1;
  UINT UVar5;
  char *pcVar7_mg0;
  uint local_EAX_1273;
  BITMAPINFO *pBVar6;
  UINT local_EAX_1554;
  char *pcVar7_mg2;
  uint *puVar7;
  char *pcVar7_mg14;
  char *pcVar7_mg13;
  char *pcVar7_mg12;
  char *pcVar7_mgE;
  char *pcVar7_mgF;
  uint local_EAX_2744;
  UINT local_EAX_3024;
  char *pcVar7_mg10;
  uint local_EAX_3436;
  UINT UVar9;
  char *pcVar7_mg9;
  ushort *puVar8;
  char *pcVar7_mg15;
  char *pcVar7_mgD;
  byte *pbVar9;
  char *pcVar7_mg4;
  char *pcVar7_mgB;
  char *pcVar7_mgC;
  char *pcVar7_mg6;
  char *pcVar7_mg7;
  char *pcVar7_mg8;
  uint uVar6;
  int iVar13;
  uint uVar10;
  uint uVar11;
  ccFntTy *this_01;
  int iVar12;
  byte *pbVar13;
  char *pcVar14;
  HINSTANCE pHVar15;
  RecoveredSourceFamily_dibcopy *pRVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  InternalExceptionFrame local_64;
  int local_20;
  CPanelTy *local_1c;
  uint local_18;
  byte *local_14;
  Global_sub_00526BA0_param_1Enum *local_10;
  uint local_c;
  byte *local_8;
  char *resourceString;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_1c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  this_00 = local_1c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar13 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x6f0,0,iVar5,
                                "%s","CPanelTy::PaintCtrlObjSI");
    if (iVar13 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x6f0);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  switch(local_1c->field_0BFA) {
  case CASE_0:
  case CASE_3:
    /* ST_CALLSITE[0050A3A2]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)local_1c->field_0194,0,0x46,'\x01',
           (byte *)local_1c->field_09D9[0]);
    /* ST_CALLSITE[0050A3BB]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0,'\x06',
           (byte *)this_00->field_09D9[9]);
    break;
  case CASE_1:
    if (local_1c->field_0BFB == '\x02') {
      /* ST_CALLSITE[0050A41F]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)local_1c->field_0194,0,0,'\x06',
             (byte *)local_1c->field_09D9[0xb]);
      /* ST_CALLSITE[0050A438]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x46,'\x01',
             (byte *)this_00->field_09D9[2]);
      break;
    }
    /* ST_CALLSITE[0050A459]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)local_1c->field_0194,0,0,'\x06',
           (byte *)local_1c->field_09D9[0xb]);
    switch(this_00->field_0BF5) {
    case CASE_53:
    case CASE_54:
    case CASE_55:
    case CASE_56:
    case CASE_57:
    case CASE_58:
    case CASE_59:
    case CASE_5A:
    case CASE_5C:
    case CASE_5D:
    case CASE_61:
    case CASE_63:
    case CASE_64:
    case CASE_6E:
    case CASE_70:
    case CASE_72:
    case CASE_73:
      pbVar13 = (byte *)this_00->field_09D9[2];
      pRVar16 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
      break;
    case CASE_5B:
      pbVar13 = (byte *)this_00->field_09D9[3];
      pRVar16 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
      break;
    case CASE_5E:
    case CASE_6D:
      pbVar13 = (byte *)this_00->field_09D9[1];
      pRVar16 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
      break;
    default:
      pbVar13 = (byte *)this_00->field_09D9[0];
      goto LAB_0050a4e4;
    case CASE_62:
      pbVar13 = (byte *)this_00->field_09D9[7];
LAB_0050a4e4:
      pRVar16 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
      break;
    case CASE_67:
    case CASE_68:
      pbVar13 = (byte *)this_00->field_09D9[5];
      pRVar16 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
    }
    /* ST_CALLSITE[0050A4F2]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut(pRVar16,0,0x46,'\x01',pbVar13);
    break;
  case CASE_4:
    /* ST_CALLSITE[0050A3DC]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)local_1c->field_0194,0,0,'\x06',
           (byte *)local_1c->field_09D9[9]);
    /* ST_CALLSITE[0050A3F5]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,0x46,'\x01',
           (byte *)this_00->field_09D9[1]);
  }
  if (this_00->field_0BFA != CASE_1) {
    if (this_00->field_0BFA == CASE_4) {
      switch(this_00->field_0BF5) {
      case CASE_DD:
      case CASE_DE:
      case CASE_E0:
      case CASE_FE:
        /* ST_CALLSITE[0050A549]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2c,0x52,'\x01',
               (byte *)this_00->field_09D9[0xc]);
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02D2,
                              (uint)this_00->field_0C11);
        /* ST_CALLSITE[0050A571]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2e,0x54,'\x01',(byte *)pBVar6);
        pbVar13 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,this_00->field_09D9[1],0,0x70,0x12
                                              ,0x62,0xd,0);
        if (pbVar13 != nullptr) {
          if (this_00->field_0BF5 == 0xfe) {
            resourceId = thunk_FUN_00529480(this_00->field_0C11);
          }
          else {
            resourceId = thunk_FUN_005293f0(this_00->field_0BF5);
          }
          uVar10 = thunk_FUN_00529500(resourceId);
          iVar18 = -1;
          iVar12 = -1;
          pcVar7_mg1 = LoadResourceString(resourceId,g_hINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01B8,pcVar7_mg1,iVar12,iVar18,uVar10);
          /* ST_CALLSITE[0050A5F8]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x70,0x58,'\x01',pbVar13);
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
        pbVar13 = (byte *)ccFntTy::CreateSurf(this_00->field_01C4,this_00->field_09D9[1],0,0x78,0x23
                                              ,0x5a,0x14,0);
        if (pbVar13 != nullptr) {
          uVar10 = 0;
          /* ST_CALLSITE[0050A646]: CALL dword ptr [0x0085bde8] */
          wsprintfA((LPSTR)&DAT_0080f33a,"%06d",*(undefined4 *)&this_00->field_0xc12);
          switch(this_00->field_0C11) {
          case CASE_0:
            uVar10 = 4;
            break;
          case CASE_1:
          case CASE_3:
            uVar10 = 7;
            break;
          case CASE_2:
            uVar10 = 6;
            break;
          case CASE_4:
            uVar10 = 5;
          }
          ccFntTy::WrStr(this_00->field_01C4,(char *)&DAT_0080f33a,-1,-1,uVar10);
          /* ST_CALLSITE[0050A6A0]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x78,0x69,'\x01',pbVar13);
          ccFntTy::EraseSufr(this_00->field_01C4);
        }
        break;
      case CASE_FD:
        CVar2 = this_00->field_0C11;
        if ((CVar2 != CASE_0) && (CVar2 < 0x16)) {
          pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CE,CVar2 - 1);
          /* ST_CALLSITE[0050A6E7]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x29,0x51,'\x01',
                 (byte *)pBVar6);
        }
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,10);
        /* ST_CALLSITE[0050A70B]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x27,0x4f,'\x06',(byte *)pBVar6);
        pbVar13 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,this_00->field_09D9[1],0,0x5d,0xb,
                                              0x73,0x19,0);
        if (pbVar13 != nullptr) {
          iVar20 = -1;
          iVar19 = -1;
          uVar10 = 5;
          iVar18 = -1;
          iVar12 = -2;
          pHVar15 = g_hINSTANCE_00807618;
          UVar5 = thunk_FUN_00525290(this_00->field_0C11);
          pcVar7_mg0 = LoadResourceString(UVar5,pHVar15);
          ccFntTy::WrTxt(this_00->field_01B8,pcVar7_mg0,iVar12,iVar18,uVar10,iVar19,iVar20);
          /* ST_CALLSITE[0050A777]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x5d,0x51,'\x01',pbVar13);
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
        pbVar13 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,this_00->field_09D9[1],0,0x27,0x26
                                              ,0x9f,0x1c,0);
        if (pbVar13 != nullptr) {
          ccFntTy::WrTxt(this_00->field_01B8,(char *)this_00->field_0C16,-2,-1,3,-1,-1);
          /* ST_CALLSITE[0050A7DF]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x27,0x6c,'\x01',pbVar13);
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
      }
    }
    goto switchD_0050a52e_caseD_df;
  }
  if (this_00->field_0BFB == '\x02') {
    if (*(int *)&this_00->field_0xc12 != 0) {
      /* ST_CALLSITE[0050A826]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x28,0x50,'\x01',
             (byte *)this_00->field_09D9[0xe]);
      local_EAX_1273 =
           thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                              this_00->field_0C1A);
      pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02C2,local_EAX_1273
                           );
      /* ST_CALLSITE[0050A859]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2a,0x52,'\x01',(byte *)pBVar6);
      pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
      /* ST_CALLSITE[0050A87D]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',(byte *)pBVar6);
      pbVar13 = (byte *)(((uint)(byte)this_00->field_0C24 * 0x21) / 100);
      local_14 = nullptr;
      if (pbVar13 != nullptr) {
        iVar12 = 0x35;
        local_14 = pbVar13;
        do {
          pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          /* ST_CALLSITE[0050A8D4]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
                 (byte *)pBVar6);
          iVar12 = iVar12 + 4;
          pbVar13 = pbVar13 + -1;
        } while (pbVar13 != nullptr);
      }
      if (local_14 < (byte *)0x21) {
        iVar12 = (int)local_14 * 4 + 0x35;
        do {
          pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[0050A90C]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
                 (byte *)pBVar6);
          iVar12 = iVar12 + 4;
        } while (iVar12 < 0xb9);
      }
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x5c,0x6c,0x7a,0xb);
      pHVar15 = g_hINSTANCE_00807618;
      local_EAX_1554 =
           thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                              this_00->field_0C1A,0);
      pcVar7_mg2 = LoadResourceString(local_EAX_1554,pHVar15);
      uVar10 = 0xffffffff;
      do {
        pcVar17 = pcVar7_mg2;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar7_mg2 + 1;
        cVar1 = *pcVar7_mg2;
        pcVar7_mg2 = pcVar17;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar17 + -uVar10;
      pcVar14 = &this_00->field_01E1;
      memmove(pcVar14, pcVar17, uVar10); /* compiler REP MOVS byte copy */
      uVar11 = 0;
      for (puVar7 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_01E1,'\n');
          puVar7 != nullptr; puVar7 = Library::MSVCRT::FUN_0072e560(puVar7,'\n')) {
        *(undefined1 *)puVar7 = 0x20;
      }
LAB_0050af64:
      ccFntTy::WrTxt(this_00->field_01B8,&this_00->field_01E1,-2,-1,5,-1,-1);
      /* ST_CALLSITE[0050AF9D]: CALL 0x00402a3b; direct=00402A3B CPanelTy::PaintCostsXYSI */
      PaintCostsXYSI(this_00,this_00->field_0194,this_00->field_0C1C,this_00->field_0C20,7,4);
    }
    goto switchD_0050a9c9_caseD_5f;
  }
  CVar3 = this_00->field_0BF5;
  switch(CVar3) {
  case CASE_53:
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
    switch(this_00->field_0C3C) {
    case CASE_0:
      UVar5 = 0x36bb;
      goto cf_common_exit_0050B38B;
    case CASE_1:
      /* ST_CALLSITE[0050AA41]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x27,0x51,'\x01',
             (byte *)this_00->field_09D9[0xd]);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x15,0x6c,0xc3,0xb);
      iVar20 = -1;
      iVar19 = -1;
      uVar10 = 5;
      iVar18 = -1;
      iVar12 = -2;
      pcVar7_mg14 = LoadResourceString(0x36bd,g_hINSTANCE_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,pcVar7_mg14,iVar12,iVar18,uVar10,iVar19,iVar20);
      /* ST_CALLSITE[0050AAA8]: CALL 0x00404f1b; direct=00404F1B CPanelTy::PaintDamageXY */
      PaintDamageXY(this_00,this_00->field_0194,0x5c,0x50,*(byte *)&this_00->field_0C3D,0x2714);
      pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
      /* ST_CALLSITE[0050AAC9]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',(byte *)pBVar6);
      pbVar13 = (byte *)((uint)(this_00->field_0C3D * 0x21) / 100);
      local_8 = nullptr;
      if (pbVar13 != nullptr) {
        iVar12 = 0x35;
        local_8 = pbVar13;
        do {
          pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          /* ST_CALLSITE[0050AB17]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
                 (byte *)pBVar6);
          iVar12 = iVar12 + 4;
          pbVar13 = pbVar13 + -1;
        } while (pbVar13 != nullptr);
      }
      if (local_8 < (byte *)0x21) {
        iVar12 = (int)local_8 * 4 + 0x35;
        do {
          pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[0050AB53]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
                 (byte *)pBVar6);
          iVar12 = iVar12 + 4;
        } while (iVar12 < 0xb9);
      }
      break;
    case CASE_2:
      iVar20 = -1;
      iVar19 = -1;
      uVar10 = 5;
      iVar18 = -1;
      iVar12 = -2;
      pcVar7_mg13 = LoadResourceString(0x36bc,g_hINSTANCE_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,pcVar7_mg13,iVar12,iVar18,uVar10,iVar19,iVar20);
      pcVar17 = &this_00->field_01E1;
      /* ST_CALLSITE[0050ABA4]: CALL dword ptr [0x0085bde8] */
      wsprintfA(pcVar17,"%4d",this_00->field_0C3D);
      ccFntTy::SetSurf(this_00->field_01BC,this_00->field_0194,0,0x28,0x79,0x9b,0xf);
      this_01 = this_00->field_01BC;
      uVar10 = 1;
      goto cf_common_exit_0050BD93;
    case CASE_3:
      UVar5 = 0x36be;
cf_common_exit_0050B38B:
      iVar20 = -1;
      iVar19 = -1;
      uVar10 = 5;
      iVar18 = -1;
      iVar12 = -2;
      pcVar7_mg15 = LoadResourceString(UVar5,g_hINSTANCE_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,pcVar7_mg15,iVar12,iVar18,uVar10,iVar19,iVar20);
      break;
    case CASE_4:
      if (this_00->field_0C31 != '\0') {
        /* ST_CALLSITE[0050AC08]: CALL 0x004052d6; direct=004052D6 CPanelTy::PaintNameResSI */
        PaintNameResSI(this_00);
        /* ST_CALLSITE[0050AC0F]: CALL 0x00403ed1; direct=00403ED1 CPanelTy::PaintPerResSI */
        PaintPerResSI(this_00);
      }
    }
    break;
  case CASE_54:
  case CASE_55:
  case CASE_56:
  case CASE_57:
  case CASE_58:
  case CASE_59:
  case CASE_5A:
    if (this_00->field_0C31 == '\0') {
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
      if (this_00->field_0C2F == 0) goto LAB_0050b386;
      pcVar7_mg12 = LoadResourceString(0x273c,g_hINSTANCE_00807618);
      /* ST_CALLSITE[0050AC89]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)&DAT_0080f33a,"%d %s",(uint)(ushort)this_00->field_0C2F,pcVar7_mg12);
      ccFntTy::WrTxt(this_00->field_01B8,(char *)&DAT_0080f33a,-2,-1,5,-1,-1);
    }
    else {
      /* ST_CALLSITE[0050AC25]: CALL 0x004052d6; direct=004052D6 CPanelTy::PaintNameResSI */
      PaintNameResSI(this_00);
      /* ST_CALLSITE[0050AC2C]: CALL 0x00403ed1; direct=00403ED1 CPanelTy::PaintPerResSI */
      PaintPerResSI(this_00);
    }
    break;
  case CASE_5B:
    /* ST_CALLSITE[0050BBC3]: CALL 0x00404697; direct=00404697 CPanelTy::PaintArsenal */
    PaintArsenal(this_00);
    break;
  case CASE_5C:
  case CASE_6E:
    if (*(int *)&this_00->field_0xc12 != 0) {
      /* ST_CALLSITE[0050ADE5]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x28,0x50,'\x01',
             (byte *)this_00->field_09D9[0xe]);
      local_EAX_2744 =
           thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                              this_00->field_0C1A);
      pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BA,local_EAX_2744
                           );
      /* ST_CALLSITE[0050AE18]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2a,0x52,'\x01',(byte *)pBVar6);
      pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
      /* ST_CALLSITE[0050AE3C]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',(byte *)pBVar6);
      pbVar13 = (byte *)(((uint)(byte)this_00->field_0C24 * 0x21) / 100);
      local_14 = nullptr;
      if (pbVar13 != nullptr) {
        iVar12 = 0x35;
        local_14 = pbVar13;
        do {
          pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
          /* ST_CALLSITE[0050AE93]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
                 (byte *)pBVar6);
          iVar12 = iVar12 + 4;
          pbVar13 = pbVar13 + -1;
        } while (pbVar13 != nullptr);
      }
      if (local_14 < (byte *)0x21) {
        iVar12 = (int)local_14 * 4 + 0x35;
        do {
          pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[0050AECB]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
                 (byte *)pBVar6);
          iVar12 = iVar12 + 4;
        } while (iVar12 < 0xb9);
      }
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x5c,0x6c,0x7a,0xb);
      pHVar15 = g_hINSTANCE_00807618;
      local_EAX_3024 =
           thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                              this_00->field_0C1A,0);
      pcVar7_mg10 = LoadResourceString(local_EAX_3024,pHVar15);
      uVar10 = 0xffffffff;
      do {
        pcVar17 = pcVar7_mg10;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar17 = pcVar7_mg10 + 1;
        cVar1 = *pcVar7_mg10;
        pcVar7_mg10 = pcVar17;
      } while (cVar1 != '\0');
      uVar10 = ~uVar10;
      pcVar17 = pcVar17 + -uVar10;
      pcVar14 = &this_00->field_01E1;
      memmove(pcVar14, pcVar17, uVar10); /* compiler REP MOVS byte copy */
      uVar11 = 0;
      for (puVar7 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_01E1,'\n');
          puVar7 != nullptr; puVar7 = Library::MSVCRT::FUN_0072e560(puVar7,'\n')) {
        *(undefined1 *)puVar7 = 0x20;
      }
      goto LAB_0050af64;
    }
    if (CVar3 == CASE_5C) {
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
      goto LAB_0050b386;
    }
    if (CVar3 == CASE_6E) {
      /* ST_CALLSITE[0050AFCF]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&this_00->field_01E1,"%d",(uint)(ushort)this_00->field_0C2F);
      ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x1c,0x58,0xb7,0xf);
      ccFntTy::WrStr(this_00->field_01C4,&this_00->field_01E1,-1,-1,5);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x16,0x69,0xc3,0xe);
      UVar5 = 0x273b;
      goto cf_common_exit_0050B38B;
    }
    break;
  case CASE_5D:
    /* ST_CALLSITE[0050A9D2]: CALL 0x00403b16; direct=00403B16 CPanelTy::PaintBioSonar */
    PaintBioSonar(this_00);
    break;
  case CASE_5E:
    /* ST_CALLSITE[0050ACC5]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2c,0x52,'\x01',
           (byte *)this_00->field_09D9[0xc]);
    pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02D2,0);
    /* ST_CALLSITE[0050ACE6]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2e,0x54,'\x01',(byte *)pBVar6);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x73,0x50,0x5f,0xb);
    iVar20 = -1;
    iVar19 = -1;
    uVar10 = 2;
    iVar18 = -1;
    iVar12 = -2;
    pcVar7_mgE = LoadResourceString(0x271d,g_hINSTANCE_00807618);
    ccFntTy::WrTxt(this_00->field_01B8,pcVar7_mgE,iVar12,iVar18,uVar10,iVar19,iVar20);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x73,0x5d,0x5f,0x17);
    iVar20 = -1;
    iVar19 = -1;
    uVar10 = 5;
    iVar18 = -1;
    iVar12 = -2;
    pcVar7_mgF = LoadResourceString(0x2721,g_hINSTANCE_00807618);
    ccFntTy::WrTxt(this_00->field_01B8,pcVar7_mgF,iVar12,iVar18,uVar10,iVar19,iVar20);
    pcVar17 = &this_00->field_01E1;
    /* ST_CALLSITE[0050AD89]: CALL dword ptr [0x0085bde8] */
    wsprintfA(pcVar17,"%6d",(uint)(ushort)this_00->field_0C34);
    ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x91,0x73,0x26,0xf);
    uVar10 = 4;
    this_01 = this_00->field_01C4;
    goto cf_common_exit_0050BD93;
  case CASE_61:
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x25,0x50,0xa5,0xc);
    uVar10 = 5;
    iVar18 = -1;
    iVar12 = -1;
    pcVar7_mgD = LoadResourceString(0x2738,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01B8,pcVar7_mgD,iVar12,iVar18,uVar10);
    pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    /* ST_CALLSITE[0050B3FE]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x5b,'\x01',(byte *)pBVar6);
    pbVar13 = (byte *)(((uint)(byte)this_00->field_0C2A * 0x21) / 100);
    pbVar9 = nullptr;
    if (pbVar13 != nullptr) {
      iVar12 = 0x35;
      local_14 = pbVar13;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        /* ST_CALLSITE[0050B452]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x5d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
        local_14 = local_14 + -1;
        pbVar9 = pbVar13;
      } while (local_14 != nullptr);
    }
    if (pbVar9 < (byte *)0x21) {
      iVar12 = (int)pbVar9 * 4 + 0x35;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050B48D]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x5d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0xb9);
    }
    /* ST_CALLSITE[0050B4B5]: CALL dword ptr [0x0085bde8] */
    wsprintfA(&this_00->field_01E1,"%d%%",(uint)(byte)this_00->field_0C2A);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x15,0x68,0xc3,0xc);
    ccFntTy::WrStr(this_00->field_01B8,&this_00->field_01E1,-1,-1,5);
    pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    /* ST_CALLSITE[0050B50B]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',(byte *)pBVar6);
    pbVar13 = (byte *)(uint)this_00->field_0C29;
    local_8 = nullptr;
    if (pbVar13 != nullptr) {
      iVar12 = 0x35;
      local_8 = pbVar13;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        /* ST_CALLSITE[0050B549]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
        pbVar13 = pbVar13 + -1;
      } while (pbVar13 != nullptr);
    }
    if (local_8 < (byte *)0x21) {
      iVar12 = (int)local_8 * 4 + 0x35;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050B585]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0xb9);
    }
    break;
  case CASE_62:
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x15,0x66,0x66,0xb);
    uVar10 = 5;
    iVar18 = -1;
    iVar12 = -1;
    pcVar7_mgB = LoadResourceString(0x2725,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01B8,pcVar7_mgB,iVar12,iVar18,uVar10);
    resourceString = &this_00->field_01E1;
    /* ST_CALLSITE[0050B71E]: CALL EDI */
    wsprintfA(resourceString,"%d",*(undefined4 *)&this_00->field_0xc12);
    ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x7f,0x66,0x24,0xb);
    ccFntTy::WrStr(this_00->field_01C4,resourceString,-1,-1,5);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x8e,0x4f,0x17,0xb);
    uVar10 = 5;
    iVar18 = -1;
    iVar12 = -1;
    pcVar7_mgC = LoadResourceString(0x2740,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01B8,pcVar7_mgC,iVar12,iVar18,uVar10);
    /* ST_CALLSITE[0050B7A0]: CALL EDI */
    wsprintfA(resourceString,"%d",this_00->field_0C16);
    ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0xa5,0x4f,0x24,0xb);
    ccFntTy::WrStr(this_00->field_01C4,resourceString,-1,-1,4);
    pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    /* ST_CALLSITE[0050B7F2]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',(byte *)pBVar6);
    uVar10 = this_00->field_0C16;
    if (uVar10 < *(uint *)&this_00->field_0xc12) {
      pbVar13 = (byte *)0x21;
    }
    else if (uVar10 == 0) {
      pbVar13 = nullptr;
    }
    else {
      pbVar13 = (byte *)((*(uint *)&this_00->field_0xc12 * 0x21) / uVar10);
    }
    pbVar9 = nullptr;
    if (pbVar13 != nullptr) {
      iVar12 = 0x35;
      local_8 = pbVar13;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        /* ST_CALLSITE[0050B84F]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
        pbVar13 = pbVar13 + -1;
        pbVar9 = local_8;
      } while (pbVar13 != nullptr);
    }
    if (pbVar9 < (byte *)0x21) {
      iVar12 = (int)pbVar9 * 4 + 0x35;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050B88B]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0xb9);
    }
    break;
  case CASE_63:
    if (*(int *)&this_00->field_0xc12 == 0) {
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
LAB_0050b386:
      UVar5 = 0x2713;
      goto cf_common_exit_0050B38B;
    }
    /* ST_CALLSITE[0050B099]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x28,0x50,'\x01',
           (byte *)this_00->field_09D9[0xe]);
    local_EAX_3436 =
         thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                            this_00->field_0C1A);
    pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BA,local_EAX_3436);
    /* ST_CALLSITE[0050B0CC]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x2a,0x52,'\x01',(byte *)pBVar6);
    pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    /* ST_CALLSITE[0050B0F0]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',(byte *)pBVar6);
    pbVar13 = (byte *)(((uint)(byte)this_00->field_0C24 * 0x21) / 100);
    local_14 = nullptr;
    if (pbVar13 != nullptr) {
      iVar12 = 0x35;
      local_14 = pbVar13;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        /* ST_CALLSITE[0050B147]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
        pbVar13 = pbVar13 + -1;
      } while (pbVar13 != nullptr);
    }
    if (local_14 < (byte *)0x21) {
      iVar12 = (int)local_14 * 4 + 0x35;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050B17F]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0xb9);
    }
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x5c,0x69,0x7a,0xb);
    pHVar15 = g_hINSTANCE_00807618;
    UVar9 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0C1A,0);
    pcVar7_mg9 = LoadResourceString(UVar9,pHVar15);
    uVar10 = 0xffffffff;
    do {
      pcVar17 = pcVar7_mg9;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar17 = pcVar7_mg9 + 1;
      cVar1 = *pcVar7_mg9;
      pcVar7_mg9 = pcVar17;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar17 = pcVar17 + -uVar10;
    pcVar14 = &this_00->field_01E1;
    memmove(pcVar14, pcVar17, uVar10); /* compiler REP MOVS byte copy */
    for (puVar7 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_01E1,'\n');
        puVar7 != nullptr; puVar7 = Library::MSVCRT::FUN_0072e560(puVar7,'\n')) {
      *(undefined1 *)puVar7 = 0x20;
    }
    ccFntTy::WrTxt(this_00->field_01B8,&this_00->field_01E1,-2,-1,5,-1,-1);
    pbVar13 = (byte *)ccFntTy::CreateSurf(this_00->field_01C4,this_00->field_09D9[1],0,100,0x13,0x18
                                          ,0xc,0);
    if (pbVar13 != nullptr) {
      /* ST_CALLSITE[0050B276]: CALL EDI */
      wsprintfA((LPSTR)&DAT_0080f33a,"%4d",(uint)(ushort)this_00->field_0C1C);
      ccFntTy::WrStr(this_00->field_01C4,(char *)&DAT_0080f33a,-1,-1,7);
      /* ST_CALLSITE[0050B29F]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,100,0x59,'\x01',pbVar13);
      /* ST_CALLSITE[0050B2B8]: CALL EDI */
      wsprintfA((LPSTR)&DAT_0080f33a,"%4d",(uint)(ushort)this_00->field_0C20);
      ccFntTy::WrStr(this_00->field_01C4,(char *)&DAT_0080f33a,-1,-1,5);
      /* ST_CALLSITE[0050B2E4]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0xaf,0x59,'\x01',pbVar13);
      ccFntTy::EraseSufr(this_00->field_01C4);
    }
    puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                       (PTR_00806794,CASE_1,"BUT_RCTTYPESI04",0xffffffff,0,1,0,
                        nullptr);
    /* ST_CALLSITE[0050B325]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x82,0x56,'\x01',(byte *)puVar8);
    pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0B1B,0);
    /* ST_CALLSITE[0050B349]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0xa1,0x56,'\x01',(byte *)pBVar6);
    break;
  case CASE_64:
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x19,0x59,0xbb,0xb);
    uVar10 = 5;
    iVar18 = -1;
    iVar12 = -1;
    pcVar7_mg8 = LoadResourceString(0x272d,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01B8,pcVar7_mg8,iVar12,iVar18,uVar10);
    /* ST_CALLSITE[0050BAC5]: CALL dword ptr [0x0085bde8] */
    wsprintfA(&this_00->field_01E1,"%4d",*(undefined4 *)&this_00->field_0xc12);
    ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x66,0x65,0x24,0xb);
    ccFntTy::WrStr(this_00->field_01C4,&this_00->field_01E1,-1,-1,7);
    pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    /* ST_CALLSITE[0050BB18]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',(byte *)pBVar6);
    if (this_00->field_0C16 == 0) {
      pbVar13 = nullptr;
    }
    else {
      pbVar13 = (byte *)((uint)(*(int *)&this_00->field_0xc12 * 0x21) / this_00->field_0C16);
    }
    local_8 = nullptr;
    if (pbVar13 != nullptr) {
      iVar12 = 0x35;
      local_8 = pbVar13;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        /* ST_CALLSITE[0050BB6D]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
        pbVar13 = pbVar13 + -1;
      } while (pbVar13 != nullptr);
    }
    if (local_8 < (byte *)0x21) {
      iVar12 = (int)local_8 * 4 + 0x35;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050BBA9]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0xb9);
    }
    break;
  case CASE_67:
  case CASE_68:
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x34,0x5d,0x85,0xb);
    uVar10 = 5;
    iVar18 = -1;
    iVar12 = -1;
    pcVar7_mg6 = LoadResourceString(0x272b,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01B8,pcVar7_mg6,iVar12,iVar18,uVar10);
    pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    /* ST_CALLSITE[0050B900]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x50,'\x01',(byte *)pBVar6);
    uVar10 = 0;
    if (this_00->field_0C11 != CASE_0) {
      iVar12 = 0x35;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        /* ST_CALLSITE[0050B934]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x52,'\x01',
               (byte *)pBVar6);
        uVar10 = uVar10 + 1;
        iVar12 = iVar12 + 4;
      } while (uVar10 < this_00->field_0C11);
    }
    if (uVar10 < 0x21) {
      iVar12 = uVar10 * 4 + 0x35;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050B973]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x52,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0xb9);
    }
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x34,0x7d,0x85,0xb);
    uVar10 = 5;
    iVar18 = -1;
    iVar12 = -1;
    pcVar7_mg7 = LoadResourceString(0x272c,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_01B8,pcVar7_mg7,iVar12,iVar18,uVar10);
    pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    /* ST_CALLSITE[0050B9E3]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x71,'\x01',(byte *)pBVar6);
    uVar10 = 0;
    if (*(int *)&this_00->field_0xc12 != 0) {
      iVar12 = 0x35;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        /* ST_CALLSITE[0050BA17]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x73,'\x01',
               (byte *)pBVar6);
        uVar10 = uVar10 + 1;
        iVar12 = iVar12 + 4;
      } while (uVar10 < *(uint *)&this_00->field_0xc12);
    }
    if (uVar10 < 0x21) {
      iVar12 = uVar10 * 4 + 0x35;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050BA58]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x73,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0xb9);
    }
    break;
  case CASE_6D:
    local_8 = &this_00->field_0C24;
    local_10 = (Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12;
    local_20 = -0xc24 - (int)this_00;
    iVar12 = 99;
    local_14 = (byte *)0x2c;
    do {
      pbVar13 = local_14;
      /* ST_CALLSITE[0050BC0E]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,(int)(local_14 + -2),0x55,'\x01',
             (byte *)this_00->field_09D9[0xe]);
      uVar6 = thunk_FUN_00526ba0(*local_10,local_8[-10]);
      pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02C2,uVar6);
      /* ST_CALLSITE[0050BC3F]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,(int)pbVar13,0x57,'\x01',
             (byte *)pBVar6);
      pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,4);
      /* ST_CALLSITE[0050BC65]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + -2,0x58,'\x01',
             (byte *)pBVar6);
      local_c = 0;
      uVar10 = *local_8 / 10;
      if (uVar10 != 0) {
        iVar18 = 0x7e;
        local_18 = uVar10;
        local_c = uVar10;
        do {
          pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,7);
          /* ST_CALLSITE[0050BCB3]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,iVar18,'\x01',
                 (byte *)pBVar6);
          iVar18 = iVar18 + -4;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      if (local_c < 10) {
        iVar18 = local_c * -4 + 0x7e;
        local_18 = 10 - local_c;
        do {
          pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,8);
          /* ST_CALLSITE[0050BD03]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,iVar18,'\x01',
                 (byte *)pBVar6);
          iVar18 = iVar18 + -4;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 0x65;
      local_8 = local_8 + 1;
      iVar12 = iVar12 + 0x1a;
    } while (local_8 + local_20 < (byte *)0x2);
    /* ST_CALLSITE[0050BD5D]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)&DAT_0080f33a,"%d %% %d",(uint)(byte)this_00->field_0C24,
              (uint)(byte)this_00->field_0C25);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x5f,0x4d,0x2f,0xb);
    this_01 = this_00->field_01B8;
    uVar10 = 5;
    pcVar17 = (char *)&DAT_0080f33a;
cf_common_exit_0050BD93:
    ccFntTy::WrStr(this_01,pcVar17,-1,-1,uVar10);
    break;
  case CASE_70:
  case CASE_72:
  case CASE_73:
    pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    /* ST_CALLSITE[0050B5B9]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x33,0x7b,'\x01',(byte *)pBVar6);
    pbVar13 = (byte *)(uint)this_00->field_0C29;
    local_8 = nullptr;
    local_14 = pbVar13;
    if (pbVar13 != nullptr) {
      iVar12 = 0x35;
      local_8 = pbVar13;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        /* ST_CALLSITE[0050B5FA]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
        pbVar13 = pbVar13 + -1;
      } while (pbVar13 != nullptr);
    }
    pbVar13 = local_14;
    if (local_8 < (byte *)0x21) {
      iVar12 = (int)local_8 * 4 + 0x35;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050B635]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x7d,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
      } while (iVar12 < 0xb9);
    }
    pbVar9 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,this_00->field_09D9[2],0,0x24,6,0xa4,
                                         0x2b,0);
    if (pbVar9 != nullptr) {
      iVar20 = -1;
      iVar19 = -1;
      uVar10 = 5;
      iVar18 = -1;
      iVar12 = -1;
      pcVar7_mg4 = LoadResourceString(0x36c4 - (pbVar13 < (byte *)0x21),g_hINSTANCE_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,pcVar7_mg4,iVar12,iVar18,uVar10,iVar19,iVar20);
      /* ST_CALLSITE[0050B6AE]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x24,0x4c,'\x01',pbVar9);
      ccFntTy::EraseSufr(this_00->field_01B8);
    }
  }
switchD_0050a9c9_caseD_5f:
  /* ST_CALLSITE[0050BD9A]: CALL 0x004019b5; direct=004019B5 CPanelTy::PaintIDSObj */
  PaintIDSObj(this_00);
switchD_0050a52e_caseD_df:
  if (-1 < (int)this_00->field_0148[5]) {
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
               this_00->field_0050,this_00->field_00A8);
  }
  g_currentExceptionFrame = local_64.previous;
  return;
}

