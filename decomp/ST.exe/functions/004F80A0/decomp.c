#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::PaintTV

   [STSwitchEnumApplier] Switch target field_0260 uses
   /SubmarineTitans/Recovered/Enums/CPanelTy_field_0260State. Cases:
   CASE_1=1;CASE_3=3;CASE_4=4;CASE_5=5 */

void __thiscall CPanelTy::PaintTV(CPanelTy *this)

{
  short **ppsVar1;
  byte *pbVar2;
  code *pcVar3;
  CPanelTy *this_00;
  byte bVar4;
  int iVar5;
  undefined1 *puVar6;
  char *text;
  uint uVar7;
  char *pcVar8;
  ushort *puVar9;
  short *psVar10;
  int iVar11;
  byte bVar12;
  char cVar13;
  int *piVar14;
  uint uVar15;
  ushort **ppuVar16;
  bool bVar17;
  cMf32 *pcVar18;
  undefined4 *puVar19;
  InternalExceptionFrame local_74;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  CPanelTy *local_24;
  undefined1 *local_20;
  int *local_1c;
  ushort **local_18;
  undefined1 *local_14;
  undefined1 *local_10;
  uint local_c;
  byte local_5;

  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_24 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_74.jumpBuffer,0);
  this_00 = local_24;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_74.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x2c9,0,iVar5,"%s"
                                ,"CPanelTy::PaintTV");
    if (iVar11 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x2c9);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  bVar12 = 0;
  local_c = local_c & 0xffffff00;
  do {
    uVar15 = local_c & 0xff;
    local_10 = &this_00->field_02EC + uVar15;
    switch((&this_00->field_02EC)[uVar15]) {
    case 1:
      if ((DAT_0080731a != 0) &&
         (0x41 < (uint)(this_00->field_0038 - (&this_00->field_02EE)[uVar15]))) {
        (&this_00->field_02EE)[uVar15] = this_00->field_0038;
        bVar12 = (&this_00->field_02EA)[uVar15] + 1;
        (&this_00->field_02EA)[uVar15] = bVar12;
        if ((short)*(&this_00->field_02E2)[uVar15] <= (short)(ushort)bVar12) {
          (&this_00->field_02EA)[uVar15] = 0;
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar12 = -((char)local_c != '\0');
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_28 = CONCAT31(local_28._1_3_,bVar12) & 0xffffff08;
        if ((bVar12 & 8) < 0xb) {
          uVar7 = bVar12 & 8;
          uVar15 = (&this_00->field_0148)[uVar7];
joined_r0x004f81d1:
          if (-1 < (int)uVar15) {
            Library::DKW::DDX::FUN_006b3640
                      ((int *)PTR_008075a8,uVar15,0xffffffff,(&this_00->field_003C)[uVar7],
                       (&this_00->field_0094)[uVar7]);
          }
        }
      }
      break;
    case 3:
      if (0x31 < (uint)(this_00->field_0038 - (&this_00->field_02EE)[uVar15])) {
        pcVar8 = &this_00->field_02EA + uVar15;
        (&this_00->field_02EE)[uVar15] = this_00->field_0038;
        if (*pcVar8 == '\0') {
          puVar6 = &this_00->field_0B63;
          if (bVar12 != 0) {
            puVar6 = &this_00->field_0C51;
          }
          puVar19 = (undefined4 *)0x0;
          iVar11 = 0;
          iVar5 = 1;
          bVar12 = 0;
          uVar7 = 6;
          text = thunk_FUN_00526100(puVar6,0);
          puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                             (DAT_00806794,CASE_1F,text,uVar7,bVar12,iVar5,iVar11,puVar19);
          (&this_00->field_02E2)[uVar15] = puVar9;
          *local_10 = 1;
          *pcVar8 = '\0';
          if (this_00->field_023F == (CASE_4|CASE_1)) {
            if ((char)local_c == '\0') {
              cVar13 = this_00->field_02ED;
            }
            else {
              cVar13 = this_00->field_02EC;
            }
            if (cVar13 != '\0') {
              this_00->field_023F = CASE_1;
              ShiftControls(this_00,1);
            }
          }
        }
        else {
          *pcVar8 = *pcVar8 + -1;
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar12 = -((char)local_c != '\0');
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_1c = (int *)(CONCAT31(local_1c._1_3_,bVar12) & 0xffffff08);
        if ((bVar12 & 8) < 0xb) {
          uVar15 = bVar12 & 8;
          if (-1 < (&this_00->field_0148)[uVar15]) {
            Library::DKW::DDX::FUN_006b3640
                      ((int *)PTR_008075a8,(&this_00->field_0148)[uVar15],0xffffffff,
                       (&this_00->field_003C)[uVar15],(&this_00->field_0094)[uVar15]);
          }
        }
        if (this_00->field_02EA == '\x05') {
          thunk_FUN_005252c0(0xb1);
        }
      }
      break;
    case 4:
      if (0x31 < (uint)(this_00->field_0038 - (&this_00->field_02EE)[uVar15])) {
        pbVar2 = &this_00->field_02EA + uVar15;
        (&this_00->field_02EE)[uVar15] = this_00->field_0038;
        bVar12 = *pbVar2;
        *pbVar2 = bVar12 + 1;
        if ((byte)(bVar12 + 1) == 5) {
          thunk_FUN_005252c0(0xb2);
        }
        if ((short)*(&this_00->field_02E2)[uVar15] <= (short)(ushort)*pbVar2) {
          *pbVar2 = *pbVar2 - 1;
          *local_10 = 2;
          if (this_00->field_023F == (CASE_4|CASE_2)) {
            if ((char)local_c == '\0') {
              cVar13 = this_00->field_02ED;
            }
            else {
              cVar13 = this_00->field_02EC;
            }
            if (cVar13 != '\0') {
              this_00->field_023F = CASE_4;
              thunk_FUN_005252c0(CASE_B0);
            }
          }
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar12 = -((char)local_c != '\0');
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_20 = (undefined1 *)(CONCAT31(local_20._1_3_,bVar12) & 0xffffff08);
        if ((bVar12 & 8) < 0xb) {
          uVar7 = bVar12 & 8;
          uVar15 = (&this_00->field_0148)[uVar7];
          goto joined_r0x004f81d1;
        }
      }
      break;
    case 5:
      if (0x41 < (uint)(this_00->field_0038 - (&this_00->field_02EE)[uVar15])) {
        pbVar2 = &this_00->field_02EA + uVar15;
        (&this_00->field_02EE)[uVar15] = this_00->field_0038;
        bVar12 = *pbVar2;
        *pbVar2 = bVar12 + 1;
        local_18 = &this_00->field_02E2 + uVar15;
        if ((short)**local_18 <= (short)(ushort)(byte)(bVar12 + 1)) {
          puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                             (DAT_00806794,CASE_1F,*(char **)(&this_00->field_0x2f6 + uVar15 * 4),6,
                              0,1,0,(undefined4 *)0x0);
          *local_18 = puVar9;
          *local_10 = 1;
          *pbVar2 = 0;
        }
        thunk_FUN_004f1890(this_00,(byte)local_c);
        bVar12 = -((char)local_c != '\0');
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_14 = (undefined1 *)(CONCAT31(local_14._1_3_,bVar12) & 0xffffff08);
        if ((bVar12 & 8) < 0xb) {
          uVar7 = bVar12 & 8;
          uVar15 = (&this_00->field_0148)[uVar7];
          goto joined_r0x004f81d1;
        }
      }
    }
    bVar12 = (char)local_c + 1;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_c = CONCAT31(local_c._1_3_,bVar12);
  } while (bVar12 < 2);
  local_5 = 0;
  if (g_nWidth_00806730 == 0x400) {
    local_5 = 2;
  }
  else if (g_nWidth_00806730 == 0x500) {
    local_5 = 6;
  }
  local_10 = (undefined1 *)((uint)local_10 & 0xffffff00);
  if (local_5 != 0) {
    local_18 = (ushort **)&this_00->field_0D3B;
    local_20 = &this_00->field_0xc87;
    local_1c = &this_00->field_0D53;
    do {
      local_c = local_c & 0xffffff00;
      local_14 = local_20;
      piVar14 = local_1c;
      ppuVar16 = local_18;
      do {
        bVar12 = *(byte *)(ppuVar16 + 3);
        if (bVar12 == 1) {
          if ((DAT_0080731a != 0) && (0x41 < (uint)(this_00->field_0038 - *piVar14))) {
            *piVar14 = this_00->field_0038;
            bVar12 = *(byte *)ppuVar16;
            *(byte *)ppuVar16 = bVar12 + 1;
            if (*(short *)piVar14[-0x12] <= (short)(ushort)(byte)(bVar12 + 1)) {
              *(byte *)ppuVar16 = 0;
            }
            thunk_FUN_004f1c80(this_00,local_c,(uint)local_10);
            bVar12 = ((char)local_c == '\0') + 9;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_30 = CONCAT31(local_30._1_3_,bVar12);
            if (bVar12 < 0xb) {
              uVar7 = (uint)bVar12;
              uVar15 = (&this_00->field_0148)[uVar7];
              goto joined_r0x004f861b;
            }
          }
        }
        else if (bVar12 == 3) {
          if (0x31 < (uint)(this_00->field_0038 - *piVar14)) {
            *piVar14 = this_00->field_0038;
            if (*(byte *)ppuVar16 == 0) {
              puVar19 = (undefined4 *)0x0;
              iVar11 = 0;
              iVar5 = 1;
              bVar12 = 0;
              uVar15 = 6;
              pcVar8 = (char *)thunk_FUN_004f1d20(local_14);
              puVar9 = Library::Ourlib::MFRLOAD::mfRLoad
                                 (DAT_00806794,CASE_1F,pcVar8,uVar15,bVar12,iVar5,iVar11,puVar19);
              piVar14[-0x12] = (int)puVar9;
              *(byte *)(ppuVar16 + 3) = 1;
              *(byte *)ppuVar16 = 0;
            }
            else {
              *(byte *)ppuVar16 = *(byte *)ppuVar16 - 1;
            }
            thunk_FUN_004f1c80(this_00,local_c,(uint)local_10);
            bVar12 = ((char)local_c == '\0') + 9;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_2c = CONCAT31(local_2c._1_3_,bVar12);
            if (bVar12 < 0xb) {
              uVar7 = (uint)bVar12;
              uVar15 = (&this_00->field_0148)[uVar7];
              goto joined_r0x004f861b;
            }
          }
        }
        else if ((bVar12 == 4) && (0x31 < (uint)(this_00->field_0038 - *piVar14))) {
          *piVar14 = this_00->field_0038;
          bVar12 = *(byte *)ppuVar16;
          bVar4 = bVar12 + 1;
          *(byte *)ppuVar16 = bVar4;
          if (*(short *)piVar14[-0x12] <= (short)(ushort)bVar4) {
            *(byte *)ppuVar16 = bVar12;
            *(byte *)(ppuVar16 + 3) = 2;
          }
          thunk_FUN_004f1c80(this_00,local_c,(uint)local_10);
          bVar12 = ((char)local_c == '\0') + 9;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_28 = CONCAT31(local_28._1_3_,bVar12);
          if (bVar12 < 0xb) {
            uVar7 = (uint)bVar12;
            uVar15 = (&this_00->field_0148)[uVar7];
joined_r0x004f861b:
            if (-1 < (int)uVar15) {
              Library::DKW::DDX::FUN_006b3640
                        ((int *)PTR_008075a8,uVar15,0xffffffff,(&this_00->field_003C)[uVar7],
                         (&this_00->field_0094)[uVar7]);
            }
          }
        }
        bVar12 = (char)local_c + 1;
        local_14 = local_14 + 0x42;
        piVar14 = piVar14 + 6;
        ppuVar16 = (ushort **)((int)ppuVar16 + 6);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = CONCAT31(local_c._1_3_,bVar12);
      } while (bVar12 < 2);
      bVar12 = (char)local_10 + 1;
      local_18 = (ushort **)((int)local_18 + 1);
      local_1c = local_1c + 1;
      local_20 = local_20 + 0xb;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_10 = (undefined1 *)CONCAT31(local_10._1_3_,bVar12);
    } while (bVar12 < local_5);
  }
  iVar5 = FUN_006b33f0((int)PTR_008075a8,this_00->field_017C);
  if (iVar5 == 0) {
    g_currentExceptionFrame = local_74.previous;
    return;
  }
  switch(this_00->field_0260) {
  case CASE_1:
    if ((DAT_0080731a == 0) || ((uint)(this_00->field_0038 - this_00->field_0261) < 0x42))
    goto cf_switch_join_004F88ED;
    this_00->field_0261 = this_00->field_0038;
    bVar12 = this_00->field_025F + 1;
    this_00->field_025F = bVar12;
    if ((short)(ushort)bVar12 < *this_00->field_025B) goto LAB_004f88e6;
    break;
  default:
    goto cf_switch_join_004F88ED;
  case CASE_3:
    if (0x31 < (uint)(this_00->field_0038 - this_00->field_0261)) {
      this_00->field_0261 = this_00->field_0038;
      if (this_00->field_025F == '\0') {
        if (this_00->field_025B != (short *)0x0) {
          FUN_0070b600((int *)&this_00->field_025B);
        }
        psVar10 = (short *)0x1;
        bVar4 = 0;
        bVar12 = 6;
        pcVar8 = (char *)thunk_FUN_005260b0(0,0,0);
        psVar10 = Library::Ourlib::MFIMG::mfQmtLoad(DAT_00806790,pcVar8,bVar12,bVar4,psVar10);
        this_00->field_025B = psVar10;
        this_00->field_0260 = CASE_1;
        this_00->field_025F = 0;
      }
      else {
        this_00->field_025F = this_00->field_025F + -1;
      }
      thunk_FUN_004f1950((AnonShape_004F1950_0C1561B7 *)this_00);
      if (this_00->field_025F == '\x05') {
        thunk_FUN_005252c0(0xb1);
      }
    }
    goto cf_switch_join_004F88ED;
  case CASE_4:
    if ((uint)(this_00->field_0038 - this_00->field_0261) < 0x32) goto cf_switch_join_004F88ED;
    this_00->field_0261 = this_00->field_0038;
    cVar13 = this_00->field_025F + '\x01';
    this_00->field_025F = cVar13;
    if (cVar13 == '\x05') {
      thunk_FUN_005252c0(0xb2);
    }
    if (*this_00->field_025B <= (short)(ushort)(byte)this_00->field_025F) {
      this_00->field_0260 = 2;
      this_00->field_025F = this_00->field_025F - 1;
    }
    goto LAB_004f88e6;
  case CASE_5:
    if ((uint)(this_00->field_0038 - this_00->field_0261) < 0x42) goto cf_switch_join_004F88ED;
    ppsVar1 = &this_00->field_025B;
    bVar12 = this_00->field_025F + 1;
    this_00->field_0261 = this_00->field_0038;
    this_00->field_025F = bVar12;
    if ((short)(ushort)bVar12 < **ppsVar1) goto LAB_004f88e6;
    if (*ppsVar1 != (short *)0x0) {
      FUN_0070b600((int *)ppsVar1);
    }
    pcVar18 = DAT_00806790;
    if (this_00->field_0285 == '\0') {
      psVar10 = Library::Ourlib::MFIMG::mfQmtLoad
                          (g_cMf32_00806758,&this_00->field_0x265,6,0,(short *)0x0);
      *ppsVar1 = psVar10;
      pcVar18 = g_cMf32_00806798;
      if (psVar10 == (short *)0x0) goto LAB_004f8860;
    }
    else {
LAB_004f8860:
      psVar10 = Library::Ourlib::MFIMG::mfQmtLoad(pcVar18,&this_00->field_0x265,6,0,(short *)0x0);
      *ppsVar1 = psVar10;
    }
    if (*ppsVar1 == (short *)0x0) {
      psVar10 = (short *)0x1;
      bVar4 = 0;
      bVar12 = 6;
      pcVar8 = (char *)thunk_FUN_005260b0(0,0,0);
      psVar10 = Library::Ourlib::MFIMG::mfQmtLoad(DAT_00806790,pcVar8,bVar12,bVar4,psVar10);
      *ppsVar1 = psVar10;
    }
    this_00->field_0260 = CASE_1;
  }
  this_00->field_025F = 0;
LAB_004f88e6:
  thunk_FUN_004f1950((AnonShape_004F1950_0C1561B7 *)this_00);
cf_switch_join_004F88ED:
  if (((this_00->field_01D8 != 0) && ((PTR_00802a38->field_00E4 & 1) != 0)) &&
     (iVar5 = *(int *)(this_00->field_01D8 + 4), iVar5 < this_00->field_01DC + -2)) {
    FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_01B4,0,100,5,0x226,0x55,0);
    iVar11 = FUN_007140e0((void *)this_00->field_01D8,1,'\0');
    if (iVar11 != 0) {
      FUN_006b5440((int)this_00->field_01B4,0,100,5,iVar11,0,0xff);
    }
    FUN_006b35d0((int *)PTR_008075a8,this_00->field_017C);
    if (this_00->field_01E0 != '\0') {
      uVar15 = iVar5 + 1U & 0x80000001;
      bVar17 = uVar15 == 0;
      if ((int)uVar15 < 0) {
        bVar17 = (uVar15 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar17) {
        thunk_FUN_005252c0(0x1e);
      }
    }
  }
  g_currentExceptionFrame = local_74.previous;
  return;
}

