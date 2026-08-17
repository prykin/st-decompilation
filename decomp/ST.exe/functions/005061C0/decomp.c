#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintCtrlObj

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

void __thiscall CPanelTy::PaintCtrlObj(CPanelTy *this,int param_1)

{
  CPanelTy_field_0C11State CVar1;
  CPanelTy *this_00;
  byte bVar3;
  int iVar4;
  byte *pbVar4;
  char *pcVar8_mg1;
  UINT UVar5;
  char *pcVar8_mg0;
  uint local_EAX_1314;
  BITMAPINFO *pBVar6;
  uint uVar7;
  UINT local_EAX_1601;
  char *pcVar8_mg2;
  uint *puVar8;
  char *pcVar8_mgC;
  uint uVar5;
  char *pcVar8_mgF;
  char *pcVar8_mg4;
  char *pcVar8_mg5;
  uint local_EAX_3244;
  UINT UVar7;
  char *pcVar8_mg10;
  char *pcVar8_mgD;
  char *pcVar8_mg9;
  char *pcVar8_mgA;
  char *pcVar8_mgB;
  char *pcVar8_mg8;
  char *pcVar8_mg7;
  char *pcVar8_mgE;
  int iVar11;
  uint uVar9;
  char cVar10;
  int iVar12;
  Global_sub_00529500_param_1Enum GVar13;
  int GVar14;
  char *pcVar14;
  char *pcVar15;
  HINSTANCE pHVar16;
  RecoveredSourceFamily_dibcopy *pRVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  InternalExceptionFrame local_64;
  CPanelTy *local_20;
  byte *local_1c;
  uint local_18;
  undefined4 local_14;
  Global_sub_00526BA0_param_1Enum *local_10;
  ushort *local_c;
  Global_sub_00529500_param_1Enum local_8;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_20 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  this_00 = local_20;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x348,0,iVar4,
                                "%s","CPanelTy::PaintCtrlObj");
    if (iVar11 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x348);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (param_1 == 0) goto switchD_00506214_caseD_2;
  switch(local_20->field_0BFA) {
  case CASE_0:
  case CASE_3:
  case CASE_4:
    pbVar4 = (byte *)local_20->field_09D9[0];
    pRVar17 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
    iVar18 = 0;
    iVar12 = 0;
    goto LAB_0050633b;
  case CASE_1:
    if (local_20->field_0BFB == '\x02') {
      pbVar4 = (byte *)local_20->field_09D9[1];
      pRVar17 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
      iVar18 = 0;
      iVar12 = 0;
      goto LAB_0050633b;
    }
    break;
  default:
    goto switchD_00506214_caseD_2;
  }
  switch(local_20->field_0BF5) {
  case CASE_32:
  case CASE_3C:
  case CASE_3E:
  case CASE_3F:
  case CASE_40:
  case CASE_46:
  case CASE_47:
  case CASE_49:
  case CASE_4A:
  case CASE_4B:
  case CASE_4E:
  case CASE_51:
  case CASE_52:
    pbVar4 = (byte *)local_20->field_09D9[3];
    goto LAB_005062d5;
  case CASE_33:
  case CASE_35:
  case CASE_37:
  case CASE_3A:
  case CASE_42:
  case CASE_43:
  case CASE_44:
  case CASE_45:
  case CASE_4C:
    pbVar4 = (byte *)local_20->field_09D9[2];
LAB_005062d5:
    pRVar17 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
    break;
  case CASE_34:
  case CASE_38:
  case CASE_39:
  case CASE_3B:
  case CASE_3D:
  case CASE_41:
  case CASE_48:
  case CASE_4D:
  case CASE_4F:
  case CASE_50:
  case CASE_6F:
    pbVar4 = (byte *)local_20->field_09D9[1];
    pRVar17 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
    break;
  case CASE_36:
    if (local_20->field_0BF9 == '\x01') {
      pbVar4 = (byte *)local_20->field_09D9[3];
      pRVar17 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
    }
    else {
      if (local_20->field_0BF9 != '\x02') goto switchD_00506270_caseD_53;
      pbVar4 = (byte *)local_20->field_09D9[2];
      pRVar17 = (RecoveredSourceFamily_dibcopy *)local_20->field_0194;
    }
    break;
  default:
    goto switchD_00506270_caseD_53;
  }
  /* ST_CALLSITE[005062E3]: CALL 0x00403229; direct=00403229 DibPut */
  DibPut(pRVar17,0,0,'\x01',pbVar4);
