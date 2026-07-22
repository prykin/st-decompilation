#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::Update4PanelSI

   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254
    */

void __thiscall CPanelTy::Update4PanelSI(CPanelTy *this)

{
  CPanelTy_field_0BF5State *pCVar1;
  CPanelTy_field_0BFAState CVar2;
  code *pcVar3;
  CPanelTy *this_00;
  byte bVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint *resourceString;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  ccFntTy *this_01;
  char cVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  CPanelTy_field_0BF5State *pCVar14;
  char *pcVar15;
  short *psVar16;
  int *piVar17;
  CPanelTy_field_0BF5State *pCVar18;
  short *psVar19;
  bool bVar21;
  int iVar22;
  int iVar23;
  undefined4 local_140 [4];
  undefined4 local_130;
  undefined4 local_120 [4];
  undefined4 local_110;
  undefined4 local_100 [4];
  undefined4 local_f0;
  undefined4 local_e0 [4];
  undefined4 local_d0;
  InternalExceptionFrame local_c0;
  CPanelTy *local_7c;
  CPanelTy_field_0BF5State local_78;
  char local_74;
  CPanelTy_field_0BFAState local_73;
  char local_72;
  char local_71;
  char local_70;
  short local_6f [6];
  char local_63;
  short local_62 [3];
  byte local_5c;
  Global_sub_00526BA0_param_1Enum local_5b;
  uint local_57;
  ushort local_51;
  ushort local_4d;
  byte local_49 [5];
  byte local_44;
  byte local_43;
  short local_3e;
  char local_3c;
  char local_3a;
  char local_31;
  int local_20;
  Global_sub_00526BA0_param_1Enum *local_1c;
  uint local_18;
  uint local_14;
  Global_sub_00526BA0_param_1Enum *local_10;
  uint local_c;
  uint local_8;

  local_c0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c0;
  local_7c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_c0.jumpBuffer,0);
  this_00 = local_7c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_c0.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x8ae,0,iVar5,
                                "%s","CPanelTy::Update4PanelSI");
    if (iVar11 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x8ae);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pCVar1 = &local_7c->field_0BF5;
  pCVar14 = pCVar1;
  pCVar18 = &local_78;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pCVar18 = *pCVar14;
    pCVar14 = pCVar14 + 1;
    pCVar18 = pCVar18 + 1;
  }
  pCVar14 = pCVar1;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pCVar14 = CASE_0;
    pCVar14 = pCVar14 + 1;
  }
  STAllPlayersC::GetPanelInfo(g_allPlayers_007FA174,4,(AnonShape_0043BEB0_1C00EC12 *)pCVar1);
  CVar2 = this_00->field_0BFA;
  if ((local_73 != CVar2) || (local_72 != this_00->field_0BFB)) {
cf_common_exit_0050E007:
    PaintCtrlObjSI(this_00);
    SetControlObjSI(this_00,'\x01');
    sub_00506040(this_00);
    g_currentExceptionFrame = local_c0.previous;
    return;
  }
  if ((this_00->field_0BFB == '\x02') && (CVar2 == CASE_1)) {
    cVar12 = '\0';
    cVar13 = '\0';
    uVar6 = 0;
    do {
      if ((&this_00->field_0BFE)[uVar6] != '\0') {
        cVar13 = cVar13 + '\x01';
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 6);
    uVar6 = 0;
    do {
      if (*(char *)((int)local_6f + uVar6) != '\0') {
        cVar12 = cVar12 + '\x01';
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 6);
    if (cVar13 == cVar12) {
      iVar5 = 3;
      bVar21 = true;
      psVar16 = (short *)&this_00->field_0BFE;
      psVar19 = local_6f;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar21 = *psVar16 == *psVar19;
        psVar16 = psVar16 + 1;
        psVar19 = psVar19 + 1;
      } while (bVar21);
      if (bVar21) {
        if (this_00->field_0BFD != local_70) {
          sub_004F1610(this_00,'\0');
        }
      }
      else {
        this_00->field_0028 = 5;
        FUN_006e6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
        local_c = local_c & 0xffffff00;
        pcVar15 = &this_00->field_0BFE;
        do {
          if (*pcVar15 != '\0') {
            sub_004F17D0(this_00,0,(byte)local_c);
          }
          bVar4 = (char)local_c + 1;
          pcVar15 = pcVar15 + 1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_c = CONCAT31(local_c._1_3_,bVar4);
        } while (bVar4 < 6);
        sub_004F1610(this_00,'\0');
        CursorClassTy::sub_0054A8D0(g_cursorClass_00802A30);
      }
      iVar5 = 3;
      bVar21 = true;
      psVar16 = (short *)&this_00->field_0C04;
      psVar19 = local_6f + 3;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar21 = *psVar16 == *psVar19;
        psVar16 = psVar16 + 1;
        psVar19 = psVar19 + 1;
      } while (bVar21);
      if ((!bVar21) || (this_00->field_0BFC != local_71)) {
        sub_004F4570(this_00,'\0',(int)&this_00->field_0BF5,(int)&local_78);
      }
    }
    else {
      SetControlObjSI(this_00,'\x01');
    }
    if (((this_00->field_0C0A != local_63) || (this_00->field_0BFC != local_71)) &&
       (this_00->field_09C4 != 0)) {
      this_00->field_0028 = 0x20;
      if (this_00->field_0BFC == '\0') {
        uVar6 = 0;
      }
      else {
        uVar6 = (uint)(byte)this_00->field_0C0A;
      }
      *(uint *)&this_00->field_0x2c = uVar6;
      FUN_006e6080(this_00,2,this_00->field_09C4,(undefined4 *)&this_00->field_0x18);
    }
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == local_5b) {
      if (this_00->field_0C24 != local_49[0]) {
        uVar6 = ((uint)(byte)this_00->field_0C24 * 0x21) / 100;
        local_8 = 0;
        if (uVar6 != 0) {
          iVar5 = 0x35;
          local_8 = uVar6;
          do {
            pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          1);
            DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
            iVar5 = iVar5 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (local_8 < 0x21) {
          iVar5 = local_8 * 4 + 0x35;
          do {
            pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          0);
            DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
            iVar5 = iVar5 + 4;
          } while (iVar5 < 0xb9);
        }
        Library::DKW::WGR::FUN_006b55f0
                  ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,0x5c,0x50,
                   (byte *)this_00->field_09E1,0,0x5c,10,0x3c,0x1e);
        PaintCostsXYSI(this_00,this_00->field_0194,this_00->field_0C1C,this_00->field_0C20,7,4);
        if (-1 < this_00->field_015C) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                     this_00->field_00A8);
        }
      }
    }
    else {
      PaintCtrlObjSI(this_00);
      SetControlObjSI(this_00,'\0');
      sub_00506040(this_00);
    }
    if (this_00->field_0C4D == local_20) {
      g_currentExceptionFrame = local_c0.previous;
      return;
    }
    PaintIDSObj(this_00);
    g_currentExceptionFrame = local_c0.previous;
    return;
  }
  if (CVar2 != CASE_1) {
    if (CVar2 != CASE_4) {
      g_currentExceptionFrame = local_c0.previous;
      return;
    }
    if (local_78 == this_00->field_0BF5) {
      switch(this_00->field_0BF5) {
      case CASE_DD:
      case CASE_DE:
      case CASE_E0:
      case CASE_FD:
      case CASE_FE:
        goto switchD_0050c9ae_caseD_dd;
      default:
        g_currentExceptionFrame = local_c0.previous;
        return;
      }
    }
    goto cf_common_exit_0050E007;
  }
  if ((local_78 != this_00->field_0BF5) || (local_74 != this_00->field_0BF9))
  goto cf_common_exit_0050E007;
  cVar12 = '\0';
  cVar13 = '\0';
  uVar6 = 0;
  do {
    if ((&this_00->field_0BFE)[uVar6] != '\0') {
      cVar13 = cVar13 + '\x01';
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 6);
  uVar6 = 0;
  do {
    if (*(char *)((int)local_6f + uVar6) != '\0') {
      cVar12 = cVar12 + '\x01';
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 6);
  if (cVar13 == cVar12) {
    iVar5 = 3;
    bVar21 = true;
    psVar16 = (short *)&this_00->field_0BFE;
    psVar19 = local_6f;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar21 = *psVar16 == *psVar19;
      psVar16 = psVar16 + 1;
      psVar19 = psVar19 + 1;
    } while (bVar21);
    if (bVar21) {
      if (this_00->field_0BFD != local_70) {
        sub_004F1610(this_00,'\0');
      }
    }
    else {
      this_00->field_0028 = 5;
      FUN_006e6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
      local_c = local_c & 0xffffff00;
      pcVar15 = &this_00->field_0BFE;
      do {
        if (*pcVar15 != '\0') {
          sub_004F17D0(this_00,0,(byte)local_c);
        }
        bVar4 = (char)local_c + 1;
        pcVar15 = pcVar15 + 1;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = CONCAT31(local_c._1_3_,bVar4);
      } while (bVar4 < 6);
      sub_004F1610(this_00,'\0');
      CursorClassTy::sub_0054A8D0(g_cursorClass_00802A30);
    }
    iVar5 = 3;
    bVar21 = true;
    psVar16 = (short *)&this_00->field_0C04;
    psVar19 = local_6f + 3;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar21 = *psVar16 == *psVar19;
      psVar16 = psVar16 + 1;
      psVar19 = psVar19 + 1;
    } while (bVar21);
    if ((!bVar21) || (this_00->field_0BFC != local_71)) {
      sub_004F4570(this_00,'\0',(int)&this_00->field_0BF5,(int)&local_78);
    }
  }
  else {
    SetControlObjSI(this_00,'\x01');
  }
  if (((this_00->field_0C0A != local_63) || (this_00->field_0BFC != local_71)) &&
     (this_00->field_09C4 != 0)) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)(byte)this_00->field_0C0A;
    }
    *(uint *)&this_00->field_0x2c = uVar6;
    FUN_006e6080(this_00,2,this_00->field_09C4,(undefined4 *)&this_00->field_0x18);
  }
  iVar5 = 3;
  bVar21 = true;
  psVar16 = (short *)&this_00->field_0C0B;
  psVar19 = local_62;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar21 = *psVar16 == *psVar19;
    psVar16 = psVar16 + 1;
    psVar19 = psVar19 + 1;
  } while (bVar21);
  if ((!bVar21) || (this_00->field_0BFC != local_71)) {
    uVar6 = 0;
    piVar17 = &this_00->field_0B1F;
    do {
      if (*piVar17 != 0) {
        this_00->field_0028 = 0x20;
        if (this_00->field_0BFC == '\0') {
          uVar8 = 0;
        }
        else {
          uVar8 = (uint)(byte)(&this_00->field_0C0B)[uVar6];
        }
        *(uint *)&this_00->field_0x2c = uVar8;
        FUN_006e6080(this_00,2,*piVar17,(undefined4 *)&this_00->field_0x18);
      }
      uVar6 = uVar6 + 1;
      piVar17 = piVar17 + 1;
    } while (uVar6 < 6);
  }
  switch(this_00->field_0BF5) {
  case CASE_53:
    cVar12 = this_00->field_0C3C;
    if (local_31 == cVar12) {
      if (cVar12 == '\x01') {
        Library::DKW::WGR::FUN_006b55f0
                  ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,0x5c,0x50,
                   (byte *)this_00->field_09E1,0,0x5c,10,0x32,0x19);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        PaintDamageXY(this_00,this_00->field_0194,0x5c,0x50,
                      CONCAT31((int3)((uint)extraout_EDX >> 8),*(undefined1 *)&this_00->field_0C3D),
                      0x2714);
        uVar6 = (uint)(this_00->field_0C3D * 0x21) / 100;
        local_8 = 0;
        if (uVar6 != 0) {
          iVar5 = 0x35;
          local_8 = uVar6;
          do {
            pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          1);
            DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
            iVar5 = iVar5 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (local_8 < 0x21) {
          iVar5 = local_8 * 4 + 0x35;
          do {
            pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          0);
            DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
            iVar5 = iVar5 + 4;
          } while (iVar5 < 0xb9);
        }
      }
      else if (cVar12 == '\x02') {
        Library::DKW::WGR::FUN_006b55f0
                  ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,0x28,0x79,
                   (byte *)this_00->field_09E1,0,0x28,0x33,0x9b,0xf);
        wsprintfA((LPSTR)&DAT_0080f33a,"%4d",this_00->field_0C3D);
        ccFntTy::SetSurf(this_00->field_01BC,this_00->field_0194,0,0x28,0x79,0x9b,0xf);
        ccFntTy::WrStr(this_00->field_01BC,&DAT_0080f33a,-1,-1,1);
      }
      else if (cVar12 == '\x04') {
        if (this_00->field_0C31 == local_3c) {
          if (this_00->field_0C33 != local_3a) {
            Library::DKW::WGR::FUN_006b55f0
                      ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,0x5c,0x50,
                       (byte *)this_00->field_09E1,0,0x5c,10,0x32,0x19);
            PaintPerResSI(this_00);
          }
        }
        else {
          PaintCtrlObjSI(this_00);
          SetControlObjSI(this_00,'\x01');
          sub_00506040(this_00);
        }
      }
      if (-1 < this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
      break;
    }
    goto LAB_0050ce3f;
  case CASE_54:
  case CASE_55:
  case CASE_56:
  case CASE_57:
  case CASE_58:
  case CASE_59:
  case CASE_5A:
    if (this_00->field_0C31 == local_3c) {
      if (this_00->field_0C31 == '\0') {
        if (this_00->field_0C2F != local_3e) {
          PaintCtrlObj(this_00,1);
          iVar5 = this_00->field_0302;
          if (iVar5 != 0) {
            memset(local_120, 0, 0x20); /* compiler bulk-zero initialization */
            iVar11 = 0;
            local_110 = 5;
            FUN_006e6080(this_00,2,iVar5,local_120);
          }
        }
      }
      else if (this_00->field_0C33 != local_3a) {
        Library::DKW::WGR::FUN_006b55f0
                  ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,0x5c,0x50,
                   (byte *)this_00->field_09E1,0,0x5c,10,0x32,0x19);
        PaintPerResSI(this_00);
        if (-1 < this_00->field_015C) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                     this_00->field_00A8);
        }
      }
      break;
    }
