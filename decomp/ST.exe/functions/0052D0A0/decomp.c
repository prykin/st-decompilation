#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::OutProc */

void __thiscall
PopUpTy::OutProc(PopUpTy *this,int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                undefined4 param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  byte bVar2;
  int errorCode;
  int iVar3;
  byte bVar4;
  InternalExceptionFrame local_54;
  AnonShape_0052D0A0_90C708AF *local_10;
  uint local_c;
  uint local_8;

  if (DAT_00807342 != 0) {
    local_10 = (AnonShape_0052D0A0_90C708AF *)param_8;
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    errorCode = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    if (errorCode == 0) {
      if ((local_10 != nullptr) &&
         (local_10->field_0090 != nullptr)) {
        bVar4 = 0xff;
        bVar2 = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = CONCAT31(local_c._1_3_,0xff);
        local_8 = local_8 & 0xffffff00;
        do {
          if (local_10->entries[local_8 & 0xff] == param_2) {
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_c = CONCAT31(local_c._1_3_,bVar2);
            bVar4 = bVar2;
            break;
          }
          bVar2 = bVar2 + 1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = CONCAT31(local_8._1_3_,bVar2);
        } while (bVar2 < 0xf);
        if (bVar4 != 0xff) {
          Library::DKW::DDX::FUN_006b4680
                    (param_1,param_4,param_5,local_10->field_0090,nullptr,0,
                     (local_c & 0xff) * 0x13,local_10->entries[local_c & 0xff],0x13,0x1000089);
        }
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar3 = ReportDebugMessage("E:\\__titans\\Andrey\\mpopup.cpp",0x22,0,errorCode,
                               "%s","PopUpTy::OutProc");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\mpopup.cpp",0x22);
  }
  return;
}

