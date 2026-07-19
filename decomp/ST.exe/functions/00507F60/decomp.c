
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::Update4PanelWB */

void __thiscall CPanelTy::Update4PanelWB(CPanelTy *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  CPanelTy *this_00;
  byte bVar3;
  Global_sub_00525EF0_param_1Enum GVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 uVar8;
  char cVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  char cVar10;
  int iVar11;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_ESI;
  char *pcVar12;
  short *psVar13;
  int *piVar14;
  void *unaff_EDI;
  int *piVar15;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_c4.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_80;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_c4.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x497,0,iVar5,
                                &DAT_007a4ccc,s_CPanelTy__Update4PanelWB_007c2878);
    if (iVar11 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x497);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar1 = &local_80->field_0xbf5;
  piVar14 = (int *)puVar1;
  piVar15 = &local_7c;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar15 = *piVar14;
    piVar14 = piVar14 + 1;
    piVar15 = piVar15 + 1;
  }
  puVar16 = (undefined4 *)puVar1;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  STAllPlayersC::GetPanelInfo(DAT_007fa174,4,(int *)puVar1);
  cVar9 = this_00->field_0xbfa;
  if ((local_77 != cVar9) || (local_76 != this_00->field_0xbfb)) {
LAB_005091b9:
    PaintCtrlObj(this_00,1);
    SetControlObj(this_00,'\x01');
    thunk_FUN_00506040((int)this_00);
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  if ((this_00->field_0xbfb == '\x02') && (cVar9 == '\x01')) {
    cVar9 = '\0';
    cVar10 = '\0';
    iVar5 = 0;
    do {
      if ((&this_00->field_0xbfe)[iVar5] != '\0') {
        cVar10 = cVar10 + '\x01';
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 6);
    iVar5 = 0;
    do {
      if (*(char *)((int)local_73 + iVar5) != '\0') {
        cVar9 = cVar9 + '\x01';
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 6);
    if (cVar10 == cVar9) {
      iVar5 = 3;
      bVar18 = true;
      psVar13 = (short *)&this_00->field_0xbfe;
      psVar17 = local_73;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar18 = *psVar13 == *psVar17;
        psVar13 = psVar13 + 1;
        psVar17 = psVar17 + 1;
      } while (bVar18);
      if (bVar18) {
        if (this_00->field_0xbfd != local_74) {
          thunk_FUN_004f1610(this_00,'\0');
        }
      }
      else {
        this_00->field_0028 = 5;
        FUN_006e6080(this_00,2,*(undefined4 *)&this_00->field_0x302,
                     (undefined4 *)&this_00->field_0x18);
        local_8 = (byte *)((uint)local_8 & 0xffffff00);
        pcVar12 = &this_00->field_0xbfe;
        do {
          if (*pcVar12 != '\0') {
            thunk_FUN_004f17d0(this_00,0,(byte)local_8);
          }
          bVar3 = (byte)local_8 + 1;
          pcVar12 = pcVar12 + 1;
          local_8 = (byte *)CONCAT31(local_8._1_3_,bVar3);
        } while (bVar3 < 6);
        thunk_FUN_004f1610(this_00,'\0');
        thunk_FUN_0054a8d0(DAT_00802a30);
      }
      iVar5 = 3;
      bVar18 = true;
      psVar13 = (short *)&this_00->field_0xc04;
      psVar17 = local_73 + 3;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar18 = *psVar13 == *psVar17;
        psVar13 = psVar13 + 1;
        psVar17 = psVar17 + 1;
      } while (bVar18);
      if ((!bVar18) || (this_00->field_0xbfc != local_75)) {
        thunk_FUN_004f4570(this_00,'\0',(int)&this_00->field_0xbf5,(int)&local_7c);
      }
    }
    else {
      SetControlObj(this_00,'\x01');
    }
    if (((this_00->field_0xc0a != local_67) || (this_00->field_0xbfc != local_75)) &&
       (*(int *)&this_00->field_0x9c4 != 0)) {
      this_00->field_0028 = 0x20;
      if (this_00->field_0xbfc == '\0') {
        uVar6 = 0;
      }
      else {
        uVar6 = (uint)(byte)this_00->field_0xc0a;
      }
      *(uint *)&this_00->field_0x2c = uVar6;
      FUN_006e6080(this_00,2,*(undefined4 *)&this_00->field_0x9c4,(undefined4 *)&this_00->field_0x18
                  );
    }
    if (*(int *)&this_00->field_0xc12 == local_60._1_4_) {
      iVar5 = (*(int *)(this_00->field_0194 + 4) - *(int *)(*(int *)&this_00->field_0x9ed + 4)) / 2;
      if (this_00->field_0xc24 != local_4d[0]) {
        FUN_006b4170(this_00->field_0194,0,iVar5 + 0x36,0x5d,7,0x21,0);
        bVar3 = this_00->field_0xc24;
        local_c = CONCAT31(local_c._1_3_,bVar3);
        cVar9 = (char)(((uint)bVar3 * 0x21) / 100);
        local_10 = (byte *)CONCAT31(local_10._1_3_,cVar9);
        if ((bVar3 != 0) && (cVar9 == '\0')) {
          local_10 = (byte *)CONCAT31(local_10._1_3_,1);
        }
        if (bVar3 < 0x46) {
          iVar11 = (-(uint)(bVar3 < 0x14) & 5) + 5;
        }
        else {
          iVar11 = 0;
        }
        uVar6 = (uint)local_10 & 0xff;
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar5 + 0x37,0x7e - uVar6,
                   *(int *)&this_00->field_0x28a,0,iVar11,
                   *(int *)(*(int *)&this_00->field_0x28a + 8) - uVar6,5,uVar6);
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar5 + 0x3f,0x5c,
                   *(int *)&this_00->field_0x9ed,0,0x3f,0xc,0x75,0x11);
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar5 + 0x3f,0x6c,
                   *(int *)&this_00->field_0x9ed,0,0x3f,0x1c,0x44,0x13);
        PaintDamageXY(this_00,this_00->field_0194,iVar5 + 0x41,0x5d,
                      CONCAT31((int3)((uint)extraout_EDX >> 8),this_00->field_0xc24),0x2714);
        PaintCostsXY(this_00,this_00->field_0194,iVar5 + 0x41,0x68,*(ushort *)&this_00->field_0xc1c,
                     *(ushort *)&this_00->field_0xc20,4,2);
        if (-1 < (int)*(uint *)&this_00->field_0x15c) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)&this_00->field_0x15c,0xffffffff,
                     *(uint *)&this_00->field_0x50,*(uint *)&this_00->field_0xa8);
        }
      }
    }
    else {
      PaintCtrlObj(this_00,1);
      SetControlObj(this_00,'\0');
      thunk_FUN_00506040((int)this_00);
    }
    if (*(int *)&this_00->field_0xc4d == local_24) {
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
    PaintIDSObj(this_00);
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  if (cVar9 != '\x01') {
    if (cVar9 != '\x04') {
      g_currentExceptionFrame = local_c4.previous;
      return;
    }
    if (local_7c == *(int *)&this_00->field_0xbf5) {
      switch(*(int *)&this_00->field_0xbf5) {
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
    goto LAB_005091b9;
  }
  if ((local_7c != *(int *)&this_00->field_0xbf5) || (local_78 != this_00->field_0xbf9))
  goto LAB_005091b9;
  cVar9 = '\0';
  cVar10 = '\0';
  iVar5 = 0;
  do {
    if ((&this_00->field_0xbfe)[iVar5] != '\0') {
      cVar10 = cVar10 + '\x01';
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 6);
  iVar5 = 0;
  do {
    if (*(char *)((int)local_73 + iVar5) != '\0') {
      cVar9 = cVar9 + '\x01';
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 6);
  if (cVar10 == cVar9) {
    iVar5 = 3;
    bVar18 = true;
    psVar13 = (short *)&this_00->field_0xbfe;
    psVar17 = local_73;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar18 = *psVar13 == *psVar17;
      psVar13 = psVar13 + 1;
      psVar17 = psVar17 + 1;
    } while (bVar18);
    if (bVar18) {
      if (this_00->field_0xbfd != local_74) {
        thunk_FUN_004f1610(this_00,'\0');
      }
    }
    else {
      this_00->field_0028 = 5;
      FUN_006e6080(this_00,2,*(undefined4 *)&this_00->field_0x302,(undefined4 *)&this_00->field_0x18
                  );
      local_8 = (byte *)((uint)local_8 & 0xffffff00);
      pcVar12 = &this_00->field_0xbfe;
      do {
        if (*pcVar12 != '\0') {
          thunk_FUN_004f17d0(this_00,0,(byte)local_8);
        }
        bVar3 = (byte)local_8 + 1;
        pcVar12 = pcVar12 + 1;
        local_8 = (byte *)CONCAT31(local_8._1_3_,bVar3);
      } while (bVar3 < 6);
      thunk_FUN_004f1610(this_00,'\0');
      thunk_FUN_0054a8d0(DAT_00802a30);
    }
    iVar5 = 3;
    bVar18 = true;
    psVar13 = (short *)&this_00->field_0xc04;
    psVar17 = local_73 + 3;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar18 = *psVar13 == *psVar17;
      psVar13 = psVar13 + 1;
      psVar17 = psVar17 + 1;
    } while (bVar18);
    if ((!bVar18) || (this_00->field_0xbfc != local_75)) {
      thunk_FUN_004f4570(this_00,'\0',(int)&this_00->field_0xbf5,(int)&local_7c);
    }
  }
  else {
    SetControlObj(this_00,'\x01');
  }
  if (((this_00->field_0xc0a != local_67) || (this_00->field_0xbfc != local_75)) &&
     (*(int *)&this_00->field_0x9c4 != 0)) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0xbfc == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)(byte)this_00->field_0xc0a;
    }
    *(uint *)&this_00->field_0x2c = uVar6;
    FUN_006e6080(this_00,2,*(undefined4 *)&this_00->field_0x9c4,(undefined4 *)&this_00->field_0x18);
  }
  if (((*(int *)&this_00->field_0xbf5 == 0x43) || (*(int *)&this_00->field_0xbf5 == 0x4c)) &&
     ((this_00->field_0xc11 != local_60[0] || (this_00->field_0xbfc != local_75)))) {
    this_00->field_0028 = 0x20;
    if (this_00->field_0xbfc == '\0') {
      iVar5 = 0;
    }
    else {
      iVar5 = (-(uint)(this_00->field_0xc11 != '\0') & 2) + 1;
    }
    *(int *)&this_00->field_0x2c = iVar5;
    FUN_006e6080(this_00,2,*(undefined4 *)&this_00->field_0x30c,(undefined4 *)&this_00->field_0x18);
  }
  switch(*(undefined4 *)&this_00->field_0xbf5) {
  case 0x32:
  case 0x40:
  case 0x44:
  case 0x49:
    if ((*(int *)&this_00->field_0xc12 == local_60._1_4_) && (this_00->field_0xc26 == local_4b)) {
      iVar5 = (*(int *)(this_00->field_0194 + 4) - *(int *)(*(int *)&this_00->field_0x9ed + 4)) / 2;
      if (this_00->field_0xc24 != local_4d[0]) {
        FUN_006b4170(this_00->field_0194,0,iVar5 + 0x36,0x5d,7,0x21,0);
        bVar3 = this_00->field_0xc24;
        cVar9 = (char)(((uint)bVar3 * 0x21) / 100);
        local_c = CONCAT31(local_c._1_3_,cVar9);
        if ((bVar3 != 0) && (cVar9 == '\0')) {
          local_c = CONCAT31(local_c._1_3_,1);
        }
        if (bVar3 < 0x46) {
          iVar11 = (-(uint)(bVar3 < 0x14) & 5) + 5;
        }
        else {
          iVar11 = 0;
        }
        uVar6 = local_c & 0xff;
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar5 + 0x37,0x7e - uVar6,
                   *(int *)&this_00->field_0x28a,0,iVar11,
                   *(int *)(*(int *)&this_00->field_0x28a + 8) - uVar6,5,uVar6);
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar5 + 0x3f,0x5c,
                   *(int *)&this_00->field_0x9ed,0,0x3f,0xc,0x75,0x11);
        Library::DKW::WGR::FUN_006b55f0
                  ((undefined4 *)this_00->field_0194,0,iVar5 + 0x3f,0x6c,
                   *(int *)&this_00->field_0x9ed,0,0x3f,0x1c,0x44,0x13);
        PaintDamageXY(this_00,this_00->field_0194,iVar5 + 0x41,0x5d,
                      CONCAT31((int3)((uint)extraout_EDX_00 >> 8),this_00->field_0xc24),0x2714);
        PaintCostsXY(this_00,this_00->field_0194,iVar5 + 0x41,0x68,*(ushort *)&this_00->field_0xc1c,
                     *(ushort *)&this_00->field_0xc20,4,2);
        if (-1 < (int)*(uint *)&this_00->field_0x15c) {
          Library::DKW::DDX::FUN_006b3640
                    (DAT_008075a8,*(uint *)&this_00->field_0x15c,0xffffffff,
                     *(uint *)&this_00->field_0x50,*(uint *)&this_00->field_0xa8);
        }
      }
      if ((*(int *)&this_00->field_0xbf5 != 0x44) || (*(ushort *)&this_00->field_0xc34 == local_3d))
      goto switchD_0050858c_caseD_3b;
      thunk_FUN_00540760((undefined4 *)this_00->field_0194,
                         (((undefined4 *)this_00->field_0194)[1] -
                         *(int *)(*(byte **)&this_00->field_0xa01 + 4)) / 2,0x37,'\x01',
                         *(byte **)&this_00->field_0xa01);
      uVar6 = (uint)*(ushort *)&this_00->field_0xc34;
      uVar8 = FUN_006b0140(0x2725,DAT_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__1_s__0_d_007c286c,uVar8,uVar6);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1b8,this_00->field_0194,0,0x56,0x39,0x6d,0x15)
      ;
      ccFntTy::WrTxt(*(ccFntTy **)&this_00->field_0x1b8,&DAT_0080f33a,-2,-1,0,-1,-1);
      uVar6 = *(uint *)&this_00->field_0x15c;
      if ((int)uVar6 < 0) goto switchD_0050858c_caseD_3b;
      uVar20 = *(uint *)&this_00->field_0xa8;
      uVar19 = *(uint *)&this_00->field_0x50;
      goto LAB_0050918d;
    }
    iVar5 = 0;
    goto LAB_00508b35;
  case 0x33:
    if ((*(int *)&this_00->field_0xc12 == local_60._1_4_) &&
       (*(int *)&this_00->field_0xc16 == local_5b)) {
      iVar5 = 0x3a;
      local_c = 2;
      local_18 = (ushort *)&this_00->field_0xc1c;
      local_10 = local_4d;
      local_8 = &this_00->field_0xc24;
      iVar11 = (*(int *)(this_00->field_0194 + 4) - *(int *)(*(int *)&this_00->field_0x9ed + 4)) / 2
      ;
      do {
        if (*local_8 != *local_10) {
          FUN_006b4170(this_00->field_0194,0,iVar11 + 0x36,iVar5,7,0x21,0);
          bVar3 = *local_8;
          local_1c = CONCAT31(local_1c._1_3_,bVar3);
          cVar9 = (char)(((uint)bVar3 * 0x21) / 100);
          local_20 = CONCAT31(local_20._1_3_,cVar9);
          if ((bVar3 != 0) && (cVar9 == '\0')) {
            local_20 = CONCAT31(local_20._1_3_,1);
          }
          if (bVar3 < 0x46) {
            local_14 = (-(uint)(bVar3 < 0x14) & 5) + 5;
          }
          else {
            local_14 = 0;
          }
          uVar6 = local_20 & 0xff;
          Library::DKW::WGR::FUN_006b55f0
                    ((undefined4 *)this_00->field_0194,0,iVar11 + 0x37,(iVar5 - uVar6) + 0x21,
                     *(int *)&this_00->field_0x28a,0,local_14,
                     *(int *)(*(int *)&this_00->field_0x28a + 8) - uVar6,5,uVar6);
          Library::DKW::WGR::FUN_006b55f0
                    ((undefined4 *)this_00->field_0194,0,iVar11 + 0x3f,iVar5 + -1,
                     *(int *)&this_00->field_0x9ed,0,0x3f,0xc,0x75,0x11);
          Library::DKW::WGR::FUN_006b55f0
                    ((undefined4 *)this_00->field_0194,0,iVar11 + 0x3f,iVar5 + 0xf,
                     *(int *)&this_00->field_0x9ed,0,0x3f,0x1c,0x44,0x13);
          PaintDamageXY(this_00,this_00->field_0194,iVar11 + 0x41,iVar5,
                        CONCAT31((int3)((uint)extraout_ECX >> 8),'d' - *local_8),0x36b1);
          PaintCostsXY(this_00,this_00->field_0194,iVar11 + 0x41,iVar5 + 0xb,*local_18,local_18[2],4
                       ,2);
          if (-1 < (int)*(uint *)&this_00->field_0x15c) {
            Library::DKW::DDX::FUN_006b3640
                      (DAT_008075a8,*(uint *)&this_00->field_0x15c,0xffffffff,
                       *(uint *)&this_00->field_0x50,*(uint *)&this_00->field_0xa8);
          }
        }
        local_18 = local_18 + 1;
        local_10 = local_10 + 1;
        local_8 = local_8 + 1;
        iVar5 = iVar5 + 0x23;
        local_c = local_c + -1;
      } while (local_c != 0);
      local_c = 0;
      goto switchD_0050858c_caseD_3b;
    }
    break;
  case 0x34:
    PaintMunition(this_00,(*(int *)(this_00->field_0194 + 4) -
                          *(int *)(*(int *)&this_00->field_0x9f9 + 4)) / 2);
    local_10 = &this_00->field_0xa2e;
    iVar5 = 0;
    piVar14 = (int *)&this_00->field_0xa15;
    do {
      if (*piVar14 != 0) {
        if (DAT_0080874e == '\x01') {
          GVar4 = (this_00->field_09D4 != '\x01') + CASE_1;
        }
        else {
          GVar4 = CASE_2 - (this_00->field_09D4 != '\x01');
        }
        uVar8 = thunk_FUN_00525ef0(GVar4,(char)iVar5);
        *(undefined4 *)local_10 = uVar8;
        if (this_00->field_0xbfc == local_75) {
          this_00->field_0028 = 5;
          iVar11 = *piVar14;
        }
        else {
          this_00->field_0028 = 0x20;
          *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0xbfc != '\0');
          iVar11 = *piVar14;
        }
        FUN_006e6080(this_00,2,iVar11,(undefined4 *)&this_00->field_0x18);
      }
      iVar5 = iVar5 + 1;
      local_10 = local_10 + 0x27;
      piVar14 = piVar14 + 1;
    } while (iVar5 < 6);
    uVar6 = *(uint *)&this_00->field_0x15c;
    if ((int)uVar6 < 0) goto switchD_0050858c_caseD_3b;
    uVar20 = *(uint *)&this_00->field_0xa8;
    uVar19 = *(uint *)&this_00->field_0x50;
    goto LAB_0050918d;
  case 0x35:
    iVar5 = (((undefined4 *)this_00->field_0194)[1] - *(int *)(*(int *)&this_00->field_0x9ed + 4)) /
            2;
    if (this_00->field_0xc31 == local_40) {
      if (this_00->field_0xc31 == '\0') {
        if (*(short *)&this_00->field_0xc2f != local_42) {
          PaintCtrlObj(this_00,1);
          iVar5 = *(int *)&this_00->field_0x302;
          if (iVar5 != 0) {
            puVar16 = local_e4;
            for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
              *puVar16 = 0;
              puVar16 = puVar16 + 1;
            }
            local_d4 = 5;
            FUN_006e6080(this_00,2,iVar5,local_e4);
          }
        }
        goto switchD_0050858c_caseD_3b;
      }
      if (this_00->field_0xc33 == local_3e) goto switchD_0050858c_caseD_3b;
      Library::DKW::WGR::FUN_006b55f0
                ((undefined4 *)this_00->field_0194,0,iVar5 + 0x39,0x65,*(int *)&this_00->field_0x9ed
                 ,0,0x39,0x15,0x4c,0x1b);
      PaintPerRes(this_00,iVar5);
      uVar6 = *(uint *)&this_00->field_0x15c;
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
    if (this_00->field_0xc29 == local_48) goto switchD_0050858c_caseD_3b;
    iVar5 = (*(int *)(this_00->field_0194 + 4) - *(int *)(*(int *)&this_00->field_0x9f5 + 4)) / 2;
    if (this_00->field_0xc29 == -1) {
      this_00->field_0xc29 = 0;
    }
    if (0x28 < (byte)this_00->field_0xc29) {
      this_00->field_0xc29 = 0x28;
    }
    local_8 = (byte *)((uint)local_8._1_3_ << 8);
    if (this_00->field_0xc29 != '\0') {
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,3);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5 + 6 + ((uint)local_8 & 0xff) * 4,
                           0x75,'\x01',pbVar7);
        bVar3 = (byte)local_8 + 1;
        local_8 = (byte *)CONCAT31(local_8._1_3_,bVar3);
      } while (bVar3 < (byte)this_00->field_0xc29);
    }
    if ((byte)local_8 < 0x28) {
      iVar11 = 0x28 - ((uint)local_8 & 0xff);
      iVar5 = iVar5 + 6 + ((uint)local_8 & 0xff) * 4;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x75,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    uVar6 = *(uint *)&this_00->field_0x15c;
    goto joined_r0x00508b00;
  case 0x38:
  case 0x39:
  case 0x4f:
    PaintMineInf(this_00,(*(int *)(this_00->field_0194 + 4) -
                         *(int *)(*(int *)&this_00->field_0x9ed + 4)) / 2);
    uVar6 = *(uint *)&this_00->field_0x15c;
joined_r0x00508b00:
    if (-1 < (int)uVar6) {
LAB_00509179:
      uVar20 = *(uint *)&this_00->field_0xa8;
      uVar19 = *(uint *)&this_00->field_0x50;
LAB_0050918d:
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,uVar6,0xffffffff,uVar19,uVar20);
    }
    goto switchD_0050858c_caseD_3b;
  case 0x3a:
    iVar5 = (*(int *)(this_00->field_0194 + 4) - *(int *)(*(int *)&this_00->field_0x9ed + 4)) / 2;
    if (this_00->field_0xc3a != local_37) {
      local_8 = (byte *)((uint)local_8._1_3_ << 8);
      if (this_00->field_0xc3a != '\0') {
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,3);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,
                             iVar5 + 0x70 + ((uint)local_8 & 0xff) * 4,0x54,'\x01',pbVar7);
          bVar3 = (byte)local_8 + 1;
          local_8 = (byte *)CONCAT31(local_8._1_3_,bVar3);
        } while (bVar3 < (byte)this_00->field_0xc3a);
      }
      if ((byte)local_8 < 0xf) {
        local_c = 0xf - ((uint)local_8 & 0xff);
        iVar11 = iVar5 + 0x70 + ((uint)local_8 & 0xff) * 4;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar11,0x54,'\x01',pbVar7);
          iVar11 = iVar11 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (-1 < (int)*(uint *)&this_00->field_0x15c) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)&this_00->field_0x15c,0xffffffff,
                   *(uint *)&this_00->field_0x50,*(uint *)&this_00->field_0xa8);
      }
    }
    if (this_00->field_0xc3b != local_36) {
      local_8 = (byte *)((uint)local_8 & 0xffffff00);
      if (this_00->field_0xc3b != '\0') {
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,3);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,
                             iVar5 + 0x70 + ((uint)local_8 & 0xff) * 4,0x5f,'\x01',pbVar7);
          bVar3 = (byte)local_8 + 1;
          local_8 = (byte *)CONCAT31(local_8._1_3_,bVar3);
        } while (bVar3 < (byte)this_00->field_0xc3b);
      }
      if ((byte)local_8 < 0xf) {
        local_c = 0xf - ((uint)local_8 & 0xff);
        iVar11 = iVar5 + 0x70 + ((uint)local_8 & 0xff) * 4;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar11,0x5f,'\x01',pbVar7);
          iVar11 = iVar11 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (-1 < (int)*(uint *)&this_00->field_0x15c) {
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,*(uint *)&this_00->field_0x15c,0xffffffff,
                   *(uint *)&this_00->field_0x50,*(uint *)&this_00->field_0xa8);
      }
    }
    if (*(ushort *)&this_00->field_0xc34 == local_3d) goto switchD_0050858c_caseD_3b;
    local_8 = (byte *)((uint)local_8 & 0xffffff00);
    local_c = ((uint)*(ushort *)&this_00->field_0xc34 * 0x28) / 400;
    if (local_c != 0) {
      uVar6 = 0;
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,2);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5 + 0xb + uVar6 * 4,0x76,'\x01',
                           pbVar7);
        bVar3 = (byte)local_8 + 1;
        local_8 = (byte *)CONCAT31(local_8._1_3_,bVar3);
        uVar6 = (uint)bVar3;
      } while (uVar6 < local_c);
    }
    if ((byte)local_8 < 0x28) {
      iVar5 = iVar5 + 0xb + ((uint)local_8 & 0xff) * 4;
      iVar11 = 0x28 - ((uint)local_8 & 0xff);
      do {
        pbVar7 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
        thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x76,'\x01',pbVar7);
        iVar5 = iVar5 + 4;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    uVar6 = *(uint *)&this_00->field_0x15c;
    goto joined_r0x00509177;
  default:
    goto switchD_0050858c_caseD_3b;
  case 0x3c:
    cVar9 = this_00->field_0xc3c;
    local_c = CONCAT31(local_c._1_3_,cVar9);
    if (local_35 != cVar9) {
      PaintCtrlObj(this_00,1);
      SetControlObj(this_00,'\x01');
      thunk_FUN_00506040((int)this_00);
      goto switchD_0050858c_caseD_3b;
    }
    iVar5 = *(int *)&this_00->field_0x9ed;
    puVar16 = (undefined4 *)this_00->field_0194;
    iVar11 = (puVar16[1] - *(int *)(iVar5 + 4)) / 2;
    if (cVar9 == '\x01') {
      Library::DKW::WGR::FUN_006b55f0(puVar16,0,iVar11 + 0x39,0x65,iVar5,0,0x39,0x15,0x4c,0x1b);
      PaintDamageXY(this_00,this_00->field_0194,iVar11 + 0x39,0x65,
                    CONCAT31((int3)((uint)extraout_ECX_00 >> 8),this_00->field_0xc3d),0x2714);
      local_14 = 0;
      uVar6 = (uint)(*(int *)&this_00->field_0xc3d * 0x28) / 100;
      if (uVar6 != 0) {
        iVar5 = iVar11 + 0xb;
        local_14 = uVar6;
        local_c = uVar6;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,3);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x5c,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
          local_c = local_c - 1;
        } while (local_c != 0);
      }
      if (local_14 < 0x28) {
        iVar5 = iVar11 + 0xb + local_14 * 4;
        iVar11 = 0x28 - local_14;
        do {
          pbVar7 = (byte *)FUN_0070b3a0(*(int *)&this_00->field_0x2b6,0);
          thunk_FUN_00540760((undefined4 *)this_00->field_0194,iVar5,0x5c,'\x01',pbVar7);
          iVar5 = iVar5 + 4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
    else if (cVar9 == '\x02') {
      Library::DKW::WGR::FUN_006b55f0
                (puVar16,0,iVar11,0x71,iVar5,0,0,0x21,*(int *)(iVar5 + 4),
                 *(int *)(iVar5 + 8) + -0x21);
      wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c1ae4,*(undefined4 *)&this_00->field_0xc3d);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00->field_0x1bc,this_00->field_0194,0,iVar11,0x71,
                       *(int *)(*(int *)&this_00->field_0x9ed + 4),
                       *(int *)(*(int *)&this_00->field_0x9ed + 8) + -0x21);
      ccFntTy::WrStr(*(ccFntTy **)&this_00->field_0x1bc,&DAT_0080f33a,-1,-1,0);
    }
    uVar6 = *(uint *)&this_00->field_0x15c;
