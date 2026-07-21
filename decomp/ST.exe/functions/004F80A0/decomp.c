#include "../../pseudocode_runtime.h"


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
  int iVar3;
  undefined1 *puVar4;
  char *text;
  uint uVar5;
  char *pcVar6;
  ushort *puVar7;
  short *psVar8;
  int iVar9;
  byte bVar10;
  char cVar11;
  int *piVar12;
  uint uVar13;
  byte *pbVar14;
  bool bVar15;
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
  iVar3 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
  this_00 = local_24;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x2c9,0,iVar3,&DAT_007a4ccc,
                               s_CPanelTy__PaintTV_007c2154);
    if (iVar9 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x2c9);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  bVar10 = 0;
  local_c = local_c & 0xffffff00;
  do {
    uVar13 = local_c & 0xff;
    local_10 = &this_00->field_02EC + uVar13;
    switch((&this_00->field_02EC)[uVar13]) {
    case 1:
      if ((DAT_0080731a != 0) &&
         (0x41 < (uint)(this_00->field_0038 - (&this_00->field_02EE)[uVar13]))) {
        (&this_00->field_02EE)[uVar13] = this_00->field_0038;
        bVar10 = (&this_00->field_02EA)[uVar13] + 1;
        (&this_00->field_02EA)[uVar13] = bVar10;
        if (*(short *)(&this_00->field_02E2)[uVar13] <= (short)(ushort)bVar10) {
          (&this_00->field_02EA)[uVar13] = 0;
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar10 = -((char)local_c != '\0');
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_28 = CONCAT31(local_28._1_3_,bVar10) & 0xffffff08;
        if ((bVar10 & 8) < 0xb) {
          uVar5 = bVar10 & 8;
          uVar13 = (&this_00->field_0148)[uVar5];
joined_r0x004f81d1:
          if (-1 < (int)uVar13) {
            Library::DKW::DDX::FUN_006b3640
                      (DAT_008075a8,uVar13,0xffffffff,(&this_00->field_003C)[uVar5],
                       *(uint *)(&this_00->field_0x94 + uVar5 * 4));
          }
        }
      }
      break;
    case 3:
      if (0x31 < (uint)(this_00->field_0038 - (&this_00->field_02EE)[uVar13])) {
        pcVar6 = &this_00->field_02EA + uVar13;
        (&this_00->field_02EE)[uVar13] = this_00->field_0038;
        if (*pcVar6 == '\0') {
          puVar4 = &this_00->field_0B63;
          if (bVar10 != 0) {
            puVar4 = &this_00->field_0C51;
          }
          puVar17 = (undefined4 *)0x0;
          iVar9 = 0;
          iVar3 = 1;
          bVar10 = 0;
          uVar5 = 6;
          text = thunk_FUN_00526100(puVar4,0);
          puVar7 = Library::Ourlib::MFRLOAD::mfRLoad
                             (DAT_00806794,CASE_1F,text,uVar5,bVar10,iVar3,iVar9,puVar17);
          (&this_00->field_02E2)[uVar13] = puVar7;
          *local_10 = 1;
          *pcVar6 = '\0';
          if (this_00->field_023F == (CASE_4|CASE_1)) {
            if ((char)local_c == '\0') {
              cVar11 = this_00->field_02ED;
            }
            else {
              cVar11 = this_00->field_02EC;
            }
            if (cVar11 != '\0') {
              this_00->field_023F = CASE_1;
              ShiftControls(this_00,1);
            }
          }
        }
        else {
          *pcVar6 = *pcVar6 + -1;
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar10 = -((char)local_c != '\0');
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_1c = (int *)(CONCAT31(local_1c._1_3_,bVar10) & 0xffffff08);
        if ((bVar10 & 8) < 0xb) {
          uVar13 = bVar10 & 8;
          if (-1 < (int)(&this_00->field_0148)[uVar13]) {
            Library::DKW::DDX::FUN_006b3640
                      (DAT_008075a8,(&this_00->field_0148)[uVar13],0xffffffff,
                       (&this_00->field_003C)[uVar13],*(uint *)(&this_00->field_0x94 + uVar13 * 4));
          }
        }
        if (this_00->field_02EA == '\x05') {
          thunk_FUN_005252c0(0xb1);
        }
      }
      break;
    case 4:
      if (0x31 < (uint)(this_00->field_0038 - (&this_00->field_02EE)[uVar13])) {
        pbVar14 = &this_00->field_02EA + uVar13;
        (&this_00->field_02EE)[uVar13] = this_00->field_0038;
        bVar10 = *pbVar14;
        *pbVar14 = bVar10 + 1;
        if ((byte)(bVar10 + 1) == 5) {
          thunk_FUN_005252c0(0xb2);
        }
        if (*(short *)(&this_00->field_02E2)[uVar13] <= (short)(ushort)*pbVar14) {
          *pbVar14 = *pbVar14 - 1;
          *local_10 = 2;
          if (this_00->field_023F == (CASE_4|CASE_2)) {
            if ((char)local_c == '\0') {
              cVar11 = this_00->field_02ED;
            }
            else {
              cVar11 = this_00->field_02EC;
            }
            if (cVar11 != '\0') {
              this_00->field_023F = CASE_4;
              thunk_FUN_005252c0(CASE_B0);
            }
          }
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar10 = -((char)local_c != '\0');
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_20 = (undefined1 *)(CONCAT31(local_20._1_3_,bVar10) & 0xffffff08);
        if ((bVar10 & 8) < 0xb) {
          uVar5 = bVar10 & 8;
          uVar13 = (&this_00->field_0148)[uVar5];
          goto joined_r0x004f81d1;
        }
      }
      break;
    case 5:
      if (0x41 < (uint)(this_00->field_0038 - (&this_00->field_02EE)[uVar13])) {
        pbVar14 = &this_00->field_02EA + uVar13;
        (&this_00->field_02EE)[uVar13] = this_00->field_0038;
        bVar10 = *pbVar14;
        *pbVar14 = bVar10 + 1;
        local_18 = (byte *)(&this_00->field_02E2 + uVar13);
        if (**(short **)local_18 <= (short)(ushort)(byte)(bVar10 + 1)) {
          puVar7 = Library::Ourlib::MFRLOAD::mfRLoad
                             (DAT_00806794,CASE_1F,*(char **)(&this_00->field_0x2f6 + uVar13 * 4),6,
                              0,1,0,(undefined4 *)0x0);
          *(ushort **)local_18 = puVar7;
          *local_10 = 1;
          *pbVar14 = 0;
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar10 = -((char)local_c != '\0');
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_14 = (undefined1 *)(CONCAT31(local_14._1_3_,bVar10) & 0xffffff08);
        if ((bVar10 & 8) < 0xb) {
          uVar5 = bVar10 & 8;
          uVar13 = (&this_00->field_0148)[uVar5];
          goto joined_r0x004f81d1;
        }
      }
    }
    bVar10 = (char)local_c + 1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = CONCAT31(local_c._1_3_,bVar10);
  } while (bVar10 < 2);
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
      piVar12 = local_1c;
      pbVar14 = local_18;
      do {
        bVar10 = pbVar14[0xc];
        if (bVar10 == 1) {
          if ((DAT_0080731a != 0) && (0x41 < (uint)(this_00->field_0038 - *piVar12))) {
            *piVar12 = this_00->field_0038;
            bVar10 = *pbVar14;
            *pbVar14 = bVar10 + 1;
            if (*(short *)piVar12[-0x12] <= (short)(ushort)(byte)(bVar10 + 1)) {
              *pbVar14 = 0;
            }
            thunk_FUN_004f1c80(this_00,local_c,(uint)local_10);
            bVar10 = ((char)local_c == '\0') + 9;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_30 = CONCAT31(local_30._1_3_,bVar10);
            if (bVar10 < 0xb) {
              uVar5 = (uint)bVar10;
              uVar13 = (&this_00->field_0148)[uVar5];
              goto joined_r0x004f861b;
            }
          }
        }
        else if (bVar10 == 3) {
          if (0x31 < (uint)(this_00->field_0038 - *piVar12)) {
            *piVar12 = this_00->field_0038;
            if (*pbVar14 == 0) {
              puVar17 = (undefined4 *)0x0;
              iVar9 = 0;
              iVar3 = 1;
              bVar10 = 0;
              uVar13 = 6;
              pcVar6 = (char *)thunk_FUN_004f1d20(local_14);
              puVar7 = Library::Ourlib::MFRLOAD::mfRLoad
                                 (DAT_00806794,CASE_1F,pcVar6,uVar13,bVar10,iVar3,iVar9,puVar17);
              piVar12[-0x12] = (int)puVar7;
              pbVar14[0xc] = 1;
              *pbVar14 = 0;
            }
            else {
              *pbVar14 = *pbVar14 - 1;
            }
            thunk_FUN_004f1c80(this_00,local_c,(uint)local_10);
            bVar10 = ((char)local_c == '\0') + 9;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_2c = CONCAT31(local_2c._1_3_,bVar10);
            if (bVar10 < 0xb) {
              uVar5 = (uint)bVar10;
              uVar13 = (&this_00->field_0148)[uVar5];
              goto joined_r0x004f861b;
            }
          }
        }
        else if ((bVar10 == 4) && (0x31 < (uint)(this_00->field_0038 - *piVar12))) {
          *piVar12 = this_00->field_0038;
          bVar10 = *pbVar14;
          bVar2 = bVar10 + 1;
          *pbVar14 = bVar2;
          if (*(short *)piVar12[-0x12] <= (short)(ushort)bVar2) {
            *pbVar14 = bVar10;
            pbVar14[0xc] = 2;
          }
          thunk_FUN_004f1c80(this_00,local_c,(uint)local_10);
          bVar10 = ((char)local_c == '\0') + 9;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_28 = CONCAT31(local_28._1_3_,bVar10);
          if (bVar10 < 0xb) {
            uVar5 = (uint)bVar10;
            uVar13 = (&this_00->field_0148)[uVar5];
joined_r0x004f861b:
            if (-1 < (int)uVar13) {
              Library::DKW::DDX::FUN_006b3640
                        (DAT_008075a8,uVar13,0xffffffff,(&this_00->field_003C)[uVar5],
                         *(uint *)(&this_00->field_0x94 + uVar5 * 4));
            }
          }
        }
        bVar10 = (char)local_c + 1;
        local_14 = local_14 + 0x42;
        piVar12 = piVar12 + 6;
        pbVar14 = pbVar14 + 6;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = CONCAT31(local_c._1_3_,bVar10);
      } while (bVar10 < 2);
      bVar10 = (char)local_10 + 1;
      local_18 = local_18 + 1;
      local_1c = local_1c + 1;
      local_20 = local_20 + 0xb;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_10 = (undefined1 *)CONCAT31(local_10._1_3_,bVar10);
    } while (bVar10 < local_5);
  }
  iVar3 = FUN_006b33f0((int)DAT_008075a8,this_00->field_017C);
  if (iVar3 == 0) {
    g_currentExceptionFrame = local_74.previous;
    return;
  }
  switch(this_00->field_0260) {
  case CASE_1:
    if ((DAT_0080731a == 0) || ((uint)(this_00->field_0038 - this_00->field_0261) < 0x42))
    goto cf_switch_join_004F88ED;
    this_00->field_0261 = this_00->field_0038;
    bVar10 = this_00->field_025F + 1;
    this_00->field_025F = bVar10;
    if ((short)(ushort)bVar10 < *(short *)this_00->field_025B) goto LAB_004f88e6;
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
        psVar8 = (short *)0x1;
        bVar2 = 0;
        bVar10 = 6;
        pcVar6 = (char *)thunk_FUN_005260b0(0,0,0);
        psVar8 = Library::Ourlib::MFIMG::mfQmtLoad(DAT_00806790,pcVar6,bVar10,bVar2,psVar8);
        this_00->field_025B = psVar8;
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
    cVar11 = this_00->field_025F + '\x01';
    this_00->field_025F = cVar11;
    if (cVar11 == '\x05') {
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
    bVar10 = this_00->field_025F + 1;
    this_00->field_0261 = this_00->field_0038;
    this_00->field_025F = bVar10;
    if ((short)(ushort)bVar10 < *(short *)*puVar17) goto LAB_004f88e6;
    if ((short *)*puVar17 != (short *)0x0) {
      FUN_0070b600(puVar17);
    }
    pcVar16 = DAT_00806790;
    if (this_00->field_0285 == '\0') {
      psVar8 = Library::Ourlib::MFIMG::mfQmtLoad
                         (g_cMf32_00806758,&this_00->field_0x265,6,0,(short *)0x0);
      *puVar17 = psVar8;
      pcVar16 = g_cMf32_00806798;
      if (psVar8 == (short *)0x0) goto LAB_004f8860;
    }
    else {
LAB_004f8860:
      psVar8 = Library::Ourlib::MFIMG::mfQmtLoad(pcVar16,&this_00->field_0x265,6,0,(short *)0x0);
      *puVar17 = psVar8;
    }
    if (*puVar17 == 0) {
      psVar8 = (short *)0x1;
      bVar2 = 0;
      bVar10 = 6;
      pcVar6 = (char *)thunk_FUN_005260b0(0,0,0);
      psVar8 = Library::Ourlib::MFIMG::mfQmtLoad(DAT_00806790,pcVar6,bVar10,bVar2,psVar8);
      *puVar17 = psVar8;
    }
    this_00->field_0260 = CASE_1;
  }
  this_00->field_025F = 0;
LAB_004f88e6:
  thunk_FUN_004f1950((int)this_00);
cf_switch_join_004F88ED:
  if (((this_00->field_01D8 != 0) && ((*(byte *)&PTR_00802a38->field_00E4 & 1) != 0)) &&
     (iVar3 = *(int *)(this_00->field_01D8 + 4), iVar3 < this_00->field_01DC + -2)) {
    FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_01B4,0,100,5,0x226,0x55,0);
    iVar9 = FUN_007140e0((void *)this_00->field_01D8,1,'\0');
    if (iVar9 != 0) {
      FUN_006b5440(this_00->field_01B4,0,100,5,iVar9,0,0xff);
    }
    FUN_006b35d0(DAT_008075a8,this_00->field_017C);
    if (this_00->field_01E0 != '\0') {
      uVar13 = iVar3 + 1U & 0x80000001;
      bVar15 = uVar13 == 0;
      if ((int)uVar13 < 0) {
        bVar15 = (uVar13 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar15) {
        thunk_FUN_005252c0(0x1e);
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return;
}

