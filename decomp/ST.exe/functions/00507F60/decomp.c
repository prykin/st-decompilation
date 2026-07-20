
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::Update4PanelWB
   
   [STSwitchEnumApplier] Switch target field_0BF5 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0BF5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_67=103;CASE_68=104;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115;CASE_DD=221;CASE_DE=222;CASE_E0=224;CASE_FD=253;CASE_FE=254
    */

void __thiscall CPanelTy::Update4PanelWB(CPanelTy *this)

{
  CPanelTy_field_0BF5State *pCVar1;
  CPanelTy_field_0BFAState CVar2;
  ushort *puVar3;
  code *pcVar4;
  CPanelTy *this_00;
  byte bVar5;
  Global_sub_00525EF0_param_1Enum GVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  undefined4 uVar10;
  char cVar11;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char cVar12;
  int iVar13;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_ESI;
  CPanelTy_field_0BF5State *pCVar14;
  char *pcVar15;
  short *psVar16;
  int *piVar17;
  void *unaff_EDI;
  CPanelTy_field_0BF5State *pCVar18;
  undefined4 *puVar19;
  short *psVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  undefined4 local_104 [4];
  undefined4 local_f4;
  undefined4 local_e4 [4];
  undefined4 local_d4;
  InternalExceptionFrame local_c4;
  CPanelTy *local_80;
  CPanelTy_field_0BF5State local_7c;
  char local_78;
  CPanelTy_field_0BFAState local_77;
  char local_76;
  char local_75;
  char local_74;
  short local_73 [6];
  char local_67;
  undefined1 local_60 [5];
  int local_5b;
  byte local_4d [2];
  char local_4b;
  char local_48;
  short local_42;
  char local_40;
  char local_3e;
  ushort local_3d;
  char local_37;
  char local_36;
  char local_35;
  int local_24;
  uint local_20;
  undefined4 local_1c;
  ushort *local_18;
  uint local_14;
  byte *local_10;
  uint local_c;
  byte *local_8;
  
  local_c4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_c4;
  local_80 = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_c4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_80;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x497,0,iVar7,
                                &DAT_007a4ccc,s_CPanelTy__Update4PanelWB_007c2878);
    if (iVar13 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x497);
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pCVar1 = &local_80->field_0BF5;
  pCVar14 = pCVar1;
  pCVar18 = &local_7c;
  for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pCVar18 = *pCVar14;
    pCVar14 = pCVar14 + 1;
    pCVar18 = pCVar18 + 1;
  }
  pCVar14 = pCVar1;
  for (iVar7 = 0x17; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pCVar14 = CASE_0;
    pCVar14 = pCVar14 + 1;
  }
  STAllPlayersC::GetPanelInfo(g_sTAllPlayers_007FA174,4,(AnonShape_0043BEB0_1C00EC12 *)pCVar1);
  CVar2 = this_00->field_0BFA;
  if ((local_77 != CVar2) || (local_76 != this_00->field_0BFB)) {
cf_common_exit_005091B9:
    PaintCtrlObj(this_00,1);
    SetControlObj(this_00,'\x01');
    thunk_FUN_00506040((AnonShape_00506040_A874E362 *)this_00);
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  if ((this_00->field_0BFB == '\x02') && (CVar2 == CASE_1)) {
    cVar11 = '\0';
    cVar12 = '\0';
    iVar7 = 0;
    do {
      if ((&this_00->field_0BFE)[iVar7] != '\0') {
        cVar12 = cVar12 + '\x01';
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 6);
    iVar7 = 0;
    do {
      if (*(char *)((int)local_73 + iVar7) != '\0') {
        cVar11 = cVar11 + '\x01';
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 6);
    if (cVar12 == cVar11) {
      iVar7 = 3;
      bVar21 = true;
      psVar16 = (short *)&this_00->field_0BFE;
      psVar20 = local_73;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar21 = *psVar16 == *psVar20;
        psVar16 = psVar16 + 1;
        psVar20 = psVar20 + 1;
      } while (bVar21);
      if (bVar21) {
        if (this_00->field_0BFD != local_74) {
          thunk_FUN_004f1610(this_00,'\0');
        }
      }
      else {
        this_00->field_0028 = 5;
        FUN_006e6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
        local_8 = (byte *)((uint)local_8 & 0xffffff00);
        pcVar15 = &this_00->field_0BFE;
        do {
          if (*pcVar15 != '\0') {
            thunk_FUN_004f17d0(this_00,0,(byte)local_8);
          }
          bVar5 = (byte)local_8 + 1;
          pcVar15 = pcVar15 + 1;
          local_8 = (byte *)CONCAT31(local_8._1_3_,bVar5);
        } while (bVar5 < 6);
        thunk_FUN_004f1610(this_00,'\0');
        thunk_FUN_0054a8d0(PTR_00802a30);
      }
      iVar7 = 3;
      bVar21 = true;
      psVar16 = (short *)&this_00->field_0C04;
      psVar20 = local_73 + 3;
      do {
        if (iVar7 == 0) break;
        iVar7 = iVar7 + -1;
        bVar21 = *psVar16 == *psVar20;
        psVar16 = psVar16 + 1;
        psVar20 = psVar20 + 1;
      } while (bVar21);
      if ((!bVar21) || (this_00->field_0BFC != local_75)) {
        thunk_FUN_004f4570(this_00,'\0',(int)&this_00->field_0BF5,(int)&local_7c);
      }
    }
    else {
      SetControlObj(this_00,'\x01');
    }
    if (((this_00->field_0C0A != local_67) || (this_00->field_0BFC != local_75)) &&
       (this_00->field_09C4 != 0)) {
      this_00->field_0028 = 0x20;
      if (this_00->field_0BFC == '\0') {
        uVar8 = 0;
      }
      else {
        uVar8 = (uint)(byte)this_00->field_0C0A;
      }
      *(uint *)&this_00->field_0x2c = uVar8;
      FUN_006e6080(this_00,2,this_00->field_09C4,(undefined4 *)&this_00->field_0x18);
    }
    if (*(int *)&this_00->field_0xc12 == local_60._1_4_) {
      iVar7 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09ED + 2)) / 2;
      if (this_00->field_0C24 != local_4d[0]) {
        FUN_006b4170(this_00->field_0194,0,iVar7 + 0x36,0x5d,7,0x21,0);
        bVar5 = this_00->field_0C24;
        local_c = CONCAT31(local_c._1_3_,bVar5);
        cVar11 = (char)(((uint)bVar5 * 0x21) / 100);
        local_10 = (byte *)CONCAT31(local_10._1_3_,cVar11);
        if ((bVar5 != 0) && (cVar11 == '\0')) {
          local_10 = (byte *)CONCAT31(local_10._1_3_,1);
        }
        if (bVar5 < 0x46) {
          iVar13 = (-(uint)(bVar5 < 0x14) & 5) + 5;
        }
        else {
          iVar13 = 0;
        }
        uVar8 = (uint)local_10 & 0xff;
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar7 + 0x37,0x7e - uVar8,
                   (byte *)this_00->field_028A,0,iVar13,*(int *)(this_00->field_028A + 4) - uVar8,5,
                   uVar8);
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar7 + 0x3f,0x5c,(byte *)this_00->field_09ED
                   ,0,0x3f,0xc,0x75,0x11);
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar7 + 0x3f,0x6c,(byte *)this_00->field_09ED
                   ,0,0x3f,0x1c,0x44,0x13);
        PaintDamageXY(this_00,this_00->field_0194,iVar7 + 0x41,0x5d,
                      CONCAT31((int3)((uint)extraout_EDX >> 8),this_00->field_0C24),0x2714);
        PaintCostsXY(this_00,this_00->field_0194,iVar7 + 0x41,0x68,this_00->field_0C1C,
                     this_00->field_0C20,4,2);
        if (-1 < (int)this_00->field_015C) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                     this_00->field_00A8);
        }
      }
    }
    else {
      PaintCtrlObj(this_00,1);
      SetControlObj(this_00,'\0');
      thunk_FUN_00506040((AnonShape_00506040_A874E362 *)this_00);
    }
    if (this_00->field_0C4D == local_24) {
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
    PaintIDSObj(this_00);
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  if (CVar2 != CASE_1) {
    if (CVar2 != CASE_4) {
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
    if (local_7c == this_00->field_0BF5) {
      switch(this_00->field_0BF5) {
      case CASE_DD:
      case CASE_DE:
      case CASE_E0:
      case CASE_FD:
      case CASE_FE:
        goto switchD_00508349_caseD_dd;
      default:
        g_currentExceptionFrame = local_c4.previous;
        return;
      }
    }
    goto cf_common_exit_005091B9;
  }
  if ((local_7c != this_00->field_0BF5) || (local_78 != this_00->field_0BF9))
  goto cf_common_exit_005091B9;
  cVar11 = '\0';
  cVar12 = '\0';
  iVar7 = 0;
  do {
    if ((&this_00->field_0BFE)[iVar7] != '\0') {
      cVar12 = cVar12 + '\x01';
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 6);
  iVar7 = 0;
  do {
    if (*(char *)((int)local_73 + iVar7) != '\0') {
      cVar11 = cVar11 + '\x01';
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 6);
  if (cVar12 == cVar11) {
    iVar7 = 3;
    bVar21 = true;
    psVar16 = (short *)&this_00->field_0BFE;
    psVar20 = local_73;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar21 = *psVar16 == *psVar20;
      psVar16 = psVar16 + 1;
      psVar20 = psVar20 + 1;
    } while (bVar21);
    if (bVar21) {
      if (this_00->field_0BFD != local_74) {
        thunk_FUN_004f1610(this_00,'\0');
      }
    }
    else {
      this_00->field_0028 = 5;
      FUN_006e6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
      local_8 = (byte *)((uint)local_8 & 0xffffff00);
      pcVar15 = &this_00->field_0BFE;
      do {
        if (*pcVar15 != '\0') {
          thunk_FUN_004f17d0(this_00,0,(byte)local_8);
        }
        bVar5 = (byte)local_8 + 1;
        pcVar15 = pcVar15 + 1;
        local_8 = (byte *)CONCAT31(local_8._1_3_,bVar5);
      } while (bVar5 < 6);
      thunk_FUN_004f1610(this_00,'\0');
      thunk_FUN_0054a8d0(PTR_00802a30);
    }
    iVar7 = 3;
    bVar21 = true;
    psVar16 = (short *)&this_00->field_0C04;
    psVar20 = local_73 + 3;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar21 = *psVar16 == *psVar20;
      psVar16 = psVar16 + 1;
      psVar20 = psVar20 + 1;
    } while (bVar21);
    if ((!bVar21) || (this_00->field_0BFC != local_75)) {
      thunk_FUN_004f4570(this_00,'\0',(int)&this_00->field_0BF5,(int)&local_7c);
    }
  }
  else {
    SetControlObj(this_00,'\x01');
  }
  if (((this_00->field_0C0A != local_67) || (this_00->field_0BFC != local_75)) &&
     (this_00->field_09C4 != 0)) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      uVar8 = 0;
    }
    else {
      uVar8 = (uint)(byte)this_00->field_0C0A;
    }
    *(uint *)&this_00->field_0x2c = uVar8;
    FUN_006e6080(this_00,2,this_00->field_09C4,(undefined4 *)&this_00->field_0x18);
  }
  if (((this_00->field_0BF5 == CASE_43) || (this_00->field_0BF5 == CASE_4C)) &&
     ((this_00->field_0C11 != local_60[0] || (this_00->field_0BFC != local_75)))) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      iVar7 = 0;
    }
    else {
      iVar7 = (-(uint)(this_00->field_0C11 != '\0') & 2) + 1;
    }
    *(int *)&this_00->field_0x2c = iVar7;
    FUN_006e6080(this_00,2,this_00->field_030C,(undefined4 *)&this_00->field_0x18);
  }
  switch(this_00->field_0BF5) {
  case CASE_32:
  case CASE_40:
  case CASE_44:
  case CASE_49:
    if ((*(int *)&this_00->field_0xc12 == local_60._1_4_) && (this_00->field_0C26 == local_4b)) {
      iVar7 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09ED + 2)) / 2;
      if (this_00->field_0C24 != local_4d[0]) {
        FUN_006b4170(this_00->field_0194,0,iVar7 + 0x36,0x5d,7,0x21,0);
        bVar5 = this_00->field_0C24;
        cVar11 = (char)(((uint)bVar5 * 0x21) / 100);
        local_c = CONCAT31(local_c._1_3_,cVar11);
        if ((bVar5 != 0) && (cVar11 == '\0')) {
          local_c = CONCAT31(local_c._1_3_,1);
        }
        if (bVar5 < 0x46) {
          iVar13 = (-(uint)(bVar5 < 0x14) & 5) + 5;
        }
        else {
          iVar13 = 0;
        }
        uVar8 = local_c & 0xff;
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar7 + 0x37,0x7e - uVar8,
                   (byte *)this_00->field_028A,0,iVar13,*(int *)(this_00->field_028A + 4) - uVar8,5,
                   uVar8);
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar7 + 0x3f,0x5c,(byte *)this_00->field_09ED
                   ,0,0x3f,0xc,0x75,0x11);
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar7 + 0x3f,0x6c,(byte *)this_00->field_09ED
                   ,0,0x3f,0x1c,0x44,0x13);
        PaintDamageXY(this_00,this_00->field_0194,iVar7 + 0x41,0x5d,
                      CONCAT31((int3)((uint)extraout_EDX_00 >> 8),this_00->field_0C24),0x2714);
        PaintCostsXY(this_00,this_00->field_0194,iVar7 + 0x41,0x68,this_00->field_0C1C,
                     this_00->field_0C20,4,2);
        if (-1 < (int)this_00->field_015C) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                     this_00->field_00A8);
        }
      }
      if ((this_00->field_0BF5 != CASE_44) || (this_00->field_0C34 == local_3d))
      goto cf_common_exit_00509192;
      DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0194,
             (((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0194)->field_0004 -
             *(int *)(this_00->field_0A01 + 2)) / 2,0x37,'\x01',(byte *)this_00->field_0A01);
      uVar8 = (uint)(ushort)this_00->field_0C34;
      uVar10 = FUN_006b0140(0x2725,HINSTANCE_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__1_s__0_d_007c286c,uVar10,uVar8);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x56,0x39,0x6d,0x15);
      ccFntTy::WrTxt(this_00->field_01B8,&DAT_0080f33a,-2,-1,0,-1,-1);
      uVar8 = this_00->field_015C;
      if ((int)uVar8 < 0) goto cf_common_exit_00509192;
      uVar23 = this_00->field_00A8;
      uVar22 = this_00->field_0050;
      goto cf_common_exit_0050918D;
    }
    iVar7 = 0;
    goto LAB_00508b35;
  case CASE_33:
    if ((*(int *)&this_00->field_0xc12 == local_60._1_4_) && (this_00->field_0C16 == local_5b)) {
      iVar7 = 0x3a;
      local_c = 2;
      local_18 = &this_00->field_0C1C;
      local_10 = local_4d;
      local_8 = &this_00->field_0C24;
      iVar13 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09ED + 2)) / 2;
      do {
        if (*local_8 != *local_10) {
          FUN_006b4170(this_00->field_0194,0,iVar13 + 0x36,iVar7,7,0x21,0);
          bVar5 = *local_8;
          local_1c = CONCAT31(local_1c._1_3_,bVar5);
          cVar11 = (char)(((uint)bVar5 * 0x21) / 100);
          local_20 = CONCAT31(local_20._1_3_,cVar11);
          if ((bVar5 != 0) && (cVar11 == '\0')) {
            local_20 = CONCAT31(local_20._1_3_,1);
          }
          if (bVar5 < 0x46) {
            local_14 = (-(uint)(bVar5 < 0x14) & 5) + 5;
          }
          else {
            local_14 = 0;
          }
          uVar8 = local_20 & 0xff;
          Library::DKW::WGR::FUN_006b55f0
                    ((undefined4 *)this_00->field_0194,0,iVar13 + 0x37,(iVar7 - uVar8) + 0x21,
                     (byte *)this_00->field_028A,0,local_14,
                     *(int *)(this_00->field_028A + 4) - uVar8,5,uVar8);
          Library::DKW::WGR::FUN_006b55f0
                    ((undefined4 *)this_00->field_0194,0,iVar13 + 0x3f,iVar7 + -1,
                     (byte *)this_00->field_09ED,0,0x3f,0xc,0x75,0x11);
          Library::DKW::WGR::FUN_006b55f0
                    ((undefined4 *)this_00->field_0194,0,iVar13 + 0x3f,iVar7 + 0xf,
                     (byte *)this_00->field_09ED,0,0x3f,0x1c,0x44,0x13);
          PaintDamageXY(this_00,this_00->field_0194,iVar13 + 0x41,iVar7,
                        CONCAT31((int3)((uint)extraout_ECX >> 8),'d' - *local_8),0x36b1);
          PaintCostsXY(this_00,this_00->field_0194,iVar13 + 0x41,iVar7 + 0xb,*local_18,local_18[2],4
                       ,2);
          if (-1 < (int)this_00->field_015C) {
            Library::DKW::DDX::FUN_006b3640
                      (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                       this_00->field_00A8);
          }
        }
        local_18 = local_18 + 1;
        local_10 = local_10 + 1;
        local_8 = local_8 + 1;
        iVar7 = iVar7 + 0x23;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_c = 0;
      goto cf_common_exit_00509192;
    }
    break;
  case CASE_34:
    PaintMunition(this_00,(*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09F9 + 2)) /
                          2);
    local_10 = &this_00->field_0xa2e;
    iVar7 = 0;
    piVar17 = &this_00->field_0A15;
    do {
      if (*piVar17 != 0) {
        if (DAT_0080874e == '\x01') {
          GVar6 = (this_00->field_09D4 != '\x01') + CASE_1;
        }
        else {
          GVar6 = CASE_2 - (this_00->field_09D4 != '\x01');
        }
        uVar10 = thunk_FUN_00525ef0(GVar6,(char)iVar7);
        *(undefined4 *)local_10 = uVar10;
        if (this_00->field_0BFC == local_75) {
          this_00->field_0028 = 5;
          iVar13 = *piVar17;
        }
        else {
          this_00->field_0028 = 0x20;
          *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
          iVar13 = *piVar17;
        }
        FUN_006e6080(this_00,2,iVar13,(undefined4 *)&this_00->field_0x18);
      }
      iVar7 = iVar7 + 1;
      local_10 = local_10 + 0x27;
      piVar17 = piVar17 + 1;
    } while (iVar7 < 6);
    uVar8 = this_00->field_015C;
    if ((int)uVar8 < 0) goto cf_common_exit_00509192;
    uVar23 = this_00->field_00A8;
    uVar22 = this_00->field_0050;
    goto cf_common_exit_0050918D;
  case CASE_35:
    iVar7 = (((undefined4 *)this_00->field_0194)[1] - *(int *)(this_00->field_09ED + 2)) / 2;
    if (this_00->field_0C31 == local_40) {
      if (this_00->field_0C31 == '\0') {
        if (this_00->field_0C2F != local_42) {
          PaintCtrlObj(this_00,1);
          iVar7 = this_00->field_0302;
          if (iVar7 != 0) {
            puVar19 = local_e4;
            for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
              *puVar19 = 0;
              puVar19 = puVar19 + 1;
            }
            local_d4 = 5;
            FUN_006e6080(this_00,2,iVar7,local_e4);
          }
        }
        goto cf_common_exit_00509192;
      }
      if (this_00->field_0C33 == local_3e) goto cf_common_exit_00509192;
      Library::DKW::WGR::FUN_006b55f0
                ((undefined4 *)this_00->field_0194,0,iVar7 + 0x39,0x65,(byte *)this_00->field_09ED,0
                 ,0x39,0x15,0x4c,0x1b);
      PaintPerRes(this_00,iVar7);
      uVar8 = this_00->field_015C;
      goto joined_r0x00508b00;
    }
    break;
  case CASE_36:
  case CASE_37:
  case CASE_43:
  case CASE_45:
  case CASE_48:
  case CASE_4C:
  case CASE_4D:
  case CASE_4E:
  case CASE_6F:
    if (this_00->field_0C29 == local_48) goto cf_common_exit_00509192;
    iVar7 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09F5 + 2)) / 2;
    if (this_00->field_0C29 == -1) {
      this_00->field_0C29 = 0;
    }
    if (0x28 < (byte)this_00->field_0C29) {
      this_00->field_0C29 = 0x28;
    }
    local_8 = (byte *)((uint)local_8._1_3_ << 8);
    if (this_00->field_0C29 != '\0') {
      do {
        pbVar9 = (byte *)FUN_0070b3a0(this_00->field_02B6,3);
        DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0194,
               iVar7 + 6 + ((uint)local_8 & 0xff) * 4,0x75,'\x01',pbVar9);
        bVar5 = (byte)local_8 + 1;
        local_8 = (byte *)CONCAT31(local_8._1_3_,bVar5);
      } while (bVar5 < (byte)this_00->field_0C29);
    }
    if ((byte)local_8 < 0x28) {
      iVar13 = 0x28 - ((uint)local_8 & 0xff);
      iVar7 = iVar7 + 6 + ((uint)local_8 & 0xff) * 4;
      do {
        pbVar9 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
        DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0194,iVar7,0x75,'\x01',pbVar9);
        iVar7 = iVar7 + 4;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    uVar8 = this_00->field_015C;
    goto joined_r0x00508b00;
  case CASE_38:
  case CASE_39:
  case CASE_4F:
    PaintMineInf(this_00,(*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09ED + 2)) / 2
                );
    uVar8 = this_00->field_015C;
