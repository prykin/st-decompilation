#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tradecen.cpp
   TradePanelTy::PaintPanel */

void __thiscall TradePanelTy::PaintPanel(TradePanelTy *this)

{
  TradePanelTy *this_00;
  int iVar2;
  BITMAPINFO *pBVar2;
  char *resourceString;
  int iVar5;
  uint uVar3;
  int iVar4;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  InternalExceptionFrame local_54;
  TradePanelTy *local_10;
  int local_c;
  int local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar2 == 0) {
    Library::DKW::WGR::FUN_006b55f0
              ((RecoveredSourceFamily_dibcopy *)local_10->field_0068,0,0x1f,0x31,
               local_10->field_0185,0,0x1f,0x31,0x44,0x39);
    bVar8 = 0x3a;
    iVar6 = 0;
    pBVar2 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01D1,
                          (uint)(byte)this_00->field_01D0);
    FUN_006b5440((ushort *)this_00->field_0068,0,0x22,0x38,pBVar2,iVar6,bVar8);
    Library::DKW::WGR::FUN_006b55f0
              ((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,0xa6,0x31,this_00->field_0185,
               0,0xa6,0x31,0x77,0x26);
    if (this_00->field_01BB == '\0') {
      bVar8 = 0x3a;
      iVar6 = 0;
      pBVar2 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01D5,
                            (-(uint)(DAT_0080874e != '\x03') & 0xfffffffe) + 4);
      FUN_006b5440((ushort *)this_00->field_0068,0,0xd9,0x34,pBVar2,iVar6,bVar8);
      if (DAT_0080874e != '\x03') {
        iVar4 = 0;
        iVar6 = 0xb5;
        local_8 = 0xa9;
        local_c = 2;
        do {
          if (*(ushort *)(&this_00->field_0x1ab + (iVar4 + (uint)(byte)this_00->field_01D0 * 2) * 4)
              != 0) {
            pBVar2 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01D9,
                                  *(ushort *)
                                   (&this_00->field_0x1ab +
                                   (iVar4 + (uint)(byte)this_00->field_01D0 * 2) * 4) - 1);
            DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,local_8,0x39,'\x01',
                   (byte *)pBVar2);
          }
          wsprintfA(&this_00->field_018D,"%d:1",
                    (uint)*(ushort *)
                           (&this_00->field_0x1ad +
                           (iVar4 + (uint)(byte)this_00->field_01D0 * 2) * 4));
          ccFntTy::SetSurf(this_00->field_0189,this_00->field_0068,0,iVar6,0x36,0x22,0xc);
          ccFntTy::WrStr(this_00->field_0189,&this_00->field_018D,-1,-1,1);
          iVar4 = iVar4 + 1;
          local_8 = local_8 + 0x68;
          iVar6 = iVar6 + 0x39;
          local_c = local_c + -1;
        } while (local_c != 0);
      }
    }
    else {
      ccFntTy::SetSurf(this_00->field_0189,this_00->field_0068,0,0xa6,0x31,0x77,0x26);
      iVar9 = -1;
      iVar7 = -1;
      uVar3 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5;
      iVar4 = -1;
      iVar6 = -2;
      resourceString = LoadResourceString(0x4e5b,g_hINSTANCE_00807618);
      ccFntTy::WrTxt(this_00->field_0189,resourceString,iVar6,iVar4,uVar3,iVar7,iVar9);
    }
    PaintIndicators(this_00);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\tradecen.cpp",0xf5,0,iVar2,"%s",
                             "TradePanelTy::PaintPanel");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Andrey\\tradecen.cpp",0xf5);
  return;
}

