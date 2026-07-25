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
  code *pcVar2;
  CPanelTy *this_00;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  UINT UVar7;
  char *pcVar8;
  uint *puVar9;
  byte *pbVar10;
  int iVar11;
  ushort *puVar12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX;
  uint uVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_ECX_01;
  char cVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  Global_sub_00529500_param_1Enum GVar15;
  undefined4 uVar16;
  char *pcVar17;
  HINSTANCE pHVar18;
  AnonShape_006B5B10_E0D06CF1 *pAVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
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
    puVar12 = local_20->field_09D9;
    pAVar19 = (AnonShape_006B5B10_E0D06CF1 *)local_20->field_0194;
    iVar11 = 0;
    iVar4 = 0;
    goto LAB_0050633b;
  case CASE_1:
    if (local_20->field_0BFB == '\x02') {
      puVar12 = local_20->field_09DD;
      pAVar19 = (AnonShape_006B5B10_E0D06CF1 *)local_20->field_0194;
      iVar11 = 0;
      iVar4 = 0;
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
    puVar12 = local_20->field_09E5;
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
    puVar12 = local_20->field_09E1;
LAB_005062d5:
    pAVar19 = (AnonShape_006B5B10_E0D06CF1 *)local_20->field_0194;
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
    puVar12 = local_20->field_09DD;
    pAVar19 = (AnonShape_006B5B10_E0D06CF1 *)local_20->field_0194;
    break;
  case CASE_36:
    if (local_20->field_0BF9 == '\x01') {
      puVar12 = local_20->field_09E5;
      pAVar19 = (AnonShape_006B5B10_E0D06CF1 *)local_20->field_0194;
    }
    else {
      if (local_20->field_0BF9 != '\x02') goto switchD_00506270_caseD_53;
      puVar12 = local_20->field_09E1;
      pAVar19 = (AnonShape_006B5B10_E0D06CF1 *)local_20->field_0194;
    }
    break;
  default:
    goto switchD_00506270_caseD_53;
  }
  DibPut(pAVar19,0,0,'\x01',(byte *)puVar12);