joined_r0x00509177:
    if ((int)uVar6 < 0) goto switchD_0050858c_caseD_3b;
    goto LAB_00509179;
  case 0x50:
    iVar5 = 3;
    bVar18 = true;
    psVar13 = (short *)&this_00->field_0xc11;
    psVar17 = (short *)local_60;
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar18 = *psVar13 == *psVar17;
      psVar13 = psVar13 + 1;
      psVar17 = psVar17 + 1;
    } while (bVar18);
    if (!bVar18) {
      piVar14 = (int *)&this_00->field_0xa15;
      iVar5 = 6;
      do {
        if (*piVar14 != 0) {
          if (this_00->field_0xbfc == local_75) {
            this_00->field_0028 = 5;
            iVar11 = *piVar14;
          }
          else {
            this_00->field_0028 = 0x20;
            *(uint *)&this_00->field_0x2c = (uint)(this_00->field_0xbfc != '\0');
            iVar11 = *piVar14;
          }
          FUN_006e6080(this_00,2,iVar11,(undefined4 *)&this_00->field_0x18);
        }
        piVar14 = piVar14 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    goto switchD_0050858c_caseD_3b;
  }
  iVar5 = 1;
LAB_00508b35:
  PaintCtrlObj(this_00,iVar5);
  SetControlObj(this_00,'\0');
  thunk_FUN_00506040((int)this_00);
switchD_0050858c_caseD_3b:
  if (*(int *)&this_00->field_0xc4d == local_24) {
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  PaintIDSObj(this_00);
  g_currentExceptionFrame = local_c4.previous;
  return;
switchD_00508349_caseD_dd:
  PaintCtrlObj(this_00,1);
  iVar5 = *(int *)&this_00->field_0x302;
  if (iVar5 == 0) {
    g_currentExceptionFrame = local_c4.previous;
    return;
  }
  puVar16 = local_104;
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar16 = 0;
    puVar16 = puVar16 + 1;
  }
  local_f4 = 5;
  FUN_006e6080(this_00,2,iVar5,local_104);
  g_currentExceptionFrame = local_c4.previous;
  return;
}

