
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::Update4PanelWB */

void __thiscall CPanelTy::Update4PanelWB(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *this_00;
  byte bVar2;
  Global_sub_00525EF0_param_1Enum GVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  char cVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char cVar9;
  int iVar10;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_ESI;
  char *pcVar11;
  short *psVar12;
  int *piVar13;
  void *unaff_EDI;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  short *psVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  undefined4 local_104 [4];
  undefined4 local_f4;
  undefined4 local_e4 [4];
  undefined4 local_d4;
  InternalExceptionFrame local_c4;
  CPanelTy *local_80;
  int local_7c;
  char local_78;
  char local_77;
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
  iVar4 = Library::MSVCRT::__setjmp3(local_c4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_80;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x497,0,iVar4,
                                &DAT_007a4ccc,s_CPanelTy__Update4PanelWB_007c2878);
    if (iVar10 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x497);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  puVar16 = &local_80->field_0BF5;
  piVar13 = puVar16;
  piVar14 = &local_7c;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar14 = *piVar13;
    piVar13 = piVar13 + 1;
    piVar14 = piVar14 + 1;
  }
  puVar15 = puVar16;
  for (iVar4 = 0x17; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar15 = 0;
    puVar15 = puVar15 + 1;
  }
  STAllPlayersC::GetPanelInfo(DAT_007fa174,4,puVar16);
  cVar8 = this_00->field_0BFA;
  if ((local_77 != cVar8) || (local_76 != this_00->field_0BFB)) {
cf_common_exit_005091B9:
    PaintCtrlObj(this_00,1);
    SetControlObj(this_00,'\x01');
    thunk_FUN_00506040((int)this_00);
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  if ((this_00->field_0BFB == '\x02') && (cVar8 == '\x01')) {
    cVar8 = '\0';
    cVar9 = '\0';
    iVar4 = 0;
    do {
      if ((&this_00->field_0BFE)[iVar4] != '\0') {
        cVar9 = cVar9 + '\x01';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    iVar4 = 0;
    do {
      if (*(char *)((int)local_73 + iVar4) != '\0') {
        cVar8 = cVar8 + '\x01';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    if (cVar9 == cVar8) {
      iVar4 = 3;
      bVar18 = true;
      psVar12 = (short *)&this_00->field_0BFE;
      psVar17 = local_73;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar18 = *psVar12 == *psVar17;
        psVar12 = psVar12 + 1;
        psVar17 = psVar17 + 1;
      } while (bVar18);
      if (bVar18) {
        if (this_00->field_0BFD != local_74) {
          thunk_FUN_004f1610(this_00,'\0');
        }
      }
      else {
        this_00->field_0028 = 5;
        FUN_006e6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
        local_8 = (byte *)((uint)local_8 & 0xffffff00);
        pcVar11 = &this_00->field_0BFE;
        do {
          if (*pcVar11 != '\0') {
            thunk_FUN_004f17d0(this_00,0,(byte)local_8);
          }
          bVar2 = (byte)local_8 + 1;
          pcVar11 = pcVar11 + 1;
          local_8 = (byte *)CONCAT31(local_8._1_3_,bVar2);
        } while (bVar2 < 6);
        thunk_FUN_004f1610(this_00,'\0');
        thunk_FUN_0054a8d0(DAT_00802a30);
      }
      iVar4 = 3;
      bVar18 = true;
      psVar12 = (short *)&this_00->field_0C04;
      psVar17 = local_73 + 3;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar18 = *psVar12 == *psVar17;
        psVar12 = psVar12 + 1;
        psVar17 = psVar17 + 1;
      } while (bVar18);
      if ((!bVar18) || (this_00->field_0BFC != local_75)) {
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
        uVar5 = 0;
      }
      else {
        uVar5 = (uint)(byte)this_00->field_0C0A;
      }
      *(uint *)&this_00->field_0x2c = uVar5;
      FUN_006e6080(this_00,2,this_00->field_09C4,(undefined4 *)&this_00->field_0x18);
    }
    if (*(int *)&this_00->field_0xc12 == local_60._1_4_) {
      iVar4 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09ED + 4)) / 2;
      if (this_00->field_0C24 != local_4d[0]) {
        FUN_006b4170(this_00->field_0194,0,iVar4 + 0x36,0x5d,7,0x21,0);
        bVar2 = this_00->field_0C24;
        local_c = CONCAT31(local_c._1_3_,bVar2);
        cVar8 = (char)(((uint)bVar2 * 0x21) / 100);
        local_10 = (byte *)CONCAT31(local_10._1_3_,cVar8);
        if ((bVar2 != 0) && (cVar8 == '\0')) {
          local_10 = (byte *)CONCAT31(local_10._1_3_,1);
        }
        if (bVar2 < 0x46) {
          iVar10 = (-(uint)(bVar2 < 0x14) & 5) + 5;
        }
        else {
          iVar10 = 0;
        }
        uVar5 = (uint)local_10 & 0xff;
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar4 + 0x37,0x7e - uVar5,this_00->field_028A
                   ,0,iVar10,*(int *)(this_00->field_028A + 8) - uVar5,5,uVar5);
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar4 + 0x3f,0x5c,this_00->field_09ED,0,0x3f,
                   0xc,0x75,0x11);
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar4 + 0x3f,0x6c,this_00->field_09ED,0,0x3f,
                   0x1c,0x44,0x13);
        PaintDamageXY(this_00,this_00->field_0194,iVar4 + 0x41,0x5d,
                      CONCAT31((int3)((uint)extraout_EDX >> 8),this_00->field_0C24),0x2714);
        PaintCostsXY(this_00,this_00->field_0194,iVar4 + 0x41,0x68,this_00->field_0C1C,
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
      thunk_FUN_00506040((int)this_00);
    }
    if (this_00->field_0C4D == local_24) {
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
    PaintIDSObj(this_00);
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  if (cVar8 != '\x01') {
    if (cVar8 != '\x04') {
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
    if (local_7c == this_00->field_0BF5) {
      switch(this_00->field_0BF5) {
      case 0xdd:
      case 0xde:
      case 0xe0:
      case 0xfd:
      case 0xfe:
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
  cVar8 = '\0';
  cVar9 = '\0';
  iVar4 = 0;
  do {
    if ((&this_00->field_0BFE)[iVar4] != '\0') {
      cVar9 = cVar9 + '\x01';
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  iVar4 = 0;
  do {
    if (*(char *)((int)local_73 + iVar4) != '\0') {
      cVar8 = cVar8 + '\x01';
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  if (cVar9 == cVar8) {
    iVar4 = 3;
    bVar18 = true;
    psVar12 = (short *)&this_00->field_0BFE;
    psVar17 = local_73;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar18 = *psVar12 == *psVar17;
      psVar12 = psVar12 + 1;
      psVar17 = psVar17 + 1;
    } while (bVar18);
    if (bVar18) {
      if (this_00->field_0BFD != local_74) {
        thunk_FUN_004f1610(this_00,'\0');
      }
    }
    else {
      this_00->field_0028 = 5;
      FUN_006e6080(this_00,2,this_00->field_0302,(undefined4 *)&this_00->field_0x18);
      local_8 = (byte *)((uint)local_8 & 0xffffff00);
      pcVar11 = &this_00->field_0BFE;
      do {
        if (*pcVar11 != '\0') {
          thunk_FUN_004f17d0(this_00,0,(byte)local_8);
        }
        bVar2 = (byte)local_8 + 1;
        pcVar11 = pcVar11 + 1;
        local_8 = (byte *)CONCAT31(local_8._1_3_,bVar2);
      } while (bVar2 < 6);
      thunk_FUN_004f1610(this_00,'\0');
      thunk_FUN_0054a8d0(DAT_00802a30);
    }
    iVar4 = 3;
    bVar18 = true;
    psVar12 = (short *)&this_00->field_0C04;
    psVar17 = local_73 + 3;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar18 = *psVar12 == *psVar17;
      psVar12 = psVar12 + 1;
      psVar17 = psVar17 + 1;
    } while (bVar18);
    if ((!bVar18) || (this_00->field_0BFC != local_75)) {
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
      uVar5 = 0;
    }
    else {
      uVar5 = (uint)(byte)this_00->field_0C0A;
    }
    *(uint *)&this_00->field_0x2c = uVar5;
    FUN_006e6080(this_00,2,this_00->field_09C4,(undefined4 *)&this_00->field_0x18);
  }
  if (((this_00->field_0BF5 == 0x43) || (this_00->field_0BF5 == 0x4c)) &&
     ((this_00->field_0C11 != local_60[0] || (this_00->field_0BFC != local_75)))) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0BFC == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = (-(uint)(this_00->field_0C11 != '\0') & 2) + 1;
    }
    *(int *)&this_00->field_0x2c = iVar4;
    FUN_006e6080(this_00,2,this_00->field_030C,(undefined4 *)&this_00->field_0x18);
  }
  switch(this_00->field_0BF5) {
  case 0x32:
  case 0x40:
  case 0x44:
  case 0x49:
    if ((*(int *)&this_00->field_0xc12 == local_60._1_4_) && (this_00->field_0C26 == local_4b)) {
      iVar4 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09ED + 4)) / 2;
      if (this_00->field_0C24 != local_4d[0]) {
        FUN_006b4170(this_00->field_0194,0,iVar4 + 0x36,0x5d,7,0x21,0);
        bVar2 = this_00->field_0C24;
        cVar8 = (char)(((uint)bVar2 * 0x21) / 100);
        local_c = CONCAT31(local_c._1_3_,cVar8);
        if ((bVar2 != 0) && (cVar8 == '\0')) {
          local_c = CONCAT31(local_c._1_3_,1);
        }
        if (bVar2 < 0x46) {
          iVar10 = (-(uint)(bVar2 < 0x14) & 5) + 5;
        }
        else {
          iVar10 = 0;
        }
        uVar5 = local_c & 0xff;
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar4 + 0x37,0x7e - uVar5,this_00->field_028A
                   ,0,iVar10,*(int *)(this_00->field_028A + 8) - uVar5,5,uVar5);
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar4 + 0x3f,0x5c,this_00->field_09ED,0,0x3f,
                   0xc,0x75,0x11);
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar4 + 0x3f,0x6c,this_00->field_09ED,0,0x3f,
                   0x1c,0x44,0x13);
        PaintDamageXY(this_00,this_00->field_0194,iVar4 + 0x41,0x5d,
                      CONCAT31((int3)((uint)extraout_EDX_00 >> 8),this_00->field_0C24),0x2714);
        PaintCostsXY(this_00,this_00->field_0194,iVar4 + 0x41,0x68,this_00->field_0C1C,
                     this_00->field_0C20,4,2);
        if (-1 < (int)this_00->field_015C) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,this_00->field_015C,0xffffffff,this_00->field_0050,
                     this_00->field_00A8);
        }
      }
      if ((this_00->field_0BF5 != 0x44) || (this_00->field_0C34 == local_3d))
      goto cf_common_exit_00509192;
      DibPut((undefined4 *)this_00->field_0194,
             (((undefined4 *)this_00->field_0194)[1] - *(int *)((byte *)this_00->field_0A01 + 4)) /
             2,0x37,'\x01',(byte *)this_00->field_0A01);
      uVar5 = (uint)(ushort)this_00->field_0C34;
      uVar7 = FUN_006b0140(0x2725,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__1_s__0_d_007c286c,uVar7,uVar5);
      ccFntTy::SetSurf(this_00->field_01B8,this_00->field_0194,0,0x56,0x39,0x6d,0x15);
      ccFntTy::WrTxt(this_00->field_01B8,&DAT_0080f33a,-2,-1,0,-1,-1);
      uVar5 = this_00->field_015C;
      if ((int)uVar5 < 0) goto cf_common_exit_00509192;
      uVar20 = this_00->field_00A8;
      uVar19 = this_00->field_0050;
      goto cf_common_exit_0050918D;
    }
    iVar4 = 0;
    goto LAB_00508b35;
  case 0x33:
    if ((*(int *)&this_00->field_0xc12 == local_60._1_4_) && (this_00->field_0C16 == local_5b)) {
      iVar4 = 0x3a;
      local_c = 2;
      local_18 = &this_00->field_0C1C;
      local_10 = local_4d;
      local_8 = &this_00->field_0C24;
      iVar10 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09ED + 4)) / 2;
      do {
        if (*local_8 != *local_10) {
          FUN_006b4170(this_00->field_0194,0,iVar10 + 0x36,iVar4,7,0x21,0);
          bVar2 = *local_8;
          local_1c = CONCAT31(local_1c._1_3_,bVar2);
          cVar8 = (char)(((uint)bVar2 * 0x21) / 100);
          local_20 = CONCAT31(local_20._1_3_,cVar8);
          if ((bVar2 != 0) && (cVar8 == '\0')) {
            local_20 = CONCAT31(local_20._1_3_,1);
          }
          if (bVar2 < 0x46) {
            local_14 = (-(uint)(bVar2 < 0x14) & 5) + 5;
          }
          else {
            local_14 = 0;
          }
          uVar5 = local_20 & 0xff;
          Library::DKW::WGR::FUN_006b55f0
                    ((undefined4 *)this_00->field_0194,0,iVar10 + 0x37,(iVar4 - uVar5) + 0x21,
                     this_00->field_028A,0,local_14,*(int *)(this_00->field_028A + 8) - uVar5,5,
                     uVar5);
          Library::DKW::WGR::FUN_006b55f0
                    ((undefined4 *)this_00->field_0194,0,iVar10 + 0x3f,iVar4 + -1,
                     this_00->field_09ED,0,0x3f,0xc,0x75,0x11);
          Library::DKW::WGR::FUN_006b55f0
                    ((undefined4 *)this_00->field_0194,0,iVar10 + 0x3f,iVar4 + 0xf,
                     this_00->field_09ED,0,0x3f,0x1c,0x44,0x13);
          PaintDamageXY(this_00,this_00->field_0194,iVar10 + 0x41,iVar4,
                        CONCAT31((int3)((uint)extraout_ECX >> 8),'d' - *local_8),0x36b1);
          PaintCostsXY(this_00,this_00->field_0194,iVar10 + 0x41,iVar4 + 0xb,*local_18,local_18[2],4
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
        iVar4 = iVar4 + 0x23;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_c = 0;
      goto cf_common_exit_00509192;
    }
    break;
  case 0x34:
    PaintMunition(this_00,(*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09F9 + 4)) /
                          2);
    local_10 = &this_00->field_0xa2e;
    iVar4 = 0;
    piVar13 = &this_00->field_0A15;
    do {
      if (*piVar13 != 0) {
        if (DAT_0080874e == '\x01') {
          GVar3 = (this_00->field_09D4 != '\x01') + CASE_1;
        }
        else {
          GVar3 = CASE_2 - (this_00->field_09D4 != '\x01');
        }
        uVar7 = thunk_FUN_00525ef0(GVar3,(char)iVar4);
        *(undefined4 *)local_10 = uVar7;
        if (this_00->field_0BFC == local_75) {
          this_00->field_0028 = 5;
          iVar10 = *piVar13;
        }
        else {
          this_00->field_0028 = 0x20;
          *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
          iVar10 = *piVar13;
        }
        FUN_006e6080(this_00,2,iVar10,(undefined4 *)&this_00->field_0x18);
      }
      iVar4 = iVar4 + 1;
      local_10 = local_10 + 0x27;
      piVar13 = piVar13 + 1;
    } while (iVar4 < 6);
    uVar5 = this_00->field_015C;
    if ((int)uVar5 < 0) goto cf_common_exit_00509192;
    uVar20 = this_00->field_00A8;
    uVar19 = this_00->field_0050;
    goto cf_common_exit_0050918D;
  case 0x35:
    iVar4 = (((undefined4 *)this_00->field_0194)[1] - *(int *)(this_00->field_09ED + 4)) / 2;
    if (this_00->field_0C31 == local_40) {
      if (this_00->field_0C31 == '\0') {
        if (this_00->field_0C2F != local_42) {
          PaintCtrlObj(this_00,1);
          iVar4 = this_00->field_0302;
          if (iVar4 != 0) {
            puVar16 = local_e4;
            for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar16 = 0;
              puVar16 = puVar16 + 1;
            }
            local_d4 = 5;
            FUN_006e6080(this_00,2,iVar4,local_e4);
          }
        }
        goto cf_common_exit_00509192;
      }
      if (this_00->field_0C33 == local_3e) goto cf_common_exit_00509192;
      Library::DKW::WGR::FUN_006b55f0
                ((undefined4 *)this_00->field_0194,0,iVar4 + 0x39,0x65,this_00->field_09ED,0,0x39,
                 0x15,0x4c,0x1b);
      PaintPerRes(this_00,iVar4);
      uVar5 = this_00->field_015C;
      goto joined_r0x00508b00;
    }
    break;
  case 0x36:
  case 0x37:
  case 0x43:
  case 0x45:
  case 0x48:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x6f:
    if (this_00->field_0C29 == local_48) goto cf_common_exit_00509192;
    iVar4 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09F5 + 4)) / 2;
    if (this_00->field_0C29 == -1) {
      this_00->field_0C29 = 0;
    }
    if (0x28 < (byte)this_00->field_0C29) {
      this_00->field_0C29 = 0x28;
    }
    local_8 = (byte *)((uint)local_8._1_3_ << 8);
    if (this_00->field_0C29 != '\0') {
      do {
        pbVar6 = (byte *)FUN_0070b3a0(this_00->field_02B6,3);
        DibPut((undefined4 *)this_00->field_0194,iVar4 + 6 + ((uint)local_8 & 0xff) * 4,0x75,'\x01',
               pbVar6);
        bVar2 = (byte)local_8 + 1;
        local_8 = (byte *)CONCAT31(local_8._1_3_,bVar2);
      } while (bVar2 < (byte)this_00->field_0C29);
    }
    if ((byte)local_8 < 0x28) {
      iVar10 = 0x28 - ((uint)local_8 & 0xff);
      iVar4 = iVar4 + 6 + ((uint)local_8 & 0xff) * 4;
      do {
        pbVar6 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
        DibPut((undefined4 *)this_00->field_0194,iVar4,0x75,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    uVar5 = this_00->field_015C;
    goto joined_r0x00508b00;
  case 0x38:
  case 0x39:
  case 0x4f:
    PaintMineInf(this_00,(*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09ED + 4)) / 2
                );
    uVar5 = this_00->field_015C;
joined_r0x00508b00:
    if (-1 < (int)uVar5) {
LAB_00509179:
      uVar20 = this_00->field_00A8;
      uVar19 = this_00->field_0050;
cf_common_exit_0050918D:
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,uVar5,0xffffffff,uVar19,uVar20);
    }
    goto cf_common_exit_00509192;
  case 0x3a:
    iVar4 = (*(int *)(this_00->field_0194 + 4) - *(int *)(this_00->field_09ED + 4)) / 2;
    if (this_00->field_0C3A != local_37) {
      local_8 = (byte *)((uint)local_8._1_3_ << 8);
      if (this_00->field_0C3A != '\0') {
        do {
          pbVar6 = (byte *)FUN_0070b3a0(this_00->field_02B6,3);
          DibPut((undefined4 *)this_00->field_0194,iVar4 + 0x70 + ((uint)local_8 & 0xff) * 4,0x54,
                 '\x01',pbVar6);
          bVar2 = (byte)local_8 + 1;
          local_8 = (byte *)CONCAT31(local_8._1_3_,bVar2);
        } while (bVar2 < (byte)this_00->field_0C3A);
      }
      if ((byte)local_8 < 0xf) {
        local_c = 0xf - ((uint)local_8 & 0xff);
        iVar10 = iVar4 + 0x70 + ((uint)local_8 & 0xff) * 4;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((undefined4 *)this_00->field_0194,iVar10,0x54,'\x01',pbVar6);
          iVar10 = iVar10 + 4;
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
          pbVar6 = (byte *)FUN_0070b3a0(this_00->field_02B6,3);
          DibPut((undefined4 *)this_00->field_0194,iVar4 + 0x70 + ((uint)local_8 & 0xff) * 4,0x5f,
                 '\x01',pbVar6);
          bVar2 = (byte)local_8 + 1;
          local_8 = (byte *)CONCAT31(local_8._1_3_,bVar2);
        } while (bVar2 < (byte)this_00->field_0C3B);
      }
      if ((byte)local_8 < 0xf) {
        local_c = 0xf - ((uint)local_8 & 0xff);
        iVar10 = iVar4 + 0x70 + ((uint)local_8 & 0xff) * 4;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((undefined4 *)this_00->field_0194,iVar10,0x5f,'\x01',pbVar6);
          iVar10 = iVar10 + 4;
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
      uVar5 = 0;
      do {
        pbVar6 = (byte *)FUN_0070b3a0(this_00->field_02B6,2);
        DibPut((undefined4 *)this_00->field_0194,iVar4 + 0xb + uVar5 * 4,0x76,'\x01',pbVar6);
        bVar2 = (byte)local_8 + 1;
        local_8 = (byte *)CONCAT31(local_8._1_3_,bVar2);
        uVar5 = (uint)bVar2;
      } while (uVar5 < local_c);
    }
    if ((byte)local_8 < 0x28) {
      iVar4 = iVar4 + 0xb + ((uint)local_8 & 0xff) * 4;
      iVar10 = 0x28 - ((uint)local_8 & 0xff);
      do {
        pbVar6 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
        DibPut((undefined4 *)this_00->field_0194,iVar4,0x76,'\x01',pbVar6);
        iVar4 = iVar4 + 4;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    uVar5 = this_00->field_015C;
    goto joined_r0x00509177;
  default:
    goto cf_common_exit_00509192;
  case 0x3c:
    cVar8 = this_00->field_0C3C;
    local_c = CONCAT31(local_c._1_3_,cVar8);
    if (local_35 != cVar8) {
      PaintCtrlObj(this_00,1);
      SetControlObj(this_00,'\x01');
      thunk_FUN_00506040((int)this_00);
      goto cf_common_exit_00509192;
    }
    iVar4 = this_00->field_09ED;
    puVar16 = (undefined4 *)this_00->field_0194;
    iVar10 = (puVar16[1] - *(int *)(iVar4 + 4)) / 2;
    if (cVar8 == '\x01') {
      Library::DKW::WGR::FUN_006b55f0(puVar16,0,iVar10 + 0x39,0x65,iVar4,0,0x39,0x15,0x4c,0x1b);
      PaintDamageXY(this_00,this_00->field_0194,iVar10 + 0x39,0x65,
                    CONCAT31((int3)((uint)extraout_ECX_00 >> 8),this_00->field_0xc3d),0x2714);
      local_14 = 0;
      uVar5 = (uint)(*(int *)&this_00->field_0xc3d * 0x28) / 100;
      if (uVar5 != 0) {
        iVar4 = iVar10 + 0xb;
        local_14 = uVar5;
        local_c = uVar5;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(this_00->field_02B6,3);
          DibPut((undefined4 *)this_00->field_0194,iVar4,0x5c,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (local_14 < 0x28) {
        iVar4 = iVar10 + 0xb + local_14 * 4;
        iVar10 = 0x28 - local_14;
        do {
          pbVar6 = (byte *)FUN_0070b3a0(this_00->field_02B6,0);
          DibPut((undefined4 *)this_00->field_0194,iVar4,0x5c,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    else if (cVar8 == '\x02') {
      Library::DKW::WGR::FUN_006b55f0
                (puVar16,0,iVar10,0x71,iVar4,0,0,0x21,*(int *)(iVar4 + 4),
                 *(int *)(iVar4 + 8) + -0x21);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(undefined4 *)&this_00->field_0xc3d);
      ccFntTy::SetSurf(this_00->field_01BC,this_00->field_0194,0,iVar10,0x71,
                       *(int *)(this_00->field_09ED + 4),*(int *)(this_00->field_09ED + 8) + -0x21);
      ccFntTy::WrStr(this_00->field_01BC,&DAT_0080f33a,-1,-1,0);
    }
    uVar5 = this_00->field_015C;
joined_r0x00509177:
    if ((int)uVar5 < 0) goto cf_common_exit_00509192;
    goto LAB_00509179;
  case 0x50:
    iVar4 = 3;
    bVar18 = true;
    psVar12 = (short *)&this_00->field_0C11;
    psVar17 = (short *)local_60;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar18 = *psVar12 == *psVar17;
      psVar12 = psVar12 + 1;
      psVar17 = psVar17 + 1;
    } while (bVar18);
    if (!bVar18) {
      piVar13 = &this_00->field_0A15;
      iVar4 = 6;
      do {
        if (*piVar13 != 0) {
          if (this_00->field_0BFC == local_75) {
            this_00->field_0028 = 5;
            iVar10 = *piVar13;
          }
          else {
            this_00->field_0028 = 0x20;
            *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0BFC != '\0');
            iVar10 = *piVar13;
          }
          FUN_006e6080(this_00,2,iVar10,(undefined4 *)&this_00->field_0x18);
        }
        piVar13 = piVar13 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    goto cf_common_exit_00509192;
  }
  iVar4 = 1;
LAB_00508b35:
  PaintCtrlObj(this_00,iVar4);
  SetControlObj(this_00,'\0');
  thunk_FUN_00506040((int)this_00);
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
  iVar4 = this_00->field_0302;
  if (iVar4 == 0) {
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  puVar16 = local_104;
  for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  local_f4 = 5;
  FUN_006e6080(this_00,2,iVar4,local_104);
  g_currentExceptionFrame = local_c4.previous;
  return;
}

