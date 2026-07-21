#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::PaintInfoc */

void __thiscall InfocPanelTy::PaintInfoc(InfocPanelTy *this)

{
  char cVar1;
  code *pcVar2;
  InfocPanelTy *this_00;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  ushort uVar7;
  uint uVar8;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  InternalExceptionFrame local_50;
  InfocPanelTy *local_c;
  byte local_8;
  undefined3 uStack_7;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Andrey_infocen_cpp_007c3eb0,0xde,0,iVar4,&DAT_007a4ccc
                                ,s_InfocPanelTy__PaintInfoc_007c3fcc);
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_infocen_cpp_007c3eb0,0xde);
    return;
  }
  if (local_c->field_03D4 == 0xff) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ushort *)(&local_c->field_0x234 + (uint)(byte)local_c->field_03D4 * 0x10);
  }
  PaintInfocObj(local_c,uVar7,(uint)(ushort)local_c->field_02A4,0x58,0x29);
  if (this_00->field_03D4 == 0xff) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ushort *)(&this_00->field_0x238 + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar5 = PaintInfocObj(this_00,uVar7,CONCAT22(extraout_var,this_00->field_02A8),0x8a,0x29);
  bVar3 = this_00->field_03D4;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  iVar4 = CONCAT31((int3)((uint)uVar5 >> 8),bVar3);
  if (bVar3 == 0xff) {
    uVar7 = 0;
  }
  else {
    iVar4 = (uint)bVar3 * 0x10;
    uVar7 = *(ushort *)(&this_00->field_0x236 + iVar4);
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  PaintInfocObj(this_00,uVar7,CONCAT22((short)((uint)iVar4 >> 0x10),this_00->field_02A6),0xbc,0x29);
  if (this_00->field_03D4 == 0xff) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ushort *)(&this_00->field_0x23a + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar5 = PaintInfocObj(this_00,uVar7,CONCAT22(extraout_var_00,this_00->field_02AA),0xf0,0x29);
  bVar3 = this_00->field_03D4;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  iVar4 = CONCAT31((int3)((uint)uVar5 >> 8),bVar3);
  if (bVar3 == 0xff) {
    uVar7 = 0;
  }
  else {
    iVar4 = (uint)bVar3 * 0x10;
    uVar7 = *(ushort *)(&this_00->field_0x23c + iVar4);
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  PaintInfocObj(this_00,uVar7,CONCAT22((short)((uint)iVar4 >> 0x10),this_00->field_02AC),0x58,0x50);
  if (this_00->field_03D4 == 0xff) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ushort *)(&this_00->field_0x240 + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uVar5 = PaintInfocObj(this_00,uVar7,CONCAT22(extraout_var_01,this_00->field_02B0),0x8a,0x50);
  bVar3 = this_00->field_03D4;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  iVar4 = CONCAT31((int3)((uint)uVar5 >> 8),bVar3);
  if (bVar3 == 0xff) {
    uVar7 = 0;
  }
  else {
    iVar4 = (uint)bVar3 * 0x10;
    uVar7 = *(ushort *)(&this_00->field_0x23e + iVar4);
  }
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  PaintInfocObj(this_00,uVar7,CONCAT22((short)((uint)iVar4 >> 0x10),this_00->field_02AE),0xbc,0x50);
  if (this_00->field_03D4 == 0xff) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(ushort *)(&this_00->field_0x242 + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  PaintInfocObj(this_00,uVar7,CONCAT22(extraout_var_02,this_00->field_02B2),0xf0,0x50);
  if ((this_00->field_03D4 == 0xff) ||
     (9999 < *(int *)(&this_00->field_0x1b4 + (uint)(byte)this_00->field_03D4 * 0x10))) {
    uVar10 = 0xffffffff;
    pcVar9 = &DAT_007c3ff4;
    do {
      pcVar11 = pcVar9;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar9 = pcVar11 + -uVar10;
    pcVar11 = &this_00->field_0x18d;
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  else {
    wsprintfA(&this_00->field_0x18d,&DAT_007c1ae4,
              *(int *)(&this_00->field_0x1b4 + (uint)(byte)this_00->field_03D4 * 0x10));
  }
  ccFntTy::SetSurf(this_00->field_03D5,this_00->field_0068,0,0x54,0x71,0x23,0xc);
  ccFntTy::WrStr(this_00->field_03D5,(uint *)&this_00->field_0x18d,-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
  if ((this_00->field_03D4 == 0xff) ||
     (999999 < *(int *)(&this_00->field_0x1b8 + (uint)(byte)this_00->field_03D4 * 0x10))) {
    uVar10 = 0xffffffff;
    pcVar9 = &DAT_007c3fec;
    do {
      pcVar11 = pcVar9;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar9 = pcVar11 + -uVar10;
    pcVar11 = &this_00->field_0x18d;
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  else {
    wsprintfA(&this_00->field_0x18d,&DAT_007c28fc,
              *(int *)(&this_00->field_0x1b8 + (uint)(byte)this_00->field_03D4 * 0x10));
  }
  ccFntTy::SetSurf(this_00->field_03D5,this_00->field_0068,0,0x78,0x71,0x17,0xc);
  ccFntTy::WrStr(this_00->field_03D5,(uint *)&this_00->field_0x18d,-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 4);
  if ((this_00->field_03D4 == 0xff) ||
     (999999 < *(int *)(&this_00->field_0x1bc + (uint)(byte)this_00->field_03D4 * 0x10))) {
    uVar10 = 0xffffffff;
    pcVar9 = &DAT_007c3fec;
    do {
      pcVar11 = pcVar9;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar9 = pcVar11 + -uVar10;
    pcVar11 = &this_00->field_0x18d;
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
      *pcVar11 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar11 = pcVar11 + 1;
    }
  }
  else {
    wsprintfA(&this_00->field_0x18d,&DAT_007c28fc,
              *(int *)(&this_00->field_0x1bc + (uint)(byte)this_00->field_03D4 * 0x10));
  }
  ccFntTy::SetSurf(this_00->field_03D5,this_00->field_0068,0,0xa2,0x71,0x23,0xc);
  ccFntTy::WrStr(this_00->field_03D5,(uint *)&this_00->field_0x18d,-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 5);
  if (this_00->field_03D4 == 0xff) {
    iVar4 = 0xce;
    iVar12 = 0x14;
    do {
      pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,0);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,iVar4,0x71,'\x01',pbVar6);
      iVar4 = iVar4 + 4;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  else {
    local_8 = 1;
    iVar4 = *(int *)(&this_00->field_0x1c0 + (uint)(byte)this_00->field_03D4 * 0x10);
    if (iVar4 < 1) {
      if (0 < iVar4 + 0x14) {
        uVar10 = 1;
        do {
          pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,0)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,uVar10 * 4 + 0xca,0x71,'\x01',
                 pbVar6);
          local_8 = local_8 + 1;
          uVar10 = (uint)local_8;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        } while ((int)uVar10 <=
                 *(int *)(&this_00->field_0x1c0 + (uint)(byte)this_00->field_03D4 * 0x10) + 0x14);
      }
      bVar3 = (&this_00->field_0x1c0)[(uint)(byte)this_00->field_03D4 * 0x10] + 0x15;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_8 = CONCAT31(uStack_7,bVar3);
      if (bVar3 < 0x15) {
        iVar12 = 0x15 - (uint)bVar3;
        iVar4 = (uint)bVar3 * 4 + 0xca;
        do {
          pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,4)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,iVar4,0x71,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
    }
    else {
      if (0 < iVar4) {
        uVar10 = 1;
        do {
          pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,
                                        (-(uint)(DAT_0080874e != '\x03') & 2) + 1);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,uVar10 * 4 + 0xca,0x71,'\x01',
                 pbVar6);
          local_8 = local_8 + 1;
          uVar10 = (uint)local_8;
        } while ((int)uVar10 <=
                 *(int *)(&this_00->field_0x1c0 + (uint)(byte)this_00->field_03D4 * 0x10));
      }
      bVar3 = (&this_00->field_0x1c0)[(uint)(byte)this_00->field_03D4 * 0x10] + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_8 = CONCAT31(uStack_7,bVar3);
      if (bVar3 < 0x15) {
        iVar12 = 0x15 - (uint)bVar3;
        iVar4 = (uint)bVar3 * 4 + 0xca;
        do {
          pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,0)
          ;
          DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,iVar4,0x71,'\x01',pbVar6);
          iVar4 = iVar4 + 4;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

