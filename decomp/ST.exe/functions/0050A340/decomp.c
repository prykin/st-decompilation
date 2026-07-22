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
    */

void __thiscall CPanelTy::PaintCtrlObjSI(CPanelTy *this)

{
  undefined1 *resourceString;
  char cVar1;
  byte bVar2;
  CPanelTy_field_0BF5State CVar3;
  code *pcVar4;
  CPanelTy *this_00;
  int iVar5;
  Global_sub_00529500_param_1Enum resourceId;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  UINT UVar9;
  char *pcVar10;
  uint *puVar11;
  ushort *puVar12;
  int iVar13;
  uint uVar14;
  ccFntTy *this_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  undefined4 uVar15;
  char *pcVar16;
  HINSTANCE pHVar17;
  AnonShape_006B5B10_E0D06CF1 *pAVar18;
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
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_1c->field_0194,0,0x46,'\x01',
           (byte *)local_1c->field_09D9);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,0,'\x06',(byte *)this_00->field_09FD
          );
    break;
  case CASE_1:
    if (local_1c->field_0BFB == '\x02') {
      DibPut((AnonShape_006B5B10_E0D06CF1 *)local_1c->field_0194,0,0,'\x06',
             (byte *)local_1c->field_0A05);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,0x46,'\x01',
             (byte *)this_00->field_09E1);
      break;
    }
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_1c->field_0194,0,0,'\x06',
           (byte *)local_1c->field_0A05);
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
      puVar12 = this_00->field_09E1;
      pAVar18 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194;
      break;
    case CASE_5B:
      puVar12 = this_00->field_09E5;
      pAVar18 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194;
      break;
    case CASE_5E:
    case CASE_6D:
      puVar12 = this_00->field_09DD;
      pAVar18 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194;
      break;
    default:
      puVar12 = this_00->field_09D9;
      goto LAB_0050a4e4;
    case CASE_62:
      puVar12 = this_00->field_09F5;
