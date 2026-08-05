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
  byte *pbVar5;
  ushort uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
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
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(&local_c->field_0x234 + (uint)(byte)local_c->field_03D4 * 0x10);
  }
  PaintInfocObj(local_c,uVar6,local_c->field_02A4,0x58,0x29);
  if (this_00->field_03D4 == 0xff) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(&this_00->field_0x238 + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  PaintInfocObj(this_00,uVar6,this_00->field_02A8,0x8a,0x29);
  if (this_00->field_03D4 == 0xff) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(&this_00->field_0x236 + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  PaintInfocObj(this_00,uVar6,this_00->field_02A6,0xbc,0x29);
  if (this_00->field_03D4 == 0xff) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(&this_00->field_0x23a + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  PaintInfocObj(this_00,uVar6,this_00->field_02AA,0xf0,0x29);
  if (this_00->field_03D4 == 0xff) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(&this_00->field_0x23c + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  PaintInfocObj(this_00,uVar6,this_00->field_02AC,0x58,0x50);
  if (this_00->field_03D4 == 0xff) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(&this_00->field_0x240 + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  PaintInfocObj(this_00,uVar6,this_00->field_02B0,0x8a,0x50);
  if (this_00->field_03D4 == 0xff) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(&this_00->field_0x23e + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  PaintInfocObj(this_00,uVar6,this_00->field_02AE,0xbc,0x50);
  if (this_00->field_03D4 == 0xff) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(ushort *)(&this_00->field_0x242 + (uint)(byte)this_00->field_03D4 * 0x10);
  }
  PaintInfocObj(this_00,uVar6,this_00->field_02B2,0xf0,0x50);
  if ((this_00->field_03D4 == 0xff) ||
     (9999 < *(int *)(&this_00->field_0x1b4 + (uint)(byte)this_00->field_03D4 * 0x10))) {
    uVar9 = 0xffffffff;
    pcVar8 = &DAT_007c3ff4;
    do {
      pcVar10 = pcVar8;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar8 = pcVar10 + -uVar9;
    pcVar10 = &this_00->field_018D;
    memmove(pcVar10, pcVar8, uVar9); /* compiler REP MOVS byte copy */
    uVar7 = 0;
  }
  else {
    wsprintfA(&this_00->field_018D,"%4d",
              *(int *)(&this_00->field_0x1b4 + (uint)(byte)this_00->field_03D4 * 0x10));
  }
  ccFntTy::SetSurf(this_00->field_03D5,this_00->field_0068,0,0x54,0x71,0x23,0xc);
  ccFntTy::WrStr(this_00->field_03D5,(uint *)&this_00->field_018D,-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffb) + 6);
  if ((this_00->field_03D4 == 0xff) ||
     (999999 < *(int *)(&this_00->field_0x1b8 + (uint)(byte)this_00->field_03D4 * 0x10))) {
    uVar9 = 0xffffffff;
    pcVar8 = &DAT_007c3fec;
    do {
      pcVar10 = pcVar8;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar8 = pcVar10 + -uVar9;
    pcVar10 = &this_00->field_018D;
    memmove(pcVar10, pcVar8, uVar9); /* compiler REP MOVS byte copy */
    uVar7 = 0;
  }
  else {
    wsprintfA(&this_00->field_018D,"%6d",
              *(int *)(&this_00->field_0x1b8 + (uint)(byte)this_00->field_03D4 * 0x10));
  }
  ccFntTy::SetSurf(this_00->field_03D5,this_00->field_0068,0,0x78,0x71,0x17,0xc);
  ccFntTy::WrStr(this_00->field_03D5,(uint *)&this_00->field_018D,-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 4);
  if ((this_00->field_03D4 == 0xff) ||
     (999999 < *(int *)(&this_00->field_0x1bc + (uint)(byte)this_00->field_03D4 * 0x10))) {
    uVar9 = 0xffffffff;
    pcVar8 = &DAT_007c3fec;
    do {
      pcVar10 = pcVar8;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar10 = pcVar8 + 1;
      cVar1 = *pcVar8;
      pcVar8 = pcVar10;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar8 = pcVar10 + -uVar9;
    pcVar10 = &this_00->field_018D;
    memmove(pcVar10, pcVar8, uVar9); /* compiler REP MOVS byte copy */
  }
  else {
    wsprintfA(&this_00->field_018D,"%6d",
              *(int *)(&this_00->field_0x1bc + (uint)(byte)this_00->field_03D4 * 0x10));
  }
  ccFntTy::SetSurf(this_00->field_03D5,this_00->field_0068,0,0xa2,0x71,0x23,0xc);
  ccFntTy::WrStr(this_00->field_03D5,(uint *)&this_00->field_018D,-1,-1,
                 (-(uint)(DAT_0080874e != '\x03') & 0xfffffffd) + 5);
  if (this_00->field_03D4 == 0xff) {
    iVar4 = 0xce;
    iVar11 = 0x14;
    do {
      pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,0);
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,iVar4,0x71,'\x01',pbVar5);
      iVar4 = iVar4 + 4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  else {
    local_8 = 1;
    iVar4 = *(int *)(&this_00->field_0x1c0 + (uint)(byte)this_00->field_03D4 * 0x10);
    if (iVar4 < 1) {
      if (0 < iVar4 + 0x14) {
        uVar9 = 1;
        do {
          pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,0);
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,uVar9 * 4 + 0xca,0x71,'\x01',
                 pbVar5);
          local_8 = local_8 + 1;
          uVar9 = (uint)local_8;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        } while ((int)uVar9 <=
                 *(int *)(&this_00->field_0x1c0 + (uint)(byte)this_00->field_03D4 * 0x10) + 0x14);
      }
      bVar3 = (&this_00->field_0x1c0)[(uint)(byte)this_00->field_03D4 * 0x10] + 0x15;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_8 = CONCAT31(uStack_7,bVar3);
      if (bVar3 < 0x15) {
        iVar11 = 0x15 - (uint)bVar3;
        iVar4 = (uint)bVar3 * 4 + 0xca;
        do {
          pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,4);
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,iVar4,0x71,'\x01',pbVar5);
          iVar4 = iVar4 + 4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
    }
    else {
      if (0 < iVar4) {
        uVar9 = 1;
        do {
          pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,
                                        (-(uint)(DAT_0080874e != '\x03') & 2) + 1);
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,uVar9 * 4 + 0xca,0x71,'\x01',
                 pbVar5);
          local_8 = local_8 + 1;
          uVar9 = (uint)local_8;
        } while ((int)uVar9 <=
                 *(int *)(&this_00->field_0x1c0 + (uint)(byte)this_00->field_03D4 * 0x10));
      }
      bVar3 = (&this_00->field_0x1c0)[(uint)(byte)this_00->field_03D4 * 0x10] + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_8 = CONCAT31(uStack_7,bVar3);
      if (bVar3 < 0x15) {
        iVar11 = 0x15 - (uint)bVar3;
        iVar4 = (uint)bVar3 * 4 + 0xca;
        do {
          pbVar5 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03CC,0);
          DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,iVar4,0x71,'\x01',pbVar5);
          iVar4 = iVar4 + 4;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