switchD_00506270_caseD_53:
  switch(this_00->field_0BF5) {
  case CASE_36:
    if (this_00->field_0BF9 == '\x01') {
      puVar12 = this_00->field_09E9;
      pAVar19 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194;
      iVar11 = 0x35;
      iVar4 = 0xc;
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
    puVar12 = this_00->field_09E9;
    pAVar19 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194;
    iVar11 = 0x35;
    iVar4 = 0xc;
LAB_0050633b:
    DibPut(pAVar19,iVar4,iVar11,'\x01',(byte *)puVar12);
  }
switchD_00506214_caseD_2:
  if (this_00->field_0BFA != CASE_1) {
    if (this_00->field_0BFA == CASE_4) {
      switch(this_00->field_0BF5) {
      case CASE_DD:
      case CASE_DE:
      case CASE_E0:
      case CASE_FE:
        iVar4 = (((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194)->field_0004 -
                *(int *)(this_00->field_09ED + 2)) / 2;
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4,0x50,'\x01',
               (byte *)this_00->field_09ED);
        pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02D2,
                                      (uint)this_00->field_0C11);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4 + 3,0x53,'\x01',pbVar6);
        pbVar6 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_09ED,0,0x49,7,
                                             0x67,0xc,0);
        if (pbVar6 != (byte *)0x0) {
          if (this_00->field_0BF5 == 0xfe) {
            local_8 = thunk_FUN_00529480(this_00->field_0C11);
          }
          else {
            local_8 = thunk_FUN_005293f0(this_00->field_0BF5);
          }
          iVar11 = thunk_FUN_00529500(local_8);
          iVar21 = -1;
          iVar20 = -1;
          puVar9 = (uint *)LoadResourceString(local_8,g_module_00807618);
          ccFntTy::WrStr(this_00->field_01B8,puVar9,iVar20,iVar21,iVar11);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4 + 0x49,0x57,'\x01',pbVar6)
          ;
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
        local_1c = (byte *)ccFntTy::CreateSurf(this_00->field_01C4,(int)this_00->field_09ED,0,100,
                                               0x14,0x3c,0x14,0);
        if (local_1c != (byte *)0x0) {
          uVar16 = 0;
          wsprintfA((LPSTR)&DAT_0080f33a,"%06d",*(undefined4 *)&this_00->field_0xc12);
          switch(this_00->field_0C11) {
          case CASE_0:
            uVar16 = 0;
            break;
          case CASE_1:
            uVar16 = 2;
            break;
          case CASE_2:
            uVar16 = 1;
            break;
          case CASE_3:
            uVar16 = 7;
            break;
          case CASE_4:
            uVar16 = 3;
          }
          ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,uVar16);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4 + 100,100,'\x01',local_1c)
          ;
          ccFntTy::EraseSufr(this_00->field_01C4);
        }
        break;
      case CASE_FD:
        iVar4 = (((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194)->field_0004 -
                *(int *)(this_00->field_0A11 + 2)) / 2;
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4,0x3f,'\x01',
               (byte *)this_00->field_0A11);
        CVar1 = this_00->field_0C11;
        if ((CVar1 != CASE_0) && (CVar1 < 0x16)) {
          pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CE,
                                        CVar1 - 1);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4 + 6,0x44,'\x01',pbVar6);
        }
        pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,10);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4 + 4,0x42,'\x06',pbVar6);
        pbVar6 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_0A11,0,0x38,4,
                                             0x7b,0x19,0);
        if (pbVar6 != (byte *)0x0) {
          iVar22 = -1;
          iVar21 = -1;
          uVar5 = 0;
          iVar20 = -1;
          iVar11 = -2;
          pHVar18 = g_module_00807618;
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          UVar7 = thunk_FUN_00525290(CONCAT31((int3)((uint)extraout_ECX >> 8),this_00->field_0C11));
          puVar9 = (uint *)LoadResourceString(UVar7,pHVar18);
          ccFntTy::WrTxt(this_00->field_01B8,puVar9,iVar11,iVar20,uVar5,iVar21,iVar22);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4 + 0x38,0x43,'\x01',pbVar6)
          ;
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
        pbVar6 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_0A11,0,2,0x1e,
                                             0xb2,0x22,0);
        if (pbVar6 != (byte *)0x0) {
          ccFntTy::WrTxt(this_00->field_01B8,(uint *)this_00->field_0C16,-2,-1,1,-1,-1);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4 + 2,0x5d,'\x01',pbVar6);
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
      }
    }
    goto switchD_00506377_caseD_df;
  }
  if (this_00->field_0BFB == '\x02') {
    GVar15 = (((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194)->field_0004 -
             *(int *)(this_00->field_09ED + 2)) / 2;
    local_8 = GVar15;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,GVar15,0x50,'\x01',
           (byte *)this_00->field_09ED);
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != 0) {
      uVar5 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A);
      pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02C2,uVar5)
      ;
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,GVar15 + 6,0x5d,'\x01',pbVar6);
      FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,GVar15 + 0x36,0x5d,7,0x21,0)
      ;
      GVar15 = local_8;
      bVar3 = this_00->field_0C24;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_1c = (byte *)CONCAT31(local_1c._1_3_,bVar3);
      cVar14 = (char)(((uint)bVar3 * 0x21) / 100);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_10 = (Global_sub_00526BA0_param_1Enum *)CONCAT31(local_10._1_3_,cVar14);
      if ((bVar3 != 0) && (cVar14 == '\0')) {
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_10 = (Global_sub_00526BA0_param_1Enum *)CONCAT31(local_10._1_3_,1);
      }
      if (bVar3 < 0x46) {
        iVar4 = (-(uint)(bVar3 < 0x14) & 5) + 5;
      }
      else {
        iVar4 = 0;
      }
      uVar5 = (uint)local_10 & 0xff;
      Library::DKW::WGR::FUN_006b55f0
                ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,local_8 + 0x37,0x7e - uVar5,
                 (byte *)this_00->field_028A,0,iVar4,*(int *)(this_00->field_028A + 4) - uVar5,5,
                 uVar5);
      pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,GVar15 + 5,0x5c,'\x06',pbVar6);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,GVar15 + 2,0x52,0xb2,10);
      pHVar18 = g_module_00807618;
      UVar7 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A,0);
      pcVar8 = LoadResourceString(UVar7,pHVar18);
      uVar5 = 0xffffffff;
      do {
        pcVar17 = pcVar8;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar17 = pcVar8 + 1;
        cVar14 = *pcVar8;
        pcVar8 = pcVar17;
      } while (cVar14 != '\0');
      uVar5 = ~uVar5;
      pcVar8 = pcVar17 + -uVar5;
      pcVar17 = &this_00->field_0x1e1;
      for (uVar13 = uVar5 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar17 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar17 = pcVar17 + 1;
      }
      for (puVar9 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e1,'\n');
          puVar9 != (uint *)0x0; puVar9 = Library::MSVCRT::FUN_0072e560(puVar9,'\n')) {
        *(undefined1 *)puVar9 = 0x20;
      }
      goto cf_common_exit_00507034;
    }
    goto switchD_00506878_caseD_3b;
  }
  switch(this_00->field_0BF5) {
  case CASE_32:
  case CASE_40:
  case CASE_49:
    GVar15 = (((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194)->field_0004 -
             *(int *)(this_00->field_09ED + 2)) / 2;
    local_8 = GVar15;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,GVar15,0x50,'\x01',
           (byte *)this_00->field_09ED);
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == 0) {
LAB_0050709d:
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,GVar15 + 2,0x52,0xb2,0x2f);
LAB_005070be:
      uVar5 = 0;
      UVar7 = 0x2713;
      goto LAB_0050777e;
    }
    uVar5 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0C1A);
    pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BA,uVar5);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,GVar15 + 6,0x5d,'\x01',pbVar6);
    if (this_00->field_0C26 != 0) {
      wsprintfA(&this_00->field_0x1e1,"%d",(uint)(byte)this_00->field_0C26);
      ccFntTy::SetSurf(this_00->field_01C8,this_00->field_0194,0,GVar15 + 6,0x5d,0x30,0x21);
      ccFntTy::WrStr(this_00->field_01C8,(uint *)&this_00->field_0x1e1,-2,-1,0);
    }
    FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,GVar15 + 0x36,0x5d,7,0x21,0);
    GVar15 = local_8;
    bVar3 = this_00->field_0C24;
    cVar14 = (char)(((uint)bVar3 * 0x21) / 100);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_1c = (byte *)CONCAT31(local_1c._1_3_,cVar14);
    if ((bVar3 != 0) && (cVar14 == '\0')) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_1c = (byte *)CONCAT31(local_1c._1_3_,1);
    }
    if (bVar3 < 0x46) {
      iVar4 = (-(uint)(bVar3 < 0x14) & 5) + 5;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = (uint)local_1c & 0xff;
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,local_8 + 0x37,0x7e - uVar5,
               (byte *)this_00->field_028A,0,iVar4,*(int *)(this_00->field_028A + 4) - uVar5,5,uVar5
              );
    pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,GVar15 + 5,0x5c,'\x06',pbVar6);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,GVar15 + 2,0x52,0xb2,10);
    pHVar18 = g_module_00807618;
    UVar7 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0C1A,0);
    pcVar8 = LoadResourceString(UVar7,pHVar18);
    uVar5 = 0xffffffff;
    do {
      pcVar17 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar17 = pcVar8 + 1;
      cVar14 = *pcVar8;
      pcVar8 = pcVar17;
    } while (cVar14 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar17 + -uVar5;
    pcVar17 = &this_00->field_0x1e1;
    for (uVar13 = uVar5 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar17 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar17 = pcVar17 + 1;
    }
    for (puVar9 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e1,'\n');
        puVar9 != (uint *)0x0; puVar9 = Library::MSVCRT::FUN_0072e560(puVar9,'\n')) {
      *(undefined1 *)puVar9 = 0x20;
    }
    goto cf_common_exit_00507034;
  case CASE_33:
    iVar11 = (((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194)->field_0004 -
             *(int *)(this_00->field_09F9 + 2)) / 2;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar11,0x36,'\x01',
           (byte *)this_00->field_09F9);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar11 + 5,0x39,'\x01',
           (byte *)this_00->field_09FD);
    local_c = &this_00->field_0C1C;
    local_10 = (Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12;
    local_8 = 0;
    iVar4 = 0x3a;
    do {
      if (*local_10 == 0) {
        ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar11 + 2,iVar4 - 2,0xb2,0x2f);
        iVar23 = -1;
        iVar22 = -1;
        uVar5 = 0;
        iVar21 = -1;
        iVar20 = -2;
        puVar9 = (uint *)LoadResourceString(0x2713,g_module_00807618);
        ccFntTy::WrTxt(this_00->field_01B8,puVar9,iVar20,iVar21,uVar5,iVar22,iVar23);
      }
      else {
        uVar5 = thunk_FUN_00526ba0(*local_10,(&this_00->field_0C1A)[local_8]);
        pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BA,
                                      uVar5);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar11 + 6,iVar4,'\x01',pbVar6);
        FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,iVar11 + 0x36,iVar4,7,0x21
                     ,0);
        bVar3 = (&this_00->field_0C24)[local_8];
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_14 = CONCAT31(local_14._1_3_,bVar3);
        cVar14 = (char)(((uint)bVar3 * 0x21) / 100);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_18 = CONCAT31(local_18._1_3_,cVar14);
        if ((bVar3 != 0) && (cVar14 == '\0')) {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_18 = CONCAT31(local_18._1_3_,1);
        }
        if (bVar3 < 0x46) {
          local_1c = (byte *)((-(uint)(bVar3 < 0x14) & 5) + 5);
        }
        else {
          local_1c = (byte *)0x0;
        }
        uVar5 = local_18 & 0xff;
        Library::DKW::WGR::FUN_006b55f0
                  ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,iVar11 + 0x37,
                   (iVar4 - uVar5) + 0x21,(byte *)this_00->field_028A,0,(int)local_1c,
                   *(int *)(this_00->field_028A + 4) - uVar5,5,uVar5);
        pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar11 + 5,iVar4 + -1,'\x06',
               pbVar6);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        PaintDamageXY(this_00,this_00->field_0194,iVar11 + 0x41,iVar4,
                      CONCAT31((int3)((uint)extraout_ECX_00 >> 8),
                               'd' - (&this_00->field_0C24)[local_8]),0x36b1);
        PaintCostsXY(this_00,this_00->field_0194,iVar11 + 0x41,iVar4 + 0xb,*local_c,local_c[2],4,2);
      }
      iVar4 = iVar4 + 0x23;
      local_8 = local_8 + 1;
      local_c = local_c + 1;
      local_10 = local_10 + 1;
    } while (iVar4 < 0x80);
    break;
  case CASE_34:
    iVar4 = ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194)->field_0004;
    iVar11 = *(int *)(this_00->field_09F9 + 2);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x60,0x1f,'\x01',
           (byte *)this_00->field_0A05);
    PaintMunition(this_00,(iVar4 - iVar11) / 2);
    break;
  case CASE_35:
    iVar4 = (((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194)->field_0004 -
            *(int *)(this_00->field_09ED + 2)) / 2;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4,0x50,'\x01',
           (byte *)this_00->field_09ED);
    if (this_00->field_0C31 != '\0') {
      PaintNameRes(this_00,iVar4);
      PaintPerRes(this_00,iVar4);
      break;
    }
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar4 + 2,0x52,0xb2,0x2f);
    if (this_00->field_0C2F == 0) goto LAB_005070be;
    pcVar8 = LoadResourceString(0x273c,g_module_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,"%d %s",(uint)(ushort)this_00->field_0C2F,pcVar8);
    iVar21 = -1;
    iVar20 = -1;
    uVar5 = 0;
    iVar11 = -1;
    iVar4 = -2;
    puVar9 = &DAT_0080f33a;
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
    iVar4 = (((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194)->field_0004 -
            *(int *)(this_00->field_09F5 + 2)) / 2;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4,0x67,'\x01',
           (byte *)this_00->field_09F5);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar4 + 2,0x69,0xa7,0xc);
    iVar22 = -1;
    iVar21 = -1;
    uVar5 = 0;
    iVar20 = -1;
    iVar11 = -2;
    pHVar18 = g_module_00807618;
    UVar7 = thunk_FUN_00525890(this_00->field_0BF5);
    puVar9 = (uint *)LoadResourceString(UVar7,pHVar18);
    ccFntTy::WrTxt(this_00->field_01B8,puVar9,iVar11,iVar20,uVar5,iVar21,iVar22);
    if (this_00->field_0C29 != 0xff) {
      if (0x28 < this_00->field_0C29) {
        this_00->field_0C29 = 0x28;
      }
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_0C29 != 0) {
        do {
          if ((this_00->field_0BF5 != CASE_4D) || (iVar11 = 4, this_00->field_0C28 == '\0')) {
            iVar11 = 3;
          }
          pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                        iVar11);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4 + 6 + (local_8 & 0xff) * 4
                 ,0x75,'\x01',pbVar6);
          bVar3 = (undefined1)local_8 + 1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = CONCAT31(local_8._1_3_,bVar3);
        } while (bVar3 < this_00->field_0C29);
      }
      if ((byte)(undefined1)local_8 < 0x28) {
        iVar11 = 0x28 - (local_8 & 0xff);
        iVar4 = iVar4 + 6 + (local_8 & 0xff) * 4;
        do {
          pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4,0x75,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
    break;
  case CASE_38:
  case CASE_39:
  case CASE_4F:
    PaintMineInf(this_00,(*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09ED + 2)) / 2
                );
    break;
  case CASE_3A:
    iVar11 = (((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194)->field_0004 -
             *(int *)(this_00->field_09ED + 2)) / 2;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar11,0x50,'\x01',
           (byte *)this_00->field_09ED);
    iVar4 = iVar11 + 2;
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar4,0x52,0x69,0xc);
    iVar23 = -1;
    iVar22 = -1;
    uVar5 = 1;
    iVar21 = -1;
    iVar20 = -3;
    puVar9 = (uint *)LoadResourceString(0x36b7,g_module_00807618);
    ccFntTy::WrTxt(this_00->field_01B8,puVar9,iVar20,iVar21,uVar5,iVar22,iVar23);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar4,0x5d,0x69,0xc);
    iVar23 = -1;
    iVar22 = -1;
    uVar5 = 1;
    iVar21 = -1;
    iVar20 = -3;
    puVar9 = (uint *)LoadResourceString(0x36b8,g_module_00807618);
    ccFntTy::WrTxt(this_00->field_01B8,puVar9,iVar20,iVar21,uVar5,iVar22,iVar23);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar4,0x69,0xb2,0xc);
    iVar22 = -1;
    iVar21 = -1;
    uVar5 = 1;
    iVar20 = -1;
    iVar4 = -2;
    puVar9 = (uint *)LoadResourceString(0x36b6,g_module_00807618);
    ccFntTy::WrTxt(this_00->field_01B8,puVar9,iVar4,iVar20,uVar5,iVar21,iVar22);
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_0C3A != '\0') {
      do {
        pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,
               iVar11 + 0x70 + (local_8 & 0xff) * 4,0x54,'\x01',pbVar6);
        bVar3 = (undefined1)local_8 + 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = CONCAT31(local_8._1_3_,bVar3);
      } while (bVar3 < (byte)this_00->field_0C3A);
    }
    if ((byte)(undefined1)local_8 < 0xf) {
      local_1c = (byte *)(0xf - (local_8 & 0xff));
      iVar4 = iVar11 + 0x70 + (local_8 & 0xff) * 4;
      do {
        pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4,0x54,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
        local_1c = local_1c + -1;
      } while (local_1c != (byte *)0x0);
    }
    local_8 = local_8 & 0xffffff00;
    if (this_00->field_0C3B != '\0') {
      do {
        pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,
               iVar11 + 0x70 + (local_8 & 0xff) * 4,0x5f,'\x01',pbVar6);
        bVar3 = (undefined1)local_8 + 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = CONCAT31(local_8._1_3_,bVar3);
      } while (bVar3 < (byte)this_00->field_0C3B);
    }
    if ((byte)(undefined1)local_8 < 0xf) {
      local_1c = (byte *)(0xf - (local_8 & 0xff));
      iVar4 = iVar11 + 0x70 + (local_8 & 0xff) * 4;
      do {
        pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4,0x5f,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
        local_1c = (byte *)((int)local_1c + -1);
      } while (local_1c != (byte *)0x0);
    }
    local_8 = local_8 & 0xffffff00;
    local_1c = (byte *)(((uint)(ushort)this_00->field_0C34 * 0x28) / 400);
    if (local_1c != (byte *)0x0) {
      pbVar6 = (byte *)0x0;
      do {
        pbVar10 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,2);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar11 + 0xb + (int)pbVar6 * 4,
               0x76,'\x01',pbVar10);
        bVar3 = (undefined1)local_8 + 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = CONCAT31(local_8._1_3_,bVar3);
        pbVar6 = (byte *)(uint)bVar3;
      } while (pbVar6 < local_1c);
    }
    if ((byte)(undefined1)local_8 < 0x28) {
      iVar20 = 0x28 - (local_8 & 0xff);
      iVar4 = iVar11 + 0xb + (local_8 & 0xff) * 4;
      do {
        pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4,0x76,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
    }
    break;
  case CASE_3C:
    iVar4 = (((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194)->field_0004 -
            *(int *)(this_00->field_09ED + 2)) / 2;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4,0x50,'\x01',
           (byte *)this_00->field_09ED);
    switch(this_00->field_0C3C) {
    case CASE_0:
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar4,0x50,
                       *(int *)(this_00->field_09ED + 2),*(int *)(this_00->field_09ED + 4));
      uVar5 = 1;
      UVar7 = 0x36bb;
      goto LAB_0050777e;
    case CASE_1:
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4 + 5,0x65,'\x01',
             (byte *)this_00->field_0A0D);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar4 + 2,0x52,0xb2,10);
      iVar22 = -1;
      iVar21 = -1;
      uVar5 = 0;
      iVar20 = -1;
      iVar11 = -2;
      puVar9 = (uint *)LoadResourceString(0x36bd,g_module_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,puVar9,iVar11,iVar20,uVar5,iVar21,iVar22);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      PaintDamageXY(this_00,this_00->field_0194,iVar4 + 0x39,0x65,
                    CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)&this_00->field_0C3D),
                    0x2714);
      uVar5 = (uint)(this_00->field_0C3D * 0x28) / 100;
      local_18 = 0;
      if (uVar5 != 0) {
        iVar11 = iVar4 + 0xb;
        local_1c = (byte *)uVar5;
        local_18 = uVar5;
        do {
          pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,3)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar11,0x5c,'\x01',pbVar6);
          iVar11 = iVar11 + 4;
          local_1c = (byte *)((int)local_1c - 1);
        } while (local_1c != (byte *)0x0);
        local_1c = (byte *)0x0;
      }
      if (local_18 < 0x28) {
        iVar4 = iVar4 + 0xb + local_18 * 4;
        iVar11 = 0x28 - local_18;
        do {
          pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar4,0x5c,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      break;
    case CASE_2:
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar4,0x54,
                       *(int *)(this_00->field_09ED + 2),0x21);
      iVar22 = -1;
      iVar21 = -1;
      uVar5 = 1;
      iVar20 = -1;
      iVar11 = -2;
      puVar9 = (uint *)LoadResourceString(0x36bc,g_module_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,puVar9,iVar11,iVar20,uVar5,iVar21,iVar22);
      wsprintfA(&this_00->field_0x1e1,"%4d",this_00->field_0C3D);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      ccFntTy::SetSurf(this_00->field_01BC,this_00->field_0194,0,iVar4,0x71,
                       *(int *)(this_00->field_09ED + 2),*(int *)(this_00->field_09ED + 4) + -0x21);
      ccFntTy::WrStr(this_00->field_01BC,(uint *)&this_00->field_0x1e1,-1,-1,0);
      break;
    case CASE_3:
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,iVar4,0x50,
                       *(int *)(this_00->field_09ED + 2),*(int *)(this_00->field_09ED + 4));
      uVar5 = 1;
      UVar7 = 0x36be;