switchD_00506270_caseD_53:
  switch(this_00->field_0BF5) {
  case CASE_36:
    if (this_00->field_0BF9 == '\x01') {
      pbVar4 = (byte *)this_00->field_09D9[4];
      pRVar17 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
      iVar18 = 0x35;
      iVar12 = 0xc;
      goto LAB_0050633b;
    }
    break;
  case CASE_3E:
  case CASE_3F:
  case CASE_42:
  case CASE_46:
  case CASE_47:
  case CASE_4A:
  case CASE_4B:
  case CASE_51:
    pbVar4 = (byte *)this_00->field_09D9[4];
    pRVar17 = (RecoveredSourceFamily_dibcopy *)this_00->field_0194;
    iVar18 = 0x35;
    iVar12 = 0xc;
LAB_0050633b:
    /* ST_CALLSITE[0050633B]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut(pRVar17,iVar12,iVar18,'\x01',pbVar4);
  }
switchD_00506214_caseD_2:
  if (this_00->field_0BFA != CASE_1) {
    if (this_00->field_0BFA == CASE_4) {
      switch(this_00->field_0BF5) {
      case CASE_DD:
      case CASE_DE:
      case CASE_E0:
      case CASE_FE:
        iVar12 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
                 *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
        /* ST_CALLSITE[005063A0]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x50,'\x01',
               (byte *)this_00->field_09D9[5]);
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02D2,
                              (uint)this_00->field_0C11);
        /* ST_CALLSITE[005063CA]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + 3,0x53,'\x01',
               (byte *)pBVar6);
        pbVar4 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,this_00->field_09D9[5],0,0x49,7,
                                             0x67,0xc,0);
        if (pbVar4 != nullptr) {
          if (this_00->field_0BF5 == 0xfe) {
            local_8 = thunk_FUN_00529480(this_00->field_0C11);
          }
          else {
            local_8 = thunk_FUN_005293f0(this_00->field_0BF5);
          }
          uVar7 = thunk_FUN_00529500(local_8);
          iVar19 = -1;
          iVar18 = -1;
          pcVar8_mg1 = LoadResourceString(local_8,g_hINSTANCE_00807618);
          ccFntTy::WrStr(this_00->field_01B8,pcVar8_mg1,iVar18,iVar19,uVar7);
          /* ST_CALLSITE[00506458]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + 0x49,0x57,'\x01',
                 pbVar4);
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
        local_1c = (byte *)ccFntTy::CreateSurf(this_00->field_01C4,this_00->field_09D9[5],0,100,0x14
                                               ,0x3c,0x14,0);
        if (local_1c != nullptr) {
          uVar7 = 0;
          /* ST_CALLSITE[005064A7]: CALL dword ptr [0x0085bde8] */
          wsprintfA((LPSTR)&DAT_0080f33a,"%06d",*(undefined4 *)&this_00->field_0xc12);
          switch(this_00->field_0C11) {
          case CASE_0:
            uVar7 = 0;
            break;
          case CASE_1:
            uVar7 = 2;
            break;
          case CASE_2:
            uVar7 = 1;
            break;
          case CASE_3:
            uVar7 = 7;
            break;
          case CASE_4:
            uVar7 = 3;
          }
          ccFntTy::WrStr(this_00->field_01C4,(char *)&DAT_0080f33a,-1,-1,uVar7);
          /* ST_CALLSITE[0050650A]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + 100,100,'\x01',
                 local_1c);
          ccFntTy::EraseSufr(this_00->field_01C4);
        }
        break;
      case CASE_FD:
        iVar12 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
                 *(int *)((byte *)this_00->field_09D9[0xe] + 4)) / 2;
        /* ST_CALLSITE[00506544]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x3f,'\x01',
               (byte *)this_00->field_09D9[0xe]);
        CVar1 = this_00->field_0C11;
        if ((CVar1 != CASE_0) && (CVar1 < 0x16)) {
          pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CE,CVar1 - 1);
          /* ST_CALLSITE[0050657D]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + 6,0x44,'\x01',
                 (byte *)pBVar6);
        }
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,10);
        /* ST_CALLSITE[005065A3]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + 4,0x42,'\x06',
               (byte *)pBVar6);
        pbVar4 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,this_00->field_09D9[0xe],0,0x38,4,
                                             0x7b,0x19,0);
        if (pbVar4 != nullptr) {
          iVar21 = -1;
          iVar20 = -1;
          uVar7 = 0;
          iVar19 = -1;
          iVar18 = -2;
          pHVar16 = g_hINSTANCE_00807618;
          UVar5 = thunk_FUN_00525290(this_00->field_0C11);
          pcVar8_mg0 = LoadResourceString(UVar5,pHVar16);
          ccFntTy::WrTxt(this_00->field_01B8,pcVar8_mg0,iVar18,iVar19,uVar7,iVar20,iVar21);
          /* ST_CALLSITE[00506610]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + 0x38,0x43,'\x01',
                 pbVar4);
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
        pbVar4 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,this_00->field_09D9[0xe],0,2,0x1e,
                                             0xb2,0x22,0);
        if (pbVar4 != nullptr) {
          ccFntTy::WrTxt(this_00->field_01B8,(char *)this_00->field_0C16,-2,-1,1,-1,-1);
          /* ST_CALLSITE[0050667A]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + 2,0x5d,'\x01',pbVar4);
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
      }
    }
    goto switchD_00506377_caseD_df;
  }
  if (this_00->field_0BFB == '\x02') {
    GVar13 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    local_8 = GVar13;
    /* ST_CALLSITE[005066C4]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar13,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != 0) {
      local_EAX_1314 =
           thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                              this_00->field_0C1A);
      pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02C2,local_EAX_1314
                           );
      /* ST_CALLSITE[00506704]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar13 + 6,0x5d,'\x01',
             (byte *)pBVar6);
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,GVar13 + 0x36,0x5d,7,0x21,
                   0);
      GVar13 = local_8;
      bVar3 = this_00->field_0C24;
      local_1c = (byte *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar3));
      cVar10 = (char)(((uint)bVar3 * 0x21) / 100);
      local_10 = (Global_sub_00526BA0_param_1Enum *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(cVar10));
      if ((bVar3 != 0) && (cVar10 == '\0')) {
        local_10 = (Global_sub_00526BA0_param_1Enum *)STReplaceLowByte((uint32_t)(local_10), (uint8_t)(1));
      }
      if (bVar3 < 0x46) {
        iVar12 = (-(uint)(bVar3 < 0x14) & 5) + 5;
      }
      else {
        iVar12 = 0;
      }
      uVar7 = (uint)local_10 & 0xff;
      Library::DKW::WGR::FUN_006b55f0
                ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,local_8 + 0x37,0x7e - uVar7,
                 (byte *)this_00->field_028A,0,iVar12,*(int *)(this_00->field_028A + 4) - uVar7,5,
                 uVar7);
      pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
      /* ST_CALLSITE[005067C1]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar13 + 5,0x5c,'\x06',
             (byte *)pBVar6);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,GVar13 + 2,0x52,0xb2,10);
      pHVar16 = g_hINSTANCE_00807618;
      local_EAX_1601 =
           thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                              this_00->field_0C1A,0);
      pcVar8_mg2 = LoadResourceString(local_EAX_1601,pHVar16);
      uVar7 = 0xffffffff;
      do {
        pcVar14 = pcVar8_mg2;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar14 = pcVar8_mg2 + 1;
        cVar10 = *pcVar8_mg2;
        pcVar8_mg2 = pcVar14;
      } while (cVar10 != '\0');
      uVar7 = ~uVar7;
      pcVar14 = pcVar14 + -uVar7;
      pcVar15 = &this_00->field_01E1;
      memmove(pcVar15, pcVar14, uVar7); /* compiler REP MOVS byte copy */
      uVar9 = 0;
      for (puVar8 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_01E1,'\n');
          puVar8 != nullptr; puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
        *(undefined1 *)puVar8 = 0x20;
      }
      goto cf_common_exit_00507034;
    }
    goto switchD_00506878_caseD_3b;
  }
  switch(this_00->field_0BF5) {
  case CASE_32:
  case CASE_40:
  case CASE_49:
    GVar14 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    local_8 = GVar14;
    /* ST_CALLSITE[00506E4B]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar14,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == 0) {
LAB_0050709d:
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,GVar14 + 2,0x52,0xb2,0x2f);
LAB_005070be:
      uVar7 = 0;
      UVar5 = 0x2713;
      goto LAB_0050777e;
    }
    local_EAX_3244 =
         thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                            this_00->field_0C1A);
    pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BA,local_EAX_3244);
    /* ST_CALLSITE[00506E8B]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar14 + 6,0x5d,'\x01',
           (byte *)pBVar6);
    if (this_00->field_0C26 != 0) {
      /* ST_CALLSITE[00506EAF]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&this_00->field_01E1,"%d",(uint)(byte)this_00->field_0C26);
      ccFntTy::SetSurf(this_00->field_01C8,this_00->field_0194,0,GVar14 + 6,0x5d,0x30,0x21);
      ccFntTy::WrStr(this_00->field_01C8,&this_00->field_01E1,-2,-1,0);
    }
    FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,GVar14 + 0x36,0x5d,7,0x21,0);
    GVar13 = local_8;
    bVar3 = this_00->field_0C24;
    cVar10 = (char)(((uint)bVar3 * 0x21) / 100);
    local_1c = (byte *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(cVar10));
    if ((bVar3 != 0) && (cVar10 == '\0')) {
      local_1c = (byte *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(1));
    }
    if (bVar3 < 0x46) {
      iVar12 = (-(uint)(bVar3 < 0x14) & 5) + 5;
    }
    else {
      iVar12 = 0;
    }
    uVar7 = (uint)local_1c & 0xff;
    Library::DKW::WGR::FUN_006b55f0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,local_8 + 0x37,0x7e - uVar7,
               (byte *)this_00->field_028A,0,iVar12,*(int *)(this_00->field_028A + 4) - uVar7,5,
               uVar7);
    pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
    /* ST_CALLSITE[00506FA0]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar13 + 5,0x5c,'\x06',
           (byte *)pBVar6);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,GVar13 + 2,0x52,0xb2,10);
    pHVar16 = g_hINSTANCE_00807618;
    UVar7 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0C1A,0);
    pcVar8_mg10 = LoadResourceString(UVar7,pHVar16);
    uVar7 = 0xffffffff;
    do {
      pcVar14 = pcVar8_mg10;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar14 = pcVar8_mg10 + 1;
      cVar10 = *pcVar8_mg10;
      pcVar8_mg10 = pcVar14;
    } while (cVar10 != '\0');
    uVar7 = ~uVar7;
    pcVar14 = pcVar14 + -uVar7;
    pcVar15 = &this_00->field_01E1;
    memmove(pcVar15, pcVar14, uVar7); /* compiler REP MOVS byte copy */
    uVar9 = 0;
    for (puVar8 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_01E1,'\n');
        puVar8 != nullptr; puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
      *(undefined1 *)puVar8 = 0x20;
    }
    goto cf_common_exit_00507034;
  case CASE_33:
    iVar18 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[8] + 4)) / 2;
    /* ST_CALLSITE[005069F2]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18,0x36,'\x01',
           (byte *)this_00->field_09D9[8]);
    /* ST_CALLSITE[00506A0D]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18 + 5,0x39,'\x01',
           (byte *)this_00->field_09D9[9]);
    local_c = &this_00->field_0C1C;
    local_10 = (Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12;
    local_8 = 0;
    iVar12 = 0x3a;
    do {
      if (*local_10 == 0) {
        ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar18 + 2,iVar12 - 2,0xb2,0x2f);
        iVar22 = -1;
        iVar21 = -1;
        uVar7 = 0;
        iVar20 = -1;
        iVar19 = -2;
        pcVar8_mgF = LoadResourceString(0x2713,g_hINSTANCE_00807618);
        ccFntTy::WrTxt(this_00->field_01B8,pcVar8_mgF,iVar19,iVar20,uVar7,iVar21,iVar22);
      }
      else {
        uVar5 = thunk_FUN_00526ba0(*local_10,(&this_00->field_0C1A)[local_8]);
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BA,uVar5);
        /* ST_CALLSITE[00506A6D]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18 + 6,iVar12,'\x01',
               (byte *)pBVar6);
        FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar18 + 0x36,iVar12,7,
                     0x21,0);
        bVar3 = (&this_00->field_0C24)[local_8];
        local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)(bVar3));
        cVar10 = (char)(((uint)bVar3 * 0x21) / 100);
        local_18 = STReplaceLowByte((uint32_t)(local_18), (uint8_t)(cVar10));
        if ((bVar3 != 0) && (cVar10 == '\0')) {
          local_18 = STReplaceLowByte((uint32_t)(local_18), (uint8_t)(1));
        }
        if (bVar3 < 0x46) {
          local_1c = (byte *)((-(uint)(bVar3 < 0x14) & 5) + 5);
        }
        else {
          local_1c = nullptr;
        }
        uVar7 = local_18 & 0xff;
        Library::DKW::WGR::FUN_006b55f0
                  ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,iVar18 + 0x37,
                   (iVar12 - uVar7) + 0x21,(byte *)this_00->field_028A,0,(int)local_1c,
                   *(int *)(this_00->field_028A + 4) - uVar7,5,uVar7);
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
        /* ST_CALLSITE[00506B39]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18 + 5,iVar12 + -1,'\x06',
               (byte *)pBVar6);
        /* ST_CALLSITE[00506B61]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
        PaintDamageXY(this_00,this_00->field_0194,iVar18 + 0x41,iVar12,
                      100 - (&this_00->field_0C24)[local_8],0x36b1);
        /* ST_CALLSITE[00506B87]: CALL 0x00405a8d; direct=00405A8D CPanelTy::PaintCostsXY */
        PaintCostsXY(this_00,this_00->field_0194,iVar18 + 0x41,iVar12 + 0xb,*local_c,local_c[2],4,2);
      }
      iVar12 = iVar12 + 0x23;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
      local_10 = local_10 + 1;
    } while (iVar12 < 0x80);
    break;
  case CASE_34:
    iVar12 = ((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004;
    iVar18 = *(int *)(this_00->field_09D9[8] + 4);
    /* ST_CALLSITE[005074BA]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0x60,0x1f,'\x01',
           (byte *)this_00->field_09D9[0xb]);
    /* ST_CALLSITE[005074C5]: CALL 0x00403526; direct=00403526 CPanelTy::PaintMunition */
    PaintMunition(this_00,(iVar12 - iVar18) / 2);
    break;
  case CASE_35:
    iVar12 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    /* ST_CALLSITE[00507121]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    if (this_00->field_0C31 != '\0') {
      /* ST_CALLSITE[00507136]: CALL 0x004057bd; direct=004057BD CPanelTy::PaintNameRes */
      PaintNameRes(this_00,iVar12);
      /* ST_CALLSITE[0050713E]: CALL 0x00405862; direct=00405862 CPanelTy::PaintPerRes */
      PaintPerRes(this_00,iVar12);
      break;
    }
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar12 + 2,0x52,0xb2,0x2f);
    if (this_00->field_0C2F == 0) goto LAB_005070be;
    pcVar8_mgD = LoadResourceString(0x273c,g_hINSTANCE_00807618);
    /* ST_CALLSITE[0050719D]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)&DAT_0080f33a,"%d %s",(uint)(ushort)this_00->field_0C2F,pcVar8_mgD);
    iVar20 = -1;
    iVar19 = -1;
    uVar7 = 0;
    iVar18 = -1;
    iVar12 = -2;
    pcVar8_mgE = (char *)&DAT_0080f33a;
    goto LAB_00507784;
  case CASE_36:
  case CASE_37:
  case CASE_43:
  case CASE_45:
  case CASE_48:
  case CASE_4C:
  case CASE_4D:
  case CASE_4E:
  case CASE_6F:
    iVar12 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[7] + 4)) / 2;
    /* ST_CALLSITE[005068A1]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x67,'\x01',
           (byte *)this_00->field_09D9[7]);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar12 + 2,0x69,0xa7,0xc);
    iVar21 = -1;
    iVar20 = -1;
    uVar7 = 0;
    iVar19 = -1;
    iVar18 = -2;
    pHVar16 = g_hINSTANCE_00807618;
    UVar5 = thunk_FUN_00525890(this_00->field_0BF5);
    pcVar8_mgC = LoadResourceString(UVar5,pHVar16);
    ccFntTy::WrTxt(this_00->field_01B8,pcVar8_mgC,iVar18,iVar19,uVar7,iVar20,iVar21);
    if (this_00->field_0C29 != 0xff) {
      if (0x28 < this_00->field_0C29) {
        this_00->field_0C29 = 0x28;
      }
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_0C29 != 0) {
        do {
          if ((this_00->field_0BF5 != CASE_4D) || (iVar18 = 4, this_00->field_0C28 == '\0')) {
            iVar18 = 3;
          }
          pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,iVar18);
          /* ST_CALLSITE[0050696B]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
                 iVar12 + 6 + (local_8 & 0xff) * 4,0x75,'\x01',(byte *)pBVar6);
          bVar3 = (undefined1)local_8 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
        } while (bVar3 < this_00->field_0C29);
      }
      if ((byte)(undefined1)local_8 < 0x28) {
        iVar18 = 0x28 - (local_8 & 0xff);
        iVar12 = iVar12 + 6 + (local_8 & 0xff) * 4;
        do {
          pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[005069BD]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x75,'\x01',
                 (byte *)pBVar6);
          iVar12 = iVar12 + 4;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
    }
    break;
  case CASE_38:
  case CASE_39:
  case CASE_4F:
    /* ST_CALLSITE[005070F5]: CALL 0x00403e4f; direct=00403E4F CPanelTy::PaintMineInf */
    PaintMineInf(this_00,(*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09D9[5] + 4))
                         / 2);
    break;
  case CASE_3A:
    iVar18 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    /* ST_CALLSITE[005071DC]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    iVar12 = iVar18 + 2;
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar12,0x52,0x69,0xc);
    iVar22 = -1;
    iVar21 = -1;
    uVar7 = 1;
    iVar20 = -1;
    iVar19 = -3;
    pcVar8_mg9 = LoadResourceString(0x36b7,g_hINSTANCE_00807618);
    ccFntTy::WrTxt(this_00->field_01B8,pcVar8_mg9,iVar19,iVar20,uVar7,iVar21,iVar22);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar12,0x5d,0x69,0xc);
    iVar22 = -1;
    iVar21 = -1;
    uVar7 = 1;
    iVar20 = -1;
    iVar19 = -3;
    pcVar8_mgA = LoadResourceString(0x36b8,g_hINSTANCE_00807618);
    ccFntTy::WrTxt(this_00->field_01B8,pcVar8_mgA,iVar19,iVar20,uVar7,iVar21,iVar22);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar12,0x69,0xb2,0xc);
    iVar21 = -1;
    iVar20 = -1;
    uVar7 = 1;
    iVar19 = -1;
    iVar12 = -2;
    pcVar8_mgB = LoadResourceString(0x36b6,g_hINSTANCE_00807618);
    ccFntTy::WrTxt(this_00->field_01B8,pcVar8_mgB,iVar12,iVar19,uVar7,iVar20,iVar21);
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_0C3A != '\0') {
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
        /* ST_CALLSITE[005072E4]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
               iVar18 + 0x70 + (local_8 & 0xff) * 4,0x54,'\x01',(byte *)pBVar6);
        bVar3 = (undefined1)local_8 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
      } while (bVar3 < (byte)this_00->field_0C3A);
    }
    if ((byte)(undefined1)local_8 < 0xf) {
      local_1c = (byte *)(0xf - (local_8 & 0xff));
      iVar12 = iVar18 + 0x70 + (local_8 & 0xff) * 4;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[00507335]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x54,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
        local_1c = local_1c + -1;
      } while (local_1c != nullptr);
    }
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_0C3B != '\0') {
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
        /* ST_CALLSITE[0050737E]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
               iVar18 + 0x70 + (local_8 & 0xff) * 4,0x5f,'\x01',(byte *)pBVar6);
        bVar3 = (undefined1)local_8 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
      } while (bVar3 < (byte)this_00->field_0C3B);
    }
    if ((byte)(undefined1)local_8 < 0xf) {
      local_1c = (byte *)(0xf - (local_8 & 0xff));
      iVar12 = iVar18 + 0x70 + (local_8 & 0xff) * 4;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[005073CF]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x5f,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
        local_1c = (byte *)((int)local_1c + -1);
      } while (local_1c != nullptr);
    }
    local_8 = local_8 & 0xffffff00;
    local_1c = (byte *)(((uint)(ushort)this_00->field_0C34 * 0x28) / 400);
    if (local_1c != nullptr) {
      pbVar4 = nullptr;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,2);
        /* ST_CALLSITE[00507426]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18 + 0xb + (int)pbVar4 * 4,
               0x76,'\x01',(byte *)pBVar6);
        bVar3 = (undefined1)local_8 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
        pbVar4 = (byte *)(uint)bVar3;
      } while (pbVar4 < local_1c);
    }
    if ((byte)(undefined1)local_8 < 0x28) {
      iVar19 = 0x28 - (local_8 & 0xff);
      iVar12 = iVar18 + 0xb + (local_8 & 0xff) * 4;
      do {
        pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        /* ST_CALLSITE[0050747E]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x76,'\x01',
               (byte *)pBVar6);
        iVar12 = iVar12 + 4;
        iVar19 = iVar19 + -1;
      } while (iVar19 != 0);
    }
    break;
  case CASE_3C:
    iVar12 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    /* ST_CALLSITE[0050751E]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    switch(this_00->field_0C3C) {
    case CASE_0:
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar12,0x50,
                       *(int *)(this_00->field_09D9[5] + 4),*(int *)(this_00->field_09D9[5] + 8));
      uVar7 = 1;
      UVar5 = 0x36bb;
      goto LAB_0050777e;
    case CASE_1:
      /* ST_CALLSITE[00507594]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12 + 5,0x65,'\x01',
             (byte *)this_00->field_09D9[0xd]);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar12 + 2,0x52,0xb2,10);
      iVar21 = -1;
      iVar20 = -1;
      uVar7 = 0;
      iVar19 = -1;
      iVar18 = -2;
      pcVar8_mg8 = LoadResourceString(0x36bd,g_hINSTANCE_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,pcVar8_mg8,iVar18,iVar19,uVar7,iVar20,iVar21);
      /* ST_CALLSITE[005075FF]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
      PaintDamageXY(this_00,this_00->field_0194,iVar12 + 0x39,0x65,*(byte *)&this_00->field_0C3D,
                    0x2714);
      uVar7 = (uint)(this_00->field_0C3D * 0x28) / 100;
      local_18 = 0;
      if (uVar7 != 0) {
        iVar18 = iVar12 + 0xb;
        local_1c = (byte *)uVar7;
        local_18 = uVar7;
        do {
          pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
          /* ST_CALLSITE[00507648]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar18,0x5c,'\x01',
                 (byte *)pBVar6);
          iVar18 = iVar18 + 4;
          local_1c = (byte *)((int)local_1c - 1);
        } while (local_1c != nullptr);
        local_1c = nullptr;
      }
      if (local_18 < 0x28) {
        iVar12 = iVar12 + 0xb + local_18 * 4;
        iVar18 = 0x28 - local_18;
        do {
          pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
          /* ST_CALLSITE[0050768E]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,iVar12,0x5c,'\x01',
                 (byte *)pBVar6);
          iVar12 = iVar12 + 4;
          iVar18 = iVar18 + -1;
        } while (iVar18 != 0);
      }
      break;
    case CASE_2:
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar12,0x54,
                       *(int *)(this_00->field_09D9[5] + 4),0x21);
      iVar21 = -1;
      iVar20 = -1;
      uVar7 = 1;
      iVar19 = -1;
      iVar18 = -2;
      pcVar8_mg7 = LoadResourceString(0x36bc,g_hINSTANCE_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,pcVar8_mg7,iVar18,iVar19,uVar7,iVar20,iVar21);
      /* ST_CALLSITE[005076FE]: CALL dword ptr [0x0085bde8] */
      wsprintfA(&this_00->field_01E1,"%4d",this_00->field_0C3D);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      ccFntTy::SetSurf(this_00->field_01BC,this_00->field_0194,0,iVar12,0x71,
                       *(int *)(this_00->field_09D9[5] + 4),
                       *(int *)(this_00->field_09D9[5] + 8) + -0x21);
      ccFntTy::WrStr(this_00->field_01BC,&this_00->field_01E1,-1,-1,0);
      break;
    case CASE_3:
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar12,0x50,
                       *(int *)(this_00->field_09D9[5] + 4),*(int *)(this_00->field_09D9[5] + 8));
      uVar7 = 1;
      UVar5 = 0x36be;
