
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::PaintTV
   
   [STSwitchEnumApplier] Switch target field_0260 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0260State. Cases:
   CASE_1=1;CASE_3=3;CASE_4=4;CASE_5=5 */

void __thiscall CPanelTy::PaintTV(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *this_00;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined1 *puVar5;
  char *text;
  uint uVar6;
  char *pcVar7;
  ushort *puVar8;
  undefined3 extraout_var;
  short *psVar9;
  int iVar10;
  byte bVar11;
  char cVar12;
  int *piVar13;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar14;
  byte *pbVar15;
  cMf32 *pcVar16;
  undefined4 *puVar17;
  InternalExceptionFrame local_74;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  CPanelTy *local_24;
  undefined1 *local_20;
  int *local_1c;
  byte *local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  byte local_5;
  
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_24 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_24;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x2c9,0,iVar4,&DAT_007a4ccc
                                ,s_CPanelTy__PaintTV_007c2154);
    if (iVar10 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x2c9);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar11 = 0;
  local_c = local_c & 0xffffff00;
  do {
    uVar14 = local_c & 0xff;
    local_10 = &this_00->field_02EC + uVar14;
    switch((&this_00->field_02EC)[uVar14]) {
    case 1:
      if ((DAT_0080731a != 0) &&
         (0x41 < (uint)(this_00->field_0038 - (&this_00->field_02EE)[uVar14]))) {
        (&this_00->field_02EE)[uVar14] = this_00->field_0038;
        bVar11 = (&this_00->field_02EA)[uVar14] + 1;
        (&this_00->field_02EA)[uVar14] = bVar11;
        if (*(short *)(&this_00->field_02E2)[uVar14] <= (short)(ushort)bVar11) {
          (&this_00->field_02EA)[uVar14] = 0;
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar11 = -((char)local_c != '\0');
        local_28 = CONCAT31(local_28._1_3_,bVar11) & 0xffffff08;
        if ((bVar11 & 8) < 0xb) {
          uVar6 = bVar11 & 8;
          uVar14 = (&this_00->field_0148)[uVar6];
joined_r0x004f81d1:
          if (-1 < (int)uVar14) {
            Library::DKW::DDX::FUN_006b3640
                      (DAT_008075a8,uVar14,0xffffffff,(&this_00->field_003C)[uVar6],
                       *(uint *)(&this_00->field_0x94 + uVar6 * 4));
          }
        }
      }
      break;
    case 3:
      if (0x31 < (uint)(this_00->field_0038 - (&this_00->field_02EE)[uVar14])) {
        pcVar7 = &this_00->field_02EA + uVar14;
        (&this_00->field_02EE)[uVar14] = this_00->field_0038;
        if (*pcVar7 == '\0') {
          puVar5 = &this_00->field_0B63;
          if (bVar11 != 0) {
            puVar5 = &this_00->field_0C51;
          }
          puVar17 = (undefined4 *)0x0;
          iVar10 = 0;
          iVar4 = 1;
          bVar11 = 0;
          uVar6 = 6;
          text = thunk_FUN_00526100(puVar5,0);
          puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                             (DAT_00806794,CASE_1F,text,uVar6,bVar11,iVar4,iVar10,puVar17);
          (&this_00->field_02E2)[uVar14] = puVar8;
          *local_10 = 1;
          *pcVar7 = '\0';
          if (this_00->field_023F == (CASE_4|CASE_1)) {
            if ((char)local_c == '\0') {
              cVar12 = this_00->field_02ED;
            }
            else {
              cVar12 = this_00->field_02EC;
            }
            if (cVar12 != '\0') {
              this_00->field_023F = CASE_1;
              ShiftControls(this_00,1);
            }
          }
        }
        else {
          *pcVar7 = *pcVar7 + -1;
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar11 = -((char)local_c != '\0');
        local_1c = (int *)(CONCAT31(local_1c._1_3_,bVar11) & 0xffffff08);
        if ((bVar11 & 8) < 0xb) {
          uVar14 = bVar11 & 8;
          if (-1 < (int)(&this_00->field_0148)[uVar14]) {
            Library::DKW::DDX::FUN_006b3640
                      (DAT_008075a8,(&this_00->field_0148)[uVar14],0xffffffff,
                       (&this_00->field_003C)[uVar14],*(uint *)(&this_00->field_0x94 + uVar14 * 4));
          }
        }
        if (this_00->field_02EA == '\x05') {
          thunk_FUN_005252c0(0xb1);
        }
      }
      break;
    case 4:
      if (0x31 < (uint)(this_00->field_0038 - (&this_00->field_02EE)[uVar14])) {
        pbVar15 = &this_00->field_02EA + uVar14;
        (&this_00->field_02EE)[uVar14] = this_00->field_0038;
        bVar11 = *pbVar15;
        *pbVar15 = bVar11 + 1;
        if ((byte)(bVar11 + 1) == 5) {
          thunk_FUN_005252c0(0xb2);
        }
        if (*(short *)(&this_00->field_02E2)[uVar14] <= (short)(ushort)*pbVar15) {
          *pbVar15 = *pbVar15 - 1;
          *local_10 = 2;
          if (this_00->field_023F == (CASE_4|CASE_2)) {
            if ((char)local_c == '\0') {
              cVar12 = this_00->field_02ED;
            }
            else {
              cVar12 = this_00->field_02EC;
            }
            if (cVar12 != '\0') {
              this_00->field_023F = CASE_4;
              thunk_FUN_005252c0(CASE_B0);
            }
          }
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar11 = -((char)local_c != '\0');
        local_20 = (undefined1 *)(CONCAT31(local_20._1_3_,bVar11) & 0xffffff08);
        if ((bVar11 & 8) < 0xb) {
          uVar6 = bVar11 & 8;
          uVar14 = (&this_00->field_0148)[uVar6];
          goto joined_r0x004f81d1;
        }
      }
      break;
    case 5:
      if (0x41 < (uint)(this_00->field_0038 - (&this_00->field_02EE)[uVar14])) {
        pbVar15 = &this_00->field_02EA + uVar14;
        (&this_00->field_02EE)[uVar14] = this_00->field_0038;
        bVar11 = *pbVar15;
        *pbVar15 = bVar11 + 1;
        local_18 = (byte *)(&this_00->field_02E2 + uVar14);
        if (**(short **)local_18 <= (short)(ushort)(byte)(bVar11 + 1)) {
          puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                             (DAT_00806794,CASE_1F,*(char **)(&this_00->field_0x2f6 + uVar14 * 4),6,
                              0,1,0,(undefined4 *)0x0);
          *(ushort **)local_18 = puVar8;
          *local_10 = 1;
          *pbVar15 = 0;
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar11 = -((char)local_c != '\0');
        local_14 = (undefined1 *)(CONCAT31(local_14._1_3_,bVar11) & 0xffffff08);
        if ((bVar11 & 8) < 0xb) {
          uVar6 = bVar11 & 8;
          uVar14 = (&this_00->field_0148)[uVar6];
          goto joined_r0x004f81d1;
        }
      }
    }
    bVar11 = (char)local_c + 1;
    local_c = CONCAT31(local_c._1_3_,bVar11);
  } while (bVar11 < 2);
  local_5 = 0;
  if (g_nWidth_00806730 == 0x400) {
    local_5 = 2;
  }
  else if (g_nWidth_00806730 == 0x500) {
    local_5 = 6;
  }
  local_10 = (undefined1 *)((uint)local_10 & 0xffffff00);
  if (local_5 != 0) {
    local_18 = &this_00->field_0D3B;
    local_20 = &this_00->field_0xc87;
    local_1c = &this_00->field_0D53;
    do {
      local_c = local_c & 0xffffff00;
      local_14 = local_20;
      piVar13 = local_1c;
      pbVar15 = local_18;
      do {
        bVar11 = pbVar15[0xc];
        if (bVar11 == 1) {
          if ((DAT_0080731a != 0) && (0x41 < (uint)(this_00->field_0038 - *piVar13))) {
            *piVar13 = this_00->field_0038;
            bVar11 = *pbVar15;
            *pbVar15 = bVar11 + 1;
            if (*(short *)piVar13[-0x12] <= (short)(ushort)(byte)(bVar11 + 1)) {
              *pbVar15 = 0;
            }
            thunk_FUN_004f1c80(this_00,local_c,(uint)local_10);
            bVar11 = ((char)local_c == '\0') + 9;
            local_30 = CONCAT31(local_30._1_3_,bVar11);
            if (bVar11 < 0xb) {
              uVar6 = (uint)bVar11;
              uVar14 = (&this_00->field_0148)[uVar6];
              goto joined_r0x004f861b;
            }
          }
        }
        else if (bVar11 == 3) {
          if (0x31 < (uint)(this_00->field_0038 - *piVar13)) {
            *piVar13 = this_00->field_0038;
            if (*pbVar15 == 0) {
              puVar17 = (undefined4 *)0x0;
              iVar10 = 0;
              iVar4 = 1;
              bVar11 = 0;
              uVar14 = 6;
              pcVar7 = (char *)thunk_FUN_004f1d20(local_14);
              puVar8 = Library::Ourlib::MFRLOAD::mfRLoad
                                 (DAT_00806794,CASE_1F,pcVar7,uVar14,bVar11,iVar4,iVar10,puVar17);
              piVar13[-0x12] = (int)puVar8;
              pbVar15[0xc] = 1;
              *pbVar15 = 0;
            }
            else {
              *pbVar15 = *pbVar15 - 1;
            }
            thunk_FUN_004f1c80(this_00,local_c,(uint)local_10);
            bVar11 = ((char)local_c == '\0') + 9;
            local_2c = CONCAT31(local_2c._1_3_,bVar11);
            if (bVar11 < 0xb) {
              uVar6 = (uint)bVar11;
              uVar14 = (&this_00->field_0148)[uVar6];
              goto joined_r0x004f861b;
            }
          }
        }
        else if ((bVar11 == 4) && (0x31 < (uint)(this_00->field_0038 - *piVar13))) {
          *piVar13 = this_00->field_0038;
          bVar11 = *pbVar15;
          bVar2 = bVar11 + 1;
          *pbVar15 = bVar2;
          if (*(short *)piVar13[-0x12] <= (short)(ushort)bVar2) {
            *pbVar15 = bVar11;
            pbVar15[0xc] = 2;
          }
          thunk_FUN_004f1c80(this_00,local_c,(uint)local_10);
          bVar11 = ((char)local_c == '\0') + 9;
          local_28 = CONCAT31(local_28._1_3_,bVar11);
          if (bVar11 < 0xb) {
            uVar6 = (uint)bVar11;
            uVar14 = (&this_00->field_0148)[uVar6];
joined_r0x004f861b:
            if (-1 < (int)uVar14) {
              Library::DKW::DDX::FUN_006b3640
                        (DAT_008075a8,uVar14,0xffffffff,(&this_00->field_003C)[uVar6],
                         *(uint *)(&this_00->field_0x94 + uVar6 * 4));
            }
          }
        }
        bVar11 = (char)local_c + 1;
        local_14 = local_14 + 0x42;
        piVar13 = piVar13 + 6;
        pbVar15 = pbVar15 + 6;
        local_c = CONCAT31(local_c._1_3_,bVar11);
      } while (bVar11 < 2);
      bVar11 = (char)local_10 + 1;
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
      local_20 = local_20 + 0xb;
      local_10 = (undefined1 *)CONCAT31(local_10._1_3_,bVar11);
    } while (bVar11 < local_5);
  }
  bVar3 = FUN_006b33f0((int)DAT_008075a8,this_00->field_017C);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    g_currentExceptionFrame = local_74.previous;
    return;
  }
  switch(this_00->field_0260) {
  case CASE_1:
    if ((DAT_0080731a == 0) || ((uint)(this_00->field_0038 - this_00->field_0261) < 0x42))
    goto cf_switch_join_004F88ED;
    this_00->field_0261 = this_00->field_0038;
    bVar11 = this_00->field_025F + 1;
    this_00->field_025F = bVar11;
    if ((short)(ushort)bVar11 < *(short *)this_00->field_025B) goto LAB_004f88e6;
    break;
  default:
    goto cf_switch_join_004F88ED;
  case CASE_3:
    if (0x31 < (uint)(this_00->field_0038 - this_00->field_0261)) {
      this_00->field_0261 = this_00->field_0038;
      if (this_00->field_025F == '\0') {
        if (this_00->field_025B != 0) {
          FUN_0070b600(&this_00->field_025B);
        }
        psVar9 = (short *)0x1;
        bVar2 = 0;
        bVar11 = 6;
        pcVar7 = (char *)thunk_FUN_005260b0(0,0,0);
        psVar9 = Library::Ourlib::MFIMG::mfQmtLoad(DAT_00806790,pcVar7,bVar11,bVar2,psVar9);
        this_00->field_025B = psVar9;
        this_00->field_0260 = CASE_1;
        this_00->field_025F = 0;
      }
      else {
        this_00->field_025F = this_00->field_025F + -1;
      }
      thunk_FUN_004f1950((int)this_00);
      if (this_00->field_025F == '\x05') {
        thunk_FUN_005252c0(0xb1);
      }
    }
    goto cf_switch_join_004F88ED;
  case CASE_4:
    if ((uint)(this_00->field_0038 - this_00->field_0261) < 0x32) goto cf_switch_join_004F88ED;
    this_00->field_0261 = this_00->field_0038;
    cVar12 = this_00->field_025F + '\x01';
    this_00->field_025F = cVar12;
    if (cVar12 == '\x05') {
      thunk_FUN_005252c0(0xb2);
    }
    if (*(short *)this_00->field_025B <= (short)(ushort)(byte)this_00->field_025F) {
      this_00->field_0260 = 2;
      this_00->field_025F = this_00->field_025F - 1;
    }
    goto LAB_004f88e6;
  case CASE_5:
    if ((uint)(this_00->field_0038 - this_00->field_0261) < 0x42) goto cf_switch_join_004F88ED;
    puVar17 = &this_00->field_025B;
    bVar11 = this_00->field_025F + 1;
    this_00->field_0261 = this_00->field_0038;
    this_00->field_025F = bVar11;
    if ((short)(ushort)bVar11 < *(short *)*puVar17) goto LAB_004f88e6;
    if ((short *)*puVar17 != (short *)0x0) {
      FUN_0070b600(puVar17);
    }
    pcVar16 = DAT_00806790;
    if (this_00->field_0285 == '\0') {
      psVar9 = Library::Ourlib::MFIMG::mfQmtLoad
                         (g_cMf32_00806758,&this_00->field_0x265,6,0,(short *)0x0);
      *puVar17 = psVar9;
      pcVar16 = g_cMf32_00806798;
      if (psVar9 == (short *)0x0) goto LAB_004f8860;
    }
    else {
LAB_004f8860:
      psVar9 = Library::Ourlib::MFIMG::mfQmtLoad(pcVar16,&this_00->field_0x265,6,0,(short *)0x0);
      *puVar17 = psVar9;
    }
    if (*puVar17 == 0) {
      psVar9 = (short *)0x1;
      bVar2 = 0;
      bVar11 = 6;
      pcVar7 = (char *)thunk_FUN_005260b0(0,0,0);
      psVar9 = Library::Ourlib::MFIMG::mfQmtLoad(DAT_00806790,pcVar7,bVar11,bVar2,psVar9);
      *puVar17 = psVar9;
    }
    this_00->field_0260 = CASE_1;
  }
  this_00->field_025F = 0;
LAB_004f88e6:
  thunk_FUN_004f1950((int)this_00);
cf_switch_join_004F88ED:
  if (((this_00->field_01D8 != 0) && ((*(byte *)&PTR_00802a38->field_00E4 & 1) != 0)) &&
     (iVar4 = *(int *)(this_00->field_01D8 + 4), iVar4 < this_00->field_01DC + -2)) {
    FUN_006b4170((AnonShape_006C7610_838EDECF *)this_00->field_01B4,0,100,5,0x226,0x55,0);
    iVar10 = FUN_007140e0((void *)this_00->field_01D8,1,'\0');
    if (iVar10 != 0) {
      FUN_006b5440(this_00->field_01B4,0,100,5,iVar10,0,0xff);
    }
    FUN_006b35d0(DAT_008075a8,this_00->field_017C);
    if (this_00->field_01E0 != '\0') {
      uVar14 = iVar4 + 1U & 0x80000001;
      bVar3 = uVar14 == 0;
      if ((int)uVar14 < 0) {
        bVar3 = (uVar14 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar3) {
        thunk_FUN_005252c0(0x1e);
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return;
}