LAB_0050a4e4:
      pAVar18 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194;
      break;
    case CASE_67:
    case CASE_68:
      puVar12 = this_00->field_09ED;
      pAVar18 = (AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194;
    }
    DibPut(pAVar18,0,0x46,'\x01',(byte *)puVar12);
    break;
  case CASE_4:
    DibPut((AnonShape_006B5B10_E0D06CF1 *)local_1c->field_0194,0,0,'\x06',
           (byte *)local_1c->field_09FD);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,0x46,'\x01',
           (byte *)this_00->field_09DD);
  }
  if (this_00->field_0BFA != CASE_1) {
    if (this_00->field_0BFA == CASE_4) {
      switch(this_00->field_0BF5) {
      case CASE_DD:
      case CASE_DE:
      case CASE_E0:
      case CASE_FE:
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x2c,0x52,'\x01',
               (byte *)this_00->field_0A09);
        pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02D2,
                                      (uint)this_00->field_0C11);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x2e,0x54,'\x01',pbVar7);
        pbVar7 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_09DD,0,0x70,
                                             0x12,0x62,0xd,0);
        if (pbVar7 != (byte *)0x0) {
          if (this_00->field_0BF5 == 0xfe) {
            resourceId = thunk_FUN_00529480(this_00->field_0C11);
          }
          else {
            resourceId = thunk_FUN_005293f0(this_00->field_0BF5);
          }
          iVar5 = thunk_FUN_00529500(resourceId);
          iVar19 = -1;
          iVar13 = -1;
          puVar11 = (uint *)LoadResourceString(resourceId,g_module_00807618);
          ccFntTy::WrStr(this_00->field_01B8,puVar11,iVar13,iVar19,iVar5);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x70,0x58,'\x01',pbVar7);
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
        pbVar7 = (byte *)ccFntTy::CreateSurf(this_00->field_01C4,(int)this_00->field_09DD,0,0x78,
                                             0x23,0x5a,0x14,0);
        if (pbVar7 != (byte *)0x0) {
          uVar15 = 0;
          wsprintfA((LPSTR)&DAT_0080f33a,"%06d",*(undefined4 *)&this_00->field_0xc12);
          switch(this_00->field_0C11) {
          case 0:
            uVar15 = 4;
            break;
          case 1:
          case 3:
            uVar15 = 7;
            break;
          case 2:
            uVar15 = 6;
            break;
          case 4:
            uVar15 = 5;
          }
          ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,uVar15);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x78,0x69,'\x01',pbVar7);
          ccFntTy::EraseSufr(this_00->field_01C4);
        }
        break;
      case CASE_FD:
        bVar2 = this_00->field_0C11;
        if ((bVar2 != 0) && (bVar2 < 0x16)) {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CE,
                                        bVar2 - 1);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x29,0x51,'\x01',pbVar7);
        }
        pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02CA,10);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x27,0x4f,'\x06',pbVar7);
        pbVar7 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_09DD,0,0x5d,0xb
                                             ,0x73,0x19,0);
        if (pbVar7 != (byte *)0x0) {
          iVar20 = -1;
          iVar19 = -1;
          uVar6 = 5;
          iVar13 = -1;
          iVar5 = -2;
          pHVar17 = g_module_00807618;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          UVar9 = thunk_FUN_00525290(CONCAT31((int3)((uint)pbVar7 >> 8),this_00->field_0C11));
          puVar11 = (uint *)LoadResourceString(UVar9,pHVar17);
          ccFntTy::WrTxt(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar19,iVar20);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x5d,0x51,'\x01',pbVar7);
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
        pbVar7 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_09DD,0,0x27,
                                             0x26,0x9f,0x1c,0);
        if (pbVar7 != (byte *)0x0) {
          ccFntTy::WrTxt(this_00->field_01B8,(uint *)this_00->field_0C16,-2,-1,3,-1,-1);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x27,0x6c,'\x01',pbVar7);
          ccFntTy::EraseSufr(this_00->field_01B8);
        }
      }
    }
    goto switchD_0050a52e_caseD_df;
  }
  if (this_00->field_0BFB == '\x02') {
    if (*(int *)&this_00->field_0xc12 != 0) {
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x28,0x50,'\x01',
             (byte *)this_00->field_0A11);
      uVar6 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A);
      pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02C2,uVar6)
      ;
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x2a,0x52,'\x01',pbVar7);
      pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
      pbVar7 = (byte *)(((uint)(byte)this_00->field_0C24 * 0x21) / 100);
      local_14 = (byte *)0x0;
      if (pbVar7 != (byte *)0x0) {
        iVar5 = 0x35;
        local_14 = pbVar7;
        do {
          pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
          iVar5 = iVar5 + 4;
          pbVar7 = pbVar7 + -1;
        } while (pbVar7 != (byte *)0x0);
      }
      if (local_14 < (byte *)0x21) {
        iVar5 = (int)local_14 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x5c,0x6c,0x7a,0xb);
      pHVar17 = g_module_00807618;
      UVar9 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A,0);
      pcVar10 = LoadResourceString(UVar9,pHVar17);
      uVar6 = 0xffffffff;
      do {
        pcVar16 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar16 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar16;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar16 + -uVar6;
      pcVar16 = &this_00->field_0x1e1;
      for (uVar14 = uVar6 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar16 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar16 = pcVar16 + 1;
      }
      for (puVar11 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e1,'\n');
          puVar11 != (uint *)0x0; puVar11 = Library::MSVCRT::FUN_0072e560(puVar11,'\n')) {
        *(undefined1 *)puVar11 = 0x20;
      }