LAB_0050777e:
      iVar20 = -1;
      iVar19 = -1;
      iVar18 = -1;
      iVar12 = -2;
      pcVar8_mgE = LoadResourceString(UVar5,g_hINSTANCE_00807618);
LAB_00507784:
      ccFntTy::WrTxt(this_00->field_01B8,pcVar8_mgE,iVar12,iVar18,uVar7,iVar19,iVar20);
    }
    break;
  case CASE_44:
    /* ST_CALLSITE[00506C25]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
           (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
           *(int *)((byte *)this_00->field_09D9[10] + 4)) / 2,0x37,'\x01',
           (byte *)this_00->field_09D9[10]);
    GVar14 = (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
             *(int *)((byte *)this_00->field_09D9[5] + 4)) / 2;
    local_8 = GVar14;
    /* ST_CALLSITE[00506C4F]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar14,0x50,'\x01',
           (byte *)this_00->field_09D9[5]);
    uVar7 = (uint)(ushort)this_00->field_0C34;
    pcVar8_mg4 = LoadResourceString(0x2725,g_hINSTANCE_00807618);
    /* ST_CALLSITE[00506C7D]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)&DAT_0080f33a,"&1%s &0%d",pcVar8_mg4,uVar7);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x56,0x39,0x6d,0x15);
    ccFntTy::WrTxt(this_00->field_01B8,(char *)&DAT_0080f33a,-2,-1,0,-1,-1);
    if (*(int *)&this_00->field_0xc12 == 0) goto LAB_0050709d;
    /* ST_CALLSITE[00506CE0]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar14 + 6,0x5d,'\x01',
           (byte *)this_00->field_09D9[0xc]);
    FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,GVar14 + 0x36,0x5d,7,0x21,0);
    GVar13 = local_8;
    bVar3 = this_00->field_0C24;
    cVar10 = (char)(((uint)bVar3 * 0x21) / 100);
    local_1c = (byte *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(cVar10));
    if ((bVar3 != 0) && (cVar10 == '\0')) {
      local_1c = (byte *)STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(1));
    }
    if (bVar3 < 0x46) {
      iVar12 = (-(uint)(bVar3 < 0x14) & 5) + 5;
    }
    else {
      iVar12 = 0;
    }
    uVar7 = (uint)local_1c & 0xff;
    Library::DKW::WGR::FUN_006b55f0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0194,0,local_8 + 0x37,0x7e - uVar7,
               (byte *)this_00->field_028A,0,iVar12,*(int *)(this_00->field_028A + 4) - uVar7,5,
               uVar7);
    pBVar6 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
    /* ST_CALLSITE[00506D9D]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,GVar13 + 5,0x5c,'\x06',
           (byte *)pBVar6);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,GVar13 + 2,0x52,0xb2,10);
    pcVar8_mg5 = LoadResourceString(0x2b2c,g_hINSTANCE_00807618);
    uVar7 = 0xffffffff;
    do {
      pcVar14 = pcVar8_mg5;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar14 = pcVar8_mg5 + 1;
      cVar10 = *pcVar8_mg5;
      pcVar8_mg5 = pcVar14;
    } while (cVar10 != '\0');
    uVar7 = ~uVar7;
    pcVar14 = pcVar14 + -uVar7;
    pcVar15 = &this_00->field_01E1;
    memmove(pcVar15, pcVar14, uVar7); /* compiler REP MOVS byte copy */
    for (puVar8 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_01E1,'\n');
        puVar8 != nullptr; puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
      *(undefined1 *)puVar8 = 0x20;
    }