LAB_0050777e:
      iVar21 = -1;
      iVar20 = -1;
      iVar11 = -1;
      iVar4 = -2;
      puVar9 = (uint *)LoadResourceString(UVar7,g_module_00807618);
LAB_00507784:
      ccFntTy::WrTxt(this_00->field_01B8,puVar9,iVar4,iVar11,uVar5,iVar20,iVar21);
    }
    break;
  case CASE_44:
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,
           (((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194)->field_0004 -
           *(int *)(this_00->field_0A01 + 2)) / 2,0x37,'\x01',(byte *)this_00->field_0A01);
    GVar15 = (((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194)->field_0004 -
             *(int *)(this_00->field_09ED + 2)) / 2;
    local_8 = GVar15;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,GVar15,0x50,'\x01',
           (byte *)this_00->field_09ED);
    uVar5 = (uint)(ushort)this_00->field_0C34;
    pcVar8 = LoadResourceString(0x2725,g_module_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,"&1%s &0%d",pcVar8,uVar5);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x56,0x39,0x6d,0x15);
    ccFntTy::WrTxt(this_00->field_01B8,&DAT_0080f33a,-2,-1,0,-1,-1);
    if (*(int *)&this_00->field_0xc12 == 0) goto LAB_0050709d;
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,GVar15 + 6,0x5d,'\x01',
           (byte *)this_00->field_0A09);
    FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,GVar15 + 0x36,0x5d,7,0x21,0);
    GVar15 = local_8;
    bVar3 = this_00->field_0C24;
    cVar14 = (char)(((uint)bVar3 * 0x21) / 100);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_1c = (byte *)CONCAT31(local_1c._1_3_,cVar14);
    if ((bVar3 != 0) && (cVar14 == '\0')) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_1c = (byte *)CONCAT31(local_1c._1_3_,1);
    }
    if (bVar3 < 0x46) {
      iVar4 = (-(uint)(bVar3 < 0x14) & 5) + 5;
    }
    else {
      iVar4 = 0;
    }
    uVar5 = (uint)local_1c & 0xff;
    Library::DKW::WGR::FUN_006b55f0
              ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,local_8 + 0x37,0x7e - uVar5,
               (byte *)this_00->field_028A,0,iVar4,*(int *)(this_00->field_028A + 4) - uVar5,5,uVar5
              );
    pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,1);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,GVar15 + 5,0x5c,'\x06',pbVar6);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,GVar15 + 2,0x52,0xb2,10);
    pcVar8 = LoadResourceString(0x2b2c,g_module_00807618);
    uVar5 = 0xffffffff;
    do {
      pcVar17 = pcVar8;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar17 = pcVar8 + 1;
      cVar14 = *pcVar8;
      pcVar8 = pcVar17;
    } while (cVar14 != '\0');
    uVar5 = ~uVar5;
    pcVar8 = pcVar17 + -uVar5;
    pcVar17 = &this_00->field_0x1e1;
    for (uVar13 = uVar5 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined4 *)pcVar17 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar17 = pcVar17 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar17 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar17 = pcVar17 + 1;
    }
    for (puVar9 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e1,'\n');
        puVar9 != (uint *)0x0; puVar9 = Library::MSVCRT::FUN_0072e560(puVar9,'\n')) {
      *(undefined1 *)puVar9 = 0x20;
    }
cf_common_exit_00507034:
    ccFntTy::WrTxt(this_00->field_01B8,(uint *)&this_00->field_0x1e1,-2,-1,0,-1,-1);
    iVar4 = local_8 + 0x41;
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    PaintDamageXY(this_00,this_00->field_0194,iVar4,0x5d,
                  CONCAT31((int3)((uint)extraout_ECX_01 >> 8),this_00->field_0C24),0x2714);
    PaintCostsXY(this_00,this_00->field_0194,iVar4,0x68,this_00->field_0C1C,this_00->field_0C20,4,2)
    ;
    break;
  case CASE_50:
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,
           (((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194)->field_0004 -
           *(int *)(this_00->field_09F9 + 2)) / 2,0x36,'\x01',(byte *)this_00->field_09F9);
  }
switchD_00506878_caseD_3b:
  PaintIDSObj(this_00);
switchD_00506377_caseD_df:
  if (-1 < this_00->field_015C) {
    Library::DKW::DDX::FUN_006b3640
              ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
               this_00->field_00A8);
  }
  g_currentExceptionFrame = local_64.previous;
  return;
}