joined_r0x00508b00:
    if (-1 < (int)uVar8) {
LAB_00509179:
      uVar23 = this_00->field_00A8;
      uVar22 = this_00->field_0050;
cf_common_exit_0050918D:
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,uVar8,0xffffffff,uVar22,uVar23);
    }
    goto cf_common_exit_00509192;
  case CASE_3A:
    iVar7 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09ED + 2)) / 2;
    if (this_00->field_0C3A != local_37) {
      local_8 = (byte *)((uint)local_8._1_3_ << 8);
      if (this_00->field_0C3A != '\0') {
        do {
          pbVar9 = (byte *)FUN_0070b3a0(this_00->field_02B6,3);
          DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0194,
                 iVar7 + 0x70 + ((uint)local_8 & 0xff) * 4,0x54,'\x01',pbVar9);
          bVar5 = (byte)local_8 + 1;
          local_8 = (byte *)CONCAT31(local_8._1_3_,bVar5);
        } while (bVar5 < (byte)this_00->field_0C3A);
      }
      if ((byte)local_8 < 0xf) {
        local_c = 0xf - ((uint)local_8 & 0xff);
        iVar13 = iVar7 + 0x70 + ((uint)local_8 & 0xff) * 4;
        do {
          pbVar9 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0194,iVar13,0x54,'\x01',pbVar9);
          iVar13 = iVar13 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (-1 < (int)this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    if (this_00->field_0C3B != local_36) {
      local_8 = (byte *)((uint)local_8 & 0xffffff00);
      if (this_00->field_0C3B != '\0') {
        do {
          pbVar9 = (byte *)FUN_0070b3a0(this_00->field_02B6,3);
          DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0194,
                 iVar7 + 0x70 + ((uint)local_8 & 0xff) * 4,0x5f,'\x01',pbVar9);
          bVar5 = (byte)local_8 + 1;
          local_8 = (byte *)CONCAT31(local_8._1_3_,bVar5);
        } while (bVar5 < (byte)this_00->field_0C3B);
      }
      if ((byte)local_8 < 0xf) {
        local_c = 0xf - ((uint)local_8 & 0xff);
        iVar13 = iVar7 + 0x70 + ((uint)local_8 & 0xff) * 4;
        do {
          pbVar9 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0194,iVar13,0x5f,'\x01',pbVar9);
          iVar13 = iVar13 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (-1 < (int)this_00->field_015C) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                   this_00->field_00A8);
      }
    }
    if (this_00->field_0C34 == local_3d) goto cf_common_exit_00509192;
    local_8 = (byte *)((uint)local_8 & 0xffffff00);
    local_c = ((uint)(ushort)this_00->field_0C34 * 0x28) / 400;
    if (local_c != 0) {
      uVar8 = 0;
      do {
        pbVar9 = (byte *)FUN_0070b3a0(this_00->field_02B6,2);
        DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0194,iVar7 + 0xb + uVar8 * 4,0x76,
               '\x01',pbVar9);
        bVar5 = (byte)local_8 + 1;
        local_8 = (byte *)CONCAT31(local_8._1_3_,bVar5);
        uVar8 = (uint)bVar5;
      } while (uVar8 < local_c);
    }
    if ((byte)local_8 < 0x28) {
      iVar7 = iVar7 + 0xb + ((uint)local_8 & 0xff) * 4;
      iVar13 = 0x28 - ((uint)local_8 & 0xff);
      do {
        pbVar9 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
        DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0194,iVar7,0x76,'\x01',pbVar9);
        iVar7 = iVar7 + 4;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    uVar8 = this_00->field_015C;
    goto joined_r0x00509177;
  default:
    goto cf_common_exit_00509192;
  case CASE_3C:
    cVar11 = this_00->field_0C3C;
    local_c = CONCAT31(local_c._1_3_,cVar11);
    if (local_35 != cVar11) {
      PaintCtrlObj(this_00,1);
      SetControlObj(this_00,'\x01');
      thunk_FUN_00506040((AnonShape_00506040_A874E362 *)this_00);
      goto cf_common_exit_00509192;
    }
    puVar3 = this_00->field_09ED;
    puVar19 = (undefined4 *)this_00->field_0194;
    iVar7 = (puVar19[1] - *(int *)(puVar3 + 2)) / 2;
    if (cVar11 == '\x01') {
      Library::DKW::WGR::FUN_006b55f0
                (puVar19,0,iVar7 + 0x39,0x65,(byte *)puVar3,0,0x39,0x15,0x4c,0x1b);
      PaintDamageXY(this_00,this_00->field_0194,iVar7 + 0x39,0x65,
                    CONCAT31((int3)((uint)extraout_ECX_00 >> 8),this_00->field_0xc3d),0x2714);
      local_14 = 0;
      uVar8 = (uint)(*(int *)&this_00->field_0xc3d * 0x28) / 100;
      if (uVar8 != 0) {
        iVar13 = iVar7 + 0xb;
        local_14 = uVar8;
        local_c = uVar8;
        do {
          pbVar9 = (byte *)FUN_0070b3a0(this_00->field_02B6,3);
          DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0194,iVar13,0x5c,'\x01',pbVar9);
          iVar13 = iVar13 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (local_14 < 0x28) {
        iVar7 = iVar7 + 0xb + local_14 * 4;
        iVar13 = 0x28 - local_14;
        do {
          pbVar9 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((AnonShape_006B84D0_7C7D97C6 *)this_00->field_0194,iVar7,0x5c,'\x01',pbVar9);
          iVar7 = iVar7 + 4;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
    }
    else if (cVar11 == '\x02') {
      Library::DKW::WGR::FUN_006b55f0
                (puVar19,0,iVar7,0x71,(byte *)puVar3,0,0,0x21,*(int *)(puVar3 + 2),
                 *(int *)(puVar3 + 4) + -0x21);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(undefined4 *)&this_00->field_0xc3d);
      ccFntTy::SetSurf(this_00->field_01BC,this_00->field_0194,0,iVar7,0x71,
                       *(int *)(this_00->field_09ED + 2),*(int *)(this_00->field_09ED + 4) + -0x21);
      ccFntTy::WrStr(this_00->field_01BC,&DAT_0080f33a,-1,-1,0);
    }
    uVar8 = this_00->field_015C;
joined_r0x00509177:
    if ((int)uVar8 < 0) goto cf_common_exit_00509192;
    goto LAB_00509179;
  case CASE_50:
    iVar7 = 3;
    bVar21 = true;
    psVar16 = (short *)&this_00->field_0C11;
    psVar20 = (short *)local_60;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar21 = *psVar16 == *psVar20;
      psVar16 = psVar16 + 1;
      psVar20 = psVar20 + 1;
    } while (bVar21);
    if (!bVar21) {
      piVar17 = &this_00->field_0A15;
      iVar7 = 6;
      do {
        if (*piVar17 != 0) {
          if (this_00->field_0BFC == local_75) {
            this_00->field_0028 = 5;
            iVar13 = *piVar17;
          }
          else {
            this_00->field_0028 = 0x20;
            *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
            iVar13 = *piVar17;
          }
          FUN_006e6080(this_00,2,iVar13,(undefined4 *)&this_00->field_0x18);
        }
        piVar17 = piVar17 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    goto cf_common_exit_00509192;
  }
  iVar7 = 1;
LAB_00508b35:
  PaintCtrlObj(this_00,iVar7);
  SetControlObj(this_00,'\0');
  thunk_FUN_00506040((AnonShape_00506040_A874E362 *)this_00);
cf_common_exit_00509192:
  if (this_00->field_0C4D == local_24) {
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  PaintIDSObj(this_00);
  g_currentExceptionFrame = local_c4.previous;
  return;
switchD_00508349_caseD_dd:
  PaintCtrlObj(this_00,1);
  iVar7 = this_00->field_0302;
  if (iVar7 == 0) {
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  puVar19 = local_104;
  for (iVar13 = 8; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar19 = 0;
    puVar19 = puVar19 + 1;
  }
  local_f4 = 5;
  FUN_006e6080(this_00,2,iVar7,local_104);
  g_currentExceptionFrame = local_c4.previous;
  return;
}