cf_common_exit_00507034:
    ccFntTy::WrTxt(this_00->field_01B8,&this_00->field_01E1,-2,-1,0,-1,-1);
    iVar12 = local_8 + 0x41;
    /* ST_CALLSITE[0050706E]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
    PaintDamageXY(this_00,this_00->field_0194,iVar12,0x5d,this_00->field_0C24,0x2714);
    /* ST_CALLSITE[00507093]: CALL 0x00405a8d; direct=00405A8D CPanelTy::PaintCostsXY */
    PaintCostsXY(this_00,this_00->field_0194,iVar12,0x68,this_00->field_0C1C,this_00->field_0C20,4,2
                );
    break;
  case CASE_50:
    /* ST_CALLSITE[005074EF]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0194,
           (((RecoveredSourceFamily_dibcopy *)this_00->field_0194)->field_0004 -
           *(int *)((byte *)this_00->field_09D9[8] + 4)) / 2,0x36,'\x01',
           (byte *)this_00->field_09D9[8]);
  }
switchD_00506878_caseD_3b:
  /* ST_CALLSITE[00507791]: CALL 0x004019b5; direct=004019B5 CPanelTy::PaintIDSObj */
  PaintIDSObj(this_00);
switchD_00506377_caseD_df:
  if (-1 < (int)this_00->field_0148[5]) {
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[5],0xffffffff,
               this_00->field_0050,this_00->field_00A8);
  }
  g_currentExceptionFrame = local_64.previous;
  return;
}