LAB_0050af64:
      ccFntTy::WrTxt(this_00->field_01B8,(uint *)&this_00->field_0x1e1,-2,-1,5,-1,-1);
      PaintCostsXYSI(this_00,this_00->field_0194,this_00->field_0C1C,this_00->field_0C20,7,4);
    }
    goto switchD_0050a9c9_caseD_5f;
  }
  CVar3 = this_00->field_0BF5;
  switch(CVar3) {
  case CASE_53:
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
    switch(this_00->field_0C3C) {
    case 0:
      UVar9 = 0x36bb;
      goto cf_common_exit_0050B38B;
    case 1:
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x27,0x51,'\x01',
             (byte *)this_00->field_0A0D);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x15,0x6c,0xc3,0xb);
      iVar20 = -1;
      iVar19 = -1;
      uVar6 = 5;
      iVar13 = -1;
      iVar5 = -2;
      puVar11 = (uint *)LoadResourceString(0x36bd,g_module_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar19,iVar20);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      PaintDamageXY(this_00,this_00->field_0194,0x5c,0x50,
                    CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)&this_00->field_0C3D),
                    0x2714);
      pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
      pbVar7 = (byte *)((uint)(this_00->field_0C3D * 0x21) / 100);
      local_8 = (byte *)0x0;
      if (pbVar7 != (byte *)0x0) {
        iVar5 = 0x35;
        local_8 = pbVar7;
        do {
          pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
          iVar5 = iVar5 + 4;
          pbVar7 = pbVar7 + -1;
        } while (pbVar7 != (byte *)0x0);
      }
      if (local_8 < (byte *)0x21) {
        iVar5 = (int)local_8 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      break;
    case 2:
      iVar20 = -1;
      iVar19 = -1;
      uVar6 = 5;
      iVar13 = -1;
      iVar5 = -2;
      puVar11 = (uint *)LoadResourceString(0x36bc,g_module_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar19,iVar20);
      puVar11 = (uint *)&this_00->field_0x1e1;
      wsprintfA((LPSTR)puVar11,"%4d",this_00->field_0C3D);
      ccFntTy::SetSurf(this_00->field_01BC,this_00->field_0194,0,0x28,0x79,0x9b,0xf);
      this_01 = this_00->field_01BC;
      uVar15 = 1;
      goto cf_common_exit_0050BD93;
    case 3:
      UVar9 = 0x36be;
cf_common_exit_0050B38B:
      iVar20 = -1;
      iVar19 = -1;
      uVar6 = 5;
      iVar13 = -1;
      iVar5 = -2;
      puVar11 = (uint *)LoadResourceString(UVar9,g_module_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar19,iVar20);
      break;
    case 4:
      if (this_00->field_0C31 != '\0') {
        PaintNameResSI(this_00);
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
      pcVar10 = LoadResourceString(0x273c,g_module_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,"%d %s",(uint)(ushort)this_00->field_0C2F,pcVar10);
      ccFntTy::WrTxt(this_00->field_01B8,&DAT_0080f33a,-2,-1,5,-1,-1);
    }
    else {
      PaintNameResSI(this_00);
      PaintPerResSI(this_00);
    }
    break;
  case CASE_5B:
    PaintArsenal(this_00);
    break;
  case CASE_5C:
  case CASE_6E:
    if (*(int *)&this_00->field_0xc12 != 0) {
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x28,0x50,'\x01',
             (byte *)this_00->field_0A11);
      uVar6 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A);
      pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BA,uVar6)
      ;
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x2a,0x52,'\x01',pbVar7);
      pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
      pbVar7 = (byte *)(((uint)(byte)this_00->field_0C24 * 0x21) / 100);
      local_14 = (byte *)0x0;
      if (pbVar7 != (byte *)0x0) {
        iVar5 = 0x35;
        local_14 = pbVar7;
        do {
          pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
          iVar5 = iVar5 + 4;
          pbVar7 = pbVar7 + -1;
        } while (pbVar7 != (byte *)0x0);
      }
      if (local_14 < (byte *)0x21) {
        iVar5 = (int)local_14 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x5c,0x6c,0x7a,0xb);
      pHVar17 = g_module_00807618;
      UVar9 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                                 this_00->field_0C1A,0);
      pcVar10 = LoadResourceString(UVar9,pHVar17);
      uVar6 = 0xffffffff;
      do {
        pcVar16 = pcVar10;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar16 = pcVar10 + 1;
        cVar1 = *pcVar10;
        pcVar10 = pcVar16;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      pcVar10 = pcVar16 + -uVar6;
      pcVar16 = &this_00->field_0x1e1;
      for (uVar14 = uVar6 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar16 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar16 = pcVar16 + 1;
      }
      for (puVar11 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e1,'\n');
          puVar11 != (uint *)0x0; puVar11 = Library::MSVCRT::FUN_0072e560(puVar11,'\n')) {
        *(undefined1 *)puVar11 = 0x20;
      }
      goto LAB_0050af64;
    }
    if (CVar3 == CASE_5C) {
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
      goto LAB_0050b386;
    }
    if (CVar3 == CASE_6E) {
      wsprintfA(&this_00->field_0x1e1,"%d",(uint)(ushort)this_00->field_0C2F);
      ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x1c,0x58,0xb7,0xf);
      ccFntTy::WrStr(this_00->field_01C4,(uint *)&this_00->field_0x1e1,-1,-1,5);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x16,0x69,0xc3,0xe);
      UVar9 = 0x273b;
      goto cf_common_exit_0050B38B;
    }
    break;
  case CASE_5D:
    PaintBioSonar(this_00);
    break;
  case CASE_5E:
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x2c,0x52,'\x01',
           (byte *)this_00->field_0A09);
    pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02D2,0);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x2e,0x54,'\x01',pbVar7);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x73,0x50,0x5f,0xb);
    iVar20 = -1;
    iVar19 = -1;
    uVar6 = 2;
    iVar13 = -1;
    iVar5 = -2;
    puVar11 = (uint *)LoadResourceString(0x271d,g_module_00807618);
    ccFntTy::WrTxt(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar19,iVar20);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x73,0x5d,0x5f,0x17);
    iVar20 = -1;
    iVar19 = -1;
    uVar6 = 5;
    iVar13 = -1;
    iVar5 = -2;
    puVar11 = (uint *)LoadResourceString(0x2721,g_module_00807618);
    ccFntTy::WrTxt(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar19,iVar20);
    puVar11 = (uint *)&this_00->field_0x1e1;
    wsprintfA((LPSTR)puVar11,"%6d",(uint)(ushort)this_00->field_0C34);
    ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x91,0x73,0x26,0xf);
    uVar15 = 4;
    this_01 = this_00->field_01C4;
    goto cf_common_exit_0050BD93;
  case CASE_61:
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x25,0x50,0xa5,0xc);
    uVar15 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)LoadResourceString(0x2738,g_module_00807618);
    ccFntTy::WrStr(this_00->field_01B8,puVar11,iVar5,iVar13,uVar15);
    pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x33,0x5b,'\x01',pbVar7);
    pbVar7 = (byte *)(((uint)(byte)this_00->field_0C2A * 0x21) / 100);
    pbVar8 = (byte *)0x0;
    if (pbVar7 != (byte *)0x0) {
      iVar5 = 0x35;
      local_14 = pbVar7;
      do {
        pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x5d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        local_14 = local_14 + -1;
        pbVar8 = pbVar7;
      } while (local_14 != (byte *)0x0);
    }
    if (pbVar8 < (byte *)0x21) {
      iVar5 = (int)pbVar8 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x5d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    wsprintfA(&this_00->field_0x1e1,"%d%%",(uint)(byte)this_00->field_0C2A);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x15,0x68,0xc3,0xc);
    ccFntTy::WrStr(this_00->field_01B8,(uint *)&this_00->field_0x1e1,-1,-1,5);
    pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
    pbVar7 = (byte *)(uint)this_00->field_0C29;
    local_8 = (byte *)0x0;
    if (pbVar7 != (byte *)0x0) {
      iVar5 = 0x35;
      local_8 = pbVar7;
      do {
        pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        pbVar7 = pbVar7 + -1;
      } while (pbVar7 != (byte *)0x0);
    }
    if (local_8 < (byte *)0x21) {
      iVar5 = (int)local_8 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case CASE_62:
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x15,0x66,0x66,0xb);
    uVar15 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)LoadResourceString(0x2725,g_module_00807618);
    ccFntTy::WrStr(this_00->field_01B8,puVar11,iVar5,iVar13,uVar15);
    resourceString = &this_00->field_0x1e1;
    wsprintfA(resourceString,"%d",*(undefined4 *)&this_00->field_0xc12);
    ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x7f,0x66,0x24,0xb);
    ccFntTy::WrStr(this_00->field_01C4,(uint *)resourceString,-1,-1,5);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x8e,0x4f,0x17,0xb);
    uVar15 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)LoadResourceString(0x2740,g_module_00807618);
    ccFntTy::WrStr(this_00->field_01B8,puVar11,iVar5,iVar13,uVar15);
    wsprintfA(resourceString,"%d",this_00->field_0C16);
    ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0xa5,0x4f,0x24,0xb);
    ccFntTy::WrStr(this_00->field_01C4,(uint *)resourceString,-1,-1,4);
    pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
    uVar6 = this_00->field_0C16;
    if (uVar6 < *(uint *)&this_00->field_0xc12) {
      pbVar7 = (byte *)0x21;
    }
    else if (uVar6 == 0) {
      pbVar7 = (byte *)0x0;
    }
    else {
      pbVar7 = (byte *)((*(uint *)&this_00->field_0xc12 * 0x21) / uVar6);
    }
    pbVar8 = (byte *)0x0;
    if (pbVar7 != (byte *)0x0) {
      iVar5 = 0x35;
      local_8 = pbVar7;
      do {
        pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        pbVar7 = pbVar7 + -1;
        pbVar8 = local_8;
      } while (pbVar7 != (byte *)0x0);
    }
    if (pbVar8 < (byte *)0x21) {
      iVar5 = (int)pbVar8 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case CASE_63:
    if (*(int *)&this_00->field_0xc12 == 0) {
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x24,0x4c,0xa4,0x2b);
LAB_0050b386:
      UVar9 = 0x2713;
      goto cf_common_exit_0050B38B;
    }
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x28,0x50,'\x01',
           (byte *)this_00->field_0A11);
    uVar6 = thunk_FUN_00526ba0(*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0C1A);
    pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02BA,uVar6);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x2a,0x52,'\x01',pbVar7);
    pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
    pbVar7 = (byte *)(((uint)(byte)this_00->field_0C24 * 0x21) / 100);
    local_14 = (byte *)0x0;
    if (pbVar7 != (byte *)0x0) {
      iVar5 = 0x35;
      local_14 = pbVar7;
      do {
        pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        pbVar7 = pbVar7 + -1;
      } while (pbVar7 != (byte *)0x0);
    }
    if (local_14 < (byte *)0x21) {
      iVar5 = (int)local_14 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x5c,0x69,0x7a,0xb);
    pHVar17 = g_module_00807618;
    UVar9 = thunk_FUN_00523410(*(Global_sub_00523410_param_1Enum *)&this_00->field_0xc12,
                               this_00->field_0C1A,0);
    pcVar10 = LoadResourceString(UVar9,pHVar17);
    uVar6 = 0xffffffff;
    do {
      pcVar16 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar16 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar16;
    } while (cVar1 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar16 + -uVar6;
    pcVar16 = &this_00->field_0x1e1;
    for (uVar14 = uVar6 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined4 *)pcVar16 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar16 = pcVar16 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar16 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar16 = pcVar16 + 1;
    }
    for (puVar11 = Library::MSVCRT::FUN_0072e560((uint *)&this_00->field_0x1e1,'\n');
        puVar11 != (uint *)0x0; puVar11 = Library::MSVCRT::FUN_0072e560(puVar11,'\n')) {
      *(undefined1 *)puVar11 = 0x20;
    }
    ccFntTy::WrTxt(this_00->field_01B8,(uint *)&this_00->field_0x1e1,-2,-1,5,-1,-1);
    pbVar7 = (byte *)ccFntTy::CreateSurf(this_00->field_01C4,(int)this_00->field_09DD,0,100,0x13,
                                         0x18,0xc,0);
    if (pbVar7 != (byte *)0x0) {
      wsprintfA((LPSTR)&DAT_0080f33a,"%4d",(uint)(ushort)this_00->field_0C1C);
      ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,7);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,100,0x59,'\x01',pbVar7);
      wsprintfA((LPSTR)&DAT_0080f33a,"%4d",(uint)(ushort)this_00->field_0C20);
      ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,5);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0xaf,0x59,'\x01',pbVar7);
      ccFntTy::EraseSufr(this_00->field_01C4);
    }
    puVar12 = Library::Ourlib::MFRLOAD::mfRLoad
                        (DAT_00806794,CASE_1,"BUT_RCTTYPESI04",0xffffffff,0,1,0,
                         (undefined4 *)0x0);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x82,0x56,'\x01',(byte *)puVar12);
    pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_0B1B,0);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0xa1,0x56,'\x01',pbVar7);
    break;
  case CASE_64:
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x19,0x59,0xbb,0xb);
    uVar15 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)LoadResourceString(0x272d,g_module_00807618);
    ccFntTy::WrStr(this_00->field_01B8,puVar11,iVar5,iVar13,uVar15);
    wsprintfA(&this_00->field_0x1e1,"%4d",*(undefined4 *)&this_00->field_0xc12);
    ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x66,0x65,0x24,0xb);
    ccFntTy::WrStr(this_00->field_01C4,(uint *)&this_00->field_0x1e1,-1,-1,7);
    pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
    if (this_00->field_0C16 == 0) {
      pbVar7 = (byte *)0x0;
    }
    else {
      pbVar7 = (byte *)((uint)(*(int *)&this_00->field_0xc12 * 0x21) / this_00->field_0C16);
    }
    local_8 = (byte *)0x0;
    if (pbVar7 != (byte *)0x0) {
      iVar5 = 0x35;
      local_8 = pbVar7;
      do {
        pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        pbVar7 = pbVar7 + -1;
      } while (pbVar7 != (byte *)0x0);
    }
    if (local_8 < (byte *)0x21) {
      iVar5 = (int)local_8 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case CASE_67:
  case CASE_68:
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x34,0x5d,0x85,0xb);
    uVar15 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)LoadResourceString(0x272b,g_module_00807618);
    ccFntTy::WrStr(this_00->field_01B8,puVar11,iVar5,iVar13,uVar15);
    pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x33,0x50,'\x01',pbVar7);
    uVar6 = 0;
    if (this_00->field_0C11 != 0) {
      iVar5 = 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x52,'\x01',pbVar7);
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar6 < this_00->field_0C11);
    }
    if (uVar6 < 0x21) {
      iVar5 = uVar6 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x52,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x34,0x7d,0x85,0xb);
    uVar15 = 5;
    iVar13 = -1;
    iVar5 = -1;
    puVar11 = (uint *)LoadResourceString(0x272c,g_module_00807618);
    ccFntTy::WrStr(this_00->field_01B8,puVar11,iVar5,iVar13,uVar15);
    pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x33,0x71,'\x01',pbVar7);
    uVar6 = 0;
    if (*(int *)&this_00->field_0xc12 != 0) {
      iVar5 = 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x73,'\x01',pbVar7);
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (uVar6 < *(uint *)&this_00->field_0xc12);
    }
    if (uVar6 < 0x21) {
      iVar5 = uVar6 * 4 + 0x35;
      do {
        pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x73,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    break;
  case CASE_6D:
    local_8 = &this_00->field_0C24;
    local_10 = (Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12;
    local_20 = -0xc24 - (int)this_00;
    iVar5 = 99;
    local_14 = (byte *)0x2c;
    do {
      pbVar7 = local_14;
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,(int)(local_14 + -2),0x55,'\x01',
             (byte *)this_00->field_0A11);
      uVar6 = thunk_FUN_00526ba0(*local_10,local_8[-10]);
      pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02C2,uVar6)
      ;
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,(int)pbVar7,0x57,'\x01',pbVar8);
      pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,4);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5 + -2,0x58,'\x01',pbVar7);
      local_c = 0;
      uVar6 = *local_8 / 10;
      if (uVar6 != 0) {
        iVar13 = 0x7e;
        local_18 = uVar6;
        local_c = uVar6;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,7)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,iVar13,'\x01',pbVar7);
          iVar13 = iVar13 + -4;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      if (local_c < 10) {
        iVar13 = local_c * -4 + 0x7e;
        local_18 = 10 - local_c;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,8)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,iVar13,'\x01',pbVar7);
          iVar13 = iVar13 + -4;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 0x65;
      local_8 = local_8 + 1;
      iVar5 = iVar5 + 0x1a;
    } while (local_8 + local_20 < (byte *)0x2);
    wsprintfA((LPSTR)&DAT_0080f33a,"%d %% %d",(uint)(byte)this_00->field_0C24,
              (uint)(byte)this_00->field_0C25);
    ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x5f,0x4d,0x2f,0xb);
    this_01 = this_00->field_01B8;
    uVar15 = 5;
    puVar11 = &DAT_0080f33a;
