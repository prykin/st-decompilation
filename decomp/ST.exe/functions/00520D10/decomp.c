#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::PaintInfoc */

void __thiscall InfocPanelTy::PaintInfoc(InfocPanelTy *this)

{
  char cVar1;
  InfocPanelTy *this_00;
  byte bVar3;
  int iVar4;
  BITMAPINFO *pBVar4;
  int iVar11;
  ushort uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
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
    iVar11 = ReportDebugMessage("E:\\__titans\\Andrey\\infocen.cpp",0xde,0,iVar4,"%s"
                                ,"InfocPanelTy::PaintInfoc");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\infocen.cpp",0xde);
    return;
  }
  if (local_c->field_03D4 == 0xff) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(ushort *)(&local_c->field_0x234 + (uint)(byte)local_c->field_03D4 * 0x10);
  }
  PaintInfocObj(local_c,uVar5,local_c->field_02A4,0x58,0x29);
  if (this_00->field_03D4 == 0xff) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(ushort *)(&this_00->field_0x238 + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  PaintInfocObj(this_00,uVar5,this_00->field_02A8,0x8a,0x29);
  if (this_00->field_03D4 == 0xff) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(ushort *)(&this_00->field_0x236 + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  PaintInfocObj(this_00,uVar5,this_00->field_02A6,0xbc,0x29);
  if (this_00->field_03D4 == 0xff) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(ushort *)(&this_00->field_0x23a + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  PaintInfocObj(this_00,uVar5,this_00->field_02AA,0xf0,0x29);
  if (this_00->field_03D4 == 0xff) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(ushort *)(&this_00->field_0x23c + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  PaintInfocObj(this_00,uVar5,this_00->field_02AC,0x58,0x50);
  if (this_00->field_03D4 == 0xff) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(ushort *)(&this_00->field_0x240 + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  PaintInfocObj(this_00,uVar5,this_00->field_02B0,0x8a,0x50);
  if (this_00->field_03D4 == 0xff) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(ushort *)(&this_00->field_0x23e + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  PaintInfocObj(this_00,uVar5,this_00->field_02AE,0xbc,0x50);
  if (this_00->field_03D4 == 0xff) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(ushort *)(&this_00->field_0x242 + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  PaintInfocObj(this_00,uVar5,this_00->field_02B2,0xf0,0x50);
  if ((this_00->field_03D4 == 0xff) ||
     (9999 < *(int *)(&this_00->field_0x1b4 + (uint)(byte)this_00->field_03D4 * 0x10))) {
    uVar8 = 0xffffffff;
    pcVar7 = &DAT_007c3ff4;
    do {
      pcVar10 = pcVar7;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar7 = pcVar10 + -uVar8;
    pcVar10 = &this_00->field_018D;
    memmove(pcVar10, pcVar7, uVar8); /* compiler REP MOVS byte copy */
    uVar6 = 0;
  }
  else {
    wsprintfA(&this_00->field_018D,"%4d",
              *(int *)(&this_00->field_0x1b4 + (uint)(byte)this_00->field_03D4 * 0x10));
  }
  ccFntTy::SetSurf(this_00->field_03D5,this_00->field_0068,0,0x54,0x71,0x23,0xc);
  ccFntTy::WrStr(this_00->field_03D5,&this_00->field_018D,-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
  if ((this_00->field_03D4 == 0xff) ||
     (999999 < *(int *)(&this_00->field_0x1b8 + (uint)(byte)this_00->field_03D4 * 0x10))) {
    uVar8 = 0xffffffff;
    pcVar7 = &DAT_007c3fec;
    do {
      pcVar10 = pcVar7;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar7 = pcVar10 + -uVar8;
    pcVar10 = &this_00->field_018D;
    memmove(pcVar10, pcVar7, uVar8); /* compiler REP MOVS byte copy */
    uVar6 = 0;
  }
  else {
    wsprintfA(&this_00->field_018D,"%6d",
              *(int *)(&this_00->field_0x1b8 + (uint)(byte)this_00->field_03D4 * 0x10));
  }
  ccFntTy::SetSurf(this_00->field_03D5,this_00->field_0068,0,0x78,0x71,0x17,0xc);
  ccFntTy::WrStr(this_00->field_03D5,&this_00->field_018D,-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 4);
  if ((this_00->field_03D4 == 0xff) ||
     (999999 < *(int *)(&this_00->field_0x1bc + (uint)(byte)this_00->field_03D4 * 0x10))) {
    uVar8 = 0xffffffff;
    pcVar7 = &DAT_007c3fec;
    do {
      pcVar10 = pcVar7;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar10 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar10;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar7 = pcVar10 + -uVar8;
    pcVar10 = &this_00->field_018D;
    memmove(pcVar10, pcVar7, uVar8); /* compiler REP MOVS byte copy */
  }
  else {
    wsprintfA(&this_00->field_018D,"%6d",
              *(int *)(&this_00->field_0x1bc + (uint)(byte)this_00->field_03D4 * 0x10));
  }
  ccFntTy::SetSurf(this_00->field_03D5,this_00->field_0068,0,0xa2,0x71,0x23,0xc);
  ccFntTy::WrStr(this_00->field_03D5,&this_00->field_018D,-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 5);
  if (this_00->field_03D4 == 0xff) {
    iVar9 = 0xce;
    iVar12 = 0x14;
    do {
      pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,0);
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,iVar9,0x71,'\x01',(byte *)pBVar4);
      iVar9 = iVar9 + 4;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  else {
    local_8 = 1;
    iVar9 = *(int *)(&this_00->field_0x1c0 + (uint)(byte)this_00->field_03D4 * 0x10);
    if (iVar9 < 1) {
      if (0 < iVar9 + 0x14) {
        uVar8 = 1;
        do {
          pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,0);
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,uVar8 * 4 + 0xca,0x71,'\x01',
                 (byte *)pBVar4);
          local_8 = local_8 + 1;
          uVar8 = (uint)local_8;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        } while ((int)uVar8 <=
                 *(int *)(&this_00->field_0x1c0 + (uint)(byte)this_00->field_03D4 * 0x10) + 0x14);
      }
      bVar3 = (&this_00->field_0x1c0)[(uint)(byte)this_00->field_03D4 * 0x10] + 0x15;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_8 = CONCAT31(uStack_7,bVar3);
      if (bVar3 < 0x15) {
        iVar12 = 0x15 - (uint)bVar3;
        iVar9 = (uint)bVar3 * 4 + 0xca;
        do {
          pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,4);
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,iVar9,0x71,'\x01',
                 (byte *)pBVar4);
          iVar9 = iVar9 + 4;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
    }
    else {
      if (0 < iVar9) {
        uVar8 = 1;
        do {
          pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,
                                (-(uint)(DAT_0080874e != '\x03') & 2) + 1);
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,uVar8 * 4 + 0xca,0x71,'\x01',
                 (byte *)pBVar4);
          local_8 = local_8 + 1;
          uVar8 = (uint)local_8;
        } while ((int)uVar8 <=
                 *(int *)(&this_00->field_0x1c0 + (uint)(byte)this_00->field_03D4 * 0x10));
      }
      bVar3 = (&this_00->field_0x1c0)[(uint)(byte)this_00->field_03D4 * 0x10] + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_8 = CONCAT31(uStack_7,bVar3);
      if (bVar3 < 0x15) {
        iVar12 = 0x15 - (uint)bVar3;
        iVar9 = (uint)bVar3 * 4 + 0xca;
        do {
          pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,0);
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,iVar9,0x71,'\x01',
                 (byte *)pBVar4);
          iVar9 = iVar9 + 4;
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