LAB_0050ce3f:
    PaintCtrlObjSI(this_00);
    SetControlObjSI(this_00,'\x01');
    sub_00506040(this_00);
    break;
  case CASE_5B:
    PaintArsenal(this_00);
    uVar6 = 0;
    do {
      if ((&this_00->field_0A15)[uVar6] != 0) {
        if (uVar6 == 3) {
          if (this_00->field_09D4 == '\x01') {
            this_00->field_0AA2 = 0;
            this_00->field_0028 = 0x20;
            *(undefined4 *)&this_00->field_0x2c = 0;
            uVar9 = this_00->field_0A21;
          }
          else {
            this_00->field_0AA2 = 2;
            uVar9 = thunk_FUN_00525ef0(this_00->field_09D4 + CASE_2,3);
            this_00->field_0AA3 = uVar9;
            if (this_00->field_0BFC == local_71) {
              this_00->field_0028 = 5;
              uVar9 = this_00->field_0A21;
            }
            else {
              this_00->field_0028 = 0x20;
              *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
              uVar9 = this_00->field_0A21;
            }
          }
        }
        else {
          uVar9 = thunk_FUN_00525ef0(this_00->field_09D4 + CASE_2,(char)uVar6);
          *(undefined4 *)(&this_00->field_0xa2e + uVar6 * 0x27) = uVar9;
          if (this_00->field_0BFC == local_71) {
            this_00->field_0028 = 5;
            uVar9 = (&this_00->field_0A15)[uVar6];
          }
          else {
            this_00->field_0028 = 0x20;
            *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
            uVar9 = (&this_00->field_0A15)[uVar6];
          }
        }
        FUN_006e6080(this_00,2,uVar9,(undefined4 *)&this_00->field_0x18);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 4);
    if (-1 < this_00->field_015C) {
      Library::DKW::DDX::FUN_006b3640
                ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                 this_00->field_00A8);
    }
    break;
  case CASE_5C:
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == local_5b) {
      if (this_00->field_0C24 != local_49[0]) {
        uVar6 = ((uint)(byte)this_00->field_0C24 * 0x21) / 100;
        local_8 = 0;
        if (uVar6 != 0) {
          iVar5 = 0x35;
          local_8 = uVar6;
          do {
            pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          1);
            DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
            iVar5 = iVar5 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (local_8 < 0x21) {
          iVar5 = local_8 * 4 + 0x35;
          do {
            pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          0);
            DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
            iVar5 = iVar5 + 4;
          } while (iVar5 < 0xb9);
        }
        Library::DKW::WGR::FUN_006b55f0
                  ((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,0x5c,0x50,
                   (byte *)this_00->field_09E1,0,0x5c,10,0x3c,0x1e);
        PaintCostsXYSI(this_00,this_00->field_0194,this_00->field_0C1C,this_00->field_0C20,7,4);
        if (-1 < this_00->field_015C) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                     this_00->field_00A8);
        }
      }
    }
    else {
      PaintCtrlObjSI(this_00);
      SetControlObjSI(this_00,'\0');
      sub_00506040(this_00);
    }
    break;
  case CASE_5D:
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0,0x46,'\x01',
           (byte *)this_00->field_09E1);
    PaintBioSonar(this_00);
    break;
  case CASE_5E:
    wsprintfA((LPSTR)&DAT_0080f33a,"%6d",(uint)(ushort)this_00->field_0C34);
    ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x91,0x73,0x26,0xf);
    ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,4);
    if (-1 < this_00->field_015C) {
      Library::DKW::DDX::FUN_006b3640
                ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                 this_00->field_00A8);
    }
    break;
  case CASE_61:
    if (this_00->field_0C2A != local_43) {
      uVar6 = ((uint)(byte)this_00->field_0C2A * 0x21) / 100;
      local_8 = 0;
      if (uVar6 != 0) {
        iVar5 = 0x35;
        local_8 = uVar6;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x5d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (local_8 < 0x21) {
        iVar5 = local_8 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x5d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      pbVar7 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_09E1,0,0x15,0x22,
                                           0xc3,0xc,0);
      if (pbVar7 != (byte *)0x0) {
        wsprintfA((LPSTR)&DAT_0080f33a,"%d%%",(uint)(byte)this_00->field_0C2A);
        ccFntTy::WrStr(this_00->field_01B8,&DAT_0080f33a,-1,-1,5);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x15,0x68,'\x01',pbVar7);
        ccFntTy::EraseSufr(this_00->field_01B8);
      }
      if (-1 < this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    if (this_00->field_0C29 != local_44) {
      uVar6 = (uint)this_00->field_0C29;
      local_8 = 0;
      if (uVar6 != 0) {
        iVar5 = 0x35;
        local_8 = uVar6;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (local_8 < 0x21) {
        iVar5 = local_8 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      if (-1 < this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    break;
  case CASE_62:
    if ((*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != local_5b) ||
       (this_00->field_0C16 != local_57)) {
      pbVar7 = (byte *)ccFntTy::CreateSurf(this_00->field_01C4,(int)this_00->field_09F5,0,0x7f,0x20,
                                           0x24,0xb,0);
      if (pbVar7 != (byte *)0x0) {
        wsprintfA((LPSTR)&DAT_0080f33a,"%d",*(undefined4 *)&this_00->field_0xc12);
        ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,5);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x7f,0x66,'\x01',pbVar7);
        ccFntTy::EraseSufr(this_00->field_01C4);
      }
      pbVar7 = (byte *)ccFntTy::CreateSurf(this_00->field_01C4,(int)this_00->field_09F5,0,0xa5,9,
                                           0x24,0xb,0);
      if (pbVar7 != (byte *)0x0) {
        wsprintfA((LPSTR)&DAT_0080f33a,"%d",this_00->field_0C16);
        ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,4);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0xa5,0x4f,'\x01',pbVar7);
        ccFntTy::EraseSufr(this_00->field_01C4);
      }
      uVar6 = this_00->field_0C16;
      if (uVar6 < *(uint *)&this_00->field_0xc12) {
        uVar6 = 0x21;
      }
      else if (uVar6 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*(uint *)&this_00->field_0xc12 * 0x21) / uVar6;
      }
      local_8 = 0;
      if (uVar6 != 0) {
        iVar5 = 0x35;
        local_8 = uVar6;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (local_8 < 0x21) {
        iVar5 = local_8 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      if (-1 < this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    break;
  case CASE_63:
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != local_5b) {
      PaintCtrlObjSI(this_00);
      iVar5 = this_00->field_0302;
      if (iVar5 != 0) {
        memset(local_e0, 0, 0x20); /* compiler bulk-zero initialization */
        local_d0 = 5;
        FUN_006e6080(this_00,2,iVar5,local_e0);
      }
      break;
    }
    if (this_00->field_0C24 != local_49[0]) {
      uVar6 = ((uint)(byte)this_00->field_0C24 * 0x21) / 100;
      local_8 = 0;
      if (uVar6 != 0) {
        iVar5 = 0x35;
        local_8 = uVar6;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (local_8 < 0x21) {
        iVar5 = local_8 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      if (-1 < this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    if (((this_00->field_0C1C == local_51) && (this_00->field_0C20 == local_4d)) ||
       (pbVar7 = (byte *)ccFntTy::CreateSurf(this_00->field_01C4,(int)this_00->field_09DD,0,100,0x13
                                             ,0x18,0xc,0), pbVar7 == (byte *)0x0)) break;
    if (this_00->field_0C1C != local_51) {
      wsprintfA((LPSTR)&DAT_0080f33a,"%4d",(uint)(ushort)this_00->field_0C1C);
      ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,7);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,100,0x59,'\x01',pbVar7);
      if (-1 < this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    if (this_00->field_0C20 != local_4d) {
      wsprintfA((LPSTR)&DAT_0080f33a,"%4d",(uint)(ushort)this_00->field_0C20);
      ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,5);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0xaf,0x59,'\x01',pbVar7);
      if (-1 < this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    this_01 = this_00->field_01C4;
    goto LAB_0050dfdc;
  case CASE_64:
    if ((*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != local_5b) ||
       (this_00->field_0C16 != local_57)) {
      wsprintfA((LPSTR)&DAT_0080f33a,"%4d",
                *(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12);
      ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x66,0x65,0x24,0xb);
      ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,7);
      if (this_00->field_0C16 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (uint)(*(int *)&this_00->field_0xc12 * 0x21) / this_00->field_0C16;
      }
      local_8 = 0;
      if (uVar6 != 0) {
        iVar5 = 0x35;
        local_8 = uVar6;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (local_8 < 0x21) {
        iVar5 = local_8 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      if (-1 < this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    break;
  case CASE_67:
  case CASE_68:
    if (this_00->field_0C11 != local_5c) {
      uVar6 = 0;
      if (this_00->field_0C11 != 0) {
        iVar5 = 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x52,'\x01',pbVar7);
          uVar6 = uVar6 + 1;
          iVar5 = iVar5 + 4;
        } while (uVar6 < this_00->field_0C11);
      }
      if (uVar6 < 0x21) {
        iVar5 = uVar6 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x52,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      if (-1 < this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != local_5b) {
      uVar6 = 0;
      if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 != 0) {
        iVar5 = 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x73,'\x01',pbVar7);
          uVar6 = uVar6 + 1;
          iVar5 = iVar5 + 4;
        } while (uVar6 < *(uint *)&this_00->field_0xc12);
      }
      if (uVar6 < 0x21) {
        iVar5 = uVar6 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x73,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      if (-1 < this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    break;
  case CASE_6D:
    local_8 = 0;
    local_c = 99;
    local_14 = 0x2c;
    local_1c = &local_5b;
    local_10 = (Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12;
    do {
      uVar8 = local_8;
      uVar6 = local_14;
      if (*local_1c != *local_10) {
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,local_14 - 2,0x55,'\x01',
               (byte *)this_00->field_0A11);
        uVar10 = thunk_FUN_00526ba0(*local_10,(&this_00->field_0C1A)[uVar8]);
        pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02C2,
                                      uVar10);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,uVar6,0x57,'\x01',pbVar7);
        if (-1 < this_00->field_015C) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                     this_00->field_00A8);
        }
      }
      if (local_49[uVar8] != (&this_00->field_0C24)[uVar8]) {
        local_18 = 0;
        uVar6 = (byte)(&this_00->field_0C24)[uVar8] / 10;
        if (uVar6 != 0) {
          iVar5 = 0x7e;
          local_18 = uVar6;
          do {
            pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          7);
            DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,local_c,iVar5,'\x01',pbVar7);
            iVar5 = iVar5 + -4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (local_18 < 10) {
          iVar5 = local_18 * -4 + 0x7e;
          iVar11 = 10 - local_18;
          do {
            pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          8);
            DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,local_c,iVar5,'\x01',pbVar7);
            iVar5 = iVar5 + -4;
            iVar11 = iVar11 + -1;
          } while (iVar11 != 0);
        }
        if (-1 < this_00->field_015C) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                     this_00->field_00A8);
        }
      }
      local_10 = local_10 + 1;
      local_1c = local_1c + 1;
      local_14 = local_14 + 0x65;
      local_8 = local_8 + 1;
      local_c = local_c + 0x1a;
    } while ((int)local_14 < 0xf6);
    wsprintfA((LPSTR)&DAT_0080f33a,"%d %% %d",(uint)(byte)this_00->field_0C24,
              (uint)(byte)this_00->field_0C25);
    pbVar7 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_09DD,0,0x5f,7,0x2f,
                                         0xb,0);
    if (pbVar7 == (byte *)0x0) break;
    ccFntTy::WrStr(this_00->field_01B8,&DAT_0080f33a,-1,-1,5);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x5f,0x4d,'\x01',pbVar7);
    this_01 = this_00->field_01B8;
LAB_0050dfdc:
    ccFntTy::EraseSufr(this_01);
    break;
  case CASE_6E:
    if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == local_5b) {
      if (*(Global_sub_00526BA0_param_1Enum *)&this_00->field_0xc12 == 0) {
        wsprintfA((LPSTR)&DAT_0080f33a,"%d",(uint)(ushort)this_00->field_0C2F);
        ccFntTy::SetSurf(this_00->field_01C4,this_00->field_0194,0,0x1c,0x58,0xb7,0xf);
        ccFntTy::WrStr(this_00->field_01C4,&DAT_0080f33a,-1,-1,5);
      }
      else if (this_00->field_0C24 != local_49[0]) {
        uVar6 = ((uint)(byte)this_00->field_0C24 * 0x21) / 100;
        local_8 = 0;
        if (uVar6 != 0) {
          iVar5 = 0x35;
          local_8 = uVar6;
          do {
            pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          1);
            DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
            iVar5 = iVar5 + 4;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if (local_8 < 0x21) {
          iVar5 = local_8 * 4 + 0x35;
          do {
            pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,
                                          0);
            DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
            iVar5 = iVar5 + 4;
          } while (iVar5 < 0xb9);
        }
        if (-1 < this_00->field_015C) {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                     this_00->field_00A8);
        }
      }
    }
    else {
      PaintCtrlObjSI(this_00);
      iVar5 = this_00->field_0302;
      if (iVar5 != 0) {
        memset(local_100, 0, 0x20); /* compiler bulk-zero initialization */
        local_f0 = 5;
        FUN_006e6080(this_00,2,iVar5,local_100);
      }
    }
    break;
  case CASE_70:
  case CASE_72:
  case CASE_73:
    if (this_00->field_0C29 != local_44) {
      uVar6 = (uint)this_00->field_0C29;
      local_8 = 0;
      local_14 = uVar6;
      if (uVar6 != 0) {
        iVar5 = 0x35;
        local_8 = uVar6;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,1)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      if (local_8 < 0x21) {
        iVar5 = local_8 * 4 + 0x35;
        do {
          pbVar7 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_02B6,0)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,iVar5,0x7d,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
        } while (iVar5 < 0xb9);
      }
      pbVar7 = (byte *)ccFntTy::CreateSurf(this_00->field_01B8,(int)this_00->field_09E1,0,0x24,6,
                                           0xa4,0x2b,0);
      if (pbVar7 != (byte *)0x0) {
        iVar23 = -1;
        iVar22 = -1;
        uVar6 = 5;
        iVar11 = -1;
        iVar5 = -1;
        resourceString = (uint *)LoadResourceString(0x36c4 - (local_14 < 0x21),g_module_00807618);
        ccFntTy::WrTxt(this_00->field_01B8,resourceString,iVar5,iVar11,uVar6,iVar22,iVar23);
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0194,0x24,0x4c,'\x01',pbVar7);
        ccFntTy::EraseSufr(this_00->field_01B8);
      }
      if (-1 < this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  ((int *)PTR_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
  }
  if (this_00->field_0C4D == local_20) {
    g_currentExceptionFrame = local_c0.previous;
    return;
  }
  PaintIDSObj(this_00);
  g_currentExceptionFrame = local_c0.previous;
  return;
switchD_0050c9ae_caseD_dd:
  PaintCtrlObjSI(this_00);
  iVar5 = this_00->field_0302;
  if (iVar5 == 0) {
    g_currentExceptionFrame = local_c0.previous;
    return;
  }
  memset(local_140, 0, 0x20); /* compiler bulk-zero initialization */
  local_130 = 5;
  FUN_006e6080(this_00,2,iVar5,local_140);
  g_currentExceptionFrame = local_c0.previous;
  return;
}