cf_common_exit_0050BD93:
    ccFntTy::WrStr(this_01,puVar11,-1,-1,uVar15);
    break;
  case CASE_70:
  case CASE_72:
  case CASE_73:
    pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B2,1);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x33,0x7b,'\x01',pbVar7);
    pbVar7 = (byte *)(uint)this_00->field_0C29;
    local_8 = (byte *)0x0;
    local_14 = pbVar7;
    if (pbVar7 != (byte *)0x0) {
      iVar5 = 0x35;
      local_8 = pbVar7;
      do {
        pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
        pbVar7 = pbVar7 + -1;
      } while (pbVar7 != (byte *)0x0);
    }
    pbVar7 = local_14;
    if (local_8 < (byte *)0x21) {
      iVar5 = (int)local_8 * 4 + 0x35;
      do {
        pbVar8 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar8);
        iVar5 = iVar5 + 4;
      } while (iVar5 < 0xb9);
    }
    pbVar8 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_09E1,0,0x24,6,0xa4,
                                         0x2b,0);
    if (pbVar8 != (byte *)0x0) {
      iVar20 = -1;
      iVar19 = -1;
      uVar6 = 5;
      iVar13 = -1;
      iVar5 = -1;
      puVar11 = (uint *)LoadResourceString(0x36c4 - (pbVar7 < (byte *)0x21),g_module_00807618);
      ccFntTy::WrTxt(this_00->field_01B8,puVar11,iVar5,iVar13,uVar6,iVar19,iVar20);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x24,0x4c,'\x01',pbVar8);
      ccFntTy::EraseSufr(this_00->field_01B8);
    }
  }
switchD_0050a9c9_caseD_5f:
  PaintIDSObj(this_00);
switchD_0050a52e_caseD_df:
  if (-1 < this_00->field_015C) {
    Library::DKW::DDX::FUN_006b3640
              ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
               this_00->field_00A8);
  }
  g_currentExceptionFrame = local_64.previous;
  return;
}

